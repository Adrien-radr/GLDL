#!/usr/bin/env python
import re

# Open GL3 header
gl3_src = open( "GL3/gl3.h", "r" )

# Get all GL procedures
return_types = []
names = []
parameters = []
parameters_n = []

procs_re = re.compile( r"^GLAPI.+APIENTRY gl.+(.*);$" )

for line in gl3_src :
    match_line = procs_re.match( line )
    if( match_line ) :
        line = match_line.group(0)[6:]
        line = line.replace( " APIENTRY ", " " )

        name_pos = line.find( "gl" )
        return_types.append( line[:name_pos-1] )

        name, sig = line[name_pos:].split( None, 1 )
        names.append( name );

        # Check if void parameter
        if( sig[1:-2] == "void" ) :
            parameters.append( "" )
            parameters_n.append( 0 )
        else :
            parameters.append( sig[1:-2] )
            parameters_n.append( len(sig[1:-2].split( "," ) ) )


# Write GLDL header
gldl_h = open( "gldl.h", "w" )

gldl_h.write( r'''
#ifndef __GLDL_H
#define __GLDL_H

// GL Core Profile Header
#include "GL3/gl3.h"

// Prevents from loading basic gl.h
#ifndef __gl_h_
#define __gl_h_
#endif

// C Library
#ifdef __cplusplus
extern "C" {
#endif

// GLDL API functions
int gldlInit();
void gldlTerminate();
int gldlIsSupported( unsigned int major, unsigned int minor );


// Debug version of GL functions
// Parameters :
//      - GL original parameters
//      - String representing their names (equal number)
//      - String representing the file where the call has been recorded
//      - Int representing the line where the call has been recorded
''')

# Write GLDL modified(for debug) GL funcs
for i in range( len(names) ) :
    if( parameters_n[i] == 0 ) :
        gldl_h.write( return_types[i] + " gldl" + names[i][2:] + " ( const char *, int );\n" )
    else :
        gldl_h.write( return_types[i] + " gldl" + names[i][2:] + " ( " + parameters[i] + ", " )
        for j in range( parameters_n[i] - 1 ) :
            gldl_h.write( "const char *, " )
        gldl_h.write( "const char *, const char *, int );\n" )

gldl_h.write( "\n\n" )

# Write GL macro functions that the user will call
for i in range( len(names) ) :
    if( parameters_n[i] == 0 ) :
        gldl_h.write( "#define " + names[i] + "( )  gldl" + names[i][2:] + "( __FILE__, __LINE__ )\n" )
    else :
        gldl_h.write( "#define " + names[i] + "( " )
        for j in range( parameters_n[i] - 1 ) :
            gldl_h.write( "arg" + str(j) + ", " )
        gldl_h.write( "arg" + str(parameters_n[i]-1) + " )  gldl" + names[i][2:] + "( " )
        for j in range( parameters_n[i] - 1 ) :
            gldl_h.write( "(arg" + str(j) + "), " )
        gldl_h.write( "(arg" + str(parameters_n[i]-1) + "), " )
        for j in range( parameters_n[i] - 1 ) :
            gldl_h.write( "#arg" + str(j) + ", " )
        gldl_h.write( "#arg" + str(parameters_n[i]-1) + ", __FILE__, __LINE__ )\n" )


gldl_h.write( r'''
#ifdef __cplusplus
}
#endif

#endif //__GLDL_H
''')


# Write GLDL function array header
gldl_fh = open( "gldl_funcarray.h", "w" )

gldl_fh.write( r'''
#ifndef __GLDL_FUNCARRAY_H
#define __GLDL_FUNCARRAY_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Sorted array of all GL functions
char* gl_functions[''' + str(len(names)) + '''];

void InitFunctionArray();
void DestroyFunctionArray();

#endif //__GLDL_FUNCARRAY_H
''')


# Write GLDL function array src
gldl_fc = open( "gldl_funcarray.c", "w" )

# Get alphabetically sorted name array (for faster search in C program
sorted_names = sorted( names )

gldl_fc.write( r'''
// This contains the functions needed to fill and destroy the gl_functions array
// defined in gldl_funcarray.h. The indices in the array are used in gldl.c for debug

#include "gldl_funcarray.h"

void DestroyFunctionArray() {
    for( int i = 0; i < ''' + str(len(names)) + '''; ++i )
        free( gl_functions[i] );
}

void InitFunctionArray() {
''')

cpt = 0
for name in sorted_names :
    gldl_fc.write( "\tgl_functions[" + str(cpt) + "] = calloc( 1, " + str(len(name)+1) + " );\n\tstrcpy( gl_functions[" + str(cpt) + "], \"" + name + "\" );\n" )
    cpt = cpt + 1

gldl_fc.write('''}

''')

# Write GLDL src
gldl_c = open( "gldl.c", "w" )

gldl_c.write( r'''
#include "gldl.h"
#include "gldl_funcarray.h"

//////////////////////////////////////////
// Jump to line 575 for GLDL API functions
//////////////////////////////////////////


// GL FUNCTION POINTERS (GL implementation)
''')

# Write all GL function pointers

for i in range( len(names) ) :
    gldl_c.write( "PFN" + names[i].upper() + "PROC gldl" + names[i][2:] + "_impl;\n" )

gldl_c.write( r'''

// WINDOWS
#if defined(_WIN32) || defined(WIN32)
#   define WIN32_LEAN_AND_MEAN
#   include <windows.h>

#warning GLDL_WIN32
// MAC
#elif defined(__APPLE__) || defined(__APPLE_CC__)

// UNIX
#else
#include <dlfcn.h>
#include <GL/glx.h>
#include <signal.h>

#warning GLDL_UNIX
    // OpenGL shared library handle
    static void *libgl;

    /// Load dynamic library libGL.so and store its handle
    static void OpenLib() {
        libgl = dlopen( "libGL.so.1", RTLD_GLOBAL | RTLD_LAZY );
    }

    /// Close the libGL handle
    static void CloseLib() {
        dlclose( libgl );
    }

    /// Returns the GL Procedure corresponding to the given procedure name
    static void *GetProc( const char *pProcName ) {
        void *proc = NULL;

        proc = glXGetProcAddress( (const GLubyte*)pProcName );
        if( !proc )
            proc = dlsym( libgl, pProcName );

        return proc;
    }
#endif



// ###################################################################
// API FUNCTIONS

FILE *trace = NULL;         // Trace log file
int break_functions[512];   // Breakpoints storing array

static struct {
    GLint major,
          minor;
} gl_version;



static int GetGLVersion();
static int DebugTest( int func_index );
static void DebugFunction();
static void LoadProcs();


// Public functions

int gldlInit() {
    OpenLib();
    LoadProcs();
    CloseLib();

    trace = fopen( "trace.log", "w" );

    InitFunctionArray();

    memset( break_functions, -1, 512 * sizeof(int) );
    DebugFunction();

    return GetGLVersion();
}

void gldlTerminate() {
    fclose( trace );
    DestroyFunctionArray();
}

int gldlIsSupported( unsigned int major, unsigned int minor ) {
    if( major < 3 ) return 0;
    if( major > gl_version.major ) return 1;

    return ( major == gl_version.major && minor >= gl_version.minor );
}


// Private functions

// Store the used GL version in the gl_version struct
static int GetGLVersion() {
    gldlGetIntegerv_impl( GL_MAJOR_VERSION, &gl_version.major );
    gldlGetIntegerv_impl( GL_MINOR_VERSION, &gl_version.minor );

    if( gl_version.major < 3 ) return -1;

    return 0;
}

// Check if a breakpoint is set on the given function
static int DebugTest( int func_index ) {
    for( int i = 0; i < 512; ++i ) {
        if( -1 == break_functions[i] ) 
            break;
        if( func_index == break_functions[i] ) 
            return i;
    }
    return -1;
}

// Interactive Debug session when a breakpoint arose or during initialization
static void DebugFunction() {
    char line[128];
    line[0] = 0;
    char *cmd = line;
    char *pline, *param;

    while( 1 ) {
        printf( "> " );
    
        // get line from user and split it in 'cmd params'
        gets( line );
        pline = strchr( line, ' ' );

        // parameter(s) found
        if( pline ) {
            pline[0] = 0;
            param = pline + 1;

            // check for break demand on GL function
            if( !strcmp( cmd, "b" ) || !strcmp( cmd, "break" ) ) {
                // retrieve function name index
                int index = -1;
                for( int i = 0; i < ''' + str(len(names)) + '''; ++i ) {
                    int cmp = strcmp( param, gl_functions[i] );

                    if( !cmp ) {
                        index = i;
                        break;
                    }
                    else if( cmp < 0 ) {
                        printf( "%s is not a valid GL function!\\n", param );
                        break;
                    }
                }

                if( index >= 0 )
                    // insert function name index in next free spot
                    for( int i = 0; i < 512; ++i )
                        if( -1 == break_functions[i] || -2 == break_functions[i] ) {
                            break_functions[i] = index;
                            printf( "Breakpoint %d, %s()\\n", i, param );
                            break;
                        }
            }

            // check for breakpoint deletion demand
            else if( !strcmp( cmd, "d" ) || !strcmp( cmd, "delete" ) ) {
                int index = atoi( param );
                if( index >= 512  || ( !index && strcmp( param, "0" ) ) || -1 == break_functions[index] ) {
                    printf( "Breakpoint %s does not exist\\n", param );
                } else {
                    break_functions[index] = -2;
                    printf( "Breakpoint %d deleted\\n", index );
                }
            }
        
        // no parameters, simple commands
        } else {
            // continue program execution
            if( !strcmp( cmd, "c" ) || !strcmp( cmd, "continue" ) )
                break;

            // check for breakpoints listing
            else if( !strcmp( cmd, "l" ) || !strcmp( cmd, "list" ) ) {
                for( int i = 0; i < 512; ++i ) {
                    if( -1 == break_functions[i] ) break;
                    if( -2 == break_functions[i] ) continue;
                    printf( "Breakpoint %d on function %s()\\n", i, gl_functions[break_functions[i]] );
                }
            }

            // check for ALL breakpoints deletion
            else if( !strcmp( cmd, "d" ) || !strcmp( cmd, "delete" ) ) {
                // get confirmation
                char str[4];
                char c;

                while( 1 ) {
                    printf( "Delete all breakpoints? (y or n) " );
                    gets( str );
                    sscanf( str, "%c", &c );

                    if( 'n' == c )
                        break;
                    if( 'y' == c ) {
                        for( int i = 0; i < 512; ++i ) {
                            if( -1 == break_functions[i] ) break;
                            break_functions[i] = -1;
                        }
                        break;
                    }
                }
            }
        }



        param = pline = NULL; 
    }
}

''')


gldl_c.write( r'''
// Load all GL procedures implementation
static void LoadProcs() {
''')

for i in range( len(names) ) :
    gldl_c.write( "\tgldl" + names[i][2:] + "_impl = (PFN" + names[i].upper() + "PROC) GetProc( \"" + names[i] + "\" );\n" )


gldl_c.write( r'''
}




// ###################################################################
// GLDL Debug Functions
''')

# Write all GLDL functions
for i in range( len(names) ) :
    # get function param names
    param_names = parameters[i].split( "," )
    for j in range( len(param_names) ) :
        if( param_names[j] != "" ) :
            param_names[j] = param_names[j].split()[-1]
            param_names[j] = param_names[j].replace( "*", "" )



    # Write signature
    if( parameters_n[i] == 0 ) :
        gldl_c.write( return_types[i] + " gldl" + names[i][2:] + " ( const char *file, int line ) {\n" )
    else :
        gldl_c.write( return_types[i] + " gldl" + names[i][2:] + " ( " + parameters[i] + ", " )
        for j in range( parameters_n[i] - 1 ) :
            gldl_c.write( "const char *arg" + str(j) + ", " )
        gldl_c.write( "const char *arg" + str(parameters_n[i]-1) + ", const char *file, int line ) {\n" )

    # Write trace
    gldl_c.write( "\tfprintf( trace, \"call<%s,%d>: " + names[i] + "(" )
    if( parameters_n[i] == 0 ) :
        gldl_c.write( ");\\n\", file, line );\n" )
    else :
        for j in range( parameters_n[i] - 1 ) :
            gldl_c.write( " %s," )
        gldl_c.write( " %s );\\n\", file, line, " )
        for j in range( parameters_n[i] - 1 ) :
            gldl_c.write( "arg" + str(j) + ", " )
        gldl_c.write( " arg" + str(parameters_n[i] - 1) + " );\n" )

    # Write interactive debug
    gldl_c.write( r'''
    int breakpoint = DebugTest( ''' + str(sorted_names.index( names[i] )) + ''' );
    if( breakpoint >= 0 ) {
        printf( "Breakpoint %d on ''' + names[i] + '''( ''')
        
    # print all args and their values
    if parameters_n[i] == 0 :
        gldl_c.write( ") at %s:%d\\n\", breakpoint, file, line );\n" )
    else :
        for j in range( parameters_n[i] - 1 ) :
            gldl_c.write( param_names[j] + "=%s, " )
        gldl_c.write( param_names[-1] + "=%s ) at %s:%d\\n\", breakpoint, " )

        for j in range( parameters_n[i] - 1 ) :
            gldl_c.write( "arg" + str(j) + ", " )
        gldl_c.write( "arg" + str( parameters_n[i]-1 ) + ", file, line );\n" )

    gldl_c.write( "\t\tDebugFunction();\n\t}\n\t" )

   
    # Return the value of GL impl if needed
    if( return_types[i] != "void" ) :
        gldl_c.write( "return " )

    gldl_c.write( "gldl" + names[i][2:] + "_impl( " )
    for j in range( parameters_n[i] - 1 ) :
        gldl_c.write( param_names[j] + ", " )

    gldl_c.write( param_names[parameters_n[i] - 1] + " );\n}\n\n" )
    


#void gldlClear( GLbitfield mask, const char * mask_str, const char* file, int line ) {

#    fprintf( trace, "call<%s,%d>: glClear( %s );\n", file, line, mask_str );
#    fflush( trace );
#    printf( "call<%s,%d>: glClear( %s )\n", file, line, mask_str );

#    gldlDebugFunc();

#    gldlClear_impl( mask );
#}
