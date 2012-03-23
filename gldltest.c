#include <stdio.h>

#include "GL/gldl.h"
#include "GL/glfw.h"
#include <GL/glx.h>

int main() {
	int noerr = glfwInit();

	if( !noerr ) {
		printf("GLFW Init error!\n");
        return -1;
    }

    
    glfwOpenWindowHint(GLFW_OPENGL_VERSION_MAJOR, 3);
    glfwOpenWindowHint(GLFW_OPENGL_VERSION_MINOR, 3);
    glfwOpenWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
    glfwOpenWindowHint(GLFW_OPENGL_DEBUG_CONTEXT, GL_TRUE);
    glfwOpenWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);



    printf("GLFW Initialized!\n");

    noerr = glfwOpenWindow( 800, 600,
                            8, 8, 8, 8,
                            24, 8, GLFW_WINDOW);

    if( noerr ){
        printf("Window Created\n");

        // init gldl
        noerr = gldlInit();
        if( !noerr ) {
            printf( "Error initializing gldl!\n" );
            return -1;
        } else {
            printf( "GLDL initialized!\n" );
            noerr = gldlIsSupported( 3, 3 );
            printf( "GL version 3.3 %ssupported.\n", noerr ? "" : "un" );
        }

        gldlBeginTrace( 1 );
        glClearColor( 1.0, 0.8, 0.f, 1.f );
        gldlEndTrace( 1 );

        int run = 1;

        float data[] = { 0, 1.5, 0.5, 0.5 };

        GLuint buf[4];
        glGenBuffers( 4, buf );
        glBindBuffer( GL_ARRAY_BUFFER, buf[0] );
        glBufferData( GL_ARRAY_BUFFER, sizeof(data), data, GL_STATIC_DRAW );
        glBufferSubData( GL_ARRAY_BUFFER, sizeof(data) / 2, sizeof(data) / 2, data );
        glDeleteBuffers( 4, buf );

        const char *s_src = "Hey\nwhatis up bitches\n}";

        int p = glCreateProgram();

        int s = glCreateShader( GL_VERTEX_SHADER );
        glShaderSource( s, 1, &s_src, NULL );

        glAttachShader( p, s );

        glUseProgram( p );

        glUseProgram( 0 );

        glDeleteShader( s );
        glDeleteProgram( p );

        while(run){
            gldlBeginTrace( 2 );
            glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

            glfwSwapBuffers();

            run = !glfwGetKey(GLFW_KEY_ESC) && glfwGetWindowParam(GLFW_OPENED);
            gldlEndTrace( 2 );
        }

    }

    glfwTerminate();
    gldlTerminate();

	return 0;
}
