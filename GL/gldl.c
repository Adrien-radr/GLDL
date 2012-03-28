
#include "gldl.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//////////////////////////////////////////
// Jump to line 1145 for GLDL API functions
//////////////////////////////////////////


// GL FUNCTION POINTERS (GL implementation)
PFNGLCULLFACEPROC gldlCullFace_impl;
PFNGLFRONTFACEPROC gldlFrontFace_impl;
PFNGLHINTPROC gldlHint_impl;
PFNGLLINEWIDTHPROC gldlLineWidth_impl;
PFNGLPOINTSIZEPROC gldlPointSize_impl;
PFNGLPOLYGONMODEPROC gldlPolygonMode_impl;
PFNGLSCISSORPROC gldlScissor_impl;
PFNGLTEXPARAMETERFPROC gldlTexParameterf_impl;
PFNGLTEXPARAMETERFVPROC gldlTexParameterfv_impl;
PFNGLTEXPARAMETERIPROC gldlTexParameteri_impl;
PFNGLTEXPARAMETERIVPROC gldlTexParameteriv_impl;
PFNGLTEXIMAGE1DPROC gldlTexImage1D_impl;
PFNGLTEXIMAGE2DPROC gldlTexImage2D_impl;
PFNGLDRAWBUFFERPROC gldlDrawBuffer_impl;
PFNGLCLEARPROC gldlClear_impl;
PFNGLCLEARCOLORPROC gldlClearColor_impl;
PFNGLCLEARSTENCILPROC gldlClearStencil_impl;
PFNGLCLEARDEPTHPROC gldlClearDepth_impl;
PFNGLSTENCILMASKPROC gldlStencilMask_impl;
PFNGLCOLORMASKPROC gldlColorMask_impl;
PFNGLDEPTHMASKPROC gldlDepthMask_impl;
PFNGLDISABLEPROC gldlDisable_impl;
PFNGLENABLEPROC gldlEnable_impl;
PFNGLFINISHPROC gldlFinish_impl;
PFNGLFLUSHPROC gldlFlush_impl;
PFNGLBLENDFUNCPROC gldlBlendFunc_impl;
PFNGLLOGICOPPROC gldlLogicOp_impl;
PFNGLSTENCILFUNCPROC gldlStencilFunc_impl;
PFNGLSTENCILOPPROC gldlStencilOp_impl;
PFNGLDEPTHFUNCPROC gldlDepthFunc_impl;
PFNGLPIXELSTOREFPROC gldlPixelStoref_impl;
PFNGLPIXELSTOREIPROC gldlPixelStorei_impl;
PFNGLREADBUFFERPROC gldlReadBuffer_impl;
PFNGLREADPIXELSPROC gldlReadPixels_impl;
PFNGLGETBOOLEANVPROC gldlGetBooleanv_impl;
PFNGLGETDOUBLEVPROC gldlGetDoublev_impl;
PFNGLGETERRORPROC gldlGetError_impl;
PFNGLGETFLOATVPROC gldlGetFloatv_impl;
PFNGLGETINTEGERVPROC gldlGetIntegerv_impl;
PFNGLGETSTRINGPROC gldlGetString_impl;
PFNGLGETTEXIMAGEPROC gldlGetTexImage_impl;
PFNGLGETTEXPARAMETERFVPROC gldlGetTexParameterfv_impl;
PFNGLGETTEXPARAMETERIVPROC gldlGetTexParameteriv_impl;
PFNGLGETTEXLEVELPARAMETERFVPROC gldlGetTexLevelParameterfv_impl;
PFNGLGETTEXLEVELPARAMETERIVPROC gldlGetTexLevelParameteriv_impl;
PFNGLISENABLEDPROC gldlIsEnabled_impl;
PFNGLDEPTHRANGEPROC gldlDepthRange_impl;
PFNGLVIEWPORTPROC gldlViewport_impl;
PFNGLDRAWARRAYSPROC gldlDrawArrays_impl;
PFNGLDRAWELEMENTSPROC gldlDrawElements_impl;
PFNGLGETPOINTERVPROC gldlGetPointerv_impl;
PFNGLPOLYGONOFFSETPROC gldlPolygonOffset_impl;
PFNGLCOPYTEXIMAGE1DPROC gldlCopyTexImage1D_impl;
PFNGLCOPYTEXIMAGE2DPROC gldlCopyTexImage2D_impl;
PFNGLCOPYTEXSUBIMAGE1DPROC gldlCopyTexSubImage1D_impl;
PFNGLCOPYTEXSUBIMAGE2DPROC gldlCopyTexSubImage2D_impl;
PFNGLTEXSUBIMAGE1DPROC gldlTexSubImage1D_impl;
PFNGLTEXSUBIMAGE2DPROC gldlTexSubImage2D_impl;
PFNGLBINDTEXTUREPROC gldlBindTexture_impl;
PFNGLDELETETEXTURESPROC gldlDeleteTextures_impl;
PFNGLGENTEXTURESPROC gldlGenTextures_impl;
PFNGLISTEXTUREPROC gldlIsTexture_impl;
PFNGLBLENDCOLORPROC gldlBlendColor_impl;
PFNGLBLENDEQUATIONPROC gldlBlendEquation_impl;
PFNGLDRAWRANGEELEMENTSPROC gldlDrawRangeElements_impl;
PFNGLTEXIMAGE3DPROC gldlTexImage3D_impl;
PFNGLTEXSUBIMAGE3DPROC gldlTexSubImage3D_impl;
PFNGLCOPYTEXSUBIMAGE3DPROC gldlCopyTexSubImage3D_impl;
PFNGLACTIVETEXTUREPROC gldlActiveTexture_impl;
PFNGLSAMPLECOVERAGEPROC gldlSampleCoverage_impl;
PFNGLCOMPRESSEDTEXIMAGE3DPROC gldlCompressedTexImage3D_impl;
PFNGLCOMPRESSEDTEXIMAGE2DPROC gldlCompressedTexImage2D_impl;
PFNGLCOMPRESSEDTEXIMAGE1DPROC gldlCompressedTexImage1D_impl;
PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC gldlCompressedTexSubImage3D_impl;
PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC gldlCompressedTexSubImage2D_impl;
PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC gldlCompressedTexSubImage1D_impl;
PFNGLGETCOMPRESSEDTEXIMAGEPROC gldlGetCompressedTexImage_impl;
PFNGLBLENDFUNCSEPARATEPROC gldlBlendFuncSeparate_impl;
PFNGLMULTIDRAWARRAYSPROC gldlMultiDrawArrays_impl;
PFNGLMULTIDRAWELEMENTSPROC gldlMultiDrawElements_impl;
PFNGLPOINTPARAMETERFPROC gldlPointParameterf_impl;
PFNGLPOINTPARAMETERFVPROC gldlPointParameterfv_impl;
PFNGLPOINTPARAMETERIPROC gldlPointParameteri_impl;
PFNGLPOINTPARAMETERIVPROC gldlPointParameteriv_impl;
PFNGLGENQUERIESPROC gldlGenQueries_impl;
PFNGLDELETEQUERIESPROC gldlDeleteQueries_impl;
PFNGLISQUERYPROC gldlIsQuery_impl;
PFNGLBEGINQUERYPROC gldlBeginQuery_impl;
PFNGLENDQUERYPROC gldlEndQuery_impl;
PFNGLGETQUERYIVPROC gldlGetQueryiv_impl;
PFNGLGETQUERYOBJECTIVPROC gldlGetQueryObjectiv_impl;
PFNGLGETQUERYOBJECTUIVPROC gldlGetQueryObjectuiv_impl;
PFNGLBINDBUFFERPROC gldlBindBuffer_impl;
PFNGLDELETEBUFFERSPROC gldlDeleteBuffers_impl;
PFNGLGENBUFFERSPROC gldlGenBuffers_impl;
PFNGLISBUFFERPROC gldlIsBuffer_impl;
PFNGLBUFFERDATAPROC gldlBufferData_impl;
PFNGLBUFFERSUBDATAPROC gldlBufferSubData_impl;
PFNGLGETBUFFERSUBDATAPROC gldlGetBufferSubData_impl;
PFNGLMAPBUFFERPROC gldlMapBuffer_impl;
PFNGLUNMAPBUFFERPROC gldlUnmapBuffer_impl;
PFNGLGETBUFFERPARAMETERIVPROC gldlGetBufferParameteriv_impl;
PFNGLGETBUFFERPOINTERVPROC gldlGetBufferPointerv_impl;
PFNGLBLENDEQUATIONSEPARATEPROC gldlBlendEquationSeparate_impl;
PFNGLDRAWBUFFERSPROC gldlDrawBuffers_impl;
PFNGLSTENCILOPSEPARATEPROC gldlStencilOpSeparate_impl;
PFNGLSTENCILFUNCSEPARATEPROC gldlStencilFuncSeparate_impl;
PFNGLSTENCILMASKSEPARATEPROC gldlStencilMaskSeparate_impl;
PFNGLATTACHSHADERPROC gldlAttachShader_impl;
PFNGLBINDATTRIBLOCATIONPROC gldlBindAttribLocation_impl;
PFNGLCOMPILESHADERPROC gldlCompileShader_impl;
PFNGLCREATEPROGRAMPROC gldlCreateProgram_impl;
PFNGLCREATESHADERPROC gldlCreateShader_impl;
PFNGLDELETEPROGRAMPROC gldlDeleteProgram_impl;
PFNGLDELETESHADERPROC gldlDeleteShader_impl;
PFNGLDETACHSHADERPROC gldlDetachShader_impl;
PFNGLDISABLEVERTEXATTRIBARRAYPROC gldlDisableVertexAttribArray_impl;
PFNGLENABLEVERTEXATTRIBARRAYPROC gldlEnableVertexAttribArray_impl;
PFNGLGETACTIVEATTRIBPROC gldlGetActiveAttrib_impl;
PFNGLGETACTIVEUNIFORMPROC gldlGetActiveUniform_impl;
PFNGLGETATTACHEDSHADERSPROC gldlGetAttachedShaders_impl;
PFNGLGETATTRIBLOCATIONPROC gldlGetAttribLocation_impl;
PFNGLGETPROGRAMIVPROC gldlGetProgramiv_impl;
PFNGLGETPROGRAMINFOLOGPROC gldlGetProgramInfoLog_impl;
PFNGLGETSHADERIVPROC gldlGetShaderiv_impl;
PFNGLGETSHADERINFOLOGPROC gldlGetShaderInfoLog_impl;
PFNGLGETSHADERSOURCEPROC gldlGetShaderSource_impl;
PFNGLGETUNIFORMLOCATIONPROC gldlGetUniformLocation_impl;
PFNGLGETUNIFORMFVPROC gldlGetUniformfv_impl;
PFNGLGETUNIFORMIVPROC gldlGetUniformiv_impl;
PFNGLGETVERTEXATTRIBDVPROC gldlGetVertexAttribdv_impl;
PFNGLGETVERTEXATTRIBFVPROC gldlGetVertexAttribfv_impl;
PFNGLGETVERTEXATTRIBIVPROC gldlGetVertexAttribiv_impl;
PFNGLGETVERTEXATTRIBPOINTERVPROC gldlGetVertexAttribPointerv_impl;
PFNGLISPROGRAMPROC gldlIsProgram_impl;
PFNGLISSHADERPROC gldlIsShader_impl;
PFNGLLINKPROGRAMPROC gldlLinkProgram_impl;
PFNGLSHADERSOURCEPROC gldlShaderSource_impl;
PFNGLUSEPROGRAMPROC gldlUseProgram_impl;
PFNGLUNIFORM1FPROC gldlUniform1f_impl;
PFNGLUNIFORM2FPROC gldlUniform2f_impl;
PFNGLUNIFORM3FPROC gldlUniform3f_impl;
PFNGLUNIFORM4FPROC gldlUniform4f_impl;
PFNGLUNIFORM1IPROC gldlUniform1i_impl;
PFNGLUNIFORM2IPROC gldlUniform2i_impl;
PFNGLUNIFORM3IPROC gldlUniform3i_impl;
PFNGLUNIFORM4IPROC gldlUniform4i_impl;
PFNGLUNIFORM1FVPROC gldlUniform1fv_impl;
PFNGLUNIFORM2FVPROC gldlUniform2fv_impl;
PFNGLUNIFORM3FVPROC gldlUniform3fv_impl;
PFNGLUNIFORM4FVPROC gldlUniform4fv_impl;
PFNGLUNIFORM1IVPROC gldlUniform1iv_impl;
PFNGLUNIFORM2IVPROC gldlUniform2iv_impl;
PFNGLUNIFORM3IVPROC gldlUniform3iv_impl;
PFNGLUNIFORM4IVPROC gldlUniform4iv_impl;
PFNGLUNIFORMMATRIX2FVPROC gldlUniformMatrix2fv_impl;
PFNGLUNIFORMMATRIX3FVPROC gldlUniformMatrix3fv_impl;
PFNGLUNIFORMMATRIX4FVPROC gldlUniformMatrix4fv_impl;
PFNGLVALIDATEPROGRAMPROC gldlValidateProgram_impl;
PFNGLVERTEXATTRIB1DPROC gldlVertexAttrib1d_impl;
PFNGLVERTEXATTRIB1DVPROC gldlVertexAttrib1dv_impl;
PFNGLVERTEXATTRIB1FPROC gldlVertexAttrib1f_impl;
PFNGLVERTEXATTRIB1FVPROC gldlVertexAttrib1fv_impl;
PFNGLVERTEXATTRIB1SPROC gldlVertexAttrib1s_impl;
PFNGLVERTEXATTRIB1SVPROC gldlVertexAttrib1sv_impl;
PFNGLVERTEXATTRIB2DPROC gldlVertexAttrib2d_impl;
PFNGLVERTEXATTRIB2DVPROC gldlVertexAttrib2dv_impl;
PFNGLVERTEXATTRIB2FPROC gldlVertexAttrib2f_impl;
PFNGLVERTEXATTRIB2FVPROC gldlVertexAttrib2fv_impl;
PFNGLVERTEXATTRIB2SPROC gldlVertexAttrib2s_impl;
PFNGLVERTEXATTRIB2SVPROC gldlVertexAttrib2sv_impl;
PFNGLVERTEXATTRIB3DPROC gldlVertexAttrib3d_impl;
PFNGLVERTEXATTRIB3DVPROC gldlVertexAttrib3dv_impl;
PFNGLVERTEXATTRIB3FPROC gldlVertexAttrib3f_impl;
PFNGLVERTEXATTRIB3FVPROC gldlVertexAttrib3fv_impl;
PFNGLVERTEXATTRIB3SPROC gldlVertexAttrib3s_impl;
PFNGLVERTEXATTRIB3SVPROC gldlVertexAttrib3sv_impl;
PFNGLVERTEXATTRIB4NBVPROC gldlVertexAttrib4Nbv_impl;
PFNGLVERTEXATTRIB4NIVPROC gldlVertexAttrib4Niv_impl;
PFNGLVERTEXATTRIB4NSVPROC gldlVertexAttrib4Nsv_impl;
PFNGLVERTEXATTRIB4NUBPROC gldlVertexAttrib4Nub_impl;
PFNGLVERTEXATTRIB4NUBVPROC gldlVertexAttrib4Nubv_impl;
PFNGLVERTEXATTRIB4NUIVPROC gldlVertexAttrib4Nuiv_impl;
PFNGLVERTEXATTRIB4NUSVPROC gldlVertexAttrib4Nusv_impl;
PFNGLVERTEXATTRIB4BVPROC gldlVertexAttrib4bv_impl;
PFNGLVERTEXATTRIB4DPROC gldlVertexAttrib4d_impl;
PFNGLVERTEXATTRIB4DVPROC gldlVertexAttrib4dv_impl;
PFNGLVERTEXATTRIB4FPROC gldlVertexAttrib4f_impl;
PFNGLVERTEXATTRIB4FVPROC gldlVertexAttrib4fv_impl;
PFNGLVERTEXATTRIB4IVPROC gldlVertexAttrib4iv_impl;
PFNGLVERTEXATTRIB4SPROC gldlVertexAttrib4s_impl;
PFNGLVERTEXATTRIB4SVPROC gldlVertexAttrib4sv_impl;
PFNGLVERTEXATTRIB4UBVPROC gldlVertexAttrib4ubv_impl;
PFNGLVERTEXATTRIB4UIVPROC gldlVertexAttrib4uiv_impl;
PFNGLVERTEXATTRIB4USVPROC gldlVertexAttrib4usv_impl;
PFNGLVERTEXATTRIBPOINTERPROC gldlVertexAttribPointer_impl;
PFNGLUNIFORMMATRIX2X3FVPROC gldlUniformMatrix2x3fv_impl;
PFNGLUNIFORMMATRIX3X2FVPROC gldlUniformMatrix3x2fv_impl;
PFNGLUNIFORMMATRIX2X4FVPROC gldlUniformMatrix2x4fv_impl;
PFNGLUNIFORMMATRIX4X2FVPROC gldlUniformMatrix4x2fv_impl;
PFNGLUNIFORMMATRIX3X4FVPROC gldlUniformMatrix3x4fv_impl;
PFNGLUNIFORMMATRIX4X3FVPROC gldlUniformMatrix4x3fv_impl;
PFNGLCOLORMASKIPROC gldlColorMaski_impl;
PFNGLGETBOOLEANI_VPROC gldlGetBooleani_v_impl;
PFNGLGETINTEGERI_VPROC gldlGetIntegeri_v_impl;
PFNGLENABLEIPROC gldlEnablei_impl;
PFNGLDISABLEIPROC gldlDisablei_impl;
PFNGLISENABLEDIPROC gldlIsEnabledi_impl;
PFNGLBEGINTRANSFORMFEEDBACKPROC gldlBeginTransformFeedback_impl;
PFNGLENDTRANSFORMFEEDBACKPROC gldlEndTransformFeedback_impl;
PFNGLBINDBUFFERRANGEPROC gldlBindBufferRange_impl;
PFNGLBINDBUFFERBASEPROC gldlBindBufferBase_impl;
PFNGLTRANSFORMFEEDBACKVARYINGSPROC gldlTransformFeedbackVaryings_impl;
PFNGLGETTRANSFORMFEEDBACKVARYINGPROC gldlGetTransformFeedbackVarying_impl;
PFNGLCLAMPCOLORPROC gldlClampColor_impl;
PFNGLBEGINCONDITIONALRENDERPROC gldlBeginConditionalRender_impl;
PFNGLENDCONDITIONALRENDERPROC gldlEndConditionalRender_impl;
PFNGLVERTEXATTRIBIPOINTERPROC gldlVertexAttribIPointer_impl;
PFNGLGETVERTEXATTRIBIIVPROC gldlGetVertexAttribIiv_impl;
PFNGLGETVERTEXATTRIBIUIVPROC gldlGetVertexAttribIuiv_impl;
PFNGLVERTEXATTRIBI1IPROC gldlVertexAttribI1i_impl;
PFNGLVERTEXATTRIBI2IPROC gldlVertexAttribI2i_impl;
PFNGLVERTEXATTRIBI3IPROC gldlVertexAttribI3i_impl;
PFNGLVERTEXATTRIBI4IPROC gldlVertexAttribI4i_impl;
PFNGLVERTEXATTRIBI1UIPROC gldlVertexAttribI1ui_impl;
PFNGLVERTEXATTRIBI2UIPROC gldlVertexAttribI2ui_impl;
PFNGLVERTEXATTRIBI3UIPROC gldlVertexAttribI3ui_impl;
PFNGLVERTEXATTRIBI4UIPROC gldlVertexAttribI4ui_impl;
PFNGLVERTEXATTRIBI1IVPROC gldlVertexAttribI1iv_impl;
PFNGLVERTEXATTRIBI2IVPROC gldlVertexAttribI2iv_impl;
PFNGLVERTEXATTRIBI3IVPROC gldlVertexAttribI3iv_impl;
PFNGLVERTEXATTRIBI4IVPROC gldlVertexAttribI4iv_impl;
PFNGLVERTEXATTRIBI1UIVPROC gldlVertexAttribI1uiv_impl;
PFNGLVERTEXATTRIBI2UIVPROC gldlVertexAttribI2uiv_impl;
PFNGLVERTEXATTRIBI3UIVPROC gldlVertexAttribI3uiv_impl;
PFNGLVERTEXATTRIBI4UIVPROC gldlVertexAttribI4uiv_impl;
PFNGLVERTEXATTRIBI4BVPROC gldlVertexAttribI4bv_impl;
PFNGLVERTEXATTRIBI4SVPROC gldlVertexAttribI4sv_impl;
PFNGLVERTEXATTRIBI4UBVPROC gldlVertexAttribI4ubv_impl;
PFNGLVERTEXATTRIBI4USVPROC gldlVertexAttribI4usv_impl;
PFNGLGETUNIFORMUIVPROC gldlGetUniformuiv_impl;
PFNGLBINDFRAGDATALOCATIONPROC gldlBindFragDataLocation_impl;
PFNGLGETFRAGDATALOCATIONPROC gldlGetFragDataLocation_impl;
PFNGLUNIFORM1UIPROC gldlUniform1ui_impl;
PFNGLUNIFORM2UIPROC gldlUniform2ui_impl;
PFNGLUNIFORM3UIPROC gldlUniform3ui_impl;
PFNGLUNIFORM4UIPROC gldlUniform4ui_impl;
PFNGLUNIFORM1UIVPROC gldlUniform1uiv_impl;
PFNGLUNIFORM2UIVPROC gldlUniform2uiv_impl;
PFNGLUNIFORM3UIVPROC gldlUniform3uiv_impl;
PFNGLUNIFORM4UIVPROC gldlUniform4uiv_impl;
PFNGLTEXPARAMETERIIVPROC gldlTexParameterIiv_impl;
PFNGLTEXPARAMETERIUIVPROC gldlTexParameterIuiv_impl;
PFNGLGETTEXPARAMETERIIVPROC gldlGetTexParameterIiv_impl;
PFNGLGETTEXPARAMETERIUIVPROC gldlGetTexParameterIuiv_impl;
PFNGLCLEARBUFFERIVPROC gldlClearBufferiv_impl;
PFNGLCLEARBUFFERUIVPROC gldlClearBufferuiv_impl;
PFNGLCLEARBUFFERFVPROC gldlClearBufferfv_impl;
PFNGLCLEARBUFFERFIPROC gldlClearBufferfi_impl;
PFNGLGETSTRINGIPROC gldlGetStringi_impl;
PFNGLDRAWARRAYSINSTANCEDPROC gldlDrawArraysInstanced_impl;
PFNGLDRAWELEMENTSINSTANCEDPROC gldlDrawElementsInstanced_impl;
PFNGLTEXBUFFERPROC gldlTexBuffer_impl;
PFNGLPRIMITIVERESTARTINDEXPROC gldlPrimitiveRestartIndex_impl;
PFNGLGETINTEGER64I_VPROC gldlGetInteger64i_v_impl;
PFNGLGETBUFFERPARAMETERI64VPROC gldlGetBufferParameteri64v_impl;
PFNGLFRAMEBUFFERTEXTUREPROC gldlFramebufferTexture_impl;
PFNGLVERTEXATTRIBDIVISORPROC gldlVertexAttribDivisor_impl;
PFNGLMINSAMPLESHADINGPROC gldlMinSampleShading_impl;
PFNGLBLENDEQUATIONIPROC gldlBlendEquationi_impl;
PFNGLBLENDEQUATIONSEPARATEIPROC gldlBlendEquationSeparatei_impl;
PFNGLBLENDFUNCIPROC gldlBlendFunci_impl;
PFNGLBLENDFUNCSEPARATEIPROC gldlBlendFuncSeparatei_impl;
PFNGLISRENDERBUFFERPROC gldlIsRenderbuffer_impl;
PFNGLBINDRENDERBUFFERPROC gldlBindRenderbuffer_impl;
PFNGLDELETERENDERBUFFERSPROC gldlDeleteRenderbuffers_impl;
PFNGLGENRENDERBUFFERSPROC gldlGenRenderbuffers_impl;
PFNGLRENDERBUFFERSTORAGEPROC gldlRenderbufferStorage_impl;
PFNGLGETRENDERBUFFERPARAMETERIVPROC gldlGetRenderbufferParameteriv_impl;
PFNGLISFRAMEBUFFERPROC gldlIsFramebuffer_impl;
PFNGLBINDFRAMEBUFFERPROC gldlBindFramebuffer_impl;
PFNGLDELETEFRAMEBUFFERSPROC gldlDeleteFramebuffers_impl;
PFNGLGENFRAMEBUFFERSPROC gldlGenFramebuffers_impl;
PFNGLCHECKFRAMEBUFFERSTATUSPROC gldlCheckFramebufferStatus_impl;
PFNGLFRAMEBUFFERTEXTURE1DPROC gldlFramebufferTexture1D_impl;
PFNGLFRAMEBUFFERTEXTURE2DPROC gldlFramebufferTexture2D_impl;
PFNGLFRAMEBUFFERTEXTURE3DPROC gldlFramebufferTexture3D_impl;
PFNGLFRAMEBUFFERRENDERBUFFERPROC gldlFramebufferRenderbuffer_impl;
PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC gldlGetFramebufferAttachmentParameteriv_impl;
PFNGLGENERATEMIPMAPPROC gldlGenerateMipmap_impl;
PFNGLBLITFRAMEBUFFERPROC gldlBlitFramebuffer_impl;
PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC gldlRenderbufferStorageMultisample_impl;
PFNGLFRAMEBUFFERTEXTURELAYERPROC gldlFramebufferTextureLayer_impl;
PFNGLMAPBUFFERRANGEPROC gldlMapBufferRange_impl;
PFNGLFLUSHMAPPEDBUFFERRANGEPROC gldlFlushMappedBufferRange_impl;
PFNGLBINDVERTEXARRAYPROC gldlBindVertexArray_impl;
PFNGLDELETEVERTEXARRAYSPROC gldlDeleteVertexArrays_impl;
PFNGLGENVERTEXARRAYSPROC gldlGenVertexArrays_impl;
PFNGLISVERTEXARRAYPROC gldlIsVertexArray_impl;
PFNGLGETUNIFORMINDICESPROC gldlGetUniformIndices_impl;
PFNGLGETACTIVEUNIFORMSIVPROC gldlGetActiveUniformsiv_impl;
PFNGLGETACTIVEUNIFORMNAMEPROC gldlGetActiveUniformName_impl;
PFNGLGETUNIFORMBLOCKINDEXPROC gldlGetUniformBlockIndex_impl;
PFNGLGETACTIVEUNIFORMBLOCKIVPROC gldlGetActiveUniformBlockiv_impl;
PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC gldlGetActiveUniformBlockName_impl;
PFNGLUNIFORMBLOCKBINDINGPROC gldlUniformBlockBinding_impl;
PFNGLCOPYBUFFERSUBDATAPROC gldlCopyBufferSubData_impl;
PFNGLDRAWELEMENTSBASEVERTEXPROC gldlDrawElementsBaseVertex_impl;
PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC gldlDrawRangeElementsBaseVertex_impl;
PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC gldlDrawElementsInstancedBaseVertex_impl;
PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC gldlMultiDrawElementsBaseVertex_impl;
PFNGLPROVOKINGVERTEXPROC gldlProvokingVertex_impl;
PFNGLFENCESYNCPROC gldlFenceSync_impl;
PFNGLISSYNCPROC gldlIsSync_impl;
PFNGLDELETESYNCPROC gldlDeleteSync_impl;
PFNGLCLIENTWAITSYNCPROC gldlClientWaitSync_impl;
PFNGLWAITSYNCPROC gldlWaitSync_impl;
PFNGLGETINTEGER64VPROC gldlGetInteger64v_impl;
PFNGLGETSYNCIVPROC gldlGetSynciv_impl;
PFNGLTEXIMAGE2DMULTISAMPLEPROC gldlTexImage2DMultisample_impl;
PFNGLTEXIMAGE3DMULTISAMPLEPROC gldlTexImage3DMultisample_impl;
PFNGLGETMULTISAMPLEFVPROC gldlGetMultisamplefv_impl;
PFNGLSAMPLEMASKIPROC gldlSampleMaski_impl;
PFNGLBLENDEQUATIONIARBPROC gldlBlendEquationiARB_impl;
PFNGLBLENDEQUATIONSEPARATEIARBPROC gldlBlendEquationSeparateiARB_impl;
PFNGLBLENDFUNCIARBPROC gldlBlendFunciARB_impl;
PFNGLBLENDFUNCSEPARATEIARBPROC gldlBlendFuncSeparateiARB_impl;
PFNGLMINSAMPLESHADINGARBPROC gldlMinSampleShadingARB_impl;
PFNGLNAMEDSTRINGARBPROC gldlNamedStringARB_impl;
PFNGLDELETENAMEDSTRINGARBPROC gldlDeleteNamedStringARB_impl;
PFNGLCOMPILESHADERINCLUDEARBPROC gldlCompileShaderIncludeARB_impl;
PFNGLISNAMEDSTRINGARBPROC gldlIsNamedStringARB_impl;
PFNGLGETNAMEDSTRINGARBPROC gldlGetNamedStringARB_impl;
PFNGLGETNAMEDSTRINGIVARBPROC gldlGetNamedStringivARB_impl;
PFNGLBINDFRAGDATALOCATIONINDEXEDPROC gldlBindFragDataLocationIndexed_impl;
PFNGLGETFRAGDATAINDEXPROC gldlGetFragDataIndex_impl;
PFNGLGENSAMPLERSPROC gldlGenSamplers_impl;
PFNGLDELETESAMPLERSPROC gldlDeleteSamplers_impl;
PFNGLISSAMPLERPROC gldlIsSampler_impl;
PFNGLBINDSAMPLERPROC gldlBindSampler_impl;
PFNGLSAMPLERPARAMETERIPROC gldlSamplerParameteri_impl;
PFNGLSAMPLERPARAMETERIVPROC gldlSamplerParameteriv_impl;
PFNGLSAMPLERPARAMETERFPROC gldlSamplerParameterf_impl;
PFNGLSAMPLERPARAMETERFVPROC gldlSamplerParameterfv_impl;
PFNGLSAMPLERPARAMETERIIVPROC gldlSamplerParameterIiv_impl;
PFNGLSAMPLERPARAMETERIUIVPROC gldlSamplerParameterIuiv_impl;
PFNGLGETSAMPLERPARAMETERIVPROC gldlGetSamplerParameteriv_impl;
PFNGLGETSAMPLERPARAMETERIIVPROC gldlGetSamplerParameterIiv_impl;
PFNGLGETSAMPLERPARAMETERFVPROC gldlGetSamplerParameterfv_impl;
PFNGLGETSAMPLERPARAMETERIUIVPROC gldlGetSamplerParameterIuiv_impl;
PFNGLQUERYCOUNTERPROC gldlQueryCounter_impl;
PFNGLGETQUERYOBJECTI64VPROC gldlGetQueryObjecti64v_impl;
PFNGLGETQUERYOBJECTUI64VPROC gldlGetQueryObjectui64v_impl;
PFNGLVERTEXP2UIPROC gldlVertexP2ui_impl;
PFNGLVERTEXP2UIVPROC gldlVertexP2uiv_impl;
PFNGLVERTEXP3UIPROC gldlVertexP3ui_impl;
PFNGLVERTEXP3UIVPROC gldlVertexP3uiv_impl;
PFNGLVERTEXP4UIPROC gldlVertexP4ui_impl;
PFNGLVERTEXP4UIVPROC gldlVertexP4uiv_impl;
PFNGLTEXCOORDP1UIPROC gldlTexCoordP1ui_impl;
PFNGLTEXCOORDP1UIVPROC gldlTexCoordP1uiv_impl;
PFNGLTEXCOORDP2UIPROC gldlTexCoordP2ui_impl;
PFNGLTEXCOORDP2UIVPROC gldlTexCoordP2uiv_impl;
PFNGLTEXCOORDP3UIPROC gldlTexCoordP3ui_impl;
PFNGLTEXCOORDP3UIVPROC gldlTexCoordP3uiv_impl;
PFNGLTEXCOORDP4UIPROC gldlTexCoordP4ui_impl;
PFNGLTEXCOORDP4UIVPROC gldlTexCoordP4uiv_impl;
PFNGLMULTITEXCOORDP1UIPROC gldlMultiTexCoordP1ui_impl;
PFNGLMULTITEXCOORDP1UIVPROC gldlMultiTexCoordP1uiv_impl;
PFNGLMULTITEXCOORDP2UIPROC gldlMultiTexCoordP2ui_impl;
PFNGLMULTITEXCOORDP2UIVPROC gldlMultiTexCoordP2uiv_impl;
PFNGLMULTITEXCOORDP3UIPROC gldlMultiTexCoordP3ui_impl;
PFNGLMULTITEXCOORDP3UIVPROC gldlMultiTexCoordP3uiv_impl;
PFNGLMULTITEXCOORDP4UIPROC gldlMultiTexCoordP4ui_impl;
PFNGLMULTITEXCOORDP4UIVPROC gldlMultiTexCoordP4uiv_impl;
PFNGLNORMALP3UIPROC gldlNormalP3ui_impl;
PFNGLNORMALP3UIVPROC gldlNormalP3uiv_impl;
PFNGLCOLORP3UIPROC gldlColorP3ui_impl;
PFNGLCOLORP3UIVPROC gldlColorP3uiv_impl;
PFNGLCOLORP4UIPROC gldlColorP4ui_impl;
PFNGLCOLORP4UIVPROC gldlColorP4uiv_impl;
PFNGLSECONDARYCOLORP3UIPROC gldlSecondaryColorP3ui_impl;
PFNGLSECONDARYCOLORP3UIVPROC gldlSecondaryColorP3uiv_impl;
PFNGLVERTEXATTRIBP1UIPROC gldlVertexAttribP1ui_impl;
PFNGLVERTEXATTRIBP1UIVPROC gldlVertexAttribP1uiv_impl;
PFNGLVERTEXATTRIBP2UIPROC gldlVertexAttribP2ui_impl;
PFNGLVERTEXATTRIBP2UIVPROC gldlVertexAttribP2uiv_impl;
PFNGLVERTEXATTRIBP3UIPROC gldlVertexAttribP3ui_impl;
PFNGLVERTEXATTRIBP3UIVPROC gldlVertexAttribP3uiv_impl;
PFNGLVERTEXATTRIBP4UIPROC gldlVertexAttribP4ui_impl;
PFNGLVERTEXATTRIBP4UIVPROC gldlVertexAttribP4uiv_impl;
PFNGLDRAWARRAYSINDIRECTPROC gldlDrawArraysIndirect_impl;
PFNGLDRAWELEMENTSINDIRECTPROC gldlDrawElementsIndirect_impl;
PFNGLUNIFORM1DPROC gldlUniform1d_impl;
PFNGLUNIFORM2DPROC gldlUniform2d_impl;
PFNGLUNIFORM3DPROC gldlUniform3d_impl;
PFNGLUNIFORM4DPROC gldlUniform4d_impl;
PFNGLUNIFORM1DVPROC gldlUniform1dv_impl;
PFNGLUNIFORM2DVPROC gldlUniform2dv_impl;
PFNGLUNIFORM3DVPROC gldlUniform3dv_impl;
PFNGLUNIFORM4DVPROC gldlUniform4dv_impl;
PFNGLUNIFORMMATRIX2DVPROC gldlUniformMatrix2dv_impl;
PFNGLUNIFORMMATRIX3DVPROC gldlUniformMatrix3dv_impl;
PFNGLUNIFORMMATRIX4DVPROC gldlUniformMatrix4dv_impl;
PFNGLUNIFORMMATRIX2X3DVPROC gldlUniformMatrix2x3dv_impl;
PFNGLUNIFORMMATRIX2X4DVPROC gldlUniformMatrix2x4dv_impl;
PFNGLUNIFORMMATRIX3X2DVPROC gldlUniformMatrix3x2dv_impl;
PFNGLUNIFORMMATRIX3X4DVPROC gldlUniformMatrix3x4dv_impl;
PFNGLUNIFORMMATRIX4X2DVPROC gldlUniformMatrix4x2dv_impl;
PFNGLUNIFORMMATRIX4X3DVPROC gldlUniformMatrix4x3dv_impl;
PFNGLGETUNIFORMDVPROC gldlGetUniformdv_impl;
PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC gldlGetSubroutineUniformLocation_impl;
PFNGLGETSUBROUTINEINDEXPROC gldlGetSubroutineIndex_impl;
PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC gldlGetActiveSubroutineUniformiv_impl;
PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC gldlGetActiveSubroutineUniformName_impl;
PFNGLGETACTIVESUBROUTINENAMEPROC gldlGetActiveSubroutineName_impl;
PFNGLUNIFORMSUBROUTINESUIVPROC gldlUniformSubroutinesuiv_impl;
PFNGLGETUNIFORMSUBROUTINEUIVPROC gldlGetUniformSubroutineuiv_impl;
PFNGLGETPROGRAMSTAGEIVPROC gldlGetProgramStageiv_impl;
PFNGLPATCHPARAMETERIPROC gldlPatchParameteri_impl;
PFNGLPATCHPARAMETERFVPROC gldlPatchParameterfv_impl;
PFNGLBINDTRANSFORMFEEDBACKPROC gldlBindTransformFeedback_impl;
PFNGLDELETETRANSFORMFEEDBACKSPROC gldlDeleteTransformFeedbacks_impl;
PFNGLGENTRANSFORMFEEDBACKSPROC gldlGenTransformFeedbacks_impl;
PFNGLISTRANSFORMFEEDBACKPROC gldlIsTransformFeedback_impl;
PFNGLPAUSETRANSFORMFEEDBACKPROC gldlPauseTransformFeedback_impl;
PFNGLRESUMETRANSFORMFEEDBACKPROC gldlResumeTransformFeedback_impl;
PFNGLDRAWTRANSFORMFEEDBACKPROC gldlDrawTransformFeedback_impl;
PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC gldlDrawTransformFeedbackStream_impl;
PFNGLBEGINQUERYINDEXEDPROC gldlBeginQueryIndexed_impl;
PFNGLENDQUERYINDEXEDPROC gldlEndQueryIndexed_impl;
PFNGLGETQUERYINDEXEDIVPROC gldlGetQueryIndexediv_impl;
PFNGLRELEASESHADERCOMPILERPROC gldlReleaseShaderCompiler_impl;
PFNGLSHADERBINARYPROC gldlShaderBinary_impl;
PFNGLGETSHADERPRECISIONFORMATPROC gldlGetShaderPrecisionFormat_impl;
PFNGLDEPTHRANGEFPROC gldlDepthRangef_impl;
PFNGLCLEARDEPTHFPROC gldlClearDepthf_impl;
PFNGLGETPROGRAMBINARYPROC gldlGetProgramBinary_impl;
PFNGLPROGRAMBINARYPROC gldlProgramBinary_impl;
PFNGLPROGRAMPARAMETERIPROC gldlProgramParameteri_impl;
PFNGLUSEPROGRAMSTAGESPROC gldlUseProgramStages_impl;
PFNGLACTIVESHADERPROGRAMPROC gldlActiveShaderProgram_impl;
PFNGLCREATESHADERPROGRAMVPROC gldlCreateShaderProgramv_impl;
PFNGLBINDPROGRAMPIPELINEPROC gldlBindProgramPipeline_impl;
PFNGLDELETEPROGRAMPIPELINESPROC gldlDeleteProgramPipelines_impl;
PFNGLGENPROGRAMPIPELINESPROC gldlGenProgramPipelines_impl;
PFNGLISPROGRAMPIPELINEPROC gldlIsProgramPipeline_impl;
PFNGLGETPROGRAMPIPELINEIVPROC gldlGetProgramPipelineiv_impl;
PFNGLPROGRAMUNIFORM1IPROC gldlProgramUniform1i_impl;
PFNGLPROGRAMUNIFORM1IVPROC gldlProgramUniform1iv_impl;
PFNGLPROGRAMUNIFORM1FPROC gldlProgramUniform1f_impl;
PFNGLPROGRAMUNIFORM1FVPROC gldlProgramUniform1fv_impl;
PFNGLPROGRAMUNIFORM1DPROC gldlProgramUniform1d_impl;
PFNGLPROGRAMUNIFORM1DVPROC gldlProgramUniform1dv_impl;
PFNGLPROGRAMUNIFORM1UIPROC gldlProgramUniform1ui_impl;
PFNGLPROGRAMUNIFORM1UIVPROC gldlProgramUniform1uiv_impl;
PFNGLPROGRAMUNIFORM2IPROC gldlProgramUniform2i_impl;
PFNGLPROGRAMUNIFORM2IVPROC gldlProgramUniform2iv_impl;
PFNGLPROGRAMUNIFORM2FPROC gldlProgramUniform2f_impl;
PFNGLPROGRAMUNIFORM2FVPROC gldlProgramUniform2fv_impl;
PFNGLPROGRAMUNIFORM2DPROC gldlProgramUniform2d_impl;
PFNGLPROGRAMUNIFORM2DVPROC gldlProgramUniform2dv_impl;
PFNGLPROGRAMUNIFORM2UIPROC gldlProgramUniform2ui_impl;
PFNGLPROGRAMUNIFORM2UIVPROC gldlProgramUniform2uiv_impl;
PFNGLPROGRAMUNIFORM3IPROC gldlProgramUniform3i_impl;
PFNGLPROGRAMUNIFORM3IVPROC gldlProgramUniform3iv_impl;
PFNGLPROGRAMUNIFORM3FPROC gldlProgramUniform3f_impl;
PFNGLPROGRAMUNIFORM3FVPROC gldlProgramUniform3fv_impl;
PFNGLPROGRAMUNIFORM3DPROC gldlProgramUniform3d_impl;
PFNGLPROGRAMUNIFORM3DVPROC gldlProgramUniform3dv_impl;
PFNGLPROGRAMUNIFORM3UIPROC gldlProgramUniform3ui_impl;
PFNGLPROGRAMUNIFORM3UIVPROC gldlProgramUniform3uiv_impl;
PFNGLPROGRAMUNIFORM4IPROC gldlProgramUniform4i_impl;
PFNGLPROGRAMUNIFORM4IVPROC gldlProgramUniform4iv_impl;
PFNGLPROGRAMUNIFORM4FPROC gldlProgramUniform4f_impl;
PFNGLPROGRAMUNIFORM4FVPROC gldlProgramUniform4fv_impl;
PFNGLPROGRAMUNIFORM4DPROC gldlProgramUniform4d_impl;
PFNGLPROGRAMUNIFORM4DVPROC gldlProgramUniform4dv_impl;
PFNGLPROGRAMUNIFORM4UIPROC gldlProgramUniform4ui_impl;
PFNGLPROGRAMUNIFORM4UIVPROC gldlProgramUniform4uiv_impl;
PFNGLPROGRAMUNIFORMMATRIX2FVPROC gldlProgramUniformMatrix2fv_impl;
PFNGLPROGRAMUNIFORMMATRIX3FVPROC gldlProgramUniformMatrix3fv_impl;
PFNGLPROGRAMUNIFORMMATRIX4FVPROC gldlProgramUniformMatrix4fv_impl;
PFNGLPROGRAMUNIFORMMATRIX2DVPROC gldlProgramUniformMatrix2dv_impl;
PFNGLPROGRAMUNIFORMMATRIX3DVPROC gldlProgramUniformMatrix3dv_impl;
PFNGLPROGRAMUNIFORMMATRIX4DVPROC gldlProgramUniformMatrix4dv_impl;
PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC gldlProgramUniformMatrix2x3fv_impl;
PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC gldlProgramUniformMatrix3x2fv_impl;
PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC gldlProgramUniformMatrix2x4fv_impl;
PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC gldlProgramUniformMatrix4x2fv_impl;
PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC gldlProgramUniformMatrix3x4fv_impl;
PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC gldlProgramUniformMatrix4x3fv_impl;
PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC gldlProgramUniformMatrix2x3dv_impl;
PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC gldlProgramUniformMatrix3x2dv_impl;
PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC gldlProgramUniformMatrix2x4dv_impl;
PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC gldlProgramUniformMatrix4x2dv_impl;
PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC gldlProgramUniformMatrix3x4dv_impl;
PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC gldlProgramUniformMatrix4x3dv_impl;
PFNGLVALIDATEPROGRAMPIPELINEPROC gldlValidateProgramPipeline_impl;
PFNGLGETPROGRAMPIPELINEINFOLOGPROC gldlGetProgramPipelineInfoLog_impl;
PFNGLVERTEXATTRIBL1DPROC gldlVertexAttribL1d_impl;
PFNGLVERTEXATTRIBL2DPROC gldlVertexAttribL2d_impl;
PFNGLVERTEXATTRIBL3DPROC gldlVertexAttribL3d_impl;
PFNGLVERTEXATTRIBL4DPROC gldlVertexAttribL4d_impl;
PFNGLVERTEXATTRIBL1DVPROC gldlVertexAttribL1dv_impl;
PFNGLVERTEXATTRIBL2DVPROC gldlVertexAttribL2dv_impl;
PFNGLVERTEXATTRIBL3DVPROC gldlVertexAttribL3dv_impl;
PFNGLVERTEXATTRIBL4DVPROC gldlVertexAttribL4dv_impl;
PFNGLVERTEXATTRIBLPOINTERPROC gldlVertexAttribLPointer_impl;
PFNGLGETVERTEXATTRIBLDVPROC gldlGetVertexAttribLdv_impl;
PFNGLVIEWPORTARRAYVPROC gldlViewportArrayv_impl;
PFNGLVIEWPORTINDEXEDFPROC gldlViewportIndexedf_impl;
PFNGLVIEWPORTINDEXEDFVPROC gldlViewportIndexedfv_impl;
PFNGLSCISSORARRAYVPROC gldlScissorArrayv_impl;
PFNGLSCISSORINDEXEDPROC gldlScissorIndexed_impl;
PFNGLSCISSORINDEXEDVPROC gldlScissorIndexedv_impl;
PFNGLDEPTHRANGEARRAYVPROC gldlDepthRangeArrayv_impl;
PFNGLDEPTHRANGEINDEXEDPROC gldlDepthRangeIndexed_impl;
PFNGLGETFLOATI_VPROC gldlGetFloati_v_impl;
PFNGLGETDOUBLEI_VPROC gldlGetDoublei_v_impl;
PFNGLCREATESYNCFROMCLEVENTARBPROC gldlCreateSyncFromCLeventARB_impl;
PFNGLDEBUGMESSAGECONTROLARBPROC gldlDebugMessageControlARB_impl;
PFNGLDEBUGMESSAGEINSERTARBPROC gldlDebugMessageInsertARB_impl;
PFNGLDEBUGMESSAGECALLBACKARBPROC gldlDebugMessageCallbackARB_impl;
PFNGLGETDEBUGMESSAGELOGARBPROC gldlGetDebugMessageLogARB_impl;
PFNGLGETGRAPHICSRESETSTATUSARBPROC gldlGetGraphicsResetStatusARB_impl;
PFNGLGETNMAPDVARBPROC gldlGetnMapdvARB_impl;
PFNGLGETNMAPFVARBPROC gldlGetnMapfvARB_impl;
PFNGLGETNMAPIVARBPROC gldlGetnMapivARB_impl;
PFNGLGETNPIXELMAPFVARBPROC gldlGetnPixelMapfvARB_impl;
PFNGLGETNPIXELMAPUIVARBPROC gldlGetnPixelMapuivARB_impl;
PFNGLGETNPIXELMAPUSVARBPROC gldlGetnPixelMapusvARB_impl;
PFNGLGETNPOLYGONSTIPPLEARBPROC gldlGetnPolygonStippleARB_impl;
PFNGLGETNCOLORTABLEARBPROC gldlGetnColorTableARB_impl;
PFNGLGETNCONVOLUTIONFILTERARBPROC gldlGetnConvolutionFilterARB_impl;
PFNGLGETNSEPARABLEFILTERARBPROC gldlGetnSeparableFilterARB_impl;
PFNGLGETNHISTOGRAMARBPROC gldlGetnHistogramARB_impl;
PFNGLGETNMINMAXARBPROC gldlGetnMinmaxARB_impl;
PFNGLGETNTEXIMAGEARBPROC gldlGetnTexImageARB_impl;
PFNGLREADNPIXELSARBPROC gldlReadnPixelsARB_impl;
PFNGLGETNCOMPRESSEDTEXIMAGEARBPROC gldlGetnCompressedTexImageARB_impl;
PFNGLGETNUNIFORMFVARBPROC gldlGetnUniformfvARB_impl;
PFNGLGETNUNIFORMIVARBPROC gldlGetnUniformivARB_impl;
PFNGLGETNUNIFORMUIVARBPROC gldlGetnUniformuivARB_impl;
PFNGLGETNUNIFORMDVARBPROC gldlGetnUniformdvARB_impl;
PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC gldlDrawArraysInstancedBaseInstance_impl;
PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC gldlDrawElementsInstancedBaseInstance_impl;
PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC gldlDrawElementsInstancedBaseVertexBaseInstance_impl;
PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDPROC gldlDrawTransformFeedbackInstanced_impl;
PFNGLDRAWTRANSFORMFEEDBACKSTREAMINSTANCEDPROC gldlDrawTransformFeedbackStreamInstanced_impl;
PFNGLGETINTERNALFORMATIVPROC gldlGetInternalformativ_impl;
PFNGLGETACTIVEATOMICCOUNTERBUFFERIVPROC gldlGetActiveAtomicCounterBufferiv_impl;
PFNGLBINDIMAGETEXTUREPROC gldlBindImageTexture_impl;
PFNGLMEMORYBARRIERPROC gldlMemoryBarrier_impl;
PFNGLTEXSTORAGE1DPROC gldlTexStorage1D_impl;
PFNGLTEXSTORAGE2DPROC gldlTexStorage2D_impl;
PFNGLTEXSTORAGE3DPROC gldlTexStorage3D_impl;
PFNGLTEXTURESTORAGE1DEXTPROC gldlTextureStorage1DEXT_impl;
PFNGLTEXTURESTORAGE2DEXTPROC gldlTextureStorage2DEXT_impl;
PFNGLTEXTURESTORAGE3DEXTPROC gldlTextureStorage3DEXT_impl;

// GL function number
#define GLDL_FUNC_N 560

// String array of all GL function names
char *gl_functions[GLDL_FUNC_N] = { 
	"glActiveShaderProgram",
	"glActiveTexture",
	"glAttachShader",
	"glBeginConditionalRender",
	"glBeginQuery",
	"glBeginQueryIndexed",
	"glBeginTransformFeedback",
	"glBindAttribLocation",
	"glBindBuffer",
	"glBindBufferBase",
	"glBindBufferRange",
	"glBindFragDataLocation",
	"glBindFragDataLocationIndexed",
	"glBindFramebuffer",
	"glBindImageTexture",
	"glBindProgramPipeline",
	"glBindRenderbuffer",
	"glBindSampler",
	"glBindTexture",
	"glBindTransformFeedback",
	"glBindVertexArray",
	"glBlendColor",
	"glBlendEquation",
	"glBlendEquationSeparate",
	"glBlendEquationSeparatei",
	"glBlendEquationSeparateiARB",
	"glBlendEquationi",
	"glBlendEquationiARB",
	"glBlendFunc",
	"glBlendFuncSeparate",
	"glBlendFuncSeparatei",
	"glBlendFuncSeparateiARB",
	"glBlendFunci",
	"glBlendFunciARB",
	"glBlitFramebuffer",
	"glBufferData",
	"glBufferSubData",
	"glCheckFramebufferStatus",
	"glClampColor",
	"glClear",
	"glClearBufferfi",
	"glClearBufferfv",
	"glClearBufferiv",
	"glClearBufferuiv",
	"glClearColor",
	"glClearDepth",
	"glClearDepthf",
	"glClearStencil",
	"glClientWaitSync",
	"glColorMask",
	"glColorMaski",
	"glColorP3ui",
	"glColorP3uiv",
	"glColorP4ui",
	"glColorP4uiv",
	"glCompileShader",
	"glCompileShaderIncludeARB",
	"glCompressedTexImage1D",
	"glCompressedTexImage2D",
	"glCompressedTexImage3D",
	"glCompressedTexSubImage1D",
	"glCompressedTexSubImage2D",
	"glCompressedTexSubImage3D",
	"glCopyBufferSubData",
	"glCopyTexImage1D",
	"glCopyTexImage2D",
	"glCopyTexSubImage1D",
	"glCopyTexSubImage2D",
	"glCopyTexSubImage3D",
	"glCreateProgram",
	"glCreateShader",
	"glCreateShaderProgramv",
	"glCreateSyncFromCLeventARB",
	"glCullFace",
	"glDebugMessageCallbackARB",
	"glDebugMessageControlARB",
	"glDebugMessageInsertARB",
	"glDeleteBuffers",
	"glDeleteFramebuffers",
	"glDeleteNamedStringARB",
	"glDeleteProgram",
	"glDeleteProgramPipelines",
	"glDeleteQueries",
	"glDeleteRenderbuffers",
	"glDeleteSamplers",
	"glDeleteShader",
	"glDeleteSync",
	"glDeleteTextures",
	"glDeleteTransformFeedbacks",
	"glDeleteVertexArrays",
	"glDepthFunc",
	"glDepthMask",
	"glDepthRange",
	"glDepthRangeArrayv",
	"glDepthRangeIndexed",
	"glDepthRangef",
	"glDetachShader",
	"glDisable",
	"glDisableVertexAttribArray",
	"glDisablei",
	"glDrawArrays",
	"glDrawArraysIndirect",
	"glDrawArraysInstanced",
	"glDrawArraysInstancedBaseInstance",
	"glDrawBuffer",
	"glDrawBuffers",
	"glDrawElements",
	"glDrawElementsBaseVertex",
	"glDrawElementsIndirect",
	"glDrawElementsInstanced",
	"glDrawElementsInstancedBaseInstance",
	"glDrawElementsInstancedBaseVertex",
	"glDrawElementsInstancedBaseVertexBaseInstance",
	"glDrawRangeElements",
	"glDrawRangeElementsBaseVertex",
	"glDrawTransformFeedback",
	"glDrawTransformFeedbackInstanced",
	"glDrawTransformFeedbackStream",
	"glDrawTransformFeedbackStreamInstanced",
	"glEnable",
	"glEnableVertexAttribArray",
	"glEnablei",
	"glEndConditionalRender",
	"glEndQuery",
	"glEndQueryIndexed",
	"glEndTransformFeedback",
	"glFenceSync",
	"glFinish",
	"glFlush",
	"glFlushMappedBufferRange",
	"glFramebufferRenderbuffer",
	"glFramebufferTexture",
	"glFramebufferTexture1D",
	"glFramebufferTexture2D",
	"glFramebufferTexture3D",
	"glFramebufferTextureLayer",
	"glFrontFace",
	"glGenBuffers",
	"glGenFramebuffers",
	"glGenProgramPipelines",
	"glGenQueries",
	"glGenRenderbuffers",
	"glGenSamplers",
	"glGenTextures",
	"glGenTransformFeedbacks",
	"glGenVertexArrays",
	"glGenerateMipmap",
	"glGetActiveAtomicCounterBufferiv",
	"glGetActiveAttrib",
	"glGetActiveSubroutineName",
	"glGetActiveSubroutineUniformName",
	"glGetActiveSubroutineUniformiv",
	"glGetActiveUniform",
	"glGetActiveUniformBlockName",
	"glGetActiveUniformBlockiv",
	"glGetActiveUniformName",
	"glGetActiveUniformsiv",
	"glGetAttachedShaders",
	"glGetAttribLocation",
	"glGetBooleani_v",
	"glGetBooleanv",
	"glGetBufferParameteri64v",
	"glGetBufferParameteriv",
	"glGetBufferPointerv",
	"glGetBufferSubData",
	"glGetCompressedTexImage",
	"glGetDebugMessageLogARB",
	"glGetDoublei_v",
	"glGetDoublev",
	"glGetError",
	"glGetFloati_v",
	"glGetFloatv",
	"glGetFragDataIndex",
	"glGetFragDataLocation",
	"glGetFramebufferAttachmentParameteriv",
	"glGetGraphicsResetStatusARB",
	"glGetInteger64i_v",
	"glGetInteger64v",
	"glGetIntegeri_v",
	"glGetIntegerv",
	"glGetInternalformativ",
	"glGetMultisamplefv",
	"glGetNamedStringARB",
	"glGetNamedStringivARB",
	"glGetPointerv",
	"glGetProgramBinary",
	"glGetProgramInfoLog",
	"glGetProgramPipelineInfoLog",
	"glGetProgramPipelineiv",
	"glGetProgramStageiv",
	"glGetProgramiv",
	"glGetQueryIndexediv",
	"glGetQueryObjecti64v",
	"glGetQueryObjectiv",
	"glGetQueryObjectui64v",
	"glGetQueryObjectuiv",
	"glGetQueryiv",
	"glGetRenderbufferParameteriv",
	"glGetSamplerParameterIiv",
	"glGetSamplerParameterIuiv",
	"glGetSamplerParameterfv",
	"glGetSamplerParameteriv",
	"glGetShaderInfoLog",
	"glGetShaderPrecisionFormat",
	"glGetShaderSource",
	"glGetShaderiv",
	"glGetString",
	"glGetStringi",
	"glGetSubroutineIndex",
	"glGetSubroutineUniformLocation",
	"glGetSynciv",
	"glGetTexImage",
	"glGetTexLevelParameterfv",
	"glGetTexLevelParameteriv",
	"glGetTexParameterIiv",
	"glGetTexParameterIuiv",
	"glGetTexParameterfv",
	"glGetTexParameteriv",
	"glGetTransformFeedbackVarying",
	"glGetUniformBlockIndex",
	"glGetUniformIndices",
	"glGetUniformLocation",
	"glGetUniformSubroutineuiv",
	"glGetUniformdv",
	"glGetUniformfv",
	"glGetUniformiv",
	"glGetUniformuiv",
	"glGetVertexAttribIiv",
	"glGetVertexAttribIuiv",
	"glGetVertexAttribLdv",
	"glGetVertexAttribPointerv",
	"glGetVertexAttribdv",
	"glGetVertexAttribfv",
	"glGetVertexAttribiv",
	"glGetnColorTableARB",
	"glGetnCompressedTexImageARB",
	"glGetnConvolutionFilterARB",
	"glGetnHistogramARB",
	"glGetnMapdvARB",
	"glGetnMapfvARB",
	"glGetnMapivARB",
	"glGetnMinmaxARB",
	"glGetnPixelMapfvARB",
	"glGetnPixelMapuivARB",
	"glGetnPixelMapusvARB",
	"glGetnPolygonStippleARB",
	"glGetnSeparableFilterARB",
	"glGetnTexImageARB",
	"glGetnUniformdvARB",
	"glGetnUniformfvARB",
	"glGetnUniformivARB",
	"glGetnUniformuivARB",
	"glHint",
	"glIsBuffer",
	"glIsEnabled",
	"glIsEnabledi",
	"glIsFramebuffer",
	"glIsNamedStringARB",
	"glIsProgram",
	"glIsProgramPipeline",
	"glIsQuery",
	"glIsRenderbuffer",
	"glIsSampler",
	"glIsShader",
	"glIsSync",
	"glIsTexture",
	"glIsTransformFeedback",
	"glIsVertexArray",
	"glLineWidth",
	"glLinkProgram",
	"glLogicOp",
	"glMapBuffer",
	"glMapBufferRange",
	"glMemoryBarrier",
	"glMinSampleShading",
	"glMinSampleShadingARB",
	"glMultiDrawArrays",
	"glMultiDrawElements",
	"glMultiDrawElementsBaseVertex",
	"glMultiTexCoordP1ui",
	"glMultiTexCoordP1uiv",
	"glMultiTexCoordP2ui",
	"glMultiTexCoordP2uiv",
	"glMultiTexCoordP3ui",
	"glMultiTexCoordP3uiv",
	"glMultiTexCoordP4ui",
	"glMultiTexCoordP4uiv",
	"glNamedStringARB",
	"glNormalP3ui",
	"glNormalP3uiv",
	"glPatchParameterfv",
	"glPatchParameteri",
	"glPauseTransformFeedback",
	"glPixelStoref",
	"glPixelStorei",
	"glPointParameterf",
	"glPointParameterfv",
	"glPointParameteri",
	"glPointParameteriv",
	"glPointSize",
	"glPolygonMode",
	"glPolygonOffset",
	"glPrimitiveRestartIndex",
	"glProgramBinary",
	"glProgramParameteri",
	"glProgramUniform1d",
	"glProgramUniform1dv",
	"glProgramUniform1f",
	"glProgramUniform1fv",
	"glProgramUniform1i",
	"glProgramUniform1iv",
	"glProgramUniform1ui",
	"glProgramUniform1uiv",
	"glProgramUniform2d",
	"glProgramUniform2dv",
	"glProgramUniform2f",
	"glProgramUniform2fv",
	"glProgramUniform2i",
	"glProgramUniform2iv",
	"glProgramUniform2ui",
	"glProgramUniform2uiv",
	"glProgramUniform3d",
	"glProgramUniform3dv",
	"glProgramUniform3f",
	"glProgramUniform3fv",
	"glProgramUniform3i",
	"glProgramUniform3iv",
	"glProgramUniform3ui",
	"glProgramUniform3uiv",
	"glProgramUniform4d",
	"glProgramUniform4dv",
	"glProgramUniform4f",
	"glProgramUniform4fv",
	"glProgramUniform4i",
	"glProgramUniform4iv",
	"glProgramUniform4ui",
	"glProgramUniform4uiv",
	"glProgramUniformMatrix2dv",
	"glProgramUniformMatrix2fv",
	"glProgramUniformMatrix2x3dv",
	"glProgramUniformMatrix2x3fv",
	"glProgramUniformMatrix2x4dv",
	"glProgramUniformMatrix2x4fv",
	"glProgramUniformMatrix3dv",
	"glProgramUniformMatrix3fv",
	"glProgramUniformMatrix3x2dv",
	"glProgramUniformMatrix3x2fv",
	"glProgramUniformMatrix3x4dv",
	"glProgramUniformMatrix3x4fv",
	"glProgramUniformMatrix4dv",
	"glProgramUniformMatrix4fv",
	"glProgramUniformMatrix4x2dv",
	"glProgramUniformMatrix4x2fv",
	"glProgramUniformMatrix4x3dv",
	"glProgramUniformMatrix4x3fv",
	"glProvokingVertex",
	"glQueryCounter",
	"glReadBuffer",
	"glReadPixels",
	"glReadnPixelsARB",
	"glReleaseShaderCompiler",
	"glRenderbufferStorage",
	"glRenderbufferStorageMultisample",
	"glResumeTransformFeedback",
	"glSampleCoverage",
	"glSampleMaski",
	"glSamplerParameterIiv",
	"glSamplerParameterIuiv",
	"glSamplerParameterf",
	"glSamplerParameterfv",
	"glSamplerParameteri",
	"glSamplerParameteriv",
	"glScissor",
	"glScissorArrayv",
	"glScissorIndexed",
	"glScissorIndexedv",
	"glSecondaryColorP3ui",
	"glSecondaryColorP3uiv",
	"glShaderBinary",
	"glShaderSource",
	"glStencilFunc",
	"glStencilFuncSeparate",
	"glStencilMask",
	"glStencilMaskSeparate",
	"glStencilOp",
	"glStencilOpSeparate",
	"glTexBuffer",
	"glTexCoordP1ui",
	"glTexCoordP1uiv",
	"glTexCoordP2ui",
	"glTexCoordP2uiv",
	"glTexCoordP3ui",
	"glTexCoordP3uiv",
	"glTexCoordP4ui",
	"glTexCoordP4uiv",
	"glTexImage1D",
	"glTexImage2D",
	"glTexImage2DMultisample",
	"glTexImage3D",
	"glTexImage3DMultisample",
	"glTexParameterIiv",
	"glTexParameterIuiv",
	"glTexParameterf",
	"glTexParameterfv",
	"glTexParameteri",
	"glTexParameteriv",
	"glTexStorage1D",
	"glTexStorage2D",
	"glTexStorage3D",
	"glTexSubImage1D",
	"glTexSubImage2D",
	"glTexSubImage3D",
	"glTextureStorage1DEXT",
	"glTextureStorage2DEXT",
	"glTextureStorage3DEXT",
	"glTransformFeedbackVaryings",
	"glUniform1d",
	"glUniform1dv",
	"glUniform1f",
	"glUniform1fv",
	"glUniform1i",
	"glUniform1iv",
	"glUniform1ui",
	"glUniform1uiv",
	"glUniform2d",
	"glUniform2dv",
	"glUniform2f",
	"glUniform2fv",
	"glUniform2i",
	"glUniform2iv",
	"glUniform2ui",
	"glUniform2uiv",
	"glUniform3d",
	"glUniform3dv",
	"glUniform3f",
	"glUniform3fv",
	"glUniform3i",
	"glUniform3iv",
	"glUniform3ui",
	"glUniform3uiv",
	"glUniform4d",
	"glUniform4dv",
	"glUniform4f",
	"glUniform4fv",
	"glUniform4i",
	"glUniform4iv",
	"glUniform4ui",
	"glUniform4uiv",
	"glUniformBlockBinding",
	"glUniformMatrix2dv",
	"glUniformMatrix2fv",
	"glUniformMatrix2x3dv",
	"glUniformMatrix2x3fv",
	"glUniformMatrix2x4dv",
	"glUniformMatrix2x4fv",
	"glUniformMatrix3dv",
	"glUniformMatrix3fv",
	"glUniformMatrix3x2dv",
	"glUniformMatrix3x2fv",
	"glUniformMatrix3x4dv",
	"glUniformMatrix3x4fv",
	"glUniformMatrix4dv",
	"glUniformMatrix4fv",
	"glUniformMatrix4x2dv",
	"glUniformMatrix4x2fv",
	"glUniformMatrix4x3dv",
	"glUniformMatrix4x3fv",
	"glUniformSubroutinesuiv",
	"glUnmapBuffer",
	"glUseProgram",
	"glUseProgramStages",
	"glValidateProgram",
	"glValidateProgramPipeline",
	"glVertexAttrib1d",
	"glVertexAttrib1dv",
	"glVertexAttrib1f",
	"glVertexAttrib1fv",
	"glVertexAttrib1s",
	"glVertexAttrib1sv",
	"glVertexAttrib2d",
	"glVertexAttrib2dv",
	"glVertexAttrib2f",
	"glVertexAttrib2fv",
	"glVertexAttrib2s",
	"glVertexAttrib2sv",
	"glVertexAttrib3d",
	"glVertexAttrib3dv",
	"glVertexAttrib3f",
	"glVertexAttrib3fv",
	"glVertexAttrib3s",
	"glVertexAttrib3sv",
	"glVertexAttrib4Nbv",
	"glVertexAttrib4Niv",
	"glVertexAttrib4Nsv",
	"glVertexAttrib4Nub",
	"glVertexAttrib4Nubv",
	"glVertexAttrib4Nuiv",
	"glVertexAttrib4Nusv",
	"glVertexAttrib4bv",
	"glVertexAttrib4d",
	"glVertexAttrib4dv",
	"glVertexAttrib4f",
	"glVertexAttrib4fv",
	"glVertexAttrib4iv",
	"glVertexAttrib4s",
	"glVertexAttrib4sv",
	"glVertexAttrib4ubv",
	"glVertexAttrib4uiv",
	"glVertexAttrib4usv",
	"glVertexAttribDivisor",
	"glVertexAttribI1i",
	"glVertexAttribI1iv",
	"glVertexAttribI1ui",
	"glVertexAttribI1uiv",
	"glVertexAttribI2i",
	"glVertexAttribI2iv",
	"glVertexAttribI2ui",
	"glVertexAttribI2uiv",
	"glVertexAttribI3i",
	"glVertexAttribI3iv",
	"glVertexAttribI3ui",
	"glVertexAttribI3uiv",
	"glVertexAttribI4bv",
	"glVertexAttribI4i",
	"glVertexAttribI4iv",
	"glVertexAttribI4sv",
	"glVertexAttribI4ubv",
	"glVertexAttribI4ui",
	"glVertexAttribI4uiv",
	"glVertexAttribI4usv",
	"glVertexAttribIPointer",
	"glVertexAttribL1d",
	"glVertexAttribL1dv",
	"glVertexAttribL2d",
	"glVertexAttribL2dv",
	"glVertexAttribL3d",
	"glVertexAttribL3dv",
	"glVertexAttribL4d",
	"glVertexAttribL4dv",
	"glVertexAttribLPointer",
	"glVertexAttribP1ui",
	"glVertexAttribP1uiv",
	"glVertexAttribP2ui",
	"glVertexAttribP2uiv",
	"glVertexAttribP3ui",
	"glVertexAttribP3uiv",
	"glVertexAttribP4ui",
	"glVertexAttribP4uiv",
	"glVertexAttribPointer",
	"glVertexP2ui",
	"glVertexP2uiv",
	"glVertexP3ui",
	"glVertexP3uiv",
	"glVertexP4ui",
	"glVertexP4uiv",
	"glViewport",
	"glViewportArrayv",
	"glViewportIndexedf",
	"glViewportIndexedfv",
	"glWaitSync",
};



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
            culled_face;

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

    GLuint vbo;
    gldlGenBuffers_impl( 1, &vbo );
    gldlBindBuffer_impl( GL_ARRAY_BUFFER, vbo );
    gldlBufferData_impl( GL_ARRAY_BUFFER, sizeof(mesh), mesh, GL_STATIC_DRAW );

    gldlEnableVertexAttribArray_impl( pos_attrib );
    gldlDisableVertexAttribArray_impl( 1 );
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
    gldlBindBuffer_impl( GL_ARRAY_BUFFER, gldl_buffers.bound_array_b );

    // go back to previously bound texture for unit 0
    gldlBindTexture_impl( GL_TEXTURE_2D, gldl_textures.bound_textures[0] );

    // go back to previous unit
    gldlActiveTexture_impl( GL_TEXTURE0 + gldl_textures.current_unit );

    gldlDeleteBuffers_impl( 1, &vbo );
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
            for( i = 0; i < 560; ++i ) {
                int cmp = strcmp( params[0], gl_functions[i] );

                if( !cmp ) {
                    index = i;
                    break;
                }
                else if( cmp < 0 ) {
                    printf( "%s is not a valid GL function!\n", params[0] );
                    break;
                }
            }

            if( index >= 0 ) {
                int i;
                // insert function name index in next free spot
                for( i = 0; i < GLDL_FUNC_N; ++i )
                    if( 0 > break_functions[i] ) {
                        break_functions[i] = index;
                        printf( "Breakpoint %d, %s()\n", i, params[0] );
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
                    printf( "Breakpoint %s does not exist\n", params[0] );
                } else {
                    break_functions[index] = -2;
                    printf( "Breakpoint %d deleted\n", index );
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
                printf( "Delete usage : [d]elete [breakpoint_id].\nIf no breakpoint_id specified, will ask to delete all breakpoints.\n" );
            }
        }

        // print buffer data
        else if( !strcmp( cmd, "pb" ) || !strcmp( cmd, "printbuffer" ) ) {
            // check for param
            if( scan_ret < 2 ) {
                printf( "Printbuffer usage : [p]rint[b]uffer buffer_id [type_size [elem_size]].\n"\
                        "  type_size is the number of component of the type of data (default = 1).\n"\
                        "    Ex : for a vec3, specify 3 as the type_size\n"\
                        "  elem_size is the size of one value of the buffer, in bytes (default = 4).\n"\
                        "    Ex : for shorts, precise 2, for bytes, precise 1, etc..\n" );
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
                printf( "Printprogram usage : [p]rint[p]rogram program_id.\n" );
                continue;
            }

            int id = atoi( params[0] );
            PrintProgram( id );
        }

        // print shader data
        else if( !strcmp( cmd, "ps" ) || !strcmp( cmd, "printshader" ) ) {
            // check for param
            if( scan_ret != 2 ) {
                printf( "Printshader usage : [p]rint[s]hader shader_id.\n" );
                continue;
            }

            int id = atoi( params[0] );
            PrintShader( id );
        }

        // open texture visualisation window
        else if( !strcmp( cmd, "pt" ) || !strcmp( cmd, "printtexture" ) ) {
            // check for param
            if( scan_ret < 2 ) {
                printf( "Printtexture usage : [p]rint[t]exture texture_id [reverse].\n"\
                        "  reverse will reverse the texture on the Y axis.\n" );
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
                printf( "Printstate usage : [p]rint[st]ate state [param].\n"\
                        "List of states :\n"\
                        "  ACTIVE_TEXTURE_UNIT   : the currently active texture unit.\n"\
                        "  BOUND_TEXTURE [unit]  : the currently bound texture on the given unit.\n"\
                        "  BOUND_BUFFER [target] : the currently bound buffer on the given target (ARRAY_BUFFER or ELEMENT_ARRAY_BUFFER).\n"\
                        "  BOUND_PROGRAM         : the currently bound shader program.\n"\
                        "  DEPTH_TEST            : whether GL_DEPTH_TEST is on or not.\n"\
                        "  BLEND                 : whether GL_BLEND is on or not.\n"\
                        "  FACE_CULLING          : whether GL_CULL_FACE is on or not.\n"\
                        "  CULLED_FACE           : the currently culled face.\n"\
                        "  BLEND_FUNC            : the source and dest factors of the blending function.\n"\
                        "  TEXTURE_FILTER [type] : the texture filter for type (MIN or MAG).\n"\
                        "  TEXTURE_WRAP [type]   : the texture wrap for type (S or T).\n"
                      );
                continue;
            }

            // switch on state
            if( !strcmp( params[0], "ACTIVE_TEXTURE_UNIT" ) ) {
                printf( "Current texture unit : GL_TEXTURE%d.\n", gldl_textures.current_unit );
                continue;
            }
            else if( !strcmp( params[0], "BOUND_TEXTURE" ) ) {
                if( scan_ret < 3 ) {
                    printf( "Usage : [p]rint[st]ate BOUND_TEXTURE texture_unit(int).\n" ); 
                } else {
                    int unit = atoi( params[1] );
                    if( ( !unit && strcmp( params[1], "0" ) ) || unit >= 8 ) 
                        printf( "Invalid texture unit (must be integer < 8).\n" );
                    else
                        printf( "Texture bound on unit %d : %d.\n", unit, gldl_textures.bound_textures[unit] );
                }
                continue;
            }
            else if( !strcmp( params[0], "BOUND_BUFFER" ) ) {
                if( scan_ret < 3 ) {
                    printf( "Usage : [p]rint[st]ate BOUND_BUFFER target(ARRAY_BUFFER or ELEMENT_ARRAY_BUFFER).\n" );
                } else {
                    if( !strcmp( params[1], "ARRAY_BUFFER" ) )
                        printf( "Buffer bound on GL_ARRAY_BUFFER : %d.\n", gldl_buffers.bound_array_b );
                    else if( !strcmp( params[1], "ELEMENT_ARRAY_BUFFER" ) )
                        printf( "Buffer bound on GL_ELEMENT_ARRAY_BUFFER : %d.\n", gldl_buffers.bound_elem_array_b );
                    else
                        printf( "Invalid buffer array type.\n" );
                }
                continue;
            }
            else if( !strcmp( params[0], "BOUND_PROGRAM" ) ) {
                printf( "Currently used shader program : %d.\n", gldl_programs.bound_program );
                continue;
            }
            else if( !strcmp( params[0], "DEPTH_TEST" ) ) {
                printf( "GL_DEPTH_TEST is %s.\n", gldl_states.depth_test ? "on" : "off" );
                continue; 
            }
            else if( !strcmp( params[0], "BLEND" ) ) {
                printf( "GL_BLEND is %s.\n", gldl_states.blend ? "on" : "off" );
                continue; 
            }
            else if( !strcmp( params[0], "FACE_CULLING" ) ) {
                printf( "GL_CULL_FACE is %s.\n", gldl_states.face_culling ? "on" : "off" );
                continue; 
            }
            else if( !strcmp( params[0], "CULLED_FACE" ) ) {
                char face[32];

                if( gldl_states.culled_face == GL_FRONT ) strcpy( face, "GL_FRONT" );
                if( gldl_states.culled_face == GL_BACK ) strcpy( face, "GL_BACK" );
                if( gldl_states.culled_face == GL_FRONT_AND_BACK ) strcpy( face, "GL_FRONT_AND_BACK" );

                printf( "The culled face is %s.\n", face );
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

                printf( "Source factor is %s. Destination factor is %s.\n", sfactor, dfactor );
                continue;
            }
            else if( !strcmp( params[0], "TEXTURE_FILTER" ) ) {
                if( scan_ret < 3 ) {
                    printf( "Usage : [p]rint[st]ate TEXTURE_FILTER filter(MAG or MIN).\n" );
                } else {
                    int type;
                    char filter[32];
                    if( !strcmp( params[1], "MIN" ) )
                        type = gldl_states.min_filter;
                    else if( !strcmp( params[1], "MAG" ) ) 
                        type = gldl_states.mag_filter;
                    else {
                        printf( "Invalid texture filter type.\n" );
                        continue;
                    }

                    if( type == GL_NEAREST ) strcpy( filter, "GL_NEAREST" );
                    if( type == GL_LINEAR ) strcpy( filter, "GL_LINEAR" );
                    if( type == GL_NEAREST_MIPMAP_NEAREST ) strcpy( filter, "GL_NEAREST_MIPMAP_NEAREST" );
                    if( type == GL_LINEAR_MIPMAP_NEAREST ) strcpy( filter, "GL_LINEAR_MIPMAP_NEAREST" );
                    if( type == GL_NEAREST_MIPMAP_LINEAR ) strcpy( filter, "GL_NEAREST_MIPMAP_LINEAR" );
                    if( type == GL_LINEAR_MIPMAP_LINEAR ) strcpy( filter, "GL_LINEAR_MIPMAP_LINEAR" );

                    printf( "%s texture filter : %s.\n", type == gldl_states.min_filter ? "Min" : "Mag", filter );
                }
                continue; 
            }
            else if( !strcmp( params[0], "TEXTURE_WRAP" ) ) {
                if( scan_ret < 3 ) {
                    printf( "Usage : [p]rint[st]ate TEXTURE_WRAP wrap(S or T).\n" );
                } else {
                    int type;
                    char wrap[32];
                    if( !strcmp( params[1], "S" ) )
                        type = gldl_states.wrap_s;
                    else if( !strcmp( params[1], "T" ) ) 
                        type = gldl_states.wrap_t;
                    else {
                        printf( "Invalid texture filter type.\n" );
                        continue;
                    }
                    
                    if( type == GL_CLAMP_TO_EDGE ) strcpy( wrap, "GL_CLAMP_TO_EDGE" );
                    if( type == GL_CLAMP_TO_BORDER ) strcpy( wrap, "GL_CLAMP_TO_BORDER" );
                    if( type == GL_MIRRORED_REPEAT ) strcpy( wrap, "GL_MIRRORED_REPEAT" );
                    if( type == GL_REPEAT ) strcpy( wrap, "GL_REPEAT" );

                    printf( "Texture wrap_%s : %s.\n", type == gldl_states.wrap_s ? "s" : "t", wrap );
                }
                continue;
            }
            else
                printf( "Invalid state name.\n" );
        }

        // print help
        else if( !strcmp( cmd, "h" ) || !strcmp( cmd, "help" ) ) {
            printf( "GLDL commands :\n\n" \
                    "  [c]ontinue         - Continue the execution, until the next breakpoint.\n" \
                    "  [n]ext             - Continue the execution, until the next GL function.\n" \
                    "  [b]reak            - Sets a breakpoint on a GL function.\n" \
                    "  [d]elete           - Delete a breakpoint.\n" \
                    "  [q]uit             - Quit the program.\n" \
                    "  [l]ist             - List all breakpoints.\n" \
                    "  [l]ist[b]uffers    - List all GL buffers.\n" \
                    "  [l]ist[s]haders    - List all GL shaders.\n" \
                    "  [l]ist[p]rograms   - List all GL programs.\n" \
                    "  [l]ist[t]extures   - List all GL textures.\n" \
                    "  [p]rint[b]uffer    - Print the given GL buffer.\n" \
                    "  [p]rint[s]hader    - Print the given GL shader source.\n" \
                    "  [p]rint[p]rogram   - Print the given GL shader program.\n" \
                    "  [p]rint[t]exture   - Display the given GL texture.\n" \
                    "  [p]rint[st]ate     - Print the given GL state.\n\n" \
                    "Using the commands without arguments will in some cases give additional informations on the usage.\n\n"
                  );
            continue;
        }

        // quit program (violently)
        else if( !strcmp( cmd, "q" ) || !strcmp( cmd, "quit" ) ) {
            // get confirmation
            char str[4];
            char c;

            printf( "GLDL Debugging session active.\n" );

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
            printf( "Invalid command \"%s\". Try \"help\"\n", cmd );
            nomatch = 0;
        }
    }
}


// Load all GL procedures implementation
static void LoadProcs() {
	gldlCullFace_impl = (PFNGLCULLFACEPROC) GetProc( "glCullFace" );
	gldlFrontFace_impl = (PFNGLFRONTFACEPROC) GetProc( "glFrontFace" );
	gldlHint_impl = (PFNGLHINTPROC) GetProc( "glHint" );
	gldlLineWidth_impl = (PFNGLLINEWIDTHPROC) GetProc( "glLineWidth" );
	gldlPointSize_impl = (PFNGLPOINTSIZEPROC) GetProc( "glPointSize" );
	gldlPolygonMode_impl = (PFNGLPOLYGONMODEPROC) GetProc( "glPolygonMode" );
	gldlScissor_impl = (PFNGLSCISSORPROC) GetProc( "glScissor" );
	gldlTexParameterf_impl = (PFNGLTEXPARAMETERFPROC) GetProc( "glTexParameterf" );
	gldlTexParameterfv_impl = (PFNGLTEXPARAMETERFVPROC) GetProc( "glTexParameterfv" );
	gldlTexParameteri_impl = (PFNGLTEXPARAMETERIPROC) GetProc( "glTexParameteri" );
	gldlTexParameteriv_impl = (PFNGLTEXPARAMETERIVPROC) GetProc( "glTexParameteriv" );
	gldlTexImage1D_impl = (PFNGLTEXIMAGE1DPROC) GetProc( "glTexImage1D" );
	gldlTexImage2D_impl = (PFNGLTEXIMAGE2DPROC) GetProc( "glTexImage2D" );
	gldlDrawBuffer_impl = (PFNGLDRAWBUFFERPROC) GetProc( "glDrawBuffer" );
	gldlClear_impl = (PFNGLCLEARPROC) GetProc( "glClear" );
	gldlClearColor_impl = (PFNGLCLEARCOLORPROC) GetProc( "glClearColor" );
	gldlClearStencil_impl = (PFNGLCLEARSTENCILPROC) GetProc( "glClearStencil" );
	gldlClearDepth_impl = (PFNGLCLEARDEPTHPROC) GetProc( "glClearDepth" );
	gldlStencilMask_impl = (PFNGLSTENCILMASKPROC) GetProc( "glStencilMask" );
	gldlColorMask_impl = (PFNGLCOLORMASKPROC) GetProc( "glColorMask" );
	gldlDepthMask_impl = (PFNGLDEPTHMASKPROC) GetProc( "glDepthMask" );
	gldlDisable_impl = (PFNGLDISABLEPROC) GetProc( "glDisable" );
	gldlEnable_impl = (PFNGLENABLEPROC) GetProc( "glEnable" );
	gldlFinish_impl = (PFNGLFINISHPROC) GetProc( "glFinish" );
	gldlFlush_impl = (PFNGLFLUSHPROC) GetProc( "glFlush" );
	gldlBlendFunc_impl = (PFNGLBLENDFUNCPROC) GetProc( "glBlendFunc" );
	gldlLogicOp_impl = (PFNGLLOGICOPPROC) GetProc( "glLogicOp" );
	gldlStencilFunc_impl = (PFNGLSTENCILFUNCPROC) GetProc( "glStencilFunc" );
	gldlStencilOp_impl = (PFNGLSTENCILOPPROC) GetProc( "glStencilOp" );
	gldlDepthFunc_impl = (PFNGLDEPTHFUNCPROC) GetProc( "glDepthFunc" );
	gldlPixelStoref_impl = (PFNGLPIXELSTOREFPROC) GetProc( "glPixelStoref" );
	gldlPixelStorei_impl = (PFNGLPIXELSTOREIPROC) GetProc( "glPixelStorei" );
	gldlReadBuffer_impl = (PFNGLREADBUFFERPROC) GetProc( "glReadBuffer" );
	gldlReadPixels_impl = (PFNGLREADPIXELSPROC) GetProc( "glReadPixels" );
	gldlGetBooleanv_impl = (PFNGLGETBOOLEANVPROC) GetProc( "glGetBooleanv" );
	gldlGetDoublev_impl = (PFNGLGETDOUBLEVPROC) GetProc( "glGetDoublev" );
	gldlGetError_impl = (PFNGLGETERRORPROC) GetProc( "glGetError" );
	gldlGetFloatv_impl = (PFNGLGETFLOATVPROC) GetProc( "glGetFloatv" );
	gldlGetIntegerv_impl = (PFNGLGETINTEGERVPROC) GetProc( "glGetIntegerv" );
	gldlGetString_impl = (PFNGLGETSTRINGPROC) GetProc( "glGetString" );
	gldlGetTexImage_impl = (PFNGLGETTEXIMAGEPROC) GetProc( "glGetTexImage" );
	gldlGetTexParameterfv_impl = (PFNGLGETTEXPARAMETERFVPROC) GetProc( "glGetTexParameterfv" );
	gldlGetTexParameteriv_impl = (PFNGLGETTEXPARAMETERIVPROC) GetProc( "glGetTexParameteriv" );
	gldlGetTexLevelParameterfv_impl = (PFNGLGETTEXLEVELPARAMETERFVPROC) GetProc( "glGetTexLevelParameterfv" );
	gldlGetTexLevelParameteriv_impl = (PFNGLGETTEXLEVELPARAMETERIVPROC) GetProc( "glGetTexLevelParameteriv" );
	gldlIsEnabled_impl = (PFNGLISENABLEDPROC) GetProc( "glIsEnabled" );
	gldlDepthRange_impl = (PFNGLDEPTHRANGEPROC) GetProc( "glDepthRange" );
	gldlViewport_impl = (PFNGLVIEWPORTPROC) GetProc( "glViewport" );
	gldlDrawArrays_impl = (PFNGLDRAWARRAYSPROC) GetProc( "glDrawArrays" );
	gldlDrawElements_impl = (PFNGLDRAWELEMENTSPROC) GetProc( "glDrawElements" );
	gldlGetPointerv_impl = (PFNGLGETPOINTERVPROC) GetProc( "glGetPointerv" );
	gldlPolygonOffset_impl = (PFNGLPOLYGONOFFSETPROC) GetProc( "glPolygonOffset" );
	gldlCopyTexImage1D_impl = (PFNGLCOPYTEXIMAGE1DPROC) GetProc( "glCopyTexImage1D" );
	gldlCopyTexImage2D_impl = (PFNGLCOPYTEXIMAGE2DPROC) GetProc( "glCopyTexImage2D" );
	gldlCopyTexSubImage1D_impl = (PFNGLCOPYTEXSUBIMAGE1DPROC) GetProc( "glCopyTexSubImage1D" );
	gldlCopyTexSubImage2D_impl = (PFNGLCOPYTEXSUBIMAGE2DPROC) GetProc( "glCopyTexSubImage2D" );
	gldlTexSubImage1D_impl = (PFNGLTEXSUBIMAGE1DPROC) GetProc( "glTexSubImage1D" );
	gldlTexSubImage2D_impl = (PFNGLTEXSUBIMAGE2DPROC) GetProc( "glTexSubImage2D" );
	gldlBindTexture_impl = (PFNGLBINDTEXTUREPROC) GetProc( "glBindTexture" );
	gldlDeleteTextures_impl = (PFNGLDELETETEXTURESPROC) GetProc( "glDeleteTextures" );
	gldlGenTextures_impl = (PFNGLGENTEXTURESPROC) GetProc( "glGenTextures" );
	gldlIsTexture_impl = (PFNGLISTEXTUREPROC) GetProc( "glIsTexture" );
	gldlBlendColor_impl = (PFNGLBLENDCOLORPROC) GetProc( "glBlendColor" );
	gldlBlendEquation_impl = (PFNGLBLENDEQUATIONPROC) GetProc( "glBlendEquation" );
	gldlDrawRangeElements_impl = (PFNGLDRAWRANGEELEMENTSPROC) GetProc( "glDrawRangeElements" );
	gldlTexImage3D_impl = (PFNGLTEXIMAGE3DPROC) GetProc( "glTexImage3D" );
	gldlTexSubImage3D_impl = (PFNGLTEXSUBIMAGE3DPROC) GetProc( "glTexSubImage3D" );
	gldlCopyTexSubImage3D_impl = (PFNGLCOPYTEXSUBIMAGE3DPROC) GetProc( "glCopyTexSubImage3D" );
	gldlActiveTexture_impl = (PFNGLACTIVETEXTUREPROC) GetProc( "glActiveTexture" );
	gldlSampleCoverage_impl = (PFNGLSAMPLECOVERAGEPROC) GetProc( "glSampleCoverage" );
	gldlCompressedTexImage3D_impl = (PFNGLCOMPRESSEDTEXIMAGE3DPROC) GetProc( "glCompressedTexImage3D" );
	gldlCompressedTexImage2D_impl = (PFNGLCOMPRESSEDTEXIMAGE2DPROC) GetProc( "glCompressedTexImage2D" );
	gldlCompressedTexImage1D_impl = (PFNGLCOMPRESSEDTEXIMAGE1DPROC) GetProc( "glCompressedTexImage1D" );
	gldlCompressedTexSubImage3D_impl = (PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC) GetProc( "glCompressedTexSubImage3D" );
	gldlCompressedTexSubImage2D_impl = (PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC) GetProc( "glCompressedTexSubImage2D" );
	gldlCompressedTexSubImage1D_impl = (PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC) GetProc( "glCompressedTexSubImage1D" );
	gldlGetCompressedTexImage_impl = (PFNGLGETCOMPRESSEDTEXIMAGEPROC) GetProc( "glGetCompressedTexImage" );
	gldlBlendFuncSeparate_impl = (PFNGLBLENDFUNCSEPARATEPROC) GetProc( "glBlendFuncSeparate" );
	gldlMultiDrawArrays_impl = (PFNGLMULTIDRAWARRAYSPROC) GetProc( "glMultiDrawArrays" );
	gldlMultiDrawElements_impl = (PFNGLMULTIDRAWELEMENTSPROC) GetProc( "glMultiDrawElements" );
	gldlPointParameterf_impl = (PFNGLPOINTPARAMETERFPROC) GetProc( "glPointParameterf" );
	gldlPointParameterfv_impl = (PFNGLPOINTPARAMETERFVPROC) GetProc( "glPointParameterfv" );
	gldlPointParameteri_impl = (PFNGLPOINTPARAMETERIPROC) GetProc( "glPointParameteri" );
	gldlPointParameteriv_impl = (PFNGLPOINTPARAMETERIVPROC) GetProc( "glPointParameteriv" );
	gldlGenQueries_impl = (PFNGLGENQUERIESPROC) GetProc( "glGenQueries" );
	gldlDeleteQueries_impl = (PFNGLDELETEQUERIESPROC) GetProc( "glDeleteQueries" );
	gldlIsQuery_impl = (PFNGLISQUERYPROC) GetProc( "glIsQuery" );
	gldlBeginQuery_impl = (PFNGLBEGINQUERYPROC) GetProc( "glBeginQuery" );
	gldlEndQuery_impl = (PFNGLENDQUERYPROC) GetProc( "glEndQuery" );
	gldlGetQueryiv_impl = (PFNGLGETQUERYIVPROC) GetProc( "glGetQueryiv" );
	gldlGetQueryObjectiv_impl = (PFNGLGETQUERYOBJECTIVPROC) GetProc( "glGetQueryObjectiv" );
	gldlGetQueryObjectuiv_impl = (PFNGLGETQUERYOBJECTUIVPROC) GetProc( "glGetQueryObjectuiv" );
	gldlBindBuffer_impl = (PFNGLBINDBUFFERPROC) GetProc( "glBindBuffer" );
	gldlDeleteBuffers_impl = (PFNGLDELETEBUFFERSPROC) GetProc( "glDeleteBuffers" );
	gldlGenBuffers_impl = (PFNGLGENBUFFERSPROC) GetProc( "glGenBuffers" );
	gldlIsBuffer_impl = (PFNGLISBUFFERPROC) GetProc( "glIsBuffer" );
	gldlBufferData_impl = (PFNGLBUFFERDATAPROC) GetProc( "glBufferData" );
	gldlBufferSubData_impl = (PFNGLBUFFERSUBDATAPROC) GetProc( "glBufferSubData" );
	gldlGetBufferSubData_impl = (PFNGLGETBUFFERSUBDATAPROC) GetProc( "glGetBufferSubData" );
	gldlMapBuffer_impl = (PFNGLMAPBUFFERPROC) GetProc( "glMapBuffer" );
	gldlUnmapBuffer_impl = (PFNGLUNMAPBUFFERPROC) GetProc( "glUnmapBuffer" );
	gldlGetBufferParameteriv_impl = (PFNGLGETBUFFERPARAMETERIVPROC) GetProc( "glGetBufferParameteriv" );
	gldlGetBufferPointerv_impl = (PFNGLGETBUFFERPOINTERVPROC) GetProc( "glGetBufferPointerv" );
	gldlBlendEquationSeparate_impl = (PFNGLBLENDEQUATIONSEPARATEPROC) GetProc( "glBlendEquationSeparate" );
	gldlDrawBuffers_impl = (PFNGLDRAWBUFFERSPROC) GetProc( "glDrawBuffers" );
	gldlStencilOpSeparate_impl = (PFNGLSTENCILOPSEPARATEPROC) GetProc( "glStencilOpSeparate" );
	gldlStencilFuncSeparate_impl = (PFNGLSTENCILFUNCSEPARATEPROC) GetProc( "glStencilFuncSeparate" );
	gldlStencilMaskSeparate_impl = (PFNGLSTENCILMASKSEPARATEPROC) GetProc( "glStencilMaskSeparate" );
	gldlAttachShader_impl = (PFNGLATTACHSHADERPROC) GetProc( "glAttachShader" );
	gldlBindAttribLocation_impl = (PFNGLBINDATTRIBLOCATIONPROC) GetProc( "glBindAttribLocation" );
	gldlCompileShader_impl = (PFNGLCOMPILESHADERPROC) GetProc( "glCompileShader" );
	gldlCreateProgram_impl = (PFNGLCREATEPROGRAMPROC) GetProc( "glCreateProgram" );
	gldlCreateShader_impl = (PFNGLCREATESHADERPROC) GetProc( "glCreateShader" );
	gldlDeleteProgram_impl = (PFNGLDELETEPROGRAMPROC) GetProc( "glDeleteProgram" );
	gldlDeleteShader_impl = (PFNGLDELETESHADERPROC) GetProc( "glDeleteShader" );
	gldlDetachShader_impl = (PFNGLDETACHSHADERPROC) GetProc( "glDetachShader" );
	gldlDisableVertexAttribArray_impl = (PFNGLDISABLEVERTEXATTRIBARRAYPROC) GetProc( "glDisableVertexAttribArray" );
	gldlEnableVertexAttribArray_impl = (PFNGLENABLEVERTEXATTRIBARRAYPROC) GetProc( "glEnableVertexAttribArray" );
	gldlGetActiveAttrib_impl = (PFNGLGETACTIVEATTRIBPROC) GetProc( "glGetActiveAttrib" );
	gldlGetActiveUniform_impl = (PFNGLGETACTIVEUNIFORMPROC) GetProc( "glGetActiveUniform" );
	gldlGetAttachedShaders_impl = (PFNGLGETATTACHEDSHADERSPROC) GetProc( "glGetAttachedShaders" );
	gldlGetAttribLocation_impl = (PFNGLGETATTRIBLOCATIONPROC) GetProc( "glGetAttribLocation" );
	gldlGetProgramiv_impl = (PFNGLGETPROGRAMIVPROC) GetProc( "glGetProgramiv" );
	gldlGetProgramInfoLog_impl = (PFNGLGETPROGRAMINFOLOGPROC) GetProc( "glGetProgramInfoLog" );
	gldlGetShaderiv_impl = (PFNGLGETSHADERIVPROC) GetProc( "glGetShaderiv" );
	gldlGetShaderInfoLog_impl = (PFNGLGETSHADERINFOLOGPROC) GetProc( "glGetShaderInfoLog" );
	gldlGetShaderSource_impl = (PFNGLGETSHADERSOURCEPROC) GetProc( "glGetShaderSource" );
	gldlGetUniformLocation_impl = (PFNGLGETUNIFORMLOCATIONPROC) GetProc( "glGetUniformLocation" );
	gldlGetUniformfv_impl = (PFNGLGETUNIFORMFVPROC) GetProc( "glGetUniformfv" );
	gldlGetUniformiv_impl = (PFNGLGETUNIFORMIVPROC) GetProc( "glGetUniformiv" );
	gldlGetVertexAttribdv_impl = (PFNGLGETVERTEXATTRIBDVPROC) GetProc( "glGetVertexAttribdv" );
	gldlGetVertexAttribfv_impl = (PFNGLGETVERTEXATTRIBFVPROC) GetProc( "glGetVertexAttribfv" );
	gldlGetVertexAttribiv_impl = (PFNGLGETVERTEXATTRIBIVPROC) GetProc( "glGetVertexAttribiv" );
	gldlGetVertexAttribPointerv_impl = (PFNGLGETVERTEXATTRIBPOINTERVPROC) GetProc( "glGetVertexAttribPointerv" );
	gldlIsProgram_impl = (PFNGLISPROGRAMPROC) GetProc( "glIsProgram" );
	gldlIsShader_impl = (PFNGLISSHADERPROC) GetProc( "glIsShader" );
	gldlLinkProgram_impl = (PFNGLLINKPROGRAMPROC) GetProc( "glLinkProgram" );
	gldlShaderSource_impl = (PFNGLSHADERSOURCEPROC) GetProc( "glShaderSource" );
	gldlUseProgram_impl = (PFNGLUSEPROGRAMPROC) GetProc( "glUseProgram" );
	gldlUniform1f_impl = (PFNGLUNIFORM1FPROC) GetProc( "glUniform1f" );
	gldlUniform2f_impl = (PFNGLUNIFORM2FPROC) GetProc( "glUniform2f" );
	gldlUniform3f_impl = (PFNGLUNIFORM3FPROC) GetProc( "glUniform3f" );
	gldlUniform4f_impl = (PFNGLUNIFORM4FPROC) GetProc( "glUniform4f" );
	gldlUniform1i_impl = (PFNGLUNIFORM1IPROC) GetProc( "glUniform1i" );
	gldlUniform2i_impl = (PFNGLUNIFORM2IPROC) GetProc( "glUniform2i" );
	gldlUniform3i_impl = (PFNGLUNIFORM3IPROC) GetProc( "glUniform3i" );
	gldlUniform4i_impl = (PFNGLUNIFORM4IPROC) GetProc( "glUniform4i" );
	gldlUniform1fv_impl = (PFNGLUNIFORM1FVPROC) GetProc( "glUniform1fv" );
	gldlUniform2fv_impl = (PFNGLUNIFORM2FVPROC) GetProc( "glUniform2fv" );
	gldlUniform3fv_impl = (PFNGLUNIFORM3FVPROC) GetProc( "glUniform3fv" );
	gldlUniform4fv_impl = (PFNGLUNIFORM4FVPROC) GetProc( "glUniform4fv" );
	gldlUniform1iv_impl = (PFNGLUNIFORM1IVPROC) GetProc( "glUniform1iv" );
	gldlUniform2iv_impl = (PFNGLUNIFORM2IVPROC) GetProc( "glUniform2iv" );
	gldlUniform3iv_impl = (PFNGLUNIFORM3IVPROC) GetProc( "glUniform3iv" );
	gldlUniform4iv_impl = (PFNGLUNIFORM4IVPROC) GetProc( "glUniform4iv" );
	gldlUniformMatrix2fv_impl = (PFNGLUNIFORMMATRIX2FVPROC) GetProc( "glUniformMatrix2fv" );
	gldlUniformMatrix3fv_impl = (PFNGLUNIFORMMATRIX3FVPROC) GetProc( "glUniformMatrix3fv" );
	gldlUniformMatrix4fv_impl = (PFNGLUNIFORMMATRIX4FVPROC) GetProc( "glUniformMatrix4fv" );
	gldlValidateProgram_impl = (PFNGLVALIDATEPROGRAMPROC) GetProc( "glValidateProgram" );
	gldlVertexAttrib1d_impl = (PFNGLVERTEXATTRIB1DPROC) GetProc( "glVertexAttrib1d" );
	gldlVertexAttrib1dv_impl = (PFNGLVERTEXATTRIB1DVPROC) GetProc( "glVertexAttrib1dv" );
	gldlVertexAttrib1f_impl = (PFNGLVERTEXATTRIB1FPROC) GetProc( "glVertexAttrib1f" );
	gldlVertexAttrib1fv_impl = (PFNGLVERTEXATTRIB1FVPROC) GetProc( "glVertexAttrib1fv" );
	gldlVertexAttrib1s_impl = (PFNGLVERTEXATTRIB1SPROC) GetProc( "glVertexAttrib1s" );
	gldlVertexAttrib1sv_impl = (PFNGLVERTEXATTRIB1SVPROC) GetProc( "glVertexAttrib1sv" );
	gldlVertexAttrib2d_impl = (PFNGLVERTEXATTRIB2DPROC) GetProc( "glVertexAttrib2d" );
	gldlVertexAttrib2dv_impl = (PFNGLVERTEXATTRIB2DVPROC) GetProc( "glVertexAttrib2dv" );
	gldlVertexAttrib2f_impl = (PFNGLVERTEXATTRIB2FPROC) GetProc( "glVertexAttrib2f" );
	gldlVertexAttrib2fv_impl = (PFNGLVERTEXATTRIB2FVPROC) GetProc( "glVertexAttrib2fv" );
	gldlVertexAttrib2s_impl = (PFNGLVERTEXATTRIB2SPROC) GetProc( "glVertexAttrib2s" );
	gldlVertexAttrib2sv_impl = (PFNGLVERTEXATTRIB2SVPROC) GetProc( "glVertexAttrib2sv" );
	gldlVertexAttrib3d_impl = (PFNGLVERTEXATTRIB3DPROC) GetProc( "glVertexAttrib3d" );
	gldlVertexAttrib3dv_impl = (PFNGLVERTEXATTRIB3DVPROC) GetProc( "glVertexAttrib3dv" );
	gldlVertexAttrib3f_impl = (PFNGLVERTEXATTRIB3FPROC) GetProc( "glVertexAttrib3f" );
	gldlVertexAttrib3fv_impl = (PFNGLVERTEXATTRIB3FVPROC) GetProc( "glVertexAttrib3fv" );
	gldlVertexAttrib3s_impl = (PFNGLVERTEXATTRIB3SPROC) GetProc( "glVertexAttrib3s" );
	gldlVertexAttrib3sv_impl = (PFNGLVERTEXATTRIB3SVPROC) GetProc( "glVertexAttrib3sv" );
	gldlVertexAttrib4Nbv_impl = (PFNGLVERTEXATTRIB4NBVPROC) GetProc( "glVertexAttrib4Nbv" );
	gldlVertexAttrib4Niv_impl = (PFNGLVERTEXATTRIB4NIVPROC) GetProc( "glVertexAttrib4Niv" );
	gldlVertexAttrib4Nsv_impl = (PFNGLVERTEXATTRIB4NSVPROC) GetProc( "glVertexAttrib4Nsv" );
	gldlVertexAttrib4Nub_impl = (PFNGLVERTEXATTRIB4NUBPROC) GetProc( "glVertexAttrib4Nub" );
	gldlVertexAttrib4Nubv_impl = (PFNGLVERTEXATTRIB4NUBVPROC) GetProc( "glVertexAttrib4Nubv" );
	gldlVertexAttrib4Nuiv_impl = (PFNGLVERTEXATTRIB4NUIVPROC) GetProc( "glVertexAttrib4Nuiv" );
	gldlVertexAttrib4Nusv_impl = (PFNGLVERTEXATTRIB4NUSVPROC) GetProc( "glVertexAttrib4Nusv" );
	gldlVertexAttrib4bv_impl = (PFNGLVERTEXATTRIB4BVPROC) GetProc( "glVertexAttrib4bv" );
	gldlVertexAttrib4d_impl = (PFNGLVERTEXATTRIB4DPROC) GetProc( "glVertexAttrib4d" );
	gldlVertexAttrib4dv_impl = (PFNGLVERTEXATTRIB4DVPROC) GetProc( "glVertexAttrib4dv" );
	gldlVertexAttrib4f_impl = (PFNGLVERTEXATTRIB4FPROC) GetProc( "glVertexAttrib4f" );
	gldlVertexAttrib4fv_impl = (PFNGLVERTEXATTRIB4FVPROC) GetProc( "glVertexAttrib4fv" );
	gldlVertexAttrib4iv_impl = (PFNGLVERTEXATTRIB4IVPROC) GetProc( "glVertexAttrib4iv" );
	gldlVertexAttrib4s_impl = (PFNGLVERTEXATTRIB4SPROC) GetProc( "glVertexAttrib4s" );
	gldlVertexAttrib4sv_impl = (PFNGLVERTEXATTRIB4SVPROC) GetProc( "glVertexAttrib4sv" );
	gldlVertexAttrib4ubv_impl = (PFNGLVERTEXATTRIB4UBVPROC) GetProc( "glVertexAttrib4ubv" );
	gldlVertexAttrib4uiv_impl = (PFNGLVERTEXATTRIB4UIVPROC) GetProc( "glVertexAttrib4uiv" );
	gldlVertexAttrib4usv_impl = (PFNGLVERTEXATTRIB4USVPROC) GetProc( "glVertexAttrib4usv" );
	gldlVertexAttribPointer_impl = (PFNGLVERTEXATTRIBPOINTERPROC) GetProc( "glVertexAttribPointer" );
	gldlUniformMatrix2x3fv_impl = (PFNGLUNIFORMMATRIX2X3FVPROC) GetProc( "glUniformMatrix2x3fv" );
	gldlUniformMatrix3x2fv_impl = (PFNGLUNIFORMMATRIX3X2FVPROC) GetProc( "glUniformMatrix3x2fv" );
	gldlUniformMatrix2x4fv_impl = (PFNGLUNIFORMMATRIX2X4FVPROC) GetProc( "glUniformMatrix2x4fv" );
	gldlUniformMatrix4x2fv_impl = (PFNGLUNIFORMMATRIX4X2FVPROC) GetProc( "glUniformMatrix4x2fv" );
	gldlUniformMatrix3x4fv_impl = (PFNGLUNIFORMMATRIX3X4FVPROC) GetProc( "glUniformMatrix3x4fv" );
	gldlUniformMatrix4x3fv_impl = (PFNGLUNIFORMMATRIX4X3FVPROC) GetProc( "glUniformMatrix4x3fv" );
	gldlColorMaski_impl = (PFNGLCOLORMASKIPROC) GetProc( "glColorMaski" );
	gldlGetBooleani_v_impl = (PFNGLGETBOOLEANI_VPROC) GetProc( "glGetBooleani_v" );
	gldlGetIntegeri_v_impl = (PFNGLGETINTEGERI_VPROC) GetProc( "glGetIntegeri_v" );
	gldlEnablei_impl = (PFNGLENABLEIPROC) GetProc( "glEnablei" );
	gldlDisablei_impl = (PFNGLDISABLEIPROC) GetProc( "glDisablei" );
	gldlIsEnabledi_impl = (PFNGLISENABLEDIPROC) GetProc( "glIsEnabledi" );
	gldlBeginTransformFeedback_impl = (PFNGLBEGINTRANSFORMFEEDBACKPROC) GetProc( "glBeginTransformFeedback" );
	gldlEndTransformFeedback_impl = (PFNGLENDTRANSFORMFEEDBACKPROC) GetProc( "glEndTransformFeedback" );
	gldlBindBufferRange_impl = (PFNGLBINDBUFFERRANGEPROC) GetProc( "glBindBufferRange" );
	gldlBindBufferBase_impl = (PFNGLBINDBUFFERBASEPROC) GetProc( "glBindBufferBase" );
	gldlTransformFeedbackVaryings_impl = (PFNGLTRANSFORMFEEDBACKVARYINGSPROC) GetProc( "glTransformFeedbackVaryings" );
	gldlGetTransformFeedbackVarying_impl = (PFNGLGETTRANSFORMFEEDBACKVARYINGPROC) GetProc( "glGetTransformFeedbackVarying" );
	gldlClampColor_impl = (PFNGLCLAMPCOLORPROC) GetProc( "glClampColor" );
	gldlBeginConditionalRender_impl = (PFNGLBEGINCONDITIONALRENDERPROC) GetProc( "glBeginConditionalRender" );
	gldlEndConditionalRender_impl = (PFNGLENDCONDITIONALRENDERPROC) GetProc( "glEndConditionalRender" );
	gldlVertexAttribIPointer_impl = (PFNGLVERTEXATTRIBIPOINTERPROC) GetProc( "glVertexAttribIPointer" );
	gldlGetVertexAttribIiv_impl = (PFNGLGETVERTEXATTRIBIIVPROC) GetProc( "glGetVertexAttribIiv" );
	gldlGetVertexAttribIuiv_impl = (PFNGLGETVERTEXATTRIBIUIVPROC) GetProc( "glGetVertexAttribIuiv" );
	gldlVertexAttribI1i_impl = (PFNGLVERTEXATTRIBI1IPROC) GetProc( "glVertexAttribI1i" );
	gldlVertexAttribI2i_impl = (PFNGLVERTEXATTRIBI2IPROC) GetProc( "glVertexAttribI2i" );
	gldlVertexAttribI3i_impl = (PFNGLVERTEXATTRIBI3IPROC) GetProc( "glVertexAttribI3i" );
	gldlVertexAttribI4i_impl = (PFNGLVERTEXATTRIBI4IPROC) GetProc( "glVertexAttribI4i" );
	gldlVertexAttribI1ui_impl = (PFNGLVERTEXATTRIBI1UIPROC) GetProc( "glVertexAttribI1ui" );
	gldlVertexAttribI2ui_impl = (PFNGLVERTEXATTRIBI2UIPROC) GetProc( "glVertexAttribI2ui" );
	gldlVertexAttribI3ui_impl = (PFNGLVERTEXATTRIBI3UIPROC) GetProc( "glVertexAttribI3ui" );
	gldlVertexAttribI4ui_impl = (PFNGLVERTEXATTRIBI4UIPROC) GetProc( "glVertexAttribI4ui" );
	gldlVertexAttribI1iv_impl = (PFNGLVERTEXATTRIBI1IVPROC) GetProc( "glVertexAttribI1iv" );
	gldlVertexAttribI2iv_impl = (PFNGLVERTEXATTRIBI2IVPROC) GetProc( "glVertexAttribI2iv" );
	gldlVertexAttribI3iv_impl = (PFNGLVERTEXATTRIBI3IVPROC) GetProc( "glVertexAttribI3iv" );
	gldlVertexAttribI4iv_impl = (PFNGLVERTEXATTRIBI4IVPROC) GetProc( "glVertexAttribI4iv" );
	gldlVertexAttribI1uiv_impl = (PFNGLVERTEXATTRIBI1UIVPROC) GetProc( "glVertexAttribI1uiv" );
	gldlVertexAttribI2uiv_impl = (PFNGLVERTEXATTRIBI2UIVPROC) GetProc( "glVertexAttribI2uiv" );
	gldlVertexAttribI3uiv_impl = (PFNGLVERTEXATTRIBI3UIVPROC) GetProc( "glVertexAttribI3uiv" );
	gldlVertexAttribI4uiv_impl = (PFNGLVERTEXATTRIBI4UIVPROC) GetProc( "glVertexAttribI4uiv" );
	gldlVertexAttribI4bv_impl = (PFNGLVERTEXATTRIBI4BVPROC) GetProc( "glVertexAttribI4bv" );
	gldlVertexAttribI4sv_impl = (PFNGLVERTEXATTRIBI4SVPROC) GetProc( "glVertexAttribI4sv" );
	gldlVertexAttribI4ubv_impl = (PFNGLVERTEXATTRIBI4UBVPROC) GetProc( "glVertexAttribI4ubv" );
	gldlVertexAttribI4usv_impl = (PFNGLVERTEXATTRIBI4USVPROC) GetProc( "glVertexAttribI4usv" );
	gldlGetUniformuiv_impl = (PFNGLGETUNIFORMUIVPROC) GetProc( "glGetUniformuiv" );
	gldlBindFragDataLocation_impl = (PFNGLBINDFRAGDATALOCATIONPROC) GetProc( "glBindFragDataLocation" );
	gldlGetFragDataLocation_impl = (PFNGLGETFRAGDATALOCATIONPROC) GetProc( "glGetFragDataLocation" );
	gldlUniform1ui_impl = (PFNGLUNIFORM1UIPROC) GetProc( "glUniform1ui" );
	gldlUniform2ui_impl = (PFNGLUNIFORM2UIPROC) GetProc( "glUniform2ui" );
	gldlUniform3ui_impl = (PFNGLUNIFORM3UIPROC) GetProc( "glUniform3ui" );
	gldlUniform4ui_impl = (PFNGLUNIFORM4UIPROC) GetProc( "glUniform4ui" );
	gldlUniform1uiv_impl = (PFNGLUNIFORM1UIVPROC) GetProc( "glUniform1uiv" );
	gldlUniform2uiv_impl = (PFNGLUNIFORM2UIVPROC) GetProc( "glUniform2uiv" );
	gldlUniform3uiv_impl = (PFNGLUNIFORM3UIVPROC) GetProc( "glUniform3uiv" );
	gldlUniform4uiv_impl = (PFNGLUNIFORM4UIVPROC) GetProc( "glUniform4uiv" );
	gldlTexParameterIiv_impl = (PFNGLTEXPARAMETERIIVPROC) GetProc( "glTexParameterIiv" );
	gldlTexParameterIuiv_impl = (PFNGLTEXPARAMETERIUIVPROC) GetProc( "glTexParameterIuiv" );
	gldlGetTexParameterIiv_impl = (PFNGLGETTEXPARAMETERIIVPROC) GetProc( "glGetTexParameterIiv" );
	gldlGetTexParameterIuiv_impl = (PFNGLGETTEXPARAMETERIUIVPROC) GetProc( "glGetTexParameterIuiv" );
	gldlClearBufferiv_impl = (PFNGLCLEARBUFFERIVPROC) GetProc( "glClearBufferiv" );
	gldlClearBufferuiv_impl = (PFNGLCLEARBUFFERUIVPROC) GetProc( "glClearBufferuiv" );
	gldlClearBufferfv_impl = (PFNGLCLEARBUFFERFVPROC) GetProc( "glClearBufferfv" );
	gldlClearBufferfi_impl = (PFNGLCLEARBUFFERFIPROC) GetProc( "glClearBufferfi" );
	gldlGetStringi_impl = (PFNGLGETSTRINGIPROC) GetProc( "glGetStringi" );
	gldlDrawArraysInstanced_impl = (PFNGLDRAWARRAYSINSTANCEDPROC) GetProc( "glDrawArraysInstanced" );
	gldlDrawElementsInstanced_impl = (PFNGLDRAWELEMENTSINSTANCEDPROC) GetProc( "glDrawElementsInstanced" );
	gldlTexBuffer_impl = (PFNGLTEXBUFFERPROC) GetProc( "glTexBuffer" );
	gldlPrimitiveRestartIndex_impl = (PFNGLPRIMITIVERESTARTINDEXPROC) GetProc( "glPrimitiveRestartIndex" );
	gldlGetInteger64i_v_impl = (PFNGLGETINTEGER64I_VPROC) GetProc( "glGetInteger64i_v" );
	gldlGetBufferParameteri64v_impl = (PFNGLGETBUFFERPARAMETERI64VPROC) GetProc( "glGetBufferParameteri64v" );
	gldlFramebufferTexture_impl = (PFNGLFRAMEBUFFERTEXTUREPROC) GetProc( "glFramebufferTexture" );
	gldlVertexAttribDivisor_impl = (PFNGLVERTEXATTRIBDIVISORPROC) GetProc( "glVertexAttribDivisor" );
	gldlMinSampleShading_impl = (PFNGLMINSAMPLESHADINGPROC) GetProc( "glMinSampleShading" );
	gldlBlendEquationi_impl = (PFNGLBLENDEQUATIONIPROC) GetProc( "glBlendEquationi" );
	gldlBlendEquationSeparatei_impl = (PFNGLBLENDEQUATIONSEPARATEIPROC) GetProc( "glBlendEquationSeparatei" );
	gldlBlendFunci_impl = (PFNGLBLENDFUNCIPROC) GetProc( "glBlendFunci" );
	gldlBlendFuncSeparatei_impl = (PFNGLBLENDFUNCSEPARATEIPROC) GetProc( "glBlendFuncSeparatei" );
	gldlIsRenderbuffer_impl = (PFNGLISRENDERBUFFERPROC) GetProc( "glIsRenderbuffer" );
	gldlBindRenderbuffer_impl = (PFNGLBINDRENDERBUFFERPROC) GetProc( "glBindRenderbuffer" );
	gldlDeleteRenderbuffers_impl = (PFNGLDELETERENDERBUFFERSPROC) GetProc( "glDeleteRenderbuffers" );
	gldlGenRenderbuffers_impl = (PFNGLGENRENDERBUFFERSPROC) GetProc( "glGenRenderbuffers" );
	gldlRenderbufferStorage_impl = (PFNGLRENDERBUFFERSTORAGEPROC) GetProc( "glRenderbufferStorage" );
	gldlGetRenderbufferParameteriv_impl = (PFNGLGETRENDERBUFFERPARAMETERIVPROC) GetProc( "glGetRenderbufferParameteriv" );
	gldlIsFramebuffer_impl = (PFNGLISFRAMEBUFFERPROC) GetProc( "glIsFramebuffer" );
	gldlBindFramebuffer_impl = (PFNGLBINDFRAMEBUFFERPROC) GetProc( "glBindFramebuffer" );
	gldlDeleteFramebuffers_impl = (PFNGLDELETEFRAMEBUFFERSPROC) GetProc( "glDeleteFramebuffers" );
	gldlGenFramebuffers_impl = (PFNGLGENFRAMEBUFFERSPROC) GetProc( "glGenFramebuffers" );
	gldlCheckFramebufferStatus_impl = (PFNGLCHECKFRAMEBUFFERSTATUSPROC) GetProc( "glCheckFramebufferStatus" );
	gldlFramebufferTexture1D_impl = (PFNGLFRAMEBUFFERTEXTURE1DPROC) GetProc( "glFramebufferTexture1D" );
	gldlFramebufferTexture2D_impl = (PFNGLFRAMEBUFFERTEXTURE2DPROC) GetProc( "glFramebufferTexture2D" );
	gldlFramebufferTexture3D_impl = (PFNGLFRAMEBUFFERTEXTURE3DPROC) GetProc( "glFramebufferTexture3D" );
	gldlFramebufferRenderbuffer_impl = (PFNGLFRAMEBUFFERRENDERBUFFERPROC) GetProc( "glFramebufferRenderbuffer" );
	gldlGetFramebufferAttachmentParameteriv_impl = (PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC) GetProc( "glGetFramebufferAttachmentParameteriv" );
	gldlGenerateMipmap_impl = (PFNGLGENERATEMIPMAPPROC) GetProc( "glGenerateMipmap" );
	gldlBlitFramebuffer_impl = (PFNGLBLITFRAMEBUFFERPROC) GetProc( "glBlitFramebuffer" );
	gldlRenderbufferStorageMultisample_impl = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC) GetProc( "glRenderbufferStorageMultisample" );
	gldlFramebufferTextureLayer_impl = (PFNGLFRAMEBUFFERTEXTURELAYERPROC) GetProc( "glFramebufferTextureLayer" );
	gldlMapBufferRange_impl = (PFNGLMAPBUFFERRANGEPROC) GetProc( "glMapBufferRange" );
	gldlFlushMappedBufferRange_impl = (PFNGLFLUSHMAPPEDBUFFERRANGEPROC) GetProc( "glFlushMappedBufferRange" );
	gldlBindVertexArray_impl = (PFNGLBINDVERTEXARRAYPROC) GetProc( "glBindVertexArray" );
	gldlDeleteVertexArrays_impl = (PFNGLDELETEVERTEXARRAYSPROC) GetProc( "glDeleteVertexArrays" );
	gldlGenVertexArrays_impl = (PFNGLGENVERTEXARRAYSPROC) GetProc( "glGenVertexArrays" );
	gldlIsVertexArray_impl = (PFNGLISVERTEXARRAYPROC) GetProc( "glIsVertexArray" );
	gldlGetUniformIndices_impl = (PFNGLGETUNIFORMINDICESPROC) GetProc( "glGetUniformIndices" );
	gldlGetActiveUniformsiv_impl = (PFNGLGETACTIVEUNIFORMSIVPROC) GetProc( "glGetActiveUniformsiv" );
	gldlGetActiveUniformName_impl = (PFNGLGETACTIVEUNIFORMNAMEPROC) GetProc( "glGetActiveUniformName" );
	gldlGetUniformBlockIndex_impl = (PFNGLGETUNIFORMBLOCKINDEXPROC) GetProc( "glGetUniformBlockIndex" );
	gldlGetActiveUniformBlockiv_impl = (PFNGLGETACTIVEUNIFORMBLOCKIVPROC) GetProc( "glGetActiveUniformBlockiv" );
	gldlGetActiveUniformBlockName_impl = (PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC) GetProc( "glGetActiveUniformBlockName" );
	gldlUniformBlockBinding_impl = (PFNGLUNIFORMBLOCKBINDINGPROC) GetProc( "glUniformBlockBinding" );
	gldlCopyBufferSubData_impl = (PFNGLCOPYBUFFERSUBDATAPROC) GetProc( "glCopyBufferSubData" );
	gldlDrawElementsBaseVertex_impl = (PFNGLDRAWELEMENTSBASEVERTEXPROC) GetProc( "glDrawElementsBaseVertex" );
	gldlDrawRangeElementsBaseVertex_impl = (PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC) GetProc( "glDrawRangeElementsBaseVertex" );
	gldlDrawElementsInstancedBaseVertex_impl = (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC) GetProc( "glDrawElementsInstancedBaseVertex" );
	gldlMultiDrawElementsBaseVertex_impl = (PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC) GetProc( "glMultiDrawElementsBaseVertex" );
	gldlProvokingVertex_impl = (PFNGLPROVOKINGVERTEXPROC) GetProc( "glProvokingVertex" );
	gldlFenceSync_impl = (PFNGLFENCESYNCPROC) GetProc( "glFenceSync" );
	gldlIsSync_impl = (PFNGLISSYNCPROC) GetProc( "glIsSync" );
	gldlDeleteSync_impl = (PFNGLDELETESYNCPROC) GetProc( "glDeleteSync" );
	gldlClientWaitSync_impl = (PFNGLCLIENTWAITSYNCPROC) GetProc( "glClientWaitSync" );
	gldlWaitSync_impl = (PFNGLWAITSYNCPROC) GetProc( "glWaitSync" );
	gldlGetInteger64v_impl = (PFNGLGETINTEGER64VPROC) GetProc( "glGetInteger64v" );
	gldlGetSynciv_impl = (PFNGLGETSYNCIVPROC) GetProc( "glGetSynciv" );
	gldlTexImage2DMultisample_impl = (PFNGLTEXIMAGE2DMULTISAMPLEPROC) GetProc( "glTexImage2DMultisample" );
	gldlTexImage3DMultisample_impl = (PFNGLTEXIMAGE3DMULTISAMPLEPROC) GetProc( "glTexImage3DMultisample" );
	gldlGetMultisamplefv_impl = (PFNGLGETMULTISAMPLEFVPROC) GetProc( "glGetMultisamplefv" );
	gldlSampleMaski_impl = (PFNGLSAMPLEMASKIPROC) GetProc( "glSampleMaski" );
	gldlBlendEquationiARB_impl = (PFNGLBLENDEQUATIONIARBPROC) GetProc( "glBlendEquationiARB" );
	gldlBlendEquationSeparateiARB_impl = (PFNGLBLENDEQUATIONSEPARATEIARBPROC) GetProc( "glBlendEquationSeparateiARB" );
	gldlBlendFunciARB_impl = (PFNGLBLENDFUNCIARBPROC) GetProc( "glBlendFunciARB" );
	gldlBlendFuncSeparateiARB_impl = (PFNGLBLENDFUNCSEPARATEIARBPROC) GetProc( "glBlendFuncSeparateiARB" );
	gldlMinSampleShadingARB_impl = (PFNGLMINSAMPLESHADINGARBPROC) GetProc( "glMinSampleShadingARB" );
	gldlNamedStringARB_impl = (PFNGLNAMEDSTRINGARBPROC) GetProc( "glNamedStringARB" );
	gldlDeleteNamedStringARB_impl = (PFNGLDELETENAMEDSTRINGARBPROC) GetProc( "glDeleteNamedStringARB" );
	gldlCompileShaderIncludeARB_impl = (PFNGLCOMPILESHADERINCLUDEARBPROC) GetProc( "glCompileShaderIncludeARB" );
	gldlIsNamedStringARB_impl = (PFNGLISNAMEDSTRINGARBPROC) GetProc( "glIsNamedStringARB" );
	gldlGetNamedStringARB_impl = (PFNGLGETNAMEDSTRINGARBPROC) GetProc( "glGetNamedStringARB" );
	gldlGetNamedStringivARB_impl = (PFNGLGETNAMEDSTRINGIVARBPROC) GetProc( "glGetNamedStringivARB" );
	gldlBindFragDataLocationIndexed_impl = (PFNGLBINDFRAGDATALOCATIONINDEXEDPROC) GetProc( "glBindFragDataLocationIndexed" );
	gldlGetFragDataIndex_impl = (PFNGLGETFRAGDATAINDEXPROC) GetProc( "glGetFragDataIndex" );
	gldlGenSamplers_impl = (PFNGLGENSAMPLERSPROC) GetProc( "glGenSamplers" );
	gldlDeleteSamplers_impl = (PFNGLDELETESAMPLERSPROC) GetProc( "glDeleteSamplers" );
	gldlIsSampler_impl = (PFNGLISSAMPLERPROC) GetProc( "glIsSampler" );
	gldlBindSampler_impl = (PFNGLBINDSAMPLERPROC) GetProc( "glBindSampler" );
	gldlSamplerParameteri_impl = (PFNGLSAMPLERPARAMETERIPROC) GetProc( "glSamplerParameteri" );
	gldlSamplerParameteriv_impl = (PFNGLSAMPLERPARAMETERIVPROC) GetProc( "glSamplerParameteriv" );
	gldlSamplerParameterf_impl = (PFNGLSAMPLERPARAMETERFPROC) GetProc( "glSamplerParameterf" );
	gldlSamplerParameterfv_impl = (PFNGLSAMPLERPARAMETERFVPROC) GetProc( "glSamplerParameterfv" );
	gldlSamplerParameterIiv_impl = (PFNGLSAMPLERPARAMETERIIVPROC) GetProc( "glSamplerParameterIiv" );
	gldlSamplerParameterIuiv_impl = (PFNGLSAMPLERPARAMETERIUIVPROC) GetProc( "glSamplerParameterIuiv" );
	gldlGetSamplerParameteriv_impl = (PFNGLGETSAMPLERPARAMETERIVPROC) GetProc( "glGetSamplerParameteriv" );
	gldlGetSamplerParameterIiv_impl = (PFNGLGETSAMPLERPARAMETERIIVPROC) GetProc( "glGetSamplerParameterIiv" );
	gldlGetSamplerParameterfv_impl = (PFNGLGETSAMPLERPARAMETERFVPROC) GetProc( "glGetSamplerParameterfv" );
	gldlGetSamplerParameterIuiv_impl = (PFNGLGETSAMPLERPARAMETERIUIVPROC) GetProc( "glGetSamplerParameterIuiv" );
	gldlQueryCounter_impl = (PFNGLQUERYCOUNTERPROC) GetProc( "glQueryCounter" );
	gldlGetQueryObjecti64v_impl = (PFNGLGETQUERYOBJECTI64VPROC) GetProc( "glGetQueryObjecti64v" );
	gldlGetQueryObjectui64v_impl = (PFNGLGETQUERYOBJECTUI64VPROC) GetProc( "glGetQueryObjectui64v" );
	gldlVertexP2ui_impl = (PFNGLVERTEXP2UIPROC) GetProc( "glVertexP2ui" );
	gldlVertexP2uiv_impl = (PFNGLVERTEXP2UIVPROC) GetProc( "glVertexP2uiv" );
	gldlVertexP3ui_impl = (PFNGLVERTEXP3UIPROC) GetProc( "glVertexP3ui" );
	gldlVertexP3uiv_impl = (PFNGLVERTEXP3UIVPROC) GetProc( "glVertexP3uiv" );
	gldlVertexP4ui_impl = (PFNGLVERTEXP4UIPROC) GetProc( "glVertexP4ui" );
	gldlVertexP4uiv_impl = (PFNGLVERTEXP4UIVPROC) GetProc( "glVertexP4uiv" );
	gldlTexCoordP1ui_impl = (PFNGLTEXCOORDP1UIPROC) GetProc( "glTexCoordP1ui" );
	gldlTexCoordP1uiv_impl = (PFNGLTEXCOORDP1UIVPROC) GetProc( "glTexCoordP1uiv" );
	gldlTexCoordP2ui_impl = (PFNGLTEXCOORDP2UIPROC) GetProc( "glTexCoordP2ui" );
	gldlTexCoordP2uiv_impl = (PFNGLTEXCOORDP2UIVPROC) GetProc( "glTexCoordP2uiv" );
	gldlTexCoordP3ui_impl = (PFNGLTEXCOORDP3UIPROC) GetProc( "glTexCoordP3ui" );
	gldlTexCoordP3uiv_impl = (PFNGLTEXCOORDP3UIVPROC) GetProc( "glTexCoordP3uiv" );
	gldlTexCoordP4ui_impl = (PFNGLTEXCOORDP4UIPROC) GetProc( "glTexCoordP4ui" );
	gldlTexCoordP4uiv_impl = (PFNGLTEXCOORDP4UIVPROC) GetProc( "glTexCoordP4uiv" );
	gldlMultiTexCoordP1ui_impl = (PFNGLMULTITEXCOORDP1UIPROC) GetProc( "glMultiTexCoordP1ui" );
	gldlMultiTexCoordP1uiv_impl = (PFNGLMULTITEXCOORDP1UIVPROC) GetProc( "glMultiTexCoordP1uiv" );
	gldlMultiTexCoordP2ui_impl = (PFNGLMULTITEXCOORDP2UIPROC) GetProc( "glMultiTexCoordP2ui" );
	gldlMultiTexCoordP2uiv_impl = (PFNGLMULTITEXCOORDP2UIVPROC) GetProc( "glMultiTexCoordP2uiv" );
	gldlMultiTexCoordP3ui_impl = (PFNGLMULTITEXCOORDP3UIPROC) GetProc( "glMultiTexCoordP3ui" );
	gldlMultiTexCoordP3uiv_impl = (PFNGLMULTITEXCOORDP3UIVPROC) GetProc( "glMultiTexCoordP3uiv" );
	gldlMultiTexCoordP4ui_impl = (PFNGLMULTITEXCOORDP4UIPROC) GetProc( "glMultiTexCoordP4ui" );
	gldlMultiTexCoordP4uiv_impl = (PFNGLMULTITEXCOORDP4UIVPROC) GetProc( "glMultiTexCoordP4uiv" );
	gldlNormalP3ui_impl = (PFNGLNORMALP3UIPROC) GetProc( "glNormalP3ui" );
	gldlNormalP3uiv_impl = (PFNGLNORMALP3UIVPROC) GetProc( "glNormalP3uiv" );
	gldlColorP3ui_impl = (PFNGLCOLORP3UIPROC) GetProc( "glColorP3ui" );
	gldlColorP3uiv_impl = (PFNGLCOLORP3UIVPROC) GetProc( "glColorP3uiv" );
	gldlColorP4ui_impl = (PFNGLCOLORP4UIPROC) GetProc( "glColorP4ui" );
	gldlColorP4uiv_impl = (PFNGLCOLORP4UIVPROC) GetProc( "glColorP4uiv" );
	gldlSecondaryColorP3ui_impl = (PFNGLSECONDARYCOLORP3UIPROC) GetProc( "glSecondaryColorP3ui" );
	gldlSecondaryColorP3uiv_impl = (PFNGLSECONDARYCOLORP3UIVPROC) GetProc( "glSecondaryColorP3uiv" );
	gldlVertexAttribP1ui_impl = (PFNGLVERTEXATTRIBP1UIPROC) GetProc( "glVertexAttribP1ui" );
	gldlVertexAttribP1uiv_impl = (PFNGLVERTEXATTRIBP1UIVPROC) GetProc( "glVertexAttribP1uiv" );
	gldlVertexAttribP2ui_impl = (PFNGLVERTEXATTRIBP2UIPROC) GetProc( "glVertexAttribP2ui" );
	gldlVertexAttribP2uiv_impl = (PFNGLVERTEXATTRIBP2UIVPROC) GetProc( "glVertexAttribP2uiv" );
	gldlVertexAttribP3ui_impl = (PFNGLVERTEXATTRIBP3UIPROC) GetProc( "glVertexAttribP3ui" );
	gldlVertexAttribP3uiv_impl = (PFNGLVERTEXATTRIBP3UIVPROC) GetProc( "glVertexAttribP3uiv" );
	gldlVertexAttribP4ui_impl = (PFNGLVERTEXATTRIBP4UIPROC) GetProc( "glVertexAttribP4ui" );
	gldlVertexAttribP4uiv_impl = (PFNGLVERTEXATTRIBP4UIVPROC) GetProc( "glVertexAttribP4uiv" );
	gldlDrawArraysIndirect_impl = (PFNGLDRAWARRAYSINDIRECTPROC) GetProc( "glDrawArraysIndirect" );
	gldlDrawElementsIndirect_impl = (PFNGLDRAWELEMENTSINDIRECTPROC) GetProc( "glDrawElementsIndirect" );
	gldlUniform1d_impl = (PFNGLUNIFORM1DPROC) GetProc( "glUniform1d" );
	gldlUniform2d_impl = (PFNGLUNIFORM2DPROC) GetProc( "glUniform2d" );
	gldlUniform3d_impl = (PFNGLUNIFORM3DPROC) GetProc( "glUniform3d" );
	gldlUniform4d_impl = (PFNGLUNIFORM4DPROC) GetProc( "glUniform4d" );
	gldlUniform1dv_impl = (PFNGLUNIFORM1DVPROC) GetProc( "glUniform1dv" );
	gldlUniform2dv_impl = (PFNGLUNIFORM2DVPROC) GetProc( "glUniform2dv" );
	gldlUniform3dv_impl = (PFNGLUNIFORM3DVPROC) GetProc( "glUniform3dv" );
	gldlUniform4dv_impl = (PFNGLUNIFORM4DVPROC) GetProc( "glUniform4dv" );
	gldlUniformMatrix2dv_impl = (PFNGLUNIFORMMATRIX2DVPROC) GetProc( "glUniformMatrix2dv" );
	gldlUniformMatrix3dv_impl = (PFNGLUNIFORMMATRIX3DVPROC) GetProc( "glUniformMatrix3dv" );
	gldlUniformMatrix4dv_impl = (PFNGLUNIFORMMATRIX4DVPROC) GetProc( "glUniformMatrix4dv" );
	gldlUniformMatrix2x3dv_impl = (PFNGLUNIFORMMATRIX2X3DVPROC) GetProc( "glUniformMatrix2x3dv" );
	gldlUniformMatrix2x4dv_impl = (PFNGLUNIFORMMATRIX2X4DVPROC) GetProc( "glUniformMatrix2x4dv" );
	gldlUniformMatrix3x2dv_impl = (PFNGLUNIFORMMATRIX3X2DVPROC) GetProc( "glUniformMatrix3x2dv" );
	gldlUniformMatrix3x4dv_impl = (PFNGLUNIFORMMATRIX3X4DVPROC) GetProc( "glUniformMatrix3x4dv" );
	gldlUniformMatrix4x2dv_impl = (PFNGLUNIFORMMATRIX4X2DVPROC) GetProc( "glUniformMatrix4x2dv" );
	gldlUniformMatrix4x3dv_impl = (PFNGLUNIFORMMATRIX4X3DVPROC) GetProc( "glUniformMatrix4x3dv" );
	gldlGetUniformdv_impl = (PFNGLGETUNIFORMDVPROC) GetProc( "glGetUniformdv" );
	gldlGetSubroutineUniformLocation_impl = (PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC) GetProc( "glGetSubroutineUniformLocation" );
	gldlGetSubroutineIndex_impl = (PFNGLGETSUBROUTINEINDEXPROC) GetProc( "glGetSubroutineIndex" );
	gldlGetActiveSubroutineUniformiv_impl = (PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC) GetProc( "glGetActiveSubroutineUniformiv" );
	gldlGetActiveSubroutineUniformName_impl = (PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC) GetProc( "glGetActiveSubroutineUniformName" );
	gldlGetActiveSubroutineName_impl = (PFNGLGETACTIVESUBROUTINENAMEPROC) GetProc( "glGetActiveSubroutineName" );
	gldlUniformSubroutinesuiv_impl = (PFNGLUNIFORMSUBROUTINESUIVPROC) GetProc( "glUniformSubroutinesuiv" );
	gldlGetUniformSubroutineuiv_impl = (PFNGLGETUNIFORMSUBROUTINEUIVPROC) GetProc( "glGetUniformSubroutineuiv" );
	gldlGetProgramStageiv_impl = (PFNGLGETPROGRAMSTAGEIVPROC) GetProc( "glGetProgramStageiv" );
	gldlPatchParameteri_impl = (PFNGLPATCHPARAMETERIPROC) GetProc( "glPatchParameteri" );
	gldlPatchParameterfv_impl = (PFNGLPATCHPARAMETERFVPROC) GetProc( "glPatchParameterfv" );
	gldlBindTransformFeedback_impl = (PFNGLBINDTRANSFORMFEEDBACKPROC) GetProc( "glBindTransformFeedback" );
	gldlDeleteTransformFeedbacks_impl = (PFNGLDELETETRANSFORMFEEDBACKSPROC) GetProc( "glDeleteTransformFeedbacks" );
	gldlGenTransformFeedbacks_impl = (PFNGLGENTRANSFORMFEEDBACKSPROC) GetProc( "glGenTransformFeedbacks" );
	gldlIsTransformFeedback_impl = (PFNGLISTRANSFORMFEEDBACKPROC) GetProc( "glIsTransformFeedback" );
	gldlPauseTransformFeedback_impl = (PFNGLPAUSETRANSFORMFEEDBACKPROC) GetProc( "glPauseTransformFeedback" );
	gldlResumeTransformFeedback_impl = (PFNGLRESUMETRANSFORMFEEDBACKPROC) GetProc( "glResumeTransformFeedback" );
	gldlDrawTransformFeedback_impl = (PFNGLDRAWTRANSFORMFEEDBACKPROC) GetProc( "glDrawTransformFeedback" );
	gldlDrawTransformFeedbackStream_impl = (PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC) GetProc( "glDrawTransformFeedbackStream" );
	gldlBeginQueryIndexed_impl = (PFNGLBEGINQUERYINDEXEDPROC) GetProc( "glBeginQueryIndexed" );
	gldlEndQueryIndexed_impl = (PFNGLENDQUERYINDEXEDPROC) GetProc( "glEndQueryIndexed" );
	gldlGetQueryIndexediv_impl = (PFNGLGETQUERYINDEXEDIVPROC) GetProc( "glGetQueryIndexediv" );
	gldlReleaseShaderCompiler_impl = (PFNGLRELEASESHADERCOMPILERPROC) GetProc( "glReleaseShaderCompiler" );
	gldlShaderBinary_impl = (PFNGLSHADERBINARYPROC) GetProc( "glShaderBinary" );
	gldlGetShaderPrecisionFormat_impl = (PFNGLGETSHADERPRECISIONFORMATPROC) GetProc( "glGetShaderPrecisionFormat" );
	gldlDepthRangef_impl = (PFNGLDEPTHRANGEFPROC) GetProc( "glDepthRangef" );
	gldlClearDepthf_impl = (PFNGLCLEARDEPTHFPROC) GetProc( "glClearDepthf" );
	gldlGetProgramBinary_impl = (PFNGLGETPROGRAMBINARYPROC) GetProc( "glGetProgramBinary" );
	gldlProgramBinary_impl = (PFNGLPROGRAMBINARYPROC) GetProc( "glProgramBinary" );
	gldlProgramParameteri_impl = (PFNGLPROGRAMPARAMETERIPROC) GetProc( "glProgramParameteri" );
	gldlUseProgramStages_impl = (PFNGLUSEPROGRAMSTAGESPROC) GetProc( "glUseProgramStages" );
	gldlActiveShaderProgram_impl = (PFNGLACTIVESHADERPROGRAMPROC) GetProc( "glActiveShaderProgram" );
	gldlCreateShaderProgramv_impl = (PFNGLCREATESHADERPROGRAMVPROC) GetProc( "glCreateShaderProgramv" );
	gldlBindProgramPipeline_impl = (PFNGLBINDPROGRAMPIPELINEPROC) GetProc( "glBindProgramPipeline" );
	gldlDeleteProgramPipelines_impl = (PFNGLDELETEPROGRAMPIPELINESPROC) GetProc( "glDeleteProgramPipelines" );
	gldlGenProgramPipelines_impl = (PFNGLGENPROGRAMPIPELINESPROC) GetProc( "glGenProgramPipelines" );
	gldlIsProgramPipeline_impl = (PFNGLISPROGRAMPIPELINEPROC) GetProc( "glIsProgramPipeline" );
	gldlGetProgramPipelineiv_impl = (PFNGLGETPROGRAMPIPELINEIVPROC) GetProc( "glGetProgramPipelineiv" );
	gldlProgramUniform1i_impl = (PFNGLPROGRAMUNIFORM1IPROC) GetProc( "glProgramUniform1i" );
	gldlProgramUniform1iv_impl = (PFNGLPROGRAMUNIFORM1IVPROC) GetProc( "glProgramUniform1iv" );
	gldlProgramUniform1f_impl = (PFNGLPROGRAMUNIFORM1FPROC) GetProc( "glProgramUniform1f" );
	gldlProgramUniform1fv_impl = (PFNGLPROGRAMUNIFORM1FVPROC) GetProc( "glProgramUniform1fv" );
	gldlProgramUniform1d_impl = (PFNGLPROGRAMUNIFORM1DPROC) GetProc( "glProgramUniform1d" );
	gldlProgramUniform1dv_impl = (PFNGLPROGRAMUNIFORM1DVPROC) GetProc( "glProgramUniform1dv" );
	gldlProgramUniform1ui_impl = (PFNGLPROGRAMUNIFORM1UIPROC) GetProc( "glProgramUniform1ui" );
	gldlProgramUniform1uiv_impl = (PFNGLPROGRAMUNIFORM1UIVPROC) GetProc( "glProgramUniform1uiv" );
	gldlProgramUniform2i_impl = (PFNGLPROGRAMUNIFORM2IPROC) GetProc( "glProgramUniform2i" );
	gldlProgramUniform2iv_impl = (PFNGLPROGRAMUNIFORM2IVPROC) GetProc( "glProgramUniform2iv" );
	gldlProgramUniform2f_impl = (PFNGLPROGRAMUNIFORM2FPROC) GetProc( "glProgramUniform2f" );
	gldlProgramUniform2fv_impl = (PFNGLPROGRAMUNIFORM2FVPROC) GetProc( "glProgramUniform2fv" );
	gldlProgramUniform2d_impl = (PFNGLPROGRAMUNIFORM2DPROC) GetProc( "glProgramUniform2d" );
	gldlProgramUniform2dv_impl = (PFNGLPROGRAMUNIFORM2DVPROC) GetProc( "glProgramUniform2dv" );
	gldlProgramUniform2ui_impl = (PFNGLPROGRAMUNIFORM2UIPROC) GetProc( "glProgramUniform2ui" );
	gldlProgramUniform2uiv_impl = (PFNGLPROGRAMUNIFORM2UIVPROC) GetProc( "glProgramUniform2uiv" );
	gldlProgramUniform3i_impl = (PFNGLPROGRAMUNIFORM3IPROC) GetProc( "glProgramUniform3i" );
	gldlProgramUniform3iv_impl = (PFNGLPROGRAMUNIFORM3IVPROC) GetProc( "glProgramUniform3iv" );
	gldlProgramUniform3f_impl = (PFNGLPROGRAMUNIFORM3FPROC) GetProc( "glProgramUniform3f" );
	gldlProgramUniform3fv_impl = (PFNGLPROGRAMUNIFORM3FVPROC) GetProc( "glProgramUniform3fv" );
	gldlProgramUniform3d_impl = (PFNGLPROGRAMUNIFORM3DPROC) GetProc( "glProgramUniform3d" );
	gldlProgramUniform3dv_impl = (PFNGLPROGRAMUNIFORM3DVPROC) GetProc( "glProgramUniform3dv" );
	gldlProgramUniform3ui_impl = (PFNGLPROGRAMUNIFORM3UIPROC) GetProc( "glProgramUniform3ui" );
	gldlProgramUniform3uiv_impl = (PFNGLPROGRAMUNIFORM3UIVPROC) GetProc( "glProgramUniform3uiv" );
	gldlProgramUniform4i_impl = (PFNGLPROGRAMUNIFORM4IPROC) GetProc( "glProgramUniform4i" );
	gldlProgramUniform4iv_impl = (PFNGLPROGRAMUNIFORM4IVPROC) GetProc( "glProgramUniform4iv" );
	gldlProgramUniform4f_impl = (PFNGLPROGRAMUNIFORM4FPROC) GetProc( "glProgramUniform4f" );
	gldlProgramUniform4fv_impl = (PFNGLPROGRAMUNIFORM4FVPROC) GetProc( "glProgramUniform4fv" );
	gldlProgramUniform4d_impl = (PFNGLPROGRAMUNIFORM4DPROC) GetProc( "glProgramUniform4d" );
	gldlProgramUniform4dv_impl = (PFNGLPROGRAMUNIFORM4DVPROC) GetProc( "glProgramUniform4dv" );
	gldlProgramUniform4ui_impl = (PFNGLPROGRAMUNIFORM4UIPROC) GetProc( "glProgramUniform4ui" );
	gldlProgramUniform4uiv_impl = (PFNGLPROGRAMUNIFORM4UIVPROC) GetProc( "glProgramUniform4uiv" );
	gldlProgramUniformMatrix2fv_impl = (PFNGLPROGRAMUNIFORMMATRIX2FVPROC) GetProc( "glProgramUniformMatrix2fv" );
	gldlProgramUniformMatrix3fv_impl = (PFNGLPROGRAMUNIFORMMATRIX3FVPROC) GetProc( "glProgramUniformMatrix3fv" );
	gldlProgramUniformMatrix4fv_impl = (PFNGLPROGRAMUNIFORMMATRIX4FVPROC) GetProc( "glProgramUniformMatrix4fv" );
	gldlProgramUniformMatrix2dv_impl = (PFNGLPROGRAMUNIFORMMATRIX2DVPROC) GetProc( "glProgramUniformMatrix2dv" );
	gldlProgramUniformMatrix3dv_impl = (PFNGLPROGRAMUNIFORMMATRIX3DVPROC) GetProc( "glProgramUniformMatrix3dv" );
	gldlProgramUniformMatrix4dv_impl = (PFNGLPROGRAMUNIFORMMATRIX4DVPROC) GetProc( "glProgramUniformMatrix4dv" );
	gldlProgramUniformMatrix2x3fv_impl = (PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC) GetProc( "glProgramUniformMatrix2x3fv" );
	gldlProgramUniformMatrix3x2fv_impl = (PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC) GetProc( "glProgramUniformMatrix3x2fv" );
	gldlProgramUniformMatrix2x4fv_impl = (PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC) GetProc( "glProgramUniformMatrix2x4fv" );
	gldlProgramUniformMatrix4x2fv_impl = (PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC) GetProc( "glProgramUniformMatrix4x2fv" );
	gldlProgramUniformMatrix3x4fv_impl = (PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC) GetProc( "glProgramUniformMatrix3x4fv" );
	gldlProgramUniformMatrix4x3fv_impl = (PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC) GetProc( "glProgramUniformMatrix4x3fv" );
	gldlProgramUniformMatrix2x3dv_impl = (PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC) GetProc( "glProgramUniformMatrix2x3dv" );
	gldlProgramUniformMatrix3x2dv_impl = (PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC) GetProc( "glProgramUniformMatrix3x2dv" );
	gldlProgramUniformMatrix2x4dv_impl = (PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC) GetProc( "glProgramUniformMatrix2x4dv" );
	gldlProgramUniformMatrix4x2dv_impl = (PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC) GetProc( "glProgramUniformMatrix4x2dv" );
	gldlProgramUniformMatrix3x4dv_impl = (PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC) GetProc( "glProgramUniformMatrix3x4dv" );
	gldlProgramUniformMatrix4x3dv_impl = (PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC) GetProc( "glProgramUniformMatrix4x3dv" );
	gldlValidateProgramPipeline_impl = (PFNGLVALIDATEPROGRAMPIPELINEPROC) GetProc( "glValidateProgramPipeline" );
	gldlGetProgramPipelineInfoLog_impl = (PFNGLGETPROGRAMPIPELINEINFOLOGPROC) GetProc( "glGetProgramPipelineInfoLog" );
	gldlVertexAttribL1d_impl = (PFNGLVERTEXATTRIBL1DPROC) GetProc( "glVertexAttribL1d" );
	gldlVertexAttribL2d_impl = (PFNGLVERTEXATTRIBL2DPROC) GetProc( "glVertexAttribL2d" );
	gldlVertexAttribL3d_impl = (PFNGLVERTEXATTRIBL3DPROC) GetProc( "glVertexAttribL3d" );
	gldlVertexAttribL4d_impl = (PFNGLVERTEXATTRIBL4DPROC) GetProc( "glVertexAttribL4d" );
	gldlVertexAttribL1dv_impl = (PFNGLVERTEXATTRIBL1DVPROC) GetProc( "glVertexAttribL1dv" );
	gldlVertexAttribL2dv_impl = (PFNGLVERTEXATTRIBL2DVPROC) GetProc( "glVertexAttribL2dv" );
	gldlVertexAttribL3dv_impl = (PFNGLVERTEXATTRIBL3DVPROC) GetProc( "glVertexAttribL3dv" );
	gldlVertexAttribL4dv_impl = (PFNGLVERTEXATTRIBL4DVPROC) GetProc( "glVertexAttribL4dv" );
	gldlVertexAttribLPointer_impl = (PFNGLVERTEXATTRIBLPOINTERPROC) GetProc( "glVertexAttribLPointer" );
	gldlGetVertexAttribLdv_impl = (PFNGLGETVERTEXATTRIBLDVPROC) GetProc( "glGetVertexAttribLdv" );
	gldlViewportArrayv_impl = (PFNGLVIEWPORTARRAYVPROC) GetProc( "glViewportArrayv" );
	gldlViewportIndexedf_impl = (PFNGLVIEWPORTINDEXEDFPROC) GetProc( "glViewportIndexedf" );
	gldlViewportIndexedfv_impl = (PFNGLVIEWPORTINDEXEDFVPROC) GetProc( "glViewportIndexedfv" );
	gldlScissorArrayv_impl = (PFNGLSCISSORARRAYVPROC) GetProc( "glScissorArrayv" );
	gldlScissorIndexed_impl = (PFNGLSCISSORINDEXEDPROC) GetProc( "glScissorIndexed" );
	gldlScissorIndexedv_impl = (PFNGLSCISSORINDEXEDVPROC) GetProc( "glScissorIndexedv" );
	gldlDepthRangeArrayv_impl = (PFNGLDEPTHRANGEARRAYVPROC) GetProc( "glDepthRangeArrayv" );
	gldlDepthRangeIndexed_impl = (PFNGLDEPTHRANGEINDEXEDPROC) GetProc( "glDepthRangeIndexed" );
	gldlGetFloati_v_impl = (PFNGLGETFLOATI_VPROC) GetProc( "glGetFloati_v" );
	gldlGetDoublei_v_impl = (PFNGLGETDOUBLEI_VPROC) GetProc( "glGetDoublei_v" );
	gldlCreateSyncFromCLeventARB_impl = (PFNGLCREATESYNCFROMCLEVENTARBPROC) GetProc( "glCreateSyncFromCLeventARB" );
	gldlDebugMessageControlARB_impl = (PFNGLDEBUGMESSAGECONTROLARBPROC) GetProc( "glDebugMessageControlARB" );
	gldlDebugMessageInsertARB_impl = (PFNGLDEBUGMESSAGEINSERTARBPROC) GetProc( "glDebugMessageInsertARB" );
	gldlDebugMessageCallbackARB_impl = (PFNGLDEBUGMESSAGECALLBACKARBPROC) GetProc( "glDebugMessageCallbackARB" );
	gldlGetDebugMessageLogARB_impl = (PFNGLGETDEBUGMESSAGELOGARBPROC) GetProc( "glGetDebugMessageLogARB" );
	gldlGetGraphicsResetStatusARB_impl = (PFNGLGETGRAPHICSRESETSTATUSARBPROC) GetProc( "glGetGraphicsResetStatusARB" );
	gldlGetnMapdvARB_impl = (PFNGLGETNMAPDVARBPROC) GetProc( "glGetnMapdvARB" );
	gldlGetnMapfvARB_impl = (PFNGLGETNMAPFVARBPROC) GetProc( "glGetnMapfvARB" );
	gldlGetnMapivARB_impl = (PFNGLGETNMAPIVARBPROC) GetProc( "glGetnMapivARB" );
	gldlGetnPixelMapfvARB_impl = (PFNGLGETNPIXELMAPFVARBPROC) GetProc( "glGetnPixelMapfvARB" );
	gldlGetnPixelMapuivARB_impl = (PFNGLGETNPIXELMAPUIVARBPROC) GetProc( "glGetnPixelMapuivARB" );
	gldlGetnPixelMapusvARB_impl = (PFNGLGETNPIXELMAPUSVARBPROC) GetProc( "glGetnPixelMapusvARB" );
	gldlGetnPolygonStippleARB_impl = (PFNGLGETNPOLYGONSTIPPLEARBPROC) GetProc( "glGetnPolygonStippleARB" );
	gldlGetnColorTableARB_impl = (PFNGLGETNCOLORTABLEARBPROC) GetProc( "glGetnColorTableARB" );
	gldlGetnConvolutionFilterARB_impl = (PFNGLGETNCONVOLUTIONFILTERARBPROC) GetProc( "glGetnConvolutionFilterARB" );
	gldlGetnSeparableFilterARB_impl = (PFNGLGETNSEPARABLEFILTERARBPROC) GetProc( "glGetnSeparableFilterARB" );
	gldlGetnHistogramARB_impl = (PFNGLGETNHISTOGRAMARBPROC) GetProc( "glGetnHistogramARB" );
	gldlGetnMinmaxARB_impl = (PFNGLGETNMINMAXARBPROC) GetProc( "glGetnMinmaxARB" );
	gldlGetnTexImageARB_impl = (PFNGLGETNTEXIMAGEARBPROC) GetProc( "glGetnTexImageARB" );
	gldlReadnPixelsARB_impl = (PFNGLREADNPIXELSARBPROC) GetProc( "glReadnPixelsARB" );
	gldlGetnCompressedTexImageARB_impl = (PFNGLGETNCOMPRESSEDTEXIMAGEARBPROC) GetProc( "glGetnCompressedTexImageARB" );
	gldlGetnUniformfvARB_impl = (PFNGLGETNUNIFORMFVARBPROC) GetProc( "glGetnUniformfvARB" );
	gldlGetnUniformivARB_impl = (PFNGLGETNUNIFORMIVARBPROC) GetProc( "glGetnUniformivARB" );
	gldlGetnUniformuivARB_impl = (PFNGLGETNUNIFORMUIVARBPROC) GetProc( "glGetnUniformuivARB" );
	gldlGetnUniformdvARB_impl = (PFNGLGETNUNIFORMDVARBPROC) GetProc( "glGetnUniformdvARB" );
	gldlDrawArraysInstancedBaseInstance_impl = (PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC) GetProc( "glDrawArraysInstancedBaseInstance" );
	gldlDrawElementsInstancedBaseInstance_impl = (PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC) GetProc( "glDrawElementsInstancedBaseInstance" );
	gldlDrawElementsInstancedBaseVertexBaseInstance_impl = (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC) GetProc( "glDrawElementsInstancedBaseVertexBaseInstance" );
	gldlDrawTransformFeedbackInstanced_impl = (PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDPROC) GetProc( "glDrawTransformFeedbackInstanced" );
	gldlDrawTransformFeedbackStreamInstanced_impl = (PFNGLDRAWTRANSFORMFEEDBACKSTREAMINSTANCEDPROC) GetProc( "glDrawTransformFeedbackStreamInstanced" );
	gldlGetInternalformativ_impl = (PFNGLGETINTERNALFORMATIVPROC) GetProc( "glGetInternalformativ" );
	gldlGetActiveAtomicCounterBufferiv_impl = (PFNGLGETACTIVEATOMICCOUNTERBUFFERIVPROC) GetProc( "glGetActiveAtomicCounterBufferiv" );
	gldlBindImageTexture_impl = (PFNGLBINDIMAGETEXTUREPROC) GetProc( "glBindImageTexture" );
	gldlMemoryBarrier_impl = (PFNGLMEMORYBARRIERPROC) GetProc( "glMemoryBarrier" );
	gldlTexStorage1D_impl = (PFNGLTEXSTORAGE1DPROC) GetProc( "glTexStorage1D" );
	gldlTexStorage2D_impl = (PFNGLTEXSTORAGE2DPROC) GetProc( "glTexStorage2D" );
	gldlTexStorage3D_impl = (PFNGLTEXSTORAGE3DPROC) GetProc( "glTexStorage3D" );
	gldlTextureStorage1DEXT_impl = (PFNGLTEXTURESTORAGE1DEXTPROC) GetProc( "glTextureStorage1DEXT" );
	gldlTextureStorage2DEXT_impl = (PFNGLTEXTURESTORAGE2DEXTPROC) GetProc( "glTextureStorage2DEXT" );
	gldlTextureStorage3DEXT_impl = (PFNGLTEXTURESTORAGE3DEXTPROC) GetProc( "glTextureStorage3DEXT" );

}




// ###################################################################
// GLDL Debug Functions
void gldlCullFace ( GLenum mode, const char *arg0, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glCullFace( %s );\n", file, line,  arg0 );

    DebugTest( 73 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glCullFace( mode=%s ) at %s:%d\n", debug_break, arg0, file, line );
        DebugFunction();
    }
    gldlCullFace_impl( mode );
	gldl_states.culled_face = mode;
}
void gldlFrontFace ( GLenum mode, const char *arg0, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glFrontFace( %s );\n", file, line,  arg0 );

    DebugTest( 136 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glFrontFace( mode=%s ) at %s:%d\n", debug_break, arg0, file, line );
        DebugFunction();
    }
    gldlFrontFace_impl( mode );
}
void gldlHint ( GLenum target, GLenum mode, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glHint( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( 252 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glHint( target=%s, mode=%s ) at %s:%d\n", debug_break, arg0, arg1, file, line );
        DebugFunction();
    }
    gldlHint_impl( target, mode );
}
void gldlLineWidth ( GLfloat width, const char *arg0, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glLineWidth( %f );\n", file, line,  (float)width );

    DebugTest( 268 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glLineWidth( width=%f ) at %s:%d\n", debug_break, (float)width, file, line );
        DebugFunction();
    }
    gldlLineWidth_impl( width );
}
void gldlPointSize ( GLfloat size, const char *arg0, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glPointSize( %f );\n", file, line,  (float)size );

    DebugTest( 299 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glPointSize( size=%f ) at %s:%d\n", debug_break, (float)size, file, line );
        DebugFunction();
    }
    gldlPointSize_impl( size );
}
void gldlPolygonMode ( GLenum face, GLenum mode, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glPolygonMode( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( 300 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glPolygonMode( face=%s, mode=%s ) at %s:%d\n", debug_break, arg0, arg1, file, line );
        DebugFunction();
    }
    gldlPolygonMode_impl( face, mode );
}
void gldlScissor ( GLint x, GLint y, GLsizei width, GLsizei height, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glScissor( %d, %d, %d, %d );\n", file, line, x, y, width,  height );

    DebugTest( 372 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glScissor( x=%d, y=%d, width=%d, height=%d ) at %s:%d\n", debug_break, x, y, width, height, file, line );
        DebugFunction();
    }
    gldlScissor_impl( x, y, width, height );
}
void gldlTexParameterf ( GLenum target, GLenum pname, GLfloat param, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glTexParameterf( %s, %s, %f );\n", file, line, arg0, arg1,  (float)param );

    DebugTest( 402 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glTexParameterf( target=%s, pname=%s, param=%f ) at %s:%d\n", debug_break, arg0, arg1, (float)param, file, line );
        DebugFunction();
    }
    gldlTexParameterf_impl( target, pname, param );
}
void gldlTexParameterfv ( GLenum target, GLenum pname, const GLfloat *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glTexParameterfv( %s, %s, %p );\n", file, line, arg0, arg1,  params );

    DebugTest( 403 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glTexParameterfv( target=%s, pname=%s, params=%p ) at %s:%d\n", debug_break, arg0, arg1, params, file, line );
        DebugFunction();
    }
    gldlTexParameterfv_impl( target, pname, params );
}
void gldlTexParameteri ( GLenum target, GLenum pname, GLint param, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glTexParameteri( %s, %s, %d );\n", file, line, arg0, arg1,  param );

    DebugTest( 404 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glTexParameteri( target=%s, pname=%s, param=%d ) at %s:%d\n", debug_break, arg0, arg1, param, file, line );
        DebugFunction();
    }
    gldlTexParameteri_impl( target, pname, param );

    if( pname == GL_TEXTURE_MAG_FILTER ) gldl_states.mag_filter = param;
    if( pname == GL_TEXTURE_MIN_FILTER ) gldl_states.min_filter = param;
    if( pname == GL_TEXTURE_WRAP_S ) gldl_states.wrap_s = param;
    if( pname == GL_TEXTURE_WRAP_T ) gldl_states.wrap_t = param;
    }
void gldlTexParameteriv ( GLenum target, GLenum pname, const GLint *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glTexParameteriv( %s, %s, %p );\n", file, line, arg0, arg1,  params );

    DebugTest( 405 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glTexParameteriv( target=%s, pname=%s, params=%p ) at %s:%d\n", debug_break, arg0, arg1, params, file, line );
        DebugFunction();
    }
    gldlTexParameteriv_impl( target, pname, params );
}
void gldlTexImage1D ( GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const GLvoid *pixels, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *arg6, const char *arg7, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glTexImage1D( %s, %d, %d, %d, %d, %s, %s, %p );\n", file, line, arg0, level, internalformat, width, border, arg5, arg6,  pixels );

    DebugTest( 395 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glTexImage1D( target=%s, level=%d, internalformat=%d, width=%d, border=%d, format=%s, type=%s, pixels=%p ) at %s:%d\n", debug_break, arg0, level, internalformat, width, border, arg5, arg6, pixels, file, line );
        DebugFunction();
    }
    gldlTexImage1D_impl( target, level, internalformat, width, border, format, type, pixels );
}
void gldlTexImage2D ( GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid *pixels, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *arg6, const char *arg7, const char *arg8, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glTexImage2D( %s, %d, %d, %d, %d, %d, %s, %s, %p );\n", file, line, arg0, level, internalformat, width, height, border, arg6, arg7,  pixels );

    DebugTest( 396 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glTexImage2D( target=%s, level=%d, internalformat=%d, width=%d, height=%d, border=%d, format=%s, type=%s, pixels=%p ) at %s:%d\n", debug_break, arg0, level, internalformat, width, height, border, arg6, arg7, pixels, file, line );
        DebugFunction();
    }
    gldlTexImage2D_impl( target, level, internalformat, width, height, border, format, type, pixels );
	SetTextureSize( gldl_textures.bound_textures[gldl_textures.current_unit], width, height );
}
void gldlDrawBuffer ( GLenum mode, const char *arg0, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glDrawBuffer( %s );\n", file, line,  arg0 );

    DebugTest( 104 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glDrawBuffer( mode=%s ) at %s:%d\n", debug_break, arg0, file, line );
        DebugFunction();
    }
    gldlDrawBuffer_impl( mode );
}
void gldlClear ( GLbitfield mask, const char *arg0, const char *file, int line ) {
    if( gldl_traces[0].started ) {
        gldl_traces[0].started = 0;
        fclose( gldl_traces[0].f );
    }

        int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glClear( %s );\n", file, line,  arg0 );

    DebugTest( 39 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glClear( mask=%s ) at %s:%d\n", debug_break, arg0, file, line );
        DebugFunction();
    }
    gldlClear_impl( mask );
}
void gldlClearColor ( GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glClearColor( %f, %f, %f, %f );\n", file, line, (float)red, (float)green, (float)blue,  (float)alpha );

    DebugTest( 44 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glClearColor( red=%f, green=%f, blue=%f, alpha=%f ) at %s:%d\n", debug_break, (float)red, (float)green, (float)blue, (float)alpha, file, line );
        DebugFunction();
    }
    gldlClearColor_impl( red, green, blue, alpha );
}
void gldlClearStencil ( GLint s, const char *arg0, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glClearStencil( %d );\n", file, line,  s );

    DebugTest( 47 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glClearStencil( s=%d ) at %s:%d\n", debug_break, s, file, line );
        DebugFunction();
    }
    gldlClearStencil_impl( s );
}
void gldlClearDepth ( GLclampd depth, const char *arg0, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glClearDepth( %f );\n", file, line,  (float)depth );

    DebugTest( 45 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glClearDepth( depth=%f ) at %s:%d\n", debug_break, (float)depth, file, line );
        DebugFunction();
    }
    gldlClearDepth_impl( depth );
}
void gldlStencilMask ( GLuint mask, const char *arg0, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glStencilMask( %d );\n", file, line,  mask );

    DebugTest( 382 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glStencilMask( mask=%d ) at %s:%d\n", debug_break, mask, file, line );
        DebugFunction();
    }
    gldlStencilMask_impl( mask );
}
void gldlColorMask ( GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glColorMask( %d, %d, %d, %d );\n", file, line, red, green, blue,  alpha );

    DebugTest( 49 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glColorMask( red=%d, green=%d, blue=%d, alpha=%d ) at %s:%d\n", debug_break, red, green, blue, alpha, file, line );
        DebugFunction();
    }
    gldlColorMask_impl( red, green, blue, alpha );
}
void gldlDepthMask ( GLboolean flag, const char *arg0, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glDepthMask( %d );\n", file, line,  flag );

    DebugTest( 91 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glDepthMask( flag=%d ) at %s:%d\n", debug_break, flag, file, line );
        DebugFunction();
    }
    gldlDepthMask_impl( flag );
}
void gldlDisable ( GLenum cap, const char *arg0, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glDisable( %s );\n", file, line,  arg0 );

    DebugTest( 97 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glDisable( cap=%s ) at %s:%d\n", debug_break, arg0, file, line );
        DebugFunction();
    }
    gldlDisable_impl( cap );

    if( cap == GL_DEPTH_TEST ) gldl_states.depth_test = 0;
    if( cap == GL_CULL_FACE ) gldl_states.face_culling = 0;
    if( cap == GL_BLEND ) gldl_states.blend = 0;
    }
void gldlEnable ( GLenum cap, const char *arg0, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glEnable( %s );\n", file, line,  arg0 );

    DebugTest( 119 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glEnable( cap=%s ) at %s:%d\n", debug_break, arg0, file, line );
        DebugFunction();
    }
    gldlEnable_impl( cap );

    if( cap == GL_DEPTH_TEST ) gldl_states.depth_test = 1;
    if( cap == GL_CULL_FACE ) gldl_states.face_culling = 1;
    if( cap == GL_BLEND ) gldl_states.blend = 1;
    }
void gldlFinish ( const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glFinish();\n", file, line );

    DebugTest( 127 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glFinish( ) at %s:%d\n", debug_break, file, line );

        DebugFunction();
    }
    gldlFinish_impl(  );
}
void gldlFlush ( const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glFlush();\n", file, line );

    DebugTest( 128 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glFlush( ) at %s:%d\n", debug_break, file, line );

        DebugFunction();
    }
    gldlFlush_impl(  );
}
void gldlBlendFunc ( GLenum sfactor, GLenum dfactor, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glBlendFunc( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( 28 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glBlendFunc( sfactor=%s, dfactor=%s ) at %s:%d\n", debug_break, arg0, arg1, file, line );
        DebugFunction();
    }
    gldlBlendFunc_impl( sfactor, dfactor );
	gldl_states.blendfunc_src = sfactor;
	gldl_states.blendfunc_dest = dfactor;
}
void gldlLogicOp ( GLenum opcode, const char *arg0, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glLogicOp( %s );\n", file, line,  arg0 );

    DebugTest( 270 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glLogicOp( opcode=%s ) at %s:%d\n", debug_break, arg0, file, line );
        DebugFunction();
    }
    gldlLogicOp_impl( opcode );
}
void gldlStencilFunc ( GLenum func, GLint ref, GLuint mask, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glStencilFunc( %s, %d, %d );\n", file, line, arg0, ref,  mask );

    DebugTest( 380 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glStencilFunc( func=%s, ref=%d, mask=%d ) at %s:%d\n", debug_break, arg0, ref, mask, file, line );
        DebugFunction();
    }
    gldlStencilFunc_impl( func, ref, mask );
}
void gldlStencilOp ( GLenum fail, GLenum zfail, GLenum zpass, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glStencilOp( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( 384 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glStencilOp( fail=%s, zfail=%s, zpass=%s ) at %s:%d\n", debug_break, arg0, arg1, arg2, file, line );
        DebugFunction();
    }
    gldlStencilOp_impl( fail, zfail, zpass );
}
void gldlDepthFunc ( GLenum func, const char *arg0, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glDepthFunc( %s );\n", file, line,  arg0 );

    DebugTest( 90 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glDepthFunc( func=%s ) at %s:%d\n", debug_break, arg0, file, line );
        DebugFunction();
    }
    gldlDepthFunc_impl( func );
}
void gldlPixelStoref ( GLenum pname, GLfloat param, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glPixelStoref( %s, %f );\n", file, line, arg0,  (float)param );

    DebugTest( 293 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glPixelStoref( pname=%s, param=%f ) at %s:%d\n", debug_break, arg0, (float)param, file, line );
        DebugFunction();
    }
    gldlPixelStoref_impl( pname, param );
}
void gldlPixelStorei ( GLenum pname, GLint param, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glPixelStorei( %s, %d );\n", file, line, arg0,  param );

    DebugTest( 294 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glPixelStorei( pname=%s, param=%d ) at %s:%d\n", debug_break, arg0, param, file, line );
        DebugFunction();
    }
    gldlPixelStorei_impl( pname, param );
}
void gldlReadBuffer ( GLenum mode, const char *arg0, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glReadBuffer( %s );\n", file, line,  arg0 );

    DebugTest( 357 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glReadBuffer( mode=%s ) at %s:%d\n", debug_break, arg0, file, line );
        DebugFunction();
    }
    gldlReadBuffer_impl( mode );
}
void gldlReadPixels ( GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid *pixels, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *arg6, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glReadPixels( %d, %d, %d, %d, %s, %s, %p );\n", file, line, x, y, width, height, arg4, arg5,  pixels );

    DebugTest( 358 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glReadPixels( x=%d, y=%d, width=%d, height=%d, format=%s, type=%s, pixels=%p ) at %s:%d\n", debug_break, x, y, width, height, arg4, arg5, pixels, file, line );
        DebugFunction();
    }
    gldlReadPixels_impl( x, y, width, height, format, type, pixels );
}
void gldlGetBooleanv ( GLenum pname, GLboolean *params, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetBooleanv( %s, %p );\n", file, line, arg0,  params );

    DebugTest( 160 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetBooleanv( pname=%s, params=%p ) at %s:%d\n", debug_break, arg0, params, file, line );
        DebugFunction();
    }
    gldlGetBooleanv_impl( pname, params );
}
void gldlGetDoublev ( GLenum pname, GLdouble *params, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetDoublev( %s, %p );\n", file, line, arg0,  params );

    DebugTest( 168 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetDoublev( pname=%s, params=%p ) at %s:%d\n", debug_break, arg0, params, file, line );
        DebugFunction();
    }
    gldlGetDoublev_impl( pname, params );
}
GLenum gldlGetError ( const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetError();\n", file, line );

    DebugTest( 169 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetError( ) at %s:%d\n", debug_break, file, line );

        DebugFunction();
    }
    GLenum ret = gldlGetError_impl(  );
	return ret;
}
void gldlGetFloatv ( GLenum pname, GLfloat *params, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetFloatv( %s, %p );\n", file, line, arg0,  params );

    DebugTest( 171 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetFloatv( pname=%s, params=%p ) at %s:%d\n", debug_break, arg0, params, file, line );
        DebugFunction();
    }
    gldlGetFloatv_impl( pname, params );
}
void gldlGetIntegerv ( GLenum pname, GLint *params, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetIntegerv( %s, %p );\n", file, line, arg0,  params );

    DebugTest( 179 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetIntegerv( pname=%s, params=%p ) at %s:%d\n", debug_break, arg0, params, file, line );
        DebugFunction();
    }
    gldlGetIntegerv_impl( pname, params );
}
const GLubyte * gldlGetString ( GLenum name, const char *arg0, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetString( %s );\n", file, line,  arg0 );

    DebugTest( 206 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetString( name=%s ) at %s:%d\n", debug_break, arg0, file, line );
        DebugFunction();
    }
    const GLubyte * ret = gldlGetString_impl( name );
	return ret;
}
void gldlGetTexImage ( GLenum target, GLint level, GLenum format, GLenum type, GLvoid *pixels, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetTexImage( %s, %d, %s, %s, %p );\n", file, line, arg0, level, arg2, arg3,  pixels );

    DebugTest( 211 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetTexImage( target=%s, level=%d, format=%s, type=%s, pixels=%p ) at %s:%d\n", debug_break, arg0, level, arg2, arg3, pixels, file, line );
        DebugFunction();
    }
    gldlGetTexImage_impl( target, level, format, type, pixels );
}
void gldlGetTexParameterfv ( GLenum target, GLenum pname, GLfloat *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetTexParameterfv( %s, %s, %p );\n", file, line, arg0, arg1,  params );

    DebugTest( 216 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetTexParameterfv( target=%s, pname=%s, params=%p ) at %s:%d\n", debug_break, arg0, arg1, params, file, line );
        DebugFunction();
    }
    gldlGetTexParameterfv_impl( target, pname, params );
}
void gldlGetTexParameteriv ( GLenum target, GLenum pname, GLint *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetTexParameteriv( %s, %s, %p );\n", file, line, arg0, arg1,  params );

    DebugTest( 217 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetTexParameteriv( target=%s, pname=%s, params=%p ) at %s:%d\n", debug_break, arg0, arg1, params, file, line );
        DebugFunction();
    }
    gldlGetTexParameteriv_impl( target, pname, params );
}
void gldlGetTexLevelParameterfv ( GLenum target, GLint level, GLenum pname, GLfloat *params, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetTexLevelParameterfv( %s, %d, %s, %p );\n", file, line, arg0, level, arg2,  params );

    DebugTest( 212 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetTexLevelParameterfv( target=%s, level=%d, pname=%s, params=%p ) at %s:%d\n", debug_break, arg0, level, arg2, params, file, line );
        DebugFunction();
    }
    gldlGetTexLevelParameterfv_impl( target, level, pname, params );
}
void gldlGetTexLevelParameteriv ( GLenum target, GLint level, GLenum pname, GLint *params, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetTexLevelParameteriv( %s, %d, %s, %p );\n", file, line, arg0, level, arg2,  params );

    DebugTest( 213 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetTexLevelParameteriv( target=%s, level=%d, pname=%s, params=%p ) at %s:%d\n", debug_break, arg0, level, arg2, params, file, line );
        DebugFunction();
    }
    gldlGetTexLevelParameteriv_impl( target, level, pname, params );
}
GLboolean gldlIsEnabled ( GLenum cap, const char *arg0, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glIsEnabled( %s );\n", file, line,  arg0 );

    DebugTest( 254 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glIsEnabled( cap=%s ) at %s:%d\n", debug_break, arg0, file, line );
        DebugFunction();
    }
    GLboolean ret = gldlIsEnabled_impl( cap );
	return ret;
}
void gldlDepthRange ( GLclampd near, GLclampd far, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glDepthRange( %f, %f );\n", file, line, (float)near,  (float)far );

    DebugTest( 92 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glDepthRange( near=%f, far=%f ) at %s:%d\n", debug_break, (float)near, (float)far, file, line );
        DebugFunction();
    }
    gldlDepthRange_impl( near, far );
}
void gldlViewport ( GLint x, GLint y, GLsizei width, GLsizei height, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glViewport( %d, %d, %d, %d );\n", file, line, x, y, width,  height );

    DebugTest( 555 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glViewport( x=%d, y=%d, width=%d, height=%d ) at %s:%d\n", debug_break, x, y, width, height, file, line );
        DebugFunction();
    }
    gldlViewport_impl( x, y, width, height );
}
void gldlDrawArrays ( GLenum mode, GLint first, GLsizei count, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glDrawArrays( %s, %d, %d );\n", file, line, arg0, first,  count );

    DebugTest( 100 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glDrawArrays( mode=%s, first=%d, count=%d ) at %s:%d\n", debug_break, arg0, first, count, file, line );
        DebugFunction();
    }
    gldlDrawArrays_impl( mode, first, count );
}
void gldlDrawElements ( GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glDrawElements( %s, %d, %s, %p );\n", file, line, arg0, count, arg2,  indices );

    DebugTest( 106 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glDrawElements( mode=%s, count=%d, type=%s, indices=%p ) at %s:%d\n", debug_break, arg0, count, arg2, indices, file, line );
        DebugFunction();
    }
    gldlDrawElements_impl( mode, count, type, indices );
}
void gldlGetPointerv ( GLenum pname, GLvoid* *params, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetPointerv( %s, %p );\n", file, line, arg0,  params );

    DebugTest( 184 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetPointerv( pname=%s, params=%p ) at %s:%d\n", debug_break, arg0, params, file, line );
        DebugFunction();
    }
    gldlGetPointerv_impl( pname, params );
}
void gldlPolygonOffset ( GLfloat factor, GLfloat units, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glPolygonOffset( %f, %f );\n", file, line, (float)factor,  (float)units );

    DebugTest( 301 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glPolygonOffset( factor=%f, units=%f ) at %s:%d\n", debug_break, (float)factor, (float)units, file, line );
        DebugFunction();
    }
    gldlPolygonOffset_impl( factor, units );
}
void gldlCopyTexImage1D ( GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *arg6, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glCopyTexImage1D( %s, %d, %s, %d, %d, %d, %d );\n", file, line, arg0, level, arg2, x, y, width,  border );

    DebugTest( 64 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glCopyTexImage1D( target=%s, level=%d, internalformat=%s, x=%d, y=%d, width=%d, border=%d ) at %s:%d\n", debug_break, arg0, level, arg2, x, y, width, border, file, line );
        DebugFunction();
    }
    gldlCopyTexImage1D_impl( target, level, internalformat, x, y, width, border );
}
void gldlCopyTexImage2D ( GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *arg6, const char *arg7, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glCopyTexImage2D( %s, %d, %s, %d, %d, %d, %d, %d );\n", file, line, arg0, level, arg2, x, y, width, height,  border );

    DebugTest( 65 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glCopyTexImage2D( target=%s, level=%d, internalformat=%s, x=%d, y=%d, width=%d, height=%d, border=%d ) at %s:%d\n", debug_break, arg0, level, arg2, x, y, width, height, border, file, line );
        DebugFunction();
    }
    gldlCopyTexImage2D_impl( target, level, internalformat, x, y, width, height, border );
}
void gldlCopyTexSubImage1D ( GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glCopyTexSubImage1D( %s, %d, %d, %d, %d, %d );\n", file, line, arg0, level, xoffset, x, y,  width );

    DebugTest( 66 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glCopyTexSubImage1D( target=%s, level=%d, xoffset=%d, x=%d, y=%d, width=%d ) at %s:%d\n", debug_break, arg0, level, xoffset, x, y, width, file, line );
        DebugFunction();
    }
    gldlCopyTexSubImage1D_impl( target, level, xoffset, x, y, width );
}
void gldlCopyTexSubImage2D ( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *arg6, const char *arg7, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glCopyTexSubImage2D( %s, %d, %d, %d, %d, %d, %d, %d );\n", file, line, arg0, level, xoffset, yoffset, x, y, width,  height );

    DebugTest( 67 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glCopyTexSubImage2D( target=%s, level=%d, xoffset=%d, yoffset=%d, x=%d, y=%d, width=%d, height=%d ) at %s:%d\n", debug_break, arg0, level, xoffset, yoffset, x, y, width, height, file, line );
        DebugFunction();
    }
    gldlCopyTexSubImage2D_impl( target, level, xoffset, yoffset, x, y, width, height );
}
void gldlTexSubImage1D ( GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid *pixels, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *arg6, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glTexSubImage1D( %s, %d, %d, %d, %s, %s, %p );\n", file, line, arg0, level, xoffset, width, arg4, arg5,  pixels );

    DebugTest( 409 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glTexSubImage1D( target=%s, level=%d, xoffset=%d, width=%d, format=%s, type=%s, pixels=%p ) at %s:%d\n", debug_break, arg0, level, xoffset, width, arg4, arg5, pixels, file, line );
        DebugFunction();
    }
    gldlTexSubImage1D_impl( target, level, xoffset, width, format, type, pixels );
}
void gldlTexSubImage2D ( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *arg6, const char *arg7, const char *arg8, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glTexSubImage2D( %s, %d, %d, %d, %d, %d, %s, %s, %p );\n", file, line, arg0, level, xoffset, yoffset, width, height, arg6, arg7,  pixels );

    DebugTest( 410 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glTexSubImage2D( target=%s, level=%d, xoffset=%d, yoffset=%d, width=%d, height=%d, format=%s, type=%s, pixels=%p ) at %s:%d\n", debug_break, arg0, level, xoffset, yoffset, width, height, arg6, arg7, pixels, file, line );
        DebugFunction();
    }
    gldlTexSubImage2D_impl( target, level, xoffset, yoffset, width, height, format, type, pixels );
}
void gldlBindTexture ( GLenum target, GLuint texture, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glBindTexture( %s, %d );\n", file, line, arg0,  texture );

    DebugTest( 18 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glBindTexture( target=%s, texture=%d ) at %s:%d\n", debug_break, arg0, texture, file, line );
        DebugFunction();
    }
    gldlBindTexture_impl( target, texture );
	BindTexture( texture );
}
void gldlDeleteTextures ( GLsizei n, const GLuint *textures, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glDeleteTextures( %d, %p );\n", file, line, n,  textures );

    DebugTest( 87 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glDeleteTextures( n=%d, textures=%p ) at %s:%d\n", debug_break, n, textures, file, line );
        DebugFunction();
    }
    gldlDeleteTextures_impl( n, textures );
	DeleteTextures( n, textures );
}
void gldlGenTextures ( GLsizei n, GLuint *textures, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGenTextures( %d, %p );\n", file, line, n,  textures );

    DebugTest( 143 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGenTextures( n=%d, textures=%p ) at %s:%d\n", debug_break, n, textures, file, line );
        DebugFunction();
    }
    gldlGenTextures_impl( n, textures );
	AddTextures( n, textures );
}
GLboolean gldlIsTexture ( GLuint texture, const char *arg0, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glIsTexture( %d );\n", file, line,  texture );

    DebugTest( 265 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glIsTexture( texture=%d ) at %s:%d\n", debug_break, texture, file, line );
        DebugFunction();
    }
    GLboolean ret = gldlIsTexture_impl( texture );
	return ret;
}
void gldlBlendColor ( GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glBlendColor( %f, %f, %f, %f );\n", file, line, (float)red, (float)green, (float)blue,  (float)alpha );

    DebugTest( 21 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glBlendColor( red=%f, green=%f, blue=%f, alpha=%f ) at %s:%d\n", debug_break, (float)red, (float)green, (float)blue, (float)alpha, file, line );
        DebugFunction();
    }
    gldlBlendColor_impl( red, green, blue, alpha );
}
void gldlBlendEquation ( GLenum mode, const char *arg0, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glBlendEquation( %s );\n", file, line,  arg0 );

    DebugTest( 22 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glBlendEquation( mode=%s ) at %s:%d\n", debug_break, arg0, file, line );
        DebugFunction();
    }
    gldlBlendEquation_impl( mode );
}
void gldlDrawRangeElements ( GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid *indices, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glDrawRangeElements( %s, %d, %d, %d, %s, %p );\n", file, line, arg0, start, end, count, arg4,  indices );

    DebugTest( 113 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glDrawRangeElements( mode=%s, start=%d, end=%d, count=%d, type=%s, indices=%p ) at %s:%d\n", debug_break, arg0, start, end, count, arg4, indices, file, line );
        DebugFunction();
    }
    gldlDrawRangeElements_impl( mode, start, end, count, type, indices );
}
void gldlTexImage3D ( GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid *pixels, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *arg6, const char *arg7, const char *arg8, const char *arg9, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glTexImage3D( %s, %d, %d, %d, %d, %d, %d, %s, %s, %p );\n", file, line, arg0, level, internalformat, width, height, depth, border, arg7, arg8,  pixels );

    DebugTest( 398 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glTexImage3D( target=%s, level=%d, internalformat=%d, width=%d, height=%d, depth=%d, border=%d, format=%s, type=%s, pixels=%p ) at %s:%d\n", debug_break, arg0, level, internalformat, width, height, depth, border, arg7, arg8, pixels, file, line );
        DebugFunction();
    }
    gldlTexImage3D_impl( target, level, internalformat, width, height, depth, border, format, type, pixels );
}
void gldlTexSubImage3D ( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid *pixels, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *arg6, const char *arg7, const char *arg8, const char *arg9, const char *arg10, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glTexSubImage3D( %s, %d, %d, %d, %d, %d, %d, %d, %s, %s, %p );\n", file, line, arg0, level, xoffset, yoffset, zoffset, width, height, depth, arg8, arg9,  pixels );

    DebugTest( 411 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glTexSubImage3D( target=%s, level=%d, xoffset=%d, yoffset=%d, zoffset=%d, width=%d, height=%d, depth=%d, format=%s, type=%s, pixels=%p ) at %s:%d\n", debug_break, arg0, level, xoffset, yoffset, zoffset, width, height, depth, arg8, arg9, pixels, file, line );
        DebugFunction();
    }
    gldlTexSubImage3D_impl( target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels );
}
void gldlCopyTexSubImage3D ( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *arg6, const char *arg7, const char *arg8, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glCopyTexSubImage3D( %s, %d, %d, %d, %d, %d, %d, %d, %d );\n", file, line, arg0, level, xoffset, yoffset, zoffset, x, y, width,  height );

    DebugTest( 68 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glCopyTexSubImage3D( target=%s, level=%d, xoffset=%d, yoffset=%d, zoffset=%d, x=%d, y=%d, width=%d, height=%d ) at %s:%d\n", debug_break, arg0, level, xoffset, yoffset, zoffset, x, y, width, height, file, line );
        DebugFunction();
    }
    gldlCopyTexSubImage3D_impl( target, level, xoffset, yoffset, zoffset, x, y, width, height );
}
void gldlActiveTexture ( GLenum texture, const char *arg0, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glActiveTexture( %s );\n", file, line,  arg0 );

    DebugTest( 1 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glActiveTexture( texture=%s ) at %s:%d\n", debug_break, arg0, file, line );
        DebugFunction();
    }
    gldlActiveTexture_impl( texture );
	SetTextureUnit( texture );
}
void gldlSampleCoverage ( GLclampf value, GLboolean invert, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glSampleCoverage( %f, %d );\n", file, line, (float)value,  invert );

    DebugTest( 364 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glSampleCoverage( value=%f, invert=%d ) at %s:%d\n", debug_break, (float)value, invert, file, line );
        DebugFunction();
    }
    gldlSampleCoverage_impl( value, invert );
}
void gldlCompressedTexImage3D ( GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid *data, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *arg6, const char *arg7, const char *arg8, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glCompressedTexImage3D( %s, %d, %s, %d, %d, %d, %d, %d, %p );\n", file, line, arg0, level, arg2, width, height, depth, border, imageSize,  data );

    DebugTest( 59 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glCompressedTexImage3D( target=%s, level=%d, internalformat=%s, width=%d, height=%d, depth=%d, border=%d, imageSize=%d, data=%p ) at %s:%d\n", debug_break, arg0, level, arg2, width, height, depth, border, imageSize, data, file, line );
        DebugFunction();
    }
    gldlCompressedTexImage3D_impl( target, level, internalformat, width, height, depth, border, imageSize, data );
}
void gldlCompressedTexImage2D ( GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid *data, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *arg6, const char *arg7, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glCompressedTexImage2D( %s, %d, %s, %d, %d, %d, %d, %p );\n", file, line, arg0, level, arg2, width, height, border, imageSize,  data );

    DebugTest( 58 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glCompressedTexImage2D( target=%s, level=%d, internalformat=%s, width=%d, height=%d, border=%d, imageSize=%d, data=%p ) at %s:%d\n", debug_break, arg0, level, arg2, width, height, border, imageSize, data, file, line );
        DebugFunction();
    }
    gldlCompressedTexImage2D_impl( target, level, internalformat, width, height, border, imageSize, data );
}
void gldlCompressedTexImage1D ( GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid *data, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *arg6, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glCompressedTexImage1D( %s, %d, %s, %d, %d, %d, %p );\n", file, line, arg0, level, arg2, width, border, imageSize,  data );

    DebugTest( 57 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glCompressedTexImage1D( target=%s, level=%d, internalformat=%s, width=%d, border=%d, imageSize=%d, data=%p ) at %s:%d\n", debug_break, arg0, level, arg2, width, border, imageSize, data, file, line );
        DebugFunction();
    }
    gldlCompressedTexImage1D_impl( target, level, internalformat, width, border, imageSize, data );
}
void gldlCompressedTexSubImage3D ( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid *data, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *arg6, const char *arg7, const char *arg8, const char *arg9, const char *arg10, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glCompressedTexSubImage3D( %s, %d, %d, %d, %d, %d, %d, %d, %s, %d, %p );\n", file, line, arg0, level, xoffset, yoffset, zoffset, width, height, depth, arg8, imageSize,  data );

    DebugTest( 62 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glCompressedTexSubImage3D( target=%s, level=%d, xoffset=%d, yoffset=%d, zoffset=%d, width=%d, height=%d, depth=%d, format=%s, imageSize=%d, data=%p ) at %s:%d\n", debug_break, arg0, level, xoffset, yoffset, zoffset, width, height, depth, arg8, imageSize, data, file, line );
        DebugFunction();
    }
    gldlCompressedTexSubImage3D_impl( target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data );
}
void gldlCompressedTexSubImage2D ( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid *data, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *arg6, const char *arg7, const char *arg8, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glCompressedTexSubImage2D( %s, %d, %d, %d, %d, %d, %s, %d, %p );\n", file, line, arg0, level, xoffset, yoffset, width, height, arg6, imageSize,  data );

    DebugTest( 61 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glCompressedTexSubImage2D( target=%s, level=%d, xoffset=%d, yoffset=%d, width=%d, height=%d, format=%s, imageSize=%d, data=%p ) at %s:%d\n", debug_break, arg0, level, xoffset, yoffset, width, height, arg6, imageSize, data, file, line );
        DebugFunction();
    }
    gldlCompressedTexSubImage2D_impl( target, level, xoffset, yoffset, width, height, format, imageSize, data );
}
void gldlCompressedTexSubImage1D ( GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid *data, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *arg6, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glCompressedTexSubImage1D( %s, %d, %d, %d, %s, %d, %p );\n", file, line, arg0, level, xoffset, width, arg4, imageSize,  data );

    DebugTest( 60 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glCompressedTexSubImage1D( target=%s, level=%d, xoffset=%d, width=%d, format=%s, imageSize=%d, data=%p ) at %s:%d\n", debug_break, arg0, level, xoffset, width, arg4, imageSize, data, file, line );
        DebugFunction();
    }
    gldlCompressedTexSubImage1D_impl( target, level, xoffset, width, format, imageSize, data );
}
void gldlGetCompressedTexImage ( GLenum target, GLint level, GLvoid *img, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetCompressedTexImage( %s, %d, %p );\n", file, line, arg0, level,  img );

    DebugTest( 165 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetCompressedTexImage( target=%s, level=%d, img=%p ) at %s:%d\n", debug_break, arg0, level, img, file, line );
        DebugFunction();
    }
    gldlGetCompressedTexImage_impl( target, level, img );
}
void gldlBlendFuncSeparate ( GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glBlendFuncSeparate( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( 29 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glBlendFuncSeparate( sfactorRGB=%s, dfactorRGB=%s, sfactorAlpha=%s, dfactorAlpha=%s ) at %s:%d\n", debug_break, arg0, arg1, arg2, arg3, file, line );
        DebugFunction();
    }
    gldlBlendFuncSeparate_impl( sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha );
}
void gldlMultiDrawArrays ( GLenum mode, const GLint *first, const GLsizei *count, GLsizei primcount, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glMultiDrawArrays( %s, %p, %p, %d );\n", file, line, arg0, first, count,  primcount );

    DebugTest( 276 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glMultiDrawArrays( mode=%s, first=%p, count=%p, primcount=%d ) at %s:%d\n", debug_break, arg0, first, count, primcount, file, line );
        DebugFunction();
    }
    gldlMultiDrawArrays_impl( mode, first, count, primcount );
}
void gldlMultiDrawElements ( GLenum mode, const GLsizei *count, GLenum type, const GLvoid* *indices, GLsizei primcount, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glMultiDrawElements( %s, %p, %s, %p, %d );\n", file, line, arg0, count, arg2, indices,  primcount );

    DebugTest( 277 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glMultiDrawElements( mode=%s, count=%p, type=%s, indices=%p, primcount=%d ) at %s:%d\n", debug_break, arg0, count, arg2, indices, primcount, file, line );
        DebugFunction();
    }
    gldlMultiDrawElements_impl( mode, count, type, indices, primcount );
}
void gldlPointParameterf ( GLenum pname, GLfloat param, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glPointParameterf( %s, %f );\n", file, line, arg0,  (float)param );

    DebugTest( 295 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glPointParameterf( pname=%s, param=%f ) at %s:%d\n", debug_break, arg0, (float)param, file, line );
        DebugFunction();
    }
    gldlPointParameterf_impl( pname, param );
}
void gldlPointParameterfv ( GLenum pname, const GLfloat *params, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glPointParameterfv( %s, %p );\n", file, line, arg0,  params );

    DebugTest( 296 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glPointParameterfv( pname=%s, params=%p ) at %s:%d\n", debug_break, arg0, params, file, line );
        DebugFunction();
    }
    gldlPointParameterfv_impl( pname, params );
}
void gldlPointParameteri ( GLenum pname, GLint param, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glPointParameteri( %s, %d );\n", file, line, arg0,  param );

    DebugTest( 297 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glPointParameteri( pname=%s, param=%d ) at %s:%d\n", debug_break, arg0, param, file, line );
        DebugFunction();
    }
    gldlPointParameteri_impl( pname, param );
}
void gldlPointParameteriv ( GLenum pname, const GLint *params, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glPointParameteriv( %s, %p );\n", file, line, arg0,  params );

    DebugTest( 298 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glPointParameteriv( pname=%s, params=%p ) at %s:%d\n", debug_break, arg0, params, file, line );
        DebugFunction();
    }
    gldlPointParameteriv_impl( pname, params );
}
void gldlGenQueries ( GLsizei n, GLuint *ids, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGenQueries( %d, %p );\n", file, line, n,  ids );

    DebugTest( 140 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGenQueries( n=%d, ids=%p ) at %s:%d\n", debug_break, n, ids, file, line );
        DebugFunction();
    }
    gldlGenQueries_impl( n, ids );
}
void gldlDeleteQueries ( GLsizei n, const GLuint *ids, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glDeleteQueries( %d, %p );\n", file, line, n,  ids );

    DebugTest( 82 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glDeleteQueries( n=%d, ids=%p ) at %s:%d\n", debug_break, n, ids, file, line );
        DebugFunction();
    }
    gldlDeleteQueries_impl( n, ids );
}
GLboolean gldlIsQuery ( GLuint id, const char *arg0, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glIsQuery( %d );\n", file, line,  id );

    DebugTest( 260 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glIsQuery( id=%d ) at %s:%d\n", debug_break, id, file, line );
        DebugFunction();
    }
    GLboolean ret = gldlIsQuery_impl( id );
	return ret;
}
void gldlBeginQuery ( GLenum target, GLuint id, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glBeginQuery( %s, %d );\n", file, line, arg0,  id );

    DebugTest( 4 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glBeginQuery( target=%s, id=%d ) at %s:%d\n", debug_break, arg0, id, file, line );
        DebugFunction();
    }
    gldlBeginQuery_impl( target, id );
}
void gldlEndQuery ( GLenum target, const char *arg0, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glEndQuery( %s );\n", file, line,  arg0 );

    DebugTest( 123 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glEndQuery( target=%s ) at %s:%d\n", debug_break, arg0, file, line );
        DebugFunction();
    }
    gldlEndQuery_impl( target );
}
void gldlGetQueryiv ( GLenum target, GLenum pname, GLint *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetQueryiv( %s, %s, %p );\n", file, line, arg0, arg1,  params );

    DebugTest( 196 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetQueryiv( target=%s, pname=%s, params=%p ) at %s:%d\n", debug_break, arg0, arg1, params, file, line );
        DebugFunction();
    }
    gldlGetQueryiv_impl( target, pname, params );
}
void gldlGetQueryObjectiv ( GLuint id, GLenum pname, GLint *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetQueryObjectiv( %d, %s, %p );\n", file, line, id, arg1,  params );

    DebugTest( 193 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetQueryObjectiv( id=%d, pname=%s, params=%p ) at %s:%d\n", debug_break, id, arg1, params, file, line );
        DebugFunction();
    }
    gldlGetQueryObjectiv_impl( id, pname, params );
}
void gldlGetQueryObjectuiv ( GLuint id, GLenum pname, GLuint *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetQueryObjectuiv( %d, %s, %p );\n", file, line, id, arg1,  params );

    DebugTest( 195 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetQueryObjectuiv( id=%d, pname=%s, params=%p ) at %s:%d\n", debug_break, id, arg1, params, file, line );
        DebugFunction();
    }
    gldlGetQueryObjectuiv_impl( id, pname, params );
}
void gldlBindBuffer ( GLenum target, GLuint buffer, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glBindBuffer( %s, %d );\n", file, line, arg0,  buffer );

    DebugTest( 8 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glBindBuffer( target=%s, buffer=%d ) at %s:%d\n", debug_break, arg0, buffer, file, line );
        DebugFunction();
    }
    gldlBindBuffer_impl( target, buffer );
	BindBuffer( buffer, target == GL_ARRAY_BUFFER ? 0 : 1 );
}
void gldlDeleteBuffers ( GLsizei n, const GLuint *buffers, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glDeleteBuffers( %d, %p );\n", file, line, n,  buffers );

    DebugTest( 77 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glDeleteBuffers( n=%d, buffers=%p ) at %s:%d\n", debug_break, n, buffers, file, line );
        DebugFunction();
    }
    gldlDeleteBuffers_impl( n, buffers );
	DeleteBuffers( n, buffers );
}
void gldlGenBuffers ( GLsizei n, GLuint *buffers, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGenBuffers( %d, %p );\n", file, line, n,  buffers );

    DebugTest( 137 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGenBuffers( n=%d, buffers=%p ) at %s:%d\n", debug_break, n, buffers, file, line );
        DebugFunction();
    }
    gldlGenBuffers_impl( n, buffers );
	AddBuffers( n, buffers );
}
GLboolean gldlIsBuffer ( GLuint buffer, const char *arg0, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glIsBuffer( %d );\n", file, line,  buffer );

    DebugTest( 253 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glIsBuffer( buffer=%d ) at %s:%d\n", debug_break, buffer, file, line );
        DebugFunction();
    }
    GLboolean ret = gldlIsBuffer_impl( buffer );
	return ret;
}
void gldlBufferData ( GLenum target, GLsizeiptr size, const GLvoid *data, GLenum usage, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glBufferData( %s, %d, %p, %s );\n", file, line, arg0, (int)size, data,  arg3 );

    DebugTest( 35 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glBufferData( target=%s, size=%d, data=%p, usage=%s ) at %s:%d\n", debug_break, arg0, (int)size, data, arg3, file, line );
        DebugFunction();
    }
    gldlBufferData_impl( target, size, data, usage );
	FillBuffer( data, size, 0, target == GL_ARRAY_BUFFER ? 0 : 1 );
}
void gldlBufferSubData ( GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid *data, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glBufferSubData( %s, %d, %d, %p );\n", file, line, arg0, (int)offset, (int)size,  data );

    DebugTest( 36 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glBufferSubData( target=%s, offset=%d, size=%d, data=%p ) at %s:%d\n", debug_break, arg0, (int)offset, (int)size, data, file, line );
        DebugFunction();
    }
    gldlBufferSubData_impl( target, offset, size, data );
	FillBuffer( data, size, offset, target == GL_ARRAY_BUFFER ? 0 : 1 );
}
void gldlGetBufferSubData ( GLenum target, GLintptr offset, GLsizeiptr size, GLvoid *data, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetBufferSubData( %s, %d, %d, %p );\n", file, line, arg0, (int)offset, (int)size,  data );

    DebugTest( 164 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetBufferSubData( target=%s, offset=%d, size=%d, data=%p ) at %s:%d\n", debug_break, arg0, (int)offset, (int)size, data, file, line );
        DebugFunction();
    }
    gldlGetBufferSubData_impl( target, offset, size, data );
}
GLvoid* gldlMapBuffer ( GLenum target, GLenum access, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glMapBuffer( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( 271 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glMapBuffer( target=%s, access=%s ) at %s:%d\n", debug_break, arg0, arg1, file, line );
        DebugFunction();
    }
    GLvoid* ret = gldlMapBuffer_impl( target, access );
	return ret;
}
GLboolean gldlUnmapBuffer ( GLenum target, const char *arg0, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glUnmapBuffer( %s );\n", file, line,  arg0 );

    DebugTest( 468 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glUnmapBuffer( target=%s ) at %s:%d\n", debug_break, arg0, file, line );
        DebugFunction();
    }
    GLboolean ret = gldlUnmapBuffer_impl( target );
	return ret;
}
void gldlGetBufferParameteriv ( GLenum target, GLenum pname, GLint *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetBufferParameteriv( %s, %s, %p );\n", file, line, arg0, arg1,  params );

    DebugTest( 162 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetBufferParameteriv( target=%s, pname=%s, params=%p ) at %s:%d\n", debug_break, arg0, arg1, params, file, line );
        DebugFunction();
    }
    gldlGetBufferParameteriv_impl( target, pname, params );
}
void gldlGetBufferPointerv ( GLenum target, GLenum pname, GLvoid* *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetBufferPointerv( %s, %s, %p );\n", file, line, arg0, arg1,  params );

    DebugTest( 163 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetBufferPointerv( target=%s, pname=%s, params=%p ) at %s:%d\n", debug_break, arg0, arg1, params, file, line );
        DebugFunction();
    }
    gldlGetBufferPointerv_impl( target, pname, params );
}
void gldlBlendEquationSeparate ( GLenum modeRGB, GLenum modeAlpha, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glBlendEquationSeparate( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( 23 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glBlendEquationSeparate( modeRGB=%s, modeAlpha=%s ) at %s:%d\n", debug_break, arg0, arg1, file, line );
        DebugFunction();
    }
    gldlBlendEquationSeparate_impl( modeRGB, modeAlpha );
}
void gldlDrawBuffers ( GLsizei n, const GLenum *bufs, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glDrawBuffers( %d, %p );\n", file, line, n,  bufs );

    DebugTest( 105 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glDrawBuffers( n=%d, bufs=%p ) at %s:%d\n", debug_break, n, bufs, file, line );
        DebugFunction();
    }
    gldlDrawBuffers_impl( n, bufs );
}
void gldlStencilOpSeparate ( GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glStencilOpSeparate( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( 385 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glStencilOpSeparate( face=%s, sfail=%s, dpfail=%s, dppass=%s ) at %s:%d\n", debug_break, arg0, arg1, arg2, arg3, file, line );
        DebugFunction();
    }
    gldlStencilOpSeparate_impl( face, sfail, dpfail, dppass );
}
void gldlStencilFuncSeparate ( GLenum face, GLenum func, GLint ref, GLuint mask, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glStencilFuncSeparate( %s, %s, %d, %d );\n", file, line, arg0, arg1, ref,  mask );

    DebugTest( 381 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glStencilFuncSeparate( face=%s, func=%s, ref=%d, mask=%d ) at %s:%d\n", debug_break, arg0, arg1, ref, mask, file, line );
        DebugFunction();
    }
    gldlStencilFuncSeparate_impl( face, func, ref, mask );
}
void gldlStencilMaskSeparate ( GLenum face, GLuint mask, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glStencilMaskSeparate( %s, %d );\n", file, line, arg0,  mask );

    DebugTest( 383 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glStencilMaskSeparate( face=%s, mask=%d ) at %s:%d\n", debug_break, arg0, mask, file, line );
        DebugFunction();
    }
    gldlStencilMaskSeparate_impl( face, mask );
}
void gldlAttachShader ( GLuint program, GLuint shader, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glAttachShader( %d, %d );\n", file, line, program,  shader );

    DebugTest( 2 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glAttachShader( program=%d, shader=%d ) at %s:%d\n", debug_break, program, shader, file, line );
        DebugFunction();
    }
    gldlAttachShader_impl( program, shader );
	AttachShader( program, shader );
}
void gldlBindAttribLocation ( GLuint program, GLuint index, const GLchar *name, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glBindAttribLocation( %d, %d, %p );\n", file, line, program, index,  name );

    DebugTest( 7 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glBindAttribLocation( program=%d, index=%d, name=%p ) at %s:%d\n", debug_break, program, index, name, file, line );
        DebugFunction();
    }
    gldlBindAttribLocation_impl( program, index, name );
}
void gldlCompileShader ( GLuint shader, const char *arg0, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glCompileShader( %d );\n", file, line,  shader );

    DebugTest( 55 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glCompileShader( shader=%d ) at %s:%d\n", debug_break, shader, file, line );
        DebugFunction();
    }
    gldlCompileShader_impl( shader );
}
GLuint gldlCreateProgram ( const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glCreateProgram();\n", file, line );

    DebugTest( 69 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glCreateProgram( ) at %s:%d\n", debug_break, file, line );

        DebugFunction();
    }
    GLuint ret = gldlCreateProgram_impl(  );
	AddProgram( ret );
	return ret;
}
GLuint gldlCreateShader ( GLenum type, const char *arg0, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glCreateShader( %s );\n", file, line,  arg0 );

    DebugTest( 70 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glCreateShader( type=%s ) at %s:%d\n", debug_break, arg0, file, line );
        DebugFunction();
    }
    GLuint ret = gldlCreateShader_impl( type );
	AddShader( ret, type );
	return ret;
}
void gldlDeleteProgram ( GLuint program, const char *arg0, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glDeleteProgram( %d );\n", file, line,  program );

    DebugTest( 80 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glDeleteProgram( program=%d ) at %s:%d\n", debug_break, program, file, line );
        DebugFunction();
    }
    gldlDeleteProgram_impl( program );
	DeleteProgram( program );
}
void gldlDeleteShader ( GLuint shader, const char *arg0, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glDeleteShader( %d );\n", file, line,  shader );

    DebugTest( 85 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glDeleteShader( shader=%d ) at %s:%d\n", debug_break, shader, file, line );
        DebugFunction();
    }
    gldlDeleteShader_impl( shader );
}
void gldlDetachShader ( GLuint program, GLuint shader, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glDetachShader( %d, %d );\n", file, line, program,  shader );

    DebugTest( 96 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glDetachShader( program=%d, shader=%d ) at %s:%d\n", debug_break, program, shader, file, line );
        DebugFunction();
    }
    gldlDetachShader_impl( program, shader );
	DetachShader( program, shader );
}
void gldlDisableVertexAttribArray ( GLuint index, const char *arg0, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glDisableVertexAttribArray( %d );\n", file, line,  index );

    DebugTest( 98 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glDisableVertexAttribArray( index=%d ) at %s:%d\n", debug_break, index, file, line );
        DebugFunction();
    }
    gldlDisableVertexAttribArray_impl( index );
}
void gldlEnableVertexAttribArray ( GLuint index, const char *arg0, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glEnableVertexAttribArray( %d );\n", file, line,  index );

    DebugTest( 120 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glEnableVertexAttribArray( index=%d ) at %s:%d\n", debug_break, index, file, line );
        DebugFunction();
    }
    gldlEnableVertexAttribArray_impl( index );
}
void gldlGetActiveAttrib ( GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *arg6, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetActiveAttrib( %d, %d, %d, %p, %p, %p, %p );\n", file, line, program, index, bufSize, length, size, type,  name );

    DebugTest( 148 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetActiveAttrib( program=%d, index=%d, bufSize=%d, length=%p, size=%p, type=%p, name=%p ) at %s:%d\n", debug_break, program, index, bufSize, length, size, type, name, file, line );
        DebugFunction();
    }
    gldlGetActiveAttrib_impl( program, index, bufSize, length, size, type, name );
}
void gldlGetActiveUniform ( GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *arg6, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetActiveUniform( %d, %d, %d, %p, %p, %p, %p );\n", file, line, program, index, bufSize, length, size, type,  name );

    DebugTest( 152 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetActiveUniform( program=%d, index=%d, bufSize=%d, length=%p, size=%p, type=%p, name=%p ) at %s:%d\n", debug_break, program, index, bufSize, length, size, type, name, file, line );
        DebugFunction();
    }
    gldlGetActiveUniform_impl( program, index, bufSize, length, size, type, name );
}
void gldlGetAttachedShaders ( GLuint program, GLsizei maxCount, GLsizei *count, GLuint *obj, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetAttachedShaders( %d, %d, %p, %p );\n", file, line, program, maxCount, count,  obj );

    DebugTest( 157 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetAttachedShaders( program=%d, maxCount=%d, count=%p, obj=%p ) at %s:%d\n", debug_break, program, maxCount, count, obj, file, line );
        DebugFunction();
    }
    gldlGetAttachedShaders_impl( program, maxCount, count, obj );
}
GLint gldlGetAttribLocation ( GLuint program, const GLchar *name, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetAttribLocation( %d, %p );\n", file, line, program,  name );

    DebugTest( 158 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetAttribLocation( program=%d, name=%p ) at %s:%d\n", debug_break, program, name, file, line );
        DebugFunction();
    }
    GLint ret = gldlGetAttribLocation_impl( program, name );
	return ret;
}
void gldlGetProgramiv ( GLuint program, GLenum pname, GLint *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetProgramiv( %d, %s, %p );\n", file, line, program, arg1,  params );

    DebugTest( 190 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetProgramiv( program=%d, pname=%s, params=%p ) at %s:%d\n", debug_break, program, arg1, params, file, line );
        DebugFunction();
    }
    gldlGetProgramiv_impl( program, pname, params );
}
void gldlGetProgramInfoLog ( GLuint program, GLsizei bufSize, GLsizei *length, GLchar *infoLog, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetProgramInfoLog( %d, %d, %p, %p );\n", file, line, program, bufSize, length,  infoLog );

    DebugTest( 186 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetProgramInfoLog( program=%d, bufSize=%d, length=%p, infoLog=%p ) at %s:%d\n", debug_break, program, bufSize, length, infoLog, file, line );
        DebugFunction();
    }
    gldlGetProgramInfoLog_impl( program, bufSize, length, infoLog );
}
void gldlGetShaderiv ( GLuint shader, GLenum pname, GLint *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetShaderiv( %d, %s, %p );\n", file, line, shader, arg1,  params );

    DebugTest( 205 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetShaderiv( shader=%d, pname=%s, params=%p ) at %s:%d\n", debug_break, shader, arg1, params, file, line );
        DebugFunction();
    }
    gldlGetShaderiv_impl( shader, pname, params );
}
void gldlGetShaderInfoLog ( GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *infoLog, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetShaderInfoLog( %d, %d, %p, %p );\n", file, line, shader, bufSize, length,  infoLog );

    DebugTest( 202 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetShaderInfoLog( shader=%d, bufSize=%d, length=%p, infoLog=%p ) at %s:%d\n", debug_break, shader, bufSize, length, infoLog, file, line );
        DebugFunction();
    }
    gldlGetShaderInfoLog_impl( shader, bufSize, length, infoLog );
}
void gldlGetShaderSource ( GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *source, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetShaderSource( %d, %d, %p, %p );\n", file, line, shader, bufSize, length,  source );

    DebugTest( 204 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetShaderSource( shader=%d, bufSize=%d, length=%p, source=%p ) at %s:%d\n", debug_break, shader, bufSize, length, source, file, line );
        DebugFunction();
    }
    gldlGetShaderSource_impl( shader, bufSize, length, source );
}
GLint gldlGetUniformLocation ( GLuint program, const GLchar *name, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetUniformLocation( %d, %p );\n", file, line, program,  name );

    DebugTest( 221 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetUniformLocation( program=%d, name=%p ) at %s:%d\n", debug_break, program, name, file, line );
        DebugFunction();
    }
    GLint ret = gldlGetUniformLocation_impl( program, name );
	return ret;
}
void gldlGetUniformfv ( GLuint program, GLint location, GLfloat *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetUniformfv( %d, %d, %p );\n", file, line, program, location,  params );

    DebugTest( 224 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetUniformfv( program=%d, location=%d, params=%p ) at %s:%d\n", debug_break, program, location, params, file, line );
        DebugFunction();
    }
    gldlGetUniformfv_impl( program, location, params );
}
void gldlGetUniformiv ( GLuint program, GLint location, GLint *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetUniformiv( %d, %d, %p );\n", file, line, program, location,  params );

    DebugTest( 225 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetUniformiv( program=%d, location=%d, params=%p ) at %s:%d\n", debug_break, program, location, params, file, line );
        DebugFunction();
    }
    gldlGetUniformiv_impl( program, location, params );
}
void gldlGetVertexAttribdv ( GLuint index, GLenum pname, GLdouble *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetVertexAttribdv( %d, %s, %p );\n", file, line, index, arg1,  params );

    DebugTest( 231 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetVertexAttribdv( index=%d, pname=%s, params=%p ) at %s:%d\n", debug_break, index, arg1, params, file, line );
        DebugFunction();
    }
    gldlGetVertexAttribdv_impl( index, pname, params );
}
void gldlGetVertexAttribfv ( GLuint index, GLenum pname, GLfloat *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetVertexAttribfv( %d, %s, %p );\n", file, line, index, arg1,  params );

    DebugTest( 232 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetVertexAttribfv( index=%d, pname=%s, params=%p ) at %s:%d\n", debug_break, index, arg1, params, file, line );
        DebugFunction();
    }
    gldlGetVertexAttribfv_impl( index, pname, params );
}
void gldlGetVertexAttribiv ( GLuint index, GLenum pname, GLint *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetVertexAttribiv( %d, %s, %p );\n", file, line, index, arg1,  params );

    DebugTest( 233 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetVertexAttribiv( index=%d, pname=%s, params=%p ) at %s:%d\n", debug_break, index, arg1, params, file, line );
        DebugFunction();
    }
    gldlGetVertexAttribiv_impl( index, pname, params );
}
void gldlGetVertexAttribPointerv ( GLuint index, GLenum pname, GLvoid* *pointer, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetVertexAttribPointerv( %d, %s, %p );\n", file, line, index, arg1,  pointer );

    DebugTest( 230 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetVertexAttribPointerv( index=%d, pname=%s, pointer=%p ) at %s:%d\n", debug_break, index, arg1, pointer, file, line );
        DebugFunction();
    }
    gldlGetVertexAttribPointerv_impl( index, pname, pointer );
}
GLboolean gldlIsProgram ( GLuint program, const char *arg0, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glIsProgram( %d );\n", file, line,  program );

    DebugTest( 258 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glIsProgram( program=%d ) at %s:%d\n", debug_break, program, file, line );
        DebugFunction();
    }
    GLboolean ret = gldlIsProgram_impl( program );
	return ret;
}
GLboolean gldlIsShader ( GLuint shader, const char *arg0, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glIsShader( %d );\n", file, line,  shader );

    DebugTest( 263 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glIsShader( shader=%d ) at %s:%d\n", debug_break, shader, file, line );
        DebugFunction();
    }
    GLboolean ret = gldlIsShader_impl( shader );
	return ret;
}
void gldlLinkProgram ( GLuint program, const char *arg0, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glLinkProgram( %d );\n", file, line,  program );

    DebugTest( 269 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glLinkProgram( program=%d ) at %s:%d\n", debug_break, program, file, line );
        DebugFunction();
    }
    gldlLinkProgram_impl( program );
}
void gldlShaderSource ( GLuint shader, GLsizei count, const GLchar* *string, const GLint *length, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glShaderSource( %d, %d, %p, %p );\n", file, line, shader, count, string,  length );

    DebugTest( 379 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glShaderSource( shader=%d, count=%d, string=%p, length=%p ) at %s:%d\n", debug_break, shader, count, string, length, file, line );
        DebugFunction();
    }
    gldlShaderSource_impl( shader, count, string, length );
	SetShaderSource( shader, string[0] );
}
void gldlUseProgram ( GLuint program, const char *arg0, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glUseProgram( %d );\n", file, line,  program );

    DebugTest( 469 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glUseProgram( program=%d ) at %s:%d\n", debug_break, program, file, line );
        DebugFunction();
    }
    gldlUseProgram_impl( program );
	BindProgram( program );
}
void gldlUniform1f ( GLint location, GLfloat v0, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glUniform1f( %d, %f );\n", file, line, location,  (float)v0 );

    DebugTest( 418 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glUniform1f( location=%d, v0=%f ) at %s:%d\n", debug_break, location, (float)v0, file, line );
        DebugFunction();
    }
    gldlUniform1f_impl( location, v0 );
}
void gldlUniform2f ( GLint location, GLfloat v0, GLfloat v1, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glUniform2f( %d, %f, %f );\n", file, line, location, (float)v0,  (float)v1 );

    DebugTest( 426 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glUniform2f( location=%d, v0=%f, v1=%f ) at %s:%d\n", debug_break, location, (float)v0, (float)v1, file, line );
        DebugFunction();
    }
    gldlUniform2f_impl( location, v0, v1 );
}
void gldlUniform3f ( GLint location, GLfloat v0, GLfloat v1, GLfloat v2, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glUniform3f( %d, %f, %f, %f );\n", file, line, location, (float)v0, (float)v1,  (float)v2 );

    DebugTest( 434 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glUniform3f( location=%d, v0=%f, v1=%f, v2=%f ) at %s:%d\n", debug_break, location, (float)v0, (float)v1, (float)v2, file, line );
        DebugFunction();
    }
    gldlUniform3f_impl( location, v0, v1, v2 );
}
void gldlUniform4f ( GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glUniform4f( %d, %f, %f, %f, %f );\n", file, line, location, (float)v0, (float)v1, (float)v2,  (float)v3 );

    DebugTest( 442 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glUniform4f( location=%d, v0=%f, v1=%f, v2=%f, v3=%f ) at %s:%d\n", debug_break, location, (float)v0, (float)v1, (float)v2, (float)v3, file, line );
        DebugFunction();
    }
    gldlUniform4f_impl( location, v0, v1, v2, v3 );
}
void gldlUniform1i ( GLint location, GLint v0, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glUniform1i( %d, %d );\n", file, line, location,  v0 );

    DebugTest( 420 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glUniform1i( location=%d, v0=%d ) at %s:%d\n", debug_break, location, v0, file, line );
        DebugFunction();
    }
    gldlUniform1i_impl( location, v0 );
}
void gldlUniform2i ( GLint location, GLint v0, GLint v1, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glUniform2i( %d, %d, %d );\n", file, line, location, v0,  v1 );

    DebugTest( 428 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glUniform2i( location=%d, v0=%d, v1=%d ) at %s:%d\n", debug_break, location, v0, v1, file, line );
        DebugFunction();
    }
    gldlUniform2i_impl( location, v0, v1 );
}
void gldlUniform3i ( GLint location, GLint v0, GLint v1, GLint v2, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glUniform3i( %d, %d, %d, %d );\n", file, line, location, v0, v1,  v2 );

    DebugTest( 436 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glUniform3i( location=%d, v0=%d, v1=%d, v2=%d ) at %s:%d\n", debug_break, location, v0, v1, v2, file, line );
        DebugFunction();
    }
    gldlUniform3i_impl( location, v0, v1, v2 );
}
void gldlUniform4i ( GLint location, GLint v0, GLint v1, GLint v2, GLint v3, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glUniform4i( %d, %d, %d, %d, %d );\n", file, line, location, v0, v1, v2,  v3 );

    DebugTest( 444 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glUniform4i( location=%d, v0=%d, v1=%d, v2=%d, v3=%d ) at %s:%d\n", debug_break, location, v0, v1, v2, v3, file, line );
        DebugFunction();
    }
    gldlUniform4i_impl( location, v0, v1, v2, v3 );
}
void gldlUniform1fv ( GLint location, GLsizei count, const GLfloat *value, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glUniform1fv( %d, %d, %p );\n", file, line, location, count,  value );

    DebugTest( 419 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glUniform1fv( location=%d, count=%d, value=%p ) at %s:%d\n", debug_break, location, count, value, file, line );
        DebugFunction();
    }
    gldlUniform1fv_impl( location, count, value );
}
void gldlUniform2fv ( GLint location, GLsizei count, const GLfloat *value, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glUniform2fv( %d, %d, %p );\n", file, line, location, count,  value );

    DebugTest( 427 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glUniform2fv( location=%d, count=%d, value=%p ) at %s:%d\n", debug_break, location, count, value, file, line );
        DebugFunction();
    }
    gldlUniform2fv_impl( location, count, value );
}
void gldlUniform3fv ( GLint location, GLsizei count, const GLfloat *value, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glUniform3fv( %d, %d, %p );\n", file, line, location, count,  value );

    DebugTest( 435 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glUniform3fv( location=%d, count=%d, value=%p ) at %s:%d\n", debug_break, location, count, value, file, line );
        DebugFunction();
    }
    gldlUniform3fv_impl( location, count, value );
}
void gldlUniform4fv ( GLint location, GLsizei count, const GLfloat *value, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glUniform4fv( %d, %d, %p );\n", file, line, location, count,  value );

    DebugTest( 443 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glUniform4fv( location=%d, count=%d, value=%p ) at %s:%d\n", debug_break, location, count, value, file, line );
        DebugFunction();
    }
    gldlUniform4fv_impl( location, count, value );
}
void gldlUniform1iv ( GLint location, GLsizei count, const GLint *value, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glUniform1iv( %d, %d, %p );\n", file, line, location, count,  value );

    DebugTest( 421 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glUniform1iv( location=%d, count=%d, value=%p ) at %s:%d\n", debug_break, location, count, value, file, line );
        DebugFunction();
    }
    gldlUniform1iv_impl( location, count, value );
}
void gldlUniform2iv ( GLint location, GLsizei count, const GLint *value, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glUniform2iv( %d, %d, %p );\n", file, line, location, count,  value );

    DebugTest( 429 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glUniform2iv( location=%d, count=%d, value=%p ) at %s:%d\n", debug_break, location, count, value, file, line );
        DebugFunction();
    }
    gldlUniform2iv_impl( location, count, value );
}
void gldlUniform3iv ( GLint location, GLsizei count, const GLint *value, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glUniform3iv( %d, %d, %p );\n", file, line, location, count,  value );

    DebugTest( 437 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glUniform3iv( location=%d, count=%d, value=%p ) at %s:%d\n", debug_break, location, count, value, file, line );
        DebugFunction();
    }
    gldlUniform3iv_impl( location, count, value );
}
void gldlUniform4iv ( GLint location, GLsizei count, const GLint *value, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glUniform4iv( %d, %d, %p );\n", file, line, location, count,  value );

    DebugTest( 445 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glUniform4iv( location=%d, count=%d, value=%p ) at %s:%d\n", debug_break, location, count, value, file, line );
        DebugFunction();
    }
    gldlUniform4iv_impl( location, count, value );
}
void gldlUniformMatrix2fv ( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glUniformMatrix2fv( %d, %d, %d, %p );\n", file, line, location, count, transpose,  value );

    DebugTest( 450 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glUniformMatrix2fv( location=%d, count=%d, transpose=%d, value=%p ) at %s:%d\n", debug_break, location, count, transpose, value, file, line );
        DebugFunction();
    }
    gldlUniformMatrix2fv_impl( location, count, transpose, value );
}
void gldlUniformMatrix3fv ( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glUniformMatrix3fv( %d, %d, %d, %p );\n", file, line, location, count, transpose,  value );

    DebugTest( 456 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glUniformMatrix3fv( location=%d, count=%d, transpose=%d, value=%p ) at %s:%d\n", debug_break, location, count, transpose, value, file, line );
        DebugFunction();
    }
    gldlUniformMatrix3fv_impl( location, count, transpose, value );
}
void gldlUniformMatrix4fv ( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glUniformMatrix4fv( %d, %d, %d, %p );\n", file, line, location, count, transpose,  value );

    DebugTest( 462 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glUniformMatrix4fv( location=%d, count=%d, transpose=%d, value=%p ) at %s:%d\n", debug_break, location, count, transpose, value, file, line );
        DebugFunction();
    }
    gldlUniformMatrix4fv_impl( location, count, transpose, value );
}
void gldlValidateProgram ( GLuint program, const char *arg0, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glValidateProgram( %d );\n", file, line,  program );

    DebugTest( 471 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glValidateProgram( program=%d ) at %s:%d\n", debug_break, program, file, line );
        DebugFunction();
    }
    gldlValidateProgram_impl( program );
}
void gldlVertexAttrib1d ( GLuint index, GLdouble x, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttrib1d( %d, %f );\n", file, line, index,  (float)x );

    DebugTest( 473 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttrib1d( index=%d, x=%f ) at %s:%d\n", debug_break, index, (float)x, file, line );
        DebugFunction();
    }
    gldlVertexAttrib1d_impl( index, x );
}
void gldlVertexAttrib1dv ( GLuint index, const GLdouble *v, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttrib1dv( %d, %p );\n", file, line, index,  v );

    DebugTest( 474 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttrib1dv( index=%d, v=%p ) at %s:%d\n", debug_break, index, v, file, line );
        DebugFunction();
    }
    gldlVertexAttrib1dv_impl( index, v );
}
void gldlVertexAttrib1f ( GLuint index, GLfloat x, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttrib1f( %d, %f );\n", file, line, index,  (float)x );

    DebugTest( 475 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttrib1f( index=%d, x=%f ) at %s:%d\n", debug_break, index, (float)x, file, line );
        DebugFunction();
    }
    gldlVertexAttrib1f_impl( index, x );
}
void gldlVertexAttrib1fv ( GLuint index, const GLfloat *v, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttrib1fv( %d, %p );\n", file, line, index,  v );

    DebugTest( 476 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttrib1fv( index=%d, v=%p ) at %s:%d\n", debug_break, index, v, file, line );
        DebugFunction();
    }
    gldlVertexAttrib1fv_impl( index, v );
}
void gldlVertexAttrib1s ( GLuint index, GLshort x, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttrib1s( %d, %d );\n", file, line, index,  x );

    DebugTest( 477 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttrib1s( index=%d, x=%d ) at %s:%d\n", debug_break, index, x, file, line );
        DebugFunction();
    }
    gldlVertexAttrib1s_impl( index, x );
}
void gldlVertexAttrib1sv ( GLuint index, const GLshort *v, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttrib1sv( %d, %p );\n", file, line, index,  v );

    DebugTest( 478 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttrib1sv( index=%d, v=%p ) at %s:%d\n", debug_break, index, v, file, line );
        DebugFunction();
    }
    gldlVertexAttrib1sv_impl( index, v );
}
void gldlVertexAttrib2d ( GLuint index, GLdouble x, GLdouble y, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttrib2d( %d, %f, %f );\n", file, line, index, (float)x,  (float)y );

    DebugTest( 479 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttrib2d( index=%d, x=%f, y=%f ) at %s:%d\n", debug_break, index, (float)x, (float)y, file, line );
        DebugFunction();
    }
    gldlVertexAttrib2d_impl( index, x, y );
}
void gldlVertexAttrib2dv ( GLuint index, const GLdouble *v, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttrib2dv( %d, %p );\n", file, line, index,  v );

    DebugTest( 480 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttrib2dv( index=%d, v=%p ) at %s:%d\n", debug_break, index, v, file, line );
        DebugFunction();
    }
    gldlVertexAttrib2dv_impl( index, v );
}
void gldlVertexAttrib2f ( GLuint index, GLfloat x, GLfloat y, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttrib2f( %d, %f, %f );\n", file, line, index, (float)x,  (float)y );

    DebugTest( 481 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttrib2f( index=%d, x=%f, y=%f ) at %s:%d\n", debug_break, index, (float)x, (float)y, file, line );
        DebugFunction();
    }
    gldlVertexAttrib2f_impl( index, x, y );
}
void gldlVertexAttrib2fv ( GLuint index, const GLfloat *v, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttrib2fv( %d, %p );\n", file, line, index,  v );

    DebugTest( 482 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttrib2fv( index=%d, v=%p ) at %s:%d\n", debug_break, index, v, file, line );
        DebugFunction();
    }
    gldlVertexAttrib2fv_impl( index, v );
}
void gldlVertexAttrib2s ( GLuint index, GLshort x, GLshort y, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttrib2s( %d, %d, %d );\n", file, line, index, x,  y );

    DebugTest( 483 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttrib2s( index=%d, x=%d, y=%d ) at %s:%d\n", debug_break, index, x, y, file, line );
        DebugFunction();
    }
    gldlVertexAttrib2s_impl( index, x, y );
}
void gldlVertexAttrib2sv ( GLuint index, const GLshort *v, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttrib2sv( %d, %p );\n", file, line, index,  v );

    DebugTest( 484 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttrib2sv( index=%d, v=%p ) at %s:%d\n", debug_break, index, v, file, line );
        DebugFunction();
    }
    gldlVertexAttrib2sv_impl( index, v );
}
void gldlVertexAttrib3d ( GLuint index, GLdouble x, GLdouble y, GLdouble z, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttrib3d( %d, %f, %f, %f );\n", file, line, index, (float)x, (float)y,  (float)z );

    DebugTest( 485 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttrib3d( index=%d, x=%f, y=%f, z=%f ) at %s:%d\n", debug_break, index, (float)x, (float)y, (float)z, file, line );
        DebugFunction();
    }
    gldlVertexAttrib3d_impl( index, x, y, z );
}
void gldlVertexAttrib3dv ( GLuint index, const GLdouble *v, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttrib3dv( %d, %p );\n", file, line, index,  v );

    DebugTest( 486 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttrib3dv( index=%d, v=%p ) at %s:%d\n", debug_break, index, v, file, line );
        DebugFunction();
    }
    gldlVertexAttrib3dv_impl( index, v );
}
void gldlVertexAttrib3f ( GLuint index, GLfloat x, GLfloat y, GLfloat z, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttrib3f( %d, %f, %f, %f );\n", file, line, index, (float)x, (float)y,  (float)z );

    DebugTest( 487 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttrib3f( index=%d, x=%f, y=%f, z=%f ) at %s:%d\n", debug_break, index, (float)x, (float)y, (float)z, file, line );
        DebugFunction();
    }
    gldlVertexAttrib3f_impl( index, x, y, z );
}
void gldlVertexAttrib3fv ( GLuint index, const GLfloat *v, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttrib3fv( %d, %p );\n", file, line, index,  v );

    DebugTest( 488 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttrib3fv( index=%d, v=%p ) at %s:%d\n", debug_break, index, v, file, line );
        DebugFunction();
    }
    gldlVertexAttrib3fv_impl( index, v );
}
void gldlVertexAttrib3s ( GLuint index, GLshort x, GLshort y, GLshort z, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttrib3s( %d, %d, %d, %d );\n", file, line, index, x, y,  z );

    DebugTest( 489 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttrib3s( index=%d, x=%d, y=%d, z=%d ) at %s:%d\n", debug_break, index, x, y, z, file, line );
        DebugFunction();
    }
    gldlVertexAttrib3s_impl( index, x, y, z );
}
void gldlVertexAttrib3sv ( GLuint index, const GLshort *v, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttrib3sv( %d, %p );\n", file, line, index,  v );

    DebugTest( 490 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttrib3sv( index=%d, v=%p ) at %s:%d\n", debug_break, index, v, file, line );
        DebugFunction();
    }
    gldlVertexAttrib3sv_impl( index, v );
}
void gldlVertexAttrib4Nbv ( GLuint index, const GLbyte *v, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttrib4Nbv( %d, %p );\n", file, line, index,  v );

    DebugTest( 491 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttrib4Nbv( index=%d, v=%p ) at %s:%d\n", debug_break, index, v, file, line );
        DebugFunction();
    }
    gldlVertexAttrib4Nbv_impl( index, v );
}
void gldlVertexAttrib4Niv ( GLuint index, const GLint *v, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttrib4Niv( %d, %p );\n", file, line, index,  v );

    DebugTest( 492 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttrib4Niv( index=%d, v=%p ) at %s:%d\n", debug_break, index, v, file, line );
        DebugFunction();
    }
    gldlVertexAttrib4Niv_impl( index, v );
}
void gldlVertexAttrib4Nsv ( GLuint index, const GLshort *v, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttrib4Nsv( %d, %p );\n", file, line, index,  v );

    DebugTest( 493 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttrib4Nsv( index=%d, v=%p ) at %s:%d\n", debug_break, index, v, file, line );
        DebugFunction();
    }
    gldlVertexAttrib4Nsv_impl( index, v );
}
void gldlVertexAttrib4Nub ( GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttrib4Nub( %d, %d, %d, %d, %d );\n", file, line, index, x, y, z,  w );

    DebugTest( 494 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttrib4Nub( index=%d, x=%d, y=%d, z=%d, w=%d ) at %s:%d\n", debug_break, index, x, y, z, w, file, line );
        DebugFunction();
    }
    gldlVertexAttrib4Nub_impl( index, x, y, z, w );
}
void gldlVertexAttrib4Nubv ( GLuint index, const GLubyte *v, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttrib4Nubv( %d, %p );\n", file, line, index,  v );

    DebugTest( 495 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttrib4Nubv( index=%d, v=%p ) at %s:%d\n", debug_break, index, v, file, line );
        DebugFunction();
    }
    gldlVertexAttrib4Nubv_impl( index, v );
}
void gldlVertexAttrib4Nuiv ( GLuint index, const GLuint *v, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttrib4Nuiv( %d, %p );\n", file, line, index,  v );

    DebugTest( 496 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttrib4Nuiv( index=%d, v=%p ) at %s:%d\n", debug_break, index, v, file, line );
        DebugFunction();
    }
    gldlVertexAttrib4Nuiv_impl( index, v );
}
void gldlVertexAttrib4Nusv ( GLuint index, const GLushort *v, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttrib4Nusv( %d, %p );\n", file, line, index,  v );

    DebugTest( 497 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttrib4Nusv( index=%d, v=%p ) at %s:%d\n", debug_break, index, v, file, line );
        DebugFunction();
    }
    gldlVertexAttrib4Nusv_impl( index, v );
}
void gldlVertexAttrib4bv ( GLuint index, const GLbyte *v, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttrib4bv( %d, %p );\n", file, line, index,  v );

    DebugTest( 498 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttrib4bv( index=%d, v=%p ) at %s:%d\n", debug_break, index, v, file, line );
        DebugFunction();
    }
    gldlVertexAttrib4bv_impl( index, v );
}
void gldlVertexAttrib4d ( GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttrib4d( %d, %f, %f, %f, %f );\n", file, line, index, (float)x, (float)y, (float)z,  (float)w );

    DebugTest( 499 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttrib4d( index=%d, x=%f, y=%f, z=%f, w=%f ) at %s:%d\n", debug_break, index, (float)x, (float)y, (float)z, (float)w, file, line );
        DebugFunction();
    }
    gldlVertexAttrib4d_impl( index, x, y, z, w );
}
void gldlVertexAttrib4dv ( GLuint index, const GLdouble *v, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttrib4dv( %d, %p );\n", file, line, index,  v );

    DebugTest( 500 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttrib4dv( index=%d, v=%p ) at %s:%d\n", debug_break, index, v, file, line );
        DebugFunction();
    }
    gldlVertexAttrib4dv_impl( index, v );
}
void gldlVertexAttrib4f ( GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttrib4f( %d, %f, %f, %f, %f );\n", file, line, index, (float)x, (float)y, (float)z,  (float)w );

    DebugTest( 501 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttrib4f( index=%d, x=%f, y=%f, z=%f, w=%f ) at %s:%d\n", debug_break, index, (float)x, (float)y, (float)z, (float)w, file, line );
        DebugFunction();
    }
    gldlVertexAttrib4f_impl( index, x, y, z, w );
}
void gldlVertexAttrib4fv ( GLuint index, const GLfloat *v, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttrib4fv( %d, %p );\n", file, line, index,  v );

    DebugTest( 502 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttrib4fv( index=%d, v=%p ) at %s:%d\n", debug_break, index, v, file, line );
        DebugFunction();
    }
    gldlVertexAttrib4fv_impl( index, v );
}
void gldlVertexAttrib4iv ( GLuint index, const GLint *v, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttrib4iv( %d, %p );\n", file, line, index,  v );

    DebugTest( 503 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttrib4iv( index=%d, v=%p ) at %s:%d\n", debug_break, index, v, file, line );
        DebugFunction();
    }
    gldlVertexAttrib4iv_impl( index, v );
}
void gldlVertexAttrib4s ( GLuint index, GLshort x, GLshort y, GLshort z, GLshort w, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttrib4s( %d, %d, %d, %d, %d );\n", file, line, index, x, y, z,  w );

    DebugTest( 504 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttrib4s( index=%d, x=%d, y=%d, z=%d, w=%d ) at %s:%d\n", debug_break, index, x, y, z, w, file, line );
        DebugFunction();
    }
    gldlVertexAttrib4s_impl( index, x, y, z, w );
}
void gldlVertexAttrib4sv ( GLuint index, const GLshort *v, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttrib4sv( %d, %p );\n", file, line, index,  v );

    DebugTest( 505 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttrib4sv( index=%d, v=%p ) at %s:%d\n", debug_break, index, v, file, line );
        DebugFunction();
    }
    gldlVertexAttrib4sv_impl( index, v );
}
void gldlVertexAttrib4ubv ( GLuint index, const GLubyte *v, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttrib4ubv( %d, %p );\n", file, line, index,  v );

    DebugTest( 506 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttrib4ubv( index=%d, v=%p ) at %s:%d\n", debug_break, index, v, file, line );
        DebugFunction();
    }
    gldlVertexAttrib4ubv_impl( index, v );
}
void gldlVertexAttrib4uiv ( GLuint index, const GLuint *v, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttrib4uiv( %d, %p );\n", file, line, index,  v );

    DebugTest( 507 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttrib4uiv( index=%d, v=%p ) at %s:%d\n", debug_break, index, v, file, line );
        DebugFunction();
    }
    gldlVertexAttrib4uiv_impl( index, v );
}
void gldlVertexAttrib4usv ( GLuint index, const GLushort *v, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttrib4usv( %d, %p );\n", file, line, index,  v );

    DebugTest( 508 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttrib4usv( index=%d, v=%p ) at %s:%d\n", debug_break, index, v, file, line );
        DebugFunction();
    }
    gldlVertexAttrib4usv_impl( index, v );
}
void gldlVertexAttribPointer ( GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid *pointer, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttribPointer( %d, %d, %s, %d, %d, %p );\n", file, line, index, size, arg2, normalized, stride,  pointer );

    DebugTest( 548 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttribPointer( index=%d, size=%d, type=%s, normalized=%d, stride=%d, pointer=%p ) at %s:%d\n", debug_break, index, size, arg2, normalized, stride, pointer, file, line );
        DebugFunction();
    }
    gldlVertexAttribPointer_impl( index, size, type, normalized, stride, pointer );
}
void gldlUniformMatrix2x3fv ( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glUniformMatrix2x3fv( %d, %d, %d, %p );\n", file, line, location, count, transpose,  value );

    DebugTest( 452 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glUniformMatrix2x3fv( location=%d, count=%d, transpose=%d, value=%p ) at %s:%d\n", debug_break, location, count, transpose, value, file, line );
        DebugFunction();
    }
    gldlUniformMatrix2x3fv_impl( location, count, transpose, value );
}
void gldlUniformMatrix3x2fv ( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glUniformMatrix3x2fv( %d, %d, %d, %p );\n", file, line, location, count, transpose,  value );

    DebugTest( 458 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glUniformMatrix3x2fv( location=%d, count=%d, transpose=%d, value=%p ) at %s:%d\n", debug_break, location, count, transpose, value, file, line );
        DebugFunction();
    }
    gldlUniformMatrix3x2fv_impl( location, count, transpose, value );
}
void gldlUniformMatrix2x4fv ( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glUniformMatrix2x4fv( %d, %d, %d, %p );\n", file, line, location, count, transpose,  value );

    DebugTest( 454 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glUniformMatrix2x4fv( location=%d, count=%d, transpose=%d, value=%p ) at %s:%d\n", debug_break, location, count, transpose, value, file, line );
        DebugFunction();
    }
    gldlUniformMatrix2x4fv_impl( location, count, transpose, value );
}
void gldlUniformMatrix4x2fv ( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glUniformMatrix4x2fv( %d, %d, %d, %p );\n", file, line, location, count, transpose,  value );

    DebugTest( 464 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glUniformMatrix4x2fv( location=%d, count=%d, transpose=%d, value=%p ) at %s:%d\n", debug_break, location, count, transpose, value, file, line );
        DebugFunction();
    }
    gldlUniformMatrix4x2fv_impl( location, count, transpose, value );
}
void gldlUniformMatrix3x4fv ( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glUniformMatrix3x4fv( %d, %d, %d, %p );\n", file, line, location, count, transpose,  value );

    DebugTest( 460 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glUniformMatrix3x4fv( location=%d, count=%d, transpose=%d, value=%p ) at %s:%d\n", debug_break, location, count, transpose, value, file, line );
        DebugFunction();
    }
    gldlUniformMatrix3x4fv_impl( location, count, transpose, value );
}
void gldlUniformMatrix4x3fv ( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glUniformMatrix4x3fv( %d, %d, %d, %p );\n", file, line, location, count, transpose,  value );

    DebugTest( 466 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glUniformMatrix4x3fv( location=%d, count=%d, transpose=%d, value=%p ) at %s:%d\n", debug_break, location, count, transpose, value, file, line );
        DebugFunction();
    }
    gldlUniformMatrix4x3fv_impl( location, count, transpose, value );
}
void gldlColorMaski ( GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glColorMaski( %d, %d, %d, %d, %d );\n", file, line, index, r, g, b,  a );

    DebugTest( 50 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glColorMaski( index=%d, r=%d, g=%d, b=%d, a=%d ) at %s:%d\n", debug_break, index, r, g, b, a, file, line );
        DebugFunction();
    }
    gldlColorMaski_impl( index, r, g, b, a );
}
void gldlGetBooleani_v ( GLenum target, GLuint index, GLboolean *data, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetBooleani_v( %s, %d, %p );\n", file, line, arg0, index,  data );

    DebugTest( 159 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetBooleani_v( target=%s, index=%d, data=%p ) at %s:%d\n", debug_break, arg0, index, data, file, line );
        DebugFunction();
    }
    gldlGetBooleani_v_impl( target, index, data );
}
void gldlGetIntegeri_v ( GLenum target, GLuint index, GLint *data, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetIntegeri_v( %s, %d, %p );\n", file, line, arg0, index,  data );

    DebugTest( 178 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetIntegeri_v( target=%s, index=%d, data=%p ) at %s:%d\n", debug_break, arg0, index, data, file, line );
        DebugFunction();
    }
    gldlGetIntegeri_v_impl( target, index, data );
}
void gldlEnablei ( GLenum target, GLuint index, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glEnablei( %s, %d );\n", file, line, arg0,  index );

    DebugTest( 121 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glEnablei( target=%s, index=%d ) at %s:%d\n", debug_break, arg0, index, file, line );
        DebugFunction();
    }
    gldlEnablei_impl( target, index );
}
void gldlDisablei ( GLenum target, GLuint index, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glDisablei( %s, %d );\n", file, line, arg0,  index );

    DebugTest( 99 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glDisablei( target=%s, index=%d ) at %s:%d\n", debug_break, arg0, index, file, line );
        DebugFunction();
    }
    gldlDisablei_impl( target, index );
}
GLboolean gldlIsEnabledi ( GLenum target, GLuint index, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glIsEnabledi( %s, %d );\n", file, line, arg0,  index );

    DebugTest( 255 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glIsEnabledi( target=%s, index=%d ) at %s:%d\n", debug_break, arg0, index, file, line );
        DebugFunction();
    }
    GLboolean ret = gldlIsEnabledi_impl( target, index );
	return ret;
}
void gldlBeginTransformFeedback ( GLenum primitiveMode, const char *arg0, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glBeginTransformFeedback( %s );\n", file, line,  arg0 );

    DebugTest( 6 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glBeginTransformFeedback( primitiveMode=%s ) at %s:%d\n", debug_break, arg0, file, line );
        DebugFunction();
    }
    gldlBeginTransformFeedback_impl( primitiveMode );
}
void gldlEndTransformFeedback ( const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glEndTransformFeedback();\n", file, line );

    DebugTest( 125 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glEndTransformFeedback( ) at %s:%d\n", debug_break, file, line );

        DebugFunction();
    }
    gldlEndTransformFeedback_impl(  );
}
void gldlBindBufferRange ( GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glBindBufferRange( %s, %d, %d, %d, %d );\n", file, line, arg0, index, buffer, (int)offset,  (int)size );

    DebugTest( 10 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glBindBufferRange( target=%s, index=%d, buffer=%d, offset=%d, size=%d ) at %s:%d\n", debug_break, arg0, index, buffer, (int)offset, (int)size, file, line );
        DebugFunction();
    }
    gldlBindBufferRange_impl( target, index, buffer, offset, size );
}
void gldlBindBufferBase ( GLenum target, GLuint index, GLuint buffer, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glBindBufferBase( %s, %d, %d );\n", file, line, arg0, index,  buffer );

    DebugTest( 9 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glBindBufferBase( target=%s, index=%d, buffer=%d ) at %s:%d\n", debug_break, arg0, index, buffer, file, line );
        DebugFunction();
    }
    gldlBindBufferBase_impl( target, index, buffer );
}
void gldlTransformFeedbackVaryings ( GLuint program, GLsizei count, const GLchar* *varyings, GLenum bufferMode, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glTransformFeedbackVaryings( %d, %d, %p, %s );\n", file, line, program, count, varyings,  arg3 );

    DebugTest( 415 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glTransformFeedbackVaryings( program=%d, count=%d, varyings=%p, bufferMode=%s ) at %s:%d\n", debug_break, program, count, varyings, arg3, file, line );
        DebugFunction();
    }
    gldlTransformFeedbackVaryings_impl( program, count, varyings, bufferMode );
}
void gldlGetTransformFeedbackVarying ( GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *arg6, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetTransformFeedbackVarying( %d, %d, %d, %p, %p, %p, %p );\n", file, line, program, index, bufSize, length, size, type,  name );

    DebugTest( 218 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetTransformFeedbackVarying( program=%d, index=%d, bufSize=%d, length=%p, size=%p, type=%p, name=%p ) at %s:%d\n", debug_break, program, index, bufSize, length, size, type, name, file, line );
        DebugFunction();
    }
    gldlGetTransformFeedbackVarying_impl( program, index, bufSize, length, size, type, name );
}
void gldlClampColor ( GLenum target, GLenum clamp, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glClampColor( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( 38 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glClampColor( target=%s, clamp=%s ) at %s:%d\n", debug_break, arg0, arg1, file, line );
        DebugFunction();
    }
    gldlClampColor_impl( target, clamp );
}
void gldlBeginConditionalRender ( GLuint id, GLenum mode, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glBeginConditionalRender( %d, %s );\n", file, line, id,  arg1 );

    DebugTest( 3 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glBeginConditionalRender( id=%d, mode=%s ) at %s:%d\n", debug_break, id, arg1, file, line );
        DebugFunction();
    }
    gldlBeginConditionalRender_impl( id, mode );
}
void gldlEndConditionalRender ( const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glEndConditionalRender();\n", file, line );

    DebugTest( 122 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glEndConditionalRender( ) at %s:%d\n", debug_break, file, line );

        DebugFunction();
    }
    gldlEndConditionalRender_impl(  );
}
void gldlVertexAttribIPointer ( GLuint index, GLint size, GLenum type, GLsizei stride, const GLvoid *pointer, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttribIPointer( %d, %d, %s, %d, %p );\n", file, line, index, size, arg2, stride,  pointer );

    DebugTest( 530 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttribIPointer( index=%d, size=%d, type=%s, stride=%d, pointer=%p ) at %s:%d\n", debug_break, index, size, arg2, stride, pointer, file, line );
        DebugFunction();
    }
    gldlVertexAttribIPointer_impl( index, size, type, stride, pointer );
}
void gldlGetVertexAttribIiv ( GLuint index, GLenum pname, GLint *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetVertexAttribIiv( %d, %s, %p );\n", file, line, index, arg1,  params );

    DebugTest( 227 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetVertexAttribIiv( index=%d, pname=%s, params=%p ) at %s:%d\n", debug_break, index, arg1, params, file, line );
        DebugFunction();
    }
    gldlGetVertexAttribIiv_impl( index, pname, params );
}
void gldlGetVertexAttribIuiv ( GLuint index, GLenum pname, GLuint *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetVertexAttribIuiv( %d, %s, %p );\n", file, line, index, arg1,  params );

    DebugTest( 228 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetVertexAttribIuiv( index=%d, pname=%s, params=%p ) at %s:%d\n", debug_break, index, arg1, params, file, line );
        DebugFunction();
    }
    gldlGetVertexAttribIuiv_impl( index, pname, params );
}
void gldlVertexAttribI1i ( GLuint index, GLint x, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttribI1i( %d, %d );\n", file, line, index,  x );

    DebugTest( 510 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttribI1i( index=%d, x=%d ) at %s:%d\n", debug_break, index, x, file, line );
        DebugFunction();
    }
    gldlVertexAttribI1i_impl( index, x );
}
void gldlVertexAttribI2i ( GLuint index, GLint x, GLint y, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttribI2i( %d, %d, %d );\n", file, line, index, x,  y );

    DebugTest( 514 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttribI2i( index=%d, x=%d, y=%d ) at %s:%d\n", debug_break, index, x, y, file, line );
        DebugFunction();
    }
    gldlVertexAttribI2i_impl( index, x, y );
}
void gldlVertexAttribI3i ( GLuint index, GLint x, GLint y, GLint z, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttribI3i( %d, %d, %d, %d );\n", file, line, index, x, y,  z );

    DebugTest( 518 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttribI3i( index=%d, x=%d, y=%d, z=%d ) at %s:%d\n", debug_break, index, x, y, z, file, line );
        DebugFunction();
    }
    gldlVertexAttribI3i_impl( index, x, y, z );
}
void gldlVertexAttribI4i ( GLuint index, GLint x, GLint y, GLint z, GLint w, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttribI4i( %d, %d, %d, %d, %d );\n", file, line, index, x, y, z,  w );

    DebugTest( 523 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttribI4i( index=%d, x=%d, y=%d, z=%d, w=%d ) at %s:%d\n", debug_break, index, x, y, z, w, file, line );
        DebugFunction();
    }
    gldlVertexAttribI4i_impl( index, x, y, z, w );
}
void gldlVertexAttribI1ui ( GLuint index, GLuint x, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttribI1ui( %d, %d );\n", file, line, index,  x );

    DebugTest( 512 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttribI1ui( index=%d, x=%d ) at %s:%d\n", debug_break, index, x, file, line );
        DebugFunction();
    }
    gldlVertexAttribI1ui_impl( index, x );
}
void gldlVertexAttribI2ui ( GLuint index, GLuint x, GLuint y, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttribI2ui( %d, %d, %d );\n", file, line, index, x,  y );

    DebugTest( 516 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttribI2ui( index=%d, x=%d, y=%d ) at %s:%d\n", debug_break, index, x, y, file, line );
        DebugFunction();
    }
    gldlVertexAttribI2ui_impl( index, x, y );
}
void gldlVertexAttribI3ui ( GLuint index, GLuint x, GLuint y, GLuint z, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttribI3ui( %d, %d, %d, %d );\n", file, line, index, x, y,  z );

    DebugTest( 520 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttribI3ui( index=%d, x=%d, y=%d, z=%d ) at %s:%d\n", debug_break, index, x, y, z, file, line );
        DebugFunction();
    }
    gldlVertexAttribI3ui_impl( index, x, y, z );
}
void gldlVertexAttribI4ui ( GLuint index, GLuint x, GLuint y, GLuint z, GLuint w, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttribI4ui( %d, %d, %d, %d, %d );\n", file, line, index, x, y, z,  w );

    DebugTest( 527 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttribI4ui( index=%d, x=%d, y=%d, z=%d, w=%d ) at %s:%d\n", debug_break, index, x, y, z, w, file, line );
        DebugFunction();
    }
    gldlVertexAttribI4ui_impl( index, x, y, z, w );
}
void gldlVertexAttribI1iv ( GLuint index, const GLint *v, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttribI1iv( %d, %p );\n", file, line, index,  v );

    DebugTest( 511 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttribI1iv( index=%d, v=%p ) at %s:%d\n", debug_break, index, v, file, line );
        DebugFunction();
    }
    gldlVertexAttribI1iv_impl( index, v );
}
void gldlVertexAttribI2iv ( GLuint index, const GLint *v, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttribI2iv( %d, %p );\n", file, line, index,  v );

    DebugTest( 515 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttribI2iv( index=%d, v=%p ) at %s:%d\n", debug_break, index, v, file, line );
        DebugFunction();
    }
    gldlVertexAttribI2iv_impl( index, v );
}
void gldlVertexAttribI3iv ( GLuint index, const GLint *v, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttribI3iv( %d, %p );\n", file, line, index,  v );

    DebugTest( 519 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttribI3iv( index=%d, v=%p ) at %s:%d\n", debug_break, index, v, file, line );
        DebugFunction();
    }
    gldlVertexAttribI3iv_impl( index, v );
}
void gldlVertexAttribI4iv ( GLuint index, const GLint *v, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttribI4iv( %d, %p );\n", file, line, index,  v );

    DebugTest( 524 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttribI4iv( index=%d, v=%p ) at %s:%d\n", debug_break, index, v, file, line );
        DebugFunction();
    }
    gldlVertexAttribI4iv_impl( index, v );
}
void gldlVertexAttribI1uiv ( GLuint index, const GLuint *v, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttribI1uiv( %d, %p );\n", file, line, index,  v );

    DebugTest( 513 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttribI1uiv( index=%d, v=%p ) at %s:%d\n", debug_break, index, v, file, line );
        DebugFunction();
    }
    gldlVertexAttribI1uiv_impl( index, v );
}
void gldlVertexAttribI2uiv ( GLuint index, const GLuint *v, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttribI2uiv( %d, %p );\n", file, line, index,  v );

    DebugTest( 517 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttribI2uiv( index=%d, v=%p ) at %s:%d\n", debug_break, index, v, file, line );
        DebugFunction();
    }
    gldlVertexAttribI2uiv_impl( index, v );
}
void gldlVertexAttribI3uiv ( GLuint index, const GLuint *v, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttribI3uiv( %d, %p );\n", file, line, index,  v );

    DebugTest( 521 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttribI3uiv( index=%d, v=%p ) at %s:%d\n", debug_break, index, v, file, line );
        DebugFunction();
    }
    gldlVertexAttribI3uiv_impl( index, v );
}
void gldlVertexAttribI4uiv ( GLuint index, const GLuint *v, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttribI4uiv( %d, %p );\n", file, line, index,  v );

    DebugTest( 528 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttribI4uiv( index=%d, v=%p ) at %s:%d\n", debug_break, index, v, file, line );
        DebugFunction();
    }
    gldlVertexAttribI4uiv_impl( index, v );
}
void gldlVertexAttribI4bv ( GLuint index, const GLbyte *v, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttribI4bv( %d, %p );\n", file, line, index,  v );

    DebugTest( 522 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttribI4bv( index=%d, v=%p ) at %s:%d\n", debug_break, index, v, file, line );
        DebugFunction();
    }
    gldlVertexAttribI4bv_impl( index, v );
}
void gldlVertexAttribI4sv ( GLuint index, const GLshort *v, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttribI4sv( %d, %p );\n", file, line, index,  v );

    DebugTest( 525 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttribI4sv( index=%d, v=%p ) at %s:%d\n", debug_break, index, v, file, line );
        DebugFunction();
    }
    gldlVertexAttribI4sv_impl( index, v );
}
void gldlVertexAttribI4ubv ( GLuint index, const GLubyte *v, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttribI4ubv( %d, %p );\n", file, line, index,  v );

    DebugTest( 526 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttribI4ubv( index=%d, v=%p ) at %s:%d\n", debug_break, index, v, file, line );
        DebugFunction();
    }
    gldlVertexAttribI4ubv_impl( index, v );
}
void gldlVertexAttribI4usv ( GLuint index, const GLushort *v, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttribI4usv( %d, %p );\n", file, line, index,  v );

    DebugTest( 529 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttribI4usv( index=%d, v=%p ) at %s:%d\n", debug_break, index, v, file, line );
        DebugFunction();
    }
    gldlVertexAttribI4usv_impl( index, v );
}
void gldlGetUniformuiv ( GLuint program, GLint location, GLuint *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetUniformuiv( %d, %d, %p );\n", file, line, program, location,  params );

    DebugTest( 226 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetUniformuiv( program=%d, location=%d, params=%p ) at %s:%d\n", debug_break, program, location, params, file, line );
        DebugFunction();
    }
    gldlGetUniformuiv_impl( program, location, params );
}
void gldlBindFragDataLocation ( GLuint program, GLuint color, const GLchar *name, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glBindFragDataLocation( %d, %d, %p );\n", file, line, program, color,  name );

    DebugTest( 11 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glBindFragDataLocation( program=%d, color=%d, name=%p ) at %s:%d\n", debug_break, program, color, name, file, line );
        DebugFunction();
    }
    gldlBindFragDataLocation_impl( program, color, name );
}
GLint gldlGetFragDataLocation ( GLuint program, const GLchar *name, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetFragDataLocation( %d, %p );\n", file, line, program,  name );

    DebugTest( 173 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetFragDataLocation( program=%d, name=%p ) at %s:%d\n", debug_break, program, name, file, line );
        DebugFunction();
    }
    GLint ret = gldlGetFragDataLocation_impl( program, name );
	return ret;
}
void gldlUniform1ui ( GLint location, GLuint v0, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glUniform1ui( %d, %d );\n", file, line, location,  v0 );

    DebugTest( 422 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glUniform1ui( location=%d, v0=%d ) at %s:%d\n", debug_break, location, v0, file, line );
        DebugFunction();
    }
    gldlUniform1ui_impl( location, v0 );
}
void gldlUniform2ui ( GLint location, GLuint v0, GLuint v1, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glUniform2ui( %d, %d, %d );\n", file, line, location, v0,  v1 );

    DebugTest( 430 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glUniform2ui( location=%d, v0=%d, v1=%d ) at %s:%d\n", debug_break, location, v0, v1, file, line );
        DebugFunction();
    }
    gldlUniform2ui_impl( location, v0, v1 );
}
void gldlUniform3ui ( GLint location, GLuint v0, GLuint v1, GLuint v2, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glUniform3ui( %d, %d, %d, %d );\n", file, line, location, v0, v1,  v2 );

    DebugTest( 438 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glUniform3ui( location=%d, v0=%d, v1=%d, v2=%d ) at %s:%d\n", debug_break, location, v0, v1, v2, file, line );
        DebugFunction();
    }
    gldlUniform3ui_impl( location, v0, v1, v2 );
}
void gldlUniform4ui ( GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glUniform4ui( %d, %d, %d, %d, %d );\n", file, line, location, v0, v1, v2,  v3 );

    DebugTest( 446 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glUniform4ui( location=%d, v0=%d, v1=%d, v2=%d, v3=%d ) at %s:%d\n", debug_break, location, v0, v1, v2, v3, file, line );
        DebugFunction();
    }
    gldlUniform4ui_impl( location, v0, v1, v2, v3 );
}
void gldlUniform1uiv ( GLint location, GLsizei count, const GLuint *value, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glUniform1uiv( %d, %d, %p );\n", file, line, location, count,  value );

    DebugTest( 423 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glUniform1uiv( location=%d, count=%d, value=%p ) at %s:%d\n", debug_break, location, count, value, file, line );
        DebugFunction();
    }
    gldlUniform1uiv_impl( location, count, value );
}
void gldlUniform2uiv ( GLint location, GLsizei count, const GLuint *value, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glUniform2uiv( %d, %d, %p );\n", file, line, location, count,  value );

    DebugTest( 431 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glUniform2uiv( location=%d, count=%d, value=%p ) at %s:%d\n", debug_break, location, count, value, file, line );
        DebugFunction();
    }
    gldlUniform2uiv_impl( location, count, value );
}
void gldlUniform3uiv ( GLint location, GLsizei count, const GLuint *value, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glUniform3uiv( %d, %d, %p );\n", file, line, location, count,  value );

    DebugTest( 439 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glUniform3uiv( location=%d, count=%d, value=%p ) at %s:%d\n", debug_break, location, count, value, file, line );
        DebugFunction();
    }
    gldlUniform3uiv_impl( location, count, value );
}
void gldlUniform4uiv ( GLint location, GLsizei count, const GLuint *value, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glUniform4uiv( %d, %d, %p );\n", file, line, location, count,  value );

    DebugTest( 447 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glUniform4uiv( location=%d, count=%d, value=%p ) at %s:%d\n", debug_break, location, count, value, file, line );
        DebugFunction();
    }
    gldlUniform4uiv_impl( location, count, value );
}
void gldlTexParameterIiv ( GLenum target, GLenum pname, const GLint *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glTexParameterIiv( %s, %s, %p );\n", file, line, arg0, arg1,  params );

    DebugTest( 400 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glTexParameterIiv( target=%s, pname=%s, params=%p ) at %s:%d\n", debug_break, arg0, arg1, params, file, line );
        DebugFunction();
    }
    gldlTexParameterIiv_impl( target, pname, params );
}
void gldlTexParameterIuiv ( GLenum target, GLenum pname, const GLuint *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glTexParameterIuiv( %s, %s, %p );\n", file, line, arg0, arg1,  params );

    DebugTest( 401 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glTexParameterIuiv( target=%s, pname=%s, params=%p ) at %s:%d\n", debug_break, arg0, arg1, params, file, line );
        DebugFunction();
    }
    gldlTexParameterIuiv_impl( target, pname, params );
}
void gldlGetTexParameterIiv ( GLenum target, GLenum pname, GLint *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetTexParameterIiv( %s, %s, %p );\n", file, line, arg0, arg1,  params );

    DebugTest( 214 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetTexParameterIiv( target=%s, pname=%s, params=%p ) at %s:%d\n", debug_break, arg0, arg1, params, file, line );
        DebugFunction();
    }
    gldlGetTexParameterIiv_impl( target, pname, params );
}
void gldlGetTexParameterIuiv ( GLenum target, GLenum pname, GLuint *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetTexParameterIuiv( %s, %s, %p );\n", file, line, arg0, arg1,  params );

    DebugTest( 215 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetTexParameterIuiv( target=%s, pname=%s, params=%p ) at %s:%d\n", debug_break, arg0, arg1, params, file, line );
        DebugFunction();
    }
    gldlGetTexParameterIuiv_impl( target, pname, params );
}
void gldlClearBufferiv ( GLenum buffer, GLint drawbuffer, const GLint *value, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glClearBufferiv( %s, %d, %p );\n", file, line, arg0, drawbuffer,  value );

    DebugTest( 42 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glClearBufferiv( buffer=%s, drawbuffer=%d, value=%p ) at %s:%d\n", debug_break, arg0, drawbuffer, value, file, line );
        DebugFunction();
    }
    gldlClearBufferiv_impl( buffer, drawbuffer, value );
}
void gldlClearBufferuiv ( GLenum buffer, GLint drawbuffer, const GLuint *value, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glClearBufferuiv( %s, %d, %p );\n", file, line, arg0, drawbuffer,  value );

    DebugTest( 43 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glClearBufferuiv( buffer=%s, drawbuffer=%d, value=%p ) at %s:%d\n", debug_break, arg0, drawbuffer, value, file, line );
        DebugFunction();
    }
    gldlClearBufferuiv_impl( buffer, drawbuffer, value );
}
void gldlClearBufferfv ( GLenum buffer, GLint drawbuffer, const GLfloat *value, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glClearBufferfv( %s, %d, %p );\n", file, line, arg0, drawbuffer,  value );

    DebugTest( 41 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glClearBufferfv( buffer=%s, drawbuffer=%d, value=%p ) at %s:%d\n", debug_break, arg0, drawbuffer, value, file, line );
        DebugFunction();
    }
    gldlClearBufferfv_impl( buffer, drawbuffer, value );
}
void gldlClearBufferfi ( GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glClearBufferfi( %s, %d, %f, %d );\n", file, line, arg0, drawbuffer, (float)depth,  stencil );

    DebugTest( 40 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glClearBufferfi( buffer=%s, drawbuffer=%d, depth=%f, stencil=%d ) at %s:%d\n", debug_break, arg0, drawbuffer, (float)depth, stencil, file, line );
        DebugFunction();
    }
    gldlClearBufferfi_impl( buffer, drawbuffer, depth, stencil );
}
const GLubyte * gldlGetStringi ( GLenum name, GLuint index, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetStringi( %s, %d );\n", file, line, arg0,  index );

    DebugTest( 207 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetStringi( name=%s, index=%d ) at %s:%d\n", debug_break, arg0, index, file, line );
        DebugFunction();
    }
    const GLubyte * ret = gldlGetStringi_impl( name, index );
	return ret;
}
void gldlDrawArraysInstanced ( GLenum mode, GLint first, GLsizei count, GLsizei primcount, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glDrawArraysInstanced( %s, %d, %d, %d );\n", file, line, arg0, first, count,  primcount );

    DebugTest( 102 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glDrawArraysInstanced( mode=%s, first=%d, count=%d, primcount=%d ) at %s:%d\n", debug_break, arg0, first, count, primcount, file, line );
        DebugFunction();
    }
    gldlDrawArraysInstanced_impl( mode, first, count, primcount );
}
void gldlDrawElementsInstanced ( GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, GLsizei primcount, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glDrawElementsInstanced( %s, %d, %s, %p, %d );\n", file, line, arg0, count, arg2, indices,  primcount );

    DebugTest( 109 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glDrawElementsInstanced( mode=%s, count=%d, type=%s, indices=%p, primcount=%d ) at %s:%d\n", debug_break, arg0, count, arg2, indices, primcount, file, line );
        DebugFunction();
    }
    gldlDrawElementsInstanced_impl( mode, count, type, indices, primcount );
}
void gldlTexBuffer ( GLenum target, GLenum internalformat, GLuint buffer, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glTexBuffer( %s, %s, %d );\n", file, line, arg0, arg1,  buffer );

    DebugTest( 386 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glTexBuffer( target=%s, internalformat=%s, buffer=%d ) at %s:%d\n", debug_break, arg0, arg1, buffer, file, line );
        DebugFunction();
    }
    gldlTexBuffer_impl( target, internalformat, buffer );
}
void gldlPrimitiveRestartIndex ( GLuint index, const char *arg0, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glPrimitiveRestartIndex( %d );\n", file, line,  index );

    DebugTest( 302 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glPrimitiveRestartIndex( index=%d ) at %s:%d\n", debug_break, index, file, line );
        DebugFunction();
    }
    gldlPrimitiveRestartIndex_impl( index );
}
void gldlGetInteger64i_v ( GLenum target, GLuint index, GLint64 *data, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetInteger64i_v( %s, %d, %p );\n", file, line, arg0, index,  data );

    DebugTest( 176 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetInteger64i_v( target=%s, index=%d, data=%p ) at %s:%d\n", debug_break, arg0, index, data, file, line );
        DebugFunction();
    }
    gldlGetInteger64i_v_impl( target, index, data );
}
void gldlGetBufferParameteri64v ( GLenum target, GLenum pname, GLint64 *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetBufferParameteri64v( %s, %s, %p );\n", file, line, arg0, arg1,  params );

    DebugTest( 161 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetBufferParameteri64v( target=%s, pname=%s, params=%p ) at %s:%d\n", debug_break, arg0, arg1, params, file, line );
        DebugFunction();
    }
    gldlGetBufferParameteri64v_impl( target, pname, params );
}
void gldlFramebufferTexture ( GLenum target, GLenum attachment, GLuint texture, GLint level, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glFramebufferTexture( %s, %s, %d, %d );\n", file, line, arg0, arg1, texture,  level );

    DebugTest( 131 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glFramebufferTexture( target=%s, attachment=%s, texture=%d, level=%d ) at %s:%d\n", debug_break, arg0, arg1, texture, level, file, line );
        DebugFunction();
    }
    gldlFramebufferTexture_impl( target, attachment, texture, level );
}
void gldlVertexAttribDivisor ( GLuint index, GLuint divisor, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttribDivisor( %d, %d );\n", file, line, index,  divisor );

    DebugTest( 509 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttribDivisor( index=%d, divisor=%d ) at %s:%d\n", debug_break, index, divisor, file, line );
        DebugFunction();
    }
    gldlVertexAttribDivisor_impl( index, divisor );
}
void gldlMinSampleShading ( GLclampf value, const char *arg0, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glMinSampleShading( %f );\n", file, line,  (float)value );

    DebugTest( 274 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glMinSampleShading( value=%f ) at %s:%d\n", debug_break, (float)value, file, line );
        DebugFunction();
    }
    gldlMinSampleShading_impl( value );
}
void gldlBlendEquationi ( GLuint buf, GLenum mode, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glBlendEquationi( %d, %s );\n", file, line, buf,  arg1 );

    DebugTest( 26 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glBlendEquationi( buf=%d, mode=%s ) at %s:%d\n", debug_break, buf, arg1, file, line );
        DebugFunction();
    }
    gldlBlendEquationi_impl( buf, mode );
}
void gldlBlendEquationSeparatei ( GLuint buf, GLenum modeRGB, GLenum modeAlpha, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glBlendEquationSeparatei( %d, %s, %s );\n", file, line, buf, arg1,  arg2 );

    DebugTest( 24 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glBlendEquationSeparatei( buf=%d, modeRGB=%s, modeAlpha=%s ) at %s:%d\n", debug_break, buf, arg1, arg2, file, line );
        DebugFunction();
    }
    gldlBlendEquationSeparatei_impl( buf, modeRGB, modeAlpha );
}
void gldlBlendFunci ( GLuint buf, GLenum src, GLenum dst, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glBlendFunci( %d, %s, %s );\n", file, line, buf, arg1,  arg2 );

    DebugTest( 32 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glBlendFunci( buf=%d, src=%s, dst=%s ) at %s:%d\n", debug_break, buf, arg1, arg2, file, line );
        DebugFunction();
    }
    gldlBlendFunci_impl( buf, src, dst );
}
void gldlBlendFuncSeparatei ( GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glBlendFuncSeparatei( %d, %s, %s, %s, %s );\n", file, line, buf, arg1, arg2, arg3,  arg4 );

    DebugTest( 30 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glBlendFuncSeparatei( buf=%d, srcRGB=%s, dstRGB=%s, srcAlpha=%s, dstAlpha=%s ) at %s:%d\n", debug_break, buf, arg1, arg2, arg3, arg4, file, line );
        DebugFunction();
    }
    gldlBlendFuncSeparatei_impl( buf, srcRGB, dstRGB, srcAlpha, dstAlpha );
}
GLboolean gldlIsRenderbuffer ( GLuint renderbuffer, const char *arg0, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glIsRenderbuffer( %d );\n", file, line,  renderbuffer );

    DebugTest( 261 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glIsRenderbuffer( renderbuffer=%d ) at %s:%d\n", debug_break, renderbuffer, file, line );
        DebugFunction();
    }
    GLboolean ret = gldlIsRenderbuffer_impl( renderbuffer );
	return ret;
}
void gldlBindRenderbuffer ( GLenum target, GLuint renderbuffer, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glBindRenderbuffer( %s, %d );\n", file, line, arg0,  renderbuffer );

    DebugTest( 16 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glBindRenderbuffer( target=%s, renderbuffer=%d ) at %s:%d\n", debug_break, arg0, renderbuffer, file, line );
        DebugFunction();
    }
    gldlBindRenderbuffer_impl( target, renderbuffer );
}
void gldlDeleteRenderbuffers ( GLsizei n, const GLuint *renderbuffers, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glDeleteRenderbuffers( %d, %p );\n", file, line, n,  renderbuffers );

    DebugTest( 83 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glDeleteRenderbuffers( n=%d, renderbuffers=%p ) at %s:%d\n", debug_break, n, renderbuffers, file, line );
        DebugFunction();
    }
    gldlDeleteRenderbuffers_impl( n, renderbuffers );
}
void gldlGenRenderbuffers ( GLsizei n, GLuint *renderbuffers, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGenRenderbuffers( %d, %p );\n", file, line, n,  renderbuffers );

    DebugTest( 141 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGenRenderbuffers( n=%d, renderbuffers=%p ) at %s:%d\n", debug_break, n, renderbuffers, file, line );
        DebugFunction();
    }
    gldlGenRenderbuffers_impl( n, renderbuffers );
}
void gldlRenderbufferStorage ( GLenum target, GLenum internalformat, GLsizei width, GLsizei height, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glRenderbufferStorage( %s, %s, %d, %d );\n", file, line, arg0, arg1, width,  height );

    DebugTest( 361 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glRenderbufferStorage( target=%s, internalformat=%s, width=%d, height=%d ) at %s:%d\n", debug_break, arg0, arg1, width, height, file, line );
        DebugFunction();
    }
    gldlRenderbufferStorage_impl( target, internalformat, width, height );
}
void gldlGetRenderbufferParameteriv ( GLenum target, GLenum pname, GLint *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetRenderbufferParameteriv( %s, %s, %p );\n", file, line, arg0, arg1,  params );

    DebugTest( 197 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetRenderbufferParameteriv( target=%s, pname=%s, params=%p ) at %s:%d\n", debug_break, arg0, arg1, params, file, line );
        DebugFunction();
    }
    gldlGetRenderbufferParameteriv_impl( target, pname, params );
}
GLboolean gldlIsFramebuffer ( GLuint framebuffer, const char *arg0, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glIsFramebuffer( %d );\n", file, line,  framebuffer );

    DebugTest( 256 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glIsFramebuffer( framebuffer=%d ) at %s:%d\n", debug_break, framebuffer, file, line );
        DebugFunction();
    }
    GLboolean ret = gldlIsFramebuffer_impl( framebuffer );
	return ret;
}
void gldlBindFramebuffer ( GLenum target, GLuint framebuffer, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glBindFramebuffer( %s, %d );\n", file, line, arg0,  framebuffer );

    DebugTest( 13 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glBindFramebuffer( target=%s, framebuffer=%d ) at %s:%d\n", debug_break, arg0, framebuffer, file, line );
        DebugFunction();
    }
    gldlBindFramebuffer_impl( target, framebuffer );
}
void gldlDeleteFramebuffers ( GLsizei n, const GLuint *framebuffers, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glDeleteFramebuffers( %d, %p );\n", file, line, n,  framebuffers );

    DebugTest( 78 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glDeleteFramebuffers( n=%d, framebuffers=%p ) at %s:%d\n", debug_break, n, framebuffers, file, line );
        DebugFunction();
    }
    gldlDeleteFramebuffers_impl( n, framebuffers );
}
void gldlGenFramebuffers ( GLsizei n, GLuint *framebuffers, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGenFramebuffers( %d, %p );\n", file, line, n,  framebuffers );

    DebugTest( 138 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGenFramebuffers( n=%d, framebuffers=%p ) at %s:%d\n", debug_break, n, framebuffers, file, line );
        DebugFunction();
    }
    gldlGenFramebuffers_impl( n, framebuffers );
}
GLenum gldlCheckFramebufferStatus ( GLenum target, const char *arg0, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glCheckFramebufferStatus( %s );\n", file, line,  arg0 );

    DebugTest( 37 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glCheckFramebufferStatus( target=%s ) at %s:%d\n", debug_break, arg0, file, line );
        DebugFunction();
    }
    GLenum ret = gldlCheckFramebufferStatus_impl( target );
	return ret;
}
void gldlFramebufferTexture1D ( GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glFramebufferTexture1D( %s, %s, %s, %d, %d );\n", file, line, arg0, arg1, arg2, texture,  level );

    DebugTest( 132 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glFramebufferTexture1D( target=%s, attachment=%s, textarget=%s, texture=%d, level=%d ) at %s:%d\n", debug_break, arg0, arg1, arg2, texture, level, file, line );
        DebugFunction();
    }
    gldlFramebufferTexture1D_impl( target, attachment, textarget, texture, level );
}
void gldlFramebufferTexture2D ( GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glFramebufferTexture2D( %s, %s, %s, %d, %d );\n", file, line, arg0, arg1, arg2, texture,  level );

    DebugTest( 133 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glFramebufferTexture2D( target=%s, attachment=%s, textarget=%s, texture=%d, level=%d ) at %s:%d\n", debug_break, arg0, arg1, arg2, texture, level, file, line );
        DebugFunction();
    }
    gldlFramebufferTexture2D_impl( target, attachment, textarget, texture, level );
}
void gldlFramebufferTexture3D ( GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glFramebufferTexture3D( %s, %s, %s, %d, %d, %d );\n", file, line, arg0, arg1, arg2, texture, level,  zoffset );

    DebugTest( 134 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glFramebufferTexture3D( target=%s, attachment=%s, textarget=%s, texture=%d, level=%d, zoffset=%d ) at %s:%d\n", debug_break, arg0, arg1, arg2, texture, level, zoffset, file, line );
        DebugFunction();
    }
    gldlFramebufferTexture3D_impl( target, attachment, textarget, texture, level, zoffset );
}
void gldlFramebufferRenderbuffer ( GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glFramebufferRenderbuffer( %s, %s, %s, %d );\n", file, line, arg0, arg1, arg2,  renderbuffer );

    DebugTest( 130 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glFramebufferRenderbuffer( target=%s, attachment=%s, renderbuffertarget=%s, renderbuffer=%d ) at %s:%d\n", debug_break, arg0, arg1, arg2, renderbuffer, file, line );
        DebugFunction();
    }
    gldlFramebufferRenderbuffer_impl( target, attachment, renderbuffertarget, renderbuffer );
}
void gldlGetFramebufferAttachmentParameteriv ( GLenum target, GLenum attachment, GLenum pname, GLint *params, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetFramebufferAttachmentParameteriv( %s, %s, %s, %p );\n", file, line, arg0, arg1, arg2,  params );

    DebugTest( 174 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetFramebufferAttachmentParameteriv( target=%s, attachment=%s, pname=%s, params=%p ) at %s:%d\n", debug_break, arg0, arg1, arg2, params, file, line );
        DebugFunction();
    }
    gldlGetFramebufferAttachmentParameteriv_impl( target, attachment, pname, params );
}
void gldlGenerateMipmap ( GLenum target, const char *arg0, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGenerateMipmap( %s );\n", file, line,  arg0 );

    DebugTest( 146 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGenerateMipmap( target=%s ) at %s:%d\n", debug_break, arg0, file, line );
        DebugFunction();
    }
    gldlGenerateMipmap_impl( target );
}
void gldlBlitFramebuffer ( GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *arg6, const char *arg7, const char *arg8, const char *arg9, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glBlitFramebuffer( %d, %d, %d, %d, %d, %d, %d, %d, %s, %s );\n", file, line, srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, arg8,  arg9 );

    DebugTest( 34 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glBlitFramebuffer( srcX0=%d, srcY0=%d, srcX1=%d, srcY1=%d, dstX0=%d, dstY0=%d, dstX1=%d, dstY1=%d, mask=%s, filter=%s ) at %s:%d\n", debug_break, srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, arg8, arg9, file, line );
        DebugFunction();
    }
    gldlBlitFramebuffer_impl( srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter );
}
void gldlRenderbufferStorageMultisample ( GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glRenderbufferStorageMultisample( %s, %d, %s, %d, %d );\n", file, line, arg0, samples, arg2, width,  height );

    DebugTest( 362 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glRenderbufferStorageMultisample( target=%s, samples=%d, internalformat=%s, width=%d, height=%d ) at %s:%d\n", debug_break, arg0, samples, arg2, width, height, file, line );
        DebugFunction();
    }
    gldlRenderbufferStorageMultisample_impl( target, samples, internalformat, width, height );
}
void gldlFramebufferTextureLayer ( GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glFramebufferTextureLayer( %s, %s, %d, %d, %d );\n", file, line, arg0, arg1, texture, level,  layer );

    DebugTest( 135 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glFramebufferTextureLayer( target=%s, attachment=%s, texture=%d, level=%d, layer=%d ) at %s:%d\n", debug_break, arg0, arg1, texture, level, layer, file, line );
        DebugFunction();
    }
    gldlFramebufferTextureLayer_impl( target, attachment, texture, level, layer );
}
GLvoid* gldlMapBufferRange ( GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glMapBufferRange( %s, %d, %d, %s );\n", file, line, arg0, (int)offset, (int)length,  arg3 );

    DebugTest( 272 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glMapBufferRange( target=%s, offset=%d, length=%d, access=%s ) at %s:%d\n", debug_break, arg0, (int)offset, (int)length, arg3, file, line );
        DebugFunction();
    }
    GLvoid* ret = gldlMapBufferRange_impl( target, offset, length, access );
	return ret;
}
void gldlFlushMappedBufferRange ( GLenum target, GLintptr offset, GLsizeiptr length, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glFlushMappedBufferRange( %s, %d, %d );\n", file, line, arg0, (int)offset,  (int)length );

    DebugTest( 129 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glFlushMappedBufferRange( target=%s, offset=%d, length=%d ) at %s:%d\n", debug_break, arg0, (int)offset, (int)length, file, line );
        DebugFunction();
    }
    gldlFlushMappedBufferRange_impl( target, offset, length );
}
void gldlBindVertexArray ( GLuint array, const char *arg0, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glBindVertexArray( %d );\n", file, line,  array );

    DebugTest( 20 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glBindVertexArray( array=%d ) at %s:%d\n", debug_break, array, file, line );
        DebugFunction();
    }
    gldlBindVertexArray_impl( array );
}
void gldlDeleteVertexArrays ( GLsizei n, const GLuint *arrays, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glDeleteVertexArrays( %d, %p );\n", file, line, n,  arrays );

    DebugTest( 89 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glDeleteVertexArrays( n=%d, arrays=%p ) at %s:%d\n", debug_break, n, arrays, file, line );
        DebugFunction();
    }
    gldlDeleteVertexArrays_impl( n, arrays );
}
void gldlGenVertexArrays ( GLsizei n, GLuint *arrays, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGenVertexArrays( %d, %p );\n", file, line, n,  arrays );

    DebugTest( 145 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGenVertexArrays( n=%d, arrays=%p ) at %s:%d\n", debug_break, n, arrays, file, line );
        DebugFunction();
    }
    gldlGenVertexArrays_impl( n, arrays );
}
GLboolean gldlIsVertexArray ( GLuint array, const char *arg0, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glIsVertexArray( %d );\n", file, line,  array );

    DebugTest( 267 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glIsVertexArray( array=%d ) at %s:%d\n", debug_break, array, file, line );
        DebugFunction();
    }
    GLboolean ret = gldlIsVertexArray_impl( array );
	return ret;
}
void gldlGetUniformIndices ( GLuint program, GLsizei uniformCount, const GLchar* *uniformNames, GLuint *uniformIndices, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetUniformIndices( %d, %d, %p, %p );\n", file, line, program, uniformCount, uniformNames,  uniformIndices );

    DebugTest( 220 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetUniformIndices( program=%d, uniformCount=%d, uniformNames=%p, uniformIndices=%p ) at %s:%d\n", debug_break, program, uniformCount, uniformNames, uniformIndices, file, line );
        DebugFunction();
    }
    gldlGetUniformIndices_impl( program, uniformCount, uniformNames, uniformIndices );
}
void gldlGetActiveUniformsiv ( GLuint program, GLsizei uniformCount, const GLuint *uniformIndices, GLenum pname, GLint *params, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetActiveUniformsiv( %d, %d, %p, %s, %p );\n", file, line, program, uniformCount, uniformIndices, arg3,  params );

    DebugTest( 156 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetActiveUniformsiv( program=%d, uniformCount=%d, uniformIndices=%p, pname=%s, params=%p ) at %s:%d\n", debug_break, program, uniformCount, uniformIndices, arg3, params, file, line );
        DebugFunction();
    }
    gldlGetActiveUniformsiv_impl( program, uniformCount, uniformIndices, pname, params );
}
void gldlGetActiveUniformName ( GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformName, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetActiveUniformName( %d, %d, %d, %p, %p );\n", file, line, program, uniformIndex, bufSize, length,  uniformName );

    DebugTest( 155 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetActiveUniformName( program=%d, uniformIndex=%d, bufSize=%d, length=%p, uniformName=%p ) at %s:%d\n", debug_break, program, uniformIndex, bufSize, length, uniformName, file, line );
        DebugFunction();
    }
    gldlGetActiveUniformName_impl( program, uniformIndex, bufSize, length, uniformName );
}
GLuint gldlGetUniformBlockIndex ( GLuint program, const GLchar *uniformBlockName, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetUniformBlockIndex( %d, %p );\n", file, line, program,  uniformBlockName );

    DebugTest( 219 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetUniformBlockIndex( program=%d, uniformBlockName=%p ) at %s:%d\n", debug_break, program, uniformBlockName, file, line );
        DebugFunction();
    }
    GLuint ret = gldlGetUniformBlockIndex_impl( program, uniformBlockName );
	return ret;
}
void gldlGetActiveUniformBlockiv ( GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint *params, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetActiveUniformBlockiv( %d, %d, %s, %p );\n", file, line, program, uniformBlockIndex, arg2,  params );

    DebugTest( 154 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetActiveUniformBlockiv( program=%d, uniformBlockIndex=%d, pname=%s, params=%p ) at %s:%d\n", debug_break, program, uniformBlockIndex, arg2, params, file, line );
        DebugFunction();
    }
    gldlGetActiveUniformBlockiv_impl( program, uniformBlockIndex, pname, params );
}
void gldlGetActiveUniformBlockName ( GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformBlockName, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetActiveUniformBlockName( %d, %d, %d, %p, %p );\n", file, line, program, uniformBlockIndex, bufSize, length,  uniformBlockName );

    DebugTest( 153 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetActiveUniformBlockName( program=%d, uniformBlockIndex=%d, bufSize=%d, length=%p, uniformBlockName=%p ) at %s:%d\n", debug_break, program, uniformBlockIndex, bufSize, length, uniformBlockName, file, line );
        DebugFunction();
    }
    gldlGetActiveUniformBlockName_impl( program, uniformBlockIndex, bufSize, length, uniformBlockName );
}
void gldlUniformBlockBinding ( GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glUniformBlockBinding( %d, %d, %d );\n", file, line, program, uniformBlockIndex,  uniformBlockBinding );

    DebugTest( 448 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glUniformBlockBinding( program=%d, uniformBlockIndex=%d, uniformBlockBinding=%d ) at %s:%d\n", debug_break, program, uniformBlockIndex, uniformBlockBinding, file, line );
        DebugFunction();
    }
    gldlUniformBlockBinding_impl( program, uniformBlockIndex, uniformBlockBinding );
}
void gldlCopyBufferSubData ( GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glCopyBufferSubData( %s, %s, %d, %d, %d );\n", file, line, arg0, arg1, (int)readOffset, (int)writeOffset,  (int)size );

    DebugTest( 63 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glCopyBufferSubData( readTarget=%s, writeTarget=%s, readOffset=%d, writeOffset=%d, size=%d ) at %s:%d\n", debug_break, arg0, arg1, (int)readOffset, (int)writeOffset, (int)size, file, line );
        DebugFunction();
    }
    gldlCopyBufferSubData_impl( readTarget, writeTarget, readOffset, writeOffset, size );
}
void gldlDrawElementsBaseVertex ( GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, GLint basevertex, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glDrawElementsBaseVertex( %s, %d, %s, %p, %d );\n", file, line, arg0, count, arg2, indices,  basevertex );

    DebugTest( 107 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glDrawElementsBaseVertex( mode=%s, count=%d, type=%s, indices=%p, basevertex=%d ) at %s:%d\n", debug_break, arg0, count, arg2, indices, basevertex, file, line );
        DebugFunction();
    }
    gldlDrawElementsBaseVertex_impl( mode, count, type, indices, basevertex );
}
void gldlDrawRangeElementsBaseVertex ( GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid *indices, GLint basevertex, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *arg6, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glDrawRangeElementsBaseVertex( %s, %d, %d, %d, %s, %p, %d );\n", file, line, arg0, start, end, count, arg4, indices,  basevertex );

    DebugTest( 114 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glDrawRangeElementsBaseVertex( mode=%s, start=%d, end=%d, count=%d, type=%s, indices=%p, basevertex=%d ) at %s:%d\n", debug_break, arg0, start, end, count, arg4, indices, basevertex, file, line );
        DebugFunction();
    }
    gldlDrawRangeElementsBaseVertex_impl( mode, start, end, count, type, indices, basevertex );
}
void gldlDrawElementsInstancedBaseVertex ( GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, GLsizei primcount, GLint basevertex, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glDrawElementsInstancedBaseVertex( %s, %d, %s, %p, %d, %d );\n", file, line, arg0, count, arg2, indices, primcount,  basevertex );

    DebugTest( 111 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glDrawElementsInstancedBaseVertex( mode=%s, count=%d, type=%s, indices=%p, primcount=%d, basevertex=%d ) at %s:%d\n", debug_break, arg0, count, arg2, indices, primcount, basevertex, file, line );
        DebugFunction();
    }
    gldlDrawElementsInstancedBaseVertex_impl( mode, count, type, indices, primcount, basevertex );
}
void gldlMultiDrawElementsBaseVertex ( GLenum mode, const GLsizei *count, GLenum type, const GLvoid* *indices, GLsizei primcount, const GLint *basevertex, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glMultiDrawElementsBaseVertex( %s, %p, %s, %p, %d, %p );\n", file, line, arg0, count, arg2, indices, primcount,  basevertex );

    DebugTest( 278 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glMultiDrawElementsBaseVertex( mode=%s, count=%p, type=%s, indices=%p, primcount=%d, basevertex=%p ) at %s:%d\n", debug_break, arg0, count, arg2, indices, primcount, basevertex, file, line );
        DebugFunction();
    }
    gldlMultiDrawElementsBaseVertex_impl( mode, count, type, indices, primcount, basevertex );
}
void gldlProvokingVertex ( GLenum mode, const char *arg0, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glProvokingVertex( %s );\n", file, line,  arg0 );

    DebugTest( 355 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glProvokingVertex( mode=%s ) at %s:%d\n", debug_break, arg0, file, line );
        DebugFunction();
    }
    gldlProvokingVertex_impl( mode );
}
GLsync gldlFenceSync ( GLenum condition, GLbitfield flags, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glFenceSync( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( 126 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glFenceSync( condition=%s, flags=%s ) at %s:%d\n", debug_break, arg0, arg1, file, line );
        DebugFunction();
    }
    GLsync ret = gldlFenceSync_impl( condition, flags );
	return ret;
}
GLboolean gldlIsSync ( GLsync sync, const char *arg0, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glIsSync( %s );\n", file, line,  arg0 );

    DebugTest( 264 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glIsSync( sync=%s ) at %s:%d\n", debug_break, arg0, file, line );
        DebugFunction();
    }
    GLboolean ret = gldlIsSync_impl( sync );
	return ret;
}
void gldlDeleteSync ( GLsync sync, const char *arg0, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glDeleteSync( %s );\n", file, line,  arg0 );

    DebugTest( 86 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glDeleteSync( sync=%s ) at %s:%d\n", debug_break, arg0, file, line );
        DebugFunction();
    }
    gldlDeleteSync_impl( sync );
}
GLenum gldlClientWaitSync ( GLsync sync, GLbitfield flags, GLuint64 timeout, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glClientWaitSync( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( 48 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glClientWaitSync( sync=%s, flags=%s, timeout=%s ) at %s:%d\n", debug_break, arg0, arg1, arg2, file, line );
        DebugFunction();
    }
    GLenum ret = gldlClientWaitSync_impl( sync, flags, timeout );
	return ret;
}
void gldlWaitSync ( GLsync sync, GLbitfield flags, GLuint64 timeout, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glWaitSync( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( 559 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glWaitSync( sync=%s, flags=%s, timeout=%s ) at %s:%d\n", debug_break, arg0, arg1, arg2, file, line );
        DebugFunction();
    }
    gldlWaitSync_impl( sync, flags, timeout );
}
void gldlGetInteger64v ( GLenum pname, GLint64 *params, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetInteger64v( %s, %p );\n", file, line, arg0,  params );

    DebugTest( 177 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetInteger64v( pname=%s, params=%p ) at %s:%d\n", debug_break, arg0, params, file, line );
        DebugFunction();
    }
    gldlGetInteger64v_impl( pname, params );
}
void gldlGetSynciv ( GLsync sync, GLenum pname, GLsizei bufSize, GLsizei *length, GLint *values, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetSynciv( %s, %s, %d, %p, %p );\n", file, line, arg0, arg1, bufSize, length,  values );

    DebugTest( 210 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetSynciv( sync=%s, pname=%s, bufSize=%d, length=%p, values=%p ) at %s:%d\n", debug_break, arg0, arg1, bufSize, length, values, file, line );
        DebugFunction();
    }
    gldlGetSynciv_impl( sync, pname, bufSize, length, values );
}
void gldlTexImage2DMultisample ( GLenum target, GLsizei samples, GLint internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glTexImage2DMultisample( %s, %d, %d, %d, %d, %d );\n", file, line, arg0, samples, internalformat, width, height,  fixedsamplelocations );

    DebugTest( 397 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glTexImage2DMultisample( target=%s, samples=%d, internalformat=%d, width=%d, height=%d, fixedsamplelocations=%d ) at %s:%d\n", debug_break, arg0, samples, internalformat, width, height, fixedsamplelocations, file, line );
        DebugFunction();
    }
    gldlTexImage2DMultisample_impl( target, samples, internalformat, width, height, fixedsamplelocations );
}
void gldlTexImage3DMultisample ( GLenum target, GLsizei samples, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *arg6, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glTexImage3DMultisample( %s, %d, %d, %d, %d, %d, %d );\n", file, line, arg0, samples, internalformat, width, height, depth,  fixedsamplelocations );

    DebugTest( 399 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glTexImage3DMultisample( target=%s, samples=%d, internalformat=%d, width=%d, height=%d, depth=%d, fixedsamplelocations=%d ) at %s:%d\n", debug_break, arg0, samples, internalformat, width, height, depth, fixedsamplelocations, file, line );
        DebugFunction();
    }
    gldlTexImage3DMultisample_impl( target, samples, internalformat, width, height, depth, fixedsamplelocations );
}
void gldlGetMultisamplefv ( GLenum pname, GLuint index, GLfloat *val, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetMultisamplefv( %s, %d, %p );\n", file, line, arg0, index,  val );

    DebugTest( 181 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetMultisamplefv( pname=%s, index=%d, val=%p ) at %s:%d\n", debug_break, arg0, index, val, file, line );
        DebugFunction();
    }
    gldlGetMultisamplefv_impl( pname, index, val );
}
void gldlSampleMaski ( GLuint index, GLbitfield mask, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glSampleMaski( %d, %s );\n", file, line, index,  arg1 );

    DebugTest( 365 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glSampleMaski( index=%d, mask=%s ) at %s:%d\n", debug_break, index, arg1, file, line );
        DebugFunction();
    }
    gldlSampleMaski_impl( index, mask );
}
void gldlBlendEquationiARB ( GLuint buf, GLenum mode, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glBlendEquationiARB( %d, %s );\n", file, line, buf,  arg1 );

    DebugTest( 27 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glBlendEquationiARB( buf=%d, mode=%s ) at %s:%d\n", debug_break, buf, arg1, file, line );
        DebugFunction();
    }
    gldlBlendEquationiARB_impl( buf, mode );
}
void gldlBlendEquationSeparateiARB ( GLuint buf, GLenum modeRGB, GLenum modeAlpha, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glBlendEquationSeparateiARB( %d, %s, %s );\n", file, line, buf, arg1,  arg2 );

    DebugTest( 25 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glBlendEquationSeparateiARB( buf=%d, modeRGB=%s, modeAlpha=%s ) at %s:%d\n", debug_break, buf, arg1, arg2, file, line );
        DebugFunction();
    }
    gldlBlendEquationSeparateiARB_impl( buf, modeRGB, modeAlpha );
}
void gldlBlendFunciARB ( GLuint buf, GLenum src, GLenum dst, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glBlendFunciARB( %d, %s, %s );\n", file, line, buf, arg1,  arg2 );

    DebugTest( 33 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glBlendFunciARB( buf=%d, src=%s, dst=%s ) at %s:%d\n", debug_break, buf, arg1, arg2, file, line );
        DebugFunction();
    }
    gldlBlendFunciARB_impl( buf, src, dst );
}
void gldlBlendFuncSeparateiARB ( GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glBlendFuncSeparateiARB( %d, %s, %s, %s, %s );\n", file, line, buf, arg1, arg2, arg3,  arg4 );

    DebugTest( 31 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glBlendFuncSeparateiARB( buf=%d, srcRGB=%s, dstRGB=%s, srcAlpha=%s, dstAlpha=%s ) at %s:%d\n", debug_break, buf, arg1, arg2, arg3, arg4, file, line );
        DebugFunction();
    }
    gldlBlendFuncSeparateiARB_impl( buf, srcRGB, dstRGB, srcAlpha, dstAlpha );
}
void gldlMinSampleShadingARB ( GLclampf value, const char *arg0, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glMinSampleShadingARB( %f );\n", file, line,  (float)value );

    DebugTest( 275 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glMinSampleShadingARB( value=%f ) at %s:%d\n", debug_break, (float)value, file, line );
        DebugFunction();
    }
    gldlMinSampleShadingARB_impl( value );
}
void gldlNamedStringARB ( GLenum type, GLint namelen, const GLchar *name, GLint stringlen, const GLchar *string, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glNamedStringARB( %s, %d, %p, %d, %p );\n", file, line, arg0, namelen, name, stringlen,  string );

    DebugTest( 287 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glNamedStringARB( type=%s, namelen=%d, name=%p, stringlen=%d, string=%p ) at %s:%d\n", debug_break, arg0, namelen, name, stringlen, string, file, line );
        DebugFunction();
    }
    gldlNamedStringARB_impl( type, namelen, name, stringlen, string );
}
void gldlDeleteNamedStringARB ( GLint namelen, const GLchar *name, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glDeleteNamedStringARB( %d, %p );\n", file, line, namelen,  name );

    DebugTest( 79 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glDeleteNamedStringARB( namelen=%d, name=%p ) at %s:%d\n", debug_break, namelen, name, file, line );
        DebugFunction();
    }
    gldlDeleteNamedStringARB_impl( namelen, name );
}
void gldlCompileShaderIncludeARB ( GLuint shader, GLsizei count, const GLchar* *path, const GLint *length, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glCompileShaderIncludeARB( %d, %d, %p, %p );\n", file, line, shader, count, path,  length );

    DebugTest( 56 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glCompileShaderIncludeARB( shader=%d, count=%d, path=%p, length=%p ) at %s:%d\n", debug_break, shader, count, path, length, file, line );
        DebugFunction();
    }
    gldlCompileShaderIncludeARB_impl( shader, count, path, length );
}
GLboolean gldlIsNamedStringARB ( GLint namelen, const GLchar *name, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glIsNamedStringARB( %d, %p );\n", file, line, namelen,  name );

    DebugTest( 257 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glIsNamedStringARB( namelen=%d, name=%p ) at %s:%d\n", debug_break, namelen, name, file, line );
        DebugFunction();
    }
    GLboolean ret = gldlIsNamedStringARB_impl( namelen, name );
	return ret;
}
void gldlGetNamedStringARB ( GLint namelen, const GLchar *name, GLsizei bufSize, GLint *stringlen, GLchar *string, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetNamedStringARB( %d, %p, %d, %p, %p );\n", file, line, namelen, name, bufSize, stringlen,  string );

    DebugTest( 182 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetNamedStringARB( namelen=%d, name=%p, bufSize=%d, stringlen=%p, string=%p ) at %s:%d\n", debug_break, namelen, name, bufSize, stringlen, string, file, line );
        DebugFunction();
    }
    gldlGetNamedStringARB_impl( namelen, name, bufSize, stringlen, string );
}
void gldlGetNamedStringivARB ( GLint namelen, const GLchar *name, GLenum pname, GLint *params, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetNamedStringivARB( %d, %p, %s, %p );\n", file, line, namelen, name, arg2,  params );

    DebugTest( 183 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetNamedStringivARB( namelen=%d, name=%p, pname=%s, params=%p ) at %s:%d\n", debug_break, namelen, name, arg2, params, file, line );
        DebugFunction();
    }
    gldlGetNamedStringivARB_impl( namelen, name, pname, params );
}
void gldlBindFragDataLocationIndexed ( GLuint program, GLuint colorNumber, GLuint index, const GLchar *name, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glBindFragDataLocationIndexed( %d, %d, %d, %p );\n", file, line, program, colorNumber, index,  name );

    DebugTest( 12 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glBindFragDataLocationIndexed( program=%d, colorNumber=%d, index=%d, name=%p ) at %s:%d\n", debug_break, program, colorNumber, index, name, file, line );
        DebugFunction();
    }
    gldlBindFragDataLocationIndexed_impl( program, colorNumber, index, name );
}
GLint gldlGetFragDataIndex ( GLuint program, const GLchar *name, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetFragDataIndex( %d, %p );\n", file, line, program,  name );

    DebugTest( 172 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetFragDataIndex( program=%d, name=%p ) at %s:%d\n", debug_break, program, name, file, line );
        DebugFunction();
    }
    GLint ret = gldlGetFragDataIndex_impl( program, name );
	return ret;
}
void gldlGenSamplers ( GLsizei count, GLuint *samplers, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGenSamplers( %d, %p );\n", file, line, count,  samplers );

    DebugTest( 142 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGenSamplers( count=%d, samplers=%p ) at %s:%d\n", debug_break, count, samplers, file, line );
        DebugFunction();
    }
    gldlGenSamplers_impl( count, samplers );
}
void gldlDeleteSamplers ( GLsizei count, const GLuint *samplers, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glDeleteSamplers( %d, %p );\n", file, line, count,  samplers );

    DebugTest( 84 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glDeleteSamplers( count=%d, samplers=%p ) at %s:%d\n", debug_break, count, samplers, file, line );
        DebugFunction();
    }
    gldlDeleteSamplers_impl( count, samplers );
}
GLboolean gldlIsSampler ( GLuint sampler, const char *arg0, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glIsSampler( %d );\n", file, line,  sampler );

    DebugTest( 262 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glIsSampler( sampler=%d ) at %s:%d\n", debug_break, sampler, file, line );
        DebugFunction();
    }
    GLboolean ret = gldlIsSampler_impl( sampler );
	return ret;
}
void gldlBindSampler ( GLuint unit, GLuint sampler, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glBindSampler( %d, %d );\n", file, line, unit,  sampler );

    DebugTest( 17 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glBindSampler( unit=%d, sampler=%d ) at %s:%d\n", debug_break, unit, sampler, file, line );
        DebugFunction();
    }
    gldlBindSampler_impl( unit, sampler );
}
void gldlSamplerParameteri ( GLuint sampler, GLenum pname, GLint param, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glSamplerParameteri( %d, %s, %d );\n", file, line, sampler, arg1,  param );

    DebugTest( 370 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glSamplerParameteri( sampler=%d, pname=%s, param=%d ) at %s:%d\n", debug_break, sampler, arg1, param, file, line );
        DebugFunction();
    }
    gldlSamplerParameteri_impl( sampler, pname, param );
}
void gldlSamplerParameteriv ( GLuint sampler, GLenum pname, const GLint *param, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glSamplerParameteriv( %d, %s, %p );\n", file, line, sampler, arg1,  param );

    DebugTest( 371 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glSamplerParameteriv( sampler=%d, pname=%s, param=%p ) at %s:%d\n", debug_break, sampler, arg1, param, file, line );
        DebugFunction();
    }
    gldlSamplerParameteriv_impl( sampler, pname, param );
}
void gldlSamplerParameterf ( GLuint sampler, GLenum pname, GLfloat param, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glSamplerParameterf( %d, %s, %f );\n", file, line, sampler, arg1,  (float)param );

    DebugTest( 368 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glSamplerParameterf( sampler=%d, pname=%s, param=%f ) at %s:%d\n", debug_break, sampler, arg1, (float)param, file, line );
        DebugFunction();
    }
    gldlSamplerParameterf_impl( sampler, pname, param );
}
void gldlSamplerParameterfv ( GLuint sampler, GLenum pname, const GLfloat *param, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glSamplerParameterfv( %d, %s, %p );\n", file, line, sampler, arg1,  param );

    DebugTest( 369 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glSamplerParameterfv( sampler=%d, pname=%s, param=%p ) at %s:%d\n", debug_break, sampler, arg1, param, file, line );
        DebugFunction();
    }
    gldlSamplerParameterfv_impl( sampler, pname, param );
}
void gldlSamplerParameterIiv ( GLuint sampler, GLenum pname, const GLint *param, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glSamplerParameterIiv( %d, %s, %p );\n", file, line, sampler, arg1,  param );

    DebugTest( 366 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glSamplerParameterIiv( sampler=%d, pname=%s, param=%p ) at %s:%d\n", debug_break, sampler, arg1, param, file, line );
        DebugFunction();
    }
    gldlSamplerParameterIiv_impl( sampler, pname, param );
}
void gldlSamplerParameterIuiv ( GLuint sampler, GLenum pname, const GLuint *param, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glSamplerParameterIuiv( %d, %s, %p );\n", file, line, sampler, arg1,  param );

    DebugTest( 367 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glSamplerParameterIuiv( sampler=%d, pname=%s, param=%p ) at %s:%d\n", debug_break, sampler, arg1, param, file, line );
        DebugFunction();
    }
    gldlSamplerParameterIuiv_impl( sampler, pname, param );
}
void gldlGetSamplerParameteriv ( GLuint sampler, GLenum pname, GLint *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetSamplerParameteriv( %d, %s, %p );\n", file, line, sampler, arg1,  params );

    DebugTest( 201 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetSamplerParameteriv( sampler=%d, pname=%s, params=%p ) at %s:%d\n", debug_break, sampler, arg1, params, file, line );
        DebugFunction();
    }
    gldlGetSamplerParameteriv_impl( sampler, pname, params );
}
void gldlGetSamplerParameterIiv ( GLuint sampler, GLenum pname, GLint *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetSamplerParameterIiv( %d, %s, %p );\n", file, line, sampler, arg1,  params );

    DebugTest( 198 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetSamplerParameterIiv( sampler=%d, pname=%s, params=%p ) at %s:%d\n", debug_break, sampler, arg1, params, file, line );
        DebugFunction();
    }
    gldlGetSamplerParameterIiv_impl( sampler, pname, params );
}
void gldlGetSamplerParameterfv ( GLuint sampler, GLenum pname, GLfloat *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetSamplerParameterfv( %d, %s, %p );\n", file, line, sampler, arg1,  params );

    DebugTest( 200 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetSamplerParameterfv( sampler=%d, pname=%s, params=%p ) at %s:%d\n", debug_break, sampler, arg1, params, file, line );
        DebugFunction();
    }
    gldlGetSamplerParameterfv_impl( sampler, pname, params );
}
void gldlGetSamplerParameterIuiv ( GLuint sampler, GLenum pname, GLuint *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetSamplerParameterIuiv( %d, %s, %p );\n", file, line, sampler, arg1,  params );

    DebugTest( 199 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetSamplerParameterIuiv( sampler=%d, pname=%s, params=%p ) at %s:%d\n", debug_break, sampler, arg1, params, file, line );
        DebugFunction();
    }
    gldlGetSamplerParameterIuiv_impl( sampler, pname, params );
}
void gldlQueryCounter ( GLuint id, GLenum target, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glQueryCounter( %d, %s );\n", file, line, id,  arg1 );

    DebugTest( 356 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glQueryCounter( id=%d, target=%s ) at %s:%d\n", debug_break, id, arg1, file, line );
        DebugFunction();
    }
    gldlQueryCounter_impl( id, target );
}
void gldlGetQueryObjecti64v ( GLuint id, GLenum pname, GLint64 *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetQueryObjecti64v( %d, %s, %p );\n", file, line, id, arg1,  params );

    DebugTest( 192 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetQueryObjecti64v( id=%d, pname=%s, params=%p ) at %s:%d\n", debug_break, id, arg1, params, file, line );
        DebugFunction();
    }
    gldlGetQueryObjecti64v_impl( id, pname, params );
}
void gldlGetQueryObjectui64v ( GLuint id, GLenum pname, GLuint64 *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetQueryObjectui64v( %d, %s, %p );\n", file, line, id, arg1,  params );

    DebugTest( 194 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetQueryObjectui64v( id=%d, pname=%s, params=%p ) at %s:%d\n", debug_break, id, arg1, params, file, line );
        DebugFunction();
    }
    gldlGetQueryObjectui64v_impl( id, pname, params );
}
void gldlVertexP2ui ( GLenum type, GLuint value, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexP2ui( %s, %d );\n", file, line, arg0,  value );

    DebugTest( 549 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexP2ui( type=%s, value=%d ) at %s:%d\n", debug_break, arg0, value, file, line );
        DebugFunction();
    }
    gldlVertexP2ui_impl( type, value );
}
void gldlVertexP2uiv ( GLenum type, const GLuint *value, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexP2uiv( %s, %p );\n", file, line, arg0,  value );

    DebugTest( 550 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexP2uiv( type=%s, value=%p ) at %s:%d\n", debug_break, arg0, value, file, line );
        DebugFunction();
    }
    gldlVertexP2uiv_impl( type, value );
}
void gldlVertexP3ui ( GLenum type, GLuint value, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexP3ui( %s, %d );\n", file, line, arg0,  value );

    DebugTest( 551 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexP3ui( type=%s, value=%d ) at %s:%d\n", debug_break, arg0, value, file, line );
        DebugFunction();
    }
    gldlVertexP3ui_impl( type, value );
}
void gldlVertexP3uiv ( GLenum type, const GLuint *value, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexP3uiv( %s, %p );\n", file, line, arg0,  value );

    DebugTest( 552 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexP3uiv( type=%s, value=%p ) at %s:%d\n", debug_break, arg0, value, file, line );
        DebugFunction();
    }
    gldlVertexP3uiv_impl( type, value );
}
void gldlVertexP4ui ( GLenum type, GLuint value, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexP4ui( %s, %d );\n", file, line, arg0,  value );

    DebugTest( 553 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexP4ui( type=%s, value=%d ) at %s:%d\n", debug_break, arg0, value, file, line );
        DebugFunction();
    }
    gldlVertexP4ui_impl( type, value );
}
void gldlVertexP4uiv ( GLenum type, const GLuint *value, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexP4uiv( %s, %p );\n", file, line, arg0,  value );

    DebugTest( 554 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexP4uiv( type=%s, value=%p ) at %s:%d\n", debug_break, arg0, value, file, line );
        DebugFunction();
    }
    gldlVertexP4uiv_impl( type, value );
}
void gldlTexCoordP1ui ( GLenum type, GLuint coords, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glTexCoordP1ui( %s, %d );\n", file, line, arg0,  coords );

    DebugTest( 387 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glTexCoordP1ui( type=%s, coords=%d ) at %s:%d\n", debug_break, arg0, coords, file, line );
        DebugFunction();
    }
    gldlTexCoordP1ui_impl( type, coords );
}
void gldlTexCoordP1uiv ( GLenum type, const GLuint *coords, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glTexCoordP1uiv( %s, %p );\n", file, line, arg0,  coords );

    DebugTest( 388 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glTexCoordP1uiv( type=%s, coords=%p ) at %s:%d\n", debug_break, arg0, coords, file, line );
        DebugFunction();
    }
    gldlTexCoordP1uiv_impl( type, coords );
}
void gldlTexCoordP2ui ( GLenum type, GLuint coords, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glTexCoordP2ui( %s, %d );\n", file, line, arg0,  coords );

    DebugTest( 389 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glTexCoordP2ui( type=%s, coords=%d ) at %s:%d\n", debug_break, arg0, coords, file, line );
        DebugFunction();
    }
    gldlTexCoordP2ui_impl( type, coords );
}
void gldlTexCoordP2uiv ( GLenum type, const GLuint *coords, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glTexCoordP2uiv( %s, %p );\n", file, line, arg0,  coords );

    DebugTest( 390 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glTexCoordP2uiv( type=%s, coords=%p ) at %s:%d\n", debug_break, arg0, coords, file, line );
        DebugFunction();
    }
    gldlTexCoordP2uiv_impl( type, coords );
}
void gldlTexCoordP3ui ( GLenum type, GLuint coords, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glTexCoordP3ui( %s, %d );\n", file, line, arg0,  coords );

    DebugTest( 391 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glTexCoordP3ui( type=%s, coords=%d ) at %s:%d\n", debug_break, arg0, coords, file, line );
        DebugFunction();
    }
    gldlTexCoordP3ui_impl( type, coords );
}
void gldlTexCoordP3uiv ( GLenum type, const GLuint *coords, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glTexCoordP3uiv( %s, %p );\n", file, line, arg0,  coords );

    DebugTest( 392 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glTexCoordP3uiv( type=%s, coords=%p ) at %s:%d\n", debug_break, arg0, coords, file, line );
        DebugFunction();
    }
    gldlTexCoordP3uiv_impl( type, coords );
}
void gldlTexCoordP4ui ( GLenum type, GLuint coords, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glTexCoordP4ui( %s, %d );\n", file, line, arg0,  coords );

    DebugTest( 393 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glTexCoordP4ui( type=%s, coords=%d ) at %s:%d\n", debug_break, arg0, coords, file, line );
        DebugFunction();
    }
    gldlTexCoordP4ui_impl( type, coords );
}
void gldlTexCoordP4uiv ( GLenum type, const GLuint *coords, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glTexCoordP4uiv( %s, %p );\n", file, line, arg0,  coords );

    DebugTest( 394 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glTexCoordP4uiv( type=%s, coords=%p ) at %s:%d\n", debug_break, arg0, coords, file, line );
        DebugFunction();
    }
    gldlTexCoordP4uiv_impl( type, coords );
}
void gldlMultiTexCoordP1ui ( GLenum texture, GLenum type, GLuint coords, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glMultiTexCoordP1ui( %s, %s, %d );\n", file, line, arg0, arg1,  coords );

    DebugTest( 279 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glMultiTexCoordP1ui( texture=%s, type=%s, coords=%d ) at %s:%d\n", debug_break, arg0, arg1, coords, file, line );
        DebugFunction();
    }
    gldlMultiTexCoordP1ui_impl( texture, type, coords );
}
void gldlMultiTexCoordP1uiv ( GLenum texture, GLenum type, const GLuint *coords, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glMultiTexCoordP1uiv( %s, %s, %p );\n", file, line, arg0, arg1,  coords );

    DebugTest( 280 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glMultiTexCoordP1uiv( texture=%s, type=%s, coords=%p ) at %s:%d\n", debug_break, arg0, arg1, coords, file, line );
        DebugFunction();
    }
    gldlMultiTexCoordP1uiv_impl( texture, type, coords );
}
void gldlMultiTexCoordP2ui ( GLenum texture, GLenum type, GLuint coords, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glMultiTexCoordP2ui( %s, %s, %d );\n", file, line, arg0, arg1,  coords );

    DebugTest( 281 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glMultiTexCoordP2ui( texture=%s, type=%s, coords=%d ) at %s:%d\n", debug_break, arg0, arg1, coords, file, line );
        DebugFunction();
    }
    gldlMultiTexCoordP2ui_impl( texture, type, coords );
}
void gldlMultiTexCoordP2uiv ( GLenum texture, GLenum type, const GLuint *coords, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glMultiTexCoordP2uiv( %s, %s, %p );\n", file, line, arg0, arg1,  coords );

    DebugTest( 282 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glMultiTexCoordP2uiv( texture=%s, type=%s, coords=%p ) at %s:%d\n", debug_break, arg0, arg1, coords, file, line );
        DebugFunction();
    }
    gldlMultiTexCoordP2uiv_impl( texture, type, coords );
}
void gldlMultiTexCoordP3ui ( GLenum texture, GLenum type, GLuint coords, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glMultiTexCoordP3ui( %s, %s, %d );\n", file, line, arg0, arg1,  coords );

    DebugTest( 283 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glMultiTexCoordP3ui( texture=%s, type=%s, coords=%d ) at %s:%d\n", debug_break, arg0, arg1, coords, file, line );
        DebugFunction();
    }
    gldlMultiTexCoordP3ui_impl( texture, type, coords );
}
void gldlMultiTexCoordP3uiv ( GLenum texture, GLenum type, const GLuint *coords, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glMultiTexCoordP3uiv( %s, %s, %p );\n", file, line, arg0, arg1,  coords );

    DebugTest( 284 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glMultiTexCoordP3uiv( texture=%s, type=%s, coords=%p ) at %s:%d\n", debug_break, arg0, arg1, coords, file, line );
        DebugFunction();
    }
    gldlMultiTexCoordP3uiv_impl( texture, type, coords );
}
void gldlMultiTexCoordP4ui ( GLenum texture, GLenum type, GLuint coords, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glMultiTexCoordP4ui( %s, %s, %d );\n", file, line, arg0, arg1,  coords );

    DebugTest( 285 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glMultiTexCoordP4ui( texture=%s, type=%s, coords=%d ) at %s:%d\n", debug_break, arg0, arg1, coords, file, line );
        DebugFunction();
    }
    gldlMultiTexCoordP4ui_impl( texture, type, coords );
}
void gldlMultiTexCoordP4uiv ( GLenum texture, GLenum type, const GLuint *coords, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glMultiTexCoordP4uiv( %s, %s, %p );\n", file, line, arg0, arg1,  coords );

    DebugTest( 286 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glMultiTexCoordP4uiv( texture=%s, type=%s, coords=%p ) at %s:%d\n", debug_break, arg0, arg1, coords, file, line );
        DebugFunction();
    }
    gldlMultiTexCoordP4uiv_impl( texture, type, coords );
}
void gldlNormalP3ui ( GLenum type, GLuint coords, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glNormalP3ui( %s, %d );\n", file, line, arg0,  coords );

    DebugTest( 288 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glNormalP3ui( type=%s, coords=%d ) at %s:%d\n", debug_break, arg0, coords, file, line );
        DebugFunction();
    }
    gldlNormalP3ui_impl( type, coords );
}
void gldlNormalP3uiv ( GLenum type, const GLuint *coords, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glNormalP3uiv( %s, %p );\n", file, line, arg0,  coords );

    DebugTest( 289 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glNormalP3uiv( type=%s, coords=%p ) at %s:%d\n", debug_break, arg0, coords, file, line );
        DebugFunction();
    }
    gldlNormalP3uiv_impl( type, coords );
}
void gldlColorP3ui ( GLenum type, GLuint color, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glColorP3ui( %s, %d );\n", file, line, arg0,  color );

    DebugTest( 51 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glColorP3ui( type=%s, color=%d ) at %s:%d\n", debug_break, arg0, color, file, line );
        DebugFunction();
    }
    gldlColorP3ui_impl( type, color );
}
void gldlColorP3uiv ( GLenum type, const GLuint *color, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glColorP3uiv( %s, %p );\n", file, line, arg0,  color );

    DebugTest( 52 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glColorP3uiv( type=%s, color=%p ) at %s:%d\n", debug_break, arg0, color, file, line );
        DebugFunction();
    }
    gldlColorP3uiv_impl( type, color );
}
void gldlColorP4ui ( GLenum type, GLuint color, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glColorP4ui( %s, %d );\n", file, line, arg0,  color );

    DebugTest( 53 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glColorP4ui( type=%s, color=%d ) at %s:%d\n", debug_break, arg0, color, file, line );
        DebugFunction();
    }
    gldlColorP4ui_impl( type, color );
}
void gldlColorP4uiv ( GLenum type, const GLuint *color, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glColorP4uiv( %s, %p );\n", file, line, arg0,  color );

    DebugTest( 54 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glColorP4uiv( type=%s, color=%p ) at %s:%d\n", debug_break, arg0, color, file, line );
        DebugFunction();
    }
    gldlColorP4uiv_impl( type, color );
}
void gldlSecondaryColorP3ui ( GLenum type, GLuint color, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glSecondaryColorP3ui( %s, %d );\n", file, line, arg0,  color );

    DebugTest( 376 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glSecondaryColorP3ui( type=%s, color=%d ) at %s:%d\n", debug_break, arg0, color, file, line );
        DebugFunction();
    }
    gldlSecondaryColorP3ui_impl( type, color );
}
void gldlSecondaryColorP3uiv ( GLenum type, const GLuint *color, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glSecondaryColorP3uiv( %s, %p );\n", file, line, arg0,  color );

    DebugTest( 377 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glSecondaryColorP3uiv( type=%s, color=%p ) at %s:%d\n", debug_break, arg0, color, file, line );
        DebugFunction();
    }
    gldlSecondaryColorP3uiv_impl( type, color );
}
void gldlVertexAttribP1ui ( GLuint index, GLenum type, GLboolean normalized, GLuint value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttribP1ui( %d, %s, %d, %d );\n", file, line, index, arg1, normalized,  value );

    DebugTest( 540 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttribP1ui( index=%d, type=%s, normalized=%d, value=%d ) at %s:%d\n", debug_break, index, arg1, normalized, value, file, line );
        DebugFunction();
    }
    gldlVertexAttribP1ui_impl( index, type, normalized, value );
}
void gldlVertexAttribP1uiv ( GLuint index, GLenum type, GLboolean normalized, const GLuint *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttribP1uiv( %d, %s, %d, %p );\n", file, line, index, arg1, normalized,  value );

    DebugTest( 541 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttribP1uiv( index=%d, type=%s, normalized=%d, value=%p ) at %s:%d\n", debug_break, index, arg1, normalized, value, file, line );
        DebugFunction();
    }
    gldlVertexAttribP1uiv_impl( index, type, normalized, value );
}
void gldlVertexAttribP2ui ( GLuint index, GLenum type, GLboolean normalized, GLuint value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttribP2ui( %d, %s, %d, %d );\n", file, line, index, arg1, normalized,  value );

    DebugTest( 542 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttribP2ui( index=%d, type=%s, normalized=%d, value=%d ) at %s:%d\n", debug_break, index, arg1, normalized, value, file, line );
        DebugFunction();
    }
    gldlVertexAttribP2ui_impl( index, type, normalized, value );
}
void gldlVertexAttribP2uiv ( GLuint index, GLenum type, GLboolean normalized, const GLuint *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttribP2uiv( %d, %s, %d, %p );\n", file, line, index, arg1, normalized,  value );

    DebugTest( 543 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttribP2uiv( index=%d, type=%s, normalized=%d, value=%p ) at %s:%d\n", debug_break, index, arg1, normalized, value, file, line );
        DebugFunction();
    }
    gldlVertexAttribP2uiv_impl( index, type, normalized, value );
}
void gldlVertexAttribP3ui ( GLuint index, GLenum type, GLboolean normalized, GLuint value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttribP3ui( %d, %s, %d, %d );\n", file, line, index, arg1, normalized,  value );

    DebugTest( 544 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttribP3ui( index=%d, type=%s, normalized=%d, value=%d ) at %s:%d\n", debug_break, index, arg1, normalized, value, file, line );
        DebugFunction();
    }
    gldlVertexAttribP3ui_impl( index, type, normalized, value );
}
void gldlVertexAttribP3uiv ( GLuint index, GLenum type, GLboolean normalized, const GLuint *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttribP3uiv( %d, %s, %d, %p );\n", file, line, index, arg1, normalized,  value );

    DebugTest( 545 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttribP3uiv( index=%d, type=%s, normalized=%d, value=%p ) at %s:%d\n", debug_break, index, arg1, normalized, value, file, line );
        DebugFunction();
    }
    gldlVertexAttribP3uiv_impl( index, type, normalized, value );
}
void gldlVertexAttribP4ui ( GLuint index, GLenum type, GLboolean normalized, GLuint value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttribP4ui( %d, %s, %d, %d );\n", file, line, index, arg1, normalized,  value );

    DebugTest( 546 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttribP4ui( index=%d, type=%s, normalized=%d, value=%d ) at %s:%d\n", debug_break, index, arg1, normalized, value, file, line );
        DebugFunction();
    }
    gldlVertexAttribP4ui_impl( index, type, normalized, value );
}
void gldlVertexAttribP4uiv ( GLuint index, GLenum type, GLboolean normalized, const GLuint *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttribP4uiv( %d, %s, %d, %p );\n", file, line, index, arg1, normalized,  value );

    DebugTest( 547 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttribP4uiv( index=%d, type=%s, normalized=%d, value=%p ) at %s:%d\n", debug_break, index, arg1, normalized, value, file, line );
        DebugFunction();
    }
    gldlVertexAttribP4uiv_impl( index, type, normalized, value );
}
void gldlDrawArraysIndirect ( GLenum mode, const GLvoid *indirect, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glDrawArraysIndirect( %s, %p );\n", file, line, arg0,  indirect );

    DebugTest( 101 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glDrawArraysIndirect( mode=%s, indirect=%p ) at %s:%d\n", debug_break, arg0, indirect, file, line );
        DebugFunction();
    }
    gldlDrawArraysIndirect_impl( mode, indirect );
}
void gldlDrawElementsIndirect ( GLenum mode, GLenum type, const GLvoid *indirect, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glDrawElementsIndirect( %s, %s, %p );\n", file, line, arg0, arg1,  indirect );

    DebugTest( 108 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glDrawElementsIndirect( mode=%s, type=%s, indirect=%p ) at %s:%d\n", debug_break, arg0, arg1, indirect, file, line );
        DebugFunction();
    }
    gldlDrawElementsIndirect_impl( mode, type, indirect );
}
void gldlUniform1d ( GLint location, GLdouble x, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glUniform1d( %d, %f );\n", file, line, location,  (float)x );

    DebugTest( 416 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glUniform1d( location=%d, x=%f ) at %s:%d\n", debug_break, location, (float)x, file, line );
        DebugFunction();
    }
    gldlUniform1d_impl( location, x );
}
void gldlUniform2d ( GLint location, GLdouble x, GLdouble y, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glUniform2d( %d, %f, %f );\n", file, line, location, (float)x,  (float)y );

    DebugTest( 424 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glUniform2d( location=%d, x=%f, y=%f ) at %s:%d\n", debug_break, location, (float)x, (float)y, file, line );
        DebugFunction();
    }
    gldlUniform2d_impl( location, x, y );
}
void gldlUniform3d ( GLint location, GLdouble x, GLdouble y, GLdouble z, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glUniform3d( %d, %f, %f, %f );\n", file, line, location, (float)x, (float)y,  (float)z );

    DebugTest( 432 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glUniform3d( location=%d, x=%f, y=%f, z=%f ) at %s:%d\n", debug_break, location, (float)x, (float)y, (float)z, file, line );
        DebugFunction();
    }
    gldlUniform3d_impl( location, x, y, z );
}
void gldlUniform4d ( GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glUniform4d( %d, %f, %f, %f, %f );\n", file, line, location, (float)x, (float)y, (float)z,  (float)w );

    DebugTest( 440 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glUniform4d( location=%d, x=%f, y=%f, z=%f, w=%f ) at %s:%d\n", debug_break, location, (float)x, (float)y, (float)z, (float)w, file, line );
        DebugFunction();
    }
    gldlUniform4d_impl( location, x, y, z, w );
}
void gldlUniform1dv ( GLint location, GLsizei count, const GLdouble *value, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glUniform1dv( %d, %d, %p );\n", file, line, location, count,  value );

    DebugTest( 417 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glUniform1dv( location=%d, count=%d, value=%p ) at %s:%d\n", debug_break, location, count, value, file, line );
        DebugFunction();
    }
    gldlUniform1dv_impl( location, count, value );
}
void gldlUniform2dv ( GLint location, GLsizei count, const GLdouble *value, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glUniform2dv( %d, %d, %p );\n", file, line, location, count,  value );

    DebugTest( 425 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glUniform2dv( location=%d, count=%d, value=%p ) at %s:%d\n", debug_break, location, count, value, file, line );
        DebugFunction();
    }
    gldlUniform2dv_impl( location, count, value );
}
void gldlUniform3dv ( GLint location, GLsizei count, const GLdouble *value, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glUniform3dv( %d, %d, %p );\n", file, line, location, count,  value );

    DebugTest( 433 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glUniform3dv( location=%d, count=%d, value=%p ) at %s:%d\n", debug_break, location, count, value, file, line );
        DebugFunction();
    }
    gldlUniform3dv_impl( location, count, value );
}
void gldlUniform4dv ( GLint location, GLsizei count, const GLdouble *value, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glUniform4dv( %d, %d, %p );\n", file, line, location, count,  value );

    DebugTest( 441 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glUniform4dv( location=%d, count=%d, value=%p ) at %s:%d\n", debug_break, location, count, value, file, line );
        DebugFunction();
    }
    gldlUniform4dv_impl( location, count, value );
}
void gldlUniformMatrix2dv ( GLint location, GLsizei count, GLboolean transpose, const GLdouble *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glUniformMatrix2dv( %d, %d, %d, %p );\n", file, line, location, count, transpose,  value );

    DebugTest( 449 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glUniformMatrix2dv( location=%d, count=%d, transpose=%d, value=%p ) at %s:%d\n", debug_break, location, count, transpose, value, file, line );
        DebugFunction();
    }
    gldlUniformMatrix2dv_impl( location, count, transpose, value );
}
void gldlUniformMatrix3dv ( GLint location, GLsizei count, GLboolean transpose, const GLdouble *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glUniformMatrix3dv( %d, %d, %d, %p );\n", file, line, location, count, transpose,  value );

    DebugTest( 455 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glUniformMatrix3dv( location=%d, count=%d, transpose=%d, value=%p ) at %s:%d\n", debug_break, location, count, transpose, value, file, line );
        DebugFunction();
    }
    gldlUniformMatrix3dv_impl( location, count, transpose, value );
}
void gldlUniformMatrix4dv ( GLint location, GLsizei count, GLboolean transpose, const GLdouble *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glUniformMatrix4dv( %d, %d, %d, %p );\n", file, line, location, count, transpose,  value );

    DebugTest( 461 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glUniformMatrix4dv( location=%d, count=%d, transpose=%d, value=%p ) at %s:%d\n", debug_break, location, count, transpose, value, file, line );
        DebugFunction();
    }
    gldlUniformMatrix4dv_impl( location, count, transpose, value );
}
void gldlUniformMatrix2x3dv ( GLint location, GLsizei count, GLboolean transpose, const GLdouble *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glUniformMatrix2x3dv( %d, %d, %d, %p );\n", file, line, location, count, transpose,  value );

    DebugTest( 451 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glUniformMatrix2x3dv( location=%d, count=%d, transpose=%d, value=%p ) at %s:%d\n", debug_break, location, count, transpose, value, file, line );
        DebugFunction();
    }
    gldlUniformMatrix2x3dv_impl( location, count, transpose, value );
}
void gldlUniformMatrix2x4dv ( GLint location, GLsizei count, GLboolean transpose, const GLdouble *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glUniformMatrix2x4dv( %d, %d, %d, %p );\n", file, line, location, count, transpose,  value );

    DebugTest( 453 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glUniformMatrix2x4dv( location=%d, count=%d, transpose=%d, value=%p ) at %s:%d\n", debug_break, location, count, transpose, value, file, line );
        DebugFunction();
    }
    gldlUniformMatrix2x4dv_impl( location, count, transpose, value );
}
void gldlUniformMatrix3x2dv ( GLint location, GLsizei count, GLboolean transpose, const GLdouble *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glUniformMatrix3x2dv( %d, %d, %d, %p );\n", file, line, location, count, transpose,  value );

    DebugTest( 457 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glUniformMatrix3x2dv( location=%d, count=%d, transpose=%d, value=%p ) at %s:%d\n", debug_break, location, count, transpose, value, file, line );
        DebugFunction();
    }
    gldlUniformMatrix3x2dv_impl( location, count, transpose, value );
}
void gldlUniformMatrix3x4dv ( GLint location, GLsizei count, GLboolean transpose, const GLdouble *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glUniformMatrix3x4dv( %d, %d, %d, %p );\n", file, line, location, count, transpose,  value );

    DebugTest( 459 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glUniformMatrix3x4dv( location=%d, count=%d, transpose=%d, value=%p ) at %s:%d\n", debug_break, location, count, transpose, value, file, line );
        DebugFunction();
    }
    gldlUniformMatrix3x4dv_impl( location, count, transpose, value );
}
void gldlUniformMatrix4x2dv ( GLint location, GLsizei count, GLboolean transpose, const GLdouble *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glUniformMatrix4x2dv( %d, %d, %d, %p );\n", file, line, location, count, transpose,  value );

    DebugTest( 463 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glUniformMatrix4x2dv( location=%d, count=%d, transpose=%d, value=%p ) at %s:%d\n", debug_break, location, count, transpose, value, file, line );
        DebugFunction();
    }
    gldlUniformMatrix4x2dv_impl( location, count, transpose, value );
}
void gldlUniformMatrix4x3dv ( GLint location, GLsizei count, GLboolean transpose, const GLdouble *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glUniformMatrix4x3dv( %d, %d, %d, %p );\n", file, line, location, count, transpose,  value );

    DebugTest( 465 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glUniformMatrix4x3dv( location=%d, count=%d, transpose=%d, value=%p ) at %s:%d\n", debug_break, location, count, transpose, value, file, line );
        DebugFunction();
    }
    gldlUniformMatrix4x3dv_impl( location, count, transpose, value );
}
void gldlGetUniformdv ( GLuint program, GLint location, GLdouble *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetUniformdv( %d, %d, %p );\n", file, line, program, location,  params );

    DebugTest( 223 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetUniformdv( program=%d, location=%d, params=%p ) at %s:%d\n", debug_break, program, location, params, file, line );
        DebugFunction();
    }
    gldlGetUniformdv_impl( program, location, params );
}
GLint gldlGetSubroutineUniformLocation ( GLuint program, GLenum shadertype, const GLchar *name, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetSubroutineUniformLocation( %d, %s, %p );\n", file, line, program, arg1,  name );

    DebugTest( 209 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetSubroutineUniformLocation( program=%d, shadertype=%s, name=%p ) at %s:%d\n", debug_break, program, arg1, name, file, line );
        DebugFunction();
    }
    GLint ret = gldlGetSubroutineUniformLocation_impl( program, shadertype, name );
	return ret;
}
GLuint gldlGetSubroutineIndex ( GLuint program, GLenum shadertype, const GLchar *name, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetSubroutineIndex( %d, %s, %p );\n", file, line, program, arg1,  name );

    DebugTest( 208 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetSubroutineIndex( program=%d, shadertype=%s, name=%p ) at %s:%d\n", debug_break, program, arg1, name, file, line );
        DebugFunction();
    }
    GLuint ret = gldlGetSubroutineIndex_impl( program, shadertype, name );
	return ret;
}
void gldlGetActiveSubroutineUniformiv ( GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint *values, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetActiveSubroutineUniformiv( %d, %s, %d, %s, %p );\n", file, line, program, arg1, index, arg3,  values );

    DebugTest( 151 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetActiveSubroutineUniformiv( program=%d, shadertype=%s, index=%d, pname=%s, values=%p ) at %s:%d\n", debug_break, program, arg1, index, arg3, values, file, line );
        DebugFunction();
    }
    gldlGetActiveSubroutineUniformiv_impl( program, shadertype, index, pname, values );
}
void gldlGetActiveSubroutineUniformName ( GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei *length, GLchar *name, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetActiveSubroutineUniformName( %d, %s, %d, %d, %p, %p );\n", file, line, program, arg1, index, bufsize, length,  name );

    DebugTest( 150 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetActiveSubroutineUniformName( program=%d, shadertype=%s, index=%d, bufsize=%d, length=%p, name=%p ) at %s:%d\n", debug_break, program, arg1, index, bufsize, length, name, file, line );
        DebugFunction();
    }
    gldlGetActiveSubroutineUniformName_impl( program, shadertype, index, bufsize, length, name );
}
void gldlGetActiveSubroutineName ( GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei *length, GLchar *name, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetActiveSubroutineName( %d, %s, %d, %d, %p, %p );\n", file, line, program, arg1, index, bufsize, length,  name );

    DebugTest( 149 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetActiveSubroutineName( program=%d, shadertype=%s, index=%d, bufsize=%d, length=%p, name=%p ) at %s:%d\n", debug_break, program, arg1, index, bufsize, length, name, file, line );
        DebugFunction();
    }
    gldlGetActiveSubroutineName_impl( program, shadertype, index, bufsize, length, name );
}
void gldlUniformSubroutinesuiv ( GLenum shadertype, GLsizei count, const GLuint *indices, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glUniformSubroutinesuiv( %s, %d, %p );\n", file, line, arg0, count,  indices );

    DebugTest( 467 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glUniformSubroutinesuiv( shadertype=%s, count=%d, indices=%p ) at %s:%d\n", debug_break, arg0, count, indices, file, line );
        DebugFunction();
    }
    gldlUniformSubroutinesuiv_impl( shadertype, count, indices );
}
void gldlGetUniformSubroutineuiv ( GLenum shadertype, GLint location, GLuint *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetUniformSubroutineuiv( %s, %d, %p );\n", file, line, arg0, location,  params );

    DebugTest( 222 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetUniformSubroutineuiv( shadertype=%s, location=%d, params=%p ) at %s:%d\n", debug_break, arg0, location, params, file, line );
        DebugFunction();
    }
    gldlGetUniformSubroutineuiv_impl( shadertype, location, params );
}
void gldlGetProgramStageiv ( GLuint program, GLenum shadertype, GLenum pname, GLint *values, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetProgramStageiv( %d, %s, %s, %p );\n", file, line, program, arg1, arg2,  values );

    DebugTest( 189 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetProgramStageiv( program=%d, shadertype=%s, pname=%s, values=%p ) at %s:%d\n", debug_break, program, arg1, arg2, values, file, line );
        DebugFunction();
    }
    gldlGetProgramStageiv_impl( program, shadertype, pname, values );
}
void gldlPatchParameteri ( GLenum pname, GLint value, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glPatchParameteri( %s, %d );\n", file, line, arg0,  value );

    DebugTest( 291 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glPatchParameteri( pname=%s, value=%d ) at %s:%d\n", debug_break, arg0, value, file, line );
        DebugFunction();
    }
    gldlPatchParameteri_impl( pname, value );
}
void gldlPatchParameterfv ( GLenum pname, const GLfloat *values, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glPatchParameterfv( %s, %p );\n", file, line, arg0,  values );

    DebugTest( 290 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glPatchParameterfv( pname=%s, values=%p ) at %s:%d\n", debug_break, arg0, values, file, line );
        DebugFunction();
    }
    gldlPatchParameterfv_impl( pname, values );
}
void gldlBindTransformFeedback ( GLenum target, GLuint id, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glBindTransformFeedback( %s, %d );\n", file, line, arg0,  id );

    DebugTest( 19 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glBindTransformFeedback( target=%s, id=%d ) at %s:%d\n", debug_break, arg0, id, file, line );
        DebugFunction();
    }
    gldlBindTransformFeedback_impl( target, id );
}
void gldlDeleteTransformFeedbacks ( GLsizei n, const GLuint *ids, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glDeleteTransformFeedbacks( %d, %p );\n", file, line, n,  ids );

    DebugTest( 88 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glDeleteTransformFeedbacks( n=%d, ids=%p ) at %s:%d\n", debug_break, n, ids, file, line );
        DebugFunction();
    }
    gldlDeleteTransformFeedbacks_impl( n, ids );
}
void gldlGenTransformFeedbacks ( GLsizei n, GLuint *ids, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGenTransformFeedbacks( %d, %p );\n", file, line, n,  ids );

    DebugTest( 144 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGenTransformFeedbacks( n=%d, ids=%p ) at %s:%d\n", debug_break, n, ids, file, line );
        DebugFunction();
    }
    gldlGenTransformFeedbacks_impl( n, ids );
}
GLboolean gldlIsTransformFeedback ( GLuint id, const char *arg0, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glIsTransformFeedback( %d );\n", file, line,  id );

    DebugTest( 266 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glIsTransformFeedback( id=%d ) at %s:%d\n", debug_break, id, file, line );
        DebugFunction();
    }
    GLboolean ret = gldlIsTransformFeedback_impl( id );
	return ret;
}
void gldlPauseTransformFeedback ( const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glPauseTransformFeedback();\n", file, line );

    DebugTest( 292 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glPauseTransformFeedback( ) at %s:%d\n", debug_break, file, line );

        DebugFunction();
    }
    gldlPauseTransformFeedback_impl(  );
}
void gldlResumeTransformFeedback ( const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glResumeTransformFeedback();\n", file, line );

    DebugTest( 363 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glResumeTransformFeedback( ) at %s:%d\n", debug_break, file, line );

        DebugFunction();
    }
    gldlResumeTransformFeedback_impl(  );
}
void gldlDrawTransformFeedback ( GLenum mode, GLuint id, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glDrawTransformFeedback( %s, %d );\n", file, line, arg0,  id );

    DebugTest( 115 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glDrawTransformFeedback( mode=%s, id=%d ) at %s:%d\n", debug_break, arg0, id, file, line );
        DebugFunction();
    }
    gldlDrawTransformFeedback_impl( mode, id );
}
void gldlDrawTransformFeedbackStream ( GLenum mode, GLuint id, GLuint stream, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glDrawTransformFeedbackStream( %s, %d, %d );\n", file, line, arg0, id,  stream );

    DebugTest( 117 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glDrawTransformFeedbackStream( mode=%s, id=%d, stream=%d ) at %s:%d\n", debug_break, arg0, id, stream, file, line );
        DebugFunction();
    }
    gldlDrawTransformFeedbackStream_impl( mode, id, stream );
}
void gldlBeginQueryIndexed ( GLenum target, GLuint index, GLuint id, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glBeginQueryIndexed( %s, %d, %d );\n", file, line, arg0, index,  id );

    DebugTest( 5 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glBeginQueryIndexed( target=%s, index=%d, id=%d ) at %s:%d\n", debug_break, arg0, index, id, file, line );
        DebugFunction();
    }
    gldlBeginQueryIndexed_impl( target, index, id );
}
void gldlEndQueryIndexed ( GLenum target, GLuint index, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glEndQueryIndexed( %s, %d );\n", file, line, arg0,  index );

    DebugTest( 124 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glEndQueryIndexed( target=%s, index=%d ) at %s:%d\n", debug_break, arg0, index, file, line );
        DebugFunction();
    }
    gldlEndQueryIndexed_impl( target, index );
}
void gldlGetQueryIndexediv ( GLenum target, GLuint index, GLenum pname, GLint *params, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetQueryIndexediv( %s, %d, %s, %p );\n", file, line, arg0, index, arg2,  params );

    DebugTest( 191 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetQueryIndexediv( target=%s, index=%d, pname=%s, params=%p ) at %s:%d\n", debug_break, arg0, index, arg2, params, file, line );
        DebugFunction();
    }
    gldlGetQueryIndexediv_impl( target, index, pname, params );
}
void gldlReleaseShaderCompiler ( const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glReleaseShaderCompiler();\n", file, line );

    DebugTest( 360 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glReleaseShaderCompiler( ) at %s:%d\n", debug_break, file, line );

        DebugFunction();
    }
    gldlReleaseShaderCompiler_impl(  );
}
void gldlShaderBinary ( GLsizei count, const GLuint *shaders, GLenum binaryformat, const GLvoid *binary, GLsizei length, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glShaderBinary( %d, %p, %s, %p, %d );\n", file, line, count, shaders, arg2, binary,  length );

    DebugTest( 378 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glShaderBinary( count=%d, shaders=%p, binaryformat=%s, binary=%p, length=%d ) at %s:%d\n", debug_break, count, shaders, arg2, binary, length, file, line );
        DebugFunction();
    }
    gldlShaderBinary_impl( count, shaders, binaryformat, binary, length );
}
void gldlGetShaderPrecisionFormat ( GLenum shadertype, GLenum precisiontype, GLint *range, GLint *precision, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetShaderPrecisionFormat( %s, %s, %p, %p );\n", file, line, arg0, arg1, range,  precision );

    DebugTest( 203 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetShaderPrecisionFormat( shadertype=%s, precisiontype=%s, range=%p, precision=%p ) at %s:%d\n", debug_break, arg0, arg1, range, precision, file, line );
        DebugFunction();
    }
    gldlGetShaderPrecisionFormat_impl( shadertype, precisiontype, range, precision );
}
void gldlDepthRangef ( GLclampf n, GLclampf f, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glDepthRangef( %f, %f );\n", file, line, (float)n,  (float)f );

    DebugTest( 95 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glDepthRangef( n=%f, f=%f ) at %s:%d\n", debug_break, (float)n, (float)f, file, line );
        DebugFunction();
    }
    gldlDepthRangef_impl( n, f );
}
void gldlClearDepthf ( GLclampf d, const char *arg0, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glClearDepthf( %f );\n", file, line,  (float)d );

    DebugTest( 46 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glClearDepthf( d=%f ) at %s:%d\n", debug_break, (float)d, file, line );
        DebugFunction();
    }
    gldlClearDepthf_impl( d );
}
void gldlGetProgramBinary ( GLuint program, GLsizei bufSize, GLsizei *length, GLenum *binaryFormat, GLvoid *binary, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetProgramBinary( %d, %d, %p, %p, %p );\n", file, line, program, bufSize, length, binaryFormat,  binary );

    DebugTest( 185 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetProgramBinary( program=%d, bufSize=%d, length=%p, binaryFormat=%p, binary=%p ) at %s:%d\n", debug_break, program, bufSize, length, binaryFormat, binary, file, line );
        DebugFunction();
    }
    gldlGetProgramBinary_impl( program, bufSize, length, binaryFormat, binary );
}
void gldlProgramBinary ( GLuint program, GLenum binaryFormat, const GLvoid *binary, GLsizei length, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glProgramBinary( %d, %s, %p, %d );\n", file, line, program, arg1, binary,  length );

    DebugTest( 303 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glProgramBinary( program=%d, binaryFormat=%s, binary=%p, length=%d ) at %s:%d\n", debug_break, program, arg1, binary, length, file, line );
        DebugFunction();
    }
    gldlProgramBinary_impl( program, binaryFormat, binary, length );
}
void gldlProgramParameteri ( GLuint program, GLenum pname, GLint value, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glProgramParameteri( %d, %s, %d );\n", file, line, program, arg1,  value );

    DebugTest( 304 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glProgramParameteri( program=%d, pname=%s, value=%d ) at %s:%d\n", debug_break, program, arg1, value, file, line );
        DebugFunction();
    }
    gldlProgramParameteri_impl( program, pname, value );
}
void gldlUseProgramStages ( GLuint pipeline, GLbitfield stages, GLuint program, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glUseProgramStages( %d, %s, %d );\n", file, line, pipeline, arg1,  program );

    DebugTest( 470 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glUseProgramStages( pipeline=%d, stages=%s, program=%d ) at %s:%d\n", debug_break, pipeline, arg1, program, file, line );
        DebugFunction();
    }
    gldlUseProgramStages_impl( pipeline, stages, program );
}
void gldlActiveShaderProgram ( GLuint pipeline, GLuint program, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glActiveShaderProgram( %d, %d );\n", file, line, pipeline,  program );

    DebugTest( 0 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glActiveShaderProgram( pipeline=%d, program=%d ) at %s:%d\n", debug_break, pipeline, program, file, line );
        DebugFunction();
    }
    gldlActiveShaderProgram_impl( pipeline, program );
}
GLuint gldlCreateShaderProgramv ( GLenum type, GLsizei count, const GLchar* *strings, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glCreateShaderProgramv( %s, %d, %p );\n", file, line, arg0, count,  strings );

    DebugTest( 71 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glCreateShaderProgramv( type=%s, count=%d, strings=%p ) at %s:%d\n", debug_break, arg0, count, strings, file, line );
        DebugFunction();
    }
    GLuint ret = gldlCreateShaderProgramv_impl( type, count, strings );
	return ret;
}
void gldlBindProgramPipeline ( GLuint pipeline, const char *arg0, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glBindProgramPipeline( %d );\n", file, line,  pipeline );

    DebugTest( 15 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glBindProgramPipeline( pipeline=%d ) at %s:%d\n", debug_break, pipeline, file, line );
        DebugFunction();
    }
    gldlBindProgramPipeline_impl( pipeline );
}
void gldlDeleteProgramPipelines ( GLsizei n, const GLuint *pipelines, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glDeleteProgramPipelines( %d, %p );\n", file, line, n,  pipelines );

    DebugTest( 81 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glDeleteProgramPipelines( n=%d, pipelines=%p ) at %s:%d\n", debug_break, n, pipelines, file, line );
        DebugFunction();
    }
    gldlDeleteProgramPipelines_impl( n, pipelines );
}
void gldlGenProgramPipelines ( GLsizei n, GLuint *pipelines, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGenProgramPipelines( %d, %p );\n", file, line, n,  pipelines );

    DebugTest( 139 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGenProgramPipelines( n=%d, pipelines=%p ) at %s:%d\n", debug_break, n, pipelines, file, line );
        DebugFunction();
    }
    gldlGenProgramPipelines_impl( n, pipelines );
}
GLboolean gldlIsProgramPipeline ( GLuint pipeline, const char *arg0, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glIsProgramPipeline( %d );\n", file, line,  pipeline );

    DebugTest( 259 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glIsProgramPipeline( pipeline=%d ) at %s:%d\n", debug_break, pipeline, file, line );
        DebugFunction();
    }
    GLboolean ret = gldlIsProgramPipeline_impl( pipeline );
	return ret;
}
void gldlGetProgramPipelineiv ( GLuint pipeline, GLenum pname, GLint *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetProgramPipelineiv( %d, %s, %p );\n", file, line, pipeline, arg1,  params );

    DebugTest( 188 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetProgramPipelineiv( pipeline=%d, pname=%s, params=%p ) at %s:%d\n", debug_break, pipeline, arg1, params, file, line );
        DebugFunction();
    }
    gldlGetProgramPipelineiv_impl( pipeline, pname, params );
}
void gldlProgramUniform1i ( GLuint program, GLint location, GLint v0, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glProgramUniform1i( %d, %d, %d );\n", file, line, program, location,  v0 );

    DebugTest( 309 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glProgramUniform1i( program=%d, location=%d, v0=%d ) at %s:%d\n", debug_break, program, location, v0, file, line );
        DebugFunction();
    }
    gldlProgramUniform1i_impl( program, location, v0 );
}
void gldlProgramUniform1iv ( GLuint program, GLint location, GLsizei count, const GLint *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glProgramUniform1iv( %d, %d, %d, %p );\n", file, line, program, location, count,  value );

    DebugTest( 310 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glProgramUniform1iv( program=%d, location=%d, count=%d, value=%p ) at %s:%d\n", debug_break, program, location, count, value, file, line );
        DebugFunction();
    }
    gldlProgramUniform1iv_impl( program, location, count, value );
}
void gldlProgramUniform1f ( GLuint program, GLint location, GLfloat v0, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glProgramUniform1f( %d, %d, %f );\n", file, line, program, location,  (float)v0 );

    DebugTest( 307 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glProgramUniform1f( program=%d, location=%d, v0=%f ) at %s:%d\n", debug_break, program, location, (float)v0, file, line );
        DebugFunction();
    }
    gldlProgramUniform1f_impl( program, location, v0 );
}
void gldlProgramUniform1fv ( GLuint program, GLint location, GLsizei count, const GLfloat *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glProgramUniform1fv( %d, %d, %d, %p );\n", file, line, program, location, count,  value );

    DebugTest( 308 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glProgramUniform1fv( program=%d, location=%d, count=%d, value=%p ) at %s:%d\n", debug_break, program, location, count, value, file, line );
        DebugFunction();
    }
    gldlProgramUniform1fv_impl( program, location, count, value );
}
void gldlProgramUniform1d ( GLuint program, GLint location, GLdouble v0, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glProgramUniform1d( %d, %d, %f );\n", file, line, program, location,  (float)v0 );

    DebugTest( 305 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glProgramUniform1d( program=%d, location=%d, v0=%f ) at %s:%d\n", debug_break, program, location, (float)v0, file, line );
        DebugFunction();
    }
    gldlProgramUniform1d_impl( program, location, v0 );
}
void gldlProgramUniform1dv ( GLuint program, GLint location, GLsizei count, const GLdouble *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glProgramUniform1dv( %d, %d, %d, %p );\n", file, line, program, location, count,  value );

    DebugTest( 306 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glProgramUniform1dv( program=%d, location=%d, count=%d, value=%p ) at %s:%d\n", debug_break, program, location, count, value, file, line );
        DebugFunction();
    }
    gldlProgramUniform1dv_impl( program, location, count, value );
}
void gldlProgramUniform1ui ( GLuint program, GLint location, GLuint v0, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glProgramUniform1ui( %d, %d, %d );\n", file, line, program, location,  v0 );

    DebugTest( 311 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glProgramUniform1ui( program=%d, location=%d, v0=%d ) at %s:%d\n", debug_break, program, location, v0, file, line );
        DebugFunction();
    }
    gldlProgramUniform1ui_impl( program, location, v0 );
}
void gldlProgramUniform1uiv ( GLuint program, GLint location, GLsizei count, const GLuint *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glProgramUniform1uiv( %d, %d, %d, %p );\n", file, line, program, location, count,  value );

    DebugTest( 312 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glProgramUniform1uiv( program=%d, location=%d, count=%d, value=%p ) at %s:%d\n", debug_break, program, location, count, value, file, line );
        DebugFunction();
    }
    gldlProgramUniform1uiv_impl( program, location, count, value );
}
void gldlProgramUniform2i ( GLuint program, GLint location, GLint v0, GLint v1, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glProgramUniform2i( %d, %d, %d, %d );\n", file, line, program, location, v0,  v1 );

    DebugTest( 317 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glProgramUniform2i( program=%d, location=%d, v0=%d, v1=%d ) at %s:%d\n", debug_break, program, location, v0, v1, file, line );
        DebugFunction();
    }
    gldlProgramUniform2i_impl( program, location, v0, v1 );
}
void gldlProgramUniform2iv ( GLuint program, GLint location, GLsizei count, const GLint *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glProgramUniform2iv( %d, %d, %d, %p );\n", file, line, program, location, count,  value );

    DebugTest( 318 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glProgramUniform2iv( program=%d, location=%d, count=%d, value=%p ) at %s:%d\n", debug_break, program, location, count, value, file, line );
        DebugFunction();
    }
    gldlProgramUniform2iv_impl( program, location, count, value );
}
void gldlProgramUniform2f ( GLuint program, GLint location, GLfloat v0, GLfloat v1, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glProgramUniform2f( %d, %d, %f, %f );\n", file, line, program, location, (float)v0,  (float)v1 );

    DebugTest( 315 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glProgramUniform2f( program=%d, location=%d, v0=%f, v1=%f ) at %s:%d\n", debug_break, program, location, (float)v0, (float)v1, file, line );
        DebugFunction();
    }
    gldlProgramUniform2f_impl( program, location, v0, v1 );
}
void gldlProgramUniform2fv ( GLuint program, GLint location, GLsizei count, const GLfloat *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glProgramUniform2fv( %d, %d, %d, %p );\n", file, line, program, location, count,  value );

    DebugTest( 316 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glProgramUniform2fv( program=%d, location=%d, count=%d, value=%p ) at %s:%d\n", debug_break, program, location, count, value, file, line );
        DebugFunction();
    }
    gldlProgramUniform2fv_impl( program, location, count, value );
}
void gldlProgramUniform2d ( GLuint program, GLint location, GLdouble v0, GLdouble v1, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glProgramUniform2d( %d, %d, %f, %f );\n", file, line, program, location, (float)v0,  (float)v1 );

    DebugTest( 313 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glProgramUniform2d( program=%d, location=%d, v0=%f, v1=%f ) at %s:%d\n", debug_break, program, location, (float)v0, (float)v1, file, line );
        DebugFunction();
    }
    gldlProgramUniform2d_impl( program, location, v0, v1 );
}
void gldlProgramUniform2dv ( GLuint program, GLint location, GLsizei count, const GLdouble *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glProgramUniform2dv( %d, %d, %d, %p );\n", file, line, program, location, count,  value );

    DebugTest( 314 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glProgramUniform2dv( program=%d, location=%d, count=%d, value=%p ) at %s:%d\n", debug_break, program, location, count, value, file, line );
        DebugFunction();
    }
    gldlProgramUniform2dv_impl( program, location, count, value );
}
void gldlProgramUniform2ui ( GLuint program, GLint location, GLuint v0, GLuint v1, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glProgramUniform2ui( %d, %d, %d, %d );\n", file, line, program, location, v0,  v1 );

    DebugTest( 319 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glProgramUniform2ui( program=%d, location=%d, v0=%d, v1=%d ) at %s:%d\n", debug_break, program, location, v0, v1, file, line );
        DebugFunction();
    }
    gldlProgramUniform2ui_impl( program, location, v0, v1 );
}
void gldlProgramUniform2uiv ( GLuint program, GLint location, GLsizei count, const GLuint *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glProgramUniform2uiv( %d, %d, %d, %p );\n", file, line, program, location, count,  value );

    DebugTest( 320 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glProgramUniform2uiv( program=%d, location=%d, count=%d, value=%p ) at %s:%d\n", debug_break, program, location, count, value, file, line );
        DebugFunction();
    }
    gldlProgramUniform2uiv_impl( program, location, count, value );
}
void gldlProgramUniform3i ( GLuint program, GLint location, GLint v0, GLint v1, GLint v2, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glProgramUniform3i( %d, %d, %d, %d, %d );\n", file, line, program, location, v0, v1,  v2 );

    DebugTest( 325 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glProgramUniform3i( program=%d, location=%d, v0=%d, v1=%d, v2=%d ) at %s:%d\n", debug_break, program, location, v0, v1, v2, file, line );
        DebugFunction();
    }
    gldlProgramUniform3i_impl( program, location, v0, v1, v2 );
}
void gldlProgramUniform3iv ( GLuint program, GLint location, GLsizei count, const GLint *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glProgramUniform3iv( %d, %d, %d, %p );\n", file, line, program, location, count,  value );

    DebugTest( 326 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glProgramUniform3iv( program=%d, location=%d, count=%d, value=%p ) at %s:%d\n", debug_break, program, location, count, value, file, line );
        DebugFunction();
    }
    gldlProgramUniform3iv_impl( program, location, count, value );
}
void gldlProgramUniform3f ( GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glProgramUniform3f( %d, %d, %f, %f, %f );\n", file, line, program, location, (float)v0, (float)v1,  (float)v2 );

    DebugTest( 323 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glProgramUniform3f( program=%d, location=%d, v0=%f, v1=%f, v2=%f ) at %s:%d\n", debug_break, program, location, (float)v0, (float)v1, (float)v2, file, line );
        DebugFunction();
    }
    gldlProgramUniform3f_impl( program, location, v0, v1, v2 );
}
void gldlProgramUniform3fv ( GLuint program, GLint location, GLsizei count, const GLfloat *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glProgramUniform3fv( %d, %d, %d, %p );\n", file, line, program, location, count,  value );

    DebugTest( 324 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glProgramUniform3fv( program=%d, location=%d, count=%d, value=%p ) at %s:%d\n", debug_break, program, location, count, value, file, line );
        DebugFunction();
    }
    gldlProgramUniform3fv_impl( program, location, count, value );
}
void gldlProgramUniform3d ( GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glProgramUniform3d( %d, %d, %f, %f, %f );\n", file, line, program, location, (float)v0, (float)v1,  (float)v2 );

    DebugTest( 321 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glProgramUniform3d( program=%d, location=%d, v0=%f, v1=%f, v2=%f ) at %s:%d\n", debug_break, program, location, (float)v0, (float)v1, (float)v2, file, line );
        DebugFunction();
    }
    gldlProgramUniform3d_impl( program, location, v0, v1, v2 );
}
void gldlProgramUniform3dv ( GLuint program, GLint location, GLsizei count, const GLdouble *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glProgramUniform3dv( %d, %d, %d, %p );\n", file, line, program, location, count,  value );

    DebugTest( 322 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glProgramUniform3dv( program=%d, location=%d, count=%d, value=%p ) at %s:%d\n", debug_break, program, location, count, value, file, line );
        DebugFunction();
    }
    gldlProgramUniform3dv_impl( program, location, count, value );
}
void gldlProgramUniform3ui ( GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glProgramUniform3ui( %d, %d, %d, %d, %d );\n", file, line, program, location, v0, v1,  v2 );

    DebugTest( 327 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glProgramUniform3ui( program=%d, location=%d, v0=%d, v1=%d, v2=%d ) at %s:%d\n", debug_break, program, location, v0, v1, v2, file, line );
        DebugFunction();
    }
    gldlProgramUniform3ui_impl( program, location, v0, v1, v2 );
}
void gldlProgramUniform3uiv ( GLuint program, GLint location, GLsizei count, const GLuint *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glProgramUniform3uiv( %d, %d, %d, %p );\n", file, line, program, location, count,  value );

    DebugTest( 328 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glProgramUniform3uiv( program=%d, location=%d, count=%d, value=%p ) at %s:%d\n", debug_break, program, location, count, value, file, line );
        DebugFunction();
    }
    gldlProgramUniform3uiv_impl( program, location, count, value );
}
void gldlProgramUniform4i ( GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glProgramUniform4i( %d, %d, %d, %d, %d, %d );\n", file, line, program, location, v0, v1, v2,  v3 );

    DebugTest( 333 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glProgramUniform4i( program=%d, location=%d, v0=%d, v1=%d, v2=%d, v3=%d ) at %s:%d\n", debug_break, program, location, v0, v1, v2, v3, file, line );
        DebugFunction();
    }
    gldlProgramUniform4i_impl( program, location, v0, v1, v2, v3 );
}
void gldlProgramUniform4iv ( GLuint program, GLint location, GLsizei count, const GLint *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glProgramUniform4iv( %d, %d, %d, %p );\n", file, line, program, location, count,  value );

    DebugTest( 334 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glProgramUniform4iv( program=%d, location=%d, count=%d, value=%p ) at %s:%d\n", debug_break, program, location, count, value, file, line );
        DebugFunction();
    }
    gldlProgramUniform4iv_impl( program, location, count, value );
}
void gldlProgramUniform4f ( GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glProgramUniform4f( %d, %d, %f, %f, %f, %f );\n", file, line, program, location, (float)v0, (float)v1, (float)v2,  (float)v3 );

    DebugTest( 331 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glProgramUniform4f( program=%d, location=%d, v0=%f, v1=%f, v2=%f, v3=%f ) at %s:%d\n", debug_break, program, location, (float)v0, (float)v1, (float)v2, (float)v3, file, line );
        DebugFunction();
    }
    gldlProgramUniform4f_impl( program, location, v0, v1, v2, v3 );
}
void gldlProgramUniform4fv ( GLuint program, GLint location, GLsizei count, const GLfloat *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glProgramUniform4fv( %d, %d, %d, %p );\n", file, line, program, location, count,  value );

    DebugTest( 332 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glProgramUniform4fv( program=%d, location=%d, count=%d, value=%p ) at %s:%d\n", debug_break, program, location, count, value, file, line );
        DebugFunction();
    }
    gldlProgramUniform4fv_impl( program, location, count, value );
}
void gldlProgramUniform4d ( GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glProgramUniform4d( %d, %d, %f, %f, %f, %f );\n", file, line, program, location, (float)v0, (float)v1, (float)v2,  (float)v3 );

    DebugTest( 329 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glProgramUniform4d( program=%d, location=%d, v0=%f, v1=%f, v2=%f, v3=%f ) at %s:%d\n", debug_break, program, location, (float)v0, (float)v1, (float)v2, (float)v3, file, line );
        DebugFunction();
    }
    gldlProgramUniform4d_impl( program, location, v0, v1, v2, v3 );
}
void gldlProgramUniform4dv ( GLuint program, GLint location, GLsizei count, const GLdouble *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glProgramUniform4dv( %d, %d, %d, %p );\n", file, line, program, location, count,  value );

    DebugTest( 330 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glProgramUniform4dv( program=%d, location=%d, count=%d, value=%p ) at %s:%d\n", debug_break, program, location, count, value, file, line );
        DebugFunction();
    }
    gldlProgramUniform4dv_impl( program, location, count, value );
}
void gldlProgramUniform4ui ( GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glProgramUniform4ui( %d, %d, %d, %d, %d, %d );\n", file, line, program, location, v0, v1, v2,  v3 );

    DebugTest( 335 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glProgramUniform4ui( program=%d, location=%d, v0=%d, v1=%d, v2=%d, v3=%d ) at %s:%d\n", debug_break, program, location, v0, v1, v2, v3, file, line );
        DebugFunction();
    }
    gldlProgramUniform4ui_impl( program, location, v0, v1, v2, v3 );
}
void gldlProgramUniform4uiv ( GLuint program, GLint location, GLsizei count, const GLuint *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glProgramUniform4uiv( %d, %d, %d, %p );\n", file, line, program, location, count,  value );

    DebugTest( 336 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glProgramUniform4uiv( program=%d, location=%d, count=%d, value=%p ) at %s:%d\n", debug_break, program, location, count, value, file, line );
        DebugFunction();
    }
    gldlProgramUniform4uiv_impl( program, location, count, value );
}
void gldlProgramUniformMatrix2fv ( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glProgramUniformMatrix2fv( %d, %d, %d, %d, %p );\n", file, line, program, location, count, transpose,  value );

    DebugTest( 338 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glProgramUniformMatrix2fv( program=%d, location=%d, count=%d, transpose=%d, value=%p ) at %s:%d\n", debug_break, program, location, count, transpose, value, file, line );
        DebugFunction();
    }
    gldlProgramUniformMatrix2fv_impl( program, location, count, transpose, value );
}
void gldlProgramUniformMatrix3fv ( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glProgramUniformMatrix3fv( %d, %d, %d, %d, %p );\n", file, line, program, location, count, transpose,  value );

    DebugTest( 344 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glProgramUniformMatrix3fv( program=%d, location=%d, count=%d, transpose=%d, value=%p ) at %s:%d\n", debug_break, program, location, count, transpose, value, file, line );
        DebugFunction();
    }
    gldlProgramUniformMatrix3fv_impl( program, location, count, transpose, value );
}
void gldlProgramUniformMatrix4fv ( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glProgramUniformMatrix4fv( %d, %d, %d, %d, %p );\n", file, line, program, location, count, transpose,  value );

    DebugTest( 350 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glProgramUniformMatrix4fv( program=%d, location=%d, count=%d, transpose=%d, value=%p ) at %s:%d\n", debug_break, program, location, count, transpose, value, file, line );
        DebugFunction();
    }
    gldlProgramUniformMatrix4fv_impl( program, location, count, transpose, value );
}
void gldlProgramUniformMatrix2dv ( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glProgramUniformMatrix2dv( %d, %d, %d, %d, %p );\n", file, line, program, location, count, transpose,  value );

    DebugTest( 337 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glProgramUniformMatrix2dv( program=%d, location=%d, count=%d, transpose=%d, value=%p ) at %s:%d\n", debug_break, program, location, count, transpose, value, file, line );
        DebugFunction();
    }
    gldlProgramUniformMatrix2dv_impl( program, location, count, transpose, value );
}
void gldlProgramUniformMatrix3dv ( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glProgramUniformMatrix3dv( %d, %d, %d, %d, %p );\n", file, line, program, location, count, transpose,  value );

    DebugTest( 343 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glProgramUniformMatrix3dv( program=%d, location=%d, count=%d, transpose=%d, value=%p ) at %s:%d\n", debug_break, program, location, count, transpose, value, file, line );
        DebugFunction();
    }
    gldlProgramUniformMatrix3dv_impl( program, location, count, transpose, value );
}
void gldlProgramUniformMatrix4dv ( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glProgramUniformMatrix4dv( %d, %d, %d, %d, %p );\n", file, line, program, location, count, transpose,  value );

    DebugTest( 349 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glProgramUniformMatrix4dv( program=%d, location=%d, count=%d, transpose=%d, value=%p ) at %s:%d\n", debug_break, program, location, count, transpose, value, file, line );
        DebugFunction();
    }
    gldlProgramUniformMatrix4dv_impl( program, location, count, transpose, value );
}
void gldlProgramUniformMatrix2x3fv ( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glProgramUniformMatrix2x3fv( %d, %d, %d, %d, %p );\n", file, line, program, location, count, transpose,  value );

    DebugTest( 340 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glProgramUniformMatrix2x3fv( program=%d, location=%d, count=%d, transpose=%d, value=%p ) at %s:%d\n", debug_break, program, location, count, transpose, value, file, line );
        DebugFunction();
    }
    gldlProgramUniformMatrix2x3fv_impl( program, location, count, transpose, value );
}
void gldlProgramUniformMatrix3x2fv ( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glProgramUniformMatrix3x2fv( %d, %d, %d, %d, %p );\n", file, line, program, location, count, transpose,  value );

    DebugTest( 346 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glProgramUniformMatrix3x2fv( program=%d, location=%d, count=%d, transpose=%d, value=%p ) at %s:%d\n", debug_break, program, location, count, transpose, value, file, line );
        DebugFunction();
    }
    gldlProgramUniformMatrix3x2fv_impl( program, location, count, transpose, value );
}
void gldlProgramUniformMatrix2x4fv ( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glProgramUniformMatrix2x4fv( %d, %d, %d, %d, %p );\n", file, line, program, location, count, transpose,  value );

    DebugTest( 342 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glProgramUniformMatrix2x4fv( program=%d, location=%d, count=%d, transpose=%d, value=%p ) at %s:%d\n", debug_break, program, location, count, transpose, value, file, line );
        DebugFunction();
    }
    gldlProgramUniformMatrix2x4fv_impl( program, location, count, transpose, value );
}
void gldlProgramUniformMatrix4x2fv ( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glProgramUniformMatrix4x2fv( %d, %d, %d, %d, %p );\n", file, line, program, location, count, transpose,  value );

    DebugTest( 352 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glProgramUniformMatrix4x2fv( program=%d, location=%d, count=%d, transpose=%d, value=%p ) at %s:%d\n", debug_break, program, location, count, transpose, value, file, line );
        DebugFunction();
    }
    gldlProgramUniformMatrix4x2fv_impl( program, location, count, transpose, value );
}
void gldlProgramUniformMatrix3x4fv ( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glProgramUniformMatrix3x4fv( %d, %d, %d, %d, %p );\n", file, line, program, location, count, transpose,  value );

    DebugTest( 348 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glProgramUniformMatrix3x4fv( program=%d, location=%d, count=%d, transpose=%d, value=%p ) at %s:%d\n", debug_break, program, location, count, transpose, value, file, line );
        DebugFunction();
    }
    gldlProgramUniformMatrix3x4fv_impl( program, location, count, transpose, value );
}
void gldlProgramUniformMatrix4x3fv ( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glProgramUniformMatrix4x3fv( %d, %d, %d, %d, %p );\n", file, line, program, location, count, transpose,  value );

    DebugTest( 354 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glProgramUniformMatrix4x3fv( program=%d, location=%d, count=%d, transpose=%d, value=%p ) at %s:%d\n", debug_break, program, location, count, transpose, value, file, line );
        DebugFunction();
    }
    gldlProgramUniformMatrix4x3fv_impl( program, location, count, transpose, value );
}
void gldlProgramUniformMatrix2x3dv ( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glProgramUniformMatrix2x3dv( %d, %d, %d, %d, %p );\n", file, line, program, location, count, transpose,  value );

    DebugTest( 339 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glProgramUniformMatrix2x3dv( program=%d, location=%d, count=%d, transpose=%d, value=%p ) at %s:%d\n", debug_break, program, location, count, transpose, value, file, line );
        DebugFunction();
    }
    gldlProgramUniformMatrix2x3dv_impl( program, location, count, transpose, value );
}
void gldlProgramUniformMatrix3x2dv ( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glProgramUniformMatrix3x2dv( %d, %d, %d, %d, %p );\n", file, line, program, location, count, transpose,  value );

    DebugTest( 345 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glProgramUniformMatrix3x2dv( program=%d, location=%d, count=%d, transpose=%d, value=%p ) at %s:%d\n", debug_break, program, location, count, transpose, value, file, line );
        DebugFunction();
    }
    gldlProgramUniformMatrix3x2dv_impl( program, location, count, transpose, value );
}
void gldlProgramUniformMatrix2x4dv ( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glProgramUniformMatrix2x4dv( %d, %d, %d, %d, %p );\n", file, line, program, location, count, transpose,  value );

    DebugTest( 341 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glProgramUniformMatrix2x4dv( program=%d, location=%d, count=%d, transpose=%d, value=%p ) at %s:%d\n", debug_break, program, location, count, transpose, value, file, line );
        DebugFunction();
    }
    gldlProgramUniformMatrix2x4dv_impl( program, location, count, transpose, value );
}
void gldlProgramUniformMatrix4x2dv ( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glProgramUniformMatrix4x2dv( %d, %d, %d, %d, %p );\n", file, line, program, location, count, transpose,  value );

    DebugTest( 351 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glProgramUniformMatrix4x2dv( program=%d, location=%d, count=%d, transpose=%d, value=%p ) at %s:%d\n", debug_break, program, location, count, transpose, value, file, line );
        DebugFunction();
    }
    gldlProgramUniformMatrix4x2dv_impl( program, location, count, transpose, value );
}
void gldlProgramUniformMatrix3x4dv ( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glProgramUniformMatrix3x4dv( %d, %d, %d, %d, %p );\n", file, line, program, location, count, transpose,  value );

    DebugTest( 347 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glProgramUniformMatrix3x4dv( program=%d, location=%d, count=%d, transpose=%d, value=%p ) at %s:%d\n", debug_break, program, location, count, transpose, value, file, line );
        DebugFunction();
    }
    gldlProgramUniformMatrix3x4dv_impl( program, location, count, transpose, value );
}
void gldlProgramUniformMatrix4x3dv ( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glProgramUniformMatrix4x3dv( %d, %d, %d, %d, %p );\n", file, line, program, location, count, transpose,  value );

    DebugTest( 353 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glProgramUniformMatrix4x3dv( program=%d, location=%d, count=%d, transpose=%d, value=%p ) at %s:%d\n", debug_break, program, location, count, transpose, value, file, line );
        DebugFunction();
    }
    gldlProgramUniformMatrix4x3dv_impl( program, location, count, transpose, value );
}
void gldlValidateProgramPipeline ( GLuint pipeline, const char *arg0, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glValidateProgramPipeline( %d );\n", file, line,  pipeline );

    DebugTest( 472 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glValidateProgramPipeline( pipeline=%d ) at %s:%d\n", debug_break, pipeline, file, line );
        DebugFunction();
    }
    gldlValidateProgramPipeline_impl( pipeline );
}
void gldlGetProgramPipelineInfoLog ( GLuint pipeline, GLsizei bufSize, GLsizei *length, GLchar *infoLog, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetProgramPipelineInfoLog( %d, %d, %p, %p );\n", file, line, pipeline, bufSize, length,  infoLog );

    DebugTest( 187 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetProgramPipelineInfoLog( pipeline=%d, bufSize=%d, length=%p, infoLog=%p ) at %s:%d\n", debug_break, pipeline, bufSize, length, infoLog, file, line );
        DebugFunction();
    }
    gldlGetProgramPipelineInfoLog_impl( pipeline, bufSize, length, infoLog );
}
void gldlVertexAttribL1d ( GLuint index, GLdouble x, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttribL1d( %d, %f );\n", file, line, index,  (float)x );

    DebugTest( 531 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttribL1d( index=%d, x=%f ) at %s:%d\n", debug_break, index, (float)x, file, line );
        DebugFunction();
    }
    gldlVertexAttribL1d_impl( index, x );
}
void gldlVertexAttribL2d ( GLuint index, GLdouble x, GLdouble y, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttribL2d( %d, %f, %f );\n", file, line, index, (float)x,  (float)y );

    DebugTest( 533 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttribL2d( index=%d, x=%f, y=%f ) at %s:%d\n", debug_break, index, (float)x, (float)y, file, line );
        DebugFunction();
    }
    gldlVertexAttribL2d_impl( index, x, y );
}
void gldlVertexAttribL3d ( GLuint index, GLdouble x, GLdouble y, GLdouble z, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttribL3d( %d, %f, %f, %f );\n", file, line, index, (float)x, (float)y,  (float)z );

    DebugTest( 535 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttribL3d( index=%d, x=%f, y=%f, z=%f ) at %s:%d\n", debug_break, index, (float)x, (float)y, (float)z, file, line );
        DebugFunction();
    }
    gldlVertexAttribL3d_impl( index, x, y, z );
}
void gldlVertexAttribL4d ( GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttribL4d( %d, %f, %f, %f, %f );\n", file, line, index, (float)x, (float)y, (float)z,  (float)w );

    DebugTest( 537 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttribL4d( index=%d, x=%f, y=%f, z=%f, w=%f ) at %s:%d\n", debug_break, index, (float)x, (float)y, (float)z, (float)w, file, line );
        DebugFunction();
    }
    gldlVertexAttribL4d_impl( index, x, y, z, w );
}
void gldlVertexAttribL1dv ( GLuint index, const GLdouble *v, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttribL1dv( %d, %p );\n", file, line, index,  v );

    DebugTest( 532 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttribL1dv( index=%d, v=%p ) at %s:%d\n", debug_break, index, v, file, line );
        DebugFunction();
    }
    gldlVertexAttribL1dv_impl( index, v );
}
void gldlVertexAttribL2dv ( GLuint index, const GLdouble *v, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttribL2dv( %d, %p );\n", file, line, index,  v );

    DebugTest( 534 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttribL2dv( index=%d, v=%p ) at %s:%d\n", debug_break, index, v, file, line );
        DebugFunction();
    }
    gldlVertexAttribL2dv_impl( index, v );
}
void gldlVertexAttribL3dv ( GLuint index, const GLdouble *v, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttribL3dv( %d, %p );\n", file, line, index,  v );

    DebugTest( 536 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttribL3dv( index=%d, v=%p ) at %s:%d\n", debug_break, index, v, file, line );
        DebugFunction();
    }
    gldlVertexAttribL3dv_impl( index, v );
}
void gldlVertexAttribL4dv ( GLuint index, const GLdouble *v, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttribL4dv( %d, %p );\n", file, line, index,  v );

    DebugTest( 538 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttribL4dv( index=%d, v=%p ) at %s:%d\n", debug_break, index, v, file, line );
        DebugFunction();
    }
    gldlVertexAttribL4dv_impl( index, v );
}
void gldlVertexAttribLPointer ( GLuint index, GLint size, GLenum type, GLsizei stride, const GLvoid *pointer, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glVertexAttribLPointer( %d, %d, %s, %d, %p );\n", file, line, index, size, arg2, stride,  pointer );

    DebugTest( 539 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glVertexAttribLPointer( index=%d, size=%d, type=%s, stride=%d, pointer=%p ) at %s:%d\n", debug_break, index, size, arg2, stride, pointer, file, line );
        DebugFunction();
    }
    gldlVertexAttribLPointer_impl( index, size, type, stride, pointer );
}
void gldlGetVertexAttribLdv ( GLuint index, GLenum pname, GLdouble *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetVertexAttribLdv( %d, %s, %p );\n", file, line, index, arg1,  params );

    DebugTest( 229 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetVertexAttribLdv( index=%d, pname=%s, params=%p ) at %s:%d\n", debug_break, index, arg1, params, file, line );
        DebugFunction();
    }
    gldlGetVertexAttribLdv_impl( index, pname, params );
}
void gldlViewportArrayv ( GLuint first, GLsizei count, const GLfloat *v, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glViewportArrayv( %d, %d, %p );\n", file, line, first, count,  v );

    DebugTest( 556 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glViewportArrayv( first=%d, count=%d, v=%p ) at %s:%d\n", debug_break, first, count, v, file, line );
        DebugFunction();
    }
    gldlViewportArrayv_impl( first, count, v );
}
void gldlViewportIndexedf ( GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glViewportIndexedf( %d, %f, %f, %f, %f );\n", file, line, index, (float)x, (float)y, (float)w,  (float)h );

    DebugTest( 557 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glViewportIndexedf( index=%d, x=%f, y=%f, w=%f, h=%f ) at %s:%d\n", debug_break, index, (float)x, (float)y, (float)w, (float)h, file, line );
        DebugFunction();
    }
    gldlViewportIndexedf_impl( index, x, y, w, h );
}
void gldlViewportIndexedfv ( GLuint index, const GLfloat *v, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glViewportIndexedfv( %d, %p );\n", file, line, index,  v );

    DebugTest( 558 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glViewportIndexedfv( index=%d, v=%p ) at %s:%d\n", debug_break, index, v, file, line );
        DebugFunction();
    }
    gldlViewportIndexedfv_impl( index, v );
}
void gldlScissorArrayv ( GLuint first, GLsizei count, const GLint *v, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glScissorArrayv( %d, %d, %p );\n", file, line, first, count,  v );

    DebugTest( 373 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glScissorArrayv( first=%d, count=%d, v=%p ) at %s:%d\n", debug_break, first, count, v, file, line );
        DebugFunction();
    }
    gldlScissorArrayv_impl( first, count, v );
}
void gldlScissorIndexed ( GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glScissorIndexed( %d, %d, %d, %d, %d );\n", file, line, index, left, bottom, width,  height );

    DebugTest( 374 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glScissorIndexed( index=%d, left=%d, bottom=%d, width=%d, height=%d ) at %s:%d\n", debug_break, index, left, bottom, width, height, file, line );
        DebugFunction();
    }
    gldlScissorIndexed_impl( index, left, bottom, width, height );
}
void gldlScissorIndexedv ( GLuint index, const GLint *v, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glScissorIndexedv( %d, %p );\n", file, line, index,  v );

    DebugTest( 375 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glScissorIndexedv( index=%d, v=%p ) at %s:%d\n", debug_break, index, v, file, line );
        DebugFunction();
    }
    gldlScissorIndexedv_impl( index, v );
}
void gldlDepthRangeArrayv ( GLuint first, GLsizei count, const GLclampd *v, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glDepthRangeArrayv( %d, %d, %p );\n", file, line, first, count,  v );

    DebugTest( 93 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glDepthRangeArrayv( first=%d, count=%d, v=%p ) at %s:%d\n", debug_break, first, count, v, file, line );
        DebugFunction();
    }
    gldlDepthRangeArrayv_impl( first, count, v );
}
void gldlDepthRangeIndexed ( GLuint index, GLclampd n, GLclampd f, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glDepthRangeIndexed( %d, %f, %f );\n", file, line, index, (float)n,  (float)f );

    DebugTest( 94 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glDepthRangeIndexed( index=%d, n=%f, f=%f ) at %s:%d\n", debug_break, index, (float)n, (float)f, file, line );
        DebugFunction();
    }
    gldlDepthRangeIndexed_impl( index, n, f );
}
void gldlGetFloati_v ( GLenum target, GLuint index, GLfloat *data, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetFloati_v( %s, %d, %p );\n", file, line, arg0, index,  data );

    DebugTest( 170 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetFloati_v( target=%s, index=%d, data=%p ) at %s:%d\n", debug_break, arg0, index, data, file, line );
        DebugFunction();
    }
    gldlGetFloati_v_impl( target, index, data );
}
void gldlGetDoublei_v ( GLenum target, GLuint index, GLdouble *data, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetDoublei_v( %s, %d, %p );\n", file, line, arg0, index,  data );

    DebugTest( 167 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetDoublei_v( target=%s, index=%d, data=%p ) at %s:%d\n", debug_break, arg0, index, data, file, line );
        DebugFunction();
    }
    gldlGetDoublei_v_impl( target, index, data );
}
GLsync gldlCreateSyncFromCLeventARB ( struct _cl_context * context, struct _cl_event * event, GLbitfield flags, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glCreateSyncFromCLeventARB( %p, %p, %s );\n", file, line, context, event,  arg2 );

    DebugTest( 72 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glCreateSyncFromCLeventARB( context=%p, event=%p, flags=%s ) at %s:%d\n", debug_break, context, event, arg2, file, line );
        DebugFunction();
    }
    GLsync ret = gldlCreateSyncFromCLeventARB_impl( context, event, flags );
	return ret;
}
void gldlDebugMessageControlARB ( GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glDebugMessageControlARB( %s, %s, %s, %d, %p, %d );\n", file, line, arg0, arg1, arg2, count, ids,  enabled );

    DebugTest( 75 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glDebugMessageControlARB( source=%s, type=%s, severity=%s, count=%d, ids=%p, enabled=%d ) at %s:%d\n", debug_break, arg0, arg1, arg2, count, ids, enabled, file, line );
        DebugFunction();
    }
    gldlDebugMessageControlARB_impl( source, type, severity, count, ids, enabled );
}
void gldlDebugMessageInsertARB ( GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar *buf, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glDebugMessageInsertARB( %s, %s, %d, %s, %d, %p );\n", file, line, arg0, arg1, id, arg3, length,  buf );

    DebugTest( 76 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glDebugMessageInsertARB( source=%s, type=%s, id=%d, severity=%s, length=%d, buf=%p ) at %s:%d\n", debug_break, arg0, arg1, id, arg3, length, buf, file, line );
        DebugFunction();
    }
    gldlDebugMessageInsertARB_impl( source, type, id, severity, length, buf );
}
void gldlDebugMessageCallbackARB ( GLDEBUGPROCARB callback, const GLvoid *userParam, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glDebugMessageCallbackARB( %s, %p );\n", file, line, arg0,  userParam );

    DebugTest( 74 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glDebugMessageCallbackARB( callback=%s, userParam=%p ) at %s:%d\n", debug_break, arg0, userParam, file, line );
        DebugFunction();
    }
    gldlDebugMessageCallbackARB_impl( callback, userParam );
}
GLuint gldlGetDebugMessageLogARB ( GLuint count, GLsizei bufsize, GLenum *sources, GLenum *types, GLuint *ids, GLenum *severities, GLsizei *lengths, GLchar *messageLog, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *arg6, const char *arg7, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetDebugMessageLogARB( %d, %d, %p, %p, %p, %p, %p, %p );\n", file, line, count, bufsize, sources, types, ids, severities, lengths,  messageLog );

    DebugTest( 166 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetDebugMessageLogARB( count=%d, bufsize=%d, sources=%p, types=%p, ids=%p, severities=%p, lengths=%p, messageLog=%p ) at %s:%d\n", debug_break, count, bufsize, sources, types, ids, severities, lengths, messageLog, file, line );
        DebugFunction();
    }
    GLuint ret = gldlGetDebugMessageLogARB_impl( count, bufsize, sources, types, ids, severities, lengths, messageLog );
	return ret;
}
GLenum gldlGetGraphicsResetStatusARB ( const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetGraphicsResetStatusARB();\n", file, line );

    DebugTest( 175 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetGraphicsResetStatusARB( ) at %s:%d\n", debug_break, file, line );

        DebugFunction();
    }
    GLenum ret = gldlGetGraphicsResetStatusARB_impl(  );
	return ret;
}
void gldlGetnMapdvARB ( GLenum target, GLenum query, GLsizei bufSize, GLdouble *v, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetnMapdvARB( %s, %s, %d, %p );\n", file, line, arg0, arg1, bufSize,  v );

    DebugTest( 238 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetnMapdvARB( target=%s, query=%s, bufSize=%d, v=%p ) at %s:%d\n", debug_break, arg0, arg1, bufSize, v, file, line );
        DebugFunction();
    }
    gldlGetnMapdvARB_impl( target, query, bufSize, v );
}
void gldlGetnMapfvARB ( GLenum target, GLenum query, GLsizei bufSize, GLfloat *v, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetnMapfvARB( %s, %s, %d, %p );\n", file, line, arg0, arg1, bufSize,  v );

    DebugTest( 239 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetnMapfvARB( target=%s, query=%s, bufSize=%d, v=%p ) at %s:%d\n", debug_break, arg0, arg1, bufSize, v, file, line );
        DebugFunction();
    }
    gldlGetnMapfvARB_impl( target, query, bufSize, v );
}
void gldlGetnMapivARB ( GLenum target, GLenum query, GLsizei bufSize, GLint *v, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetnMapivARB( %s, %s, %d, %p );\n", file, line, arg0, arg1, bufSize,  v );

    DebugTest( 240 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetnMapivARB( target=%s, query=%s, bufSize=%d, v=%p ) at %s:%d\n", debug_break, arg0, arg1, bufSize, v, file, line );
        DebugFunction();
    }
    gldlGetnMapivARB_impl( target, query, bufSize, v );
}
void gldlGetnPixelMapfvARB ( GLenum map, GLsizei bufSize, GLfloat *values, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetnPixelMapfvARB( %s, %d, %p );\n", file, line, arg0, bufSize,  values );

    DebugTest( 242 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetnPixelMapfvARB( map=%s, bufSize=%d, values=%p ) at %s:%d\n", debug_break, arg0, bufSize, values, file, line );
        DebugFunction();
    }
    gldlGetnPixelMapfvARB_impl( map, bufSize, values );
}
void gldlGetnPixelMapuivARB ( GLenum map, GLsizei bufSize, GLuint *values, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetnPixelMapuivARB( %s, %d, %p );\n", file, line, arg0, bufSize,  values );

    DebugTest( 243 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetnPixelMapuivARB( map=%s, bufSize=%d, values=%p ) at %s:%d\n", debug_break, arg0, bufSize, values, file, line );
        DebugFunction();
    }
    gldlGetnPixelMapuivARB_impl( map, bufSize, values );
}
void gldlGetnPixelMapusvARB ( GLenum map, GLsizei bufSize, GLushort *values, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetnPixelMapusvARB( %s, %d, %p );\n", file, line, arg0, bufSize,  values );

    DebugTest( 244 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetnPixelMapusvARB( map=%s, bufSize=%d, values=%p ) at %s:%d\n", debug_break, arg0, bufSize, values, file, line );
        DebugFunction();
    }
    gldlGetnPixelMapusvARB_impl( map, bufSize, values );
}
void gldlGetnPolygonStippleARB ( GLsizei bufSize, GLubyte *pattern, const char *arg0, const char *arg1, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetnPolygonStippleARB( %d, %p );\n", file, line, bufSize,  pattern );

    DebugTest( 245 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetnPolygonStippleARB( bufSize=%d, pattern=%p ) at %s:%d\n", debug_break, bufSize, pattern, file, line );
        DebugFunction();
    }
    gldlGetnPolygonStippleARB_impl( bufSize, pattern );
}
void gldlGetnColorTableARB ( GLenum target, GLenum format, GLenum type, GLsizei bufSize, GLvoid *table, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetnColorTableARB( %s, %s, %s, %d, %p );\n", file, line, arg0, arg1, arg2, bufSize,  table );

    DebugTest( 234 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetnColorTableARB( target=%s, format=%s, type=%s, bufSize=%d, table=%p ) at %s:%d\n", debug_break, arg0, arg1, arg2, bufSize, table, file, line );
        DebugFunction();
    }
    gldlGetnColorTableARB_impl( target, format, type, bufSize, table );
}
void gldlGetnConvolutionFilterARB ( GLenum target, GLenum format, GLenum type, GLsizei bufSize, GLvoid *image, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetnConvolutionFilterARB( %s, %s, %s, %d, %p );\n", file, line, arg0, arg1, arg2, bufSize,  image );

    DebugTest( 236 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetnConvolutionFilterARB( target=%s, format=%s, type=%s, bufSize=%d, image=%p ) at %s:%d\n", debug_break, arg0, arg1, arg2, bufSize, image, file, line );
        DebugFunction();
    }
    gldlGetnConvolutionFilterARB_impl( target, format, type, bufSize, image );
}
void gldlGetnSeparableFilterARB ( GLenum target, GLenum format, GLenum type, GLsizei rowBufSize, GLvoid *row, GLsizei columnBufSize, GLvoid *column, GLvoid *span, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *arg6, const char *arg7, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetnSeparableFilterARB( %s, %s, %s, %d, %p, %d, %p, %p );\n", file, line, arg0, arg1, arg2, rowBufSize, row, columnBufSize, column,  span );

    DebugTest( 246 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetnSeparableFilterARB( target=%s, format=%s, type=%s, rowBufSize=%d, row=%p, columnBufSize=%d, column=%p, span=%p ) at %s:%d\n", debug_break, arg0, arg1, arg2, rowBufSize, row, columnBufSize, column, span, file, line );
        DebugFunction();
    }
    gldlGetnSeparableFilterARB_impl( target, format, type, rowBufSize, row, columnBufSize, column, span );
}
void gldlGetnHistogramARB ( GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, GLvoid *values, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetnHistogramARB( %s, %d, %s, %s, %d, %p );\n", file, line, arg0, reset, arg2, arg3, bufSize,  values );

    DebugTest( 237 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetnHistogramARB( target=%s, reset=%d, format=%s, type=%s, bufSize=%d, values=%p ) at %s:%d\n", debug_break, arg0, reset, arg2, arg3, bufSize, values, file, line );
        DebugFunction();
    }
    gldlGetnHistogramARB_impl( target, reset, format, type, bufSize, values );
}
void gldlGetnMinmaxARB ( GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, GLvoid *values, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetnMinmaxARB( %s, %d, %s, %s, %d, %p );\n", file, line, arg0, reset, arg2, arg3, bufSize,  values );

    DebugTest( 241 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetnMinmaxARB( target=%s, reset=%d, format=%s, type=%s, bufSize=%d, values=%p ) at %s:%d\n", debug_break, arg0, reset, arg2, arg3, bufSize, values, file, line );
        DebugFunction();
    }
    gldlGetnMinmaxARB_impl( target, reset, format, type, bufSize, values );
}
void gldlGetnTexImageARB ( GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, GLvoid *img, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetnTexImageARB( %s, %d, %s, %s, %d, %p );\n", file, line, arg0, level, arg2, arg3, bufSize,  img );

    DebugTest( 247 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetnTexImageARB( target=%s, level=%d, format=%s, type=%s, bufSize=%d, img=%p ) at %s:%d\n", debug_break, arg0, level, arg2, arg3, bufSize, img, file, line );
        DebugFunction();
    }
    gldlGetnTexImageARB_impl( target, level, format, type, bufSize, img );
}
void gldlReadnPixelsARB ( GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, GLvoid *data, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *arg6, const char *arg7, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glReadnPixelsARB( %d, %d, %d, %d, %s, %s, %d, %p );\n", file, line, x, y, width, height, arg4, arg5, bufSize,  data );

    DebugTest( 359 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glReadnPixelsARB( x=%d, y=%d, width=%d, height=%d, format=%s, type=%s, bufSize=%d, data=%p ) at %s:%d\n", debug_break, x, y, width, height, arg4, arg5, bufSize, data, file, line );
        DebugFunction();
    }
    gldlReadnPixelsARB_impl( x, y, width, height, format, type, bufSize, data );
}
void gldlGetnCompressedTexImageARB ( GLenum target, GLint lod, GLsizei bufSize, GLvoid *img, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetnCompressedTexImageARB( %s, %d, %d, %p );\n", file, line, arg0, lod, bufSize,  img );

    DebugTest( 235 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetnCompressedTexImageARB( target=%s, lod=%d, bufSize=%d, img=%p ) at %s:%d\n", debug_break, arg0, lod, bufSize, img, file, line );
        DebugFunction();
    }
    gldlGetnCompressedTexImageARB_impl( target, lod, bufSize, img );
}
void gldlGetnUniformfvARB ( GLuint program, GLint location, GLsizei bufSize, GLfloat *params, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetnUniformfvARB( %d, %d, %d, %p );\n", file, line, program, location, bufSize,  params );

    DebugTest( 249 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetnUniformfvARB( program=%d, location=%d, bufSize=%d, params=%p ) at %s:%d\n", debug_break, program, location, bufSize, params, file, line );
        DebugFunction();
    }
    gldlGetnUniformfvARB_impl( program, location, bufSize, params );
}
void gldlGetnUniformivARB ( GLuint program, GLint location, GLsizei bufSize, GLint *params, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetnUniformivARB( %d, %d, %d, %p );\n", file, line, program, location, bufSize,  params );

    DebugTest( 250 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetnUniformivARB( program=%d, location=%d, bufSize=%d, params=%p ) at %s:%d\n", debug_break, program, location, bufSize, params, file, line );
        DebugFunction();
    }
    gldlGetnUniformivARB_impl( program, location, bufSize, params );
}
void gldlGetnUniformuivARB ( GLuint program, GLint location, GLsizei bufSize, GLuint *params, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetnUniformuivARB( %d, %d, %d, %p );\n", file, line, program, location, bufSize,  params );

    DebugTest( 251 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetnUniformuivARB( program=%d, location=%d, bufSize=%d, params=%p ) at %s:%d\n", debug_break, program, location, bufSize, params, file, line );
        DebugFunction();
    }
    gldlGetnUniformuivARB_impl( program, location, bufSize, params );
}
void gldlGetnUniformdvARB ( GLuint program, GLint location, GLsizei bufSize, GLdouble *params, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetnUniformdvARB( %d, %d, %d, %p );\n", file, line, program, location, bufSize,  params );

    DebugTest( 248 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetnUniformdvARB( program=%d, location=%d, bufSize=%d, params=%p ) at %s:%d\n", debug_break, program, location, bufSize, params, file, line );
        DebugFunction();
    }
    gldlGetnUniformdvARB_impl( program, location, bufSize, params );
}
void gldlDrawArraysInstancedBaseInstance ( GLenum mode, GLint first, GLsizei count, GLsizei primcount, GLuint baseinstance, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glDrawArraysInstancedBaseInstance( %s, %d, %d, %d, %d );\n", file, line, arg0, first, count, primcount,  baseinstance );

    DebugTest( 103 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glDrawArraysInstancedBaseInstance( mode=%s, first=%d, count=%d, primcount=%d, baseinstance=%d ) at %s:%d\n", debug_break, arg0, first, count, primcount, baseinstance, file, line );
        DebugFunction();
    }
    gldlDrawArraysInstancedBaseInstance_impl( mode, first, count, primcount, baseinstance );
}
void gldlDrawElementsInstancedBaseInstance ( GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei primcount, GLuint baseinstance, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glDrawElementsInstancedBaseInstance( %s, %d, %s, %p, %d, %d );\n", file, line, arg0, count, arg2, indices, primcount,  baseinstance );

    DebugTest( 110 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glDrawElementsInstancedBaseInstance( mode=%s, count=%d, type=%s, indices=%p, primcount=%d, baseinstance=%d ) at %s:%d\n", debug_break, arg0, count, arg2, indices, primcount, baseinstance, file, line );
        DebugFunction();
    }
    gldlDrawElementsInstancedBaseInstance_impl( mode, count, type, indices, primcount, baseinstance );
}
void gldlDrawElementsInstancedBaseVertexBaseInstance ( GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei primcount, GLint basevertex, GLuint baseinstance, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *arg6, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glDrawElementsInstancedBaseVertexBaseInstance( %s, %d, %s, %p, %d, %d, %d );\n", file, line, arg0, count, arg2, indices, primcount, basevertex,  baseinstance );

    DebugTest( 112 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glDrawElementsInstancedBaseVertexBaseInstance( mode=%s, count=%d, type=%s, indices=%p, primcount=%d, basevertex=%d, baseinstance=%d ) at %s:%d\n", debug_break, arg0, count, arg2, indices, primcount, basevertex, baseinstance, file, line );
        DebugFunction();
    }
    gldlDrawElementsInstancedBaseVertexBaseInstance_impl( mode, count, type, indices, primcount, basevertex, baseinstance );
}
void gldlDrawTransformFeedbackInstanced ( GLenum mode, GLuint id, GLsizei primcount, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glDrawTransformFeedbackInstanced( %s, %d, %d );\n", file, line, arg0, id,  primcount );

    DebugTest( 116 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glDrawTransformFeedbackInstanced( mode=%s, id=%d, primcount=%d ) at %s:%d\n", debug_break, arg0, id, primcount, file, line );
        DebugFunction();
    }
    gldlDrawTransformFeedbackInstanced_impl( mode, id, primcount );
}
void gldlDrawTransformFeedbackStreamInstanced ( GLenum mode, GLuint id, GLuint stream, GLsizei primcount, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glDrawTransformFeedbackStreamInstanced( %s, %d, %d, %d );\n", file, line, arg0, id, stream,  primcount );

    DebugTest( 118 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glDrawTransformFeedbackStreamInstanced( mode=%s, id=%d, stream=%d, primcount=%d ) at %s:%d\n", debug_break, arg0, id, stream, primcount, file, line );
        DebugFunction();
    }
    gldlDrawTransformFeedbackStreamInstanced_impl( mode, id, stream, primcount );
}
void gldlGetInternalformativ ( GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint *params, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetInternalformativ( %s, %s, %s, %d, %p );\n", file, line, arg0, arg1, arg2, bufSize,  params );

    DebugTest( 180 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetInternalformativ( target=%s, internalformat=%s, pname=%s, bufSize=%d, params=%p ) at %s:%d\n", debug_break, arg0, arg1, arg2, bufSize, params, file, line );
        DebugFunction();
    }
    gldlGetInternalformativ_impl( target, internalformat, pname, bufSize, params );
}
void gldlGetActiveAtomicCounterBufferiv ( GLuint program, GLuint bufferIndex, GLenum pname, GLint *params, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glGetActiveAtomicCounterBufferiv( %d, %d, %s, %p );\n", file, line, program, bufferIndex, arg2,  params );

    DebugTest( 147 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glGetActiveAtomicCounterBufferiv( program=%d, bufferIndex=%d, pname=%s, params=%p ) at %s:%d\n", debug_break, program, bufferIndex, arg2, params, file, line );
        DebugFunction();
    }
    gldlGetActiveAtomicCounterBufferiv_impl( program, bufferIndex, pname, params );
}
void gldlBindImageTexture ( GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *arg6, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glBindImageTexture( %d, %d, %d, %d, %d, %s, %s );\n", file, line, unit, texture, level, layered, layer, arg5,  arg6 );

    DebugTest( 14 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glBindImageTexture( unit=%d, texture=%d, level=%d, layered=%d, layer=%d, access=%s, format=%s ) at %s:%d\n", debug_break, unit, texture, level, layered, layer, arg5, arg6, file, line );
        DebugFunction();
    }
    gldlBindImageTexture_impl( unit, texture, level, layered, layer, access, format );
}
void gldlMemoryBarrier ( GLbitfield barriers, const char *arg0, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glMemoryBarrier( %s );\n", file, line,  arg0 );

    DebugTest( 273 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glMemoryBarrier( barriers=%s ) at %s:%d\n", debug_break, arg0, file, line );
        DebugFunction();
    }
    gldlMemoryBarrier_impl( barriers );
}
void gldlTexStorage1D ( GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glTexStorage1D( %s, %d, %s, %d );\n", file, line, arg0, levels, arg2,  width );

    DebugTest( 406 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glTexStorage1D( target=%s, levels=%d, internalformat=%s, width=%d ) at %s:%d\n", debug_break, arg0, levels, arg2, width, file, line );
        DebugFunction();
    }
    gldlTexStorage1D_impl( target, levels, internalformat, width );
}
void gldlTexStorage2D ( GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glTexStorage2D( %s, %d, %s, %d, %d );\n", file, line, arg0, levels, arg2, width,  height );

    DebugTest( 407 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glTexStorage2D( target=%s, levels=%d, internalformat=%s, width=%d, height=%d ) at %s:%d\n", debug_break, arg0, levels, arg2, width, height, file, line );
        DebugFunction();
    }
    gldlTexStorage2D_impl( target, levels, internalformat, width, height );
}
void gldlTexStorage3D ( GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glTexStorage3D( %s, %d, %s, %d, %d, %d );\n", file, line, arg0, levels, arg2, width, height,  depth );

    DebugTest( 408 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glTexStorage3D( target=%s, levels=%d, internalformat=%s, width=%d, height=%d, depth=%d ) at %s:%d\n", debug_break, arg0, levels, arg2, width, height, depth, file, line );
        DebugFunction();
    }
    gldlTexStorage3D_impl( target, levels, internalformat, width, height, depth );
}
void gldlTextureStorage1DEXT ( GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glTextureStorage1DEXT( %d, %s, %d, %s, %d );\n", file, line, texture, arg1, levels, arg3,  width );

    DebugTest( 412 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glTextureStorage1DEXT( texture=%d, target=%s, levels=%d, internalformat=%s, width=%d ) at %s:%d\n", debug_break, texture, arg1, levels, arg3, width, file, line );
        DebugFunction();
    }
    gldlTextureStorage1DEXT_impl( texture, target, levels, internalformat, width );
}
void gldlTextureStorage2DEXT ( GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glTextureStorage2DEXT( %d, %s, %d, %s, %d, %d );\n", file, line, texture, arg1, levels, arg3, width,  height );

    DebugTest( 413 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glTextureStorage2DEXT( texture=%d, target=%s, levels=%d, internalformat=%s, width=%d, height=%d ) at %s:%d\n", debug_break, texture, arg1, levels, arg3, width, height, file, line );
        DebugFunction();
    }
    gldlTextureStorage2DEXT_impl( texture, target, levels, internalformat, width, height );
}
void gldlTextureStorage3DEXT ( GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *arg6, const char *file, int line ) {
    int i;
    for( i = 0; i < TRACE_N; ++i ) 
        if( gldl_traces[i].started )
            fprintf( gldl_traces[i].f, "call<%s,%d>: glTextureStorage3DEXT( %d, %s, %d, %s, %d, %d, %d );\n", file, line, texture, arg1, levels, arg3, width, height,  depth );

    DebugTest( 414 );
    if( debug_break[0] ) {
        printf( "Breakpoint %s on glTextureStorage3DEXT( texture=%d, target=%s, levels=%d, internalformat=%s, width=%d, height=%d, depth=%d ) at %s:%d\n", debug_break, texture, arg1, levels, arg3, width, height, depth, file, line );
        DebugFunction();
    }
    gldlTextureStorage3DEXT_impl( texture, target, levels, internalformat, width, height, depth );
}
