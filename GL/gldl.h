
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


// Debug version of GL functions
// Parameters :
//      - GL original parameters
//      - String representing their names (equal number)
//      - String representing the file where the call has been recorded
//      - Int representing the line where the call has been recorded
void gldlCullFace ( GLenum mode, const char *, const char *, int );
void gldlFrontFace ( GLenum mode, const char *, const char *, int );
void gldlHint ( GLenum target, GLenum mode, const char *, const char *, const char *, int );
void gldlLineWidth ( GLfloat width, const char *, const char *, int );
void gldlPointSize ( GLfloat size, const char *, const char *, int );
void gldlPolygonMode ( GLenum face, GLenum mode, const char *, const char *, const char *, int );
void gldlScissor ( GLint x, GLint y, GLsizei width, GLsizei height, const char *, const char *, const char *, const char *, const char *, int );
void gldlTexParameterf ( GLenum target, GLenum pname, GLfloat param, const char *, const char *, const char *, const char *, int );
void gldlTexParameterfv ( GLenum target, GLenum pname, const GLfloat *params, const char *, const char *, const char *, const char *, int );
void gldlTexParameteri ( GLenum target, GLenum pname, GLint param, const char *, const char *, const char *, const char *, int );
void gldlTexParameteriv ( GLenum target, GLenum pname, const GLint *params, const char *, const char *, const char *, const char *, int );
void gldlTexImage1D ( GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const GLvoid *pixels, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlTexImage2D ( GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid *pixels, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlDrawBuffer ( GLenum mode, const char *, const char *, int );
void gldlClear ( GLbitfield mask, const char *, const char *, int );
void gldlClearColor ( GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha, const char *, const char *, const char *, const char *, const char *, int );
void gldlClearStencil ( GLint s, const char *, const char *, int );
void gldlClearDepth ( GLclampd depth, const char *, const char *, int );
void gldlStencilMask ( GLuint mask, const char *, const char *, int );
void gldlColorMask ( GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha, const char *, const char *, const char *, const char *, const char *, int );
void gldlDepthMask ( GLboolean flag, const char *, const char *, int );
void gldlDisable ( GLenum cap, const char *, const char *, int );
void gldlEnable ( GLenum cap, const char *, const char *, int );
void gldlFinish ( const char *, int );
void gldlFlush ( const char *, int );
void gldlBlendFunc ( GLenum sfactor, GLenum dfactor, const char *, const char *, const char *, int );
void gldlLogicOp ( GLenum opcode, const char *, const char *, int );
void gldlStencilFunc ( GLenum func, GLint ref, GLuint mask, const char *, const char *, const char *, const char *, int );
void gldlStencilOp ( GLenum fail, GLenum zfail, GLenum zpass, const char *, const char *, const char *, const char *, int );
void gldlDepthFunc ( GLenum func, const char *, const char *, int );
void gldlPixelStoref ( GLenum pname, GLfloat param, const char *, const char *, const char *, int );
void gldlPixelStorei ( GLenum pname, GLint param, const char *, const char *, const char *, int );
void gldlReadBuffer ( GLenum mode, const char *, const char *, int );
void gldlReadPixels ( GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid *pixels, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlGetBooleanv ( GLenum pname, GLboolean *params, const char *, const char *, const char *, int );
void gldlGetDoublev ( GLenum pname, GLdouble *params, const char *, const char *, const char *, int );
GLenum gldlGetError ( const char *, int );
void gldlGetFloatv ( GLenum pname, GLfloat *params, const char *, const char *, const char *, int );
void gldlGetIntegerv ( GLenum pname, GLint *params, const char *, const char *, const char *, int );
const GLubyte * gldlGetString ( GLenum name, const char *, const char *, int );
void gldlGetTexImage ( GLenum target, GLint level, GLenum format, GLenum type, GLvoid *pixels, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlGetTexParameterfv ( GLenum target, GLenum pname, GLfloat *params, const char *, const char *, const char *, const char *, int );
void gldlGetTexParameteriv ( GLenum target, GLenum pname, GLint *params, const char *, const char *, const char *, const char *, int );
void gldlGetTexLevelParameterfv ( GLenum target, GLint level, GLenum pname, GLfloat *params, const char *, const char *, const char *, const char *, const char *, int );
void gldlGetTexLevelParameteriv ( GLenum target, GLint level, GLenum pname, GLint *params, const char *, const char *, const char *, const char *, const char *, int );
GLboolean gldlIsEnabled ( GLenum cap, const char *, const char *, int );
void gldlDepthRange ( GLclampd near, GLclampd far, const char *, const char *, const char *, int );
void gldlViewport ( GLint x, GLint y, GLsizei width, GLsizei height, const char *, const char *, const char *, const char *, const char *, int );
void gldlDrawArrays ( GLenum mode, GLint first, GLsizei count, const char *, const char *, const char *, const char *, int );
void gldlDrawElements ( GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, const char *, const char *, const char *, const char *, const char *, int );
void gldlGetPointerv ( GLenum pname, GLvoid* *params, const char *, const char *, const char *, int );
void gldlPolygonOffset ( GLfloat factor, GLfloat units, const char *, const char *, const char *, int );
void gldlCopyTexImage1D ( GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlCopyTexImage2D ( GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlCopyTexSubImage1D ( GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width, const char *, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlCopyTexSubImage2D ( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlTexSubImage1D ( GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid *pixels, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlTexSubImage2D ( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlBindTexture ( GLenum target, GLuint texture, const char *, const char *, const char *, int );
void gldlDeleteTextures ( GLsizei n, const GLuint *textures, const char *, const char *, const char *, int );
void gldlGenTextures ( GLsizei n, GLuint *textures, const char *, const char *, const char *, int );
GLboolean gldlIsTexture ( GLuint texture, const char *, const char *, int );
void gldlBlendColor ( GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha, const char *, const char *, const char *, const char *, const char *, int );
void gldlBlendEquation ( GLenum mode, const char *, const char *, int );
void gldlDrawRangeElements ( GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid *indices, const char *, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlTexImage3D ( GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid *pixels, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlTexSubImage3D ( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid *pixels, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlCopyTexSubImage3D ( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlActiveTexture ( GLenum texture, const char *, const char *, int );
void gldlSampleCoverage ( GLclampf value, GLboolean invert, const char *, const char *, const char *, int );
void gldlCompressedTexImage3D ( GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid *data, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlCompressedTexImage2D ( GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid *data, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlCompressedTexImage1D ( GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid *data, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlCompressedTexSubImage3D ( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid *data, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlCompressedTexSubImage2D ( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid *data, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlCompressedTexSubImage1D ( GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid *data, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlGetCompressedTexImage ( GLenum target, GLint level, GLvoid *img, const char *, const char *, const char *, const char *, int );
void gldlBlendFuncSeparate ( GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha, const char *, const char *, const char *, const char *, const char *, int );
void gldlMultiDrawArrays ( GLenum mode, const GLint *first, const GLsizei *count, GLsizei primcount, const char *, const char *, const char *, const char *, const char *, int );
void gldlMultiDrawElements ( GLenum mode, const GLsizei *count, GLenum type, const GLvoid* *indices, GLsizei primcount, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlPointParameterf ( GLenum pname, GLfloat param, const char *, const char *, const char *, int );
void gldlPointParameterfv ( GLenum pname, const GLfloat *params, const char *, const char *, const char *, int );
void gldlPointParameteri ( GLenum pname, GLint param, const char *, const char *, const char *, int );
void gldlPointParameteriv ( GLenum pname, const GLint *params, const char *, const char *, const char *, int );
void gldlGenQueries ( GLsizei n, GLuint *ids, const char *, const char *, const char *, int );
void gldlDeleteQueries ( GLsizei n, const GLuint *ids, const char *, const char *, const char *, int );
GLboolean gldlIsQuery ( GLuint id, const char *, const char *, int );
void gldlBeginQuery ( GLenum target, GLuint id, const char *, const char *, const char *, int );
void gldlEndQuery ( GLenum target, const char *, const char *, int );
void gldlGetQueryiv ( GLenum target, GLenum pname, GLint *params, const char *, const char *, const char *, const char *, int );
void gldlGetQueryObjectiv ( GLuint id, GLenum pname, GLint *params, const char *, const char *, const char *, const char *, int );
void gldlGetQueryObjectuiv ( GLuint id, GLenum pname, GLuint *params, const char *, const char *, const char *, const char *, int );
void gldlBindBuffer ( GLenum target, GLuint buffer, const char *, const char *, const char *, int );
void gldlDeleteBuffers ( GLsizei n, const GLuint *buffers, const char *, const char *, const char *, int );
void gldlGenBuffers ( GLsizei n, GLuint *buffers, const char *, const char *, const char *, int );
GLboolean gldlIsBuffer ( GLuint buffer, const char *, const char *, int );
void gldlBufferData ( GLenum target, GLsizeiptr size, const GLvoid *data, GLenum usage, const char *, const char *, const char *, const char *, const char *, int );
void gldlBufferSubData ( GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid *data, const char *, const char *, const char *, const char *, const char *, int );
void gldlGetBufferSubData ( GLenum target, GLintptr offset, GLsizeiptr size, GLvoid *data, const char *, const char *, const char *, const char *, const char *, int );
GLvoid* gldlMapBuffer ( GLenum target, GLenum access, const char *, const char *, const char *, int );
GLboolean gldlUnmapBuffer ( GLenum target, const char *, const char *, int );
void gldlGetBufferParameteriv ( GLenum target, GLenum pname, GLint *params, const char *, const char *, const char *, const char *, int );
void gldlGetBufferPointerv ( GLenum target, GLenum pname, GLvoid* *params, const char *, const char *, const char *, const char *, int );
void gldlBlendEquationSeparate ( GLenum modeRGB, GLenum modeAlpha, const char *, const char *, const char *, int );
void gldlDrawBuffers ( GLsizei n, const GLenum *bufs, const char *, const char *, const char *, int );
void gldlStencilOpSeparate ( GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass, const char *, const char *, const char *, const char *, const char *, int );
void gldlStencilFuncSeparate ( GLenum face, GLenum func, GLint ref, GLuint mask, const char *, const char *, const char *, const char *, const char *, int );
void gldlStencilMaskSeparate ( GLenum face, GLuint mask, const char *, const char *, const char *, int );
void gldlAttachShader ( GLuint program, GLuint shader, const char *, const char *, const char *, int );
void gldlBindAttribLocation ( GLuint program, GLuint index, const GLchar *name, const char *, const char *, const char *, const char *, int );
void gldlCompileShader ( GLuint shader, const char *, const char *, int );
GLuint gldlCreateProgram ( const char *, int );
GLuint gldlCreateShader ( GLenum type, const char *, const char *, int );
void gldlDeleteProgram ( GLuint program, const char *, const char *, int );
void gldlDeleteShader ( GLuint shader, const char *, const char *, int );
void gldlDetachShader ( GLuint program, GLuint shader, const char *, const char *, const char *, int );
void gldlDisableVertexAttribArray ( GLuint index, const char *, const char *, int );
void gldlEnableVertexAttribArray ( GLuint index, const char *, const char *, int );
void gldlGetActiveAttrib ( GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlGetActiveUniform ( GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlGetAttachedShaders ( GLuint program, GLsizei maxCount, GLsizei *count, GLuint *obj, const char *, const char *, const char *, const char *, const char *, int );
GLint gldlGetAttribLocation ( GLuint program, const GLchar *name, const char *, const char *, const char *, int );
void gldlGetProgramiv ( GLuint program, GLenum pname, GLint *params, const char *, const char *, const char *, const char *, int );
void gldlGetProgramInfoLog ( GLuint program, GLsizei bufSize, GLsizei *length, GLchar *infoLog, const char *, const char *, const char *, const char *, const char *, int );
void gldlGetShaderiv ( GLuint shader, GLenum pname, GLint *params, const char *, const char *, const char *, const char *, int );
void gldlGetShaderInfoLog ( GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *infoLog, const char *, const char *, const char *, const char *, const char *, int );
void gldlGetShaderSource ( GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *source, const char *, const char *, const char *, const char *, const char *, int );
GLint gldlGetUniformLocation ( GLuint program, const GLchar *name, const char *, const char *, const char *, int );
void gldlGetUniformfv ( GLuint program, GLint location, GLfloat *params, const char *, const char *, const char *, const char *, int );
void gldlGetUniformiv ( GLuint program, GLint location, GLint *params, const char *, const char *, const char *, const char *, int );
void gldlGetVertexAttribdv ( GLuint index, GLenum pname, GLdouble *params, const char *, const char *, const char *, const char *, int );
void gldlGetVertexAttribfv ( GLuint index, GLenum pname, GLfloat *params, const char *, const char *, const char *, const char *, int );
void gldlGetVertexAttribiv ( GLuint index, GLenum pname, GLint *params, const char *, const char *, const char *, const char *, int );
void gldlGetVertexAttribPointerv ( GLuint index, GLenum pname, GLvoid* *pointer, const char *, const char *, const char *, const char *, int );
GLboolean gldlIsProgram ( GLuint program, const char *, const char *, int );
GLboolean gldlIsShader ( GLuint shader, const char *, const char *, int );
void gldlLinkProgram ( GLuint program, const char *, const char *, int );
void gldlShaderSource ( GLuint shader, GLsizei count, const GLchar* *string, const GLint *length, const char *, const char *, const char *, const char *, const char *, int );
void gldlUseProgram ( GLuint program, const char *, const char *, int );
void gldlUniform1f ( GLint location, GLfloat v0, const char *, const char *, const char *, int );
void gldlUniform2f ( GLint location, GLfloat v0, GLfloat v1, const char *, const char *, const char *, const char *, int );
void gldlUniform3f ( GLint location, GLfloat v0, GLfloat v1, GLfloat v2, const char *, const char *, const char *, const char *, const char *, int );
void gldlUniform4f ( GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlUniform1i ( GLint location, GLint v0, const char *, const char *, const char *, int );
void gldlUniform2i ( GLint location, GLint v0, GLint v1, const char *, const char *, const char *, const char *, int );
void gldlUniform3i ( GLint location, GLint v0, GLint v1, GLint v2, const char *, const char *, const char *, const char *, const char *, int );
void gldlUniform4i ( GLint location, GLint v0, GLint v1, GLint v2, GLint v3, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlUniform1fv ( GLint location, GLsizei count, const GLfloat *value, const char *, const char *, const char *, const char *, int );
void gldlUniform2fv ( GLint location, GLsizei count, const GLfloat *value, const char *, const char *, const char *, const char *, int );
void gldlUniform3fv ( GLint location, GLsizei count, const GLfloat *value, const char *, const char *, const char *, const char *, int );
void gldlUniform4fv ( GLint location, GLsizei count, const GLfloat *value, const char *, const char *, const char *, const char *, int );
void gldlUniform1iv ( GLint location, GLsizei count, const GLint *value, const char *, const char *, const char *, const char *, int );
void gldlUniform2iv ( GLint location, GLsizei count, const GLint *value, const char *, const char *, const char *, const char *, int );
void gldlUniform3iv ( GLint location, GLsizei count, const GLint *value, const char *, const char *, const char *, const char *, int );
void gldlUniform4iv ( GLint location, GLsizei count, const GLint *value, const char *, const char *, const char *, const char *, int );
void gldlUniformMatrix2fv ( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value, const char *, const char *, const char *, const char *, const char *, int );
void gldlUniformMatrix3fv ( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value, const char *, const char *, const char *, const char *, const char *, int );
void gldlUniformMatrix4fv ( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value, const char *, const char *, const char *, const char *, const char *, int );
void gldlValidateProgram ( GLuint program, const char *, const char *, int );
void gldlVertexAttrib1d ( GLuint index, GLdouble x, const char *, const char *, const char *, int );
void gldlVertexAttrib1dv ( GLuint index, const GLdouble *v, const char *, const char *, const char *, int );
void gldlVertexAttrib1f ( GLuint index, GLfloat x, const char *, const char *, const char *, int );
void gldlVertexAttrib1fv ( GLuint index, const GLfloat *v, const char *, const char *, const char *, int );
void gldlVertexAttrib1s ( GLuint index, GLshort x, const char *, const char *, const char *, int );
void gldlVertexAttrib1sv ( GLuint index, const GLshort *v, const char *, const char *, const char *, int );
void gldlVertexAttrib2d ( GLuint index, GLdouble x, GLdouble y, const char *, const char *, const char *, const char *, int );
void gldlVertexAttrib2dv ( GLuint index, const GLdouble *v, const char *, const char *, const char *, int );
void gldlVertexAttrib2f ( GLuint index, GLfloat x, GLfloat y, const char *, const char *, const char *, const char *, int );
void gldlVertexAttrib2fv ( GLuint index, const GLfloat *v, const char *, const char *, const char *, int );
void gldlVertexAttrib2s ( GLuint index, GLshort x, GLshort y, const char *, const char *, const char *, const char *, int );
void gldlVertexAttrib2sv ( GLuint index, const GLshort *v, const char *, const char *, const char *, int );
void gldlVertexAttrib3d ( GLuint index, GLdouble x, GLdouble y, GLdouble z, const char *, const char *, const char *, const char *, const char *, int );
void gldlVertexAttrib3dv ( GLuint index, const GLdouble *v, const char *, const char *, const char *, int );
void gldlVertexAttrib3f ( GLuint index, GLfloat x, GLfloat y, GLfloat z, const char *, const char *, const char *, const char *, const char *, int );
void gldlVertexAttrib3fv ( GLuint index, const GLfloat *v, const char *, const char *, const char *, int );
void gldlVertexAttrib3s ( GLuint index, GLshort x, GLshort y, GLshort z, const char *, const char *, const char *, const char *, const char *, int );
void gldlVertexAttrib3sv ( GLuint index, const GLshort *v, const char *, const char *, const char *, int );
void gldlVertexAttrib4Nbv ( GLuint index, const GLbyte *v, const char *, const char *, const char *, int );
void gldlVertexAttrib4Niv ( GLuint index, const GLint *v, const char *, const char *, const char *, int );
void gldlVertexAttrib4Nsv ( GLuint index, const GLshort *v, const char *, const char *, const char *, int );
void gldlVertexAttrib4Nub ( GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlVertexAttrib4Nubv ( GLuint index, const GLubyte *v, const char *, const char *, const char *, int );
void gldlVertexAttrib4Nuiv ( GLuint index, const GLuint *v, const char *, const char *, const char *, int );
void gldlVertexAttrib4Nusv ( GLuint index, const GLushort *v, const char *, const char *, const char *, int );
void gldlVertexAttrib4bv ( GLuint index, const GLbyte *v, const char *, const char *, const char *, int );
void gldlVertexAttrib4d ( GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlVertexAttrib4dv ( GLuint index, const GLdouble *v, const char *, const char *, const char *, int );
void gldlVertexAttrib4f ( GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlVertexAttrib4fv ( GLuint index, const GLfloat *v, const char *, const char *, const char *, int );
void gldlVertexAttrib4iv ( GLuint index, const GLint *v, const char *, const char *, const char *, int );
void gldlVertexAttrib4s ( GLuint index, GLshort x, GLshort y, GLshort z, GLshort w, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlVertexAttrib4sv ( GLuint index, const GLshort *v, const char *, const char *, const char *, int );
void gldlVertexAttrib4ubv ( GLuint index, const GLubyte *v, const char *, const char *, const char *, int );
void gldlVertexAttrib4uiv ( GLuint index, const GLuint *v, const char *, const char *, const char *, int );
void gldlVertexAttrib4usv ( GLuint index, const GLushort *v, const char *, const char *, const char *, int );
void gldlVertexAttribPointer ( GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid *pointer, const char *, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlUniformMatrix2x3fv ( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value, const char *, const char *, const char *, const char *, const char *, int );
void gldlUniformMatrix3x2fv ( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value, const char *, const char *, const char *, const char *, const char *, int );
void gldlUniformMatrix2x4fv ( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value, const char *, const char *, const char *, const char *, const char *, int );
void gldlUniformMatrix4x2fv ( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value, const char *, const char *, const char *, const char *, const char *, int );
void gldlUniformMatrix3x4fv ( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value, const char *, const char *, const char *, const char *, const char *, int );
void gldlUniformMatrix4x3fv ( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value, const char *, const char *, const char *, const char *, const char *, int );
void gldlColorMaski ( GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlGetBooleani_v ( GLenum target, GLuint index, GLboolean *data, const char *, const char *, const char *, const char *, int );
void gldlGetIntegeri_v ( GLenum target, GLuint index, GLint *data, const char *, const char *, const char *, const char *, int );
void gldlEnablei ( GLenum target, GLuint index, const char *, const char *, const char *, int );
void gldlDisablei ( GLenum target, GLuint index, const char *, const char *, const char *, int );
GLboolean gldlIsEnabledi ( GLenum target, GLuint index, const char *, const char *, const char *, int );
void gldlBeginTransformFeedback ( GLenum primitiveMode, const char *, const char *, int );
void gldlEndTransformFeedback ( const char *, int );
void gldlBindBufferRange ( GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlBindBufferBase ( GLenum target, GLuint index, GLuint buffer, const char *, const char *, const char *, const char *, int );
void gldlTransformFeedbackVaryings ( GLuint program, GLsizei count, const GLchar* *varyings, GLenum bufferMode, const char *, const char *, const char *, const char *, const char *, int );
void gldlGetTransformFeedbackVarying ( GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlClampColor ( GLenum target, GLenum clamp, const char *, const char *, const char *, int );
void gldlBeginConditionalRender ( GLuint id, GLenum mode, const char *, const char *, const char *, int );
void gldlEndConditionalRender ( const char *, int );
void gldlVertexAttribIPointer ( GLuint index, GLint size, GLenum type, GLsizei stride, const GLvoid *pointer, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlGetVertexAttribIiv ( GLuint index, GLenum pname, GLint *params, const char *, const char *, const char *, const char *, int );
void gldlGetVertexAttribIuiv ( GLuint index, GLenum pname, GLuint *params, const char *, const char *, const char *, const char *, int );
void gldlVertexAttribI1i ( GLuint index, GLint x, const char *, const char *, const char *, int );
void gldlVertexAttribI2i ( GLuint index, GLint x, GLint y, const char *, const char *, const char *, const char *, int );
void gldlVertexAttribI3i ( GLuint index, GLint x, GLint y, GLint z, const char *, const char *, const char *, const char *, const char *, int );
void gldlVertexAttribI4i ( GLuint index, GLint x, GLint y, GLint z, GLint w, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlVertexAttribI1ui ( GLuint index, GLuint x, const char *, const char *, const char *, int );
void gldlVertexAttribI2ui ( GLuint index, GLuint x, GLuint y, const char *, const char *, const char *, const char *, int );
void gldlVertexAttribI3ui ( GLuint index, GLuint x, GLuint y, GLuint z, const char *, const char *, const char *, const char *, const char *, int );
void gldlVertexAttribI4ui ( GLuint index, GLuint x, GLuint y, GLuint z, GLuint w, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlVertexAttribI1iv ( GLuint index, const GLint *v, const char *, const char *, const char *, int );
void gldlVertexAttribI2iv ( GLuint index, const GLint *v, const char *, const char *, const char *, int );
void gldlVertexAttribI3iv ( GLuint index, const GLint *v, const char *, const char *, const char *, int );
void gldlVertexAttribI4iv ( GLuint index, const GLint *v, const char *, const char *, const char *, int );
void gldlVertexAttribI1uiv ( GLuint index, const GLuint *v, const char *, const char *, const char *, int );
void gldlVertexAttribI2uiv ( GLuint index, const GLuint *v, const char *, const char *, const char *, int );
void gldlVertexAttribI3uiv ( GLuint index, const GLuint *v, const char *, const char *, const char *, int );
void gldlVertexAttribI4uiv ( GLuint index, const GLuint *v, const char *, const char *, const char *, int );
void gldlVertexAttribI4bv ( GLuint index, const GLbyte *v, const char *, const char *, const char *, int );
void gldlVertexAttribI4sv ( GLuint index, const GLshort *v, const char *, const char *, const char *, int );
void gldlVertexAttribI4ubv ( GLuint index, const GLubyte *v, const char *, const char *, const char *, int );
void gldlVertexAttribI4usv ( GLuint index, const GLushort *v, const char *, const char *, const char *, int );
void gldlGetUniformuiv ( GLuint program, GLint location, GLuint *params, const char *, const char *, const char *, const char *, int );
void gldlBindFragDataLocation ( GLuint program, GLuint color, const GLchar *name, const char *, const char *, const char *, const char *, int );
GLint gldlGetFragDataLocation ( GLuint program, const GLchar *name, const char *, const char *, const char *, int );
void gldlUniform1ui ( GLint location, GLuint v0, const char *, const char *, const char *, int );
void gldlUniform2ui ( GLint location, GLuint v0, GLuint v1, const char *, const char *, const char *, const char *, int );
void gldlUniform3ui ( GLint location, GLuint v0, GLuint v1, GLuint v2, const char *, const char *, const char *, const char *, const char *, int );
void gldlUniform4ui ( GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlUniform1uiv ( GLint location, GLsizei count, const GLuint *value, const char *, const char *, const char *, const char *, int );
void gldlUniform2uiv ( GLint location, GLsizei count, const GLuint *value, const char *, const char *, const char *, const char *, int );
void gldlUniform3uiv ( GLint location, GLsizei count, const GLuint *value, const char *, const char *, const char *, const char *, int );
void gldlUniform4uiv ( GLint location, GLsizei count, const GLuint *value, const char *, const char *, const char *, const char *, int );
void gldlTexParameterIiv ( GLenum target, GLenum pname, const GLint *params, const char *, const char *, const char *, const char *, int );
void gldlTexParameterIuiv ( GLenum target, GLenum pname, const GLuint *params, const char *, const char *, const char *, const char *, int );
void gldlGetTexParameterIiv ( GLenum target, GLenum pname, GLint *params, const char *, const char *, const char *, const char *, int );
void gldlGetTexParameterIuiv ( GLenum target, GLenum pname, GLuint *params, const char *, const char *, const char *, const char *, int );
void gldlClearBufferiv ( GLenum buffer, GLint drawbuffer, const GLint *value, const char *, const char *, const char *, const char *, int );
void gldlClearBufferuiv ( GLenum buffer, GLint drawbuffer, const GLuint *value, const char *, const char *, const char *, const char *, int );
void gldlClearBufferfv ( GLenum buffer, GLint drawbuffer, const GLfloat *value, const char *, const char *, const char *, const char *, int );
void gldlClearBufferfi ( GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil, const char *, const char *, const char *, const char *, const char *, int );
const GLubyte * gldlGetStringi ( GLenum name, GLuint index, const char *, const char *, const char *, int );
void gldlDrawArraysInstanced ( GLenum mode, GLint first, GLsizei count, GLsizei primcount, const char *, const char *, const char *, const char *, const char *, int );
void gldlDrawElementsInstanced ( GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, GLsizei primcount, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlTexBuffer ( GLenum target, GLenum internalformat, GLuint buffer, const char *, const char *, const char *, const char *, int );
void gldlPrimitiveRestartIndex ( GLuint index, const char *, const char *, int );
void gldlGetInteger64i_v ( GLenum target, GLuint index, GLint64 *data, const char *, const char *, const char *, const char *, int );
void gldlGetBufferParameteri64v ( GLenum target, GLenum pname, GLint64 *params, const char *, const char *, const char *, const char *, int );
void gldlFramebufferTexture ( GLenum target, GLenum attachment, GLuint texture, GLint level, const char *, const char *, const char *, const char *, const char *, int );
void gldlVertexAttribDivisor ( GLuint index, GLuint divisor, const char *, const char *, const char *, int );
void gldlMinSampleShading ( GLclampf value, const char *, const char *, int );
void gldlBlendEquationi ( GLuint buf, GLenum mode, const char *, const char *, const char *, int );
void gldlBlendEquationSeparatei ( GLuint buf, GLenum modeRGB, GLenum modeAlpha, const char *, const char *, const char *, const char *, int );
void gldlBlendFunci ( GLuint buf, GLenum src, GLenum dst, const char *, const char *, const char *, const char *, int );
void gldlBlendFuncSeparatei ( GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha, const char *, const char *, const char *, const char *, const char *, const char *, int );
GLboolean gldlIsRenderbuffer ( GLuint renderbuffer, const char *, const char *, int );
void gldlBindRenderbuffer ( GLenum target, GLuint renderbuffer, const char *, const char *, const char *, int );
void gldlDeleteRenderbuffers ( GLsizei n, const GLuint *renderbuffers, const char *, const char *, const char *, int );
void gldlGenRenderbuffers ( GLsizei n, GLuint *renderbuffers, const char *, const char *, const char *, int );
void gldlRenderbufferStorage ( GLenum target, GLenum internalformat, GLsizei width, GLsizei height, const char *, const char *, const char *, const char *, const char *, int );
void gldlGetRenderbufferParameteriv ( GLenum target, GLenum pname, GLint *params, const char *, const char *, const char *, const char *, int );
GLboolean gldlIsFramebuffer ( GLuint framebuffer, const char *, const char *, int );
void gldlBindFramebuffer ( GLenum target, GLuint framebuffer, const char *, const char *, const char *, int );
void gldlDeleteFramebuffers ( GLsizei n, const GLuint *framebuffers, const char *, const char *, const char *, int );
void gldlGenFramebuffers ( GLsizei n, GLuint *framebuffers, const char *, const char *, const char *, int );
GLenum gldlCheckFramebufferStatus ( GLenum target, const char *, const char *, int );
void gldlFramebufferTexture1D ( GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlFramebufferTexture2D ( GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlFramebufferTexture3D ( GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset, const char *, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlFramebufferRenderbuffer ( GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer, const char *, const char *, const char *, const char *, const char *, int );
void gldlGetFramebufferAttachmentParameteriv ( GLenum target, GLenum attachment, GLenum pname, GLint *params, const char *, const char *, const char *, const char *, const char *, int );
void gldlGenerateMipmap ( GLenum target, const char *, const char *, int );
void gldlBlitFramebuffer ( GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlRenderbufferStorageMultisample ( GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlFramebufferTextureLayer ( GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer, const char *, const char *, const char *, const char *, const char *, const char *, int );
GLvoid* gldlMapBufferRange ( GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access, const char *, const char *, const char *, const char *, const char *, int );
void gldlFlushMappedBufferRange ( GLenum target, GLintptr offset, GLsizeiptr length, const char *, const char *, const char *, const char *, int );
void gldlBindVertexArray ( GLuint array, const char *, const char *, int );
void gldlDeleteVertexArrays ( GLsizei n, const GLuint *arrays, const char *, const char *, const char *, int );
void gldlGenVertexArrays ( GLsizei n, GLuint *arrays, const char *, const char *, const char *, int );
GLboolean gldlIsVertexArray ( GLuint array, const char *, const char *, int );
void gldlGetUniformIndices ( GLuint program, GLsizei uniformCount, const GLchar* *uniformNames, GLuint *uniformIndices, const char *, const char *, const char *, const char *, const char *, int );
void gldlGetActiveUniformsiv ( GLuint program, GLsizei uniformCount, const GLuint *uniformIndices, GLenum pname, GLint *params, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlGetActiveUniformName ( GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformName, const char *, const char *, const char *, const char *, const char *, const char *, int );
GLuint gldlGetUniformBlockIndex ( GLuint program, const GLchar *uniformBlockName, const char *, const char *, const char *, int );
void gldlGetActiveUniformBlockiv ( GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint *params, const char *, const char *, const char *, const char *, const char *, int );
void gldlGetActiveUniformBlockName ( GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformBlockName, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlUniformBlockBinding ( GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding, const char *, const char *, const char *, const char *, int );
void gldlCopyBufferSubData ( GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlDrawElementsBaseVertex ( GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, GLint basevertex, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlDrawRangeElementsBaseVertex ( GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid *indices, GLint basevertex, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlDrawElementsInstancedBaseVertex ( GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, GLsizei primcount, GLint basevertex, const char *, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlMultiDrawElementsBaseVertex ( GLenum mode, const GLsizei *count, GLenum type, const GLvoid* *indices, GLsizei primcount, const GLint *basevertex, const char *, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlProvokingVertex ( GLenum mode, const char *, const char *, int );
GLsync gldlFenceSync ( GLenum condition, GLbitfield flags, const char *, const char *, const char *, int );
GLboolean gldlIsSync ( GLsync sync, const char *, const char *, int );
void gldlDeleteSync ( GLsync sync, const char *, const char *, int );
GLenum gldlClientWaitSync ( GLsync sync, GLbitfield flags, GLuint64 timeout, const char *, const char *, const char *, const char *, int );
void gldlWaitSync ( GLsync sync, GLbitfield flags, GLuint64 timeout, const char *, const char *, const char *, const char *, int );
void gldlGetInteger64v ( GLenum pname, GLint64 *params, const char *, const char *, const char *, int );
void gldlGetSynciv ( GLsync sync, GLenum pname, GLsizei bufSize, GLsizei *length, GLint *values, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlTexImage2DMultisample ( GLenum target, GLsizei samples, GLint internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations, const char *, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlTexImage3DMultisample ( GLenum target, GLsizei samples, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlGetMultisamplefv ( GLenum pname, GLuint index, GLfloat *val, const char *, const char *, const char *, const char *, int );
void gldlSampleMaski ( GLuint index, GLbitfield mask, const char *, const char *, const char *, int );
void gldlBlendEquationiARB ( GLuint buf, GLenum mode, const char *, const char *, const char *, int );
void gldlBlendEquationSeparateiARB ( GLuint buf, GLenum modeRGB, GLenum modeAlpha, const char *, const char *, const char *, const char *, int );
void gldlBlendFunciARB ( GLuint buf, GLenum src, GLenum dst, const char *, const char *, const char *, const char *, int );
void gldlBlendFuncSeparateiARB ( GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlMinSampleShadingARB ( GLclampf value, const char *, const char *, int );
void gldlNamedStringARB ( GLenum type, GLint namelen, const GLchar *name, GLint stringlen, const GLchar *string, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlDeleteNamedStringARB ( GLint namelen, const GLchar *name, const char *, const char *, const char *, int );
void gldlCompileShaderIncludeARB ( GLuint shader, GLsizei count, const GLchar* *path, const GLint *length, const char *, const char *, const char *, const char *, const char *, int );
GLboolean gldlIsNamedStringARB ( GLint namelen, const GLchar *name, const char *, const char *, const char *, int );
void gldlGetNamedStringARB ( GLint namelen, const GLchar *name, GLsizei bufSize, GLint *stringlen, GLchar *string, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlGetNamedStringivARB ( GLint namelen, const GLchar *name, GLenum pname, GLint *params, const char *, const char *, const char *, const char *, const char *, int );
void gldlBindFragDataLocationIndexed ( GLuint program, GLuint colorNumber, GLuint index, const GLchar *name, const char *, const char *, const char *, const char *, const char *, int );
GLint gldlGetFragDataIndex ( GLuint program, const GLchar *name, const char *, const char *, const char *, int );
void gldlGenSamplers ( GLsizei count, GLuint *samplers, const char *, const char *, const char *, int );
void gldlDeleteSamplers ( GLsizei count, const GLuint *samplers, const char *, const char *, const char *, int );
GLboolean gldlIsSampler ( GLuint sampler, const char *, const char *, int );
void gldlBindSampler ( GLuint unit, GLuint sampler, const char *, const char *, const char *, int );
void gldlSamplerParameteri ( GLuint sampler, GLenum pname, GLint param, const char *, const char *, const char *, const char *, int );
void gldlSamplerParameteriv ( GLuint sampler, GLenum pname, const GLint *param, const char *, const char *, const char *, const char *, int );
void gldlSamplerParameterf ( GLuint sampler, GLenum pname, GLfloat param, const char *, const char *, const char *, const char *, int );
void gldlSamplerParameterfv ( GLuint sampler, GLenum pname, const GLfloat *param, const char *, const char *, const char *, const char *, int );
void gldlSamplerParameterIiv ( GLuint sampler, GLenum pname, const GLint *param, const char *, const char *, const char *, const char *, int );
void gldlSamplerParameterIuiv ( GLuint sampler, GLenum pname, const GLuint *param, const char *, const char *, const char *, const char *, int );
void gldlGetSamplerParameteriv ( GLuint sampler, GLenum pname, GLint *params, const char *, const char *, const char *, const char *, int );
void gldlGetSamplerParameterIiv ( GLuint sampler, GLenum pname, GLint *params, const char *, const char *, const char *, const char *, int );
void gldlGetSamplerParameterfv ( GLuint sampler, GLenum pname, GLfloat *params, const char *, const char *, const char *, const char *, int );
void gldlGetSamplerParameterIuiv ( GLuint sampler, GLenum pname, GLuint *params, const char *, const char *, const char *, const char *, int );
void gldlQueryCounter ( GLuint id, GLenum target, const char *, const char *, const char *, int );
void gldlGetQueryObjecti64v ( GLuint id, GLenum pname, GLint64 *params, const char *, const char *, const char *, const char *, int );
void gldlGetQueryObjectui64v ( GLuint id, GLenum pname, GLuint64 *params, const char *, const char *, const char *, const char *, int );
void gldlVertexP2ui ( GLenum type, GLuint value, const char *, const char *, const char *, int );
void gldlVertexP2uiv ( GLenum type, const GLuint *value, const char *, const char *, const char *, int );
void gldlVertexP3ui ( GLenum type, GLuint value, const char *, const char *, const char *, int );
void gldlVertexP3uiv ( GLenum type, const GLuint *value, const char *, const char *, const char *, int );
void gldlVertexP4ui ( GLenum type, GLuint value, const char *, const char *, const char *, int );
void gldlVertexP4uiv ( GLenum type, const GLuint *value, const char *, const char *, const char *, int );
void gldlTexCoordP1ui ( GLenum type, GLuint coords, const char *, const char *, const char *, int );
void gldlTexCoordP1uiv ( GLenum type, const GLuint *coords, const char *, const char *, const char *, int );
void gldlTexCoordP2ui ( GLenum type, GLuint coords, const char *, const char *, const char *, int );
void gldlTexCoordP2uiv ( GLenum type, const GLuint *coords, const char *, const char *, const char *, int );
void gldlTexCoordP3ui ( GLenum type, GLuint coords, const char *, const char *, const char *, int );
void gldlTexCoordP3uiv ( GLenum type, const GLuint *coords, const char *, const char *, const char *, int );
void gldlTexCoordP4ui ( GLenum type, GLuint coords, const char *, const char *, const char *, int );
void gldlTexCoordP4uiv ( GLenum type, const GLuint *coords, const char *, const char *, const char *, int );
void gldlMultiTexCoordP1ui ( GLenum texture, GLenum type, GLuint coords, const char *, const char *, const char *, const char *, int );
void gldlMultiTexCoordP1uiv ( GLenum texture, GLenum type, const GLuint *coords, const char *, const char *, const char *, const char *, int );
void gldlMultiTexCoordP2ui ( GLenum texture, GLenum type, GLuint coords, const char *, const char *, const char *, const char *, int );
void gldlMultiTexCoordP2uiv ( GLenum texture, GLenum type, const GLuint *coords, const char *, const char *, const char *, const char *, int );
void gldlMultiTexCoordP3ui ( GLenum texture, GLenum type, GLuint coords, const char *, const char *, const char *, const char *, int );
void gldlMultiTexCoordP3uiv ( GLenum texture, GLenum type, const GLuint *coords, const char *, const char *, const char *, const char *, int );
void gldlMultiTexCoordP4ui ( GLenum texture, GLenum type, GLuint coords, const char *, const char *, const char *, const char *, int );
void gldlMultiTexCoordP4uiv ( GLenum texture, GLenum type, const GLuint *coords, const char *, const char *, const char *, const char *, int );
void gldlNormalP3ui ( GLenum type, GLuint coords, const char *, const char *, const char *, int );
void gldlNormalP3uiv ( GLenum type, const GLuint *coords, const char *, const char *, const char *, int );
void gldlColorP3ui ( GLenum type, GLuint color, const char *, const char *, const char *, int );
void gldlColorP3uiv ( GLenum type, const GLuint *color, const char *, const char *, const char *, int );
void gldlColorP4ui ( GLenum type, GLuint color, const char *, const char *, const char *, int );
void gldlColorP4uiv ( GLenum type, const GLuint *color, const char *, const char *, const char *, int );
void gldlSecondaryColorP3ui ( GLenum type, GLuint color, const char *, const char *, const char *, int );
void gldlSecondaryColorP3uiv ( GLenum type, const GLuint *color, const char *, const char *, const char *, int );
void gldlVertexAttribP1ui ( GLuint index, GLenum type, GLboolean normalized, GLuint value, const char *, const char *, const char *, const char *, const char *, int );
void gldlVertexAttribP1uiv ( GLuint index, GLenum type, GLboolean normalized, const GLuint *value, const char *, const char *, const char *, const char *, const char *, int );
void gldlVertexAttribP2ui ( GLuint index, GLenum type, GLboolean normalized, GLuint value, const char *, const char *, const char *, const char *, const char *, int );
void gldlVertexAttribP2uiv ( GLuint index, GLenum type, GLboolean normalized, const GLuint *value, const char *, const char *, const char *, const char *, const char *, int );
void gldlVertexAttribP3ui ( GLuint index, GLenum type, GLboolean normalized, GLuint value, const char *, const char *, const char *, const char *, const char *, int );
void gldlVertexAttribP3uiv ( GLuint index, GLenum type, GLboolean normalized, const GLuint *value, const char *, const char *, const char *, const char *, const char *, int );
void gldlVertexAttribP4ui ( GLuint index, GLenum type, GLboolean normalized, GLuint value, const char *, const char *, const char *, const char *, const char *, int );
void gldlVertexAttribP4uiv ( GLuint index, GLenum type, GLboolean normalized, const GLuint *value, const char *, const char *, const char *, const char *, const char *, int );
void gldlDrawArraysIndirect ( GLenum mode, const GLvoid *indirect, const char *, const char *, const char *, int );
void gldlDrawElementsIndirect ( GLenum mode, GLenum type, const GLvoid *indirect, const char *, const char *, const char *, const char *, int );
void gldlUniform1d ( GLint location, GLdouble x, const char *, const char *, const char *, int );
void gldlUniform2d ( GLint location, GLdouble x, GLdouble y, const char *, const char *, const char *, const char *, int );
void gldlUniform3d ( GLint location, GLdouble x, GLdouble y, GLdouble z, const char *, const char *, const char *, const char *, const char *, int );
void gldlUniform4d ( GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlUniform1dv ( GLint location, GLsizei count, const GLdouble *value, const char *, const char *, const char *, const char *, int );
void gldlUniform2dv ( GLint location, GLsizei count, const GLdouble *value, const char *, const char *, const char *, const char *, int );
void gldlUniform3dv ( GLint location, GLsizei count, const GLdouble *value, const char *, const char *, const char *, const char *, int );
void gldlUniform4dv ( GLint location, GLsizei count, const GLdouble *value, const char *, const char *, const char *, const char *, int );
void gldlUniformMatrix2dv ( GLint location, GLsizei count, GLboolean transpose, const GLdouble *value, const char *, const char *, const char *, const char *, const char *, int );
void gldlUniformMatrix3dv ( GLint location, GLsizei count, GLboolean transpose, const GLdouble *value, const char *, const char *, const char *, const char *, const char *, int );
void gldlUniformMatrix4dv ( GLint location, GLsizei count, GLboolean transpose, const GLdouble *value, const char *, const char *, const char *, const char *, const char *, int );
void gldlUniformMatrix2x3dv ( GLint location, GLsizei count, GLboolean transpose, const GLdouble *value, const char *, const char *, const char *, const char *, const char *, int );
void gldlUniformMatrix2x4dv ( GLint location, GLsizei count, GLboolean transpose, const GLdouble *value, const char *, const char *, const char *, const char *, const char *, int );
void gldlUniformMatrix3x2dv ( GLint location, GLsizei count, GLboolean transpose, const GLdouble *value, const char *, const char *, const char *, const char *, const char *, int );
void gldlUniformMatrix3x4dv ( GLint location, GLsizei count, GLboolean transpose, const GLdouble *value, const char *, const char *, const char *, const char *, const char *, int );
void gldlUniformMatrix4x2dv ( GLint location, GLsizei count, GLboolean transpose, const GLdouble *value, const char *, const char *, const char *, const char *, const char *, int );
void gldlUniformMatrix4x3dv ( GLint location, GLsizei count, GLboolean transpose, const GLdouble *value, const char *, const char *, const char *, const char *, const char *, int );
void gldlGetUniformdv ( GLuint program, GLint location, GLdouble *params, const char *, const char *, const char *, const char *, int );
GLint gldlGetSubroutineUniformLocation ( GLuint program, GLenum shadertype, const GLchar *name, const char *, const char *, const char *, const char *, int );
GLuint gldlGetSubroutineIndex ( GLuint program, GLenum shadertype, const GLchar *name, const char *, const char *, const char *, const char *, int );
void gldlGetActiveSubroutineUniformiv ( GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint *values, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlGetActiveSubroutineUniformName ( GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei *length, GLchar *name, const char *, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlGetActiveSubroutineName ( GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei *length, GLchar *name, const char *, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlUniformSubroutinesuiv ( GLenum shadertype, GLsizei count, const GLuint *indices, const char *, const char *, const char *, const char *, int );
void gldlGetUniformSubroutineuiv ( GLenum shadertype, GLint location, GLuint *params, const char *, const char *, const char *, const char *, int );
void gldlGetProgramStageiv ( GLuint program, GLenum shadertype, GLenum pname, GLint *values, const char *, const char *, const char *, const char *, const char *, int );
void gldlPatchParameteri ( GLenum pname, GLint value, const char *, const char *, const char *, int );
void gldlPatchParameterfv ( GLenum pname, const GLfloat *values, const char *, const char *, const char *, int );
void gldlBindTransformFeedback ( GLenum target, GLuint id, const char *, const char *, const char *, int );
void gldlDeleteTransformFeedbacks ( GLsizei n, const GLuint *ids, const char *, const char *, const char *, int );
void gldlGenTransformFeedbacks ( GLsizei n, GLuint *ids, const char *, const char *, const char *, int );
GLboolean gldlIsTransformFeedback ( GLuint id, const char *, const char *, int );
void gldlPauseTransformFeedback ( const char *, int );
void gldlResumeTransformFeedback ( const char *, int );
void gldlDrawTransformFeedback ( GLenum mode, GLuint id, const char *, const char *, const char *, int );
void gldlDrawTransformFeedbackStream ( GLenum mode, GLuint id, GLuint stream, const char *, const char *, const char *, const char *, int );
void gldlBeginQueryIndexed ( GLenum target, GLuint index, GLuint id, const char *, const char *, const char *, const char *, int );
void gldlEndQueryIndexed ( GLenum target, GLuint index, const char *, const char *, const char *, int );
void gldlGetQueryIndexediv ( GLenum target, GLuint index, GLenum pname, GLint *params, const char *, const char *, const char *, const char *, const char *, int );
void gldlReleaseShaderCompiler ( const char *, int );
void gldlShaderBinary ( GLsizei count, const GLuint *shaders, GLenum binaryformat, const GLvoid *binary, GLsizei length, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlGetShaderPrecisionFormat ( GLenum shadertype, GLenum precisiontype, GLint *range, GLint *precision, const char *, const char *, const char *, const char *, const char *, int );
void gldlDepthRangef ( GLclampf n, GLclampf f, const char *, const char *, const char *, int );
void gldlClearDepthf ( GLclampf d, const char *, const char *, int );
void gldlGetProgramBinary ( GLuint program, GLsizei bufSize, GLsizei *length, GLenum *binaryFormat, GLvoid *binary, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlProgramBinary ( GLuint program, GLenum binaryFormat, const GLvoid *binary, GLsizei length, const char *, const char *, const char *, const char *, const char *, int );
void gldlProgramParameteri ( GLuint program, GLenum pname, GLint value, const char *, const char *, const char *, const char *, int );
void gldlUseProgramStages ( GLuint pipeline, GLbitfield stages, GLuint program, const char *, const char *, const char *, const char *, int );
void gldlActiveShaderProgram ( GLuint pipeline, GLuint program, const char *, const char *, const char *, int );
GLuint gldlCreateShaderProgramv ( GLenum type, GLsizei count, const GLchar* *strings, const char *, const char *, const char *, const char *, int );
void gldlBindProgramPipeline ( GLuint pipeline, const char *, const char *, int );
void gldlDeleteProgramPipelines ( GLsizei n, const GLuint *pipelines, const char *, const char *, const char *, int );
void gldlGenProgramPipelines ( GLsizei n, GLuint *pipelines, const char *, const char *, const char *, int );
GLboolean gldlIsProgramPipeline ( GLuint pipeline, const char *, const char *, int );
void gldlGetProgramPipelineiv ( GLuint pipeline, GLenum pname, GLint *params, const char *, const char *, const char *, const char *, int );
void gldlProgramUniform1i ( GLuint program, GLint location, GLint v0, const char *, const char *, const char *, const char *, int );
void gldlProgramUniform1iv ( GLuint program, GLint location, GLsizei count, const GLint *value, const char *, const char *, const char *, const char *, const char *, int );
void gldlProgramUniform1f ( GLuint program, GLint location, GLfloat v0, const char *, const char *, const char *, const char *, int );
void gldlProgramUniform1fv ( GLuint program, GLint location, GLsizei count, const GLfloat *value, const char *, const char *, const char *, const char *, const char *, int );
void gldlProgramUniform1d ( GLuint program, GLint location, GLdouble v0, const char *, const char *, const char *, const char *, int );
void gldlProgramUniform1dv ( GLuint program, GLint location, GLsizei count, const GLdouble *value, const char *, const char *, const char *, const char *, const char *, int );
void gldlProgramUniform1ui ( GLuint program, GLint location, GLuint v0, const char *, const char *, const char *, const char *, int );
void gldlProgramUniform1uiv ( GLuint program, GLint location, GLsizei count, const GLuint *value, const char *, const char *, const char *, const char *, const char *, int );
void gldlProgramUniform2i ( GLuint program, GLint location, GLint v0, GLint v1, const char *, const char *, const char *, const char *, const char *, int );
void gldlProgramUniform2iv ( GLuint program, GLint location, GLsizei count, const GLint *value, const char *, const char *, const char *, const char *, const char *, int );
void gldlProgramUniform2f ( GLuint program, GLint location, GLfloat v0, GLfloat v1, const char *, const char *, const char *, const char *, const char *, int );
void gldlProgramUniform2fv ( GLuint program, GLint location, GLsizei count, const GLfloat *value, const char *, const char *, const char *, const char *, const char *, int );
void gldlProgramUniform2d ( GLuint program, GLint location, GLdouble v0, GLdouble v1, const char *, const char *, const char *, const char *, const char *, int );
void gldlProgramUniform2dv ( GLuint program, GLint location, GLsizei count, const GLdouble *value, const char *, const char *, const char *, const char *, const char *, int );
void gldlProgramUniform2ui ( GLuint program, GLint location, GLuint v0, GLuint v1, const char *, const char *, const char *, const char *, const char *, int );
void gldlProgramUniform2uiv ( GLuint program, GLint location, GLsizei count, const GLuint *value, const char *, const char *, const char *, const char *, const char *, int );
void gldlProgramUniform3i ( GLuint program, GLint location, GLint v0, GLint v1, GLint v2, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlProgramUniform3iv ( GLuint program, GLint location, GLsizei count, const GLint *value, const char *, const char *, const char *, const char *, const char *, int );
void gldlProgramUniform3f ( GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlProgramUniform3fv ( GLuint program, GLint location, GLsizei count, const GLfloat *value, const char *, const char *, const char *, const char *, const char *, int );
void gldlProgramUniform3d ( GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlProgramUniform3dv ( GLuint program, GLint location, GLsizei count, const GLdouble *value, const char *, const char *, const char *, const char *, const char *, int );
void gldlProgramUniform3ui ( GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlProgramUniform3uiv ( GLuint program, GLint location, GLsizei count, const GLuint *value, const char *, const char *, const char *, const char *, const char *, int );
void gldlProgramUniform4i ( GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3, const char *, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlProgramUniform4iv ( GLuint program, GLint location, GLsizei count, const GLint *value, const char *, const char *, const char *, const char *, const char *, int );
void gldlProgramUniform4f ( GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3, const char *, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlProgramUniform4fv ( GLuint program, GLint location, GLsizei count, const GLfloat *value, const char *, const char *, const char *, const char *, const char *, int );
void gldlProgramUniform4d ( GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3, const char *, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlProgramUniform4dv ( GLuint program, GLint location, GLsizei count, const GLdouble *value, const char *, const char *, const char *, const char *, const char *, int );
void gldlProgramUniform4ui ( GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3, const char *, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlProgramUniform4uiv ( GLuint program, GLint location, GLsizei count, const GLuint *value, const char *, const char *, const char *, const char *, const char *, int );
void gldlProgramUniformMatrix2fv ( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlProgramUniformMatrix3fv ( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlProgramUniformMatrix4fv ( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlProgramUniformMatrix2dv ( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlProgramUniformMatrix3dv ( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlProgramUniformMatrix4dv ( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlProgramUniformMatrix2x3fv ( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlProgramUniformMatrix3x2fv ( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlProgramUniformMatrix2x4fv ( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlProgramUniformMatrix4x2fv ( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlProgramUniformMatrix3x4fv ( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlProgramUniformMatrix4x3fv ( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlProgramUniformMatrix2x3dv ( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlProgramUniformMatrix3x2dv ( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlProgramUniformMatrix2x4dv ( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlProgramUniformMatrix4x2dv ( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlProgramUniformMatrix3x4dv ( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlProgramUniformMatrix4x3dv ( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlValidateProgramPipeline ( GLuint pipeline, const char *, const char *, int );
void gldlGetProgramPipelineInfoLog ( GLuint pipeline, GLsizei bufSize, GLsizei *length, GLchar *infoLog, const char *, const char *, const char *, const char *, const char *, int );
void gldlVertexAttribL1d ( GLuint index, GLdouble x, const char *, const char *, const char *, int );
void gldlVertexAttribL2d ( GLuint index, GLdouble x, GLdouble y, const char *, const char *, const char *, const char *, int );
void gldlVertexAttribL3d ( GLuint index, GLdouble x, GLdouble y, GLdouble z, const char *, const char *, const char *, const char *, const char *, int );
void gldlVertexAttribL4d ( GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlVertexAttribL1dv ( GLuint index, const GLdouble *v, const char *, const char *, const char *, int );
void gldlVertexAttribL2dv ( GLuint index, const GLdouble *v, const char *, const char *, const char *, int );
void gldlVertexAttribL3dv ( GLuint index, const GLdouble *v, const char *, const char *, const char *, int );
void gldlVertexAttribL4dv ( GLuint index, const GLdouble *v, const char *, const char *, const char *, int );
void gldlVertexAttribLPointer ( GLuint index, GLint size, GLenum type, GLsizei stride, const GLvoid *pointer, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlGetVertexAttribLdv ( GLuint index, GLenum pname, GLdouble *params, const char *, const char *, const char *, const char *, int );
void gldlViewportArrayv ( GLuint first, GLsizei count, const GLfloat *v, const char *, const char *, const char *, const char *, int );
void gldlViewportIndexedf ( GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlViewportIndexedfv ( GLuint index, const GLfloat *v, const char *, const char *, const char *, int );
void gldlScissorArrayv ( GLuint first, GLsizei count, const GLint *v, const char *, const char *, const char *, const char *, int );
void gldlScissorIndexed ( GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlScissorIndexedv ( GLuint index, const GLint *v, const char *, const char *, const char *, int );
void gldlDepthRangeArrayv ( GLuint first, GLsizei count, const GLclampd *v, const char *, const char *, const char *, const char *, int );
void gldlDepthRangeIndexed ( GLuint index, GLclampd n, GLclampd f, const char *, const char *, const char *, const char *, int );
void gldlGetFloati_v ( GLenum target, GLuint index, GLfloat *data, const char *, const char *, const char *, const char *, int );
void gldlGetDoublei_v ( GLenum target, GLuint index, GLdouble *data, const char *, const char *, const char *, const char *, int );
GLsync gldlCreateSyncFromCLeventARB ( struct _cl_context * context, struct _cl_event * event, GLbitfield flags, const char *, const char *, const char *, const char *, int );
void gldlDebugMessageControlARB ( GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled, const char *, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlDebugMessageInsertARB ( GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar *buf, const char *, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlDebugMessageCallbackARB ( GLDEBUGPROCARB callback, const GLvoid *userParam, const char *, const char *, const char *, int );
GLuint gldlGetDebugMessageLogARB ( GLuint count, GLsizei bufsize, GLenum *sources, GLenum *types, GLuint *ids, GLenum *severities, GLsizei *lengths, GLchar *messageLog, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, int );
GLenum gldlGetGraphicsResetStatusARB ( const char *, int );
void gldlGetnMapdvARB ( GLenum target, GLenum query, GLsizei bufSize, GLdouble *v, const char *, const char *, const char *, const char *, const char *, int );
void gldlGetnMapfvARB ( GLenum target, GLenum query, GLsizei bufSize, GLfloat *v, const char *, const char *, const char *, const char *, const char *, int );
void gldlGetnMapivARB ( GLenum target, GLenum query, GLsizei bufSize, GLint *v, const char *, const char *, const char *, const char *, const char *, int );
void gldlGetnPixelMapfvARB ( GLenum map, GLsizei bufSize, GLfloat *values, const char *, const char *, const char *, const char *, int );
void gldlGetnPixelMapuivARB ( GLenum map, GLsizei bufSize, GLuint *values, const char *, const char *, const char *, const char *, int );
void gldlGetnPixelMapusvARB ( GLenum map, GLsizei bufSize, GLushort *values, const char *, const char *, const char *, const char *, int );
void gldlGetnPolygonStippleARB ( GLsizei bufSize, GLubyte *pattern, const char *, const char *, const char *, int );
void gldlGetnColorTableARB ( GLenum target, GLenum format, GLenum type, GLsizei bufSize, GLvoid *table, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlGetnConvolutionFilterARB ( GLenum target, GLenum format, GLenum type, GLsizei bufSize, GLvoid *image, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlGetnSeparableFilterARB ( GLenum target, GLenum format, GLenum type, GLsizei rowBufSize, GLvoid *row, GLsizei columnBufSize, GLvoid *column, GLvoid *span, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlGetnHistogramARB ( GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, GLvoid *values, const char *, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlGetnMinmaxARB ( GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, GLvoid *values, const char *, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlGetnTexImageARB ( GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, GLvoid *img, const char *, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlReadnPixelsARB ( GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, GLvoid *data, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlGetnCompressedTexImageARB ( GLenum target, GLint lod, GLsizei bufSize, GLvoid *img, const char *, const char *, const char *, const char *, const char *, int );
void gldlGetnUniformfvARB ( GLuint program, GLint location, GLsizei bufSize, GLfloat *params, const char *, const char *, const char *, const char *, const char *, int );
void gldlGetnUniformivARB ( GLuint program, GLint location, GLsizei bufSize, GLint *params, const char *, const char *, const char *, const char *, const char *, int );
void gldlGetnUniformuivARB ( GLuint program, GLint location, GLsizei bufSize, GLuint *params, const char *, const char *, const char *, const char *, const char *, int );
void gldlGetnUniformdvARB ( GLuint program, GLint location, GLsizei bufSize, GLdouble *params, const char *, const char *, const char *, const char *, const char *, int );
void gldlDrawArraysInstancedBaseInstance ( GLenum mode, GLint first, GLsizei count, GLsizei primcount, GLuint baseinstance, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlDrawElementsInstancedBaseInstance ( GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei primcount, GLuint baseinstance, const char *, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlDrawElementsInstancedBaseVertexBaseInstance ( GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei primcount, GLint basevertex, GLuint baseinstance, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlDrawTransformFeedbackInstanced ( GLenum mode, GLuint id, GLsizei primcount, const char *, const char *, const char *, const char *, int );
void gldlDrawTransformFeedbackStreamInstanced ( GLenum mode, GLuint id, GLuint stream, GLsizei primcount, const char *, const char *, const char *, const char *, const char *, int );
void gldlGetInternalformativ ( GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint *params, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlGetActiveAtomicCounterBufferiv ( GLuint program, GLuint bufferIndex, GLenum pname, GLint *params, const char *, const char *, const char *, const char *, const char *, int );
void gldlBindImageTexture ( GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlMemoryBarrier ( GLbitfield barriers, const char *, const char *, int );
void gldlTexStorage1D ( GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, const char *, const char *, const char *, const char *, const char *, int );
void gldlTexStorage2D ( GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlTexStorage3D ( GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, const char *, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlTextureStorage1DEXT ( GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlTextureStorage2DEXT ( GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, const char *, const char *, const char *, const char *, const char *, const char *, const char *, int );
void gldlTextureStorage3DEXT ( GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, int );


#define glCullFace( arg0 )  gldlCullFace( (arg0), #arg0, __FILE__, __LINE__ )
#define glFrontFace( arg0 )  gldlFrontFace( (arg0), #arg0, __FILE__, __LINE__ )
#define glHint( arg0, arg1 )  gldlHint( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glLineWidth( arg0 )  gldlLineWidth( (arg0), #arg0, __FILE__, __LINE__ )
#define glPointSize( arg0 )  gldlPointSize( (arg0), #arg0, __FILE__, __LINE__ )
#define glPolygonMode( arg0, arg1 )  gldlPolygonMode( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glScissor( arg0, arg1, arg2, arg3 )  gldlScissor( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glTexParameterf( arg0, arg1, arg2 )  gldlTexParameterf( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glTexParameterfv( arg0, arg1, arg2 )  gldlTexParameterfv( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glTexParameteri( arg0, arg1, arg2 )  gldlTexParameteri( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glTexParameteriv( arg0, arg1, arg2 )  gldlTexParameteriv( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glTexImage1D( arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7 )  gldlTexImage1D( (arg0), (arg1), (arg2), (arg3), (arg4), (arg5), (arg6), (arg7), #arg0, #arg1, #arg2, #arg3, #arg4, #arg5, #arg6, #arg7, __FILE__, __LINE__ )
#define glTexImage2D( arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8 )  gldlTexImage2D( (arg0), (arg1), (arg2), (arg3), (arg4), (arg5), (arg6), (arg7), (arg8), #arg0, #arg1, #arg2, #arg3, #arg4, #arg5, #arg6, #arg7, #arg8, __FILE__, __LINE__ )
#define glDrawBuffer( arg0 )  gldlDrawBuffer( (arg0), #arg0, __FILE__, __LINE__ )
#define glClear( arg0 )  gldlClear( (arg0), #arg0, __FILE__, __LINE__ )
#define glClearColor( arg0, arg1, arg2, arg3 )  gldlClearColor( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glClearStencil( arg0 )  gldlClearStencil( (arg0), #arg0, __FILE__, __LINE__ )
#define glClearDepth( arg0 )  gldlClearDepth( (arg0), #arg0, __FILE__, __LINE__ )
#define glStencilMask( arg0 )  gldlStencilMask( (arg0), #arg0, __FILE__, __LINE__ )
#define glColorMask( arg0, arg1, arg2, arg3 )  gldlColorMask( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glDepthMask( arg0 )  gldlDepthMask( (arg0), #arg0, __FILE__, __LINE__ )
#define glDisable( arg0 )  gldlDisable( (arg0), #arg0, __FILE__, __LINE__ )
#define glEnable( arg0 )  gldlEnable( (arg0), #arg0, __FILE__, __LINE__ )
#define glFinish( )  gldlFinish( __FILE__, __LINE__ )
#define glFlush( )  gldlFlush( __FILE__, __LINE__ )
#define glBlendFunc( arg0, arg1 )  gldlBlendFunc( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glLogicOp( arg0 )  gldlLogicOp( (arg0), #arg0, __FILE__, __LINE__ )
#define glStencilFunc( arg0, arg1, arg2 )  gldlStencilFunc( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glStencilOp( arg0, arg1, arg2 )  gldlStencilOp( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glDepthFunc( arg0 )  gldlDepthFunc( (arg0), #arg0, __FILE__, __LINE__ )
#define glPixelStoref( arg0, arg1 )  gldlPixelStoref( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glPixelStorei( arg0, arg1 )  gldlPixelStorei( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glReadBuffer( arg0 )  gldlReadBuffer( (arg0), #arg0, __FILE__, __LINE__ )
#define glReadPixels( arg0, arg1, arg2, arg3, arg4, arg5, arg6 )  gldlReadPixels( (arg0), (arg1), (arg2), (arg3), (arg4), (arg5), (arg6), #arg0, #arg1, #arg2, #arg3, #arg4, #arg5, #arg6, __FILE__, __LINE__ )
#define glGetBooleanv( arg0, arg1 )  gldlGetBooleanv( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glGetDoublev( arg0, arg1 )  gldlGetDoublev( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glGetError( )  gldlGetError( __FILE__, __LINE__ )
#define glGetFloatv( arg0, arg1 )  gldlGetFloatv( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glGetIntegerv( arg0, arg1 )  gldlGetIntegerv( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glGetString( arg0 )  gldlGetString( (arg0), #arg0, __FILE__, __LINE__ )
#define glGetTexImage( arg0, arg1, arg2, arg3, arg4 )  gldlGetTexImage( (arg0), (arg1), (arg2), (arg3), (arg4), #arg0, #arg1, #arg2, #arg3, #arg4, __FILE__, __LINE__ )
#define glGetTexParameterfv( arg0, arg1, arg2 )  gldlGetTexParameterfv( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glGetTexParameteriv( arg0, arg1, arg2 )  gldlGetTexParameteriv( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glGetTexLevelParameterfv( arg0, arg1, arg2, arg3 )  gldlGetTexLevelParameterfv( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glGetTexLevelParameteriv( arg0, arg1, arg2, arg3 )  gldlGetTexLevelParameteriv( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glIsEnabled( arg0 )  gldlIsEnabled( (arg0), #arg0, __FILE__, __LINE__ )
#define glDepthRange( arg0, arg1 )  gldlDepthRange( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glViewport( arg0, arg1, arg2, arg3 )  gldlViewport( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glDrawArrays( arg0, arg1, arg2 )  gldlDrawArrays( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glDrawElements( arg0, arg1, arg2, arg3 )  gldlDrawElements( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glGetPointerv( arg0, arg1 )  gldlGetPointerv( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glPolygonOffset( arg0, arg1 )  gldlPolygonOffset( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glCopyTexImage1D( arg0, arg1, arg2, arg3, arg4, arg5, arg6 )  gldlCopyTexImage1D( (arg0), (arg1), (arg2), (arg3), (arg4), (arg5), (arg6), #arg0, #arg1, #arg2, #arg3, #arg4, #arg5, #arg6, __FILE__, __LINE__ )
#define glCopyTexImage2D( arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7 )  gldlCopyTexImage2D( (arg0), (arg1), (arg2), (arg3), (arg4), (arg5), (arg6), (arg7), #arg0, #arg1, #arg2, #arg3, #arg4, #arg5, #arg6, #arg7, __FILE__, __LINE__ )
#define glCopyTexSubImage1D( arg0, arg1, arg2, arg3, arg4, arg5 )  gldlCopyTexSubImage1D( (arg0), (arg1), (arg2), (arg3), (arg4), (arg5), #arg0, #arg1, #arg2, #arg3, #arg4, #arg5, __FILE__, __LINE__ )
#define glCopyTexSubImage2D( arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7 )  gldlCopyTexSubImage2D( (arg0), (arg1), (arg2), (arg3), (arg4), (arg5), (arg6), (arg7), #arg0, #arg1, #arg2, #arg3, #arg4, #arg5, #arg6, #arg7, __FILE__, __LINE__ )
#define glTexSubImage1D( arg0, arg1, arg2, arg3, arg4, arg5, arg6 )  gldlTexSubImage1D( (arg0), (arg1), (arg2), (arg3), (arg4), (arg5), (arg6), #arg0, #arg1, #arg2, #arg3, #arg4, #arg5, #arg6, __FILE__, __LINE__ )
#define glTexSubImage2D( arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8 )  gldlTexSubImage2D( (arg0), (arg1), (arg2), (arg3), (arg4), (arg5), (arg6), (arg7), (arg8), #arg0, #arg1, #arg2, #arg3, #arg4, #arg5, #arg6, #arg7, #arg8, __FILE__, __LINE__ )
#define glBindTexture( arg0, arg1 )  gldlBindTexture( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glDeleteTextures( arg0, arg1 )  gldlDeleteTextures( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glGenTextures( arg0, arg1 )  gldlGenTextures( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glIsTexture( arg0 )  gldlIsTexture( (arg0), #arg0, __FILE__, __LINE__ )
#define glBlendColor( arg0, arg1, arg2, arg3 )  gldlBlendColor( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glBlendEquation( arg0 )  gldlBlendEquation( (arg0), #arg0, __FILE__, __LINE__ )
#define glDrawRangeElements( arg0, arg1, arg2, arg3, arg4, arg5 )  gldlDrawRangeElements( (arg0), (arg1), (arg2), (arg3), (arg4), (arg5), #arg0, #arg1, #arg2, #arg3, #arg4, #arg5, __FILE__, __LINE__ )
#define glTexImage3D( arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9 )  gldlTexImage3D( (arg0), (arg1), (arg2), (arg3), (arg4), (arg5), (arg6), (arg7), (arg8), (arg9), #arg0, #arg1, #arg2, #arg3, #arg4, #arg5, #arg6, #arg7, #arg8, #arg9, __FILE__, __LINE__ )
#define glTexSubImage3D( arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10 )  gldlTexSubImage3D( (arg0), (arg1), (arg2), (arg3), (arg4), (arg5), (arg6), (arg7), (arg8), (arg9), (arg10), #arg0, #arg1, #arg2, #arg3, #arg4, #arg5, #arg6, #arg7, #arg8, #arg9, #arg10, __FILE__, __LINE__ )
#define glCopyTexSubImage3D( arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8 )  gldlCopyTexSubImage3D( (arg0), (arg1), (arg2), (arg3), (arg4), (arg5), (arg6), (arg7), (arg8), #arg0, #arg1, #arg2, #arg3, #arg4, #arg5, #arg6, #arg7, #arg8, __FILE__, __LINE__ )
#define glActiveTexture( arg0 )  gldlActiveTexture( (arg0), #arg0, __FILE__, __LINE__ )
#define glSampleCoverage( arg0, arg1 )  gldlSampleCoverage( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glCompressedTexImage3D( arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8 )  gldlCompressedTexImage3D( (arg0), (arg1), (arg2), (arg3), (arg4), (arg5), (arg6), (arg7), (arg8), #arg0, #arg1, #arg2, #arg3, #arg4, #arg5, #arg6, #arg7, #arg8, __FILE__, __LINE__ )
#define glCompressedTexImage2D( arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7 )  gldlCompressedTexImage2D( (arg0), (arg1), (arg2), (arg3), (arg4), (arg5), (arg6), (arg7), #arg0, #arg1, #arg2, #arg3, #arg4, #arg5, #arg6, #arg7, __FILE__, __LINE__ )
#define glCompressedTexImage1D( arg0, arg1, arg2, arg3, arg4, arg5, arg6 )  gldlCompressedTexImage1D( (arg0), (arg1), (arg2), (arg3), (arg4), (arg5), (arg6), #arg0, #arg1, #arg2, #arg3, #arg4, #arg5, #arg6, __FILE__, __LINE__ )
#define glCompressedTexSubImage3D( arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10 )  gldlCompressedTexSubImage3D( (arg0), (arg1), (arg2), (arg3), (arg4), (arg5), (arg6), (arg7), (arg8), (arg9), (arg10), #arg0, #arg1, #arg2, #arg3, #arg4, #arg5, #arg6, #arg7, #arg8, #arg9, #arg10, __FILE__, __LINE__ )
#define glCompressedTexSubImage2D( arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8 )  gldlCompressedTexSubImage2D( (arg0), (arg1), (arg2), (arg3), (arg4), (arg5), (arg6), (arg7), (arg8), #arg0, #arg1, #arg2, #arg3, #arg4, #arg5, #arg6, #arg7, #arg8, __FILE__, __LINE__ )
#define glCompressedTexSubImage1D( arg0, arg1, arg2, arg3, arg4, arg5, arg6 )  gldlCompressedTexSubImage1D( (arg0), (arg1), (arg2), (arg3), (arg4), (arg5), (arg6), #arg0, #arg1, #arg2, #arg3, #arg4, #arg5, #arg6, __FILE__, __LINE__ )
#define glGetCompressedTexImage( arg0, arg1, arg2 )  gldlGetCompressedTexImage( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glBlendFuncSeparate( arg0, arg1, arg2, arg3 )  gldlBlendFuncSeparate( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glMultiDrawArrays( arg0, arg1, arg2, arg3 )  gldlMultiDrawArrays( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glMultiDrawElements( arg0, arg1, arg2, arg3, arg4 )  gldlMultiDrawElements( (arg0), (arg1), (arg2), (arg3), (arg4), #arg0, #arg1, #arg2, #arg3, #arg4, __FILE__, __LINE__ )
#define glPointParameterf( arg0, arg1 )  gldlPointParameterf( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glPointParameterfv( arg0, arg1 )  gldlPointParameterfv( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glPointParameteri( arg0, arg1 )  gldlPointParameteri( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glPointParameteriv( arg0, arg1 )  gldlPointParameteriv( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glGenQueries( arg0, arg1 )  gldlGenQueries( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glDeleteQueries( arg0, arg1 )  gldlDeleteQueries( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glIsQuery( arg0 )  gldlIsQuery( (arg0), #arg0, __FILE__, __LINE__ )
#define glBeginQuery( arg0, arg1 )  gldlBeginQuery( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glEndQuery( arg0 )  gldlEndQuery( (arg0), #arg0, __FILE__, __LINE__ )
#define glGetQueryiv( arg0, arg1, arg2 )  gldlGetQueryiv( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glGetQueryObjectiv( arg0, arg1, arg2 )  gldlGetQueryObjectiv( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glGetQueryObjectuiv( arg0, arg1, arg2 )  gldlGetQueryObjectuiv( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glBindBuffer( arg0, arg1 )  gldlBindBuffer( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glDeleteBuffers( arg0, arg1 )  gldlDeleteBuffers( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glGenBuffers( arg0, arg1 )  gldlGenBuffers( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glIsBuffer( arg0 )  gldlIsBuffer( (arg0), #arg0, __FILE__, __LINE__ )
#define glBufferData( arg0, arg1, arg2, arg3 )  gldlBufferData( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glBufferSubData( arg0, arg1, arg2, arg3 )  gldlBufferSubData( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glGetBufferSubData( arg0, arg1, arg2, arg3 )  gldlGetBufferSubData( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glMapBuffer( arg0, arg1 )  gldlMapBuffer( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glUnmapBuffer( arg0 )  gldlUnmapBuffer( (arg0), #arg0, __FILE__, __LINE__ )
#define glGetBufferParameteriv( arg0, arg1, arg2 )  gldlGetBufferParameteriv( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glGetBufferPointerv( arg0, arg1, arg2 )  gldlGetBufferPointerv( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glBlendEquationSeparate( arg0, arg1 )  gldlBlendEquationSeparate( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glDrawBuffers( arg0, arg1 )  gldlDrawBuffers( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glStencilOpSeparate( arg0, arg1, arg2, arg3 )  gldlStencilOpSeparate( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glStencilFuncSeparate( arg0, arg1, arg2, arg3 )  gldlStencilFuncSeparate( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glStencilMaskSeparate( arg0, arg1 )  gldlStencilMaskSeparate( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glAttachShader( arg0, arg1 )  gldlAttachShader( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glBindAttribLocation( arg0, arg1, arg2 )  gldlBindAttribLocation( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glCompileShader( arg0 )  gldlCompileShader( (arg0), #arg0, __FILE__, __LINE__ )
#define glCreateProgram( )  gldlCreateProgram( __FILE__, __LINE__ )
#define glCreateShader( arg0 )  gldlCreateShader( (arg0), #arg0, __FILE__, __LINE__ )
#define glDeleteProgram( arg0 )  gldlDeleteProgram( (arg0), #arg0, __FILE__, __LINE__ )
#define glDeleteShader( arg0 )  gldlDeleteShader( (arg0), #arg0, __FILE__, __LINE__ )
#define glDetachShader( arg0, arg1 )  gldlDetachShader( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glDisableVertexAttribArray( arg0 )  gldlDisableVertexAttribArray( (arg0), #arg0, __FILE__, __LINE__ )
#define glEnableVertexAttribArray( arg0 )  gldlEnableVertexAttribArray( (arg0), #arg0, __FILE__, __LINE__ )
#define glGetActiveAttrib( arg0, arg1, arg2, arg3, arg4, arg5, arg6 )  gldlGetActiveAttrib( (arg0), (arg1), (arg2), (arg3), (arg4), (arg5), (arg6), #arg0, #arg1, #arg2, #arg3, #arg4, #arg5, #arg6, __FILE__, __LINE__ )
#define glGetActiveUniform( arg0, arg1, arg2, arg3, arg4, arg5, arg6 )  gldlGetActiveUniform( (arg0), (arg1), (arg2), (arg3), (arg4), (arg5), (arg6), #arg0, #arg1, #arg2, #arg3, #arg4, #arg5, #arg6, __FILE__, __LINE__ )
#define glGetAttachedShaders( arg0, arg1, arg2, arg3 )  gldlGetAttachedShaders( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glGetAttribLocation( arg0, arg1 )  gldlGetAttribLocation( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glGetProgramiv( arg0, arg1, arg2 )  gldlGetProgramiv( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glGetProgramInfoLog( arg0, arg1, arg2, arg3 )  gldlGetProgramInfoLog( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glGetShaderiv( arg0, arg1, arg2 )  gldlGetShaderiv( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glGetShaderInfoLog( arg0, arg1, arg2, arg3 )  gldlGetShaderInfoLog( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glGetShaderSource( arg0, arg1, arg2, arg3 )  gldlGetShaderSource( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glGetUniformLocation( arg0, arg1 )  gldlGetUniformLocation( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glGetUniformfv( arg0, arg1, arg2 )  gldlGetUniformfv( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glGetUniformiv( arg0, arg1, arg2 )  gldlGetUniformiv( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glGetVertexAttribdv( arg0, arg1, arg2 )  gldlGetVertexAttribdv( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glGetVertexAttribfv( arg0, arg1, arg2 )  gldlGetVertexAttribfv( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glGetVertexAttribiv( arg0, arg1, arg2 )  gldlGetVertexAttribiv( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glGetVertexAttribPointerv( arg0, arg1, arg2 )  gldlGetVertexAttribPointerv( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glIsProgram( arg0 )  gldlIsProgram( (arg0), #arg0, __FILE__, __LINE__ )
#define glIsShader( arg0 )  gldlIsShader( (arg0), #arg0, __FILE__, __LINE__ )
#define glLinkProgram( arg0 )  gldlLinkProgram( (arg0), #arg0, __FILE__, __LINE__ )
#define glShaderSource( arg0, arg1, arg2, arg3 )  gldlShaderSource( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glUseProgram( arg0 )  gldlUseProgram( (arg0), #arg0, __FILE__, __LINE__ )
#define glUniform1f( arg0, arg1 )  gldlUniform1f( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glUniform2f( arg0, arg1, arg2 )  gldlUniform2f( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glUniform3f( arg0, arg1, arg2, arg3 )  gldlUniform3f( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glUniform4f( arg0, arg1, arg2, arg3, arg4 )  gldlUniform4f( (arg0), (arg1), (arg2), (arg3), (arg4), #arg0, #arg1, #arg2, #arg3, #arg4, __FILE__, __LINE__ )
#define glUniform1i( arg0, arg1 )  gldlUniform1i( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glUniform2i( arg0, arg1, arg2 )  gldlUniform2i( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glUniform3i( arg0, arg1, arg2, arg3 )  gldlUniform3i( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glUniform4i( arg0, arg1, arg2, arg3, arg4 )  gldlUniform4i( (arg0), (arg1), (arg2), (arg3), (arg4), #arg0, #arg1, #arg2, #arg3, #arg4, __FILE__, __LINE__ )
#define glUniform1fv( arg0, arg1, arg2 )  gldlUniform1fv( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glUniform2fv( arg0, arg1, arg2 )  gldlUniform2fv( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glUniform3fv( arg0, arg1, arg2 )  gldlUniform3fv( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glUniform4fv( arg0, arg1, arg2 )  gldlUniform4fv( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glUniform1iv( arg0, arg1, arg2 )  gldlUniform1iv( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glUniform2iv( arg0, arg1, arg2 )  gldlUniform2iv( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glUniform3iv( arg0, arg1, arg2 )  gldlUniform3iv( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glUniform4iv( arg0, arg1, arg2 )  gldlUniform4iv( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glUniformMatrix2fv( arg0, arg1, arg2, arg3 )  gldlUniformMatrix2fv( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glUniformMatrix3fv( arg0, arg1, arg2, arg3 )  gldlUniformMatrix3fv( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glUniformMatrix4fv( arg0, arg1, arg2, arg3 )  gldlUniformMatrix4fv( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glValidateProgram( arg0 )  gldlValidateProgram( (arg0), #arg0, __FILE__, __LINE__ )
#define glVertexAttrib1d( arg0, arg1 )  gldlVertexAttrib1d( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glVertexAttrib1dv( arg0, arg1 )  gldlVertexAttrib1dv( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glVertexAttrib1f( arg0, arg1 )  gldlVertexAttrib1f( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glVertexAttrib1fv( arg0, arg1 )  gldlVertexAttrib1fv( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glVertexAttrib1s( arg0, arg1 )  gldlVertexAttrib1s( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glVertexAttrib1sv( arg0, arg1 )  gldlVertexAttrib1sv( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glVertexAttrib2d( arg0, arg1, arg2 )  gldlVertexAttrib2d( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glVertexAttrib2dv( arg0, arg1 )  gldlVertexAttrib2dv( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glVertexAttrib2f( arg0, arg1, arg2 )  gldlVertexAttrib2f( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glVertexAttrib2fv( arg0, arg1 )  gldlVertexAttrib2fv( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glVertexAttrib2s( arg0, arg1, arg2 )  gldlVertexAttrib2s( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glVertexAttrib2sv( arg0, arg1 )  gldlVertexAttrib2sv( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glVertexAttrib3d( arg0, arg1, arg2, arg3 )  gldlVertexAttrib3d( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glVertexAttrib3dv( arg0, arg1 )  gldlVertexAttrib3dv( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glVertexAttrib3f( arg0, arg1, arg2, arg3 )  gldlVertexAttrib3f( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glVertexAttrib3fv( arg0, arg1 )  gldlVertexAttrib3fv( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glVertexAttrib3s( arg0, arg1, arg2, arg3 )  gldlVertexAttrib3s( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glVertexAttrib3sv( arg0, arg1 )  gldlVertexAttrib3sv( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glVertexAttrib4Nbv( arg0, arg1 )  gldlVertexAttrib4Nbv( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glVertexAttrib4Niv( arg0, arg1 )  gldlVertexAttrib4Niv( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glVertexAttrib4Nsv( arg0, arg1 )  gldlVertexAttrib4Nsv( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glVertexAttrib4Nub( arg0, arg1, arg2, arg3, arg4 )  gldlVertexAttrib4Nub( (arg0), (arg1), (arg2), (arg3), (arg4), #arg0, #arg1, #arg2, #arg3, #arg4, __FILE__, __LINE__ )
#define glVertexAttrib4Nubv( arg0, arg1 )  gldlVertexAttrib4Nubv( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glVertexAttrib4Nuiv( arg0, arg1 )  gldlVertexAttrib4Nuiv( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glVertexAttrib4Nusv( arg0, arg1 )  gldlVertexAttrib4Nusv( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glVertexAttrib4bv( arg0, arg1 )  gldlVertexAttrib4bv( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glVertexAttrib4d( arg0, arg1, arg2, arg3, arg4 )  gldlVertexAttrib4d( (arg0), (arg1), (arg2), (arg3), (arg4), #arg0, #arg1, #arg2, #arg3, #arg4, __FILE__, __LINE__ )
#define glVertexAttrib4dv( arg0, arg1 )  gldlVertexAttrib4dv( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glVertexAttrib4f( arg0, arg1, arg2, arg3, arg4 )  gldlVertexAttrib4f( (arg0), (arg1), (arg2), (arg3), (arg4), #arg0, #arg1, #arg2, #arg3, #arg4, __FILE__, __LINE__ )
#define glVertexAttrib4fv( arg0, arg1 )  gldlVertexAttrib4fv( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glVertexAttrib4iv( arg0, arg1 )  gldlVertexAttrib4iv( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glVertexAttrib4s( arg0, arg1, arg2, arg3, arg4 )  gldlVertexAttrib4s( (arg0), (arg1), (arg2), (arg3), (arg4), #arg0, #arg1, #arg2, #arg3, #arg4, __FILE__, __LINE__ )
#define glVertexAttrib4sv( arg0, arg1 )  gldlVertexAttrib4sv( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glVertexAttrib4ubv( arg0, arg1 )  gldlVertexAttrib4ubv( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glVertexAttrib4uiv( arg0, arg1 )  gldlVertexAttrib4uiv( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glVertexAttrib4usv( arg0, arg1 )  gldlVertexAttrib4usv( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glVertexAttribPointer( arg0, arg1, arg2, arg3, arg4, arg5 )  gldlVertexAttribPointer( (arg0), (arg1), (arg2), (arg3), (arg4), (arg5), #arg0, #arg1, #arg2, #arg3, #arg4, #arg5, __FILE__, __LINE__ )
#define glUniformMatrix2x3fv( arg0, arg1, arg2, arg3 )  gldlUniformMatrix2x3fv( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glUniformMatrix3x2fv( arg0, arg1, arg2, arg3 )  gldlUniformMatrix3x2fv( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glUniformMatrix2x4fv( arg0, arg1, arg2, arg3 )  gldlUniformMatrix2x4fv( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glUniformMatrix4x2fv( arg0, arg1, arg2, arg3 )  gldlUniformMatrix4x2fv( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glUniformMatrix3x4fv( arg0, arg1, arg2, arg3 )  gldlUniformMatrix3x4fv( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glUniformMatrix4x3fv( arg0, arg1, arg2, arg3 )  gldlUniformMatrix4x3fv( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glColorMaski( arg0, arg1, arg2, arg3, arg4 )  gldlColorMaski( (arg0), (arg1), (arg2), (arg3), (arg4), #arg0, #arg1, #arg2, #arg3, #arg4, __FILE__, __LINE__ )
#define glGetBooleani_v( arg0, arg1, arg2 )  gldlGetBooleani_v( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glGetIntegeri_v( arg0, arg1, arg2 )  gldlGetIntegeri_v( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glEnablei( arg0, arg1 )  gldlEnablei( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glDisablei( arg0, arg1 )  gldlDisablei( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glIsEnabledi( arg0, arg1 )  gldlIsEnabledi( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glBeginTransformFeedback( arg0 )  gldlBeginTransformFeedback( (arg0), #arg0, __FILE__, __LINE__ )
#define glEndTransformFeedback( )  gldlEndTransformFeedback( __FILE__, __LINE__ )
#define glBindBufferRange( arg0, arg1, arg2, arg3, arg4 )  gldlBindBufferRange( (arg0), (arg1), (arg2), (arg3), (arg4), #arg0, #arg1, #arg2, #arg3, #arg4, __FILE__, __LINE__ )
#define glBindBufferBase( arg0, arg1, arg2 )  gldlBindBufferBase( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glTransformFeedbackVaryings( arg0, arg1, arg2, arg3 )  gldlTransformFeedbackVaryings( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glGetTransformFeedbackVarying( arg0, arg1, arg2, arg3, arg4, arg5, arg6 )  gldlGetTransformFeedbackVarying( (arg0), (arg1), (arg2), (arg3), (arg4), (arg5), (arg6), #arg0, #arg1, #arg2, #arg3, #arg4, #arg5, #arg6, __FILE__, __LINE__ )
#define glClampColor( arg0, arg1 )  gldlClampColor( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glBeginConditionalRender( arg0, arg1 )  gldlBeginConditionalRender( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glEndConditionalRender( )  gldlEndConditionalRender( __FILE__, __LINE__ )
#define glVertexAttribIPointer( arg0, arg1, arg2, arg3, arg4 )  gldlVertexAttribIPointer( (arg0), (arg1), (arg2), (arg3), (arg4), #arg0, #arg1, #arg2, #arg3, #arg4, __FILE__, __LINE__ )
#define glGetVertexAttribIiv( arg0, arg1, arg2 )  gldlGetVertexAttribIiv( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glGetVertexAttribIuiv( arg0, arg1, arg2 )  gldlGetVertexAttribIuiv( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glVertexAttribI1i( arg0, arg1 )  gldlVertexAttribI1i( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glVertexAttribI2i( arg0, arg1, arg2 )  gldlVertexAttribI2i( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glVertexAttribI3i( arg0, arg1, arg2, arg3 )  gldlVertexAttribI3i( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glVertexAttribI4i( arg0, arg1, arg2, arg3, arg4 )  gldlVertexAttribI4i( (arg0), (arg1), (arg2), (arg3), (arg4), #arg0, #arg1, #arg2, #arg3, #arg4, __FILE__, __LINE__ )
#define glVertexAttribI1ui( arg0, arg1 )  gldlVertexAttribI1ui( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glVertexAttribI2ui( arg0, arg1, arg2 )  gldlVertexAttribI2ui( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glVertexAttribI3ui( arg0, arg1, arg2, arg3 )  gldlVertexAttribI3ui( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glVertexAttribI4ui( arg0, arg1, arg2, arg3, arg4 )  gldlVertexAttribI4ui( (arg0), (arg1), (arg2), (arg3), (arg4), #arg0, #arg1, #arg2, #arg3, #arg4, __FILE__, __LINE__ )
#define glVertexAttribI1iv( arg0, arg1 )  gldlVertexAttribI1iv( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glVertexAttribI2iv( arg0, arg1 )  gldlVertexAttribI2iv( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glVertexAttribI3iv( arg0, arg1 )  gldlVertexAttribI3iv( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glVertexAttribI4iv( arg0, arg1 )  gldlVertexAttribI4iv( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glVertexAttribI1uiv( arg0, arg1 )  gldlVertexAttribI1uiv( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glVertexAttribI2uiv( arg0, arg1 )  gldlVertexAttribI2uiv( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glVertexAttribI3uiv( arg0, arg1 )  gldlVertexAttribI3uiv( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glVertexAttribI4uiv( arg0, arg1 )  gldlVertexAttribI4uiv( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glVertexAttribI4bv( arg0, arg1 )  gldlVertexAttribI4bv( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glVertexAttribI4sv( arg0, arg1 )  gldlVertexAttribI4sv( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glVertexAttribI4ubv( arg0, arg1 )  gldlVertexAttribI4ubv( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glVertexAttribI4usv( arg0, arg1 )  gldlVertexAttribI4usv( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glGetUniformuiv( arg0, arg1, arg2 )  gldlGetUniformuiv( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glBindFragDataLocation( arg0, arg1, arg2 )  gldlBindFragDataLocation( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glGetFragDataLocation( arg0, arg1 )  gldlGetFragDataLocation( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glUniform1ui( arg0, arg1 )  gldlUniform1ui( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glUniform2ui( arg0, arg1, arg2 )  gldlUniform2ui( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glUniform3ui( arg0, arg1, arg2, arg3 )  gldlUniform3ui( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glUniform4ui( arg0, arg1, arg2, arg3, arg4 )  gldlUniform4ui( (arg0), (arg1), (arg2), (arg3), (arg4), #arg0, #arg1, #arg2, #arg3, #arg4, __FILE__, __LINE__ )
#define glUniform1uiv( arg0, arg1, arg2 )  gldlUniform1uiv( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glUniform2uiv( arg0, arg1, arg2 )  gldlUniform2uiv( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glUniform3uiv( arg0, arg1, arg2 )  gldlUniform3uiv( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glUniform4uiv( arg0, arg1, arg2 )  gldlUniform4uiv( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glTexParameterIiv( arg0, arg1, arg2 )  gldlTexParameterIiv( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glTexParameterIuiv( arg0, arg1, arg2 )  gldlTexParameterIuiv( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glGetTexParameterIiv( arg0, arg1, arg2 )  gldlGetTexParameterIiv( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glGetTexParameterIuiv( arg0, arg1, arg2 )  gldlGetTexParameterIuiv( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glClearBufferiv( arg0, arg1, arg2 )  gldlClearBufferiv( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glClearBufferuiv( arg0, arg1, arg2 )  gldlClearBufferuiv( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glClearBufferfv( arg0, arg1, arg2 )  gldlClearBufferfv( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glClearBufferfi( arg0, arg1, arg2, arg3 )  gldlClearBufferfi( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glGetStringi( arg0, arg1 )  gldlGetStringi( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glDrawArraysInstanced( arg0, arg1, arg2, arg3 )  gldlDrawArraysInstanced( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glDrawElementsInstanced( arg0, arg1, arg2, arg3, arg4 )  gldlDrawElementsInstanced( (arg0), (arg1), (arg2), (arg3), (arg4), #arg0, #arg1, #arg2, #arg3, #arg4, __FILE__, __LINE__ )
#define glTexBuffer( arg0, arg1, arg2 )  gldlTexBuffer( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glPrimitiveRestartIndex( arg0 )  gldlPrimitiveRestartIndex( (arg0), #arg0, __FILE__, __LINE__ )
#define glGetInteger64i_v( arg0, arg1, arg2 )  gldlGetInteger64i_v( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glGetBufferParameteri64v( arg0, arg1, arg2 )  gldlGetBufferParameteri64v( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glFramebufferTexture( arg0, arg1, arg2, arg3 )  gldlFramebufferTexture( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glVertexAttribDivisor( arg0, arg1 )  gldlVertexAttribDivisor( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glMinSampleShading( arg0 )  gldlMinSampleShading( (arg0), #arg0, __FILE__, __LINE__ )
#define glBlendEquationi( arg0, arg1 )  gldlBlendEquationi( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glBlendEquationSeparatei( arg0, arg1, arg2 )  gldlBlendEquationSeparatei( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glBlendFunci( arg0, arg1, arg2 )  gldlBlendFunci( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glBlendFuncSeparatei( arg0, arg1, arg2, arg3, arg4 )  gldlBlendFuncSeparatei( (arg0), (arg1), (arg2), (arg3), (arg4), #arg0, #arg1, #arg2, #arg3, #arg4, __FILE__, __LINE__ )
#define glIsRenderbuffer( arg0 )  gldlIsRenderbuffer( (arg0), #arg0, __FILE__, __LINE__ )
#define glBindRenderbuffer( arg0, arg1 )  gldlBindRenderbuffer( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glDeleteRenderbuffers( arg0, arg1 )  gldlDeleteRenderbuffers( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glGenRenderbuffers( arg0, arg1 )  gldlGenRenderbuffers( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glRenderbufferStorage( arg0, arg1, arg2, arg3 )  gldlRenderbufferStorage( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glGetRenderbufferParameteriv( arg0, arg1, arg2 )  gldlGetRenderbufferParameteriv( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glIsFramebuffer( arg0 )  gldlIsFramebuffer( (arg0), #arg0, __FILE__, __LINE__ )
#define glBindFramebuffer( arg0, arg1 )  gldlBindFramebuffer( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glDeleteFramebuffers( arg0, arg1 )  gldlDeleteFramebuffers( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glGenFramebuffers( arg0, arg1 )  gldlGenFramebuffers( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glCheckFramebufferStatus( arg0 )  gldlCheckFramebufferStatus( (arg0), #arg0, __FILE__, __LINE__ )
#define glFramebufferTexture1D( arg0, arg1, arg2, arg3, arg4 )  gldlFramebufferTexture1D( (arg0), (arg1), (arg2), (arg3), (arg4), #arg0, #arg1, #arg2, #arg3, #arg4, __FILE__, __LINE__ )
#define glFramebufferTexture2D( arg0, arg1, arg2, arg3, arg4 )  gldlFramebufferTexture2D( (arg0), (arg1), (arg2), (arg3), (arg4), #arg0, #arg1, #arg2, #arg3, #arg4, __FILE__, __LINE__ )
#define glFramebufferTexture3D( arg0, arg1, arg2, arg3, arg4, arg5 )  gldlFramebufferTexture3D( (arg0), (arg1), (arg2), (arg3), (arg4), (arg5), #arg0, #arg1, #arg2, #arg3, #arg4, #arg5, __FILE__, __LINE__ )
#define glFramebufferRenderbuffer( arg0, arg1, arg2, arg3 )  gldlFramebufferRenderbuffer( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glGetFramebufferAttachmentParameteriv( arg0, arg1, arg2, arg3 )  gldlGetFramebufferAttachmentParameteriv( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glGenerateMipmap( arg0 )  gldlGenerateMipmap( (arg0), #arg0, __FILE__, __LINE__ )
#define glBlitFramebuffer( arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9 )  gldlBlitFramebuffer( (arg0), (arg1), (arg2), (arg3), (arg4), (arg5), (arg6), (arg7), (arg8), (arg9), #arg0, #arg1, #arg2, #arg3, #arg4, #arg5, #arg6, #arg7, #arg8, #arg9, __FILE__, __LINE__ )
#define glRenderbufferStorageMultisample( arg0, arg1, arg2, arg3, arg4 )  gldlRenderbufferStorageMultisample( (arg0), (arg1), (arg2), (arg3), (arg4), #arg0, #arg1, #arg2, #arg3, #arg4, __FILE__, __LINE__ )
#define glFramebufferTextureLayer( arg0, arg1, arg2, arg3, arg4 )  gldlFramebufferTextureLayer( (arg0), (arg1), (arg2), (arg3), (arg4), #arg0, #arg1, #arg2, #arg3, #arg4, __FILE__, __LINE__ )
#define glMapBufferRange( arg0, arg1, arg2, arg3 )  gldlMapBufferRange( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glFlushMappedBufferRange( arg0, arg1, arg2 )  gldlFlushMappedBufferRange( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glBindVertexArray( arg0 )  gldlBindVertexArray( (arg0), #arg0, __FILE__, __LINE__ )
#define glDeleteVertexArrays( arg0, arg1 )  gldlDeleteVertexArrays( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glGenVertexArrays( arg0, arg1 )  gldlGenVertexArrays( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glIsVertexArray( arg0 )  gldlIsVertexArray( (arg0), #arg0, __FILE__, __LINE__ )
#define glGetUniformIndices( arg0, arg1, arg2, arg3 )  gldlGetUniformIndices( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glGetActiveUniformsiv( arg0, arg1, arg2, arg3, arg4 )  gldlGetActiveUniformsiv( (arg0), (arg1), (arg2), (arg3), (arg4), #arg0, #arg1, #arg2, #arg3, #arg4, __FILE__, __LINE__ )
#define glGetActiveUniformName( arg0, arg1, arg2, arg3, arg4 )  gldlGetActiveUniformName( (arg0), (arg1), (arg2), (arg3), (arg4), #arg0, #arg1, #arg2, #arg3, #arg4, __FILE__, __LINE__ )
#define glGetUniformBlockIndex( arg0, arg1 )  gldlGetUniformBlockIndex( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glGetActiveUniformBlockiv( arg0, arg1, arg2, arg3 )  gldlGetActiveUniformBlockiv( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glGetActiveUniformBlockName( arg0, arg1, arg2, arg3, arg4 )  gldlGetActiveUniformBlockName( (arg0), (arg1), (arg2), (arg3), (arg4), #arg0, #arg1, #arg2, #arg3, #arg4, __FILE__, __LINE__ )
#define glUniformBlockBinding( arg0, arg1, arg2 )  gldlUniformBlockBinding( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glCopyBufferSubData( arg0, arg1, arg2, arg3, arg4 )  gldlCopyBufferSubData( (arg0), (arg1), (arg2), (arg3), (arg4), #arg0, #arg1, #arg2, #arg3, #arg4, __FILE__, __LINE__ )
#define glDrawElementsBaseVertex( arg0, arg1, arg2, arg3, arg4 )  gldlDrawElementsBaseVertex( (arg0), (arg1), (arg2), (arg3), (arg4), #arg0, #arg1, #arg2, #arg3, #arg4, __FILE__, __LINE__ )
#define glDrawRangeElementsBaseVertex( arg0, arg1, arg2, arg3, arg4, arg5, arg6 )  gldlDrawRangeElementsBaseVertex( (arg0), (arg1), (arg2), (arg3), (arg4), (arg5), (arg6), #arg0, #arg1, #arg2, #arg3, #arg4, #arg5, #arg6, __FILE__, __LINE__ )
#define glDrawElementsInstancedBaseVertex( arg0, arg1, arg2, arg3, arg4, arg5 )  gldlDrawElementsInstancedBaseVertex( (arg0), (arg1), (arg2), (arg3), (arg4), (arg5), #arg0, #arg1, #arg2, #arg3, #arg4, #arg5, __FILE__, __LINE__ )
#define glMultiDrawElementsBaseVertex( arg0, arg1, arg2, arg3, arg4, arg5 )  gldlMultiDrawElementsBaseVertex( (arg0), (arg1), (arg2), (arg3), (arg4), (arg5), #arg0, #arg1, #arg2, #arg3, #arg4, #arg5, __FILE__, __LINE__ )
#define glProvokingVertex( arg0 )  gldlProvokingVertex( (arg0), #arg0, __FILE__, __LINE__ )
#define glFenceSync( arg0, arg1 )  gldlFenceSync( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glIsSync( arg0 )  gldlIsSync( (arg0), #arg0, __FILE__, __LINE__ )
#define glDeleteSync( arg0 )  gldlDeleteSync( (arg0), #arg0, __FILE__, __LINE__ )
#define glClientWaitSync( arg0, arg1, arg2 )  gldlClientWaitSync( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glWaitSync( arg0, arg1, arg2 )  gldlWaitSync( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glGetInteger64v( arg0, arg1 )  gldlGetInteger64v( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glGetSynciv( arg0, arg1, arg2, arg3, arg4 )  gldlGetSynciv( (arg0), (arg1), (arg2), (arg3), (arg4), #arg0, #arg1, #arg2, #arg3, #arg4, __FILE__, __LINE__ )
#define glTexImage2DMultisample( arg0, arg1, arg2, arg3, arg4, arg5 )  gldlTexImage2DMultisample( (arg0), (arg1), (arg2), (arg3), (arg4), (arg5), #arg0, #arg1, #arg2, #arg3, #arg4, #arg5, __FILE__, __LINE__ )
#define glTexImage3DMultisample( arg0, arg1, arg2, arg3, arg4, arg5, arg6 )  gldlTexImage3DMultisample( (arg0), (arg1), (arg2), (arg3), (arg4), (arg5), (arg6), #arg0, #arg1, #arg2, #arg3, #arg4, #arg5, #arg6, __FILE__, __LINE__ )
#define glGetMultisamplefv( arg0, arg1, arg2 )  gldlGetMultisamplefv( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glSampleMaski( arg0, arg1 )  gldlSampleMaski( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glBlendEquationiARB( arg0, arg1 )  gldlBlendEquationiARB( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glBlendEquationSeparateiARB( arg0, arg1, arg2 )  gldlBlendEquationSeparateiARB( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glBlendFunciARB( arg0, arg1, arg2 )  gldlBlendFunciARB( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glBlendFuncSeparateiARB( arg0, arg1, arg2, arg3, arg4 )  gldlBlendFuncSeparateiARB( (arg0), (arg1), (arg2), (arg3), (arg4), #arg0, #arg1, #arg2, #arg3, #arg4, __FILE__, __LINE__ )
#define glMinSampleShadingARB( arg0 )  gldlMinSampleShadingARB( (arg0), #arg0, __FILE__, __LINE__ )
#define glNamedStringARB( arg0, arg1, arg2, arg3, arg4 )  gldlNamedStringARB( (arg0), (arg1), (arg2), (arg3), (arg4), #arg0, #arg1, #arg2, #arg3, #arg4, __FILE__, __LINE__ )
#define glDeleteNamedStringARB( arg0, arg1 )  gldlDeleteNamedStringARB( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glCompileShaderIncludeARB( arg0, arg1, arg2, arg3 )  gldlCompileShaderIncludeARB( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glIsNamedStringARB( arg0, arg1 )  gldlIsNamedStringARB( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glGetNamedStringARB( arg0, arg1, arg2, arg3, arg4 )  gldlGetNamedStringARB( (arg0), (arg1), (arg2), (arg3), (arg4), #arg0, #arg1, #arg2, #arg3, #arg4, __FILE__, __LINE__ )
#define glGetNamedStringivARB( arg0, arg1, arg2, arg3 )  gldlGetNamedStringivARB( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glBindFragDataLocationIndexed( arg0, arg1, arg2, arg3 )  gldlBindFragDataLocationIndexed( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glGetFragDataIndex( arg0, arg1 )  gldlGetFragDataIndex( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glGenSamplers( arg0, arg1 )  gldlGenSamplers( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glDeleteSamplers( arg0, arg1 )  gldlDeleteSamplers( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glIsSampler( arg0 )  gldlIsSampler( (arg0), #arg0, __FILE__, __LINE__ )
#define glBindSampler( arg0, arg1 )  gldlBindSampler( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glSamplerParameteri( arg0, arg1, arg2 )  gldlSamplerParameteri( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glSamplerParameteriv( arg0, arg1, arg2 )  gldlSamplerParameteriv( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glSamplerParameterf( arg0, arg1, arg2 )  gldlSamplerParameterf( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glSamplerParameterfv( arg0, arg1, arg2 )  gldlSamplerParameterfv( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glSamplerParameterIiv( arg0, arg1, arg2 )  gldlSamplerParameterIiv( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glSamplerParameterIuiv( arg0, arg1, arg2 )  gldlSamplerParameterIuiv( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glGetSamplerParameteriv( arg0, arg1, arg2 )  gldlGetSamplerParameteriv( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glGetSamplerParameterIiv( arg0, arg1, arg2 )  gldlGetSamplerParameterIiv( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glGetSamplerParameterfv( arg0, arg1, arg2 )  gldlGetSamplerParameterfv( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glGetSamplerParameterIuiv( arg0, arg1, arg2 )  gldlGetSamplerParameterIuiv( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glQueryCounter( arg0, arg1 )  gldlQueryCounter( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glGetQueryObjecti64v( arg0, arg1, arg2 )  gldlGetQueryObjecti64v( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glGetQueryObjectui64v( arg0, arg1, arg2 )  gldlGetQueryObjectui64v( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glVertexP2ui( arg0, arg1 )  gldlVertexP2ui( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glVertexP2uiv( arg0, arg1 )  gldlVertexP2uiv( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glVertexP3ui( arg0, arg1 )  gldlVertexP3ui( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glVertexP3uiv( arg0, arg1 )  gldlVertexP3uiv( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glVertexP4ui( arg0, arg1 )  gldlVertexP4ui( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glVertexP4uiv( arg0, arg1 )  gldlVertexP4uiv( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glTexCoordP1ui( arg0, arg1 )  gldlTexCoordP1ui( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glTexCoordP1uiv( arg0, arg1 )  gldlTexCoordP1uiv( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glTexCoordP2ui( arg0, arg1 )  gldlTexCoordP2ui( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glTexCoordP2uiv( arg0, arg1 )  gldlTexCoordP2uiv( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glTexCoordP3ui( arg0, arg1 )  gldlTexCoordP3ui( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glTexCoordP3uiv( arg0, arg1 )  gldlTexCoordP3uiv( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glTexCoordP4ui( arg0, arg1 )  gldlTexCoordP4ui( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glTexCoordP4uiv( arg0, arg1 )  gldlTexCoordP4uiv( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glMultiTexCoordP1ui( arg0, arg1, arg2 )  gldlMultiTexCoordP1ui( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glMultiTexCoordP1uiv( arg0, arg1, arg2 )  gldlMultiTexCoordP1uiv( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glMultiTexCoordP2ui( arg0, arg1, arg2 )  gldlMultiTexCoordP2ui( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glMultiTexCoordP2uiv( arg0, arg1, arg2 )  gldlMultiTexCoordP2uiv( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glMultiTexCoordP3ui( arg0, arg1, arg2 )  gldlMultiTexCoordP3ui( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glMultiTexCoordP3uiv( arg0, arg1, arg2 )  gldlMultiTexCoordP3uiv( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glMultiTexCoordP4ui( arg0, arg1, arg2 )  gldlMultiTexCoordP4ui( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glMultiTexCoordP4uiv( arg0, arg1, arg2 )  gldlMultiTexCoordP4uiv( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glNormalP3ui( arg0, arg1 )  gldlNormalP3ui( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glNormalP3uiv( arg0, arg1 )  gldlNormalP3uiv( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glColorP3ui( arg0, arg1 )  gldlColorP3ui( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glColorP3uiv( arg0, arg1 )  gldlColorP3uiv( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glColorP4ui( arg0, arg1 )  gldlColorP4ui( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glColorP4uiv( arg0, arg1 )  gldlColorP4uiv( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glSecondaryColorP3ui( arg0, arg1 )  gldlSecondaryColorP3ui( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glSecondaryColorP3uiv( arg0, arg1 )  gldlSecondaryColorP3uiv( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glVertexAttribP1ui( arg0, arg1, arg2, arg3 )  gldlVertexAttribP1ui( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glVertexAttribP1uiv( arg0, arg1, arg2, arg3 )  gldlVertexAttribP1uiv( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glVertexAttribP2ui( arg0, arg1, arg2, arg3 )  gldlVertexAttribP2ui( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glVertexAttribP2uiv( arg0, arg1, arg2, arg3 )  gldlVertexAttribP2uiv( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glVertexAttribP3ui( arg0, arg1, arg2, arg3 )  gldlVertexAttribP3ui( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glVertexAttribP3uiv( arg0, arg1, arg2, arg3 )  gldlVertexAttribP3uiv( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glVertexAttribP4ui( arg0, arg1, arg2, arg3 )  gldlVertexAttribP4ui( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glVertexAttribP4uiv( arg0, arg1, arg2, arg3 )  gldlVertexAttribP4uiv( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glDrawArraysIndirect( arg0, arg1 )  gldlDrawArraysIndirect( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glDrawElementsIndirect( arg0, arg1, arg2 )  gldlDrawElementsIndirect( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glUniform1d( arg0, arg1 )  gldlUniform1d( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glUniform2d( arg0, arg1, arg2 )  gldlUniform2d( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glUniform3d( arg0, arg1, arg2, arg3 )  gldlUniform3d( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glUniform4d( arg0, arg1, arg2, arg3, arg4 )  gldlUniform4d( (arg0), (arg1), (arg2), (arg3), (arg4), #arg0, #arg1, #arg2, #arg3, #arg4, __FILE__, __LINE__ )
#define glUniform1dv( arg0, arg1, arg2 )  gldlUniform1dv( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glUniform2dv( arg0, arg1, arg2 )  gldlUniform2dv( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glUniform3dv( arg0, arg1, arg2 )  gldlUniform3dv( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glUniform4dv( arg0, arg1, arg2 )  gldlUniform4dv( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glUniformMatrix2dv( arg0, arg1, arg2, arg3 )  gldlUniformMatrix2dv( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glUniformMatrix3dv( arg0, arg1, arg2, arg3 )  gldlUniformMatrix3dv( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glUniformMatrix4dv( arg0, arg1, arg2, arg3 )  gldlUniformMatrix4dv( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glUniformMatrix2x3dv( arg0, arg1, arg2, arg3 )  gldlUniformMatrix2x3dv( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glUniformMatrix2x4dv( arg0, arg1, arg2, arg3 )  gldlUniformMatrix2x4dv( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glUniformMatrix3x2dv( arg0, arg1, arg2, arg3 )  gldlUniformMatrix3x2dv( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glUniformMatrix3x4dv( arg0, arg1, arg2, arg3 )  gldlUniformMatrix3x4dv( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glUniformMatrix4x2dv( arg0, arg1, arg2, arg3 )  gldlUniformMatrix4x2dv( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glUniformMatrix4x3dv( arg0, arg1, arg2, arg3 )  gldlUniformMatrix4x3dv( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glGetUniformdv( arg0, arg1, arg2 )  gldlGetUniformdv( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glGetSubroutineUniformLocation( arg0, arg1, arg2 )  gldlGetSubroutineUniformLocation( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glGetSubroutineIndex( arg0, arg1, arg2 )  gldlGetSubroutineIndex( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glGetActiveSubroutineUniformiv( arg0, arg1, arg2, arg3, arg4 )  gldlGetActiveSubroutineUniformiv( (arg0), (arg1), (arg2), (arg3), (arg4), #arg0, #arg1, #arg2, #arg3, #arg4, __FILE__, __LINE__ )
#define glGetActiveSubroutineUniformName( arg0, arg1, arg2, arg3, arg4, arg5 )  gldlGetActiveSubroutineUniformName( (arg0), (arg1), (arg2), (arg3), (arg4), (arg5), #arg0, #arg1, #arg2, #arg3, #arg4, #arg5, __FILE__, __LINE__ )
#define glGetActiveSubroutineName( arg0, arg1, arg2, arg3, arg4, arg5 )  gldlGetActiveSubroutineName( (arg0), (arg1), (arg2), (arg3), (arg4), (arg5), #arg0, #arg1, #arg2, #arg3, #arg4, #arg5, __FILE__, __LINE__ )
#define glUniformSubroutinesuiv( arg0, arg1, arg2 )  gldlUniformSubroutinesuiv( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glGetUniformSubroutineuiv( arg0, arg1, arg2 )  gldlGetUniformSubroutineuiv( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glGetProgramStageiv( arg0, arg1, arg2, arg3 )  gldlGetProgramStageiv( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glPatchParameteri( arg0, arg1 )  gldlPatchParameteri( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glPatchParameterfv( arg0, arg1 )  gldlPatchParameterfv( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glBindTransformFeedback( arg0, arg1 )  gldlBindTransformFeedback( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glDeleteTransformFeedbacks( arg0, arg1 )  gldlDeleteTransformFeedbacks( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glGenTransformFeedbacks( arg0, arg1 )  gldlGenTransformFeedbacks( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glIsTransformFeedback( arg0 )  gldlIsTransformFeedback( (arg0), #arg0, __FILE__, __LINE__ )
#define glPauseTransformFeedback( )  gldlPauseTransformFeedback( __FILE__, __LINE__ )
#define glResumeTransformFeedback( )  gldlResumeTransformFeedback( __FILE__, __LINE__ )
#define glDrawTransformFeedback( arg0, arg1 )  gldlDrawTransformFeedback( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glDrawTransformFeedbackStream( arg0, arg1, arg2 )  gldlDrawTransformFeedbackStream( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glBeginQueryIndexed( arg0, arg1, arg2 )  gldlBeginQueryIndexed( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glEndQueryIndexed( arg0, arg1 )  gldlEndQueryIndexed( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glGetQueryIndexediv( arg0, arg1, arg2, arg3 )  gldlGetQueryIndexediv( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glReleaseShaderCompiler( )  gldlReleaseShaderCompiler( __FILE__, __LINE__ )
#define glShaderBinary( arg0, arg1, arg2, arg3, arg4 )  gldlShaderBinary( (arg0), (arg1), (arg2), (arg3), (arg4), #arg0, #arg1, #arg2, #arg3, #arg4, __FILE__, __LINE__ )
#define glGetShaderPrecisionFormat( arg0, arg1, arg2, arg3 )  gldlGetShaderPrecisionFormat( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glDepthRangef( arg0, arg1 )  gldlDepthRangef( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glClearDepthf( arg0 )  gldlClearDepthf( (arg0), #arg0, __FILE__, __LINE__ )
#define glGetProgramBinary( arg0, arg1, arg2, arg3, arg4 )  gldlGetProgramBinary( (arg0), (arg1), (arg2), (arg3), (arg4), #arg0, #arg1, #arg2, #arg3, #arg4, __FILE__, __LINE__ )
#define glProgramBinary( arg0, arg1, arg2, arg3 )  gldlProgramBinary( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glProgramParameteri( arg0, arg1, arg2 )  gldlProgramParameteri( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glUseProgramStages( arg0, arg1, arg2 )  gldlUseProgramStages( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glActiveShaderProgram( arg0, arg1 )  gldlActiveShaderProgram( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glCreateShaderProgramv( arg0, arg1, arg2 )  gldlCreateShaderProgramv( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glBindProgramPipeline( arg0 )  gldlBindProgramPipeline( (arg0), #arg0, __FILE__, __LINE__ )
#define glDeleteProgramPipelines( arg0, arg1 )  gldlDeleteProgramPipelines( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glGenProgramPipelines( arg0, arg1 )  gldlGenProgramPipelines( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glIsProgramPipeline( arg0 )  gldlIsProgramPipeline( (arg0), #arg0, __FILE__, __LINE__ )
#define glGetProgramPipelineiv( arg0, arg1, arg2 )  gldlGetProgramPipelineiv( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glProgramUniform1i( arg0, arg1, arg2 )  gldlProgramUniform1i( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glProgramUniform1iv( arg0, arg1, arg2, arg3 )  gldlProgramUniform1iv( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glProgramUniform1f( arg0, arg1, arg2 )  gldlProgramUniform1f( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glProgramUniform1fv( arg0, arg1, arg2, arg3 )  gldlProgramUniform1fv( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glProgramUniform1d( arg0, arg1, arg2 )  gldlProgramUniform1d( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glProgramUniform1dv( arg0, arg1, arg2, arg3 )  gldlProgramUniform1dv( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glProgramUniform1ui( arg0, arg1, arg2 )  gldlProgramUniform1ui( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glProgramUniform1uiv( arg0, arg1, arg2, arg3 )  gldlProgramUniform1uiv( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glProgramUniform2i( arg0, arg1, arg2, arg3 )  gldlProgramUniform2i( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glProgramUniform2iv( arg0, arg1, arg2, arg3 )  gldlProgramUniform2iv( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glProgramUniform2f( arg0, arg1, arg2, arg3 )  gldlProgramUniform2f( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glProgramUniform2fv( arg0, arg1, arg2, arg3 )  gldlProgramUniform2fv( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glProgramUniform2d( arg0, arg1, arg2, arg3 )  gldlProgramUniform2d( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glProgramUniform2dv( arg0, arg1, arg2, arg3 )  gldlProgramUniform2dv( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glProgramUniform2ui( arg0, arg1, arg2, arg3 )  gldlProgramUniform2ui( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glProgramUniform2uiv( arg0, arg1, arg2, arg3 )  gldlProgramUniform2uiv( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glProgramUniform3i( arg0, arg1, arg2, arg3, arg4 )  gldlProgramUniform3i( (arg0), (arg1), (arg2), (arg3), (arg4), #arg0, #arg1, #arg2, #arg3, #arg4, __FILE__, __LINE__ )
#define glProgramUniform3iv( arg0, arg1, arg2, arg3 )  gldlProgramUniform3iv( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glProgramUniform3f( arg0, arg1, arg2, arg3, arg4 )  gldlProgramUniform3f( (arg0), (arg1), (arg2), (arg3), (arg4), #arg0, #arg1, #arg2, #arg3, #arg4, __FILE__, __LINE__ )
#define glProgramUniform3fv( arg0, arg1, arg2, arg3 )  gldlProgramUniform3fv( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glProgramUniform3d( arg0, arg1, arg2, arg3, arg4 )  gldlProgramUniform3d( (arg0), (arg1), (arg2), (arg3), (arg4), #arg0, #arg1, #arg2, #arg3, #arg4, __FILE__, __LINE__ )
#define glProgramUniform3dv( arg0, arg1, arg2, arg3 )  gldlProgramUniform3dv( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glProgramUniform3ui( arg0, arg1, arg2, arg3, arg4 )  gldlProgramUniform3ui( (arg0), (arg1), (arg2), (arg3), (arg4), #arg0, #arg1, #arg2, #arg3, #arg4, __FILE__, __LINE__ )
#define glProgramUniform3uiv( arg0, arg1, arg2, arg3 )  gldlProgramUniform3uiv( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glProgramUniform4i( arg0, arg1, arg2, arg3, arg4, arg5 )  gldlProgramUniform4i( (arg0), (arg1), (arg2), (arg3), (arg4), (arg5), #arg0, #arg1, #arg2, #arg3, #arg4, #arg5, __FILE__, __LINE__ )
#define glProgramUniform4iv( arg0, arg1, arg2, arg3 )  gldlProgramUniform4iv( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glProgramUniform4f( arg0, arg1, arg2, arg3, arg4, arg5 )  gldlProgramUniform4f( (arg0), (arg1), (arg2), (arg3), (arg4), (arg5), #arg0, #arg1, #arg2, #arg3, #arg4, #arg5, __FILE__, __LINE__ )
#define glProgramUniform4fv( arg0, arg1, arg2, arg3 )  gldlProgramUniform4fv( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glProgramUniform4d( arg0, arg1, arg2, arg3, arg4, arg5 )  gldlProgramUniform4d( (arg0), (arg1), (arg2), (arg3), (arg4), (arg5), #arg0, #arg1, #arg2, #arg3, #arg4, #arg5, __FILE__, __LINE__ )
#define glProgramUniform4dv( arg0, arg1, arg2, arg3 )  gldlProgramUniform4dv( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glProgramUniform4ui( arg0, arg1, arg2, arg3, arg4, arg5 )  gldlProgramUniform4ui( (arg0), (arg1), (arg2), (arg3), (arg4), (arg5), #arg0, #arg1, #arg2, #arg3, #arg4, #arg5, __FILE__, __LINE__ )
#define glProgramUniform4uiv( arg0, arg1, arg2, arg3 )  gldlProgramUniform4uiv( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glProgramUniformMatrix2fv( arg0, arg1, arg2, arg3, arg4 )  gldlProgramUniformMatrix2fv( (arg0), (arg1), (arg2), (arg3), (arg4), #arg0, #arg1, #arg2, #arg3, #arg4, __FILE__, __LINE__ )
#define glProgramUniformMatrix3fv( arg0, arg1, arg2, arg3, arg4 )  gldlProgramUniformMatrix3fv( (arg0), (arg1), (arg2), (arg3), (arg4), #arg0, #arg1, #arg2, #arg3, #arg4, __FILE__, __LINE__ )
#define glProgramUniformMatrix4fv( arg0, arg1, arg2, arg3, arg4 )  gldlProgramUniformMatrix4fv( (arg0), (arg1), (arg2), (arg3), (arg4), #arg0, #arg1, #arg2, #arg3, #arg4, __FILE__, __LINE__ )
#define glProgramUniformMatrix2dv( arg0, arg1, arg2, arg3, arg4 )  gldlProgramUniformMatrix2dv( (arg0), (arg1), (arg2), (arg3), (arg4), #arg0, #arg1, #arg2, #arg3, #arg4, __FILE__, __LINE__ )
#define glProgramUniformMatrix3dv( arg0, arg1, arg2, arg3, arg4 )  gldlProgramUniformMatrix3dv( (arg0), (arg1), (arg2), (arg3), (arg4), #arg0, #arg1, #arg2, #arg3, #arg4, __FILE__, __LINE__ )
#define glProgramUniformMatrix4dv( arg0, arg1, arg2, arg3, arg4 )  gldlProgramUniformMatrix4dv( (arg0), (arg1), (arg2), (arg3), (arg4), #arg0, #arg1, #arg2, #arg3, #arg4, __FILE__, __LINE__ )
#define glProgramUniformMatrix2x3fv( arg0, arg1, arg2, arg3, arg4 )  gldlProgramUniformMatrix2x3fv( (arg0), (arg1), (arg2), (arg3), (arg4), #arg0, #arg1, #arg2, #arg3, #arg4, __FILE__, __LINE__ )
#define glProgramUniformMatrix3x2fv( arg0, arg1, arg2, arg3, arg4 )  gldlProgramUniformMatrix3x2fv( (arg0), (arg1), (arg2), (arg3), (arg4), #arg0, #arg1, #arg2, #arg3, #arg4, __FILE__, __LINE__ )
#define glProgramUniformMatrix2x4fv( arg0, arg1, arg2, arg3, arg4 )  gldlProgramUniformMatrix2x4fv( (arg0), (arg1), (arg2), (arg3), (arg4), #arg0, #arg1, #arg2, #arg3, #arg4, __FILE__, __LINE__ )
#define glProgramUniformMatrix4x2fv( arg0, arg1, arg2, arg3, arg4 )  gldlProgramUniformMatrix4x2fv( (arg0), (arg1), (arg2), (arg3), (arg4), #arg0, #arg1, #arg2, #arg3, #arg4, __FILE__, __LINE__ )
#define glProgramUniformMatrix3x4fv( arg0, arg1, arg2, arg3, arg4 )  gldlProgramUniformMatrix3x4fv( (arg0), (arg1), (arg2), (arg3), (arg4), #arg0, #arg1, #arg2, #arg3, #arg4, __FILE__, __LINE__ )
#define glProgramUniformMatrix4x3fv( arg0, arg1, arg2, arg3, arg4 )  gldlProgramUniformMatrix4x3fv( (arg0), (arg1), (arg2), (arg3), (arg4), #arg0, #arg1, #arg2, #arg3, #arg4, __FILE__, __LINE__ )
#define glProgramUniformMatrix2x3dv( arg0, arg1, arg2, arg3, arg4 )  gldlProgramUniformMatrix2x3dv( (arg0), (arg1), (arg2), (arg3), (arg4), #arg0, #arg1, #arg2, #arg3, #arg4, __FILE__, __LINE__ )
#define glProgramUniformMatrix3x2dv( arg0, arg1, arg2, arg3, arg4 )  gldlProgramUniformMatrix3x2dv( (arg0), (arg1), (arg2), (arg3), (arg4), #arg0, #arg1, #arg2, #arg3, #arg4, __FILE__, __LINE__ )
#define glProgramUniformMatrix2x4dv( arg0, arg1, arg2, arg3, arg4 )  gldlProgramUniformMatrix2x4dv( (arg0), (arg1), (arg2), (arg3), (arg4), #arg0, #arg1, #arg2, #arg3, #arg4, __FILE__, __LINE__ )
#define glProgramUniformMatrix4x2dv( arg0, arg1, arg2, arg3, arg4 )  gldlProgramUniformMatrix4x2dv( (arg0), (arg1), (arg2), (arg3), (arg4), #arg0, #arg1, #arg2, #arg3, #arg4, __FILE__, __LINE__ )
#define glProgramUniformMatrix3x4dv( arg0, arg1, arg2, arg3, arg4 )  gldlProgramUniformMatrix3x4dv( (arg0), (arg1), (arg2), (arg3), (arg4), #arg0, #arg1, #arg2, #arg3, #arg4, __FILE__, __LINE__ )
#define glProgramUniformMatrix4x3dv( arg0, arg1, arg2, arg3, arg4 )  gldlProgramUniformMatrix4x3dv( (arg0), (arg1), (arg2), (arg3), (arg4), #arg0, #arg1, #arg2, #arg3, #arg4, __FILE__, __LINE__ )
#define glValidateProgramPipeline( arg0 )  gldlValidateProgramPipeline( (arg0), #arg0, __FILE__, __LINE__ )
#define glGetProgramPipelineInfoLog( arg0, arg1, arg2, arg3 )  gldlGetProgramPipelineInfoLog( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glVertexAttribL1d( arg0, arg1 )  gldlVertexAttribL1d( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glVertexAttribL2d( arg0, arg1, arg2 )  gldlVertexAttribL2d( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glVertexAttribL3d( arg0, arg1, arg2, arg3 )  gldlVertexAttribL3d( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glVertexAttribL4d( arg0, arg1, arg2, arg3, arg4 )  gldlVertexAttribL4d( (arg0), (arg1), (arg2), (arg3), (arg4), #arg0, #arg1, #arg2, #arg3, #arg4, __FILE__, __LINE__ )
#define glVertexAttribL1dv( arg0, arg1 )  gldlVertexAttribL1dv( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glVertexAttribL2dv( arg0, arg1 )  gldlVertexAttribL2dv( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glVertexAttribL3dv( arg0, arg1 )  gldlVertexAttribL3dv( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glVertexAttribL4dv( arg0, arg1 )  gldlVertexAttribL4dv( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glVertexAttribLPointer( arg0, arg1, arg2, arg3, arg4 )  gldlVertexAttribLPointer( (arg0), (arg1), (arg2), (arg3), (arg4), #arg0, #arg1, #arg2, #arg3, #arg4, __FILE__, __LINE__ )
#define glGetVertexAttribLdv( arg0, arg1, arg2 )  gldlGetVertexAttribLdv( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glViewportArrayv( arg0, arg1, arg2 )  gldlViewportArrayv( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glViewportIndexedf( arg0, arg1, arg2, arg3, arg4 )  gldlViewportIndexedf( (arg0), (arg1), (arg2), (arg3), (arg4), #arg0, #arg1, #arg2, #arg3, #arg4, __FILE__, __LINE__ )
#define glViewportIndexedfv( arg0, arg1 )  gldlViewportIndexedfv( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glScissorArrayv( arg0, arg1, arg2 )  gldlScissorArrayv( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glScissorIndexed( arg0, arg1, arg2, arg3, arg4 )  gldlScissorIndexed( (arg0), (arg1), (arg2), (arg3), (arg4), #arg0, #arg1, #arg2, #arg3, #arg4, __FILE__, __LINE__ )
#define glScissorIndexedv( arg0, arg1 )  gldlScissorIndexedv( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glDepthRangeArrayv( arg0, arg1, arg2 )  gldlDepthRangeArrayv( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glDepthRangeIndexed( arg0, arg1, arg2 )  gldlDepthRangeIndexed( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glGetFloati_v( arg0, arg1, arg2 )  gldlGetFloati_v( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glGetDoublei_v( arg0, arg1, arg2 )  gldlGetDoublei_v( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glCreateSyncFromCLeventARB( arg0, arg1, arg2 )  gldlCreateSyncFromCLeventARB( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glDebugMessageControlARB( arg0, arg1, arg2, arg3, arg4, arg5 )  gldlDebugMessageControlARB( (arg0), (arg1), (arg2), (arg3), (arg4), (arg5), #arg0, #arg1, #arg2, #arg3, #arg4, #arg5, __FILE__, __LINE__ )
#define glDebugMessageInsertARB( arg0, arg1, arg2, arg3, arg4, arg5 )  gldlDebugMessageInsertARB( (arg0), (arg1), (arg2), (arg3), (arg4), (arg5), #arg0, #arg1, #arg2, #arg3, #arg4, #arg5, __FILE__, __LINE__ )
#define glDebugMessageCallbackARB( arg0, arg1 )  gldlDebugMessageCallbackARB( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glGetDebugMessageLogARB( arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7 )  gldlGetDebugMessageLogARB( (arg0), (arg1), (arg2), (arg3), (arg4), (arg5), (arg6), (arg7), #arg0, #arg1, #arg2, #arg3, #arg4, #arg5, #arg6, #arg7, __FILE__, __LINE__ )
#define glGetGraphicsResetStatusARB( )  gldlGetGraphicsResetStatusARB( __FILE__, __LINE__ )
#define glGetnMapdvARB( arg0, arg1, arg2, arg3 )  gldlGetnMapdvARB( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glGetnMapfvARB( arg0, arg1, arg2, arg3 )  gldlGetnMapfvARB( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glGetnMapivARB( arg0, arg1, arg2, arg3 )  gldlGetnMapivARB( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glGetnPixelMapfvARB( arg0, arg1, arg2 )  gldlGetnPixelMapfvARB( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glGetnPixelMapuivARB( arg0, arg1, arg2 )  gldlGetnPixelMapuivARB( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glGetnPixelMapusvARB( arg0, arg1, arg2 )  gldlGetnPixelMapusvARB( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glGetnPolygonStippleARB( arg0, arg1 )  gldlGetnPolygonStippleARB( (arg0), (arg1), #arg0, #arg1, __FILE__, __LINE__ )
#define glGetnColorTableARB( arg0, arg1, arg2, arg3, arg4 )  gldlGetnColorTableARB( (arg0), (arg1), (arg2), (arg3), (arg4), #arg0, #arg1, #arg2, #arg3, #arg4, __FILE__, __LINE__ )
#define glGetnConvolutionFilterARB( arg0, arg1, arg2, arg3, arg4 )  gldlGetnConvolutionFilterARB( (arg0), (arg1), (arg2), (arg3), (arg4), #arg0, #arg1, #arg2, #arg3, #arg4, __FILE__, __LINE__ )
#define glGetnSeparableFilterARB( arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7 )  gldlGetnSeparableFilterARB( (arg0), (arg1), (arg2), (arg3), (arg4), (arg5), (arg6), (arg7), #arg0, #arg1, #arg2, #arg3, #arg4, #arg5, #arg6, #arg7, __FILE__, __LINE__ )
#define glGetnHistogramARB( arg0, arg1, arg2, arg3, arg4, arg5 )  gldlGetnHistogramARB( (arg0), (arg1), (arg2), (arg3), (arg4), (arg5), #arg0, #arg1, #arg2, #arg3, #arg4, #arg5, __FILE__, __LINE__ )
#define glGetnMinmaxARB( arg0, arg1, arg2, arg3, arg4, arg5 )  gldlGetnMinmaxARB( (arg0), (arg1), (arg2), (arg3), (arg4), (arg5), #arg0, #arg1, #arg2, #arg3, #arg4, #arg5, __FILE__, __LINE__ )
#define glGetnTexImageARB( arg0, arg1, arg2, arg3, arg4, arg5 )  gldlGetnTexImageARB( (arg0), (arg1), (arg2), (arg3), (arg4), (arg5), #arg0, #arg1, #arg2, #arg3, #arg4, #arg5, __FILE__, __LINE__ )
#define glReadnPixelsARB( arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7 )  gldlReadnPixelsARB( (arg0), (arg1), (arg2), (arg3), (arg4), (arg5), (arg6), (arg7), #arg0, #arg1, #arg2, #arg3, #arg4, #arg5, #arg6, #arg7, __FILE__, __LINE__ )
#define glGetnCompressedTexImageARB( arg0, arg1, arg2, arg3 )  gldlGetnCompressedTexImageARB( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glGetnUniformfvARB( arg0, arg1, arg2, arg3 )  gldlGetnUniformfvARB( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glGetnUniformivARB( arg0, arg1, arg2, arg3 )  gldlGetnUniformivARB( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glGetnUniformuivARB( arg0, arg1, arg2, arg3 )  gldlGetnUniformuivARB( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glGetnUniformdvARB( arg0, arg1, arg2, arg3 )  gldlGetnUniformdvARB( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glDrawArraysInstancedBaseInstance( arg0, arg1, arg2, arg3, arg4 )  gldlDrawArraysInstancedBaseInstance( (arg0), (arg1), (arg2), (arg3), (arg4), #arg0, #arg1, #arg2, #arg3, #arg4, __FILE__, __LINE__ )
#define glDrawElementsInstancedBaseInstance( arg0, arg1, arg2, arg3, arg4, arg5 )  gldlDrawElementsInstancedBaseInstance( (arg0), (arg1), (arg2), (arg3), (arg4), (arg5), #arg0, #arg1, #arg2, #arg3, #arg4, #arg5, __FILE__, __LINE__ )
#define glDrawElementsInstancedBaseVertexBaseInstance( arg0, arg1, arg2, arg3, arg4, arg5, arg6 )  gldlDrawElementsInstancedBaseVertexBaseInstance( (arg0), (arg1), (arg2), (arg3), (arg4), (arg5), (arg6), #arg0, #arg1, #arg2, #arg3, #arg4, #arg5, #arg6, __FILE__, __LINE__ )
#define glDrawTransformFeedbackInstanced( arg0, arg1, arg2 )  gldlDrawTransformFeedbackInstanced( (arg0), (arg1), (arg2), #arg0, #arg1, #arg2, __FILE__, __LINE__ )
#define glDrawTransformFeedbackStreamInstanced( arg0, arg1, arg2, arg3 )  gldlDrawTransformFeedbackStreamInstanced( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glGetInternalformativ( arg0, arg1, arg2, arg3, arg4 )  gldlGetInternalformativ( (arg0), (arg1), (arg2), (arg3), (arg4), #arg0, #arg1, #arg2, #arg3, #arg4, __FILE__, __LINE__ )
#define glGetActiveAtomicCounterBufferiv( arg0, arg1, arg2, arg3 )  gldlGetActiveAtomicCounterBufferiv( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glBindImageTexture( arg0, arg1, arg2, arg3, arg4, arg5, arg6 )  gldlBindImageTexture( (arg0), (arg1), (arg2), (arg3), (arg4), (arg5), (arg6), #arg0, #arg1, #arg2, #arg3, #arg4, #arg5, #arg6, __FILE__, __LINE__ )
#define glMemoryBarrier( arg0 )  gldlMemoryBarrier( (arg0), #arg0, __FILE__, __LINE__ )
#define glTexStorage1D( arg0, arg1, arg2, arg3 )  gldlTexStorage1D( (arg0), (arg1), (arg2), (arg3), #arg0, #arg1, #arg2, #arg3, __FILE__, __LINE__ )
#define glTexStorage2D( arg0, arg1, arg2, arg3, arg4 )  gldlTexStorage2D( (arg0), (arg1), (arg2), (arg3), (arg4), #arg0, #arg1, #arg2, #arg3, #arg4, __FILE__, __LINE__ )
#define glTexStorage3D( arg0, arg1, arg2, arg3, arg4, arg5 )  gldlTexStorage3D( (arg0), (arg1), (arg2), (arg3), (arg4), (arg5), #arg0, #arg1, #arg2, #arg3, #arg4, #arg5, __FILE__, __LINE__ )
#define glTextureStorage1DEXT( arg0, arg1, arg2, arg3, arg4 )  gldlTextureStorage1DEXT( (arg0), (arg1), (arg2), (arg3), (arg4), #arg0, #arg1, #arg2, #arg3, #arg4, __FILE__, __LINE__ )
#define glTextureStorage2DEXT( arg0, arg1, arg2, arg3, arg4, arg5 )  gldlTextureStorage2DEXT( (arg0), (arg1), (arg2), (arg3), (arg4), (arg5), #arg0, #arg1, #arg2, #arg3, #arg4, #arg5, __FILE__, __LINE__ )
#define glTextureStorage3DEXT( arg0, arg1, arg2, arg3, arg4, arg5, arg6 )  gldlTextureStorage3DEXT( (arg0), (arg1), (arg2), (arg3), (arg4), (arg5), (arg6), #arg0, #arg1, #arg2, #arg3, #arg4, #arg5, #arg6, __FILE__, __LINE__ )

#ifdef __cplusplus
}
#endif

#endif //__GLDL_H
