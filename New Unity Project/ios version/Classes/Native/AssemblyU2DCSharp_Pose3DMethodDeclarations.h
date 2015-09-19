#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Pose3D
struct Pose3D_t49;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"

// System.Void Pose3D::.ctor()
extern "C" void Pose3D__ctor_m157 (Pose3D_t49 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pose3D::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" void Pose3D__ctor_m158 (Pose3D_t49 * __this, Vector3_t3  ___position, Quaternion_t50  ___orientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pose3D::.ctor(UnityEngine.Matrix4x4)
extern "C" void Pose3D__ctor_m159 (Pose3D_t49 * __this, Matrix4x4_t43  ___matrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pose3D::.cctor()
extern "C" void Pose3D__cctor_m160 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pose3D::get_Position()
extern "C" Vector3_t3  Pose3D_get_Position_m161 (Pose3D_t49 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pose3D::set_Position(UnityEngine.Vector3)
extern "C" void Pose3D_set_Position_m162 (Pose3D_t49 * __this, Vector3_t3  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion Pose3D::get_Orientation()
extern "C" Quaternion_t50  Pose3D_get_Orientation_m163 (Pose3D_t49 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pose3D::set_Orientation(UnityEngine.Quaternion)
extern "C" void Pose3D_set_Orientation_m164 (Pose3D_t49 * __this, Quaternion_t50  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Pose3D::get_Matrix()
extern "C" Matrix4x4_t43  Pose3D_get_Matrix_m165 (Pose3D_t49 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pose3D::set_Matrix(UnityEngine.Matrix4x4)
extern "C" void Pose3D_set_Matrix_m166 (Pose3D_t49 * __this, Matrix4x4_t43  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Pose3D::get_RightHandedMatrix()
extern "C" Matrix4x4_t43  Pose3D_get_RightHandedMatrix_m167 (Pose3D_t49 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pose3D::Set(UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" void Pose3D_Set_m168 (Pose3D_t49 * __this, Vector3_t3  ___position, Quaternion_t50  ___orientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pose3D::Set(UnityEngine.Matrix4x4)
extern "C" void Pose3D_Set_m169 (Pose3D_t49 * __this, Matrix4x4_t43  ___matrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
