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


# Write GLDL src
gldl_c = open( "gldl.c", "w" )

gldl_c.write( r'''
#include <stdio.h>
#include <string.h>

#include "gldl.h"

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
FILE *trace = NULL;

static struct {
    GLint major,
          minor;
} gl_version;

static int GetGLVersion() {
    gldlGetIntegerv_impl( GL_MAJOR_VERSION, &gl_version.major );
    gldlGetIntegerv_impl( GL_MINOR_VERSION, &gl_version.minor );

    if( gl_version.major < 3 ) return -1;

    return 0;
}

int gldlIsSupported( unsigned int major, unsigned int minor ) {
    if( major < 3 ) return 0;
    if( major > gl_version.major ) return 1;

    return ( major == gl_version.major && minor >= gl_version.minor );
}

static void LoadProcs();

int gldlInit() {
    OpenLib();
    LoadProcs();
    CloseLib();

    trace = fopen( "trace.log", "w" );

    return GetGLVersion();
}

// ###################################################################
// INTERNAL

void gldlDebugFunc( ) {
    char c = 0;
    
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

    # Write core
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

   
    # Return the value of GL impl if needed
    if( return_types[i] != "void" ) :
        gldl_c.write( "\treturn " )
    else :
        gldl_c.write( "\t" )

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
