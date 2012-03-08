
#ifndef __GLDL_FUNCARRAY_H
#define __GLDL_FUNCARRAY_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Sorted array of all GL functions
char* gl_functions[560];

void InitFunctionArray();
void DestroyFunctionArray();

#endif //__GLDL_FUNCARRAY_H
