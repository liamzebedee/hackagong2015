#pragma once
#include <stdint.h>
// StereoController
struct StereoController_t31;
// UnityEngine.Camera
struct Camera_t32;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// Cardboard/Eye
#include "AssemblyU2DCSharp_Cardboard_Eye.h"
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMask.h"
// CardboardEye
struct  CardboardEye_t29  : public MonoBehaviour_t2
{
	// Cardboard/Eye CardboardEye::eye
	int32_t ___eye_2;
	// UnityEngine.LayerMask CardboardEye::toggleCullingMask
	LayerMask_t30  ___toggleCullingMask_3;
	// StereoController CardboardEye::controller
	StereoController_t31 * ___controller_4;
	// UnityEngine.Camera CardboardEye::camera
	Camera_t32 * ___camera_5;
};
