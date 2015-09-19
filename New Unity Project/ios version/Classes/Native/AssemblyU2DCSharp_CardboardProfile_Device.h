#pragma once
#include <stdint.h>
// System.ValueType
#include "mscorlib_System_ValueType.h"
// CardboardProfile/Lenses
#include "AssemblyU2DCSharp_CardboardProfile_Lenses.h"
// CardboardProfile/MaxFOV
#include "AssemblyU2DCSharp_CardboardProfile_MaxFOV.h"
// CardboardProfile/Distortion
#include "AssemblyU2DCSharp_CardboardProfile_Distortion.h"
// CardboardProfile/Device
struct  Device_t38 
{
	// CardboardProfile/Lenses CardboardProfile/Device::lenses
	Lenses_t35  ___lenses_0;
	// CardboardProfile/MaxFOV CardboardProfile/Device::maxFOV
	MaxFOV_t36  ___maxFOV_1;
	// CardboardProfile/Distortion CardboardProfile/Device::distortion
	Distortion_t37  ___distortion_2;
	// CardboardProfile/Distortion CardboardProfile/Device::inverse
	Distortion_t37  ___inverse_3;
};
