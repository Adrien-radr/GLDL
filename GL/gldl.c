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
FILE *trace = NULL;

static struct {
    GLint major,
          minor;
} gl_version;

static int GetGLVersion() {
    glGetIntegerv( GL_MAJOR_VERSION, &gl_version.major );
    glGetIntegerv( GL_MINOR_VERSION, &gl_version.minor );

    if( gl_version.major < 3 ) return -1;

    return 0;
}

int gldlInit() {
    OpenLib();
    LoadProcs();
    CloseLib();

    trace = fopen( "trace.log", "w" );

    return GetGLVersion();
}

int gldlIsSupported( unsigned int major, unsigned int minor ) {
    if( major < 3 ) return 0;
    if( major > gl_version.major ) return 1;

    return ( major == gl_version.major && minor >= gl_version.minor );
}


// ###################################################################
// INTERNAL

void gldlDebugFunc( ) {
    char c = 0;
    
}


PFNGLCLEARPROC gldlClear_impl;
PFNGLGETINTEGERVPROC gldlGetIntegerv_impl;

static void LoadProcs() {
    gldlClear_impl = (PFNGLCLEARPROC) GetProc( "glClear" );
    gldlGetIntegerv_impl = (PFNGLGETINTEGERVPROC) GetProc( "glGetIntegerv" );
}

void gldlClear( GLbitfield mask, const char * mask_str, const char* file, int line ) {

    fprintf( trace, "call<%s,%d>: glClear( %s );\n", file, line, mask_str );
    fflush( trace );
    printf( "call<%s,%d>: glClear( %s )\n", file, line, mask_str );

    gldlDebugFunc();

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
