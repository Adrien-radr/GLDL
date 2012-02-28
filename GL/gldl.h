#ifndef __GLDL_H
#define __GLDL_H

// Include GL Core Profile Header
#include "GL3/gl3.h"

// Prevents from loading basic gl.h
#ifndef __gl_h_
#define __gl_h_
#endif

// C library
#ifdef __cplusplus
extern "C" {
#endif


// GLDL API functions
int gldlInit();
int gldlIsSupported( unsigned int major, unsigned int minor );

void gldlDebugFunc( int funcNumber );

//extern PFNGLCLEARPROC gldlClear;
void gldlClear( GLbitfield, const char*, int );

extern PFNGLGETINTEGERVPROC gldlGetIntegerv;


#define glClear( bf )   gldlClear( (bf), __FILE__, __LINE__ )
#define glGetIntegerv   gldlGetIntegerv






#ifdef __cplusplus
}
#endif

#endif // GLDL_H
