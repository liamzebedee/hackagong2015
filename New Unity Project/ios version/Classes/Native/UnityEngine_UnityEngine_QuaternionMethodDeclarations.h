#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" void Quaternion__ctor_m2651 (Quaternion_t50 * __this, float ___x, float ___y, float ___z, float ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C" Quaternion_t50  Quaternion_get_identity_m443 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" float Quaternion_Dot_m2652 (Object_t * __this /* static, unused */, Quaternion_t50  ___a, Quaternion_t50  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Quaternion_t50  Quaternion_LookRotation_m519 (Object_t * __this /* static, unused */, Vector3_t3  ___forward, Vector3_t3  ___upwards, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_LookRotation(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" Quaternion_t50  Quaternion_INTERNAL_CALL_LookRotation_m2653 (Object_t * __this /* static, unused */, Vector3_t3 * ___forward, Vector3_t3 * ___upwards, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
extern "C" Quaternion_t50  Quaternion_Inverse_m2342 (Object_t * __this /* static, unused */, Quaternion_t50  ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Inverse(UnityEngine.Quaternion&)
extern "C" Quaternion_t50  Quaternion_INTERNAL_CALL_Inverse_m2654 (Object_t * __this /* static, unused */, Quaternion_t50 * ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Quaternion::ToString()
extern "C" String_t* Quaternion_ToString_m2655 (Quaternion_t50 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Quaternion::GetHashCode()
extern "C" int32_t Quaternion_GetHashCode_m2656 (Quaternion_t50 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::Equals(System.Object)
extern "C" bool Quaternion_Equals_m2657 (Quaternion_t50 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" Quaternion_t50  Quaternion_op_Multiply_m454 (Object_t * __this /* static, unused */, Quaternion_t50  ___lhs, Quaternion_t50  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" Vector3_t3  Quaternion_op_Multiply_m456 (Object_t * __this /* static, unused */, Quaternion_t50  ___rotation, Vector3_t3  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::op_Inequality(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" bool Quaternion_op_Inequality_m2263 (Object_t * __this /* static, unused */, Quaternion_t50  ___lhs, Quaternion_t50  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
