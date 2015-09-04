#ifndef __SHADERWINDOWS_H__
#define __SHADERWINDOWS_H__

#if defined(WIN32)
static PFNGLACTIVETEXTUREPROC glActiveTexture;

static PFNGLCREATESHADERPROC glCreateShader;
static PFNGLCOMPILESHADERPROC glCompileShader;
static PFNGLSHADERSOURCEPROC glShaderSource;
static PFNGLATTACHSHADERPROC glAttachShader;
static PFNGLDELETESHADERPROC glDeleteShader;
static PFNGLCREATEPROGRAMPROC glCreateProgram;
static PFNGLLINKPROGRAMPROC glLinkProgram;
static PFNGLUSEPROGRAMPROC glUseProgram;
static PFNGLDELETEPROGRAMPROC glDeleteProgram;

static PFNGLGETPROGRAMIVPROC glGetProgramiv;
static PFNGLGETSHADERIVPROC glGetShaderiv;
static PFNGLGETPROGRAMINFOLOGPROC glGetProgramInfoLog;
static PFNGLGETSHADERINFOLOGPROC glGetShaderInfoLog;

static PFNGLENABLEVERTEXATTRIBARRAYPROC glEnableVertexAttribArray;
static PFNGLUNIFORM1IPROC glUniform1i;
static PFNGLUNIFORM1FPROC glUniform1f;
static PFNGLUNIFORM2FPROC glUniform2f;
static PFNGLUNIFORM4FPROC glUniform4f;
static PFNGLGETUNIFORMLOCATIONPROC glGetUniformLocation;
static PFNGLGETATTRIBLOCATIONPROC glGetAttribLocation;
static PFNGLVERTEXATTRIBPOINTERPROC glVertexAttribPointer;
static PFNGLUNIFORMMATRIX3FVPROC glUniformMatrix3fv;

#endif


#endif // __SHADERWINDOWS_H__ //