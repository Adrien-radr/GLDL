#include <stdio.h>
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


static struct {
    GLint mMajor,
          mMinor;
} gl_version;

static int GetGLVersion() {
    if( !glGetIntegerv ) return -1;

    glGetIntegerv( GL_MAJOR_VERSION, &gl_version.mMajor );
    glGetIntegerv( GL_MINOR_VERSION, &gl_version.mMinor );

    if( gl_version.mMajor < 3 ) return -1;

    return 0;
}

int gldlInit() {
    OpenLib();
    LoadProcs();
    CloseLib();

    return GetGLVersion();
}

int gldlIsSupported( unsigned int pMajor, unsigned int pMinor ) {
    if( pMajor < 3 ) return 0;
    if( pMajor > gl_version.mMajor ) return 1;

    return ( pMajor == gl_version.mMajor && pMinor >= gl_version.mMinor );
}




PFNGLCLEARPROC gldlClear;
PFNGLGETINTEGERVPROC gldlGetIntegerv;

static void LoadProcs() {
    gldlClear = (PFNGLCLEARPROC) GetProc( "glClear" );
    gldlGetIntegerv = (PFNGLGETINTEGERVPROC) GetProc( "glGetIntegerv" );
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
