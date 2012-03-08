
#include "gldl.h"
#include "gldl_funcarray.h"

//////////////////////////////////////////
// Jump to line 575 for GLDL API functions
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


// WINDOWS
#if defined(_WIN32) || defined(WIN32)
#   define WIN32_LEAN_AND_MEAN
#   include <windows.h>

#warning GLDL_WIN32
// MAC
#elif defined(__APPLE__) || defined(__APPLE_CC__)

// UNIX
#else
#include <dlfcn.h>
#include <GL/glx.h>
#include <signal.h>

#warning GLDL_UNIX
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
#endif



// ###################################################################
// API FUNCTIONS

FILE *trace = NULL;         // Trace log file
int break_functions[512];   // Breakpoints storing array

static struct {
    GLint major,
          minor;
} gl_version;



static int GetGLVersion();
static void DebugTest( const char *func_name, int func_index, const char *file, int line );
static void DebugFunction();
static void LoadProcs();


// Public functions

int gldlInit() {
    OpenLib();
    LoadProcs();
    CloseLib();

    trace = fopen( "trace.log", "w" );

    InitFunctionArray();

    memset( break_functions, -1, 512 * sizeof(int) );
    DebugFunction();

    return GetGLVersion();
}

void gldlTerminate() {
    fclose( trace );
    DestroyFunctionArray();
}

int gldlIsSupported( unsigned int major, unsigned int minor ) {
    if( major < 3 ) return 0;
    if( major > gl_version.major ) return 1;

    return ( major == gl_version.major && minor >= gl_version.minor );
}


// Private functions

// Store the used GL version in the gl_version struct
static int GetGLVersion() {
    gldlGetIntegerv_impl( GL_MAJOR_VERSION, &gl_version.major );
    gldlGetIntegerv_impl( GL_MINOR_VERSION, &gl_version.minor );

    if( gl_version.major < 3 ) return -1;

    return 0;
}

// Check if a breakpoint is set on the given function
static void DebugTest( const char *func_name, int func_index, const char *file, int line ) {
    for( int i = 0; i < 512; ++i ) {
        if( -1 == break_functions[i] ) break;
        if( func_index == break_functions[i] ) {
            printf( "Breakpoint %d on %s() at %s:%d\n", i, func_name, file, line );
            DebugFunction();
        }
    }
}

// Interactive Debug session when a breakpoint arose or during initialization
static void DebugFunction() {
    char line[128];
    line[0] = 0;
    char *cmd = line;
    char *pline, *param;

    while( 1 ) {
        printf( "> " );
    
        // get line from user and split it in 'cmd params'
        gets( line );
        pline = strchr( line, ' ' );

        // if parameters, get them in param
        if( pline ) {
            pline[0] = 0;
            param = pline + 1;
//            printf( "cmd = %s, param = %s\n", cmd, param );
        }

        if( !strcmp( cmd, "c" ) || !strcmp( cmd, "continue" ) )
            break;

        // check for break demand on GL function
        if( !strcmp( cmd, "b" ) || !strcmp( cmd, "break" ) ) {
            // retrieve function name index
            int index = -1;
            for( int i = 0; i < 560; ++i ) {
                int cmp = strcmp( param, gl_functions[i] );

                if( !cmp ) {
                    index = i;
                    break;
                }
                else if( cmp < 0 ) {
                    printf( "%s is not a valid GL function!\n", param );
                    break;
                }
            }

            if( index >= 0 )
                // insert function name index in next free spot
                for( int i = 0; i < 512; ++i )
                    if( -1 == break_functions[i] || -2 == break_functions[i] ) {
                        break_functions[i] = index;
                        printf( "Breakpoint %d, %s()\n", i, param );
                        break;
                    }
        }

        // check for breakpoint deletion demand
        else if( !strcmp( cmd, "d" ) || !strcmp( cmd, "delete" ) ) {
            int index = atoi( param );
            if( index >= 512  || ( !index && strcmp( param, "0" ) ) || -1 == break_functions[index] ) {
                printf( "Breakpoint %s does not exist\n", param );
            } else {
                break_functions[index] = -2;
                printf( "Breakpoint %d deleted\n", index );
            }
        }

        // check for breakpoints listing
        else if( !strcmp( cmd, "l" ) || !strcmp( cmd, "list" ) ) {
            for( int i = 0; i < 512; ++i ) {
                if( -1 == break_functions[i] ) break;
                if( -2 == break_functions[i] ) continue;
                printf( "Breakpoint %d on function %s()\n", i, gl_functions[break_functions[i]] );
            }
        }

        param = pline = NULL; 
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
	fprintf( trace, "call<%s,%d>: glCullFace( %s );\n", file, line,  arg0 );

    DebugTest( "glCullFace", 73, file, line );
    gldlCullFace_impl( mode );
}

void gldlFrontFace ( GLenum mode, const char *arg0, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glFrontFace( %s );\n", file, line,  arg0 );

    DebugTest( "glFrontFace", 136, file, line );
    gldlFrontFace_impl( mode );
}

void gldlHint ( GLenum target, GLenum mode, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glHint( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glHint", 252, file, line );
    gldlHint_impl( target, mode );
}

void gldlLineWidth ( GLfloat width, const char *arg0, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glLineWidth( %s );\n", file, line,  arg0 );

    DebugTest( "glLineWidth", 268, file, line );
    gldlLineWidth_impl( width );
}

void gldlPointSize ( GLfloat size, const char *arg0, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glPointSize( %s );\n", file, line,  arg0 );

    DebugTest( "glPointSize", 299, file, line );
    gldlPointSize_impl( size );
}

void gldlPolygonMode ( GLenum face, GLenum mode, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glPolygonMode( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glPolygonMode", 300, file, line );
    gldlPolygonMode_impl( face, mode );
}

void gldlScissor ( GLint x, GLint y, GLsizei width, GLsizei height, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glScissor( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glScissor", 372, file, line );
    gldlScissor_impl( x, y, width, height );
}

void gldlTexParameterf ( GLenum target, GLenum pname, GLfloat param, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glTexParameterf( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glTexParameterf", 402, file, line );
    gldlTexParameterf_impl( target, pname, param );
}

void gldlTexParameterfv ( GLenum target, GLenum pname, const GLfloat *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glTexParameterfv( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glTexParameterfv", 403, file, line );
    gldlTexParameterfv_impl( target, pname, params );
}

void gldlTexParameteri ( GLenum target, GLenum pname, GLint param, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glTexParameteri( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glTexParameteri", 404, file, line );
    gldlTexParameteri_impl( target, pname, param );
}

void gldlTexParameteriv ( GLenum target, GLenum pname, const GLint *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glTexParameteriv( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glTexParameteriv", 405, file, line );
    gldlTexParameteriv_impl( target, pname, params );
}

void gldlTexImage1D ( GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const GLvoid *pixels, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *arg6, const char *arg7, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glTexImage1D( %s, %s, %s, %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3, arg4, arg5, arg6,  arg7 );

    DebugTest( "glTexImage1D", 395, file, line );
    gldlTexImage1D_impl( target, level, internalformat, width, border, format, type, pixels );
}

void gldlTexImage2D ( GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid *pixels, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *arg6, const char *arg7, const char *arg8, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glTexImage2D( %s, %s, %s, %s, %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7,  arg8 );

    DebugTest( "glTexImage2D", 396, file, line );
    gldlTexImage2D_impl( target, level, internalformat, width, height, border, format, type, pixels );
}

void gldlDrawBuffer ( GLenum mode, const char *arg0, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glDrawBuffer( %s );\n", file, line,  arg0 );

    DebugTest( "glDrawBuffer", 104, file, line );
    gldlDrawBuffer_impl( mode );
}

void gldlClear ( GLbitfield mask, const char *arg0, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glClear( %s );\n", file, line,  arg0 );

    DebugTest( "glClear", 39, file, line );
    gldlClear_impl( mask );
}

void gldlClearColor ( GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glClearColor( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glClearColor", 44, file, line );
    gldlClearColor_impl( red, green, blue, alpha );
}

void gldlClearStencil ( GLint s, const char *arg0, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glClearStencil( %s );\n", file, line,  arg0 );

    DebugTest( "glClearStencil", 47, file, line );
    gldlClearStencil_impl( s );
}

void gldlClearDepth ( GLclampd depth, const char *arg0, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glClearDepth( %s );\n", file, line,  arg0 );

    DebugTest( "glClearDepth", 45, file, line );
    gldlClearDepth_impl( depth );
}

void gldlStencilMask ( GLuint mask, const char *arg0, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glStencilMask( %s );\n", file, line,  arg0 );

    DebugTest( "glStencilMask", 382, file, line );
    gldlStencilMask_impl( mask );
}

void gldlColorMask ( GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glColorMask( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glColorMask", 49, file, line );
    gldlColorMask_impl( red, green, blue, alpha );
}

void gldlDepthMask ( GLboolean flag, const char *arg0, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glDepthMask( %s );\n", file, line,  arg0 );

    DebugTest( "glDepthMask", 91, file, line );
    gldlDepthMask_impl( flag );
}

void gldlDisable ( GLenum cap, const char *arg0, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glDisable( %s );\n", file, line,  arg0 );

    DebugTest( "glDisable", 97, file, line );
    gldlDisable_impl( cap );
}

void gldlEnable ( GLenum cap, const char *arg0, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glEnable( %s );\n", file, line,  arg0 );

    DebugTest( "glEnable", 119, file, line );
    gldlEnable_impl( cap );
}

void gldlFinish ( const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glFinish();\n", file, line );

    DebugTest( "glFinish", 127, file, line );
    gldlFinish_impl(  );
}

void gldlFlush ( const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glFlush();\n", file, line );

    DebugTest( "glFlush", 128, file, line );
    gldlFlush_impl(  );
}

void gldlBlendFunc ( GLenum sfactor, GLenum dfactor, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glBlendFunc( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glBlendFunc", 28, file, line );
    gldlBlendFunc_impl( sfactor, dfactor );
}

void gldlLogicOp ( GLenum opcode, const char *arg0, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glLogicOp( %s );\n", file, line,  arg0 );

    DebugTest( "glLogicOp", 270, file, line );
    gldlLogicOp_impl( opcode );
}

void gldlStencilFunc ( GLenum func, GLint ref, GLuint mask, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glStencilFunc( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glStencilFunc", 380, file, line );
    gldlStencilFunc_impl( func, ref, mask );
}

void gldlStencilOp ( GLenum fail, GLenum zfail, GLenum zpass, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glStencilOp( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glStencilOp", 384, file, line );
    gldlStencilOp_impl( fail, zfail, zpass );
}

void gldlDepthFunc ( GLenum func, const char *arg0, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glDepthFunc( %s );\n", file, line,  arg0 );

    DebugTest( "glDepthFunc", 90, file, line );
    gldlDepthFunc_impl( func );
}

void gldlPixelStoref ( GLenum pname, GLfloat param, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glPixelStoref( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glPixelStoref", 293, file, line );
    gldlPixelStoref_impl( pname, param );
}

void gldlPixelStorei ( GLenum pname, GLint param, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glPixelStorei( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glPixelStorei", 294, file, line );
    gldlPixelStorei_impl( pname, param );
}

void gldlReadBuffer ( GLenum mode, const char *arg0, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glReadBuffer( %s );\n", file, line,  arg0 );

    DebugTest( "glReadBuffer", 357, file, line );
    gldlReadBuffer_impl( mode );
}

void gldlReadPixels ( GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid *pixels, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *arg6, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glReadPixels( %s, %s, %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3, arg4, arg5,  arg6 );

    DebugTest( "glReadPixels", 358, file, line );
    gldlReadPixels_impl( x, y, width, height, format, type, pixels );
}

void gldlGetBooleanv ( GLenum pname, GLboolean *params, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetBooleanv( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glGetBooleanv", 160, file, line );
    gldlGetBooleanv_impl( pname, params );
}

void gldlGetDoublev ( GLenum pname, GLdouble *params, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetDoublev( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glGetDoublev", 168, file, line );
    gldlGetDoublev_impl( pname, params );
}

GLenum gldlGetError ( const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetError();\n", file, line );

    DebugTest( "glGetError", 169, file, line );
    return gldlGetError_impl(  );
}

void gldlGetFloatv ( GLenum pname, GLfloat *params, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetFloatv( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glGetFloatv", 171, file, line );
    gldlGetFloatv_impl( pname, params );
}

void gldlGetIntegerv ( GLenum pname, GLint *params, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetIntegerv( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glGetIntegerv", 179, file, line );
    gldlGetIntegerv_impl( pname, params );
}

const GLubyte * gldlGetString ( GLenum name, const char *arg0, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetString( %s );\n", file, line,  arg0 );

    DebugTest( "glGetString", 206, file, line );
    return gldlGetString_impl( name );
}

void gldlGetTexImage ( GLenum target, GLint level, GLenum format, GLenum type, GLvoid *pixels, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetTexImage( %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3,  arg4 );

    DebugTest( "glGetTexImage", 211, file, line );
    gldlGetTexImage_impl( target, level, format, type, pixels );
}

void gldlGetTexParameterfv ( GLenum target, GLenum pname, GLfloat *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetTexParameterfv( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glGetTexParameterfv", 216, file, line );
    gldlGetTexParameterfv_impl( target, pname, params );
}

void gldlGetTexParameteriv ( GLenum target, GLenum pname, GLint *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetTexParameteriv( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glGetTexParameteriv", 217, file, line );
    gldlGetTexParameteriv_impl( target, pname, params );
}

void gldlGetTexLevelParameterfv ( GLenum target, GLint level, GLenum pname, GLfloat *params, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetTexLevelParameterfv( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glGetTexLevelParameterfv", 212, file, line );
    gldlGetTexLevelParameterfv_impl( target, level, pname, params );
}

void gldlGetTexLevelParameteriv ( GLenum target, GLint level, GLenum pname, GLint *params, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetTexLevelParameteriv( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glGetTexLevelParameteriv", 213, file, line );
    gldlGetTexLevelParameteriv_impl( target, level, pname, params );
}

GLboolean gldlIsEnabled ( GLenum cap, const char *arg0, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glIsEnabled( %s );\n", file, line,  arg0 );

    DebugTest( "glIsEnabled", 254, file, line );
    return gldlIsEnabled_impl( cap );
}

void gldlDepthRange ( GLclampd near, GLclampd far, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glDepthRange( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glDepthRange", 92, file, line );
    gldlDepthRange_impl( near, far );
}

void gldlViewport ( GLint x, GLint y, GLsizei width, GLsizei height, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glViewport( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glViewport", 555, file, line );
    gldlViewport_impl( x, y, width, height );
}

void gldlDrawArrays ( GLenum mode, GLint first, GLsizei count, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glDrawArrays( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glDrawArrays", 100, file, line );
    gldlDrawArrays_impl( mode, first, count );
}

void gldlDrawElements ( GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glDrawElements( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glDrawElements", 106, file, line );
    gldlDrawElements_impl( mode, count, type, indices );
}

void gldlGetPointerv ( GLenum pname, GLvoid* *params, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetPointerv( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glGetPointerv", 184, file, line );
    gldlGetPointerv_impl( pname, params );
}

void gldlPolygonOffset ( GLfloat factor, GLfloat units, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glPolygonOffset( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glPolygonOffset", 301, file, line );
    gldlPolygonOffset_impl( factor, units );
}

void gldlCopyTexImage1D ( GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *arg6, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glCopyTexImage1D( %s, %s, %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3, arg4, arg5,  arg6 );

    DebugTest( "glCopyTexImage1D", 64, file, line );
    gldlCopyTexImage1D_impl( target, level, internalformat, x, y, width, border );
}

void gldlCopyTexImage2D ( GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *arg6, const char *arg7, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glCopyTexImage2D( %s, %s, %s, %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3, arg4, arg5, arg6,  arg7 );

    DebugTest( "glCopyTexImage2D", 65, file, line );
    gldlCopyTexImage2D_impl( target, level, internalformat, x, y, width, height, border );
}

void gldlCopyTexSubImage1D ( GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glCopyTexSubImage1D( %s, %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3, arg4,  arg5 );

    DebugTest( "glCopyTexSubImage1D", 66, file, line );
    gldlCopyTexSubImage1D_impl( target, level, xoffset, x, y, width );
}

void gldlCopyTexSubImage2D ( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *arg6, const char *arg7, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glCopyTexSubImage2D( %s, %s, %s, %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3, arg4, arg5, arg6,  arg7 );

    DebugTest( "glCopyTexSubImage2D", 67, file, line );
    gldlCopyTexSubImage2D_impl( target, level, xoffset, yoffset, x, y, width, height );
}

void gldlTexSubImage1D ( GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid *pixels, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *arg6, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glTexSubImage1D( %s, %s, %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3, arg4, arg5,  arg6 );

    DebugTest( "glTexSubImage1D", 409, file, line );
    gldlTexSubImage1D_impl( target, level, xoffset, width, format, type, pixels );
}

void gldlTexSubImage2D ( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *arg6, const char *arg7, const char *arg8, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glTexSubImage2D( %s, %s, %s, %s, %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7,  arg8 );

    DebugTest( "glTexSubImage2D", 410, file, line );
    gldlTexSubImage2D_impl( target, level, xoffset, yoffset, width, height, format, type, pixels );
}

void gldlBindTexture ( GLenum target, GLuint texture, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glBindTexture( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glBindTexture", 18, file, line );
    gldlBindTexture_impl( target, texture );
}

void gldlDeleteTextures ( GLsizei n, const GLuint *textures, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glDeleteTextures( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glDeleteTextures", 87, file, line );
    gldlDeleteTextures_impl( n, textures );
}

void gldlGenTextures ( GLsizei n, GLuint *textures, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGenTextures( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glGenTextures", 143, file, line );
    gldlGenTextures_impl( n, textures );
}

GLboolean gldlIsTexture ( GLuint texture, const char *arg0, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glIsTexture( %s );\n", file, line,  arg0 );

    DebugTest( "glIsTexture", 265, file, line );
    return gldlIsTexture_impl( texture );
}

void gldlBlendColor ( GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glBlendColor( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glBlendColor", 21, file, line );
    gldlBlendColor_impl( red, green, blue, alpha );
}

void gldlBlendEquation ( GLenum mode, const char *arg0, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glBlendEquation( %s );\n", file, line,  arg0 );

    DebugTest( "glBlendEquation", 22, file, line );
    gldlBlendEquation_impl( mode );
}

void gldlDrawRangeElements ( GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid *indices, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glDrawRangeElements( %s, %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3, arg4,  arg5 );

    DebugTest( "glDrawRangeElements", 113, file, line );
    gldlDrawRangeElements_impl( mode, start, end, count, type, indices );
}

void gldlTexImage3D ( GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid *pixels, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *arg6, const char *arg7, const char *arg8, const char *arg9, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glTexImage3D( %s, %s, %s, %s, %s, %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8,  arg9 );

    DebugTest( "glTexImage3D", 398, file, line );
    gldlTexImage3D_impl( target, level, internalformat, width, height, depth, border, format, type, pixels );
}

void gldlTexSubImage3D ( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid *pixels, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *arg6, const char *arg7, const char *arg8, const char *arg9, const char *arg10, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glTexSubImage3D( %s, %s, %s, %s, %s, %s, %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9,  arg10 );

    DebugTest( "glTexSubImage3D", 411, file, line );
    gldlTexSubImage3D_impl( target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels );
}

void gldlCopyTexSubImage3D ( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *arg6, const char *arg7, const char *arg8, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glCopyTexSubImage3D( %s, %s, %s, %s, %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7,  arg8 );

    DebugTest( "glCopyTexSubImage3D", 68, file, line );
    gldlCopyTexSubImage3D_impl( target, level, xoffset, yoffset, zoffset, x, y, width, height );
}

void gldlActiveTexture ( GLenum texture, const char *arg0, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glActiveTexture( %s );\n", file, line,  arg0 );

    DebugTest( "glActiveTexture", 1, file, line );
    gldlActiveTexture_impl( texture );
}

void gldlSampleCoverage ( GLclampf value, GLboolean invert, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glSampleCoverage( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glSampleCoverage", 364, file, line );
    gldlSampleCoverage_impl( value, invert );
}

void gldlCompressedTexImage3D ( GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid *data, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *arg6, const char *arg7, const char *arg8, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glCompressedTexImage3D( %s, %s, %s, %s, %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7,  arg8 );

    DebugTest( "glCompressedTexImage3D", 59, file, line );
    gldlCompressedTexImage3D_impl( target, level, internalformat, width, height, depth, border, imageSize, data );
}

void gldlCompressedTexImage2D ( GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid *data, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *arg6, const char *arg7, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glCompressedTexImage2D( %s, %s, %s, %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3, arg4, arg5, arg6,  arg7 );

    DebugTest( "glCompressedTexImage2D", 58, file, line );
    gldlCompressedTexImage2D_impl( target, level, internalformat, width, height, border, imageSize, data );
}

void gldlCompressedTexImage1D ( GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid *data, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *arg6, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glCompressedTexImage1D( %s, %s, %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3, arg4, arg5,  arg6 );

    DebugTest( "glCompressedTexImage1D", 57, file, line );
    gldlCompressedTexImage1D_impl( target, level, internalformat, width, border, imageSize, data );
}

void gldlCompressedTexSubImage3D ( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid *data, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *arg6, const char *arg7, const char *arg8, const char *arg9, const char *arg10, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glCompressedTexSubImage3D( %s, %s, %s, %s, %s, %s, %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9,  arg10 );

    DebugTest( "glCompressedTexSubImage3D", 62, file, line );
    gldlCompressedTexSubImage3D_impl( target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data );
}

void gldlCompressedTexSubImage2D ( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid *data, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *arg6, const char *arg7, const char *arg8, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glCompressedTexSubImage2D( %s, %s, %s, %s, %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7,  arg8 );

    DebugTest( "glCompressedTexSubImage2D", 61, file, line );
    gldlCompressedTexSubImage2D_impl( target, level, xoffset, yoffset, width, height, format, imageSize, data );
}

void gldlCompressedTexSubImage1D ( GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid *data, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *arg6, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glCompressedTexSubImage1D( %s, %s, %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3, arg4, arg5,  arg6 );

    DebugTest( "glCompressedTexSubImage1D", 60, file, line );
    gldlCompressedTexSubImage1D_impl( target, level, xoffset, width, format, imageSize, data );
}

void gldlGetCompressedTexImage ( GLenum target, GLint level, GLvoid *img, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetCompressedTexImage( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glGetCompressedTexImage", 165, file, line );
    gldlGetCompressedTexImage_impl( target, level, img );
}

void gldlBlendFuncSeparate ( GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glBlendFuncSeparate( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glBlendFuncSeparate", 29, file, line );
    gldlBlendFuncSeparate_impl( sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha );
}

void gldlMultiDrawArrays ( GLenum mode, const GLint *first, const GLsizei *count, GLsizei primcount, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glMultiDrawArrays( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glMultiDrawArrays", 276, file, line );
    gldlMultiDrawArrays_impl( mode, first, count, primcount );
}

void gldlMultiDrawElements ( GLenum mode, const GLsizei *count, GLenum type, const GLvoid* *indices, GLsizei primcount, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glMultiDrawElements( %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3,  arg4 );

    DebugTest( "glMultiDrawElements", 277, file, line );
    gldlMultiDrawElements_impl( mode, count, type, indices, primcount );
}

void gldlPointParameterf ( GLenum pname, GLfloat param, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glPointParameterf( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glPointParameterf", 295, file, line );
    gldlPointParameterf_impl( pname, param );
}

void gldlPointParameterfv ( GLenum pname, const GLfloat *params, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glPointParameterfv( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glPointParameterfv", 296, file, line );
    gldlPointParameterfv_impl( pname, params );
}

void gldlPointParameteri ( GLenum pname, GLint param, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glPointParameteri( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glPointParameteri", 297, file, line );
    gldlPointParameteri_impl( pname, param );
}

void gldlPointParameteriv ( GLenum pname, const GLint *params, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glPointParameteriv( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glPointParameteriv", 298, file, line );
    gldlPointParameteriv_impl( pname, params );
}

void gldlGenQueries ( GLsizei n, GLuint *ids, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGenQueries( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glGenQueries", 140, file, line );
    gldlGenQueries_impl( n, ids );
}

void gldlDeleteQueries ( GLsizei n, const GLuint *ids, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glDeleteQueries( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glDeleteQueries", 82, file, line );
    gldlDeleteQueries_impl( n, ids );
}

GLboolean gldlIsQuery ( GLuint id, const char *arg0, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glIsQuery( %s );\n", file, line,  arg0 );

    DebugTest( "glIsQuery", 260, file, line );
    return gldlIsQuery_impl( id );
}

void gldlBeginQuery ( GLenum target, GLuint id, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glBeginQuery( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glBeginQuery", 4, file, line );
    gldlBeginQuery_impl( target, id );
}

void gldlEndQuery ( GLenum target, const char *arg0, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glEndQuery( %s );\n", file, line,  arg0 );

    DebugTest( "glEndQuery", 123, file, line );
    gldlEndQuery_impl( target );
}

void gldlGetQueryiv ( GLenum target, GLenum pname, GLint *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetQueryiv( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glGetQueryiv", 196, file, line );
    gldlGetQueryiv_impl( target, pname, params );
}

void gldlGetQueryObjectiv ( GLuint id, GLenum pname, GLint *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetQueryObjectiv( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glGetQueryObjectiv", 193, file, line );
    gldlGetQueryObjectiv_impl( id, pname, params );
}

void gldlGetQueryObjectuiv ( GLuint id, GLenum pname, GLuint *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetQueryObjectuiv( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glGetQueryObjectuiv", 195, file, line );
    gldlGetQueryObjectuiv_impl( id, pname, params );
}

void gldlBindBuffer ( GLenum target, GLuint buffer, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glBindBuffer( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glBindBuffer", 8, file, line );
    gldlBindBuffer_impl( target, buffer );
}

void gldlDeleteBuffers ( GLsizei n, const GLuint *buffers, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glDeleteBuffers( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glDeleteBuffers", 77, file, line );
    gldlDeleteBuffers_impl( n, buffers );
}

void gldlGenBuffers ( GLsizei n, GLuint *buffers, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGenBuffers( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glGenBuffers", 137, file, line );
    gldlGenBuffers_impl( n, buffers );
}

GLboolean gldlIsBuffer ( GLuint buffer, const char *arg0, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glIsBuffer( %s );\n", file, line,  arg0 );

    DebugTest( "glIsBuffer", 253, file, line );
    return gldlIsBuffer_impl( buffer );
}

void gldlBufferData ( GLenum target, GLsizeiptr size, const GLvoid *data, GLenum usage, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glBufferData( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glBufferData", 35, file, line );
    gldlBufferData_impl( target, size, data, usage );
}

void gldlBufferSubData ( GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid *data, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glBufferSubData( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glBufferSubData", 36, file, line );
    gldlBufferSubData_impl( target, offset, size, data );
}

void gldlGetBufferSubData ( GLenum target, GLintptr offset, GLsizeiptr size, GLvoid *data, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetBufferSubData( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glGetBufferSubData", 164, file, line );
    gldlGetBufferSubData_impl( target, offset, size, data );
}

GLvoid* gldlMapBuffer ( GLenum target, GLenum access, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glMapBuffer( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glMapBuffer", 271, file, line );
    return gldlMapBuffer_impl( target, access );
}

GLboolean gldlUnmapBuffer ( GLenum target, const char *arg0, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glUnmapBuffer( %s );\n", file, line,  arg0 );

    DebugTest( "glUnmapBuffer", 468, file, line );
    return gldlUnmapBuffer_impl( target );
}

void gldlGetBufferParameteriv ( GLenum target, GLenum pname, GLint *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetBufferParameteriv( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glGetBufferParameteriv", 162, file, line );
    gldlGetBufferParameteriv_impl( target, pname, params );
}

void gldlGetBufferPointerv ( GLenum target, GLenum pname, GLvoid* *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetBufferPointerv( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glGetBufferPointerv", 163, file, line );
    gldlGetBufferPointerv_impl( target, pname, params );
}

void gldlBlendEquationSeparate ( GLenum modeRGB, GLenum modeAlpha, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glBlendEquationSeparate( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glBlendEquationSeparate", 23, file, line );
    gldlBlendEquationSeparate_impl( modeRGB, modeAlpha );
}

void gldlDrawBuffers ( GLsizei n, const GLenum *bufs, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glDrawBuffers( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glDrawBuffers", 105, file, line );
    gldlDrawBuffers_impl( n, bufs );
}

void gldlStencilOpSeparate ( GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glStencilOpSeparate( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glStencilOpSeparate", 385, file, line );
    gldlStencilOpSeparate_impl( face, sfail, dpfail, dppass );
}

void gldlStencilFuncSeparate ( GLenum face, GLenum func, GLint ref, GLuint mask, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glStencilFuncSeparate( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glStencilFuncSeparate", 381, file, line );
    gldlStencilFuncSeparate_impl( face, func, ref, mask );
}

void gldlStencilMaskSeparate ( GLenum face, GLuint mask, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glStencilMaskSeparate( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glStencilMaskSeparate", 383, file, line );
    gldlStencilMaskSeparate_impl( face, mask );
}

void gldlAttachShader ( GLuint program, GLuint shader, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glAttachShader( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glAttachShader", 2, file, line );
    gldlAttachShader_impl( program, shader );
}

void gldlBindAttribLocation ( GLuint program, GLuint index, const GLchar *name, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glBindAttribLocation( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glBindAttribLocation", 7, file, line );
    gldlBindAttribLocation_impl( program, index, name );
}

void gldlCompileShader ( GLuint shader, const char *arg0, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glCompileShader( %s );\n", file, line,  arg0 );

    DebugTest( "glCompileShader", 55, file, line );
    gldlCompileShader_impl( shader );
}

GLuint gldlCreateProgram ( const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glCreateProgram();\n", file, line );

    DebugTest( "glCreateProgram", 69, file, line );
    return gldlCreateProgram_impl(  );
}

GLuint gldlCreateShader ( GLenum type, const char *arg0, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glCreateShader( %s );\n", file, line,  arg0 );

    DebugTest( "glCreateShader", 70, file, line );
    return gldlCreateShader_impl( type );
}

void gldlDeleteProgram ( GLuint program, const char *arg0, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glDeleteProgram( %s );\n", file, line,  arg0 );

    DebugTest( "glDeleteProgram", 80, file, line );
    gldlDeleteProgram_impl( program );
}

void gldlDeleteShader ( GLuint shader, const char *arg0, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glDeleteShader( %s );\n", file, line,  arg0 );

    DebugTest( "glDeleteShader", 85, file, line );
    gldlDeleteShader_impl( shader );
}

void gldlDetachShader ( GLuint program, GLuint shader, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glDetachShader( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glDetachShader", 96, file, line );
    gldlDetachShader_impl( program, shader );
}

void gldlDisableVertexAttribArray ( GLuint index, const char *arg0, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glDisableVertexAttribArray( %s );\n", file, line,  arg0 );

    DebugTest( "glDisableVertexAttribArray", 98, file, line );
    gldlDisableVertexAttribArray_impl( index );
}

void gldlEnableVertexAttribArray ( GLuint index, const char *arg0, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glEnableVertexAttribArray( %s );\n", file, line,  arg0 );

    DebugTest( "glEnableVertexAttribArray", 120, file, line );
    gldlEnableVertexAttribArray_impl( index );
}

void gldlGetActiveAttrib ( GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *arg6, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetActiveAttrib( %s, %s, %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3, arg4, arg5,  arg6 );

    DebugTest( "glGetActiveAttrib", 148, file, line );
    gldlGetActiveAttrib_impl( program, index, bufSize, length, size, type, name );
}

void gldlGetActiveUniform ( GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *arg6, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetActiveUniform( %s, %s, %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3, arg4, arg5,  arg6 );

    DebugTest( "glGetActiveUniform", 152, file, line );
    gldlGetActiveUniform_impl( program, index, bufSize, length, size, type, name );
}

void gldlGetAttachedShaders ( GLuint program, GLsizei maxCount, GLsizei *count, GLuint *obj, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetAttachedShaders( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glGetAttachedShaders", 157, file, line );
    gldlGetAttachedShaders_impl( program, maxCount, count, obj );
}

GLint gldlGetAttribLocation ( GLuint program, const GLchar *name, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetAttribLocation( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glGetAttribLocation", 158, file, line );
    return gldlGetAttribLocation_impl( program, name );
}

void gldlGetProgramiv ( GLuint program, GLenum pname, GLint *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetProgramiv( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glGetProgramiv", 190, file, line );
    gldlGetProgramiv_impl( program, pname, params );
}

void gldlGetProgramInfoLog ( GLuint program, GLsizei bufSize, GLsizei *length, GLchar *infoLog, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetProgramInfoLog( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glGetProgramInfoLog", 186, file, line );
    gldlGetProgramInfoLog_impl( program, bufSize, length, infoLog );
}

void gldlGetShaderiv ( GLuint shader, GLenum pname, GLint *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetShaderiv( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glGetShaderiv", 205, file, line );
    gldlGetShaderiv_impl( shader, pname, params );
}

void gldlGetShaderInfoLog ( GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *infoLog, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetShaderInfoLog( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glGetShaderInfoLog", 202, file, line );
    gldlGetShaderInfoLog_impl( shader, bufSize, length, infoLog );
}

void gldlGetShaderSource ( GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *source, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetShaderSource( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glGetShaderSource", 204, file, line );
    gldlGetShaderSource_impl( shader, bufSize, length, source );
}

GLint gldlGetUniformLocation ( GLuint program, const GLchar *name, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetUniformLocation( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glGetUniformLocation", 221, file, line );
    return gldlGetUniformLocation_impl( program, name );
}

void gldlGetUniformfv ( GLuint program, GLint location, GLfloat *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetUniformfv( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glGetUniformfv", 224, file, line );
    gldlGetUniformfv_impl( program, location, params );
}

void gldlGetUniformiv ( GLuint program, GLint location, GLint *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetUniformiv( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glGetUniformiv", 225, file, line );
    gldlGetUniformiv_impl( program, location, params );
}

void gldlGetVertexAttribdv ( GLuint index, GLenum pname, GLdouble *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetVertexAttribdv( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glGetVertexAttribdv", 231, file, line );
    gldlGetVertexAttribdv_impl( index, pname, params );
}

void gldlGetVertexAttribfv ( GLuint index, GLenum pname, GLfloat *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetVertexAttribfv( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glGetVertexAttribfv", 232, file, line );
    gldlGetVertexAttribfv_impl( index, pname, params );
}

void gldlGetVertexAttribiv ( GLuint index, GLenum pname, GLint *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetVertexAttribiv( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glGetVertexAttribiv", 233, file, line );
    gldlGetVertexAttribiv_impl( index, pname, params );
}

void gldlGetVertexAttribPointerv ( GLuint index, GLenum pname, GLvoid* *pointer, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetVertexAttribPointerv( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glGetVertexAttribPointerv", 230, file, line );
    gldlGetVertexAttribPointerv_impl( index, pname, pointer );
}

GLboolean gldlIsProgram ( GLuint program, const char *arg0, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glIsProgram( %s );\n", file, line,  arg0 );

    DebugTest( "glIsProgram", 258, file, line );
    return gldlIsProgram_impl( program );
}

GLboolean gldlIsShader ( GLuint shader, const char *arg0, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glIsShader( %s );\n", file, line,  arg0 );

    DebugTest( "glIsShader", 263, file, line );
    return gldlIsShader_impl( shader );
}

void gldlLinkProgram ( GLuint program, const char *arg0, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glLinkProgram( %s );\n", file, line,  arg0 );

    DebugTest( "glLinkProgram", 269, file, line );
    gldlLinkProgram_impl( program );
}

void gldlShaderSource ( GLuint shader, GLsizei count, const GLchar* *string, const GLint *length, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glShaderSource( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glShaderSource", 379, file, line );
    gldlShaderSource_impl( shader, count, string, length );
}

void gldlUseProgram ( GLuint program, const char *arg0, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glUseProgram( %s );\n", file, line,  arg0 );

    DebugTest( "glUseProgram", 469, file, line );
    gldlUseProgram_impl( program );
}

void gldlUniform1f ( GLint location, GLfloat v0, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glUniform1f( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glUniform1f", 418, file, line );
    gldlUniform1f_impl( location, v0 );
}

void gldlUniform2f ( GLint location, GLfloat v0, GLfloat v1, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glUniform2f( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glUniform2f", 426, file, line );
    gldlUniform2f_impl( location, v0, v1 );
}

void gldlUniform3f ( GLint location, GLfloat v0, GLfloat v1, GLfloat v2, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glUniform3f( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glUniform3f", 434, file, line );
    gldlUniform3f_impl( location, v0, v1, v2 );
}

void gldlUniform4f ( GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glUniform4f( %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3,  arg4 );

    DebugTest( "glUniform4f", 442, file, line );
    gldlUniform4f_impl( location, v0, v1, v2, v3 );
}

void gldlUniform1i ( GLint location, GLint v0, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glUniform1i( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glUniform1i", 420, file, line );
    gldlUniform1i_impl( location, v0 );
}

void gldlUniform2i ( GLint location, GLint v0, GLint v1, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glUniform2i( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glUniform2i", 428, file, line );
    gldlUniform2i_impl( location, v0, v1 );
}

void gldlUniform3i ( GLint location, GLint v0, GLint v1, GLint v2, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glUniform3i( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glUniform3i", 436, file, line );
    gldlUniform3i_impl( location, v0, v1, v2 );
}

void gldlUniform4i ( GLint location, GLint v0, GLint v1, GLint v2, GLint v3, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glUniform4i( %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3,  arg4 );

    DebugTest( "glUniform4i", 444, file, line );
    gldlUniform4i_impl( location, v0, v1, v2, v3 );
}

void gldlUniform1fv ( GLint location, GLsizei count, const GLfloat *value, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glUniform1fv( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glUniform1fv", 419, file, line );
    gldlUniform1fv_impl( location, count, value );
}

void gldlUniform2fv ( GLint location, GLsizei count, const GLfloat *value, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glUniform2fv( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glUniform2fv", 427, file, line );
    gldlUniform2fv_impl( location, count, value );
}

void gldlUniform3fv ( GLint location, GLsizei count, const GLfloat *value, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glUniform3fv( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glUniform3fv", 435, file, line );
    gldlUniform3fv_impl( location, count, value );
}

void gldlUniform4fv ( GLint location, GLsizei count, const GLfloat *value, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glUniform4fv( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glUniform4fv", 443, file, line );
    gldlUniform4fv_impl( location, count, value );
}

void gldlUniform1iv ( GLint location, GLsizei count, const GLint *value, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glUniform1iv( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glUniform1iv", 421, file, line );
    gldlUniform1iv_impl( location, count, value );
}

void gldlUniform2iv ( GLint location, GLsizei count, const GLint *value, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glUniform2iv( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glUniform2iv", 429, file, line );
    gldlUniform2iv_impl( location, count, value );
}

void gldlUniform3iv ( GLint location, GLsizei count, const GLint *value, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glUniform3iv( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glUniform3iv", 437, file, line );
    gldlUniform3iv_impl( location, count, value );
}

void gldlUniform4iv ( GLint location, GLsizei count, const GLint *value, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glUniform4iv( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glUniform4iv", 445, file, line );
    gldlUniform4iv_impl( location, count, value );
}

void gldlUniformMatrix2fv ( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glUniformMatrix2fv( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glUniformMatrix2fv", 450, file, line );
    gldlUniformMatrix2fv_impl( location, count, transpose, value );
}

void gldlUniformMatrix3fv ( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glUniformMatrix3fv( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glUniformMatrix3fv", 456, file, line );
    gldlUniformMatrix3fv_impl( location, count, transpose, value );
}

void gldlUniformMatrix4fv ( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glUniformMatrix4fv( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glUniformMatrix4fv", 462, file, line );
    gldlUniformMatrix4fv_impl( location, count, transpose, value );
}

void gldlValidateProgram ( GLuint program, const char *arg0, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glValidateProgram( %s );\n", file, line,  arg0 );

    DebugTest( "glValidateProgram", 471, file, line );
    gldlValidateProgram_impl( program );
}

void gldlVertexAttrib1d ( GLuint index, GLdouble x, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttrib1d( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glVertexAttrib1d", 473, file, line );
    gldlVertexAttrib1d_impl( index, x );
}

void gldlVertexAttrib1dv ( GLuint index, const GLdouble *v, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttrib1dv( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glVertexAttrib1dv", 474, file, line );
    gldlVertexAttrib1dv_impl( index, v );
}

void gldlVertexAttrib1f ( GLuint index, GLfloat x, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttrib1f( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glVertexAttrib1f", 475, file, line );
    gldlVertexAttrib1f_impl( index, x );
}

void gldlVertexAttrib1fv ( GLuint index, const GLfloat *v, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttrib1fv( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glVertexAttrib1fv", 476, file, line );
    gldlVertexAttrib1fv_impl( index, v );
}

void gldlVertexAttrib1s ( GLuint index, GLshort x, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttrib1s( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glVertexAttrib1s", 477, file, line );
    gldlVertexAttrib1s_impl( index, x );
}

void gldlVertexAttrib1sv ( GLuint index, const GLshort *v, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttrib1sv( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glVertexAttrib1sv", 478, file, line );
    gldlVertexAttrib1sv_impl( index, v );
}

void gldlVertexAttrib2d ( GLuint index, GLdouble x, GLdouble y, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttrib2d( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glVertexAttrib2d", 479, file, line );
    gldlVertexAttrib2d_impl( index, x, y );
}

void gldlVertexAttrib2dv ( GLuint index, const GLdouble *v, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttrib2dv( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glVertexAttrib2dv", 480, file, line );
    gldlVertexAttrib2dv_impl( index, v );
}

void gldlVertexAttrib2f ( GLuint index, GLfloat x, GLfloat y, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttrib2f( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glVertexAttrib2f", 481, file, line );
    gldlVertexAttrib2f_impl( index, x, y );
}

void gldlVertexAttrib2fv ( GLuint index, const GLfloat *v, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttrib2fv( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glVertexAttrib2fv", 482, file, line );
    gldlVertexAttrib2fv_impl( index, v );
}

void gldlVertexAttrib2s ( GLuint index, GLshort x, GLshort y, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttrib2s( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glVertexAttrib2s", 483, file, line );
    gldlVertexAttrib2s_impl( index, x, y );
}

void gldlVertexAttrib2sv ( GLuint index, const GLshort *v, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttrib2sv( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glVertexAttrib2sv", 484, file, line );
    gldlVertexAttrib2sv_impl( index, v );
}

void gldlVertexAttrib3d ( GLuint index, GLdouble x, GLdouble y, GLdouble z, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttrib3d( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glVertexAttrib3d", 485, file, line );
    gldlVertexAttrib3d_impl( index, x, y, z );
}

void gldlVertexAttrib3dv ( GLuint index, const GLdouble *v, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttrib3dv( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glVertexAttrib3dv", 486, file, line );
    gldlVertexAttrib3dv_impl( index, v );
}

void gldlVertexAttrib3f ( GLuint index, GLfloat x, GLfloat y, GLfloat z, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttrib3f( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glVertexAttrib3f", 487, file, line );
    gldlVertexAttrib3f_impl( index, x, y, z );
}

void gldlVertexAttrib3fv ( GLuint index, const GLfloat *v, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttrib3fv( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glVertexAttrib3fv", 488, file, line );
    gldlVertexAttrib3fv_impl( index, v );
}

void gldlVertexAttrib3s ( GLuint index, GLshort x, GLshort y, GLshort z, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttrib3s( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glVertexAttrib3s", 489, file, line );
    gldlVertexAttrib3s_impl( index, x, y, z );
}

void gldlVertexAttrib3sv ( GLuint index, const GLshort *v, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttrib3sv( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glVertexAttrib3sv", 490, file, line );
    gldlVertexAttrib3sv_impl( index, v );
}

void gldlVertexAttrib4Nbv ( GLuint index, const GLbyte *v, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttrib4Nbv( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glVertexAttrib4Nbv", 491, file, line );
    gldlVertexAttrib4Nbv_impl( index, v );
}

void gldlVertexAttrib4Niv ( GLuint index, const GLint *v, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttrib4Niv( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glVertexAttrib4Niv", 492, file, line );
    gldlVertexAttrib4Niv_impl( index, v );
}

void gldlVertexAttrib4Nsv ( GLuint index, const GLshort *v, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttrib4Nsv( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glVertexAttrib4Nsv", 493, file, line );
    gldlVertexAttrib4Nsv_impl( index, v );
}

void gldlVertexAttrib4Nub ( GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttrib4Nub( %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3,  arg4 );

    DebugTest( "glVertexAttrib4Nub", 494, file, line );
    gldlVertexAttrib4Nub_impl( index, x, y, z, w );
}

void gldlVertexAttrib4Nubv ( GLuint index, const GLubyte *v, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttrib4Nubv( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glVertexAttrib4Nubv", 495, file, line );
    gldlVertexAttrib4Nubv_impl( index, v );
}

void gldlVertexAttrib4Nuiv ( GLuint index, const GLuint *v, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttrib4Nuiv( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glVertexAttrib4Nuiv", 496, file, line );
    gldlVertexAttrib4Nuiv_impl( index, v );
}

void gldlVertexAttrib4Nusv ( GLuint index, const GLushort *v, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttrib4Nusv( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glVertexAttrib4Nusv", 497, file, line );
    gldlVertexAttrib4Nusv_impl( index, v );
}

void gldlVertexAttrib4bv ( GLuint index, const GLbyte *v, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttrib4bv( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glVertexAttrib4bv", 498, file, line );
    gldlVertexAttrib4bv_impl( index, v );
}

void gldlVertexAttrib4d ( GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttrib4d( %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3,  arg4 );

    DebugTest( "glVertexAttrib4d", 499, file, line );
    gldlVertexAttrib4d_impl( index, x, y, z, w );
}

void gldlVertexAttrib4dv ( GLuint index, const GLdouble *v, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttrib4dv( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glVertexAttrib4dv", 500, file, line );
    gldlVertexAttrib4dv_impl( index, v );
}

void gldlVertexAttrib4f ( GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttrib4f( %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3,  arg4 );

    DebugTest( "glVertexAttrib4f", 501, file, line );
    gldlVertexAttrib4f_impl( index, x, y, z, w );
}

void gldlVertexAttrib4fv ( GLuint index, const GLfloat *v, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttrib4fv( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glVertexAttrib4fv", 502, file, line );
    gldlVertexAttrib4fv_impl( index, v );
}

void gldlVertexAttrib4iv ( GLuint index, const GLint *v, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttrib4iv( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glVertexAttrib4iv", 503, file, line );
    gldlVertexAttrib4iv_impl( index, v );
}

void gldlVertexAttrib4s ( GLuint index, GLshort x, GLshort y, GLshort z, GLshort w, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttrib4s( %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3,  arg4 );

    DebugTest( "glVertexAttrib4s", 504, file, line );
    gldlVertexAttrib4s_impl( index, x, y, z, w );
}

void gldlVertexAttrib4sv ( GLuint index, const GLshort *v, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttrib4sv( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glVertexAttrib4sv", 505, file, line );
    gldlVertexAttrib4sv_impl( index, v );
}

void gldlVertexAttrib4ubv ( GLuint index, const GLubyte *v, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttrib4ubv( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glVertexAttrib4ubv", 506, file, line );
    gldlVertexAttrib4ubv_impl( index, v );
}

void gldlVertexAttrib4uiv ( GLuint index, const GLuint *v, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttrib4uiv( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glVertexAttrib4uiv", 507, file, line );
    gldlVertexAttrib4uiv_impl( index, v );
}

void gldlVertexAttrib4usv ( GLuint index, const GLushort *v, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttrib4usv( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glVertexAttrib4usv", 508, file, line );
    gldlVertexAttrib4usv_impl( index, v );
}

void gldlVertexAttribPointer ( GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid *pointer, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttribPointer( %s, %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3, arg4,  arg5 );

    DebugTest( "glVertexAttribPointer", 548, file, line );
    gldlVertexAttribPointer_impl( index, size, type, normalized, stride, pointer );
}

void gldlUniformMatrix2x3fv ( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glUniformMatrix2x3fv( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glUniformMatrix2x3fv", 452, file, line );
    gldlUniformMatrix2x3fv_impl( location, count, transpose, value );
}

void gldlUniformMatrix3x2fv ( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glUniformMatrix3x2fv( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glUniformMatrix3x2fv", 458, file, line );
    gldlUniformMatrix3x2fv_impl( location, count, transpose, value );
}

void gldlUniformMatrix2x4fv ( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glUniformMatrix2x4fv( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glUniformMatrix2x4fv", 454, file, line );
    gldlUniformMatrix2x4fv_impl( location, count, transpose, value );
}

void gldlUniformMatrix4x2fv ( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glUniformMatrix4x2fv( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glUniformMatrix4x2fv", 464, file, line );
    gldlUniformMatrix4x2fv_impl( location, count, transpose, value );
}

void gldlUniformMatrix3x4fv ( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glUniformMatrix3x4fv( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glUniformMatrix3x4fv", 460, file, line );
    gldlUniformMatrix3x4fv_impl( location, count, transpose, value );
}

void gldlUniformMatrix4x3fv ( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glUniformMatrix4x3fv( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glUniformMatrix4x3fv", 466, file, line );
    gldlUniformMatrix4x3fv_impl( location, count, transpose, value );
}

void gldlColorMaski ( GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glColorMaski( %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3,  arg4 );

    DebugTest( "glColorMaski", 50, file, line );
    gldlColorMaski_impl( index, r, g, b, a );
}

void gldlGetBooleani_v ( GLenum target, GLuint index, GLboolean *data, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetBooleani_v( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glGetBooleani_v", 159, file, line );
    gldlGetBooleani_v_impl( target, index, data );
}

void gldlGetIntegeri_v ( GLenum target, GLuint index, GLint *data, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetIntegeri_v( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glGetIntegeri_v", 178, file, line );
    gldlGetIntegeri_v_impl( target, index, data );
}

void gldlEnablei ( GLenum target, GLuint index, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glEnablei( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glEnablei", 121, file, line );
    gldlEnablei_impl( target, index );
}

void gldlDisablei ( GLenum target, GLuint index, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glDisablei( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glDisablei", 99, file, line );
    gldlDisablei_impl( target, index );
}

GLboolean gldlIsEnabledi ( GLenum target, GLuint index, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glIsEnabledi( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glIsEnabledi", 255, file, line );
    return gldlIsEnabledi_impl( target, index );
}

void gldlBeginTransformFeedback ( GLenum primitiveMode, const char *arg0, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glBeginTransformFeedback( %s );\n", file, line,  arg0 );

    DebugTest( "glBeginTransformFeedback", 6, file, line );
    gldlBeginTransformFeedback_impl( primitiveMode );
}

void gldlEndTransformFeedback ( const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glEndTransformFeedback();\n", file, line );

    DebugTest( "glEndTransformFeedback", 125, file, line );
    gldlEndTransformFeedback_impl(  );
}

void gldlBindBufferRange ( GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glBindBufferRange( %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3,  arg4 );

    DebugTest( "glBindBufferRange", 10, file, line );
    gldlBindBufferRange_impl( target, index, buffer, offset, size );
}

void gldlBindBufferBase ( GLenum target, GLuint index, GLuint buffer, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glBindBufferBase( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glBindBufferBase", 9, file, line );
    gldlBindBufferBase_impl( target, index, buffer );
}

void gldlTransformFeedbackVaryings ( GLuint program, GLsizei count, const GLchar* *varyings, GLenum bufferMode, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glTransformFeedbackVaryings( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glTransformFeedbackVaryings", 415, file, line );
    gldlTransformFeedbackVaryings_impl( program, count, varyings, bufferMode );
}

void gldlGetTransformFeedbackVarying ( GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *arg6, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetTransformFeedbackVarying( %s, %s, %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3, arg4, arg5,  arg6 );

    DebugTest( "glGetTransformFeedbackVarying", 218, file, line );
    gldlGetTransformFeedbackVarying_impl( program, index, bufSize, length, size, type, name );
}

void gldlClampColor ( GLenum target, GLenum clamp, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glClampColor( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glClampColor", 38, file, line );
    gldlClampColor_impl( target, clamp );
}

void gldlBeginConditionalRender ( GLuint id, GLenum mode, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glBeginConditionalRender( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glBeginConditionalRender", 3, file, line );
    gldlBeginConditionalRender_impl( id, mode );
}

void gldlEndConditionalRender ( const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glEndConditionalRender();\n", file, line );

    DebugTest( "glEndConditionalRender", 122, file, line );
    gldlEndConditionalRender_impl(  );
}

void gldlVertexAttribIPointer ( GLuint index, GLint size, GLenum type, GLsizei stride, const GLvoid *pointer, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttribIPointer( %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3,  arg4 );

    DebugTest( "glVertexAttribIPointer", 530, file, line );
    gldlVertexAttribIPointer_impl( index, size, type, stride, pointer );
}

void gldlGetVertexAttribIiv ( GLuint index, GLenum pname, GLint *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetVertexAttribIiv( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glGetVertexAttribIiv", 227, file, line );
    gldlGetVertexAttribIiv_impl( index, pname, params );
}

void gldlGetVertexAttribIuiv ( GLuint index, GLenum pname, GLuint *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetVertexAttribIuiv( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glGetVertexAttribIuiv", 228, file, line );
    gldlGetVertexAttribIuiv_impl( index, pname, params );
}

void gldlVertexAttribI1i ( GLuint index, GLint x, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttribI1i( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glVertexAttribI1i", 510, file, line );
    gldlVertexAttribI1i_impl( index, x );
}

void gldlVertexAttribI2i ( GLuint index, GLint x, GLint y, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttribI2i( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glVertexAttribI2i", 514, file, line );
    gldlVertexAttribI2i_impl( index, x, y );
}

void gldlVertexAttribI3i ( GLuint index, GLint x, GLint y, GLint z, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttribI3i( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glVertexAttribI3i", 518, file, line );
    gldlVertexAttribI3i_impl( index, x, y, z );
}

void gldlVertexAttribI4i ( GLuint index, GLint x, GLint y, GLint z, GLint w, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttribI4i( %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3,  arg4 );

    DebugTest( "glVertexAttribI4i", 523, file, line );
    gldlVertexAttribI4i_impl( index, x, y, z, w );
}

void gldlVertexAttribI1ui ( GLuint index, GLuint x, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttribI1ui( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glVertexAttribI1ui", 512, file, line );
    gldlVertexAttribI1ui_impl( index, x );
}

void gldlVertexAttribI2ui ( GLuint index, GLuint x, GLuint y, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttribI2ui( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glVertexAttribI2ui", 516, file, line );
    gldlVertexAttribI2ui_impl( index, x, y );
}

void gldlVertexAttribI3ui ( GLuint index, GLuint x, GLuint y, GLuint z, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttribI3ui( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glVertexAttribI3ui", 520, file, line );
    gldlVertexAttribI3ui_impl( index, x, y, z );
}

void gldlVertexAttribI4ui ( GLuint index, GLuint x, GLuint y, GLuint z, GLuint w, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttribI4ui( %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3,  arg4 );

    DebugTest( "glVertexAttribI4ui", 527, file, line );
    gldlVertexAttribI4ui_impl( index, x, y, z, w );
}

void gldlVertexAttribI1iv ( GLuint index, const GLint *v, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttribI1iv( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glVertexAttribI1iv", 511, file, line );
    gldlVertexAttribI1iv_impl( index, v );
}

void gldlVertexAttribI2iv ( GLuint index, const GLint *v, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttribI2iv( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glVertexAttribI2iv", 515, file, line );
    gldlVertexAttribI2iv_impl( index, v );
}

void gldlVertexAttribI3iv ( GLuint index, const GLint *v, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttribI3iv( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glVertexAttribI3iv", 519, file, line );
    gldlVertexAttribI3iv_impl( index, v );
}

void gldlVertexAttribI4iv ( GLuint index, const GLint *v, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttribI4iv( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glVertexAttribI4iv", 524, file, line );
    gldlVertexAttribI4iv_impl( index, v );
}

void gldlVertexAttribI1uiv ( GLuint index, const GLuint *v, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttribI1uiv( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glVertexAttribI1uiv", 513, file, line );
    gldlVertexAttribI1uiv_impl( index, v );
}

void gldlVertexAttribI2uiv ( GLuint index, const GLuint *v, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttribI2uiv( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glVertexAttribI2uiv", 517, file, line );
    gldlVertexAttribI2uiv_impl( index, v );
}

void gldlVertexAttribI3uiv ( GLuint index, const GLuint *v, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttribI3uiv( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glVertexAttribI3uiv", 521, file, line );
    gldlVertexAttribI3uiv_impl( index, v );
}

void gldlVertexAttribI4uiv ( GLuint index, const GLuint *v, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttribI4uiv( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glVertexAttribI4uiv", 528, file, line );
    gldlVertexAttribI4uiv_impl( index, v );
}

void gldlVertexAttribI4bv ( GLuint index, const GLbyte *v, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttribI4bv( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glVertexAttribI4bv", 522, file, line );
    gldlVertexAttribI4bv_impl( index, v );
}

void gldlVertexAttribI4sv ( GLuint index, const GLshort *v, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttribI4sv( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glVertexAttribI4sv", 525, file, line );
    gldlVertexAttribI4sv_impl( index, v );
}

void gldlVertexAttribI4ubv ( GLuint index, const GLubyte *v, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttribI4ubv( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glVertexAttribI4ubv", 526, file, line );
    gldlVertexAttribI4ubv_impl( index, v );
}

void gldlVertexAttribI4usv ( GLuint index, const GLushort *v, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttribI4usv( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glVertexAttribI4usv", 529, file, line );
    gldlVertexAttribI4usv_impl( index, v );
}

void gldlGetUniformuiv ( GLuint program, GLint location, GLuint *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetUniformuiv( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glGetUniformuiv", 226, file, line );
    gldlGetUniformuiv_impl( program, location, params );
}

void gldlBindFragDataLocation ( GLuint program, GLuint color, const GLchar *name, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glBindFragDataLocation( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glBindFragDataLocation", 11, file, line );
    gldlBindFragDataLocation_impl( program, color, name );
}

GLint gldlGetFragDataLocation ( GLuint program, const GLchar *name, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetFragDataLocation( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glGetFragDataLocation", 173, file, line );
    return gldlGetFragDataLocation_impl( program, name );
}

void gldlUniform1ui ( GLint location, GLuint v0, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glUniform1ui( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glUniform1ui", 422, file, line );
    gldlUniform1ui_impl( location, v0 );
}

void gldlUniform2ui ( GLint location, GLuint v0, GLuint v1, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glUniform2ui( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glUniform2ui", 430, file, line );
    gldlUniform2ui_impl( location, v0, v1 );
}

void gldlUniform3ui ( GLint location, GLuint v0, GLuint v1, GLuint v2, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glUniform3ui( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glUniform3ui", 438, file, line );
    gldlUniform3ui_impl( location, v0, v1, v2 );
}

void gldlUniform4ui ( GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glUniform4ui( %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3,  arg4 );

    DebugTest( "glUniform4ui", 446, file, line );
    gldlUniform4ui_impl( location, v0, v1, v2, v3 );
}

void gldlUniform1uiv ( GLint location, GLsizei count, const GLuint *value, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glUniform1uiv( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glUniform1uiv", 423, file, line );
    gldlUniform1uiv_impl( location, count, value );
}

void gldlUniform2uiv ( GLint location, GLsizei count, const GLuint *value, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glUniform2uiv( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glUniform2uiv", 431, file, line );
    gldlUniform2uiv_impl( location, count, value );
}

void gldlUniform3uiv ( GLint location, GLsizei count, const GLuint *value, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glUniform3uiv( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glUniform3uiv", 439, file, line );
    gldlUniform3uiv_impl( location, count, value );
}

void gldlUniform4uiv ( GLint location, GLsizei count, const GLuint *value, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glUniform4uiv( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glUniform4uiv", 447, file, line );
    gldlUniform4uiv_impl( location, count, value );
}

void gldlTexParameterIiv ( GLenum target, GLenum pname, const GLint *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glTexParameterIiv( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glTexParameterIiv", 400, file, line );
    gldlTexParameterIiv_impl( target, pname, params );
}

void gldlTexParameterIuiv ( GLenum target, GLenum pname, const GLuint *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glTexParameterIuiv( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glTexParameterIuiv", 401, file, line );
    gldlTexParameterIuiv_impl( target, pname, params );
}

void gldlGetTexParameterIiv ( GLenum target, GLenum pname, GLint *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetTexParameterIiv( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glGetTexParameterIiv", 214, file, line );
    gldlGetTexParameterIiv_impl( target, pname, params );
}

void gldlGetTexParameterIuiv ( GLenum target, GLenum pname, GLuint *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetTexParameterIuiv( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glGetTexParameterIuiv", 215, file, line );
    gldlGetTexParameterIuiv_impl( target, pname, params );
}

void gldlClearBufferiv ( GLenum buffer, GLint drawbuffer, const GLint *value, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glClearBufferiv( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glClearBufferiv", 42, file, line );
    gldlClearBufferiv_impl( buffer, drawbuffer, value );
}

void gldlClearBufferuiv ( GLenum buffer, GLint drawbuffer, const GLuint *value, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glClearBufferuiv( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glClearBufferuiv", 43, file, line );
    gldlClearBufferuiv_impl( buffer, drawbuffer, value );
}

void gldlClearBufferfv ( GLenum buffer, GLint drawbuffer, const GLfloat *value, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glClearBufferfv( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glClearBufferfv", 41, file, line );
    gldlClearBufferfv_impl( buffer, drawbuffer, value );
}

void gldlClearBufferfi ( GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glClearBufferfi( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glClearBufferfi", 40, file, line );
    gldlClearBufferfi_impl( buffer, drawbuffer, depth, stencil );
}

const GLubyte * gldlGetStringi ( GLenum name, GLuint index, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetStringi( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glGetStringi", 207, file, line );
    return gldlGetStringi_impl( name, index );
}

void gldlDrawArraysInstanced ( GLenum mode, GLint first, GLsizei count, GLsizei primcount, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glDrawArraysInstanced( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glDrawArraysInstanced", 102, file, line );
    gldlDrawArraysInstanced_impl( mode, first, count, primcount );
}

void gldlDrawElementsInstanced ( GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, GLsizei primcount, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glDrawElementsInstanced( %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3,  arg4 );

    DebugTest( "glDrawElementsInstanced", 109, file, line );
    gldlDrawElementsInstanced_impl( mode, count, type, indices, primcount );
}

void gldlTexBuffer ( GLenum target, GLenum internalformat, GLuint buffer, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glTexBuffer( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glTexBuffer", 386, file, line );
    gldlTexBuffer_impl( target, internalformat, buffer );
}

void gldlPrimitiveRestartIndex ( GLuint index, const char *arg0, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glPrimitiveRestartIndex( %s );\n", file, line,  arg0 );

    DebugTest( "glPrimitiveRestartIndex", 302, file, line );
    gldlPrimitiveRestartIndex_impl( index );
}

void gldlGetInteger64i_v ( GLenum target, GLuint index, GLint64 *data, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetInteger64i_v( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glGetInteger64i_v", 176, file, line );
    gldlGetInteger64i_v_impl( target, index, data );
}

void gldlGetBufferParameteri64v ( GLenum target, GLenum pname, GLint64 *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetBufferParameteri64v( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glGetBufferParameteri64v", 161, file, line );
    gldlGetBufferParameteri64v_impl( target, pname, params );
}

void gldlFramebufferTexture ( GLenum target, GLenum attachment, GLuint texture, GLint level, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glFramebufferTexture( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glFramebufferTexture", 131, file, line );
    gldlFramebufferTexture_impl( target, attachment, texture, level );
}

void gldlVertexAttribDivisor ( GLuint index, GLuint divisor, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttribDivisor( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glVertexAttribDivisor", 509, file, line );
    gldlVertexAttribDivisor_impl( index, divisor );
}

void gldlMinSampleShading ( GLclampf value, const char *arg0, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glMinSampleShading( %s );\n", file, line,  arg0 );

    DebugTest( "glMinSampleShading", 274, file, line );
    gldlMinSampleShading_impl( value );
}

void gldlBlendEquationi ( GLuint buf, GLenum mode, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glBlendEquationi( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glBlendEquationi", 26, file, line );
    gldlBlendEquationi_impl( buf, mode );
}

void gldlBlendEquationSeparatei ( GLuint buf, GLenum modeRGB, GLenum modeAlpha, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glBlendEquationSeparatei( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glBlendEquationSeparatei", 24, file, line );
    gldlBlendEquationSeparatei_impl( buf, modeRGB, modeAlpha );
}

void gldlBlendFunci ( GLuint buf, GLenum src, GLenum dst, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glBlendFunci( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glBlendFunci", 32, file, line );
    gldlBlendFunci_impl( buf, src, dst );
}

void gldlBlendFuncSeparatei ( GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glBlendFuncSeparatei( %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3,  arg4 );

    DebugTest( "glBlendFuncSeparatei", 30, file, line );
    gldlBlendFuncSeparatei_impl( buf, srcRGB, dstRGB, srcAlpha, dstAlpha );
}

GLboolean gldlIsRenderbuffer ( GLuint renderbuffer, const char *arg0, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glIsRenderbuffer( %s );\n", file, line,  arg0 );

    DebugTest( "glIsRenderbuffer", 261, file, line );
    return gldlIsRenderbuffer_impl( renderbuffer );
}

void gldlBindRenderbuffer ( GLenum target, GLuint renderbuffer, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glBindRenderbuffer( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glBindRenderbuffer", 16, file, line );
    gldlBindRenderbuffer_impl( target, renderbuffer );
}

void gldlDeleteRenderbuffers ( GLsizei n, const GLuint *renderbuffers, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glDeleteRenderbuffers( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glDeleteRenderbuffers", 83, file, line );
    gldlDeleteRenderbuffers_impl( n, renderbuffers );
}

void gldlGenRenderbuffers ( GLsizei n, GLuint *renderbuffers, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGenRenderbuffers( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glGenRenderbuffers", 141, file, line );
    gldlGenRenderbuffers_impl( n, renderbuffers );
}

void gldlRenderbufferStorage ( GLenum target, GLenum internalformat, GLsizei width, GLsizei height, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glRenderbufferStorage( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glRenderbufferStorage", 361, file, line );
    gldlRenderbufferStorage_impl( target, internalformat, width, height );
}

void gldlGetRenderbufferParameteriv ( GLenum target, GLenum pname, GLint *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetRenderbufferParameteriv( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glGetRenderbufferParameteriv", 197, file, line );
    gldlGetRenderbufferParameteriv_impl( target, pname, params );
}

GLboolean gldlIsFramebuffer ( GLuint framebuffer, const char *arg0, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glIsFramebuffer( %s );\n", file, line,  arg0 );

    DebugTest( "glIsFramebuffer", 256, file, line );
    return gldlIsFramebuffer_impl( framebuffer );
}

void gldlBindFramebuffer ( GLenum target, GLuint framebuffer, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glBindFramebuffer( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glBindFramebuffer", 13, file, line );
    gldlBindFramebuffer_impl( target, framebuffer );
}

void gldlDeleteFramebuffers ( GLsizei n, const GLuint *framebuffers, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glDeleteFramebuffers( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glDeleteFramebuffers", 78, file, line );
    gldlDeleteFramebuffers_impl( n, framebuffers );
}

void gldlGenFramebuffers ( GLsizei n, GLuint *framebuffers, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGenFramebuffers( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glGenFramebuffers", 138, file, line );
    gldlGenFramebuffers_impl( n, framebuffers );
}

GLenum gldlCheckFramebufferStatus ( GLenum target, const char *arg0, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glCheckFramebufferStatus( %s );\n", file, line,  arg0 );

    DebugTest( "glCheckFramebufferStatus", 37, file, line );
    return gldlCheckFramebufferStatus_impl( target );
}

void gldlFramebufferTexture1D ( GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glFramebufferTexture1D( %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3,  arg4 );

    DebugTest( "glFramebufferTexture1D", 132, file, line );
    gldlFramebufferTexture1D_impl( target, attachment, textarget, texture, level );
}

void gldlFramebufferTexture2D ( GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glFramebufferTexture2D( %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3,  arg4 );

    DebugTest( "glFramebufferTexture2D", 133, file, line );
    gldlFramebufferTexture2D_impl( target, attachment, textarget, texture, level );
}

void gldlFramebufferTexture3D ( GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glFramebufferTexture3D( %s, %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3, arg4,  arg5 );

    DebugTest( "glFramebufferTexture3D", 134, file, line );
    gldlFramebufferTexture3D_impl( target, attachment, textarget, texture, level, zoffset );
}

void gldlFramebufferRenderbuffer ( GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glFramebufferRenderbuffer( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glFramebufferRenderbuffer", 130, file, line );
    gldlFramebufferRenderbuffer_impl( target, attachment, renderbuffertarget, renderbuffer );
}

void gldlGetFramebufferAttachmentParameteriv ( GLenum target, GLenum attachment, GLenum pname, GLint *params, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetFramebufferAttachmentParameteriv( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glGetFramebufferAttachmentParameteriv", 174, file, line );
    gldlGetFramebufferAttachmentParameteriv_impl( target, attachment, pname, params );
}

void gldlGenerateMipmap ( GLenum target, const char *arg0, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGenerateMipmap( %s );\n", file, line,  arg0 );

    DebugTest( "glGenerateMipmap", 146, file, line );
    gldlGenerateMipmap_impl( target );
}

void gldlBlitFramebuffer ( GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *arg6, const char *arg7, const char *arg8, const char *arg9, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glBlitFramebuffer( %s, %s, %s, %s, %s, %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8,  arg9 );

    DebugTest( "glBlitFramebuffer", 34, file, line );
    gldlBlitFramebuffer_impl( srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter );
}

void gldlRenderbufferStorageMultisample ( GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glRenderbufferStorageMultisample( %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3,  arg4 );

    DebugTest( "glRenderbufferStorageMultisample", 362, file, line );
    gldlRenderbufferStorageMultisample_impl( target, samples, internalformat, width, height );
}

void gldlFramebufferTextureLayer ( GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glFramebufferTextureLayer( %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3,  arg4 );

    DebugTest( "glFramebufferTextureLayer", 135, file, line );
    gldlFramebufferTextureLayer_impl( target, attachment, texture, level, layer );
}

GLvoid* gldlMapBufferRange ( GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glMapBufferRange( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glMapBufferRange", 272, file, line );
    return gldlMapBufferRange_impl( target, offset, length, access );
}

void gldlFlushMappedBufferRange ( GLenum target, GLintptr offset, GLsizeiptr length, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glFlushMappedBufferRange( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glFlushMappedBufferRange", 129, file, line );
    gldlFlushMappedBufferRange_impl( target, offset, length );
}

void gldlBindVertexArray ( GLuint array, const char *arg0, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glBindVertexArray( %s );\n", file, line,  arg0 );

    DebugTest( "glBindVertexArray", 20, file, line );
    gldlBindVertexArray_impl( array );
}

void gldlDeleteVertexArrays ( GLsizei n, const GLuint *arrays, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glDeleteVertexArrays( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glDeleteVertexArrays", 89, file, line );
    gldlDeleteVertexArrays_impl( n, arrays );
}

void gldlGenVertexArrays ( GLsizei n, GLuint *arrays, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGenVertexArrays( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glGenVertexArrays", 145, file, line );
    gldlGenVertexArrays_impl( n, arrays );
}

GLboolean gldlIsVertexArray ( GLuint array, const char *arg0, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glIsVertexArray( %s );\n", file, line,  arg0 );

    DebugTest( "glIsVertexArray", 267, file, line );
    return gldlIsVertexArray_impl( array );
}

void gldlGetUniformIndices ( GLuint program, GLsizei uniformCount, const GLchar* *uniformNames, GLuint *uniformIndices, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetUniformIndices( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glGetUniformIndices", 220, file, line );
    gldlGetUniformIndices_impl( program, uniformCount, uniformNames, uniformIndices );
}

void gldlGetActiveUniformsiv ( GLuint program, GLsizei uniformCount, const GLuint *uniformIndices, GLenum pname, GLint *params, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetActiveUniformsiv( %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3,  arg4 );

    DebugTest( "glGetActiveUniformsiv", 156, file, line );
    gldlGetActiveUniformsiv_impl( program, uniformCount, uniformIndices, pname, params );
}

void gldlGetActiveUniformName ( GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformName, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetActiveUniformName( %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3,  arg4 );

    DebugTest( "glGetActiveUniformName", 155, file, line );
    gldlGetActiveUniformName_impl( program, uniformIndex, bufSize, length, uniformName );
}

GLuint gldlGetUniformBlockIndex ( GLuint program, const GLchar *uniformBlockName, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetUniformBlockIndex( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glGetUniformBlockIndex", 219, file, line );
    return gldlGetUniformBlockIndex_impl( program, uniformBlockName );
}

void gldlGetActiveUniformBlockiv ( GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint *params, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetActiveUniformBlockiv( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glGetActiveUniformBlockiv", 154, file, line );
    gldlGetActiveUniformBlockiv_impl( program, uniformBlockIndex, pname, params );
}

void gldlGetActiveUniformBlockName ( GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformBlockName, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetActiveUniformBlockName( %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3,  arg4 );

    DebugTest( "glGetActiveUniformBlockName", 153, file, line );
    gldlGetActiveUniformBlockName_impl( program, uniformBlockIndex, bufSize, length, uniformBlockName );
}

void gldlUniformBlockBinding ( GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glUniformBlockBinding( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glUniformBlockBinding", 448, file, line );
    gldlUniformBlockBinding_impl( program, uniformBlockIndex, uniformBlockBinding );
}

void gldlCopyBufferSubData ( GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glCopyBufferSubData( %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3,  arg4 );

    DebugTest( "glCopyBufferSubData", 63, file, line );
    gldlCopyBufferSubData_impl( readTarget, writeTarget, readOffset, writeOffset, size );
}

void gldlDrawElementsBaseVertex ( GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, GLint basevertex, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glDrawElementsBaseVertex( %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3,  arg4 );

    DebugTest( "glDrawElementsBaseVertex", 107, file, line );
    gldlDrawElementsBaseVertex_impl( mode, count, type, indices, basevertex );
}

void gldlDrawRangeElementsBaseVertex ( GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid *indices, GLint basevertex, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *arg6, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glDrawRangeElementsBaseVertex( %s, %s, %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3, arg4, arg5,  arg6 );

    DebugTest( "glDrawRangeElementsBaseVertex", 114, file, line );
    gldlDrawRangeElementsBaseVertex_impl( mode, start, end, count, type, indices, basevertex );
}

void gldlDrawElementsInstancedBaseVertex ( GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, GLsizei primcount, GLint basevertex, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glDrawElementsInstancedBaseVertex( %s, %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3, arg4,  arg5 );

    DebugTest( "glDrawElementsInstancedBaseVertex", 111, file, line );
    gldlDrawElementsInstancedBaseVertex_impl( mode, count, type, indices, primcount, basevertex );
}

void gldlMultiDrawElementsBaseVertex ( GLenum mode, const GLsizei *count, GLenum type, const GLvoid* *indices, GLsizei primcount, const GLint *basevertex, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glMultiDrawElementsBaseVertex( %s, %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3, arg4,  arg5 );

    DebugTest( "glMultiDrawElementsBaseVertex", 278, file, line );
    gldlMultiDrawElementsBaseVertex_impl( mode, count, type, indices, primcount, basevertex );
}

void gldlProvokingVertex ( GLenum mode, const char *arg0, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glProvokingVertex( %s );\n", file, line,  arg0 );

    DebugTest( "glProvokingVertex", 355, file, line );
    gldlProvokingVertex_impl( mode );
}

GLsync gldlFenceSync ( GLenum condition, GLbitfield flags, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glFenceSync( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glFenceSync", 126, file, line );
    return gldlFenceSync_impl( condition, flags );
}

GLboolean gldlIsSync ( GLsync sync, const char *arg0, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glIsSync( %s );\n", file, line,  arg0 );

    DebugTest( "glIsSync", 264, file, line );
    return gldlIsSync_impl( sync );
}

void gldlDeleteSync ( GLsync sync, const char *arg0, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glDeleteSync( %s );\n", file, line,  arg0 );

    DebugTest( "glDeleteSync", 86, file, line );
    gldlDeleteSync_impl( sync );
}

GLenum gldlClientWaitSync ( GLsync sync, GLbitfield flags, GLuint64 timeout, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glClientWaitSync( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glClientWaitSync", 48, file, line );
    return gldlClientWaitSync_impl( sync, flags, timeout );
}

void gldlWaitSync ( GLsync sync, GLbitfield flags, GLuint64 timeout, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glWaitSync( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glWaitSync", 559, file, line );
    gldlWaitSync_impl( sync, flags, timeout );
}

void gldlGetInteger64v ( GLenum pname, GLint64 *params, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetInteger64v( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glGetInteger64v", 177, file, line );
    gldlGetInteger64v_impl( pname, params );
}

void gldlGetSynciv ( GLsync sync, GLenum pname, GLsizei bufSize, GLsizei *length, GLint *values, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetSynciv( %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3,  arg4 );

    DebugTest( "glGetSynciv", 210, file, line );
    gldlGetSynciv_impl( sync, pname, bufSize, length, values );
}

void gldlTexImage2DMultisample ( GLenum target, GLsizei samples, GLint internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glTexImage2DMultisample( %s, %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3, arg4,  arg5 );

    DebugTest( "glTexImage2DMultisample", 397, file, line );
    gldlTexImage2DMultisample_impl( target, samples, internalformat, width, height, fixedsamplelocations );
}

void gldlTexImage3DMultisample ( GLenum target, GLsizei samples, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *arg6, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glTexImage3DMultisample( %s, %s, %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3, arg4, arg5,  arg6 );

    DebugTest( "glTexImage3DMultisample", 399, file, line );
    gldlTexImage3DMultisample_impl( target, samples, internalformat, width, height, depth, fixedsamplelocations );
}

void gldlGetMultisamplefv ( GLenum pname, GLuint index, GLfloat *val, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetMultisamplefv( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glGetMultisamplefv", 181, file, line );
    gldlGetMultisamplefv_impl( pname, index, val );
}

void gldlSampleMaski ( GLuint index, GLbitfield mask, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glSampleMaski( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glSampleMaski", 365, file, line );
    gldlSampleMaski_impl( index, mask );
}

void gldlBlendEquationiARB ( GLuint buf, GLenum mode, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glBlendEquationiARB( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glBlendEquationiARB", 27, file, line );
    gldlBlendEquationiARB_impl( buf, mode );
}

void gldlBlendEquationSeparateiARB ( GLuint buf, GLenum modeRGB, GLenum modeAlpha, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glBlendEquationSeparateiARB( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glBlendEquationSeparateiARB", 25, file, line );
    gldlBlendEquationSeparateiARB_impl( buf, modeRGB, modeAlpha );
}

void gldlBlendFunciARB ( GLuint buf, GLenum src, GLenum dst, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glBlendFunciARB( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glBlendFunciARB", 33, file, line );
    gldlBlendFunciARB_impl( buf, src, dst );
}

void gldlBlendFuncSeparateiARB ( GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glBlendFuncSeparateiARB( %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3,  arg4 );

    DebugTest( "glBlendFuncSeparateiARB", 31, file, line );
    gldlBlendFuncSeparateiARB_impl( buf, srcRGB, dstRGB, srcAlpha, dstAlpha );
}

void gldlMinSampleShadingARB ( GLclampf value, const char *arg0, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glMinSampleShadingARB( %s );\n", file, line,  arg0 );

    DebugTest( "glMinSampleShadingARB", 275, file, line );
    gldlMinSampleShadingARB_impl( value );
}

void gldlNamedStringARB ( GLenum type, GLint namelen, const GLchar *name, GLint stringlen, const GLchar *string, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glNamedStringARB( %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3,  arg4 );

    DebugTest( "glNamedStringARB", 287, file, line );
    gldlNamedStringARB_impl( type, namelen, name, stringlen, string );
}

void gldlDeleteNamedStringARB ( GLint namelen, const GLchar *name, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glDeleteNamedStringARB( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glDeleteNamedStringARB", 79, file, line );
    gldlDeleteNamedStringARB_impl( namelen, name );
}

void gldlCompileShaderIncludeARB ( GLuint shader, GLsizei count, const GLchar* *path, const GLint *length, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glCompileShaderIncludeARB( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glCompileShaderIncludeARB", 56, file, line );
    gldlCompileShaderIncludeARB_impl( shader, count, path, length );
}

GLboolean gldlIsNamedStringARB ( GLint namelen, const GLchar *name, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glIsNamedStringARB( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glIsNamedStringARB", 257, file, line );
    return gldlIsNamedStringARB_impl( namelen, name );
}

void gldlGetNamedStringARB ( GLint namelen, const GLchar *name, GLsizei bufSize, GLint *stringlen, GLchar *string, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetNamedStringARB( %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3,  arg4 );

    DebugTest( "glGetNamedStringARB", 182, file, line );
    gldlGetNamedStringARB_impl( namelen, name, bufSize, stringlen, string );
}

void gldlGetNamedStringivARB ( GLint namelen, const GLchar *name, GLenum pname, GLint *params, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetNamedStringivARB( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glGetNamedStringivARB", 183, file, line );
    gldlGetNamedStringivARB_impl( namelen, name, pname, params );
}

void gldlBindFragDataLocationIndexed ( GLuint program, GLuint colorNumber, GLuint index, const GLchar *name, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glBindFragDataLocationIndexed( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glBindFragDataLocationIndexed", 12, file, line );
    gldlBindFragDataLocationIndexed_impl( program, colorNumber, index, name );
}

GLint gldlGetFragDataIndex ( GLuint program, const GLchar *name, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetFragDataIndex( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glGetFragDataIndex", 172, file, line );
    return gldlGetFragDataIndex_impl( program, name );
}

void gldlGenSamplers ( GLsizei count, GLuint *samplers, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGenSamplers( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glGenSamplers", 142, file, line );
    gldlGenSamplers_impl( count, samplers );
}

void gldlDeleteSamplers ( GLsizei count, const GLuint *samplers, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glDeleteSamplers( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glDeleteSamplers", 84, file, line );
    gldlDeleteSamplers_impl( count, samplers );
}

GLboolean gldlIsSampler ( GLuint sampler, const char *arg0, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glIsSampler( %s );\n", file, line,  arg0 );

    DebugTest( "glIsSampler", 262, file, line );
    return gldlIsSampler_impl( sampler );
}

void gldlBindSampler ( GLuint unit, GLuint sampler, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glBindSampler( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glBindSampler", 17, file, line );
    gldlBindSampler_impl( unit, sampler );
}

void gldlSamplerParameteri ( GLuint sampler, GLenum pname, GLint param, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glSamplerParameteri( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glSamplerParameteri", 370, file, line );
    gldlSamplerParameteri_impl( sampler, pname, param );
}

void gldlSamplerParameteriv ( GLuint sampler, GLenum pname, const GLint *param, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glSamplerParameteriv( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glSamplerParameteriv", 371, file, line );
    gldlSamplerParameteriv_impl( sampler, pname, param );
}

void gldlSamplerParameterf ( GLuint sampler, GLenum pname, GLfloat param, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glSamplerParameterf( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glSamplerParameterf", 368, file, line );
    gldlSamplerParameterf_impl( sampler, pname, param );
}

void gldlSamplerParameterfv ( GLuint sampler, GLenum pname, const GLfloat *param, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glSamplerParameterfv( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glSamplerParameterfv", 369, file, line );
    gldlSamplerParameterfv_impl( sampler, pname, param );
}

void gldlSamplerParameterIiv ( GLuint sampler, GLenum pname, const GLint *param, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glSamplerParameterIiv( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glSamplerParameterIiv", 366, file, line );
    gldlSamplerParameterIiv_impl( sampler, pname, param );
}

void gldlSamplerParameterIuiv ( GLuint sampler, GLenum pname, const GLuint *param, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glSamplerParameterIuiv( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glSamplerParameterIuiv", 367, file, line );
    gldlSamplerParameterIuiv_impl( sampler, pname, param );
}

void gldlGetSamplerParameteriv ( GLuint sampler, GLenum pname, GLint *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetSamplerParameteriv( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glGetSamplerParameteriv", 201, file, line );
    gldlGetSamplerParameteriv_impl( sampler, pname, params );
}

void gldlGetSamplerParameterIiv ( GLuint sampler, GLenum pname, GLint *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetSamplerParameterIiv( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glGetSamplerParameterIiv", 198, file, line );
    gldlGetSamplerParameterIiv_impl( sampler, pname, params );
}

void gldlGetSamplerParameterfv ( GLuint sampler, GLenum pname, GLfloat *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetSamplerParameterfv( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glGetSamplerParameterfv", 200, file, line );
    gldlGetSamplerParameterfv_impl( sampler, pname, params );
}

void gldlGetSamplerParameterIuiv ( GLuint sampler, GLenum pname, GLuint *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetSamplerParameterIuiv( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glGetSamplerParameterIuiv", 199, file, line );
    gldlGetSamplerParameterIuiv_impl( sampler, pname, params );
}

void gldlQueryCounter ( GLuint id, GLenum target, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glQueryCounter( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glQueryCounter", 356, file, line );
    gldlQueryCounter_impl( id, target );
}

void gldlGetQueryObjecti64v ( GLuint id, GLenum pname, GLint64 *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetQueryObjecti64v( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glGetQueryObjecti64v", 192, file, line );
    gldlGetQueryObjecti64v_impl( id, pname, params );
}

void gldlGetQueryObjectui64v ( GLuint id, GLenum pname, GLuint64 *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetQueryObjectui64v( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glGetQueryObjectui64v", 194, file, line );
    gldlGetQueryObjectui64v_impl( id, pname, params );
}

void gldlVertexP2ui ( GLenum type, GLuint value, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexP2ui( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glVertexP2ui", 549, file, line );
    gldlVertexP2ui_impl( type, value );
}

void gldlVertexP2uiv ( GLenum type, const GLuint *value, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexP2uiv( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glVertexP2uiv", 550, file, line );
    gldlVertexP2uiv_impl( type, value );
}

void gldlVertexP3ui ( GLenum type, GLuint value, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexP3ui( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glVertexP3ui", 551, file, line );
    gldlVertexP3ui_impl( type, value );
}

void gldlVertexP3uiv ( GLenum type, const GLuint *value, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexP3uiv( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glVertexP3uiv", 552, file, line );
    gldlVertexP3uiv_impl( type, value );
}

void gldlVertexP4ui ( GLenum type, GLuint value, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexP4ui( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glVertexP4ui", 553, file, line );
    gldlVertexP4ui_impl( type, value );
}

void gldlVertexP4uiv ( GLenum type, const GLuint *value, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexP4uiv( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glVertexP4uiv", 554, file, line );
    gldlVertexP4uiv_impl( type, value );
}

void gldlTexCoordP1ui ( GLenum type, GLuint coords, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glTexCoordP1ui( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glTexCoordP1ui", 387, file, line );
    gldlTexCoordP1ui_impl( type, coords );
}

void gldlTexCoordP1uiv ( GLenum type, const GLuint *coords, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glTexCoordP1uiv( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glTexCoordP1uiv", 388, file, line );
    gldlTexCoordP1uiv_impl( type, coords );
}

void gldlTexCoordP2ui ( GLenum type, GLuint coords, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glTexCoordP2ui( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glTexCoordP2ui", 389, file, line );
    gldlTexCoordP2ui_impl( type, coords );
}

void gldlTexCoordP2uiv ( GLenum type, const GLuint *coords, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glTexCoordP2uiv( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glTexCoordP2uiv", 390, file, line );
    gldlTexCoordP2uiv_impl( type, coords );
}

void gldlTexCoordP3ui ( GLenum type, GLuint coords, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glTexCoordP3ui( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glTexCoordP3ui", 391, file, line );
    gldlTexCoordP3ui_impl( type, coords );
}

void gldlTexCoordP3uiv ( GLenum type, const GLuint *coords, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glTexCoordP3uiv( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glTexCoordP3uiv", 392, file, line );
    gldlTexCoordP3uiv_impl( type, coords );
}

void gldlTexCoordP4ui ( GLenum type, GLuint coords, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glTexCoordP4ui( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glTexCoordP4ui", 393, file, line );
    gldlTexCoordP4ui_impl( type, coords );
}

void gldlTexCoordP4uiv ( GLenum type, const GLuint *coords, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glTexCoordP4uiv( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glTexCoordP4uiv", 394, file, line );
    gldlTexCoordP4uiv_impl( type, coords );
}

void gldlMultiTexCoordP1ui ( GLenum texture, GLenum type, GLuint coords, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glMultiTexCoordP1ui( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glMultiTexCoordP1ui", 279, file, line );
    gldlMultiTexCoordP1ui_impl( texture, type, coords );
}

void gldlMultiTexCoordP1uiv ( GLenum texture, GLenum type, const GLuint *coords, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glMultiTexCoordP1uiv( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glMultiTexCoordP1uiv", 280, file, line );
    gldlMultiTexCoordP1uiv_impl( texture, type, coords );
}

void gldlMultiTexCoordP2ui ( GLenum texture, GLenum type, GLuint coords, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glMultiTexCoordP2ui( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glMultiTexCoordP2ui", 281, file, line );
    gldlMultiTexCoordP2ui_impl( texture, type, coords );
}

void gldlMultiTexCoordP2uiv ( GLenum texture, GLenum type, const GLuint *coords, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glMultiTexCoordP2uiv( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glMultiTexCoordP2uiv", 282, file, line );
    gldlMultiTexCoordP2uiv_impl( texture, type, coords );
}

void gldlMultiTexCoordP3ui ( GLenum texture, GLenum type, GLuint coords, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glMultiTexCoordP3ui( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glMultiTexCoordP3ui", 283, file, line );
    gldlMultiTexCoordP3ui_impl( texture, type, coords );
}

void gldlMultiTexCoordP3uiv ( GLenum texture, GLenum type, const GLuint *coords, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glMultiTexCoordP3uiv( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glMultiTexCoordP3uiv", 284, file, line );
    gldlMultiTexCoordP3uiv_impl( texture, type, coords );
}

void gldlMultiTexCoordP4ui ( GLenum texture, GLenum type, GLuint coords, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glMultiTexCoordP4ui( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glMultiTexCoordP4ui", 285, file, line );
    gldlMultiTexCoordP4ui_impl( texture, type, coords );
}

void gldlMultiTexCoordP4uiv ( GLenum texture, GLenum type, const GLuint *coords, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glMultiTexCoordP4uiv( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glMultiTexCoordP4uiv", 286, file, line );
    gldlMultiTexCoordP4uiv_impl( texture, type, coords );
}

void gldlNormalP3ui ( GLenum type, GLuint coords, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glNormalP3ui( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glNormalP3ui", 288, file, line );
    gldlNormalP3ui_impl( type, coords );
}

void gldlNormalP3uiv ( GLenum type, const GLuint *coords, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glNormalP3uiv( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glNormalP3uiv", 289, file, line );
    gldlNormalP3uiv_impl( type, coords );
}

void gldlColorP3ui ( GLenum type, GLuint color, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glColorP3ui( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glColorP3ui", 51, file, line );
    gldlColorP3ui_impl( type, color );
}

void gldlColorP3uiv ( GLenum type, const GLuint *color, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glColorP3uiv( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glColorP3uiv", 52, file, line );
    gldlColorP3uiv_impl( type, color );
}

void gldlColorP4ui ( GLenum type, GLuint color, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glColorP4ui( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glColorP4ui", 53, file, line );
    gldlColorP4ui_impl( type, color );
}

void gldlColorP4uiv ( GLenum type, const GLuint *color, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glColorP4uiv( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glColorP4uiv", 54, file, line );
    gldlColorP4uiv_impl( type, color );
}

void gldlSecondaryColorP3ui ( GLenum type, GLuint color, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glSecondaryColorP3ui( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glSecondaryColorP3ui", 376, file, line );
    gldlSecondaryColorP3ui_impl( type, color );
}

void gldlSecondaryColorP3uiv ( GLenum type, const GLuint *color, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glSecondaryColorP3uiv( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glSecondaryColorP3uiv", 377, file, line );
    gldlSecondaryColorP3uiv_impl( type, color );
}

void gldlVertexAttribP1ui ( GLuint index, GLenum type, GLboolean normalized, GLuint value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttribP1ui( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glVertexAttribP1ui", 540, file, line );
    gldlVertexAttribP1ui_impl( index, type, normalized, value );
}

void gldlVertexAttribP1uiv ( GLuint index, GLenum type, GLboolean normalized, const GLuint *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttribP1uiv( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glVertexAttribP1uiv", 541, file, line );
    gldlVertexAttribP1uiv_impl( index, type, normalized, value );
}

void gldlVertexAttribP2ui ( GLuint index, GLenum type, GLboolean normalized, GLuint value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttribP2ui( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glVertexAttribP2ui", 542, file, line );
    gldlVertexAttribP2ui_impl( index, type, normalized, value );
}

void gldlVertexAttribP2uiv ( GLuint index, GLenum type, GLboolean normalized, const GLuint *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttribP2uiv( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glVertexAttribP2uiv", 543, file, line );
    gldlVertexAttribP2uiv_impl( index, type, normalized, value );
}

void gldlVertexAttribP3ui ( GLuint index, GLenum type, GLboolean normalized, GLuint value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttribP3ui( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glVertexAttribP3ui", 544, file, line );
    gldlVertexAttribP3ui_impl( index, type, normalized, value );
}

void gldlVertexAttribP3uiv ( GLuint index, GLenum type, GLboolean normalized, const GLuint *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttribP3uiv( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glVertexAttribP3uiv", 545, file, line );
    gldlVertexAttribP3uiv_impl( index, type, normalized, value );
}

void gldlVertexAttribP4ui ( GLuint index, GLenum type, GLboolean normalized, GLuint value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttribP4ui( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glVertexAttribP4ui", 546, file, line );
    gldlVertexAttribP4ui_impl( index, type, normalized, value );
}

void gldlVertexAttribP4uiv ( GLuint index, GLenum type, GLboolean normalized, const GLuint *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttribP4uiv( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glVertexAttribP4uiv", 547, file, line );
    gldlVertexAttribP4uiv_impl( index, type, normalized, value );
}

void gldlDrawArraysIndirect ( GLenum mode, const GLvoid *indirect, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glDrawArraysIndirect( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glDrawArraysIndirect", 101, file, line );
    gldlDrawArraysIndirect_impl( mode, indirect );
}

void gldlDrawElementsIndirect ( GLenum mode, GLenum type, const GLvoid *indirect, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glDrawElementsIndirect( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glDrawElementsIndirect", 108, file, line );
    gldlDrawElementsIndirect_impl( mode, type, indirect );
}

void gldlUniform1d ( GLint location, GLdouble x, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glUniform1d( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glUniform1d", 416, file, line );
    gldlUniform1d_impl( location, x );
}

void gldlUniform2d ( GLint location, GLdouble x, GLdouble y, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glUniform2d( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glUniform2d", 424, file, line );
    gldlUniform2d_impl( location, x, y );
}

void gldlUniform3d ( GLint location, GLdouble x, GLdouble y, GLdouble z, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glUniform3d( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glUniform3d", 432, file, line );
    gldlUniform3d_impl( location, x, y, z );
}

void gldlUniform4d ( GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glUniform4d( %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3,  arg4 );

    DebugTest( "glUniform4d", 440, file, line );
    gldlUniform4d_impl( location, x, y, z, w );
}

void gldlUniform1dv ( GLint location, GLsizei count, const GLdouble *value, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glUniform1dv( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glUniform1dv", 417, file, line );
    gldlUniform1dv_impl( location, count, value );
}

void gldlUniform2dv ( GLint location, GLsizei count, const GLdouble *value, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glUniform2dv( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glUniform2dv", 425, file, line );
    gldlUniform2dv_impl( location, count, value );
}

void gldlUniform3dv ( GLint location, GLsizei count, const GLdouble *value, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glUniform3dv( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glUniform3dv", 433, file, line );
    gldlUniform3dv_impl( location, count, value );
}

void gldlUniform4dv ( GLint location, GLsizei count, const GLdouble *value, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glUniform4dv( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glUniform4dv", 441, file, line );
    gldlUniform4dv_impl( location, count, value );
}

void gldlUniformMatrix2dv ( GLint location, GLsizei count, GLboolean transpose, const GLdouble *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glUniformMatrix2dv( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glUniformMatrix2dv", 449, file, line );
    gldlUniformMatrix2dv_impl( location, count, transpose, value );
}

void gldlUniformMatrix3dv ( GLint location, GLsizei count, GLboolean transpose, const GLdouble *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glUniformMatrix3dv( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glUniformMatrix3dv", 455, file, line );
    gldlUniformMatrix3dv_impl( location, count, transpose, value );
}

void gldlUniformMatrix4dv ( GLint location, GLsizei count, GLboolean transpose, const GLdouble *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glUniformMatrix4dv( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glUniformMatrix4dv", 461, file, line );
    gldlUniformMatrix4dv_impl( location, count, transpose, value );
}

void gldlUniformMatrix2x3dv ( GLint location, GLsizei count, GLboolean transpose, const GLdouble *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glUniformMatrix2x3dv( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glUniformMatrix2x3dv", 451, file, line );
    gldlUniformMatrix2x3dv_impl( location, count, transpose, value );
}

void gldlUniformMatrix2x4dv ( GLint location, GLsizei count, GLboolean transpose, const GLdouble *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glUniformMatrix2x4dv( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glUniformMatrix2x4dv", 453, file, line );
    gldlUniformMatrix2x4dv_impl( location, count, transpose, value );
}

void gldlUniformMatrix3x2dv ( GLint location, GLsizei count, GLboolean transpose, const GLdouble *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glUniformMatrix3x2dv( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glUniformMatrix3x2dv", 457, file, line );
    gldlUniformMatrix3x2dv_impl( location, count, transpose, value );
}

void gldlUniformMatrix3x4dv ( GLint location, GLsizei count, GLboolean transpose, const GLdouble *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glUniformMatrix3x4dv( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glUniformMatrix3x4dv", 459, file, line );
    gldlUniformMatrix3x4dv_impl( location, count, transpose, value );
}

void gldlUniformMatrix4x2dv ( GLint location, GLsizei count, GLboolean transpose, const GLdouble *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glUniformMatrix4x2dv( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glUniformMatrix4x2dv", 463, file, line );
    gldlUniformMatrix4x2dv_impl( location, count, transpose, value );
}

void gldlUniformMatrix4x3dv ( GLint location, GLsizei count, GLboolean transpose, const GLdouble *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glUniformMatrix4x3dv( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glUniformMatrix4x3dv", 465, file, line );
    gldlUniformMatrix4x3dv_impl( location, count, transpose, value );
}

void gldlGetUniformdv ( GLuint program, GLint location, GLdouble *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetUniformdv( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glGetUniformdv", 223, file, line );
    gldlGetUniformdv_impl( program, location, params );
}

GLint gldlGetSubroutineUniformLocation ( GLuint program, GLenum shadertype, const GLchar *name, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetSubroutineUniformLocation( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glGetSubroutineUniformLocation", 209, file, line );
    return gldlGetSubroutineUniformLocation_impl( program, shadertype, name );
}

GLuint gldlGetSubroutineIndex ( GLuint program, GLenum shadertype, const GLchar *name, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetSubroutineIndex( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glGetSubroutineIndex", 208, file, line );
    return gldlGetSubroutineIndex_impl( program, shadertype, name );
}

void gldlGetActiveSubroutineUniformiv ( GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint *values, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetActiveSubroutineUniformiv( %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3,  arg4 );

    DebugTest( "glGetActiveSubroutineUniformiv", 151, file, line );
    gldlGetActiveSubroutineUniformiv_impl( program, shadertype, index, pname, values );
}

void gldlGetActiveSubroutineUniformName ( GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei *length, GLchar *name, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetActiveSubroutineUniformName( %s, %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3, arg4,  arg5 );

    DebugTest( "glGetActiveSubroutineUniformName", 150, file, line );
    gldlGetActiveSubroutineUniformName_impl( program, shadertype, index, bufsize, length, name );
}

void gldlGetActiveSubroutineName ( GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei *length, GLchar *name, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetActiveSubroutineName( %s, %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3, arg4,  arg5 );

    DebugTest( "glGetActiveSubroutineName", 149, file, line );
    gldlGetActiveSubroutineName_impl( program, shadertype, index, bufsize, length, name );
}

void gldlUniformSubroutinesuiv ( GLenum shadertype, GLsizei count, const GLuint *indices, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glUniformSubroutinesuiv( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glUniformSubroutinesuiv", 467, file, line );
    gldlUniformSubroutinesuiv_impl( shadertype, count, indices );
}

void gldlGetUniformSubroutineuiv ( GLenum shadertype, GLint location, GLuint *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetUniformSubroutineuiv( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glGetUniformSubroutineuiv", 222, file, line );
    gldlGetUniformSubroutineuiv_impl( shadertype, location, params );
}

void gldlGetProgramStageiv ( GLuint program, GLenum shadertype, GLenum pname, GLint *values, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetProgramStageiv( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glGetProgramStageiv", 189, file, line );
    gldlGetProgramStageiv_impl( program, shadertype, pname, values );
}

void gldlPatchParameteri ( GLenum pname, GLint value, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glPatchParameteri( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glPatchParameteri", 291, file, line );
    gldlPatchParameteri_impl( pname, value );
}

void gldlPatchParameterfv ( GLenum pname, const GLfloat *values, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glPatchParameterfv( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glPatchParameterfv", 290, file, line );
    gldlPatchParameterfv_impl( pname, values );
}

void gldlBindTransformFeedback ( GLenum target, GLuint id, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glBindTransformFeedback( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glBindTransformFeedback", 19, file, line );
    gldlBindTransformFeedback_impl( target, id );
}

void gldlDeleteTransformFeedbacks ( GLsizei n, const GLuint *ids, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glDeleteTransformFeedbacks( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glDeleteTransformFeedbacks", 88, file, line );
    gldlDeleteTransformFeedbacks_impl( n, ids );
}

void gldlGenTransformFeedbacks ( GLsizei n, GLuint *ids, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGenTransformFeedbacks( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glGenTransformFeedbacks", 144, file, line );
    gldlGenTransformFeedbacks_impl( n, ids );
}

GLboolean gldlIsTransformFeedback ( GLuint id, const char *arg0, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glIsTransformFeedback( %s );\n", file, line,  arg0 );

    DebugTest( "glIsTransformFeedback", 266, file, line );
    return gldlIsTransformFeedback_impl( id );
}

void gldlPauseTransformFeedback ( const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glPauseTransformFeedback();\n", file, line );

    DebugTest( "glPauseTransformFeedback", 292, file, line );
    gldlPauseTransformFeedback_impl(  );
}

void gldlResumeTransformFeedback ( const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glResumeTransformFeedback();\n", file, line );

    DebugTest( "glResumeTransformFeedback", 363, file, line );
    gldlResumeTransformFeedback_impl(  );
}

void gldlDrawTransformFeedback ( GLenum mode, GLuint id, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glDrawTransformFeedback( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glDrawTransformFeedback", 115, file, line );
    gldlDrawTransformFeedback_impl( mode, id );
}

void gldlDrawTransformFeedbackStream ( GLenum mode, GLuint id, GLuint stream, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glDrawTransformFeedbackStream( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glDrawTransformFeedbackStream", 117, file, line );
    gldlDrawTransformFeedbackStream_impl( mode, id, stream );
}

void gldlBeginQueryIndexed ( GLenum target, GLuint index, GLuint id, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glBeginQueryIndexed( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glBeginQueryIndexed", 5, file, line );
    gldlBeginQueryIndexed_impl( target, index, id );
}

void gldlEndQueryIndexed ( GLenum target, GLuint index, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glEndQueryIndexed( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glEndQueryIndexed", 124, file, line );
    gldlEndQueryIndexed_impl( target, index );
}

void gldlGetQueryIndexediv ( GLenum target, GLuint index, GLenum pname, GLint *params, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetQueryIndexediv( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glGetQueryIndexediv", 191, file, line );
    gldlGetQueryIndexediv_impl( target, index, pname, params );
}

void gldlReleaseShaderCompiler ( const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glReleaseShaderCompiler();\n", file, line );

    DebugTest( "glReleaseShaderCompiler", 360, file, line );
    gldlReleaseShaderCompiler_impl(  );
}

void gldlShaderBinary ( GLsizei count, const GLuint *shaders, GLenum binaryformat, const GLvoid *binary, GLsizei length, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glShaderBinary( %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3,  arg4 );

    DebugTest( "glShaderBinary", 378, file, line );
    gldlShaderBinary_impl( count, shaders, binaryformat, binary, length );
}

void gldlGetShaderPrecisionFormat ( GLenum shadertype, GLenum precisiontype, GLint *range, GLint *precision, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetShaderPrecisionFormat( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glGetShaderPrecisionFormat", 203, file, line );
    gldlGetShaderPrecisionFormat_impl( shadertype, precisiontype, range, precision );
}

void gldlDepthRangef ( GLclampf n, GLclampf f, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glDepthRangef( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glDepthRangef", 95, file, line );
    gldlDepthRangef_impl( n, f );
}

void gldlClearDepthf ( GLclampf d, const char *arg0, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glClearDepthf( %s );\n", file, line,  arg0 );

    DebugTest( "glClearDepthf", 46, file, line );
    gldlClearDepthf_impl( d );
}

void gldlGetProgramBinary ( GLuint program, GLsizei bufSize, GLsizei *length, GLenum *binaryFormat, GLvoid *binary, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetProgramBinary( %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3,  arg4 );

    DebugTest( "glGetProgramBinary", 185, file, line );
    gldlGetProgramBinary_impl( program, bufSize, length, binaryFormat, binary );
}

void gldlProgramBinary ( GLuint program, GLenum binaryFormat, const GLvoid *binary, GLsizei length, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glProgramBinary( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glProgramBinary", 303, file, line );
    gldlProgramBinary_impl( program, binaryFormat, binary, length );
}

void gldlProgramParameteri ( GLuint program, GLenum pname, GLint value, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glProgramParameteri( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glProgramParameteri", 304, file, line );
    gldlProgramParameteri_impl( program, pname, value );
}

void gldlUseProgramStages ( GLuint pipeline, GLbitfield stages, GLuint program, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glUseProgramStages( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glUseProgramStages", 470, file, line );
    gldlUseProgramStages_impl( pipeline, stages, program );
}

void gldlActiveShaderProgram ( GLuint pipeline, GLuint program, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glActiveShaderProgram( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glActiveShaderProgram", 0, file, line );
    gldlActiveShaderProgram_impl( pipeline, program );
}

GLuint gldlCreateShaderProgramv ( GLenum type, GLsizei count, const GLchar* *strings, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glCreateShaderProgramv( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glCreateShaderProgramv", 71, file, line );
    return gldlCreateShaderProgramv_impl( type, count, strings );
}

void gldlBindProgramPipeline ( GLuint pipeline, const char *arg0, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glBindProgramPipeline( %s );\n", file, line,  arg0 );

    DebugTest( "glBindProgramPipeline", 15, file, line );
    gldlBindProgramPipeline_impl( pipeline );
}

void gldlDeleteProgramPipelines ( GLsizei n, const GLuint *pipelines, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glDeleteProgramPipelines( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glDeleteProgramPipelines", 81, file, line );
    gldlDeleteProgramPipelines_impl( n, pipelines );
}

void gldlGenProgramPipelines ( GLsizei n, GLuint *pipelines, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGenProgramPipelines( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glGenProgramPipelines", 139, file, line );
    gldlGenProgramPipelines_impl( n, pipelines );
}

GLboolean gldlIsProgramPipeline ( GLuint pipeline, const char *arg0, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glIsProgramPipeline( %s );\n", file, line,  arg0 );

    DebugTest( "glIsProgramPipeline", 259, file, line );
    return gldlIsProgramPipeline_impl( pipeline );
}

void gldlGetProgramPipelineiv ( GLuint pipeline, GLenum pname, GLint *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetProgramPipelineiv( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glGetProgramPipelineiv", 188, file, line );
    gldlGetProgramPipelineiv_impl( pipeline, pname, params );
}

void gldlProgramUniform1i ( GLuint program, GLint location, GLint v0, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glProgramUniform1i( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glProgramUniform1i", 309, file, line );
    gldlProgramUniform1i_impl( program, location, v0 );
}

void gldlProgramUniform1iv ( GLuint program, GLint location, GLsizei count, const GLint *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glProgramUniform1iv( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glProgramUniform1iv", 310, file, line );
    gldlProgramUniform1iv_impl( program, location, count, value );
}

void gldlProgramUniform1f ( GLuint program, GLint location, GLfloat v0, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glProgramUniform1f( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glProgramUniform1f", 307, file, line );
    gldlProgramUniform1f_impl( program, location, v0 );
}

void gldlProgramUniform1fv ( GLuint program, GLint location, GLsizei count, const GLfloat *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glProgramUniform1fv( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glProgramUniform1fv", 308, file, line );
    gldlProgramUniform1fv_impl( program, location, count, value );
}

void gldlProgramUniform1d ( GLuint program, GLint location, GLdouble v0, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glProgramUniform1d( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glProgramUniform1d", 305, file, line );
    gldlProgramUniform1d_impl( program, location, v0 );
}

void gldlProgramUniform1dv ( GLuint program, GLint location, GLsizei count, const GLdouble *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glProgramUniform1dv( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glProgramUniform1dv", 306, file, line );
    gldlProgramUniform1dv_impl( program, location, count, value );
}

void gldlProgramUniform1ui ( GLuint program, GLint location, GLuint v0, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glProgramUniform1ui( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glProgramUniform1ui", 311, file, line );
    gldlProgramUniform1ui_impl( program, location, v0 );
}

void gldlProgramUniform1uiv ( GLuint program, GLint location, GLsizei count, const GLuint *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glProgramUniform1uiv( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glProgramUniform1uiv", 312, file, line );
    gldlProgramUniform1uiv_impl( program, location, count, value );
}

void gldlProgramUniform2i ( GLuint program, GLint location, GLint v0, GLint v1, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glProgramUniform2i( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glProgramUniform2i", 317, file, line );
    gldlProgramUniform2i_impl( program, location, v0, v1 );
}

void gldlProgramUniform2iv ( GLuint program, GLint location, GLsizei count, const GLint *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glProgramUniform2iv( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glProgramUniform2iv", 318, file, line );
    gldlProgramUniform2iv_impl( program, location, count, value );
}

void gldlProgramUniform2f ( GLuint program, GLint location, GLfloat v0, GLfloat v1, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glProgramUniform2f( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glProgramUniform2f", 315, file, line );
    gldlProgramUniform2f_impl( program, location, v0, v1 );
}

void gldlProgramUniform2fv ( GLuint program, GLint location, GLsizei count, const GLfloat *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glProgramUniform2fv( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glProgramUniform2fv", 316, file, line );
    gldlProgramUniform2fv_impl( program, location, count, value );
}

void gldlProgramUniform2d ( GLuint program, GLint location, GLdouble v0, GLdouble v1, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glProgramUniform2d( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glProgramUniform2d", 313, file, line );
    gldlProgramUniform2d_impl( program, location, v0, v1 );
}

void gldlProgramUniform2dv ( GLuint program, GLint location, GLsizei count, const GLdouble *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glProgramUniform2dv( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glProgramUniform2dv", 314, file, line );
    gldlProgramUniform2dv_impl( program, location, count, value );
}

void gldlProgramUniform2ui ( GLuint program, GLint location, GLuint v0, GLuint v1, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glProgramUniform2ui( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glProgramUniform2ui", 319, file, line );
    gldlProgramUniform2ui_impl( program, location, v0, v1 );
}

void gldlProgramUniform2uiv ( GLuint program, GLint location, GLsizei count, const GLuint *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glProgramUniform2uiv( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glProgramUniform2uiv", 320, file, line );
    gldlProgramUniform2uiv_impl( program, location, count, value );
}

void gldlProgramUniform3i ( GLuint program, GLint location, GLint v0, GLint v1, GLint v2, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glProgramUniform3i( %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3,  arg4 );

    DebugTest( "glProgramUniform3i", 325, file, line );
    gldlProgramUniform3i_impl( program, location, v0, v1, v2 );
}

void gldlProgramUniform3iv ( GLuint program, GLint location, GLsizei count, const GLint *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glProgramUniform3iv( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glProgramUniform3iv", 326, file, line );
    gldlProgramUniform3iv_impl( program, location, count, value );
}

void gldlProgramUniform3f ( GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glProgramUniform3f( %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3,  arg4 );

    DebugTest( "glProgramUniform3f", 323, file, line );
    gldlProgramUniform3f_impl( program, location, v0, v1, v2 );
}

void gldlProgramUniform3fv ( GLuint program, GLint location, GLsizei count, const GLfloat *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glProgramUniform3fv( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glProgramUniform3fv", 324, file, line );
    gldlProgramUniform3fv_impl( program, location, count, value );
}

void gldlProgramUniform3d ( GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glProgramUniform3d( %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3,  arg4 );

    DebugTest( "glProgramUniform3d", 321, file, line );
    gldlProgramUniform3d_impl( program, location, v0, v1, v2 );
}

void gldlProgramUniform3dv ( GLuint program, GLint location, GLsizei count, const GLdouble *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glProgramUniform3dv( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glProgramUniform3dv", 322, file, line );
    gldlProgramUniform3dv_impl( program, location, count, value );
}

void gldlProgramUniform3ui ( GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glProgramUniform3ui( %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3,  arg4 );

    DebugTest( "glProgramUniform3ui", 327, file, line );
    gldlProgramUniform3ui_impl( program, location, v0, v1, v2 );
}

void gldlProgramUniform3uiv ( GLuint program, GLint location, GLsizei count, const GLuint *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glProgramUniform3uiv( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glProgramUniform3uiv", 328, file, line );
    gldlProgramUniform3uiv_impl( program, location, count, value );
}

void gldlProgramUniform4i ( GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glProgramUniform4i( %s, %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3, arg4,  arg5 );

    DebugTest( "glProgramUniform4i", 333, file, line );
    gldlProgramUniform4i_impl( program, location, v0, v1, v2, v3 );
}

void gldlProgramUniform4iv ( GLuint program, GLint location, GLsizei count, const GLint *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glProgramUniform4iv( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glProgramUniform4iv", 334, file, line );
    gldlProgramUniform4iv_impl( program, location, count, value );
}

void gldlProgramUniform4f ( GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glProgramUniform4f( %s, %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3, arg4,  arg5 );

    DebugTest( "glProgramUniform4f", 331, file, line );
    gldlProgramUniform4f_impl( program, location, v0, v1, v2, v3 );
}

void gldlProgramUniform4fv ( GLuint program, GLint location, GLsizei count, const GLfloat *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glProgramUniform4fv( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glProgramUniform4fv", 332, file, line );
    gldlProgramUniform4fv_impl( program, location, count, value );
}

void gldlProgramUniform4d ( GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glProgramUniform4d( %s, %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3, arg4,  arg5 );

    DebugTest( "glProgramUniform4d", 329, file, line );
    gldlProgramUniform4d_impl( program, location, v0, v1, v2, v3 );
}

void gldlProgramUniform4dv ( GLuint program, GLint location, GLsizei count, const GLdouble *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glProgramUniform4dv( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glProgramUniform4dv", 330, file, line );
    gldlProgramUniform4dv_impl( program, location, count, value );
}

void gldlProgramUniform4ui ( GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glProgramUniform4ui( %s, %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3, arg4,  arg5 );

    DebugTest( "glProgramUniform4ui", 335, file, line );
    gldlProgramUniform4ui_impl( program, location, v0, v1, v2, v3 );
}

void gldlProgramUniform4uiv ( GLuint program, GLint location, GLsizei count, const GLuint *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glProgramUniform4uiv( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glProgramUniform4uiv", 336, file, line );
    gldlProgramUniform4uiv_impl( program, location, count, value );
}

void gldlProgramUniformMatrix2fv ( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glProgramUniformMatrix2fv( %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3,  arg4 );

    DebugTest( "glProgramUniformMatrix2fv", 338, file, line );
    gldlProgramUniformMatrix2fv_impl( program, location, count, transpose, value );
}

void gldlProgramUniformMatrix3fv ( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glProgramUniformMatrix3fv( %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3,  arg4 );

    DebugTest( "glProgramUniformMatrix3fv", 344, file, line );
    gldlProgramUniformMatrix3fv_impl( program, location, count, transpose, value );
}

void gldlProgramUniformMatrix4fv ( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glProgramUniformMatrix4fv( %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3,  arg4 );

    DebugTest( "glProgramUniformMatrix4fv", 350, file, line );
    gldlProgramUniformMatrix4fv_impl( program, location, count, transpose, value );
}

void gldlProgramUniformMatrix2dv ( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glProgramUniformMatrix2dv( %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3,  arg4 );

    DebugTest( "glProgramUniformMatrix2dv", 337, file, line );
    gldlProgramUniformMatrix2dv_impl( program, location, count, transpose, value );
}

void gldlProgramUniformMatrix3dv ( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glProgramUniformMatrix3dv( %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3,  arg4 );

    DebugTest( "glProgramUniformMatrix3dv", 343, file, line );
    gldlProgramUniformMatrix3dv_impl( program, location, count, transpose, value );
}

void gldlProgramUniformMatrix4dv ( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glProgramUniformMatrix4dv( %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3,  arg4 );

    DebugTest( "glProgramUniformMatrix4dv", 349, file, line );
    gldlProgramUniformMatrix4dv_impl( program, location, count, transpose, value );
}

void gldlProgramUniformMatrix2x3fv ( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glProgramUniformMatrix2x3fv( %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3,  arg4 );

    DebugTest( "glProgramUniformMatrix2x3fv", 340, file, line );
    gldlProgramUniformMatrix2x3fv_impl( program, location, count, transpose, value );
}

void gldlProgramUniformMatrix3x2fv ( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glProgramUniformMatrix3x2fv( %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3,  arg4 );

    DebugTest( "glProgramUniformMatrix3x2fv", 346, file, line );
    gldlProgramUniformMatrix3x2fv_impl( program, location, count, transpose, value );
}

void gldlProgramUniformMatrix2x4fv ( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glProgramUniformMatrix2x4fv( %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3,  arg4 );

    DebugTest( "glProgramUniformMatrix2x4fv", 342, file, line );
    gldlProgramUniformMatrix2x4fv_impl( program, location, count, transpose, value );
}

void gldlProgramUniformMatrix4x2fv ( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glProgramUniformMatrix4x2fv( %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3,  arg4 );

    DebugTest( "glProgramUniformMatrix4x2fv", 352, file, line );
    gldlProgramUniformMatrix4x2fv_impl( program, location, count, transpose, value );
}

void gldlProgramUniformMatrix3x4fv ( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glProgramUniformMatrix3x4fv( %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3,  arg4 );

    DebugTest( "glProgramUniformMatrix3x4fv", 348, file, line );
    gldlProgramUniformMatrix3x4fv_impl( program, location, count, transpose, value );
}

void gldlProgramUniformMatrix4x3fv ( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glProgramUniformMatrix4x3fv( %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3,  arg4 );

    DebugTest( "glProgramUniformMatrix4x3fv", 354, file, line );
    gldlProgramUniformMatrix4x3fv_impl( program, location, count, transpose, value );
}

void gldlProgramUniformMatrix2x3dv ( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glProgramUniformMatrix2x3dv( %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3,  arg4 );

    DebugTest( "glProgramUniformMatrix2x3dv", 339, file, line );
    gldlProgramUniformMatrix2x3dv_impl( program, location, count, transpose, value );
}

void gldlProgramUniformMatrix3x2dv ( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glProgramUniformMatrix3x2dv( %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3,  arg4 );

    DebugTest( "glProgramUniformMatrix3x2dv", 345, file, line );
    gldlProgramUniformMatrix3x2dv_impl( program, location, count, transpose, value );
}

void gldlProgramUniformMatrix2x4dv ( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glProgramUniformMatrix2x4dv( %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3,  arg4 );

    DebugTest( "glProgramUniformMatrix2x4dv", 341, file, line );
    gldlProgramUniformMatrix2x4dv_impl( program, location, count, transpose, value );
}

void gldlProgramUniformMatrix4x2dv ( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glProgramUniformMatrix4x2dv( %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3,  arg4 );

    DebugTest( "glProgramUniformMatrix4x2dv", 351, file, line );
    gldlProgramUniformMatrix4x2dv_impl( program, location, count, transpose, value );
}

void gldlProgramUniformMatrix3x4dv ( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glProgramUniformMatrix3x4dv( %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3,  arg4 );

    DebugTest( "glProgramUniformMatrix3x4dv", 347, file, line );
    gldlProgramUniformMatrix3x4dv_impl( program, location, count, transpose, value );
}

void gldlProgramUniformMatrix4x3dv ( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glProgramUniformMatrix4x3dv( %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3,  arg4 );

    DebugTest( "glProgramUniformMatrix4x3dv", 353, file, line );
    gldlProgramUniformMatrix4x3dv_impl( program, location, count, transpose, value );
}

void gldlValidateProgramPipeline ( GLuint pipeline, const char *arg0, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glValidateProgramPipeline( %s );\n", file, line,  arg0 );

    DebugTest( "glValidateProgramPipeline", 472, file, line );
    gldlValidateProgramPipeline_impl( pipeline );
}

void gldlGetProgramPipelineInfoLog ( GLuint pipeline, GLsizei bufSize, GLsizei *length, GLchar *infoLog, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetProgramPipelineInfoLog( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glGetProgramPipelineInfoLog", 187, file, line );
    gldlGetProgramPipelineInfoLog_impl( pipeline, bufSize, length, infoLog );
}

void gldlVertexAttribL1d ( GLuint index, GLdouble x, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttribL1d( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glVertexAttribL1d", 531, file, line );
    gldlVertexAttribL1d_impl( index, x );
}

void gldlVertexAttribL2d ( GLuint index, GLdouble x, GLdouble y, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttribL2d( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glVertexAttribL2d", 533, file, line );
    gldlVertexAttribL2d_impl( index, x, y );
}

void gldlVertexAttribL3d ( GLuint index, GLdouble x, GLdouble y, GLdouble z, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttribL3d( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glVertexAttribL3d", 535, file, line );
    gldlVertexAttribL3d_impl( index, x, y, z );
}

void gldlVertexAttribL4d ( GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttribL4d( %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3,  arg4 );

    DebugTest( "glVertexAttribL4d", 537, file, line );
    gldlVertexAttribL4d_impl( index, x, y, z, w );
}

void gldlVertexAttribL1dv ( GLuint index, const GLdouble *v, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttribL1dv( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glVertexAttribL1dv", 532, file, line );
    gldlVertexAttribL1dv_impl( index, v );
}

void gldlVertexAttribL2dv ( GLuint index, const GLdouble *v, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttribL2dv( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glVertexAttribL2dv", 534, file, line );
    gldlVertexAttribL2dv_impl( index, v );
}

void gldlVertexAttribL3dv ( GLuint index, const GLdouble *v, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttribL3dv( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glVertexAttribL3dv", 536, file, line );
    gldlVertexAttribL3dv_impl( index, v );
}

void gldlVertexAttribL4dv ( GLuint index, const GLdouble *v, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttribL4dv( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glVertexAttribL4dv", 538, file, line );
    gldlVertexAttribL4dv_impl( index, v );
}

void gldlVertexAttribLPointer ( GLuint index, GLint size, GLenum type, GLsizei stride, const GLvoid *pointer, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glVertexAttribLPointer( %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3,  arg4 );

    DebugTest( "glVertexAttribLPointer", 539, file, line );
    gldlVertexAttribLPointer_impl( index, size, type, stride, pointer );
}

void gldlGetVertexAttribLdv ( GLuint index, GLenum pname, GLdouble *params, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetVertexAttribLdv( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glGetVertexAttribLdv", 229, file, line );
    gldlGetVertexAttribLdv_impl( index, pname, params );
}

void gldlViewportArrayv ( GLuint first, GLsizei count, const GLfloat *v, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glViewportArrayv( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glViewportArrayv", 556, file, line );
    gldlViewportArrayv_impl( first, count, v );
}

void gldlViewportIndexedf ( GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glViewportIndexedf( %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3,  arg4 );

    DebugTest( "glViewportIndexedf", 557, file, line );
    gldlViewportIndexedf_impl( index, x, y, w, h );
}

void gldlViewportIndexedfv ( GLuint index, const GLfloat *v, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glViewportIndexedfv( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glViewportIndexedfv", 558, file, line );
    gldlViewportIndexedfv_impl( index, v );
}

void gldlScissorArrayv ( GLuint first, GLsizei count, const GLint *v, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glScissorArrayv( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glScissorArrayv", 373, file, line );
    gldlScissorArrayv_impl( first, count, v );
}

void gldlScissorIndexed ( GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glScissorIndexed( %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3,  arg4 );

    DebugTest( "glScissorIndexed", 374, file, line );
    gldlScissorIndexed_impl( index, left, bottom, width, height );
}

void gldlScissorIndexedv ( GLuint index, const GLint *v, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glScissorIndexedv( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glScissorIndexedv", 375, file, line );
    gldlScissorIndexedv_impl( index, v );
}

void gldlDepthRangeArrayv ( GLuint first, GLsizei count, const GLclampd *v, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glDepthRangeArrayv( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glDepthRangeArrayv", 93, file, line );
    gldlDepthRangeArrayv_impl( first, count, v );
}

void gldlDepthRangeIndexed ( GLuint index, GLclampd n, GLclampd f, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glDepthRangeIndexed( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glDepthRangeIndexed", 94, file, line );
    gldlDepthRangeIndexed_impl( index, n, f );
}

void gldlGetFloati_v ( GLenum target, GLuint index, GLfloat *data, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetFloati_v( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glGetFloati_v", 170, file, line );
    gldlGetFloati_v_impl( target, index, data );
}

void gldlGetDoublei_v ( GLenum target, GLuint index, GLdouble *data, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetDoublei_v( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glGetDoublei_v", 167, file, line );
    gldlGetDoublei_v_impl( target, index, data );
}

GLsync gldlCreateSyncFromCLeventARB ( struct _cl_context * context, struct _cl_event * event, GLbitfield flags, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glCreateSyncFromCLeventARB( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glCreateSyncFromCLeventARB", 72, file, line );
    return gldlCreateSyncFromCLeventARB_impl( context, event, flags );
}

void gldlDebugMessageControlARB ( GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glDebugMessageControlARB( %s, %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3, arg4,  arg5 );

    DebugTest( "glDebugMessageControlARB", 75, file, line );
    gldlDebugMessageControlARB_impl( source, type, severity, count, ids, enabled );
}

void gldlDebugMessageInsertARB ( GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar *buf, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glDebugMessageInsertARB( %s, %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3, arg4,  arg5 );

    DebugTest( "glDebugMessageInsertARB", 76, file, line );
    gldlDebugMessageInsertARB_impl( source, type, id, severity, length, buf );
}

void gldlDebugMessageCallbackARB ( GLDEBUGPROCARB callback, const GLvoid *userParam, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glDebugMessageCallbackARB( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glDebugMessageCallbackARB", 74, file, line );
    gldlDebugMessageCallbackARB_impl( callback, userParam );
}

GLuint gldlGetDebugMessageLogARB ( GLuint count, GLsizei bufsize, GLenum *sources, GLenum *types, GLuint *ids, GLenum *severities, GLsizei *lengths, GLchar *messageLog, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *arg6, const char *arg7, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetDebugMessageLogARB( %s, %s, %s, %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3, arg4, arg5, arg6,  arg7 );

    DebugTest( "glGetDebugMessageLogARB", 166, file, line );
    return gldlGetDebugMessageLogARB_impl( count, bufsize, sources, types, ids, severities, lengths, messageLog );
}

GLenum gldlGetGraphicsResetStatusARB ( const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetGraphicsResetStatusARB();\n", file, line );

    DebugTest( "glGetGraphicsResetStatusARB", 175, file, line );
    return gldlGetGraphicsResetStatusARB_impl(  );
}

void gldlGetnMapdvARB ( GLenum target, GLenum query, GLsizei bufSize, GLdouble *v, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetnMapdvARB( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glGetnMapdvARB", 238, file, line );
    gldlGetnMapdvARB_impl( target, query, bufSize, v );
}

void gldlGetnMapfvARB ( GLenum target, GLenum query, GLsizei bufSize, GLfloat *v, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetnMapfvARB( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glGetnMapfvARB", 239, file, line );
    gldlGetnMapfvARB_impl( target, query, bufSize, v );
}

void gldlGetnMapivARB ( GLenum target, GLenum query, GLsizei bufSize, GLint *v, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetnMapivARB( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glGetnMapivARB", 240, file, line );
    gldlGetnMapivARB_impl( target, query, bufSize, v );
}

void gldlGetnPixelMapfvARB ( GLenum map, GLsizei bufSize, GLfloat *values, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetnPixelMapfvARB( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glGetnPixelMapfvARB", 242, file, line );
    gldlGetnPixelMapfvARB_impl( map, bufSize, values );
}

void gldlGetnPixelMapuivARB ( GLenum map, GLsizei bufSize, GLuint *values, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetnPixelMapuivARB( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glGetnPixelMapuivARB", 243, file, line );
    gldlGetnPixelMapuivARB_impl( map, bufSize, values );
}

void gldlGetnPixelMapusvARB ( GLenum map, GLsizei bufSize, GLushort *values, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetnPixelMapusvARB( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glGetnPixelMapusvARB", 244, file, line );
    gldlGetnPixelMapusvARB_impl( map, bufSize, values );
}

void gldlGetnPolygonStippleARB ( GLsizei bufSize, GLubyte *pattern, const char *arg0, const char *arg1, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetnPolygonStippleARB( %s, %s );\n", file, line, arg0,  arg1 );

    DebugTest( "glGetnPolygonStippleARB", 245, file, line );
    gldlGetnPolygonStippleARB_impl( bufSize, pattern );
}

void gldlGetnColorTableARB ( GLenum target, GLenum format, GLenum type, GLsizei bufSize, GLvoid *table, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetnColorTableARB( %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3,  arg4 );

    DebugTest( "glGetnColorTableARB", 234, file, line );
    gldlGetnColorTableARB_impl( target, format, type, bufSize, table );
}

void gldlGetnConvolutionFilterARB ( GLenum target, GLenum format, GLenum type, GLsizei bufSize, GLvoid *image, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetnConvolutionFilterARB( %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3,  arg4 );

    DebugTest( "glGetnConvolutionFilterARB", 236, file, line );
    gldlGetnConvolutionFilterARB_impl( target, format, type, bufSize, image );
}

void gldlGetnSeparableFilterARB ( GLenum target, GLenum format, GLenum type, GLsizei rowBufSize, GLvoid *row, GLsizei columnBufSize, GLvoid *column, GLvoid *span, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *arg6, const char *arg7, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetnSeparableFilterARB( %s, %s, %s, %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3, arg4, arg5, arg6,  arg7 );

    DebugTest( "glGetnSeparableFilterARB", 246, file, line );
    gldlGetnSeparableFilterARB_impl( target, format, type, rowBufSize, row, columnBufSize, column, span );
}

void gldlGetnHistogramARB ( GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, GLvoid *values, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetnHistogramARB( %s, %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3, arg4,  arg5 );

    DebugTest( "glGetnHistogramARB", 237, file, line );
    gldlGetnHistogramARB_impl( target, reset, format, type, bufSize, values );
}

void gldlGetnMinmaxARB ( GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, GLvoid *values, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetnMinmaxARB( %s, %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3, arg4,  arg5 );

    DebugTest( "glGetnMinmaxARB", 241, file, line );
    gldlGetnMinmaxARB_impl( target, reset, format, type, bufSize, values );
}

void gldlGetnTexImageARB ( GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, GLvoid *img, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetnTexImageARB( %s, %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3, arg4,  arg5 );

    DebugTest( "glGetnTexImageARB", 247, file, line );
    gldlGetnTexImageARB_impl( target, level, format, type, bufSize, img );
}

void gldlReadnPixelsARB ( GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, GLvoid *data, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *arg6, const char *arg7, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glReadnPixelsARB( %s, %s, %s, %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3, arg4, arg5, arg6,  arg7 );

    DebugTest( "glReadnPixelsARB", 359, file, line );
    gldlReadnPixelsARB_impl( x, y, width, height, format, type, bufSize, data );
}

void gldlGetnCompressedTexImageARB ( GLenum target, GLint lod, GLsizei bufSize, GLvoid *img, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetnCompressedTexImageARB( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glGetnCompressedTexImageARB", 235, file, line );
    gldlGetnCompressedTexImageARB_impl( target, lod, bufSize, img );
}

void gldlGetnUniformfvARB ( GLuint program, GLint location, GLsizei bufSize, GLfloat *params, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetnUniformfvARB( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glGetnUniformfvARB", 249, file, line );
    gldlGetnUniformfvARB_impl( program, location, bufSize, params );
}

void gldlGetnUniformivARB ( GLuint program, GLint location, GLsizei bufSize, GLint *params, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetnUniformivARB( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glGetnUniformivARB", 250, file, line );
    gldlGetnUniformivARB_impl( program, location, bufSize, params );
}

void gldlGetnUniformuivARB ( GLuint program, GLint location, GLsizei bufSize, GLuint *params, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetnUniformuivARB( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glGetnUniformuivARB", 251, file, line );
    gldlGetnUniformuivARB_impl( program, location, bufSize, params );
}

void gldlGetnUniformdvARB ( GLuint program, GLint location, GLsizei bufSize, GLdouble *params, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetnUniformdvARB( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glGetnUniformdvARB", 248, file, line );
    gldlGetnUniformdvARB_impl( program, location, bufSize, params );
}

void gldlDrawArraysInstancedBaseInstance ( GLenum mode, GLint first, GLsizei count, GLsizei primcount, GLuint baseinstance, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glDrawArraysInstancedBaseInstance( %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3,  arg4 );

    DebugTest( "glDrawArraysInstancedBaseInstance", 103, file, line );
    gldlDrawArraysInstancedBaseInstance_impl( mode, first, count, primcount, baseinstance );
}

void gldlDrawElementsInstancedBaseInstance ( GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei primcount, GLuint baseinstance, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glDrawElementsInstancedBaseInstance( %s, %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3, arg4,  arg5 );

    DebugTest( "glDrawElementsInstancedBaseInstance", 110, file, line );
    gldlDrawElementsInstancedBaseInstance_impl( mode, count, type, indices, primcount, baseinstance );
}

void gldlDrawElementsInstancedBaseVertexBaseInstance ( GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei primcount, GLint basevertex, GLuint baseinstance, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *arg6, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glDrawElementsInstancedBaseVertexBaseInstance( %s, %s, %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3, arg4, arg5,  arg6 );

    DebugTest( "glDrawElementsInstancedBaseVertexBaseInstance", 112, file, line );
    gldlDrawElementsInstancedBaseVertexBaseInstance_impl( mode, count, type, indices, primcount, basevertex, baseinstance );
}

void gldlDrawTransformFeedbackInstanced ( GLenum mode, GLuint id, GLsizei primcount, const char *arg0, const char *arg1, const char *arg2, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glDrawTransformFeedbackInstanced( %s, %s, %s );\n", file, line, arg0, arg1,  arg2 );

    DebugTest( "glDrawTransformFeedbackInstanced", 116, file, line );
    gldlDrawTransformFeedbackInstanced_impl( mode, id, primcount );
}

void gldlDrawTransformFeedbackStreamInstanced ( GLenum mode, GLuint id, GLuint stream, GLsizei primcount, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glDrawTransformFeedbackStreamInstanced( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glDrawTransformFeedbackStreamInstanced", 118, file, line );
    gldlDrawTransformFeedbackStreamInstanced_impl( mode, id, stream, primcount );
}

void gldlGetInternalformativ ( GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint *params, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetInternalformativ( %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3,  arg4 );

    DebugTest( "glGetInternalformativ", 180, file, line );
    gldlGetInternalformativ_impl( target, internalformat, pname, bufSize, params );
}

void gldlGetActiveAtomicCounterBufferiv ( GLuint program, GLuint bufferIndex, GLenum pname, GLint *params, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glGetActiveAtomicCounterBufferiv( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glGetActiveAtomicCounterBufferiv", 147, file, line );
    gldlGetActiveAtomicCounterBufferiv_impl( program, bufferIndex, pname, params );
}

void gldlBindImageTexture ( GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *arg6, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glBindImageTexture( %s, %s, %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3, arg4, arg5,  arg6 );

    DebugTest( "glBindImageTexture", 14, file, line );
    gldlBindImageTexture_impl( unit, texture, level, layered, layer, access, format );
}

void gldlMemoryBarrier ( GLbitfield barriers, const char *arg0, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glMemoryBarrier( %s );\n", file, line,  arg0 );

    DebugTest( "glMemoryBarrier", 273, file, line );
    gldlMemoryBarrier_impl( barriers );
}

void gldlTexStorage1D ( GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glTexStorage1D( %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2,  arg3 );

    DebugTest( "glTexStorage1D", 406, file, line );
    gldlTexStorage1D_impl( target, levels, internalformat, width );
}

void gldlTexStorage2D ( GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glTexStorage2D( %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3,  arg4 );

    DebugTest( "glTexStorage2D", 407, file, line );
    gldlTexStorage2D_impl( target, levels, internalformat, width, height );
}

void gldlTexStorage3D ( GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glTexStorage3D( %s, %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3, arg4,  arg5 );

    DebugTest( "glTexStorage3D", 408, file, line );
    gldlTexStorage3D_impl( target, levels, internalformat, width, height, depth );
}

void gldlTextureStorage1DEXT ( GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glTextureStorage1DEXT( %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3,  arg4 );

    DebugTest( "glTextureStorage1DEXT", 412, file, line );
    gldlTextureStorage1DEXT_impl( texture, target, levels, internalformat, width );
}

void gldlTextureStorage2DEXT ( GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glTextureStorage2DEXT( %s, %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3, arg4,  arg5 );

    DebugTest( "glTextureStorage2DEXT", 413, file, line );
    gldlTextureStorage2DEXT_impl( texture, target, levels, internalformat, width, height );
}

void gldlTextureStorage3DEXT ( GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, const char *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4, const char *arg5, const char *arg6, const char *file, int line ) {
	fprintf( trace, "call<%s,%d>: glTextureStorage3DEXT( %s, %s, %s, %s, %s, %s, %s );\n", file, line, arg0, arg1, arg2, arg3, arg4, arg5,  arg6 );

    DebugTest( "glTextureStorage3DEXT", 414, file, line );
    gldlTextureStorage3DEXT_impl( texture, target, levels, internalformat, width, height, depth );
}

