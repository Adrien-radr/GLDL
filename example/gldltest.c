#include <GL/glfw.h>
#include "../GL/gldl.h"
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
