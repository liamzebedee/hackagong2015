#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Transform
struct Transform_t33;
// System.Collections.IEnumerator
struct IEnumerator_t62;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"

// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" Vector3_t3  Transform_get_position_m450 (Transform_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C" void Transform_set_position_m457 (Transform_t33 * __this, Vector3_t3  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_position(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_position_m2908 (Transform_t33 * __this, Vector3_t3 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_position(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_position_m2909 (Transform_t33 * __this, Vector3_t3 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
extern "C" Vector3_t3  Transform_get_localPosition_m284 (Transform_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern "C" void Transform_set_localPosition_m290 (Transform_t33 * __this, Vector3_t3  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_localPosition(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_localPosition_m2910 (Transform_t33 * __this, Vector3_t3 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_localPosition(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_localPosition_m2911 (Transform_t33 * __this, Vector3_t3 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
extern "C" Vector3_t3  Transform_get_forward_m451 (Transform_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C" Quaternion_t50  Transform_get_rotation_m453 (Transform_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C" void Transform_set_rotation_m455 (Transform_t33 * __this, Quaternion_t50  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_rotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_get_rotation_m2912 (Transform_t33 * __this, Quaternion_t50 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_rotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_set_rotation_m2913 (Transform_t33 * __this, Quaternion_t50 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
extern "C" Quaternion_t50  Transform_get_localRotation_m2262 (Transform_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
extern "C" void Transform_set_localRotation_m444 (Transform_t33 * __this, Quaternion_t50  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_localRotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_get_localRotation_m2914 (Transform_t33 * __this, Quaternion_t50 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_localRotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_set_localRotation_m2915 (Transform_t33 * __this, Quaternion_t50 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
extern "C" Vector3_t3  Transform_get_localScale_m2264 (Transform_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C" void Transform_set_localScale_m352 (Transform_t33 * __this, Vector3_t3  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_localScale(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_localScale_m2916 (Transform_t33 * __this, Vector3_t3 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_localScale(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_localScale_m2917 (Transform_t33 * __this, Vector3_t3 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
extern "C" Transform_t33 * Transform_get_parent_m392 (Transform_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
extern "C" void Transform_set_parent_m378 (Transform_t33 * __this, Transform_t33 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::get_parentInternal()
extern "C" Transform_t33 * Transform_get_parentInternal_m2918 (Transform_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_parentInternal(UnityEngine.Transform)
extern "C" void Transform_set_parentInternal_m2919 (Transform_t33 * __this, Transform_t33 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
extern "C" void Transform_SetParent_m2256 (Transform_t33 * __this, Transform_t33 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
extern "C" void Transform_SetParent_m2031 (Transform_t33 * __this, Transform_t33 * ___parent, bool ___worldPositionStays, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_worldToLocalMatrix()
extern "C" Matrix4x4_t43  Transform_get_worldToLocalMatrix_m2324 (Transform_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_worldToLocalMatrix(UnityEngine.Matrix4x4&)
extern "C" void Transform_INTERNAL_get_worldToLocalMatrix_m2920 (Transform_t33 * __this, Matrix4x4_t43 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
extern "C" Vector3_t3  Transform_TransformPoint_m2343 (Transform_t33 * __this, Vector3_t3  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_TransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t3  Transform_INTERNAL_CALL_TransformPoint_m2921 (Object_t * __this /* static, unused */, Transform_t33 * ___self, Vector3_t3 * ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
extern "C" Vector3_t3  Transform_InverseTransformPoint_m2089 (Transform_t33 * __this, Vector3_t3  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_InverseTransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t3  Transform_INTERNAL_CALL_InverseTransformPoint_m2922 (Object_t * __this /* static, unused */, Transform_t33 * ___self, Vector3_t3 * ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Transform::get_childCount()
extern "C" int32_t Transform_get_childCount_m2035 (Transform_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::SetAsFirstSibling()
extern "C" void Transform_SetAsFirstSibling_m2257 (Transform_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
extern "C" Vector3_t3  Transform_get_lossyScale_m408 (Transform_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_lossyScale(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_lossyScale_m2923 (Transform_t33 * __this, Vector3_t3 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Transform::IsChildOf(UnityEngine.Transform)
extern "C" bool Transform_IsChildOf_m2071 (Transform_t33 * __this, Transform_t33 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
extern "C" Object_t * Transform_GetEnumerator_m2924 (Transform_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
extern "C" Transform_t33 * Transform_GetChild_m2034 (Transform_t33 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
