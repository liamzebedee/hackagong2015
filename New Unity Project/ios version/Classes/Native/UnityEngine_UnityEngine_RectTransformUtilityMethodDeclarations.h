#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.RectTransform
struct RectTransform_t184;
// UnityEngine.Camera
struct Camera_t32;
// UnityEngine.Transform
struct Transform_t33;
// UnityEngine.Canvas
struct Canvas_t202;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"

// System.Void UnityEngine.RectTransformUtility::.cctor()
extern "C" void RectTransformUtility__cctor_m3156 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RectTransformUtility::RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera)
extern "C" bool RectTransformUtility_RectangleContainsScreenPoint_m2165 (Object_t * __this /* static, unused */, RectTransform_t184 * ___rect, Vector2_t15  ___screenPoint, Camera_t32 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RectTransformUtility::INTERNAL_CALL_RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2&,UnityEngine.Camera)
extern "C" bool RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m3157 (Object_t * __this /* static, unused */, RectTransform_t184 * ___rect, Vector2_t15 * ___screenPoint, Camera_t32 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::PixelAdjustPoint(UnityEngine.Vector2,UnityEngine.Transform,UnityEngine.Canvas)
extern "C" Vector2_t15  RectTransformUtility_PixelAdjustPoint_m2147 (Object_t * __this /* static, unused */, Vector2_t15  ___point, Transform_t33 * ___elementTransform, Canvas_t202 * ___canvas, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransformUtility::PixelAdjustPoint(UnityEngine.Vector2,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)
extern "C" void RectTransformUtility_PixelAdjustPoint_m3158 (Object_t * __this /* static, unused */, Vector2_t15  ___point, Transform_t33 * ___elementTransform, Canvas_t202 * ___canvas, Vector2_t15 * ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransformUtility::INTERNAL_CALL_PixelAdjustPoint(UnityEngine.Vector2&,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)
extern "C" void RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m3159 (Object_t * __this /* static, unused */, Vector2_t15 * ___point, Transform_t33 * ___elementTransform, Canvas_t202 * ___canvas, Vector2_t15 * ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.RectTransformUtility::PixelAdjustRect(UnityEngine.RectTransform,UnityEngine.Canvas)
extern "C" Rect_t18  RectTransformUtility_PixelAdjustRect_m2148 (Object_t * __this /* static, unused */, RectTransform_t184 * ___rectTransform, Canvas_t202 * ___canvas, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToWorldPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" bool RectTransformUtility_ScreenPointToWorldPointInRectangle_m3160 (Object_t * __this /* static, unused */, RectTransform_t184 * ___rect, Vector2_t15  ___screenPoint, Camera_t32 * ___cam, Vector3_t3 * ___worldPoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
extern "C" bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m2191 (Object_t * __this /* static, unused */, RectTransform_t184 * ___rect, Vector2_t15  ___screenPoint, Camera_t32 * ___cam, Vector2_t15 * ___localPoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UnityEngine.RectTransformUtility::ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector2)
extern "C" Ray_t63  RectTransformUtility_ScreenPointToRay_m3161 (Object_t * __this /* static, unused */, Camera_t32 * ___cam, Vector2_t15  ___screenPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransformUtility::FlipLayoutOnAxis(UnityEngine.RectTransform,System.Int32,System.Boolean,System.Boolean)
extern "C" void RectTransformUtility_FlipLayoutOnAxis_m2091 (Object_t * __this /* static, unused */, RectTransform_t184 * ___rect, int32_t ___axis, bool ___keepPositioning, bool ___recursive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransformUtility::FlipLayoutAxes(UnityEngine.RectTransform,System.Boolean,System.Boolean)
extern "C" void RectTransformUtility_FlipLayoutAxes_m2306 (Object_t * __this /* static, unused */, RectTransform_t184 * ___rect, bool ___keepPositioning, bool ___recursive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::GetTransposed(UnityEngine.Vector2)
extern "C" Vector2_t15  RectTransformUtility_GetTransposed_m3162 (Object_t * __this /* static, unused */, Vector2_t15  ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
