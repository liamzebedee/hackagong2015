#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// CardboardProfile
struct CardboardProfile_t41;
// System.Single[]
struct SingleU5BU5D_t44;
// System.Double[]
struct DoubleU5BU5D_t64;
// System.Double[,]
struct DoubleU5BU2CU5D_t65;
// CardboardProfile/ScreenSizes
#include "AssemblyU2DCSharp_CardboardProfile_ScreenSizes.h"
// CardboardProfile/DeviceTypes
#include "AssemblyU2DCSharp_CardboardProfile_DeviceTypes.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// CardboardProfile/Distortion
#include "AssemblyU2DCSharp_CardboardProfile_Distortion.h"

// System.Void CardboardProfile::.ctor()
extern "C" void CardboardProfile__ctor_m132 (CardboardProfile_t41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardProfile::.cctor()
extern "C" void CardboardProfile__cctor_m133 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CardboardProfile CardboardProfile::Clone()
extern "C" CardboardProfile_t41 * CardboardProfile_Clone_m134 (CardboardProfile_t41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single CardboardProfile::get_VerticalLensOffset()
extern "C" float CardboardProfile_get_VerticalLensOffset_m135 (CardboardProfile_t41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CardboardProfile CardboardProfile::GetKnownProfile(CardboardProfile/ScreenSizes,CardboardProfile/DeviceTypes)
extern "C" CardboardProfile_t41 * CardboardProfile_GetKnownProfile_m136 (Object_t * __this /* static, unused */, int32_t ___screenSize, int32_t ___deviceType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardProfile::GetLeftEyeVisibleTanAngles(System.Single[]&)
extern "C" void CardboardProfile_GetLeftEyeVisibleTanAngles_m137 (CardboardProfile_t41 * __this, SingleU5BU5D_t44** ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardProfile::GetLeftEyeNoLensTanAngles(System.Single[]&)
extern "C" void CardboardProfile_GetLeftEyeNoLensTanAngles_m138 (CardboardProfile_t41 * __this, SingleU5BU5D_t44** ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect CardboardProfile::GetLeftEyeVisibleScreenRect(System.Single[])
extern "C" Rect_t18  CardboardProfile_GetLeftEyeVisibleScreenRect_m139 (CardboardProfile_t41 * __this, SingleU5BU5D_t44* ___undistortedFrustum, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double[] CardboardProfile::solveLeastSquares(System.Double[,],System.Double[])
extern "C" DoubleU5BU5D_t64* CardboardProfile_solveLeastSquares_m140 (Object_t * __this /* static, unused */, DoubleU5BU2CU5D_t65* ___matA, DoubleU5BU5D_t64* ___vecY, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CardboardProfile/Distortion CardboardProfile::ApproximateInverse(System.Single,System.Single,System.Single,System.Int32)
extern "C" Distortion_t37  CardboardProfile_ApproximateInverse_m141 (Object_t * __this /* static, unused */, float ___k1, float ___k2, float ___maxRadius, int32_t ___numSamples, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CardboardProfile/Distortion CardboardProfile::ApproximateInverse(CardboardProfile/Distortion,System.Single,System.Int32)
extern "C" Distortion_t37  CardboardProfile_ApproximateInverse_m142 (Object_t * __this /* static, unused */, Distortion_t37  ___distort, float ___maxRadius, int32_t ___numSamples, const MethodInfo* method) IL2CPP_METHOD_ATTR;
