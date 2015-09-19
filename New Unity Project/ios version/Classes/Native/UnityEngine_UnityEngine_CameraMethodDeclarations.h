#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Camera
struct Camera_t32;
// UnityEngine.RenderTexture
struct RenderTexture_t12;
// UnityEngine.Camera[]
struct CameraU5BU5D_t596;
// UnityEngine.GameObject
struct GameObject_t47;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlags.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
// UnityEngine.QueryTriggerInteraction
#include "UnityEngine_UnityEngine_QueryTriggerInteraction.h"

// System.Void UnityEngine.Camera::set_fieldOfView(System.Single)
extern "C" void Camera_set_fieldOfView_m415 (Camera_t32 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_nearClipPlane()
extern "C" float Camera_get_nearClipPlane_m412 (Camera_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_farClipPlane()
extern "C" float Camera_get_farClipPlane_m413 (Camera_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_depth()
extern "C" float Camera_get_depth_m1900 (Camera_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_depth(System.Single)
extern "C" void Camera_set_depth_m385 (Camera_t32 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_cullingMask()
extern "C" int32_t Camera_get_cullingMask_m440 (Camera_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_cullingMask(System.Int32)
extern "C" void Camera_set_cullingMask_m383 (Camera_t32 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_eventMask()
extern "C" int32_t Camera_get_eventMask_m2813 (Camera_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_backgroundColor(UnityEngine.Color)
extern "C" void Camera_set_backgroundColor_m382 (Camera_t32 * __this, Color_t11  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_set_backgroundColor(UnityEngine.Color&)
extern "C" void Camera_INTERNAL_set_backgroundColor_m2814 (Camera_t32 * __this, Color_t11 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.Camera::get_rect()
extern "C" Rect_t18  Camera_get_rect_m400 (Camera_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_rect(UnityEngine.Rect)
extern "C" void Camera_set_rect_m426 (Camera_t32 * __this, Rect_t18  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_get_rect(UnityEngine.Rect&)
extern "C" void Camera_INTERNAL_get_rect_m2815 (Camera_t32 * __this, Rect_t18 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_set_rect(UnityEngine.Rect&)
extern "C" void Camera_INTERNAL_set_rect_m2816 (Camera_t32 * __this, Rect_t18 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.Camera::get_pixelRect()
extern "C" Rect_t18  Camera_get_pixelRect_m429 (Camera_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_get_pixelRect(UnityEngine.Rect&)
extern "C" void Camera_INTERNAL_get_pixelRect_m2817 (Camera_t32 * __this, Rect_t18 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture UnityEngine.Camera::get_targetTexture()
extern "C" RenderTexture_t12 * Camera_get_targetTexture_m435 (Camera_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_targetTexture(UnityEngine.RenderTexture)
extern "C" void Camera_set_targetTexture_m427 (Camera_t32 * __this, RenderTexture_t12 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_projectionMatrix()
extern "C" Matrix4x4_t43  Camera_get_projectionMatrix_m406 (Camera_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_projectionMatrix(UnityEngine.Matrix4x4)
extern "C" void Camera_set_projectionMatrix_m414 (Camera_t32 * __this, Matrix4x4_t43  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_get_projectionMatrix(UnityEngine.Matrix4x4&)
extern "C" void Camera_INTERNAL_get_projectionMatrix_m2818 (Camera_t32 * __this, Matrix4x4_t43 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_set_projectionMatrix(UnityEngine.Matrix4x4&)
extern "C" void Camera_INTERNAL_set_projectionMatrix_m2819 (Camera_t32 * __this, Matrix4x4_t43 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.CameraClearFlags UnityEngine.Camera::get_clearFlags()
extern "C" int32_t Camera_get_clearFlags_m2820 (Camera_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_clearFlags(UnityEngine.CameraClearFlags)
extern "C" void Camera_set_clearFlags_m380 (Camera_t32 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToViewportPoint(UnityEngine.Vector3)
extern "C" Vector3_t3  Camera_ScreenToViewportPoint_m2158 (Camera_t32 * __this, Vector3_t3  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_ScreenToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Vector3_t3  Camera_INTERNAL_CALL_ScreenToViewportPoint_m2821 (Object_t * __this /* static, unused */, Camera_t32 * ___self, Vector3_t3 * ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
extern "C" Ray_t63  Camera_ScreenPointToRay_m1987 (Camera_t32 * __this, Vector3_t3  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UnityEngine.Camera::INTERNAL_CALL_ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Ray_t63  Camera_INTERNAL_CALL_ScreenPointToRay_m2822 (Object_t * __this /* static, unused */, Camera_t32 * ___self, Vector3_t3 * ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C" Camera_t32 * Camera_get_main_m296 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_allCamerasCount()
extern "C" int32_t Camera_get_allCamerasCount_m2823 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::GetAllCameras(UnityEngine.Camera[])
extern "C" int32_t Camera_GetAllCameras_m2824 (Object_t * __this /* static, unused */, CameraU5BU5D_t596* ___cameras, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::FireOnPreCull(UnityEngine.Camera)
extern "C" void Camera_FireOnPreCull_m2825 (Object_t * __this /* static, unused */, Camera_t32 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::FireOnPreRender(UnityEngine.Camera)
extern "C" void Camera_FireOnPreRender_m2826 (Object_t * __this /* static, unused */, Camera_t32 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::FireOnPostRender(UnityEngine.Camera)
extern "C" void Camera_FireOnPostRender_m2827 (Object_t * __this /* static, unused */, Camera_t32 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::Render()
extern "C" void Camera_Render_m428 (Camera_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_useOcclusionCulling(System.Boolean)
extern "C" void Camera_set_useOcclusionCulling_m384 (Camera_t32 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::CopyFrom(UnityEngine.Camera)
extern "C" void Camera_CopyFrom_m439 (Camera_t32 * __this, Camera_t32 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry(UnityEngine.Ray,System.Single,System.Int32)
extern "C" GameObject_t47 * Camera_RaycastTry_m2828 (Camera_t32 * __this, Ray_t63  ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" GameObject_t47 * Camera_INTERNAL_CALL_RaycastTry_m2829 (Object_t * __this /* static, unused */, Camera_t32 * ___self, Ray_t63 * ___ray, float ___distance, int32_t ___layerMask, int32_t ___queryTriggerInteraction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry2D(UnityEngine.Ray,System.Single,System.Int32)
extern "C" GameObject_t47 * Camera_RaycastTry2D_m2830 (Camera_t32 * __this, Ray_t63  ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry2D(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
extern "C" GameObject_t47 * Camera_INTERNAL_CALL_RaycastTry2D_m2831 (Object_t * __this /* static, unused */, Camera_t32 * ___self, Ray_t63 * ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
