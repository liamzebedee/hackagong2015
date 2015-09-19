#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.RenderTexture
struct RenderTexture_t12;
// UnityEngine.RenderTextureFormat
#include "UnityEngine_UnityEngine_RenderTextureFormat.h"
// UnityEngine.RenderTextureReadWrite
#include "UnityEngine_UnityEngine_RenderTextureReadWrite.h"

// System.Void UnityEngine.RenderTexture::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat)
extern "C" void RenderTexture__ctor_m319 (RenderTexture_t12 * __this, int32_t ___width, int32_t ___height, int32_t ___depth, int32_t ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::Internal_CreateRenderTexture(UnityEngine.RenderTexture)
extern "C" void RenderTexture_Internal_CreateRenderTexture_m2594 (Object_t * __this /* static, unused */, RenderTexture_t12 * ___rt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat,UnityEngine.RenderTextureReadWrite,System.Int32)
extern "C" RenderTexture_t12 * RenderTexture_GetTemporary_m2595 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, int32_t ___depthBuffer, int32_t ___format, int32_t ___readWrite, int32_t ___antiAliasing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat)
extern "C" RenderTexture_t12 * RenderTexture_GetTemporary_m432 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, int32_t ___depthBuffer, int32_t ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::ReleaseTemporary(UnityEngine.RenderTexture)
extern "C" void RenderTexture_ReleaseTemporary_m438 (Object_t * __this /* static, unused */, RenderTexture_t12 * ___temp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.RenderTexture::Internal_GetWidth(UnityEngine.RenderTexture)
extern "C" int32_t RenderTexture_Internal_GetWidth_m2596 (Object_t * __this /* static, unused */, RenderTexture_t12 * ___mono, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::Internal_SetWidth(UnityEngine.RenderTexture,System.Int32)
extern "C" void RenderTexture_Internal_SetWidth_m2597 (Object_t * __this /* static, unused */, RenderTexture_t12 * ___mono, int32_t ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.RenderTexture::Internal_GetHeight(UnityEngine.RenderTexture)
extern "C" int32_t RenderTexture_Internal_GetHeight_m2598 (Object_t * __this /* static, unused */, RenderTexture_t12 * ___mono, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::Internal_SetHeight(UnityEngine.RenderTexture,System.Int32)
extern "C" void RenderTexture_Internal_SetHeight_m2599 (Object_t * __this /* static, unused */, RenderTexture_t12 * ___mono, int32_t ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::Internal_SetSRGBReadWrite(UnityEngine.RenderTexture,System.Boolean)
extern "C" void RenderTexture_Internal_SetSRGBReadWrite_m2600 (Object_t * __this /* static, unused */, RenderTexture_t12 * ___mono, bool ___sRGB, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.RenderTexture::get_width()
extern "C" int32_t RenderTexture_get_width_m315 (RenderTexture_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::set_width(System.Int32)
extern "C" void RenderTexture_set_width_m2601 (RenderTexture_t12 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.RenderTexture::get_height()
extern "C" int32_t RenderTexture_get_height_m317 (RenderTexture_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::set_height(System.Int32)
extern "C" void RenderTexture_set_height_m2602 (RenderTexture_t12 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.RenderTexture::get_depth()
extern "C" int32_t RenderTexture_get_depth_m430 (RenderTexture_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::set_depth(System.Int32)
extern "C" void RenderTexture_set_depth_m2603 (RenderTexture_t12 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTextureFormat UnityEngine.RenderTexture::get_format()
extern "C" int32_t RenderTexture_get_format_m431 (RenderTexture_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::set_format(UnityEngine.RenderTextureFormat)
extern "C" void RenderTexture_set_format_m2604 (RenderTexture_t12 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RenderTexture::Create()
extern "C" bool RenderTexture_Create_m320 (RenderTexture_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RenderTexture::INTERNAL_CALL_Create(UnityEngine.RenderTexture)
extern "C" bool RenderTexture_INTERNAL_CALL_Create_m2605 (Object_t * __this /* static, unused */, RenderTexture_t12 * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::Release()
extern "C" void RenderTexture_Release_m313 (RenderTexture_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::INTERNAL_CALL_Release(UnityEngine.RenderTexture)
extern "C" void RenderTexture_INTERNAL_CALL_Release_m2606 (Object_t * __this /* static, unused */, RenderTexture_t12 * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RenderTexture::IsCreated()
extern "C" bool RenderTexture_IsCreated_m366 (RenderTexture_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RenderTexture::INTERNAL_CALL_IsCreated(UnityEngine.RenderTexture)
extern "C" bool RenderTexture_INTERNAL_CALL_IsCreated_m2607 (Object_t * __this /* static, unused */, RenderTexture_t12 * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::get_active()
extern "C" RenderTexture_t12 * RenderTexture_get_active_m324 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)
extern "C" void RenderTexture_set_active_m325 (Object_t * __this /* static, unused */, RenderTexture_t12 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
