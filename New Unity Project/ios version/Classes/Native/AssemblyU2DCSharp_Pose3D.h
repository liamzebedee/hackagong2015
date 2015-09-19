#pragma once
#include <stdint.h>
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// Pose3D
struct  Pose3D_t49  : public Object_t
{
	// UnityEngine.Vector3 Pose3D::<Position>k__BackingField
	Vector3_t3  ___U3CPositionU3Ek__BackingField_1;
	// UnityEngine.Quaternion Pose3D::<Orientation>k__BackingField
	Quaternion_t50  ___U3COrientationU3Ek__BackingField_2;
	// UnityEngine.Matrix4x4 Pose3D::<Matrix>k__BackingField
	Matrix4x4_t43  ___U3CMatrixU3Ek__BackingField_3;
};
struct Pose3D_t49_StaticFields{
	// UnityEngine.Matrix4x4 Pose3D::flipZ
	Matrix4x4_t43  ___flipZ_0;
};
