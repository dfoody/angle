// GENERATED FILE - DO NOT EDIT.
// Generated by generate_entry_points.py using data from gl.xml.
//
// Copyright 2017 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// entry_points_enum_autogen.h:
//   Defines the GLES entry points enumeration.

#ifndef LIBGLESV2_ENTRYPOINTSENUM_AUTOGEN_H_
#define LIBGLESV2_ENTRYPOINTSENUM_AUTOGEN_H_

namespace gl
{
enum class EntryPoint
{
    Invalid,
    ActiveShaderProgram,
    ActiveTexture,
    AttachShader,
    BeginQuery,
    BeginTransformFeedback,
    BindAttribLocation,
    BindBuffer,
    BindBufferBase,
    BindBufferRange,
    BindFramebuffer,
    BindImageTexture,
    BindProgramPipeline,
    BindRenderbuffer,
    BindSampler,
    BindTexture,
    BindTransformFeedback,
    BindVertexArray,
    BindVertexBuffer,
    BlendColor,
    BlendEquation,
    BlendEquationSeparate,
    BlendFunc,
    BlendFuncSeparate,
    BlitFramebuffer,
    BufferData,
    BufferSubData,
    CheckFramebufferStatus,
    Clear,
    ClearBufferfi,
    ClearBufferfv,
    ClearBufferiv,
    ClearBufferuiv,
    ClearColor,
    ClearDepthf,
    ClearStencil,
    ClientWaitSync,
    ColorMask,
    CompileShader,
    CompressedTexImage2D,
    CompressedTexImage3D,
    CompressedTexSubImage2D,
    CompressedTexSubImage3D,
    CopyBufferSubData,
    CopyTexImage2D,
    CopyTexSubImage2D,
    CopyTexSubImage3D,
    CreateProgram,
    CreateShader,
    CreateShaderProgramv,
    CullFace,
    DeleteBuffers,
    DeleteFramebuffers,
    DeleteProgram,
    DeleteProgramPipelines,
    DeleteQueries,
    DeleteRenderbuffers,
    DeleteSamplers,
    DeleteShader,
    DeleteSync,
    DeleteTextures,
    DeleteTransformFeedbacks,
    DeleteVertexArrays,
    DepthFunc,
    DepthMask,
    DepthRangef,
    DetachShader,
    Disable,
    DisableVertexAttribArray,
    DispatchCompute,
    DispatchComputeIndirect,
    DrawArrays,
    DrawArraysIndirect,
    DrawArraysInstanced,
    DrawBuffers,
    DrawElements,
    DrawElementsIndirect,
    DrawElementsInstanced,
    DrawRangeElements,
    Enable,
    EnableVertexAttribArray,
    EndQuery,
    EndTransformFeedback,
    FenceSync,
    Finish,
    Flush,
    FlushMappedBufferRange,
    FramebufferParameteri,
    FramebufferRenderbuffer,
    FramebufferTexture2D,
    FramebufferTextureLayer,
    FrontFace,
    GenBuffers,
    GenFramebuffers,
    GenProgramPipelines,
    GenQueries,
    GenRenderbuffers,
    GenSamplers,
    GenTextures,
    GenTransformFeedbacks,
    GenVertexArrays,
    GenerateMipmap,
    GetActiveAttrib,
    GetActiveUniform,
    GetActiveUniformBlockName,
    GetActiveUniformBlockiv,
    GetActiveUniformsiv,
    GetAttachedShaders,
    GetAttribLocation,
    GetBooleani_v,
    GetBooleanv,
    GetBufferParameteri64v,
    GetBufferParameteriv,
    GetBufferPointerv,
    GetError,
    GetFloatv,
    GetFragDataLocation,
    GetFramebufferAttachmentParameteriv,
    GetFramebufferParameteriv,
    GetInteger64i_v,
    GetInteger64v,
    GetIntegeri_v,
    GetIntegerv,
    GetInternalformativ,
    GetMultisamplefv,
    GetProgramBinary,
    GetProgramInfoLog,
    GetProgramInterfaceiv,
    GetProgramPipelineInfoLog,
    GetProgramPipelineiv,
    GetProgramResourceIndex,
    GetProgramResourceLocation,
    GetProgramResourceName,
    GetProgramResourceiv,
    GetProgramiv,
    GetQueryObjectuiv,
    GetQueryiv,
    GetRenderbufferParameteriv,
    GetSamplerParameterfv,
    GetSamplerParameteriv,
    GetShaderInfoLog,
    GetShaderPrecisionFormat,
    GetShaderSource,
    GetShaderiv,
    GetString,
    GetStringi,
    GetSynciv,
    GetTexLevelParameterfv,
    GetTexLevelParameteriv,
    GetTexParameterfv,
    GetTexParameteriv,
    GetTransformFeedbackVarying,
    GetUniformBlockIndex,
    GetUniformIndices,
    GetUniformLocation,
    GetUniformfv,
    GetUniformiv,
    GetUniformuiv,
    GetVertexAttribIiv,
    GetVertexAttribIuiv,
    GetVertexAttribPointerv,
    GetVertexAttribfv,
    GetVertexAttribiv,
    Hint,
    InvalidateFramebuffer,
    InvalidateSubFramebuffer,
    IsBuffer,
    IsEnabled,
    IsFramebuffer,
    IsProgram,
    IsProgramPipeline,
    IsQuery,
    IsRenderbuffer,
    IsSampler,
    IsShader,
    IsSync,
    IsTexture,
    IsTransformFeedback,
    IsVertexArray,
    LineWidth,
    LinkProgram,
    MapBufferRange,
    MemoryBarrier,
    MemoryBarrierByRegion,
    PauseTransformFeedback,
    PixelStorei,
    PolygonOffset,
    ProgramBinary,
    ProgramParameteri,
    ProgramUniform1f,
    ProgramUniform1fv,
    ProgramUniform1i,
    ProgramUniform1iv,
    ProgramUniform1ui,
    ProgramUniform1uiv,
    ProgramUniform2f,
    ProgramUniform2fv,
    ProgramUniform2i,
    ProgramUniform2iv,
    ProgramUniform2ui,
    ProgramUniform2uiv,
    ProgramUniform3f,
    ProgramUniform3fv,
    ProgramUniform3i,
    ProgramUniform3iv,
    ProgramUniform3ui,
    ProgramUniform3uiv,
    ProgramUniform4f,
    ProgramUniform4fv,
    ProgramUniform4i,
    ProgramUniform4iv,
    ProgramUniform4ui,
    ProgramUniform4uiv,
    ProgramUniformMatrix2fv,
    ProgramUniformMatrix2x3fv,
    ProgramUniformMatrix2x4fv,
    ProgramUniformMatrix3fv,
    ProgramUniformMatrix3x2fv,
    ProgramUniformMatrix3x4fv,
    ProgramUniformMatrix4fv,
    ProgramUniformMatrix4x2fv,
    ProgramUniformMatrix4x3fv,
    ReadBuffer,
    ReadPixels,
    ReleaseShaderCompiler,
    RenderbufferStorage,
    RenderbufferStorageMultisample,
    ResumeTransformFeedback,
    SampleCoverage,
    SampleMaski,
    SamplerParameterf,
    SamplerParameterfv,
    SamplerParameteri,
    SamplerParameteriv,
    Scissor,
    ShaderBinary,
    ShaderSource,
    StencilFunc,
    StencilFuncSeparate,
    StencilMask,
    StencilMaskSeparate,
    StencilOp,
    StencilOpSeparate,
    TexImage2D,
    TexImage3D,
    TexParameterf,
    TexParameterfv,
    TexParameteri,
    TexParameteriv,
    TexStorage2D,
    TexStorage2DMultisample,
    TexStorage3D,
    TexSubImage2D,
    TexSubImage3D,
    TransformFeedbackVaryings,
    Uniform1f,
    Uniform1fv,
    Uniform1i,
    Uniform1iv,
    Uniform1ui,
    Uniform1uiv,
    Uniform2f,
    Uniform2fv,
    Uniform2i,
    Uniform2iv,
    Uniform2ui,
    Uniform2uiv,
    Uniform3f,
    Uniform3fv,
    Uniform3i,
    Uniform3iv,
    Uniform3ui,
    Uniform3uiv,
    Uniform4f,
    Uniform4fv,
    Uniform4i,
    Uniform4iv,
    Uniform4ui,
    Uniform4uiv,
    UniformBlockBinding,
    UniformMatrix2fv,
    UniformMatrix2x3fv,
    UniformMatrix2x4fv,
    UniformMatrix3fv,
    UniformMatrix3x2fv,
    UniformMatrix3x4fv,
    UniformMatrix4fv,
    UniformMatrix4x2fv,
    UniformMatrix4x3fv,
    UnmapBuffer,
    UseProgram,
    UseProgramStages,
    ValidateProgram,
    ValidateProgramPipeline,
    VertexAttrib1f,
    VertexAttrib1fv,
    VertexAttrib2f,
    VertexAttrib2fv,
    VertexAttrib3f,
    VertexAttrib3fv,
    VertexAttrib4f,
    VertexAttrib4fv,
    VertexAttribBinding,
    VertexAttribDivisor,
    VertexAttribFormat,
    VertexAttribI4i,
    VertexAttribI4iv,
    VertexAttribI4ui,
    VertexAttribI4uiv,
    VertexAttribIFormat,
    VertexAttribIPointer,
    VertexAttribPointer,
    VertexBindingDivisor,
    Viewport,
    WaitSync,
    DrawElementsInstancedANGLE
};
}  // namespace gl
#endif  // LIBGLESV2_ENTRY_POINTS_ENUM_AUTOGEN_H_
