GLDL : OpenGL Debug Library
============================
Author(s) : Adrian 'Revk' Dubouchet \<ra.dubouchet@gmail.com\>

GLDL is an OpenGL Core Profile loading library that adds a debug layer in between.  
It works as GLEW or gl3w would work, as a statically linked library (or by directly adding the GLDL source files in your project). It's a temporary remplacement of one of those, and should be used for Debug only.  
Like gl3w do it, GLDL will download the gl3.h header from the Khronos OpenGL website and generates the code needed for function loading and debug, with a script.

This is my work project of my *Analyse et Comprehension de Programmes* class at the _Universite de Montreal_ for this session.
  

This library works on **Linux** and **Windows**.


Features
---------

* GL Core Profile functions exposition.
* Interactive debug with breakpoints.
* Trace logging (one init trace until the first glClear, and 5 custom traces).
* Buffer (VBO) displaying.
* Shader source displaying.
* Texture visualization (in a separate window).
* GL states displaying.


Installation & Usage
-------------

Just execute the ```gldl.py``` python(2.7) script to download and generate the GLDL library code.  
Once done, add the ```gldl.c``` and ```gldl.h``` files to your project, or compile them as a static or dynamic library.

When calling `gldlInit()`, the GLDL interactive debug session will begin. Typing the command `help` or `h` will fill you with
some pointers on how to use this debug tool. If you used the GNU debugger(GDB) before, you shouldn't be too disoriented.  

If you need it, you could very well use GDB and GLDL together. Just launch your client program (using GLDL) with GDB, and
experience the best possible debugging experience !

API
----------

``int gldlInit()``  

>    GLDL library initialization function. This must be called after an OpenGL context has been created. 
    The function returns ``1`` if the library is correctly initialized, or ``0`` otherwise.
    
``int gldlIsSupported( int major, int minor )``

>    Check if the given ``major.minor`` OpenGL version is available. Returns ``1`` if it is, or ``0`` otherwise.
    
``void gldlBreak()``

>   This will cause a break into interactive debug session, wherever you put it.

``void gldlBeginTrace( int traceNumber )``

>    Activate logging of every GL function call after that. This will be stored in a file called ``traceX.log``, with 
    X being the ``traceNumber``. ``traceNumber`` is a value between 1 and 5. This means you can have a maximum of
    5 different custom logs.
    
``void gldlEndTrace( int traceNumber )``

>    Stop logging for the given trace number.


Example Code
-------------

    #include <GL/glfw.h>
    #include <GL/gldl.h>
    #include <stdio.h>
    
    
    int main() {
        
        if( !glfwInit() ) {
        	printf("GLFW Init error!\n");
            return -1;
        }
    
        glfwOpenWindow( 800, 600,
                        8, 8, 8, 8,
                        24, 8, GLFW_WINDOW);
    
    
        if( !gldlInit() ) {
            printf( "Error initializing gldl!\n" );
            return 1;
        }
        
        if( !gldlIsSupported( 3, 3 ) ) {
            printf( "GL 3.3 not supported.\n" );
            return 1;
        }
        
        
        gldlBeginTrace( 1 );
        
        printf( "OpenGL v%s.\n", glGetString( GL_VERSION ) );
        printf( "GLSL v%s\n", glGetString( GL_SHADING_LANGUAGE_VERSION ) );
        
        glClearColor( 1.f, 1.f, 1.f, 1.f );
        
        gldlEndTrace( 1 );
        
        while( glfwGetWindowParam( GLFW_OPENED ) ) {
            glClear( GL_COLOR_BUFFER_BIT );
            
            gldlBreak();
            
            // ...
            
            glfwSwapBuffers();
        }
        
        return 0;
    }

