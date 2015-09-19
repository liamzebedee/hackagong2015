#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// MutablePose3D
struct MutablePose3D_t51;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"

// System.Void MutablePose3D::.ctor()
extern "C" void MutablePose3D__ctor_m170 (MutablePose3D_t51 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MutablePose3D::Set(UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" void MutablePose3D_Set_m171 (MutablePose3D_t51 * __this, Vector3_t3  ___position, Quaternion_t50  ___orientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MutablePose3D::Set(UnityEngine.Matrix4x4)
extern "C" void MutablePose3D_Set_m172 (MutablePose3D_t51 * __this, Matrix4x4_t43  ___matrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MutablePose3D::SetRightHanded(UnityEngine.Matrix4x4)
extern "C" void MutablePose3D_SetRightHanded_m173 (MutablePose3D_t51 * __this, Matrix4x4_t43  ___matrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
