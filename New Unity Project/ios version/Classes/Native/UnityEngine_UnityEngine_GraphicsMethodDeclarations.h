#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Texture
struct Texture_t14;
// UnityEngine.Material
struct Material_t42;
// UnityEngine.RenderTexture
struct RenderTexture_t12;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.InternalDrawTextureArguments
#include "UnityEngine_UnityEngine_InternalDrawTextureArguments.h"

// System.Void UnityEngine.Graphics::DrawTexture(UnityEngine.Rect,UnityEngine.Texture)
extern "C" void Graphics_DrawTexture_m436 (Object_t * __this /* static, unused */, Rect_t18  ___screenRect, Texture_t14 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.Material)
extern "C" void Graphics_DrawTexture_m2573 (Object_t * __this /* static, unused */, Rect_t18  ___screenRect, Texture_t14 * ___texture, Material_t42 * ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Material)
extern "C" void Graphics_DrawTexture_m2574 (Object_t * __this /* static, unused */, Rect_t18  ___screenRect, Texture_t14 * ___texture, int32_t ___leftBorder, int32_t ___rightBorder, int32_t ___topBorder, int32_t ___bottomBorder, Material_t42 * ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.Rect,System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Material)
extern "C" void Graphics_DrawTexture_m2575 (Object_t * __this /* static, unused */, Rect_t18  ___screenRect, Texture_t14 * ___texture, Rect_t18  ___sourceRect, int32_t ___leftBorder, int32_t ___rightBorder, int32_t ___topBorder, int32_t ___bottomBorder, Material_t42 * ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::DrawTexture(UnityEngine.InternalDrawTextureArguments&)
extern "C" void Graphics_DrawTexture_m2576 (Object_t * __this /* static, unused */, InternalDrawTextureArguments_t448 * ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)
extern "C" void Graphics_Blit_m520 (Object_t * __this /* static, unused */, Texture_t14 * ___source, RenderTexture_t12 * ___dest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material)
extern "C" void Graphics_Blit_m521 (Object_t * __this /* static, unused */, Texture_t14 * ___source, RenderTexture_t12 * ___dest, Material_t42 * ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32)
extern "C" void Graphics_Blit_m2577 (Object_t * __this /* static, unused */, Texture_t14 * ___source, RenderTexture_t12 * ___dest, Material_t42 * ___mat, int32_t ___pass, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_BlitMaterial(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32,System.Boolean)
extern "C" void Graphics_Internal_BlitMaterial_m2578 (Object_t * __this /* static, unused */, Texture_t14 * ___source, RenderTexture_t12 * ___dest, Material_t42 * ___mat, int32_t ___pass, bool ___setRT, const MethodInfo* method) IL2CPP_METHOD_ATTR;
