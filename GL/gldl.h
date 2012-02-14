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
void gldlDebugFunc( int pFuncNumber );

extern PFNGLCLEARPROC gldlClear;
extern PFNGLGETINTEGERVPROC gldlGetIntegerv;


#define glClear		    gldlClear
#define glGetIntegerv   gldlGetIntegerv






#ifdef __cplusplus
}
#endif

#endif // GLDL_H
