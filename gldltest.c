#include <stdio.h>

#include "GL/gldl.h"
#include "GL/glfw.h"

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

    if(noerr){
        printf("Window Created\n");

        int nVMode = 0;
        GLFWvidmode modes[20];
        nVMode = glfwGetVideoModes(modes, 20);
        for(int i = 0; i < nVMode; ++i)
            printf("%dx%d : %d bpp\n", modes[i].Width, modes[i].Height, (  modes[i].RedBits +
                                                                           modes[i].GreenBits +
                                                                           modes[i].BlueBits));
        

        // init gldl
        noerr = !gldlInit();
        if( !noerr ) {
            printf( "Error initializing gldl!\n" );
            return -1;
        } else {
            printf( "GLDL initialized!\n" );
            noerr = gldlIsSupported( 3, 3 );
            printf( "GL version 3.3 %ssupported.\n", noerr ? "" : "un" );
        }

        glClearColor( 1.0, 0.8, 0.f, 1.f );

        int run = 1;

        while(run){
            glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

            glfwSwapBuffers();

            run = !glfwGetKey(GLFW_KEY_ESC) && glfwGetWindowParam(GLFW_OPENED);
        }

    }

    gldlTerminate();
    glfwTerminate();

	return 0;
}
