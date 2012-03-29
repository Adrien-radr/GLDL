#!/usr/bin/env python
import re
import urllib2
import os

print "GLDL gen script 1.0"

# Make folder hierarchy
#   GL/         --  GL3/    --  gl3.h
#   gldl.py         gldl.h
#                   gldl.c
if not os.path.exists( "GL/GL3" ) :
    os.makedirs( "GL/GL3" )


# Download header from opengl.org
if not os.path.exists( "GL/GL3/gl3.h" ) :
    print "Downloading gl3.h from opengl.org to GL/GL3..."
    gl3_url = urllib2.urlopen( "http://www.opengl.org/registry/api/gl3.h" )
    gl3_src = open( "GL/GL3/gl3.h", "wb" )
    gl3_src.writelines( gl3_url.readlines() )
    gl3_src.close()
else :
    print "OpenGL header gl3.h exists in GL/GL3. Reusing..."


print "Parsing OpenGL header..."

# Open GL3 header
gl3_src = open( "GL/GL3/gl3.h", "r" )

# Get all GL procedures
return_types = []
names = []
parameters = []
parameters_n = []
max_name_len = 0

procs_re = re.compile( r"^GLAPI.+APIENTRY gl.+(.*);$" )

for line in gl3_src :
    match_line = procs_re.match( line )
    if( match_line ) :
        line = match_line.group(0)[6:]
        line = line.replace( " APIENTRY ", " " )

        name_pos = line.find( "gl" )
        return_types.append( line[:name_pos-1] )

        name, sig = line[name_pos:].split( None, 1 )
        names.append( name );

        if( len(name) > max_name_len ) :
            max_name_len = len(name)

        # Check if void parameter
        if( sig[1:-2] == "void" ) :
            parameters.append( "" )
            parameters_n.append( 0 )
        else :
            parameters.append( sig[1:-2] )
            parameters_n.append( len(sig[1:-2].split( "," ) ) )


# Get alphabetically sorted name array (for faster search in C program)
sorted_names = sorted( names )




print "Generating GL/gldl.h header file..."

# Write GLDL header
gldl_h = open( "GL/gldl.h", "wb" )

gldl_h.write( r'''
#ifndef __GLDL_H
#define __GLDL_H

// GL Core Profile Header
#include "GL3/gl3.h"

// Prevents from loading basic gl.h
#ifndef __gl_h_
#define __gl_h_
#endif

// C Library
#ifdef __cplusplus
extern "C" {
#endif

// GLDL API functions
int gldlInit();
int gldlIsSupported( unsigned int major, unsigned int minor );
void gldlBeginTrace( unsigned int trace_n );
void gldlEndTrace( unsigned int trace_n );

void gldlBreak_impl( const char *file, int line ); 
#define gldlBreak() gldlBreak_impl( __FILE__, __LINE__ )


// Debug version of GL functions
// Parameters :
//      - GL original parameters
//      - String representing their names (equal number)
//      - String representing the file where the call has been recorded
//      - Int representing the line where the call has been recorded
''')

# Write GLDL modified(for debug) GL funcs
for i in range( len(names) ) :
    if( parameters_n[i] == 0 ) :
        gldl_h.write( return_types[i] + " gldl" + names[i][2:] + " ( const char *, int );\n" )
    else :
        gldl_h.write( return_types[i] + " gldl" + names[i][2:] + " ( " + parameters[i] + ", " )
        for j in range( parameters_n[i] - 1 ) :
            gldl_h.write( "const char *, " )
        gldl_h.write( "const char *, const char *, int );\n" )

gldl_h.write( "\n\n" )

# Write GL macro functions that the user will call
for i in range( len(names) ) :
    if( parameters_n[i] == 0 ) :
        gldl_h.write( "#define " + names[i] + "( )  gldl" + names[i][2:] + "( __FILE__, __LINE__ )\n" )
    else :
        gldl_h.write( "#define " + names[i] + "( " )
        for j in range( parameters_n[i] - 1 ) :
            gldl_h.write( "arg" + str(j) + ", " )
        gldl_h.write( "arg" + str(parameters_n[i]-1) + " )  gldl" + names[i][2:] + "( " )
        for j in range( parameters_n[i] - 1 ) :
            gldl_h.write( "(arg" + str(j) + "), " )
        gldl_h.write( "(arg" + str(parameters_n[i]-1) + "), " )
        for j in range( parameters_n[i] - 1 ) :
            gldl_h.write( "#arg" + str(j) + ", " )
        gldl_h.write( "#arg" + str(parameters_n[i]-1) + ", __FILE__, __LINE__ )\n" )


gldl_h.write( r'''
#ifdef __cplusplus
}
#endif

#endif //__GLDL_H
''')






print "Generating GL/gldl.c source file..."

# Write GLDL src
gldl_c = open( "GL/gldl.c", "wb" )

gldl_c.write( r'''
#include "gldl.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//////////////////////////////////////////
// Jump to line 1145 for GLDL API functions
//////////////////////////////////////////


// GL FUNCTION POINTERS (GL implementation)
''')

# Write all GL function pointers

for i in range( len(names) ) :
    gldl_c.write( "PFN" + names[i].upper() + "PROC gldl" + names[i][2:] + "_impl;\n" )

gldl_c.write( r'''
// GL function number
#define GLDL_FUNC_N ''' + str(len(names)) + '''

// String array of all GL function names
char *gl_functions[GLDL_FUNC_N] = { 
''')

for name in sorted_names :
    gldl_c.write( "\t\"" + name + "\",\n" ) 

gldl_c.write( r'''};



// WINDOWS
#if defined(_WIN32) || defined(WIN32)
#   define WIN32_LEAN_AND_MEAN
#   include <windows.h>
#   error This will not compile on Windows. Sorry :[ !

// UNIX
#else
#include <dlfcn.h>
#include <GL/glx.h>
#include <signal.h>
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

    // X11 Texture window stuff
    static Display      *gldl_dpy = NULL;
    static Window       gldl_win;
    static Atom         gldl_closeEvent;

    // Client Window stuff
    static Display      *cl_dpy;
    static GLXDrawable  cl_win;
    static GLXContext   cl_ctx;

    int InitTextureWindow( int width, int height ) {
        Window                  root;
        GLint                   attr[] = { GLX_RGBA, GLX_DEPTH_SIZE, 24, GLX_DOUBLEBUFFER, None };
        XVisualInfo             *vi;
        XSetWindowAttributes    swa;
        XSizeHints              *sh;
        
        
        cl_dpy = glXGetCurrentDisplay();
        cl_ctx = glXGetCurrentContext();
        cl_win = glXGetCurrentDrawable();

        gldl_dpy = XOpenDisplay( NULL );

        if( !gldl_dpy ) {
            printf( "Cannot connect to X Server\n" );
            return 0;
        }

        root = DefaultRootWindow( gldl_dpy );
        vi = glXChooseVisual( gldl_dpy, 0, attr );

        if( !vi ) {
            printf( "No matching visual for RGBA:24 with double buffer.\n" );
            XCloseDisplay( gldl_dpy );
            return 0;
        }


        swa.colormap = XCreateColormap( gldl_dpy, root, vi->visual, AllocNone );
        swa.event_mask = ExposureMask | KeyReleaseMask;

        gldl_win = XCreateWindow( gldl_dpy, root, 0, 0, width, height, 0, vi->depth, 
                                  InputOutput, vi->visual, CWColormap | CWEventMask, &swa );

        XFree( vi );

        // fixed aspect ratio (texture aspect ratio)
        sh = XAllocSizeHints();

        sh->flags = PAspect;
        sh->min_aspect.x = width;
        sh->max_aspect.x = sh->min_aspect.x;
        sh->min_aspect.y = height;
        sh->max_aspect.y = sh->min_aspect.y;

        XSetWMNormalHints( gldl_dpy, gldl_win, sh );

        XFree( sh );

        // handle closing signals
        gldl_closeEvent = XInternAtom( gldl_dpy, "WM_DELETE_WINDOW", False );
        XSetWMProtocols( gldl_dpy, gldl_win, &gldl_closeEvent, 1 );

        XStoreName( gldl_dpy, gldl_win, "GLDL" );

        // Open created window
        XMapWindow( gldl_dpy, gldl_win );

        
        return glXMakeCurrent( gldl_dpy, gldl_win, cl_ctx );
    }

    int TextureWindowEvents() {
        static XEvent xev;
        static KeySym key;

        XNextEvent( gldl_dpy, &xev );

        // check for keypress ( ESC key kills window )
        if( xev.type == KeyRelease ) {
            key = XKeycodeToKeysym( gldl_dpy, xev.xkey.keycode, 0 );

            // only check for escape key
            if( key == XK_Escape ) 
                return 0;
        }

        // check for Closing signal
        else if( xev.type == ClientMessage ) {
            if( (Atom) xev.xclient.data.l[0] == gldl_closeEvent ) {
                return 0;
            }
        }

        // check for resizing
        else if( xev.type == Expose ) {
            // get new window size
            XWindowAttributes wa;
            XGetWindowAttributes( gldl_dpy, gldl_win, &wa );

            glViewport( 0, 0, wa.width, wa.height );
        }

        return 1;
    }

    void SwapTextureWindow() {
        glXSwapBuffers( gldl_dpy, gldl_win );
    }

    void DestroyTextureWindow() {
        glXMakeCurrent( cl_dpy, cl_win, cl_ctx );

        XUnmapWindow( gldl_dpy, gldl_win );
        XDestroyWindow( gldl_dpy, gldl_win );
        XCloseDisplay( gldl_dpy );
    }
#endif



// ###################################################################
// API FUNCTIONS

static int  gldl_init = 0;                  // Assure that gldl has been init

static int  break_functions[GLDL_FUNC_N];   // Breakpoints storing array
static int  break_next = 0;                 // Break on next function ?
static char debug_break[10];                // Used to display break cause (breakpoint nb or a 'n' break)

// GL function call traces
// First trace is the init trace (trace until first glClear())
// Five traces after that are custom traces (activated by gldlBeginTrace(n))
#define TRACE_N 6
static struct s_ct {
    FILE        *f;
    int         started;
} gldl_traces[TRACE_N];

// Buffers (VBO) managment
struct gldl_buffer {
    GLint       id;
    GLuint      size;
    GLfloat     *data;

    int         next_free;
};

static struct {
    struct gldl_buffer  *arr;
    unsigned int        size;
    unsigned int        count;
    unsigned int        first_free;

    int                 bound_array_b;
    int                 bound_elem_array_b;
} gldl_buffers;



// Shaders and Shader Programs managment
struct gldl_shader {
    GLuint      id;         // Shader GL id
    GLenum      type;       // GL_{VERTEX,FRAGMENT}_SHADER

    char        *src;       // Shader source
    GLuint      size;       // Shader source size

    int         next_free;
};

struct gldl_program {
    GLuint      id;         // Program GL id
    GLuint      vs, fs;     // Program linked vertex and fragment shaders ids

    int         next_free;
};

static struct {
    struct gldl_shader      *arr;
    unsigned int            size;
    unsigned int            count;
    unsigned int            first_free;
} gldl_shaders;

static struct {
    struct gldl_program     *arr;
    unsigned int            size;
    unsigned int            count;
    unsigned int            first_free;

    unsigned int            bound_program;
} gldl_programs;



// Texture managment
struct gldl_texture {
    GLuint      id;
    GLuint      width, height;

    int         next_free;
};

static struct {
    struct gldl_texture     *arr;
    unsigned int            size;
    unsigned int            count;
    unsigned int            first_free;

    unsigned int            bound_textures[8];
    unsigned int            current_unit;
} gldl_textures;



// States managment
static struct {
    int     depth_test,
            blend,
            blendfunc_src,
            blendfunc_dest,
            face_culling,
            culled_face,
            bound_vao;

    int     mag_filter,
            min_filter,
            wrap_s,
            wrap_t;
} gldl_states;



// OpenGL max available version
static struct {
    GLint       major,
                minor;
} gl_version;


// GLDL Buffer functions
static void InitBufferArray();
static void DeleteBufferArray();
static void AddBuffers( GLsizei n, GLuint *ids );
static void DeleteBuffers( GLsizei n, const GLuint *ids );
static void BindBuffer( GLuint id, int elem_array );
static void FillBuffer( const void* data, GLsizei size, unsigned int offset, int elem_array );

static void ListBuffers();
static void PrintBuffer( int id, unsigned int type_size, unsigned int elem_size );

// GLDL Program/Shader functions
static void InitShaderArray();
static void DeleteShaderArray();
static void AddShader( GLuint id, GLenum type );
static void SetShaderSource( GLuint id, const char *src );
static void AddProgram( GLuint id );
static void DeleteProgram( GLuint id );
static void AttachShader( GLuint prog_id, GLuint shader_id );
static void DetachShader( GLuint prog_id, GLuint shader_id );
static void BindProgram( GLuint id );

static void ListPrograms();
static void PrintProgram( int id );
static void ListShaders();
static void PrintShader( int id );

// GLDL Texture functions
static void InitTextureArray();
static void DeleteTextureArray();
static void AddTextures( GLsizei n, GLuint *ids );
static void DeleteTextures( GLsizei n, const GLuint *ids );
static void SetTextureSize( GLuint id, GLuint width, GLuint height );
static void BindTexture( GLuint id );
static void SetTextureUnit( GLuint unit );
static void ShowTexture( GLuint id, int reverse );
static void ListTextures();


static void InitGLStates();
static int  GetGLVersion();
static void DebugTest( int func_index );
static void DebugFunction();
static void LoadProcs();







// Public functions

int gldlInit() {
    OpenLib();
    LoadProcs();
    CloseLib();

    gldl_init = GetGLVersion();

    if( gldl_init ) {
        memset( gldl_traces, 0, TRACE_N * sizeof(struct s_ct) );
        gldl_traces[0].f = fopen( "trace_init.log", "w" );
        gldl_traces[0].started = 1;

        gldl_buffers.size = 0;
        gldl_programs.size = 0;
        gldl_shaders.size = 0;

        InitGLStates();

        memset( break_functions, -1, GLDL_FUNC_N * sizeof(int) );

        printf( "GLDL 1.0\n" );
        DebugFunction();
    }
    

    return gldl_init;
}

int gldlIsSupported( unsigned int major, unsigned int minor ) {
    if( major < 3 ) return 0;
    if( major < gl_version.major ) return 1;

    return ( major <= gl_version.major && minor <= gl_version.minor );
}

void gldlBeginTrace( unsigned int trace_n ) {
    if( !trace_n || trace_n >= TRACE_N ) return;

    if( !gldl_traces[trace_n].f ) {
        char filename[16];
        sprintf( filename, "trace%d.log", trace_n );

        gldl_traces[trace_n].f = fopen( filename, "w" );
    }

    gldl_traces[trace_n].started = 1;
}

void gldlEndTrace( unsigned int trace_n ) {
    if( !trace_n || trace_n >= TRACE_N ) return;

    gldl_traces[trace_n].started = 0;
}

void gldlBreak_impl( const char *file, int line ) {
    printf( "Breapoint on gldlBreak() at %s:%d\n", file, line );
    DebugFunction();
}








// Private functions



static void InitTextureArray() {
    // initialize with 20 elem at first
    gldl_textures.size = 20;
    gldl_textures.count = 0;
    gldl_textures.first_free = 0;
    memset( gldl_textures.bound_textures, 0, 8 * sizeof(int) );
    gldl_textures.current_unit = 0;

    gldl_textures.arr = calloc( gldl_textures.size, sizeof(struct gldl_texture) );
    
    int i;
    for( i = 0; i < gldl_textures.size; ++i ) {
        gldl_textures.arr[i].id = -1;
        gldl_textures.arr[i].width = 0;
        gldl_textures.arr[i].height = 0;
        gldl_textures.arr[i].next_free = i+1;
    }
    gldl_textures.arr[gldl_textures.size-1].next_free = -1;
}

static void DeleteTextureArray() {
    free( gldl_textures.arr );
    gldl_textures.size = 0;
}

static void AddTextures( GLsizei n, GLuint *ids ) {
    int i, new_index;
    int index = gldl_textures.first_free;
    int need_realloc = 0;

    // init arrays if not yet done
    if( !gldl_textures.size ) 
        InitTextureArray();

    // realloc array if full (with 1.7x policy)
    for( new_index = n-1; new_index >= 0; --new_index ) {
        if( -1 == index ) {
            need_realloc = 1;
            break;
        }

        index = gldl_textures.arr[index].next_free;
    }

    index = gldl_textures.first_free;

    if( need_realloc ) {
        gldl_textures.arr[gldl_textures.size-1].next_free = gldl_textures.size;

        gldl_textures.size *= 1.7;
        gldl_textures.arr = realloc( gldl_textures.arr, sizeof(struct gldl_texture) * gldl_textures.size );

        for( i = gldl_textures.count; i < gldl_textures.size; ++i ) {
            gldl_textures.arr[i].id = -1;
            gldl_textures.arr[i].width = 0;
            gldl_textures.arr[i].height = 0;
            gldl_textures.arr[i].next_free = i+1;
        }
        gldl_textures.arr[gldl_textures.size-1].next_free = -1;

        // change first_free only if new_index is far
        if( new_index == 0 )
            gldl_textures.first_free = index = gldl_textures.count;
    }

    // add new textures id
    for( i = 0; i < n; ++i ) {
        gldl_textures.arr[index].id = ids[i];
        gldl_textures.count++;

        gldl_textures.first_free = index = gldl_textures.arr[index].next_free;
    }
}

static void DeleteTextures( GLsizei n, const GLuint *ids ) {
    int cpt;
    int i, j;
    int tmp;

    for( cpt = 0; cpt < n; ++cpt ) {
        for( i = 0; i < gldl_textures.size; ++i ) {
            // if nothing more to see, return
            if( gldl_textures.arr[i].id == -1 )
                return;

            if( gldl_textures.arr[i].id == ids[cpt] ) {
                // delete textures memory
                gldl_textures.arr[i].id = 0;

                // reorganise array linking
                tmp = gldl_textures.first_free;
                gldl_textures.first_free = gldl_textures.arr[i].next_free;
                gldl_textures.arr[i].next_free = tmp;

                // unbind this texture if bound
                for( j = 0; j < 8; ++j )
                    if( gldl_textures.arr[i].id == gldl_textures.bound_textures[j] )
                        gldl_textures.bound_textures[j] = 0;

                gldl_textures.count--;

                break;
            }
        }
    }

    // If no more textures, destroy array
    if( !gldl_textures.count )
        DeleteTextureArray();

}

static void SetTextureSize( GLuint id, GLuint width, GLuint height ) {
    int i;

    for( i = 0; i < gldl_textures.size; ++i ) {
        if( gldl_textures.arr[i].id == -1 )
            return;

        if( gldl_textures.arr[i].id == id ) {
            gldl_textures.arr[i].width = width;
            gldl_textures.arr[i].height = height;
            break;
        }
    }   
}

static void BindTexture( GLuint id ) {
    int i;

    for( i = 0; i < gldl_textures.size; ++i ) {
        if( gldl_textures.arr[i].id == -1 )
            return;

        if( gldl_textures.arr[i].id == id ) {
            gldl_textures.bound_textures[gldl_textures.current_unit] = id;
            break;
        }
    }   
}

static void SetTextureUnit( GLuint unit ) {
    GLuint real_unit = unit - GL_TEXTURE0;

    if( real_unit < 8 )
        gldl_textures.current_unit = real_unit;
}

static void ListTextures() {
    int tex_cpt = 0;
    int i;

    for( i = 0; i < gldl_textures.size; ++i ) {
        if( gldl_textures.arr[i].id == -1 )
            break;

        if( gldl_textures.arr[i].id ) {
            if( !tex_cpt )
                printf( "List of existing textures :\n" );
            printf( "%d\n", gldl_textures.arr[i].id );
            tex_cpt++;
        }
    }

    if( !tex_cpt )
        printf( "No GL textures.\n" );

}

void ShowTexture( GLuint id, int reverse ) {
    int tex_index = -1;
    int i;
    int tex_w, tex_h;

    // check if given id is 
    for( i = 0; i < gldl_textures.size; ++i ) {
        if( gldl_textures.arr[i].id == -1 )
            break;

        if( gldl_textures.arr[i].id == id ) {
            if( gldl_textures.arr[i].width != 0 && gldl_textures.arr[i].height != 0 )
                tex_index = i;
            break;
        }
    }

    if( tex_index < 0 ) {
        printf( "This texture does not exist.\n" );
        return;
    }


    tex_w = gldl_textures.arr[tex_index].width;
    tex_h = gldl_textures.arr[tex_index].height;

    printf( "Displaying texture %d ( w = %d, h = %d )...\n", id, tex_w, tex_h );


    // limit popup window size to be less than 800x600
    // the user will be able to rescale it after pop
    while( tex_w > 800 )
        tex_w /= 2;

    while( tex_h > 600 )
        tex_h /= 2;



    // Init platform window to draw on
    if( !InitTextureWindow( tex_w, tex_h ) ) 
        return;


    // shader for rendering
    static const GLchar *vs_src = "\
        #version 150                                            \n\
        in  vec2    inPosition;                                 \n\
        out vec2    fsTexcoord;                                 \n\
        uniform int reverse;                                    \n\
                                                                \n\
        void main() {                                           \n\
            fsTexcoord = inPosition * vec2(0.5) + vec2(0.5);    \n\
            if( reverse > 0 ) fsTexcoord.y = -fsTexcoord.y;     \n\
            gl_Position = vec4( inPosition, 0, 1 );             \n\
        } ";

    static const GLchar *fs_src = "\
        #version 150                                            \n\
        in  vec2 fsTexcoord;                                    \n\
        out vec4 outColor;                                      \n\
        uniform sampler2D tex;                                  \n\
                                                                \n\
        void main() {                                           \n\
            outColor = texture( tex, fsTexcoord );              \n\
        } ";

    int shader_ok = 0;
    int prog = gldlCreateProgram_impl();
    int vs = gldlCreateShader_impl( GL_VERTEX_SHADER );
    int fs = gldlCreateShader_impl( GL_FRAGMENT_SHADER );

    gldlShaderSource_impl( vs, 1, &vs_src, NULL );
    gldlCompileShader_impl( vs );
    gldlGetShaderiv_impl( vs, GL_COMPILE_STATUS, &shader_ok );

    if( !shader_ok ) {
        printf( "Vertex Shader compilation error\n" );
        GLint log_length;
        char *log;

        gldlGetShaderiv_impl( vs, GL_INFO_LOG_LENGTH, &log_length );
        log = malloc( log_length );
        gldlGetShaderInfoLog_impl( vs, log_length, NULL, log );
        printf( "%s", log );
        free(log);

        goto error;
    }

    gldlShaderSource_impl( fs, 1, &fs_src, NULL );
    gldlCompileShader_impl( fs );
    gldlGetShaderiv_impl( fs, GL_COMPILE_STATUS, &shader_ok );

    if( !shader_ok ) {
        printf( "Fragment Shader compilation error\n" );
        GLint log_length;
        char *log;

        gldlGetShaderiv_impl( fs, GL_INFO_LOG_LENGTH, &log_length );
        log = malloc( log_length );
        gldlGetShaderInfoLog_impl( fs, log_length, NULL, log );
        printf( "%s", log );
        free(log);

        goto error;
    }

    gldlAttachShader_impl( prog, vs );
    gldlAttachShader_impl( prog, fs );
    gldlLinkProgram_impl( prog );

    gldlGetProgramiv_impl( prog, GL_LINK_STATUS, &shader_ok );

    if( !shader_ok ) {
        printf( "Shader Program linking error\n" );
        GLint log_length;
        char *log;

        gldlGetProgramiv_impl( prog, GL_INFO_LOG_LENGTH, &log_length );
        log = malloc( log_length );
        gldlGetProgramInfoLog_impl( prog, log_length, NULL, log );
        printf( "%s", log );
        free(log);
        goto error;
    }

    gldlDeleteShader_impl( vs );
    gldlDeleteShader_impl( fs );

    gldlUseProgram_impl( prog );

    int tex_uniform = gldlGetUniformLocation_impl( prog, "tex" );
    int reverse_uniform = gldlGetUniformLocation_impl( prog, "reverse" );
    int pos_attrib = gldlGetAttribLocation_impl( prog, "inPosition" );

    gldlUniform1i_impl( tex_uniform, 0 );
    gldlUniform1i_impl( reverse_uniform, reverse > 0 ? 1 : 0 );

    // mesh for texture displaying
    static const GLfloat mesh[] = {
        -1.f, -1.f,
         1.f, -1.f,
        -1.f,  1.f,

        -1.f,  1.f,
         1.f, -1.f,
         1.f,  1.f
    };

    // new VAO
    GLuint vao;
    gldlGenVertexArrays_impl( 1, &vao );
    gldlBindVertexArray_impl( vao );

    GLuint vbo;
    gldlGenBuffers_impl( 1, &vbo );
    gldlBindBuffer_impl( GL_ARRAY_BUFFER, vbo );
    gldlBufferData_impl( GL_ARRAY_BUFFER, sizeof(mesh), mesh, GL_STATIC_DRAW );

    gldlEnableVertexAttribArray_impl( pos_attrib );
    gldlVertexAttribPointer_impl( pos_attrib, 2, GL_FLOAT, GL_FALSE, 2*sizeof(float), 0 );

    
    gldlActiveTexture_impl( GL_TEXTURE0 );
    gldlBindTexture_impl( GL_TEXTURE_2D, id );

    // disable not needed states
    gldlDisable_impl( GL_DEPTH_TEST );
    gldlDisable_impl( GL_CULL_FACE );

    // get current viewport, to restore it later
    GLint viewport[4];
    gldlGetIntegerv_impl( GL_VIEWPORT, viewport );

    gldlViewport_impl( 0, 0, tex_w, tex_h );


    int run = 1;

    while( run ) {
        gldlClear_impl( GL_COLOR_BUFFER_BIT );

        gldlDrawArrays_impl( GL_TRIANGLES, 0, 6 );
        
        SwapTextureWindow();

        run = TextureWindowEvents();
    }

    // restore modified states
    gldlEnable_impl( GL_CULL_FACE );
    gldlEnable_impl( GL_DEPTH_TEST );
    gldlViewport_impl( viewport[0], viewport[1], viewport[2], viewport[3] );

    GLenum err = glGetError();
    if( err != GL_NO_ERROR ) {
        printf( "error at end!\n" );
    }

    // get back to previously bound objects
    gldlUseProgram_impl( gldl_programs.bound_program );
    gldlBindVertexArray_impl( gldl_states.bound_vao );

    // go back to previously bound texture for unit 0
    gldlBindTexture_impl( GL_TEXTURE_2D, gldl_textures.bound_textures[0] );

    // go back to previous unit
    gldlActiveTexture_impl( GL_TEXTURE0 + gldl_textures.current_unit );

    gldlDeleteBuffers_impl( 1, &vbo );
    gldlDeleteVertexArrays_impl( 1, &vao );
    gldlDeleteProgram_impl( prog );
        
error:
    DestroyTextureWindow();
}

// Initialize gldl_buffers
static void InitBufferArray() {
    // initialize with 20 elem at first
    gldl_buffers.size = 20;
    gldl_buffers.count = 0;
    gldl_buffers.first_free = 0;
    gldl_buffers.bound_array_b = 0;
    gldl_buffers.bound_elem_array_b = 0;

    gldl_buffers.arr = calloc( gldl_buffers.size, sizeof(struct gldl_buffer) );
    
    int i;
    for( i = 0; i < gldl_buffers.size; ++i ) {
        gldl_buffers.arr[i].id = -1;
        gldl_buffers.arr[i].size = 0;
        gldl_buffers.arr[i].data = NULL;
        gldl_buffers.arr[i].next_free = i+1;
    }
    gldl_buffers.arr[gldl_buffers.size-1].next_free = -1;
}

// Free gldl_buffers
static void DeleteBufferArray() {
    int i;
    for( i = 0; i < gldl_buffers.size; ++i ) 
        free( gldl_buffers.arr[i].data );

    free( gldl_buffers.arr );

    gldl_buffers.size = 0;
}

static void AddBuffers( GLsizei n, GLuint *ids ) {
    int i, new_index;
    int index = gldl_buffers.first_free;
    int need_realloc = 0;

    // init arrays if not yet done
    if( !gldl_buffers.size ) 
        InitBufferArray();

    // realloc array if full (with 1.7x policy)
    for( new_index = n-1; new_index >= 0; --new_index ) {
        if( -1 == index ) {
            need_realloc = 1;
            break;
        }

        index = gldl_buffers.arr[index].next_free;
    }

    index = gldl_buffers.first_free;

    if( need_realloc ) {
        gldl_buffers.arr[gldl_buffers.size-1].next_free = gldl_buffers.size;

        gldl_buffers.size *= 1.7;
        gldl_buffers.arr = realloc( gldl_buffers.arr, sizeof(struct gldl_buffer) * gldl_buffers.size );

        for( i = gldl_buffers.count; i < gldl_buffers.size; ++i ) {
            gldl_buffers.arr[i].id = -1;
            gldl_buffers.arr[i].size = 0;
            gldl_buffers.arr[i].data = NULL;
            gldl_buffers.arr[i].next_free = i+1;
        }
        gldl_buffers.arr[gldl_buffers.size-1].next_free = -1;

        // change first_free only if new_index is far
        if( new_index == 0 )
            gldl_buffers.first_free = index = gldl_buffers.count;
    }

    // add new buffers
    for( i = 0; i < n; ++i ) {
        gldl_buffers.arr[index].id = ids[i];
        gldl_buffers.count++;

        gldl_buffers.first_free = index = gldl_buffers.arr[index].next_free;
    }
}

static void DeleteBuffers( GLsizei n, const GLuint *ids ) {
    int cpt;
    int i;
    int tmp;

    for( cpt = 0; cpt < n; ++cpt ) {
        for( i = 0; i < gldl_buffers.size; ++i ) {
            // if nothing more to see, return
            if( gldl_buffers.arr[i].id == -1 )
                return;

            if( gldl_buffers.arr[i].id == ids[cpt] ) {
                // delete buffer memory
                gldl_buffers.arr[i].id = 0;
                free( gldl_buffers.arr[i].data );
                gldl_buffers.arr[i].data = NULL;
                gldl_buffers.arr[i].size = 0;

                // reorganise array linking
                tmp = gldl_buffers.first_free;
                gldl_buffers.first_free = gldl_buffers.arr[i].next_free;
                gldl_buffers.arr[i].next_free = tmp;

                // unbind this buffer if bound
                if( gldl_buffers.bound_array_b == ids[cpt] )
                    gldl_buffers.bound_array_b = 0;
                if( gldl_buffers.bound_elem_array_b == ids[cpt] )
                    gldl_buffers.bound_elem_array_b = 0;

                gldl_buffers.count--;

                break;
            }
        }
    }

    // If no more buffers, destroy array
    if( !gldl_buffers.count )
        DeleteBufferArray();
}

// Bind the given Buffer ID. if elem_array is true, bind it to elem_array_b
static void BindBuffer( GLuint id, int elem_array ) {
    // search for id in buffer array
    int i;

    if( 0 == id ) {
        if( elem_array )
            gldl_buffers.bound_elem_array_b = 0;
        else
            gldl_buffers.bound_array_b = 0;

        return;
    }

    for( i = 0; i < gldl_buffers.size; ++i ) {
        if( gldl_buffers.arr[i].id == -1 )
            break;

        if( gldl_buffers.arr[i].id == id ) {
            if( elem_array )
                gldl_buffers.bound_elem_array_b = id;
            else
                gldl_buffers.bound_array_b = id;
            break;
        }
    }
}

static void FillBuffer( const void* data, GLsizei size, unsigned int offset, int elem_array ) {
    int i;
    int index = elem_array ? gldl_buffers.bound_elem_array_b : gldl_buffers.bound_array_b;

    
    if( index > 0 ) {
        // search for buffer to fill
        for( i = 0; i < gldl_buffers.size; ++i ) {
            if( gldl_buffers.arr[i].id == -1 )
                break;

            if( gldl_buffers.arr[i].id == index ) {
                // if offset is given and with size it differ from already allocated space, error (not handled)
                if( offset && ( size + offset ) > gldl_buffers.arr[i].size ) 
                    return;

                // alloc data array if not yet
                if( !gldl_buffers.arr[i].data ) 
                    gldl_buffers.arr[i].data = calloc( 1, size );

                // realloc if not big enough
                else if( size > gldl_buffers.arr[i].size )
                    gldl_buffers.arr[i].data = realloc( gldl_buffers.arr[i].data, size );

                // copy data
                memcpy( &gldl_buffers.arr[i].data[offset/4], (float*)data, size );

                if( !offset )
                    gldl_buffers.arr[i].size = size;
 
                break;
            }
        }
    }
}

static void PrintBuffer( int id, unsigned int type_size, unsigned int elem_size ) {
    int i, j, k;
    int array_size;

    if( id >= 1 && gldl_buffers.count ) {
        for( i = 0; i < gldl_buffers.size; ++i ) {
            // if nothing more to see, break
            if( gldl_buffers.arr[i].id == -1 )
                break;

            if( gldl_buffers.arr[i].id == id ) {
                printf( "Buffer %d:\n{ ", id );
                if( gldl_buffers.arr[i].data ) {
                    array_size = gldl_buffers.arr[i].size / elem_size;

                    if( 1 == type_size ) {
                        for( j = 0; j < array_size - 1; ++j )
                            printf( "%.2f, ", gldl_buffers.arr[i].data[j] );
                        printf( "%.2f }\n", gldl_buffers.arr[i].data[j] );
                    } else {
                        // check if type_size and elem_size works with the size of the array
                        if( array_size % type_size != 0 || type_size > array_size || ( type_size == array_size && elem_size > 1 ) ) {
                            printf( "err }\nError : given elem_size and type_size are not compatible with buffer size.\n" );
                            return;
                        }
                        printf( "\n" );

                        for( j = 0; j < array_size - type_size; j += type_size ) {
                            printf( "\t{ " );
                            for( k = 0; k < type_size - 1; ++k )
                                printf( "%.2f, ", gldl_buffers.arr[i].data[j+k] );
                            printf( "%.2f },\n", gldl_buffers.arr[i].data[j+k] );
                        }
                        printf( "\t{ " );
                        for( k = 0; k < type_size - 1; ++k )
                            printf( "%.2f, ", gldl_buffers.arr[i].data[j+k] );
                        printf( "%.2f } \n}\n", gldl_buffers.arr[i].data[j+k] );
                    }
                } else
                    printf( " }\n" );
                return;
            }
        }
    }

    printf( "This buffer does not exist.\n" );
}

static void ListBuffers() {
    int buf_cpt = 0;
    int i;

    for( i = 0; i < gldl_buffers.size; ++i ) {
        if( gldl_buffers.arr[i].id == -1 )
            break;

        if( gldl_buffers.arr[i].id ) {
            if( !buf_cpt )
                printf( "List of existing buffers :\n" );
            printf( "%d\n", gldl_buffers.arr[i].id );
            buf_cpt++;
        }
    }

    if( !buf_cpt )
        printf( "No GL buffers.\n" );
}

static void InitShaderArray() {
    int i;

    // init shaders
    gldl_shaders.size = 20;
    gldl_shaders.count = 0;
    gldl_shaders.first_free = 0;

    gldl_shaders.arr = calloc( gldl_shaders.size, sizeof(struct gldl_shader) );

    for( i = 0; i < gldl_shaders.size; ++i ) {
        gldl_shaders.arr[i].id = -1;
        gldl_shaders.arr[i].next_free = i+1;
    }
    gldl_shaders.arr[i-1].next_free = -1;

    // init programs
    gldl_programs.size = 20;
    gldl_programs.count = 0;
    gldl_programs.first_free = 0;

    gldl_programs.arr = calloc( gldl_programs.size, sizeof(struct gldl_program) );

    for( i = 0; i < gldl_programs.size; ++i ) {
        gldl_programs.arr[i].id = -1;
        gldl_programs.arr[i].next_free = i+1;
    }
    gldl_programs.arr[i-1].next_free = -1;
}

static void DeleteShaderArray() {
    int i;

    for( i = 0; i < gldl_shaders.size; ++i ) 
        free( gldl_shaders.arr[i].src );

    free( gldl_shaders.arr );
    free( gldl_programs.arr );

    gldl_shaders.size = 0;
    gldl_programs.size = 0;
}

static void AddShader( GLuint id, GLenum type ) {
    int i;
    int index = gldl_shaders.first_free;

    // init shader/program arrays if not done yet
    if( !gldl_shaders.size )
        InitShaderArray();

    if( -1 == index ) {
        gldl_shaders.arr[gldl_shaders.size-1].next_free = gldl_shaders.size;

        gldl_shaders.size *= 1.7;
        gldl_shaders.arr = realloc( gldl_shaders.arr, sizeof(struct gldl_shader) * gldl_shaders.size );

        for( i = gldl_shaders.count; i < gldl_shaders.size; ++i ) {
            gldl_shaders.arr[i].id = -1;
            gldl_shaders.arr[i].size = 0;
            gldl_shaders.arr[i].src = NULL;
            gldl_shaders.arr[i].next_free = i+1;
        }
        gldl_shaders.arr[i-1].next_free = -1;

        gldl_shaders.first_free = index = gldl_shaders.count;
    }

    // add new shader
    gldl_shaders.arr[index].id = id;
    gldl_shaders.arr[index].type = type;
    gldl_shaders.count++;

    gldl_shaders.first_free = index = gldl_shaders.arr[index].next_free;
}

static void SetShaderSource( GLuint id, const char *src ) {
    int i;
    int len = strlen( src );

    // search for shader in array
    for( i = 0; i < gldl_shaders.size; ++i ) {
        if( gldl_shaders.arr[i].id == -1 )
            return;

        if( gldl_shaders.arr[i].id == id ) {

            // if already something, realloc
            if( gldl_shaders.arr[i].src ) 
                gldl_shaders.arr[i].src = realloc( gldl_shaders.arr[i].src, len );

            // else, alloc
            else
                gldl_shaders.arr[i].src = calloc( 1, len );

            strncpy( gldl_shaders.arr[i].src, src, len );
            gldl_shaders.arr[i].size = len;
        }
    }
}

static void AddProgram( GLuint id ) {
    int i;
    int index = gldl_programs.first_free;

    // init shader/program arrays if not done yet
    if( !gldl_programs.size )
        InitShaderArray();

    if( -1 == index ) {
        gldl_programs.arr[gldl_programs.size-1].next_free = gldl_programs.size;

        gldl_programs.size *= 1.7;
        gldl_programs.arr = realloc( gldl_programs.arr, sizeof(struct gldl_program) * gldl_programs.size );

        for( i = gldl_programs.count; i < gldl_programs.size; ++i ) {
            gldl_programs.arr[i].id = -1;
            gldl_programs.arr[i].next_free = i+1;
        }
        gldl_programs.arr[i-1].next_free = -1;

        gldl_programs.first_free = index = gldl_programs.count;
    }

    // add new program
    gldl_programs.arr[index].id = id;
    gldl_programs.count++;

    gldl_programs.first_free = index = gldl_programs.arr[index].next_free;

}

static void DeleteProgram( GLuint id ) {
    int i, tmp;

    for( i = 0; i < gldl_programs.size; ++i ) {
        // if nothing more to see, return
        if( gldl_programs.arr[i].id == -1 )
            return;

        if( gldl_programs.arr[i].id == id ) {
            gldl_programs.arr[i].id = 0;
            gldl_programs.arr[i].vs = 0;
            gldl_programs.arr[i].fs = 0;

            // reorganise array linking
            tmp = gldl_programs.first_free;
            gldl_programs.first_free = gldl_programs.arr[i].next_free;
            gldl_programs.arr[i].next_free = tmp;

            // unbind this program if bound
            if( gldl_programs.bound_program == id )
                gldl_programs.bound_program = 0;

            gldl_programs.count--;

            break;
        }
    }

    // if no more programs, delete array
    if( !gldl_programs.count )
        DeleteShaderArray();
}

static void AttachShader( GLuint prog_id, GLuint shader_id ) {
    int i;
    int prog = -1;

    // search program index
    for( i = 0; i < gldl_programs.size; ++i ) {
        if( gldl_programs.arr[i].id == -1 )
            return;

        if( gldl_programs.arr[i].id == prog_id ) {
            prog = i;
            break;
        }
    }

    if( prog == -1 ) return;

    // search shader
    for( i = 0; i < gldl_shaders.size; ++i ) {
        if( gldl_shaders.arr[i].id == -1 )
            return;

        if( gldl_shaders.arr[i].id == shader_id ) {
            if( gldl_shaders.arr[i].type == GL_VERTEX_SHADER )
                gldl_programs.arr[prog].vs = i+1;
            else if( gldl_shaders.arr[i].type == GL_FRAGMENT_SHADER )
                gldl_programs.arr[prog].fs = i+1;

            break;
        }
    }
}

static void DetachShader( GLuint prog_id, GLuint shader_id ) {
    int i;
    int type = -1;

    // search shader to detach
    for( i = 0; i < gldl_shaders.size; ++i ) {
        if( gldl_shaders.arr[i].id == -1 )
            break;

        if( gldl_shaders.arr[i].id == shader_id ) {
            type = gldl_shaders.arr[i].type;
            break;
        }

    }

    if( type == -1 )
        return;

    for( i = 0; i < gldl_programs.size; ++i ) {
        if( gldl_programs.arr[i].id == -1 )
            return;

        if( gldl_programs.arr[i].id == prog_id ) {
            if( type == GL_VERTEX_SHADER )
                gldl_programs.arr[i].vs = 0;
            else if( type == GL_FRAGMENT_SHADER )
                gldl_programs.arr[i].fs = 0;
            break;
        }
    }
}

static void BindProgram( GLuint id ) {
    int i;

    if( !id ) {
        gldl_programs.bound_program = 0;
        return;
    }

    for( i = 0; i < gldl_programs.size; ++i ) {
        if( gldl_programs.arr[i].id == -1 )
            return;

        if( gldl_programs.arr[i].id == id ) {
            gldl_programs.bound_program = id;
            break;
        }
    }
}

static void ListPrograms() {
    int i;
    int got_one = 0;

    for( i = 0; i < gldl_programs.size; ++i ) {
        if( gldl_programs.arr[i].id == -1 )
            break;

        if( gldl_programs.arr[i].id > 0 ) {
            if( !got_one ) {
                got_one = 1;
                printf( "Shader Programs List :\n" );
            }
            printf( "%d\n", gldl_programs.arr[i].id );
        }
    }

    if( !got_one ) 
        printf( "No shader programs.\n" );
}

static void PrintProgram( int id ) {
    int i;

    for( i = 0; i < gldl_programs.size; ++i ) {
        if( gldl_programs.arr[i].id == -1 )
            break;

        if( gldl_programs.arr[i].id == id ) {
            printf( "Vertex Shader : %d\nFragment Shader : %d\n", gldl_programs.arr[i].vs, gldl_programs.arr[i].fs );
            return;
        }
    }

    printf( "This shader program does not exist.\n" );
}

static void ListShaders() {
    int i;
    int got_one = 0;

    for( i = 0; i < gldl_shaders.size; ++i ) {
        if( gldl_shaders.arr[i].id == -1 )
            break;

        if( gldl_shaders.arr[i].id > 0 ) {
            if( !got_one ) {
                got_one = 1;
                printf( "Shaders List :\n" );
            }
            printf( "%d\n",  i+1 );
        }
    }

    if( !got_one ) 
        printf( "No shaders.\n" );
}

static void PrintShader( int index ) {
    if( gldl_shaders.arr[index-1].id == -1 )
        printf( "This shader does not exist.\n" );
    else if( !gldl_shaders.arr[index-1].src )
        printf( "This shader has no source.\n" );
    else
        printf( "\n%s\n", gldl_shaders.arr[index-1].src );

/*
    int i;

    for( i = 0; i < gldl_shaders.size; ++i ) {
        if( gldl_shaders.arr[i].id == -1 )
            break;

        if( gldl_shaders.arr[i].id == id ) {
            return;
        }
    }
*/
}

// Initialize the gldl_states struct with all default states
static void InitGLStates() {
    GLboolean b;

    // blending
    b = glIsEnabled( GL_BLEND );
    gldl_states.blend = b;

    glGetIntegerv( GL_BLEND_SRC, &gldl_states.blendfunc_src );
    glGetIntegerv( GL_BLEND_DST, &gldl_states.blendfunc_dest );

    // face culling
    b = glIsEnabled( GL_CULL_FACE );
    gldl_states.face_culling = b;

    glGetIntegerv( GL_CULL_FACE_MODE, &gldl_states.culled_face );

    // depth
    b = glIsEnabled( GL_DEPTH_TEST );
    gldl_states.depth_test = b;

    // texture filters and wrapping
    glGetTexParameteriv( GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, &gldl_states.mag_filter );
    glGetTexParameteriv( GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, &gldl_states.min_filter );
    glGetTexParameteriv( GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, &gldl_states.wrap_s );
    glGetTexParameteriv( GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, &gldl_states.wrap_t );

    // vao (none at first
    gldl_states.bound_vao = 0;
}

// Store the used GL version in the gl_version struct
// Returns 1 if Core Profile loaded correctly
static int GetGLVersion() {
    gldlGetIntegerv_impl( GL_MAJOR_VERSION, &gl_version.major );
    gldlGetIntegerv_impl( GL_MINOR_VERSION, &gl_version.minor );

    if( gl_version.major < 3 ) return 0;

    return 1;
}

// Check if a breakpoint is set on the given function
static void DebugTest( int func_index ) {
    int i;

    debug_break[0] = 0;

    if( break_next ) {
        strcpy( debug_break, "(next)" );
        break_next = 0;
        return;
    }

    for( i = 0; i < GLDL_FUNC_N; ++i ) {
        if( -1 == break_functions[i] ) 
            return;
        if( func_index == break_functions[i] ) {
            sprintf( debug_break, "%d", i );
            return;
        }
    }
}


// Interactive Debug session when a breakpoint arose or during initialization
static void DebugFunction() {
    char line[128];
    static char last_cmd[32] = "", last_params[3][32] = { "", "", "" };
    char cmd[32] = "", params[3][32] = { "", "", "" }; 
    int scan_ret;
    int nomatch = 0;
    int i;

    while( 1 ) {
        printf( "> " );
    
        // get line from user and split it in 'cmd params[0] params[1] params[2]'
        gets( line );
        scan_ret = sscanf( line, "%s %s %s %s", cmd, params[0], params[1], params[2] );


        // nothing on line, use last working command
        if( -1 == scan_ret ) {
            if( last_cmd[0] ) {
                scan_ret = 1;
                strcpy( cmd, last_cmd );

                for( i = 0; i < 3; ++i ) 
                    if( last_params[i][0] ) {
                        scan_ret++;
                        strcpy( params[i], last_params[i] );
                    } else
                        params[i][0] = 0;
            } else
                continue;
        }

        // make history
        strcpy( last_cmd, cmd );
        for( i = 0; i < 3; ++i )
            strcpy( last_params[i], params[i] );

        // continue program execution
        if( !strcmp( cmd, "c" ) || !strcmp( cmd, "continue" ) )
            break;

        // break on next GL func
        else if( !strcmp( cmd, "n" ) || !strcmp( cmd, "next" ) ) {
            break_next = 1;
            break;
        }

        // check for breakpoints listing
        else if( !strcmp( cmd, "l" ) || !strcmp( cmd, "list" ) ) {
            int found_one = 0;
            int i;
            for( i = 0; i < GLDL_FUNC_N; ++i ) {
                if( -1 == break_functions[i] ) break;
                if( -2 == break_functions[i] ) continue;
                printf( "Breakpoint %d on function %s()\n", i, gl_functions[break_functions[i]] );
                found_one = 1;
            }

            if( !found_one )
                printf( "No breakpoints set.\n" );
        }

        // check for buffers listing
        else if( !strcmp( cmd, "lb" ) || !strcmp( cmd, "listbuffer" ) ) 
            ListBuffers();

        // check for shaders listing
        else if( !strcmp( cmd, "ls" ) || !strcmp( cmd, "listshaders" ) ) 
            ListShaders();

        // check for programs listing
        else if( !strcmp( cmd, "lp" ) || !strcmp( cmd, "listprograms" ) ) 
            ListPrograms();

        // check for textures listing
        else if( !strcmp( cmd, "lt" ) || !strcmp( cmd, "listtextures" ) ) 
            ListTextures();

        // check for break demand on GL function
        else if( !strcmp( cmd, "b" ) || !strcmp( cmd, "break" ) ) {
            // retrieve function name index
            int index = -1;

            // check for parameter
            if( scan_ret != 2 ) {
                printf( "Break usage : [b]reak function_name.\n" );
                continue;
            }

            int i;
            for( i = 0; i < ''' + str(len(names)) + '''; ++i ) {
                int cmp = strcmp( params[0], gl_functions[i] );

                if( !cmp ) {
                    index = i;
                    break;
                }
                else if( cmp < 0 ) {
                    printf( "%s is not a valid GL function!\\n", params[0] );
                    break;
                }
            }

            if( index >= 0 ) {
                int i;
                // insert function name index in next free spot
                for( i = 0; i < GLDL_FUNC_N; ++i )
                    if( 0 > break_functions[i] ) {
                        break_functions[i] = index;
                        printf( "Breakpoint %d, %s()\\n", i, params[0] );
                        break;
                    }
            }
        }

        // check for breakpoints deletion
        else if( !strcmp( cmd, "d" ) || !strcmp( cmd, "delete" ) ) {
            // get confirmation
            char str[4];
            char c;

            // if one param, delete wanted breakpoint
            if( 2 == scan_ret ) {
                int index = atoi( params[0] );
                if( index < 0 || index >= GLDL_FUNC_N  || ( !index && strcmp( params[0], "0" ) ) || -1 == break_functions[index] ) {
                    printf( "Breakpoint %s does not exist\\n", params[0] );
                } else {
                    break_functions[index] = -2;
                    printf( "Breakpoint %d deleted\\n", index );
                }
                continue;
            }
            
            else if( 1 == scan_ret ) {
                // no param, ask for global deletion
                while( 1 ) {
                    printf( "Delete all breakpoints? (y or n) " );
                    gets( str );
                    sscanf( str, "%c", &c );

                    if( 'n' == c )
                        break;
                    if( 'y' == c ) {
                        int i;
                        for( i = 0; i < GLDL_FUNC_N; ++i ) {
                            if( -1 == break_functions[i] ) break;
                            break_functions[i] = -1;
                        }
                        break;
                    }
                }
                continue;
            } else {
                printf( "Delete usage : [d]elete [breakpoint_id].\\nIf no breakpoint_id specified, will ask to delete all breakpoints.\\n" );
            }
        }

        // print buffer data
        else if( !strcmp( cmd, "pb" ) || !strcmp( cmd, "printbuffer" ) ) {
            // check for param
            if( scan_ret < 2 ) {
                printf( "Printbuffer usage : [p]rint[b]uffer buffer_id [type_size [elem_size]].\\n"\\
                        "  type_size is the number of component of the type of data (default = 1).\\n"\\
                        "    Ex : for a vec3, specify 3 as the type_size\\n"\\
                        "  elem_size is the size of one value of the buffer, in bytes (default = 4).\\n"\\
                        "    Ex : for shorts, precise 2, for bytes, precise 1, etc..\\n" );
                continue;
            }

            int index = atoi( params[0] );
            int elem_size = 4;
            int type_size = 1;

            if( scan_ret >= 3 ) {
                type_size = atoi( params[1] );
                
                if( scan_ret > 3 )
                    elem_size = atoi( params[2] );
            }

            PrintBuffer( index, type_size, elem_size );
        }

        // print program data
        else if( !strcmp( cmd, "pp" ) || !strcmp( cmd, "printprogram" ) ) {
            // check for param
            if( scan_ret != 2 ) {
                printf( "Printprogram usage : [p]rint[p]rogram program_id.\\n" );
                continue;
            }

            int id = atoi( params[0] );
            PrintProgram( id );
        }

        // print shader data
        else if( !strcmp( cmd, "ps" ) || !strcmp( cmd, "printshader" ) ) {
            // check for param
            if( scan_ret != 2 ) {
                printf( "Printshader usage : [p]rint[s]hader shader_id.\\n" );
                continue;
            }

            int id = atoi( params[0] );
            PrintShader( id );
        }

        // open texture visualisation window
        else if( !strcmp( cmd, "pt" ) || !strcmp( cmd, "printtexture" ) ) {
            // check for param
            if( scan_ret < 2 ) {
                printf( "Printtexture usage : [p]rint[t]exture texture_id [reverse].\\n"\\
                        "  reverse will reverse the texture on the Y axis.\\n" );
                continue;
            }

            int id = atoi( params[0] );
            int reverse = 1;

            if( scan_ret == 3 ) 
                reverse = atoi( params[1] );

            ShowTexture( id, reverse );
        }

        // print OpenGL states
        else if( !strcmp( cmd, "pst" ) || !strcmp( cmd, "printstate" ) ) {
            // check for param (at least one)
            if( scan_ret < 2 ) {
                printf( "Printstate usage : [p]rint[st]ate state [param].\\n"\\
                        "List of states :\\n"\\
                        "  ACTIVE_TEXTURE_UNIT   : the currently active texture unit.\\n"\\
                        "  BOUND_TEXTURE [unit]  : the currently bound texture on the given unit.\\n"\\
                        "  BOUND_BUFFER [target] : the currently bound buffer on the given target (ARRAY_BUFFER or ELEMENT_ARRAY_BUFFER).\\n"\\
                        "  BOUND_VERTEXARRAY     : the currently bound vertex array object.\\n"\\
                        "  BOUND_PROGRAM         : the currently bound shader program.\\n"\\
                        "  DEPTH_TEST            : whether GL_DEPTH_TEST is on or not.\\n"\\
                        "  BLEND                 : whether GL_BLEND is on or not.\\n"\\
                        "  FACE_CULLING          : whether GL_CULL_FACE is on or not.\\n"\\
                        "  CULLED_FACE           : the currently culled face.\\n"\\
                        "  BLEND_FUNC            : the source and dest factors of the blending function.\\n"\\
                        "  TEXTURE_FILTER [type] : the texture filter for type (MIN or MAG).\\n"\\
                        "  TEXTURE_WRAP [type]   : the texture wrap for type (S or T).\\n"
                      );
                continue;
            }

            // switch on state
            if( !strcmp( params[0], "ACTIVE_TEXTURE_UNIT" ) ) {
                printf( "Current texture unit : GL_TEXTURE%d.\\n", gldl_textures.current_unit );
                continue;
            }
            else if( !strcmp( params[0], "BOUND_TEXTURE" ) ) {
                if( scan_ret < 3 ) {
                    printf( "Usage : [p]rint[st]ate BOUND_TEXTURE texture_unit(int).\\n" ); 
                } else {
                    int unit = atoi( params[1] );
                    if( ( !unit && strcmp( params[1], "0" ) ) || unit >= 8 ) 
                        printf( "Invalid texture unit (must be integer < 8).\\n" );
                    else
                        printf( "Texture bound on unit %d : %d.\\n", unit, gldl_textures.bound_textures[unit] );
                }
                continue;
            }
            else if( !strcmp( params[0], "BOUND_BUFFER" ) ) {
                if( scan_ret < 3 ) {
                    printf( "Usage : [p]rint[st]ate BOUND_BUFFER target(ARRAY_BUFFER or ELEMENT_ARRAY_BUFFER).\\n" );
                } else {
                    if( !strcmp( params[1], "ARRAY_BUFFER" ) )
                        printf( "Buffer bound on GL_ARRAY_BUFFER : %d.\\n", gldl_buffers.bound_array_b );
                    else if( !strcmp( params[1], "ELEMENT_ARRAY_BUFFER" ) )
                        printf( "Buffer bound on GL_ELEMENT_ARRAY_BUFFER : %d.\\n", gldl_buffers.bound_elem_array_b );
                    else
                        printf( "Invalid buffer array type.\\n" );
                }
                continue;
            }
            else if( !strcmp( params[0], "BOUND_VERTEXARRAY" ) ) {
                printf( "Currently used vertex array : %d.\\n", gldl_states.bound_vao );
                continue;
            }   
            else if( !strcmp( params[0], "BOUND_PROGRAM" ) ) {
                printf( "Currently used shader program : %d.\\n", gldl_programs.bound_program );
                continue;
            }
            else if( !strcmp( params[0], "DEPTH_TEST" ) ) {
                printf( "GL_DEPTH_TEST is %s.\\n", gldl_states.depth_test ? "on" : "off" );
                continue; 
            }
            else if( !strcmp( params[0], "BLEND" ) ) {
                printf( "GL_BLEND is %s.\\n", gldl_states.blend ? "on" : "off" );
                continue; 
            }
            else if( !strcmp( params[0], "FACE_CULLING" ) ) {
                printf( "GL_CULL_FACE is %s.\\n", gldl_states.face_culling ? "on" : "off" );
                continue; 
            }
            else if( !strcmp( params[0], "CULLED_FACE" ) ) {
                char face[32];

                if( gldl_states.culled_face == GL_FRONT ) strcpy( face, "GL_FRONT" );
                if( gldl_states.culled_face == GL_BACK ) strcpy( face, "GL_BACK" );
                if( gldl_states.culled_face == GL_FRONT_AND_BACK ) strcpy( face, "GL_FRONT_AND_BACK" );

                printf( "The culled face is %s.\\n", face );
                continue; 
            }
            else if( !strcmp( params[0], "BLEND_FUNC" ) ) {
                char dfactor[32], sfactor[32];
                char *dst_str = sfactor;
                int  ifactor = gldl_states.blendfunc_src;
                int  i;

                for( i = 0; i < 2; ++i ) {
                    switch( ifactor ) {
                    case GL_ONE : strcpy( dst_str, "GL_ONE" ); break;
                    case GL_ZERO : strcpy( dst_str, "GL_ZERO" ); break;
                    case GL_SRC_COLOR : strcpy( dst_str, "GL_SRC_COLOR" ); break;
                    case GL_DST_COLOR : strcpy( dst_str, "GL_DST_COLOR" ); break;
                    case GL_SRC_ALPHA : strcpy( dst_str, "GL_SRC_ALPHA" ); break;
                    case GL_DST_ALPHA : strcpy( dst_str, "GL_DST_ALPHA" ); break;
                    case GL_CONSTANT_COLOR : strcpy( dst_str, "GL_CONSTANT_COLOR" ); break;
                    case GL_CONSTANT_ALPHA : strcpy( dst_str, "GL_CONSTANT_ALPHA" ); break;
                    case GL_SRC_ALPHA_SATURATE : strcpy( dst_str, "GL_SRC_ALPHA_SATURATE" ); break;
                    case GL_SRC1_COLOR : strcpy( dst_str, "GL_SRC1_COLOR" ); break;
                    #ifdef GL_SRC1_ALPHA
                    case GL_SRC1_ALPHA : strcpy( dst_str, "GL_SRC1_ALPHA" ); break;
                    #endif

                    case GL_ONE_MINUS_SRC_COLOR : strcpy( dst_str, "GL_ONE_MINUS_SRC_COLOR" ); break;
                    case GL_ONE_MINUS_DST_COLOR : strcpy( dst_str, "GL_ONE_MINUS_DST_COLOR" ); break;
                    case GL_ONE_MINUS_SRC_ALPHA : strcpy( dst_str, "GL_ONE_MINUS_SRC_ALPHA" ); break;
                    case GL_ONE_MINUS_DST_ALPHA : strcpy( dst_str, "GL_ONE_MINUS_DST_ALPHA" ); break;
                    case GL_ONE_MINUS_CONSTANT_COLOR : strcpy( dst_str, "GL_ONE_MINUS_CONSTANT_COLOR" ); break;
                    case GL_ONE_MINUS_CONSTANT_ALPHA : strcpy( dst_str, "GL_ONE_MINUS_CONSTANT_ALPHA" ); break;
                    case GL_ONE_MINUS_SRC1_COLOR : strcpy( dst_str, "GL_ONE_MINUS_SRC1_COLOR" ); break;
                    case GL_ONE_MINUS_SRC1_ALPHA : strcpy( dst_str, "GL_ONE_MINUS_SRC1_ALPHA" ); break;
                    default : strcpy( dst_str, "Invalid factor" ); break;
                    }
                    dst_str = dfactor;
                    ifactor = gldl_states.blendfunc_dest;
                }

                printf( "Source factor is %s. Destination factor is %s.\\n", sfactor, dfactor );
                continue;
            }
            else if( !strcmp( params[0], "TEXTURE_FILTER" ) ) {
                if( scan_ret < 3 ) {
                    printf( "Usage : [p]rint[st]ate TEXTURE_FILTER filter(MAG or MIN).\\n" );
                } else {
                    int type;
                    char filter[32];
                    if( !strcmp( params[1], "MIN" ) )
                        type = gldl_states.min_filter;
                    else if( !strcmp( params[1], "MAG" ) ) 
                        type = gldl_states.mag_filter;
                    else {
                        printf( "Invalid texture filter type.\\n" );
                        continue;
                    }

                    if( type == GL_NEAREST ) strcpy( filter, "GL_NEAREST" );
                    if( type == GL_LINEAR ) strcpy( filter, "GL_LINEAR" );
                    if( type == GL_NEAREST_MIPMAP_NEAREST ) strcpy( filter, "GL_NEAREST_MIPMAP_NEAREST" );
                    if( type == GL_LINEAR_MIPMAP_NEAREST ) strcpy( filter, "GL_LINEAR_MIPMAP_NEAREST" );
                    if( type == GL_NEAREST_MIPMAP_LINEAR ) strcpy( filter, "GL_NEAREST_MIPMAP_LINEAR" );
                    if( type == GL_LINEAR_MIPMAP_LINEAR ) strcpy( filter, "GL_LINEAR_MIPMAP_LINEAR" );

                    printf( "%s texture filter : %s.\\n", type == gldl_states.min_filter ? "Min" : "Mag", filter );
                }
                continue; 
            }
            else if( !strcmp( params[0], "TEXTURE_WRAP" ) ) {
                if( scan_ret < 3 ) {
                    printf( "Usage : [p]rint[st]ate TEXTURE_WRAP wrap(S or T).\\n" );
                } else {
                    int type;
                    char wrap[32];
                    if( !strcmp( params[1], "S" ) )
                        type = gldl_states.wrap_s;
                    else if( !strcmp( params[1], "T" ) ) 
                        type = gldl_states.wrap_t;
                    else {
                        printf( "Invalid texture filter type.\\n" );
                        continue;
                    }
                    
                    if( type == GL_CLAMP_TO_EDGE ) strcpy( wrap, "GL_CLAMP_TO_EDGE" );
                    if( type == GL_CLAMP_TO_BORDER ) strcpy( wrap, "GL_CLAMP_TO_BORDER" );
                    if( type == GL_MIRRORED_REPEAT ) strcpy( wrap, "GL_MIRRORED_REPEAT" );
                    if( type == GL_REPEAT ) strcpy( wrap, "GL_REPEAT" );

                    printf( "Texture wrap_%s : %s.\\n", type == gldl_states.wrap_s ? "s" : "t", wrap );
                }
                continue;
            }
            else
                printf( "Invalid state name.\\n" );
        }

        // print help
        else if( !strcmp( cmd, "h" ) || !strcmp( cmd, "help" ) ) {
            printf( "GLDL commands :\\n\\n" \\
                    "  [c]ontinue         - Continue the execution, until the next breakpoint.\\n" \\
                    "  [n]ext             - Continue the execution, until the next GL function.\\n" \\
                    "  [b]reak            - Sets a breakpoint on a GL function.\\n" \\
                    "  [d]elete           - Delete a breakpoint.\\n" \\
                    "  [q]uit             - Quit the program.\\n" \\
                    "  [l]ist             - List all breakpoints.\\n" \\
                    "  [l]ist[b]uffers    - List all GL buffers.\\n" \\
                    "  [l]ist[s]haders    - List all GL shaders.\\n" \\
                    "  [l]ist[p]rograms   - List all GL programs.\\n" \\
                    "  [l]ist[t]extures   - List all GL textures.\\n" \\
                    "  [p]rint[b]uffer    - Print the given GL buffer.\\n" \\
                    "  [p]rint[s]hader    - Print the given GL shader source.\\n" \\
                    "  [p]rint[p]rogram   - Print the given GL shader program.\\n" \\
                    "  [p]rint[t]exture   - Display the given GL texture.\\n" \\
                    "  [p]rint[st]ate     - Print the given GL state.\\n\\n" \\
                    "Using the commands without arguments will in some cases give additional informations on the usage.\\n\\n"
                  );
            continue;
        }

        // quit program (violently)
        else if( !strcmp( cmd, "q" ) || !strcmp( cmd, "quit" ) ) {
            // get confirmation
            char str[4];
            char c;

            printf( "GLDL Debugging session active.\\n" );

            while( 1 ) {
                printf( "Quit anyway ? (y or n) " );
                gets( str );
                sscanf( str, "%c", &c );

                if( 'n' == c )
                    break;
                if( 'y' == c ) 
                    exit( 1 );
            }
        }

        // no match, show help
        else 
            nomatch = 1;

        
        // show error if invalid command
        if( nomatch ) {
            printf( "Invalid command \\"%s\\". Try \\"help\\"\\n", cmd );
            nomatch = 0;
        }
    }
}

''')


gldl_c.write( r'''
// Load all GL procedures implementation
static void LoadProcs() {
''')

for i in range( len(names) ) :
    gldl_c.write( "\tgldl" + names[i][2:] + "_impl = (PFN" + names[i].upper() + "PROC) GetProc( \"" + names[i] + "\" );\n" )


gldl_c.write( r'''
}




// ###################################################################
// GLDL Debug Functions
''')

def IsNumericParam( param ) :
    return param == "GLboolean" or param == "GLbyte" or param == "GLshort" or param == "GLint" or param == "GLsizei" or param == "GLubyte" or param == "GLushort" or param == "GLuint" or param == "GLhalf"

def IsNumericPtr( param ) :
    return param == "GLsizeiptr" or param == "GLintptr"

def IsFloatParam( param ) :
    return param == "GLfloat" or param == "GLclampf" or param == "GLdouble" or param == "GLclampd"

# Write all GLDL functions
for i in range( len(names) ) :
    # printf-like formats for function params
    formats = []
    values = []

    # get function param names
    param_names = parameters[i].split( "," )
    for j in range( len(param_names) ) :
        if( param_names[j] != "" ) :
            param_names[j] = param_names[j].split()[-1]
            param_names[j] = param_names[j].replace( "*", "" )

    # get function param types
    param_types = parameters[i].split( ", " )
    types = []
    for j in range( len(param_types) ) :
        spl = param_types[j].split( " " )
        if len(spl[0]) > 0 :
            if spl[-1][0] == "*" :
                spl[-2] = spl[-2] + "*"
            type_name = spl[0]
            for type_n in spl[1:-1] :
                type_name = type_name + " " + type_n
            types.append( type_name )
            
            # Fill formats and format_value arrays (used when writing trace)
            if IsNumericParam( types[j] ) : 
                formats.append( "d" )
                values.append( param_names[j] )
            elif IsNumericPtr( types[j] ) :
                formats.append( "d" )
                values.append( "(int)" + param_names[j] )
            elif IsFloatParam( types[j] ) :
                formats.append( "f" )
                values.append( "(float)" + param_names[j] )
            # pointer, show pointer address
            elif types[j][-1] == "*" :
                formats.append( "p" )
                values.append( param_names[j] )
            else :
                formats.append( "s" )
                values.append( "arg" + str(j) )
        else :
            types.append( "" )
        
    

    # Write signature
    if( parameters_n[i] == 0 ) :
        gldl_c.write( return_types[i] + " gldl" + names[i][2:] + " ( const char *file, int line ) {\n" )
    else :
        gldl_c.write( return_types[i] + " gldl" + names[i][2:] + " ( " + parameters[i] + ", " )
        for j in range( parameters_n[i] - 1 ) :
            gldl_c.write( "const char *arg" + str(j) + ", " )
        gldl_c.write( "const char *arg" + str(parameters_n[i]-1) + ", const char *file, int line ) {\n" )

    # If glClear, add init_trace ending
    if names[i] == "glClear" :
        gldl_c.write( r'''    if( gldl_traces[0].started ) {
        gldl_traces[0].started = 0;
        fclose( gldl_traces[0].f );
    }

    ''' )


    # Write traces
    gldl_c.write( r'''    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: ''' + names[i] + '''(''' )
    if( parameters_n[i] == 0 ) :
        gldl_c.write( ");\\n\", file, line );\n" )
    else :
        # print formats
        for j in range( parameters_n[i] - 1 ) :
            gldl_c.write( " %" + formats[j] + "," )
        gldl_c.write( " %" + formats[-1] + " );\\n\", file, line, " )

        # print values
        for j in range( parameters_n[i] - 1 ) :
            gldl_c.write( values[j] + ", " )
        gldl_c.write( " " + values[-1] + " );\n" )

    # Write interactive debug
    gldl_c.write( r'''
    DebugTest( ''' + str(sorted_names.index( names[i] )) + ''' );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on ''' + names[i] + '''( ''')
        
    # print all args and their values
    if parameters_n[i] == 0 :
        gldl_c.write( ") at %s:%d\\n\", debug_break, file, line );\n" )
    else :
        # print formats
        for j in range( parameters_n[i] - 1 ) :
            gldl_c.write( param_names[j] + "=%" + formats[j] + ", " )
        gldl_c.write( param_names[-1] + "=%" + formats[-1] + " ) at %s:%d\\n\", debug_break, " )

        # print values
        for j in range( parameters_n[i] - 1 ) :
            gldl_c.write( values[j] + ", ")
        gldl_c.write( values[-1] + ", file, line );" )


    gldl_c.write( r'''
        DebugFunction();
    }
    ''' )

   
    # Return the value of GL impl if needed
    if( return_types[i] != "void" ) :
        gldl_c.write( return_types[i] + " ret = " )

    gldl_c.write( "gldl" + names[i][2:] + "_impl( " )
    for j in range( parameters_n[i] - 1 ) :
        gldl_c.write( param_names[j] + ", " )

    gldl_c.write( param_names[parameters_n[i] - 1] + " );\n" )
    
    
    # Handle Buffer functions
    if names[i] == "glGenBuffers" :
        gldl_c.write( "\tAddBuffers( n, buffers );\n" )
    elif names[i] == "glDeleteBuffers" :
        gldl_c.write( "\tDeleteBuffers( n, buffers );\n" )
    elif names[i] == "glBindBuffer" :
        gldl_c.write( "\tBindBuffer( buffer, target == GL_ARRAY_BUFFER ? 0 : 1 );\n" )
    elif names[i] == "glBufferData" :
        gldl_c.write( "\tFillBuffer( data, size, 0, target == GL_ARRAY_BUFFER ? 0 : 1 );\n" )
    elif names[i] == "glBufferSubData" :
        gldl_c.write( "\tFillBuffer( data, size, offset, target == GL_ARRAY_BUFFER ? 0 : 1 );\n" )

    # Handle Shader functions
    elif names[i] == "glCreateShader" :
        gldl_c.write( "\tAddShader( ret, type );\n" )
    elif names[i] == "glCreateProgram" :
        gldl_c.write( "\tAddProgram( ret );\n" )
    elif names[i] == "glDeleteProgram" :
        gldl_c.write( "\tDeleteProgram( program );\n" );
    elif names[i] == "glShaderSource" :
        gldl_c.write( "\tSetShaderSource( shader, string[0] );\n" );
    elif names[i] == "glAttachShader" :
        gldl_c.write( "\tAttachShader( program, shader );\n" );
    elif names[i] == "glDetachShader" :
        gldl_c.write( "\tDetachShader( program, shader );\n" );
    elif names[i] == "glUseProgram" :
        gldl_c.write( "\tBindProgram( program );\n" );

    # Handle Textures functions
    elif names[i] == "glGenTextures" :
        gldl_c.write( "\tAddTextures( n, textures );\n" );
    elif names[i] == "glDeleteTextures" :
        gldl_c.write( "\tDeleteTextures( n, textures );\n" );
    elif names[i] == "glTexImage2D" :
        gldl_c.write( "\tSetTextureSize( gldl_textures.bound_textures[gldl_textures.current_unit], width, height );\n" );
    elif names[i] == "glBindTexture" :
        gldl_c.write( "\tBindTexture( texture );\n" );
    elif names[i] == "glActiveTexture" :
        gldl_c.write( "\tSetTextureUnit( texture );\n" );

    # Handle GL states
    elif names[i] == "glEnable" :
        gldl_c.write( r'''
    if( cap == GL_DEPTH_TEST ) gldl_states.depth_test = 1;
    if( cap == GL_CULL_FACE ) gldl_states.face_culling = 1;
    if( cap == GL_BLEND ) gldl_states.blend = 1;
    ''' )
    elif names[i] == "glDisable" :
        gldl_c.write( r'''
    if( cap == GL_DEPTH_TEST ) gldl_states.depth_test = 0;
    if( cap == GL_CULL_FACE ) gldl_states.face_culling = 0;
    if( cap == GL_BLEND ) gldl_states.blend = 0;
    ''' )
    elif names[i] == "glCullFace" :
        gldl_c.write( "\tgldl_states.culled_face = mode;\n" )
    elif names[i] == "glBlendFunc" :
        gldl_c.write( "\tgldl_states.blendfunc_src = sfactor;\n\tgldl_states.blendfunc_dest = dfactor;\n" )
    elif names[i] == "glTexParameteri" :
        gldl_c.write( r'''
    if( pname == GL_TEXTURE_MAG_FILTER ) gldl_states.mag_filter = param;
    if( pname == GL_TEXTURE_MIN_FILTER ) gldl_states.min_filter = param;
    if( pname == GL_TEXTURE_WRAP_S ) gldl_states.wrap_s = param;
    if( pname == GL_TEXTURE_WRAP_T ) gldl_states.wrap_t = param;
    ''' )
    elif names[i] == "glBindVertexArray" :
        gldl_c.write( "\tgldl_states.bound_vao = array;\n" )



    if( return_types[i] != "void" ) :
        gldl_c.write( "\treturn ret;\n" );

    gldl_c.write( "}\n" )
    

