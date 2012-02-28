#include <stdio.h>
#include <string.h>


#include "gldl.h"

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


// Load all GL functions from library
static void LoadProcs();


// ###################################################################
// API FUNCTIONS
static struct {
    GLint major,
          minor;
} gl_version;

static int GetGLVersion() {
    if( !glGetIntegerv ) return -1;

    glGetIntegerv( GL_MAJOR_VERSION, &gl_version.major );
    glGetIntegerv( GL_MINOR_VERSION, &gl_version.minor );

    if( gl_version.major < 3 ) return -1;

    return 0;
}

int gldlInit() {
    OpenLib();
    LoadProcs();
    CloseLib();

    return GetGLVersion();
}

int gldlIsSupported( unsigned int major, unsigned int minor ) {
    if( major < 3 ) return 0;
    if( major > gl_version.major ) return 1;

    return ( major == gl_version.major && minor >= gl_version.minor );
}


// ###################################################################
// INTERNAL
static char var_str[512];
static char **gl_constants;

void tostr_AttribMask( GLbitfield mask ) {
    var_str[0] = 0;
    int bit_n = 0;

    if( GL_COLOR_BUFFER_BIT & mask ) {
        strcat( var_str, "GL_COLOR_BUFFER_BIT" );
        ++bit_n;
    }
    if( GL_DEPTH_BUFFER_BIT & mask ) {
        if( bit_n ) strcat( var_str, " | GL_DEPTH_BUFFER_BIT" );
        else        strcat( var_str, "GL_DEPTH_BUFFER_BIT" );
    }
    if( GL_STENCIL_BUFFER_BIT & mask ) {
        if( bit_n ) strcat( var_str, " | GL_STENCIL_BUFFER_BIT" );
        else        strcat( var_str, "GL_STENCIL_BUFFER_BIT" );
    }
}



PFNGLCLEARPROC gldlClear_impl;
PFNGLGETINTEGERVPROC gldlGetIntegerv;

static void LoadProcs() {
    gldlClear_impl = (PFNGLCLEARPROC) GetProc( "glClear" );
    gldlGetIntegerv = (PFNGLGETINTEGERVPROC) GetProc( "glGetIntegerv" );
}

void gldlClear( GLbitfield mask, const char* file, int line ) {
    tostr_AttribMask( mask );

    printf( "call<%s,%d>: glClear( %s )\n", file, line, var_str );

    gldlClear_impl( mask );
}
/*
void gldlClear( GLbitfield mask ) {
    char c = 0;
    while( c != 'c' ) {
        c = getchar();

        switch( c ) {
            case 'h' :
                printf( "Hello in gldlClear!\n"
                        "\t Mask is %d\n", mask );
                break;
            default :
                break;
        }
    }

    _gldlClear( mask );
}
*/
