#!/usr/bin/env python
import re
import urllib2
import os

print "GLDL gen script 0.5"

# Make folder hierarchy
#   GL/         --  GL3/    --  gl3.h
#   gldl.py         gldl.h
#                   gldl.c
if not os.path.exists( "GL/GL3" ) :
    os.makedirs( "GL/GL3" )


# Download header from opengl.org
if not os.path.exists( "GL/GL3/gl3.h" ) :
    print "Downloading gl3.h from opengl.org to GL/GL3..."
    gl3_url = urllib2.urlopen( "http://www.opengl.org/registry/api/gl3.h" )
    gl3_src = open( "GL/GL3/gl3.h", "wb" )
    gl3_src.writelines( gl3_url.readlines() )
    gl3_src.close()
else :
    print "OpenGL header gl3.h exists in GL/GL3. Reusing..."


print "Parsing OpenGL header..."

# Open GL3 header
gl3_src = open( "GL/GL3/gl3.h", "r" )

# Get all GL procedures
return_types = []
names = []
parameters = []
parameters_n = []
max_name_len = 0

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

        if( len(name) > max_name_len ) :
            max_name_len = len(name)

        # Check if void parameter
        if( sig[1:-2] == "void" ) :
            parameters.append( "" )
            parameters_n.append( 0 )
        else :
            parameters.append( sig[1:-2] )
            parameters_n.append( len(sig[1:-2].split( "," ) ) )


# Get alphabetically sorted name array (for faster search in C program)
sorted_names = sorted( names )




print "Generating GL/gldl.h header file..."

# Write GLDL header
gldl_h = open( "GL/gldl.h", "wb" )

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
void gldlBeginTrace( unsigned int trace_n );
void gldlEndTrace( unsigned int trace_n );


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






print "Generating GL/gldl.c source file..."

# Write GLDL src
gldl_c = open( "GL/gldl.c", "wb" )

gldl_c.write( r'''
#include "gldl.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//////////////////////////////////////////
// Jump to line 1145 for GLDL API functions
//////////////////////////////////////////


// GL FUNCTION POINTERS (GL implementation)
''')

# Write all GL function pointers

for i in range( len(names) ) :
    gldl_c.write( "PFN" + names[i].upper() + "PROC gldl" + names[i][2:] + "_impl;\n" )

gldl_c.write( r'''
// GL function number
#define GLDL_FUNC_N ''' + str(len(names)) + '''

// String array of all GL function names
char *gl_functions[GLDL_FUNC_N] = { 
''')

for name in sorted_names :
    gldl_c.write( "\t\"" + name + "\",\n" ) 

gldl_c.write( r'''};



// WINDOWS
#if defined(_WIN32) || defined(WIN32)
#   define WIN32_LEAN_AND_MEAN
#   include <windows.h>

#warning GLDL_WIN32
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

void ShowTexture() {
    Display *dsp = glXGetCurrentDisplay();
    GLXContext ctx = glXGetCurrentContext();
    GLXDrawable drawable = glXGetCurrentDrawable();

    int success = glXMakeCurrent( dsp, None, NULL );
    printf( "No context = %s\n", success > 0 ? "success" : "failure" );


    // CREATE NEW DRAWABLE TO SHOW TEXTURE

    success = glXMakeCurrent( dsp, drawable, ctx );
    printf( "GLFW context = %s\n", success > 0 ? "success" : "failure" );
}
#endif



// ###################################################################
// API FUNCTIONS

static int  gldl_init = 0;                  // Assure that gldl has been init

static int  break_functions[GLDL_FUNC_N];   // Breakpoints storing array
static int  break_next = 0;                 // Break on next function ?
static char debug_break[10];                // Used to display break cause

// GL function call traces
// First trace is the init trace (trace until first glClear())
// Five traces after that are custom traces (activated by gldlBeginTrace(n))
#define TRACE_N 6
static struct s_ct {
    FILE        *f;
    int         started;
} gldl_traces[TRACE_N];

// GL Buffers
struct gldl_buffer {
    GLint       id;
    GLuint      size;
    GLfloat     *data;

    int         next_free;
};

static struct {
    struct gldl_buffer  *arr;
    unsigned int        size;
    unsigned int        count;
    unsigned int        first_free;

    int                 bound_array_b;
    int                 bound_elem_array_b;
} gldl_buffers;

static struct {
    GLint       major,
                minor;
} gl_version;


static void InitBufferArray();
static void DeleteBufferArray();
static void AddBuffers( GLsizei n, GLuint *ids );
static void DeleteBuffers( GLsizei n, const GLuint *ids );
static void BindBuffer( GLuint id, int elem_array );
static void FillBuffer( const void* data, GLsizei size, unsigned int offset, int elem_array );
static void PrintBufferData( int id, unsigned int type_size, unsigned int elem_size );
static void PrintBuffers();

static int  GetGLVersion();
static void DebugTest( int func_index );
static void DebugFunction();
static void LoadProcs();


// Public functions

int gldlInit() {
    OpenLib();
    LoadProcs();
    CloseLib();

    gldl_init = GetGLVersion();

    if( gldl_init ) {
        memset( gldl_traces, 0, TRACE_N * sizeof(struct s_ct) );
        gldl_traces[0].f = fopen( "trace_init.log", "w" );
        gldl_traces[0].started = 1;

        InitBufferArray();

        memset( break_functions, -1, GLDL_FUNC_N * sizeof(int) );
        DebugFunction();
    }
    

    return gldl_init;
}

void gldlTerminate() {
    int i;

    DeleteBufferArray();

    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started ) 
            fclose( gldl_traces[i].f );
}

int gldlIsSupported( unsigned int major, unsigned int minor ) {
    if( major < 3 ) return 0;
    if( major > gl_version.major ) return 1;

    return ( major == gl_version.major && minor >= gl_version.minor );
}

void gldlBeginTrace( unsigned int trace_n ) {
    if( !trace_n || trace_n >= TRACE_N ) return;

    if( !gldl_traces[trace_n].f ) {
        char filename[16];
        sprintf( filename, "trace%d.log", trace_n );

        gldl_traces[trace_n].f = fopen( filename, "w" );
    }

    gldl_traces[trace_n].started = 1;
}

void gldlEndTrace( unsigned int trace_n ) {
    if( !trace_n || trace_n >= TRACE_N ) return;

    gldl_traces[trace_n].started = 0;
}

// Private functions

// Initialize gldl_buffers
static void InitBufferArray() {
    // initialize with 20 elem at first
    gldl_buffers.size = 20;
    gldl_buffers.count = 0;
    gldl_buffers.first_free = 0;
    gldl_buffers.bound_array_b = -1;
    gldl_buffers.bound_elem_array_b = -1;

    gldl_buffers.arr = calloc( gldl_buffers.size, sizeof(struct gldl_buffer) );
    
    int i;
    for( i = 0; i < gldl_buffers.size; ++i ) {
        gldl_buffers.arr[i].id = -1;
        gldl_buffers.arr[i].size = 0;
        gldl_buffers.arr[i].data = NULL;
        gldl_buffers.arr[i].next_free = i+1;
    }
    gldl_buffers.arr[gldl_buffers.size-1].next_free = -1;
}

// Free gldl_buffers
static void DeleteBufferArray() {
    int i;
    for( i = 0; i < gldl_buffers.size; ++i ) 
        if( gldl_buffers.arr[i].data )
            free( gldl_buffers.arr[i].data );

    free( gldl_buffers.arr );
}

static void AddBuffers( GLsizei n, GLuint *ids ) {
    int i, new_index;
    int index = gldl_buffers.first_free;
    int need_realloc = 0;

    // realloc array if full (with 1.7x policy)
    for( new_index = n-1; new_index >= 0; --new_index ) {
        if( -1 == index ) {
            need_realloc = 1;
            break;
        }

        index = gldl_buffers.arr[index].next_free;
    }

    index = gldl_buffers.first_free;

    if( need_realloc ) {
        gldl_buffers.arr[gldl_buffers.size-1].next_free = gldl_buffers.size;

        gldl_buffers.size *= 1.7;
        gldl_buffers.arr = realloc( gldl_buffers.arr, sizeof(struct gldl_buffer) * gldl_buffers.size );

        for( i = gldl_buffers.count; i < gldl_buffers.size; ++i ) {
            gldl_buffers.arr[i].id = -1;
            gldl_buffers.arr[i].size = 0;
            gldl_buffers.arr[i].data = NULL;
            gldl_buffers.arr[i].next_free = i+1;
        }
        gldl_buffers.arr[gldl_buffers.size-1].next_free = -1;

        // change first_free only if new_index is far
        if( new_index == 0 )
            gldl_buffers.first_free = index = gldl_buffers.count;
    }

    // add new buffers
    for( i = 0; i < n; ++i ) {
        gldl_buffers.arr[index].id = ids[i];
        gldl_buffers.count++;

        gldl_buffers.first_free = index = gldl_buffers.arr[index].next_free;
    }
}

static void DeleteBuffers( GLsizei n, const GLuint *ids ) {
    int cpt;
    int i;
    int tmp;

    for( cpt = 0; cpt < n; ++cpt ) {
        for( i = 0; i < gldl_buffers.size; ++i ) {
            // if nothing more to see, return
            if( gldl_buffers.arr[i].id == -1 )
                return;

            if( gldl_buffers.arr[i].id == ids[cpt] ) {
                // delete buffer memory
                gldl_buffers.arr[i].id = 0;
                free( gldl_buffers.arr[i].data );
                gldl_buffers.arr[i].data = NULL;
                gldl_buffers.arr[i].size = 0;

                // reorganise array linking
                tmp = gldl_buffers.first_free;
                gldl_buffers.first_free = gldl_buffers.arr[i].next_free;
                gldl_buffers.arr[i].next_free = tmp;

                // unbind this buffer if bound
                if( gldl_buffers.bound_array_b == ids[cpt] )
                    gldl_buffers.bound_array_b = -1;
                if( gldl_buffers.bound_elem_array_b == ids[cpt] )
                    gldl_buffers.bound_elem_array_b = -1;

                gldl_buffers.count--;

                break;
            }
        }
    }
}

// Bind the given Buffer ID. if elem_array is true, bind it to elem_array_b
static void BindBuffer( GLuint id, int elem_array ) {
    // search for id in buffer array
    int i;

    if( 0 == id ) {
        if( elem_array )
            gldl_buffers.bound_elem_array_b = 0;
        else
            gldl_buffers.bound_array_b = 0;

        return;
    }

    for( i = 0; i < gldl_buffers.size; ++i ) {
        if( gldl_buffers.arr[i].id == -1 )
            break;

        if( gldl_buffers.arr[i].id == id ) {
            if( elem_array )
                gldl_buffers.bound_elem_array_b = id;
            else
                gldl_buffers.bound_array_b = id;
        }
    }
}

static void FillBuffer( const void* data, GLsizei size, unsigned int offset, int elem_array ) {
    int i;
    int index = elem_array ? gldl_buffers.bound_elem_array_b : gldl_buffers.bound_array_b;

    
    if( index > 0 ) {
        // search for buffer to fill
        for( i = 0; i < gldl_buffers.size; ++i ) {
            if( gldl_buffers.arr[i].id == -1 )
                break;

            if( gldl_buffers.arr[i].id == index ) {
                // if offset is given and with size it differ from already allocated space, error (not handled)
                if( offset && ( size + offset ) > gldl_buffers.arr[i].size ) 
                    return;

                // alloc data array if not yet
                if( !gldl_buffers.arr[i].data ) 
                    gldl_buffers.arr[i].data = calloc( 1, size );

                // realloc if not big enough
                else if( size > gldl_buffers.arr[i].size )
                    gldl_buffers.arr[i].data = realloc( gldl_buffers.arr[i].data, size );

                // copy data
                memcpy( &gldl_buffers.arr[i].data[offset/4], (float*)data, size );

                if( !offset )
                    gldl_buffers.arr[i].size = size;
 
                break;
            }
        }
    }
}

static void PrintBufferData( int id, unsigned int type_size, unsigned int elem_size ) {
    int i, j, k;
    int array_size;

    if( id >= 1 && gldl_buffers.count ) {
        for( i = 0; i < gldl_buffers.size; ++i ) {
            // if nothing more to see, break
            if( gldl_buffers.arr[i].id == -1 )
                break;

            if( gldl_buffers.arr[i].id == id ) {
                printf( "Buffer %d:\n{ ", id );
                if( gldl_buffers.arr[i].data ) {
                    array_size = gldl_buffers.arr[i].size / elem_size;

                    if( 1 == type_size ) {
                        for( j = 0; j < array_size - 1; ++j )
                            printf( "%.2f, ", gldl_buffers.arr[i].data[j] );
                        printf( "%.2f }\n", gldl_buffers.arr[i].data[j] );
                    } else {
                        // check if type_size and elem_size works with the size of the array
                        if( array_size % type_size != 0 || type_size > array_size || ( type_size == array_size && elem_size > 1 ) ) {
                            printf( "err }\nError : given elem_size and type_size are not compatible with buffer size.\n" );
                            return;
                        }

                        for( j = 0; j < array_size - type_size; j += type_size ) {
                            printf( " { " );
                            for( k = 0; k < type_size - 1; ++k )
                                printf( "%.2f, ", gldl_buffers.arr[i].data[j+k] );
                            printf( "%.2f }, ", gldl_buffers.arr[i].data[j+k] );
                        }
                        printf( " { " );
                        for( k = 0; k < type_size - 1; ++k )
                            printf( "%.2f, ", gldl_buffers.arr[i].data[j+k] );
                        printf( "%.2f } }\n", gldl_buffers.arr[i].data[j+k] );
                    }
                } else
                    printf( " }\n" );
                return;
            }
        }
    }

    printf( "This buffer does not exist.\n" );
}

static void PrintBuffers() {
    int buf_cpt = 0;
    int i;

    for( i = 0; i < gldl_buffers.size; ++i ) {
        if( gldl_buffers.arr[i].id == -1 )
            break;

        if( gldl_buffers.arr[i].id ) {
            if( !buf_cpt )
                printf( "List of existing buffers :\n" );
            printf( "%d\n", gldl_buffers.arr[i].id );
            buf_cpt++;
        }
    }

    if( !buf_cpt )
        printf( "No GL buffers.\n" );
}

// Store the used GL version in the gl_version struct
// Returns 1 if Core Profile loaded correctly
static int GetGLVersion() {
    gldlGetIntegerv_impl( GL_MAJOR_VERSION, &gl_version.major );
    gldlGetIntegerv_impl( GL_MINOR_VERSION, &gl_version.minor );

    if( gl_version.major < 3 ) return 0;

    return 1;
}

// Check if a breakpoint is set on the given function
static void DebugTest( int func_index ) {
    int i;

    debug_break[0] = 0;

    if( break_next ) {
        strcpy( debug_break, "(next)" );
        break_next = 0;
        return;
    }

    for( i = 0; i < GLDL_FUNC_N; ++i ) {
        if( -1 == break_functions[i] ) 
            return;
        if( func_index == break_functions[i] ) {
            sprintf( debug_break, "%d", i );
            return;
        }
    }
}


// Interactive Debug session when a breakpoint arose or during initialization
static void DebugFunction() {
    char line[128];
    static char last_cmd[32] = "", last_params[32][3] = { "", "", "" };//last_param[32] = "", last_param2[32] = "";
    char cmd[32] = "", params[32][3] = { "", "", "" }; // = "", param2[32] = "";
    int scan_ret;
    int nomatch = 0;
    int i;

    while( 1 ) {
        printf( "> " );
    
        // get line from user and split it in 'cmd params[0] params[1] params[2]'
        gets( line );
        scan_ret = sscanf( line, "%s %s %s %s", cmd, params[0], params[1], params[2] );


        // nothing on line, use last working command
        if( -1 == scan_ret ) {
            if( last_cmd[0] ) {
                scan_ret = 1;
                strcpy( cmd, last_cmd );

                for( i = 0; i < 3; ++i ) 
                    if( last_params[i][0] ) {
                        scan_ret++;
                        strcpy( params[i], last_params[i] );
                    } else
                        params[i][0] = 0;
            } else
                continue;
        }

        // make history
        strcpy( last_cmd, cmd );
        for( i = 0; i < 3; ++i )
            strcpy( last_params[i], params[i] );

        // continue program execution
        if( !strcmp( cmd, "c" ) || !strcmp( cmd, "continue" ) )
            break;

        // break on next GL func
        else if( !strcmp( cmd, "n" ) || !strcmp( cmd, "next" ) ) {
            break_next = 1;
            break;
        }

        // check for breakpoints listing
        else if( !strcmp( cmd, "l" ) || !strcmp( cmd, "list" ) ) {
            int found_one = 0;
            int i;
            for( i = 0; i < GLDL_FUNC_N; ++i ) {
                if( -1 == break_functions[i] ) break;
                if( -2 == break_functions[i] ) continue;
                printf( "Breakpoint %d on function %s()\n", i, gl_functions[break_functions[i]] );
                found_one = 1;
            }

            if( !found_one )
                printf( "No breakpoints set.\n" );
        }

        // check for buffers listing
        else if( !strcmp( cmd, "bl" ) || !strcmp( cmd, "buflist" ) ) {
            PrintBuffers();
        }

        // check for break demand on GL function
        else if( !strcmp( cmd, "b" ) || !strcmp( cmd, "break" ) ) {
            // retrieve function name index
            int index = -1;

            // check for parameter
            if( scan_ret != 2 ) {
                printf( "Break usage : [b]reak function_name.\n" );
                continue;
            }

            int i;
            for( i = 0; i < ''' + str(len(names)) + '''; ++i ) {
                int cmp = strcmp( params[0], gl_functions[i] );

                if( !cmp ) {
                    index = i;
                    break;
                }
                else if( cmp < 0 ) {
                    printf( "%s is not a valid GL function!\\n", params[0] );
                    break;
                }
            }

            if( index >= 0 ) {
                int i;
                // insert function name index in next free spot
                for( i = 0; i < GLDL_FUNC_N; ++i )
                    if( 0 > break_functions[i] ) {
                        break_functions[i] = index;
                        printf( "Breakpoint %d, %s()\\n", i, params[0] );
                        break;
                    }
            }
        }

        // check for breakpoints deletion
        else if( !strcmp( cmd, "d" ) || !strcmp( cmd, "delete" ) ) {
            // get confirmation
            char str[4];
            char c;

            // if one param, delete wanted breakpoint
            if( 2 == scan_ret ) {
                int index = atoi( params[0] );
                if( index < 0 || index >= GLDL_FUNC_N  || ( !index && strcmp( params[0], "0" ) ) || -1 == break_functions[index] ) {
                    printf( "Breakpoint %s does not exist\\n", params[0] );
                } else {
                    break_functions[index] = -2;
                    printf( "Breakpoint %d deleted\\n", index );
                }
                continue;
            }
            
            else if( 1 == scan_ret ) {
                // no param, ask for global deletion
                while( 1 ) {
                    printf( "Delete all breakpoints? (y or n) " );
                    gets( str );
                    sscanf( str, "%c", &c );

                    if( 'n' == c )
                        break;
                    if( 'y' == c ) {
                        int i;
                        for( i = 0; i < GLDL_FUNC_N; ++i ) {
                            if( -1 == break_functions[i] ) break;
                            break_functions[i] = -1;
                        }
                        break;
                    }
                }
                continue;
            } else {
                printf( "Delete usage : [d]elete [breakpoint_id].\\n" );
            }
        }

        // print buffer data
        else if( !strcmp( cmd, "bp" ) || !strcmp( cmd, "bufferprint" ) ) {
            // check for param
            if( scan_ret < 2 ) {
                printf( "Bufferprint usage : [b]uffer[p]rint buffer_id [type_size [elem_size]].\\n" );
                continue;
            }

            int index = atoi( params[0] );
            int elem_size = 4;
            int type_size = 1;

            if( scan_ret >= 3 ) {
                type_size = atoi( params[1] );
                
                if( scan_ret > 3 )
                    elem_size = atoi( params[2] );
            }

            PrintBufferData( index, type_size, elem_size );
        }

        // open glfw
        else if( !strcmp( cmd, "glfw" ) ) {
            ShowTexture();
        }

        // no match, show help
        else 
            nomatch = 1;

        
        // show error if invalid command
        if( nomatch ) {
            printf( "Invalid command \\"%s\\". Try \\"help\\"\\n", cmd );
            nomatch = 0;
        }
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

def IsNumericParam( param ) :
    return param == "GLboolean" or param == "GLbyte" or param == "GLshort" or param == "GLint" or param == "GLsizei" or param == "GLubyte" or param == "GLushort" or param == "GLuint" or param == "GLhalf"

def IsNumericPtr( param ) :
    return param == "GLsizeiptr" or param == "GLintptr"

# Write all GLDL functions
for i in range( len(names) ) :
    # get function param names
    param_names = parameters[i].split( "," )
    for j in range( len(param_names) ) :
        if( param_names[j] != "" ) :
            param_names[j] = param_names[j].split()[-1]
            param_names[j] = param_names[j].replace( "*", "" )

    # get function param types
    param_types = parameters[i].split( ", " )
    types = []
    for j in range( len(param_types) ) :
        spl = param_types[j].split( " " )
        if len(spl[0]) > 0 :
            if spl[-1][0] == "*" :
                spl[-2] = spl[-2] + "*"
            type_name = spl[0]
            for type_n in spl[1:-1] :
                type_name = type_name + " " + type_n
            types.append( type_name )
        else :
            types.append( "" )
        
    

    # Write signature
    if( parameters_n[i] == 0 ) :
        gldl_c.write( return_types[i] + " gldl" + names[i][2:] + " ( const char *file, int line ) {\n" )
    else :
        gldl_c.write( return_types[i] + " gldl" + names[i][2:] + " ( " + parameters[i] + ", " )
        for j in range( parameters_n[i] - 1 ) :
            gldl_c.write( "const char *arg" + str(j) + ", " )
        gldl_c.write( "const char *arg" + str(parameters_n[i]-1) + ", const char *file, int line ) {\n" )

    # If glClear, add init_trace ending
    if names[i] == "glClear" :
        gldl_c.write( r'''    if( gldl_traces[0].started ) {
        gldl_traces[0].started = 0;
        fclose( gldl_traces[0].f );
    }

    ''' )


    # printf-like formats for function params
    formats = []
    values = []

    # Write traces
    gldl_c.write( r'''    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: ''' + names[i] + '''(''' )
    if( parameters_n[i] == 0 ) :
        gldl_c.write( ");\\n\", file, line );\n" )
    else :
        # get format to print params
        for j in range( parameters_n[i] ) :
            if IsNumericParam( types[j] ) : 
                formats.append( "d" )
                values.append( param_names[j] )
            elif IsNumericPtr( types[j] ) :
                formats.append( "d" )
                values.append( "(int)" + param_names[j] )
            else :
                formats.append( "s" )
                values.append( "arg" + str(j) )
        print names[i]
        print types
        print formats
        print values

        # print formats
        for j in range( parameters_n[i] - 1 ) :
            gldl_c.write( " %" + formats[j] + "," )
        gldl_c.write( " %" + formats[-1] + " );\\n\", file, line, " )

        # print values
        for j in range( parameters_n[i] - 1 ) :
            gldl_c.write( values[j] + ", " )
        gldl_c.write( " " + values[-1] + " );\n" )

    # Write interactive debug
    gldl_c.write( r'''
    DebugTest( ''' + str(sorted_names.index( names[i] )) + ''' );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on ''' + names[i] + '''( ''')
        
    # print all args and their values
    if parameters_n[i] == 0 :
        gldl_c.write( ") at %s:%d\\n\", debug_break, file, line );\n" )
    else :
        # print formats
        for j in range( parameters_n[i] - 1 ) :
            gldl_c.write( param_names[j] + "=%" + formats[j] + ", " )
        gldl_c.write( param_names[-1] + "=%" + formats[-1] + " ) at %s:%d\\n\", debug_break, " )

        # print values
        for j in range( parameters_n[i] - 1 ) :
            gldl_c.write( values[j] + ", ")
        gldl_c.write( values[-1] + ", file, line );" )


    gldl_c.write( r'''
        DebugFunction();
    }
    ''' )

   
    # Return the value of GL impl if needed
    if( return_types[i] != "void" ) :
        gldl_c.write( "return " )

    gldl_c.write( "gldl" + names[i][2:] + "_impl( " )
    for j in range( parameters_n[i] - 1 ) :
        gldl_c.write( param_names[j] + ", " )

    gldl_c.write( param_names[parameters_n[i] - 1] + " );\n" )
    
    
    # Handle Buffer functions
    if names[i] == "glGenBuffers" :
        gldl_c.write( "\tAddBuffers( n, buffers );\n" )
    elif names[i] == "glDeleteBuffers" :
        gldl_c.write( "\tDeleteBuffers( n, buffers );\n" )
    elif names[i] == "glBindBuffer" :
        gldl_c.write( "\tBindBuffer( buffer, target == GL_ARRAY_BUFFER ? 0 : 1 );\n" )
    elif names[i] == "glBufferData" :
        gldl_c.write( "\tFillBuffer( data, size, 0, target == GL_ARRAY_BUFFER ? 0 : 1 );\n" )
    elif names[i] == "glBufferSubData" :
        gldl_c.write( "\tFillBuffer( data, size, offset, target == GL_ARRAY_BUFFER ? 0 : 1 );\n" )


    gldl_c.write( "}\n\n" )
    

