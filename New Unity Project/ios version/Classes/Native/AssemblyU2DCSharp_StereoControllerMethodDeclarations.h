#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// StereoController
struct StereoController_t31;
// CardboardEye[]
struct CardboardEyeU5BU5D_t54;
// CardboardHead
struct CardboardHead_t5;
// UnityEngine.RenderTexture
struct RenderTexture_t12;
// System.Collections.IEnumerator
struct IEnumerator_t62;
// CardboardEye
struct CardboardEye_t29;
// Cardboard/Eye
#include "AssemblyU2DCSharp_Cardboard_Eye.h"

// System.Void StereoController::.ctor()
extern "C" void StereoController__ctor_m183 (StereoController_t31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CardboardEye[] StereoController::get_Eyes()
extern "C" CardboardEyeU5BU5D_t54* StereoController_get_Eyes_m184 (StereoController_t31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::InvalidateEyes()
extern "C" void StereoController_InvalidateEyes_m185 (StereoController_t31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CardboardHead StereoController::get_Head()
extern "C" CardboardHead_t5 * StereoController_get_Head_m186 (StereoController_t31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture StereoController::get_StereoScreen()
extern "C" RenderTexture_t12 * StereoController_get_StereoScreen_m187 (StereoController_t31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 StereoController::get_ScreenHeight()
extern "C" int32_t StereoController_get_ScreenHeight_m188 (StereoController_t31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::Awake()
extern "C" void StereoController_Awake_m189 (StereoController_t31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::AddStereoRig()
extern "C" void StereoController_AddStereoRig_m190 (StereoController_t31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::CreateEye(Cardboard/Eye)
extern "C" void StereoController_CreateEye_m191 (StereoController_t31 * __this, int32_t ___eye, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::ComputeStereoAdjustment(System.Single,System.Single,System.Single&,System.Single&)
extern "C" void StereoController_ComputeStereoAdjustment_m192 (StereoController_t31 * __this, float ___proj11, float ___zScale, float* ___ipdScale, float* ___eyeOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::OnEnable()
extern "C" void StereoController_OnEnable_m193 (StereoController_t31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::OnDisable()
extern "C" void StereoController_OnDisable_m194 (StereoController_t31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::OnPreCull()
extern "C" void StereoController_OnPreCull_m195 (StereoController_t31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator StereoController::EndOfFrame()
extern "C" Object_t * StereoController_EndOfFrame_m196 (StereoController_t31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean StereoController::<get_Eyes>m__0(CardboardEye)
extern "C" bool StereoController_U3Cget_EyesU3Em__0_m197 (StereoController_t31 * __this, CardboardEye_t29 * ___eye, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CardboardHead StereoController::<get_Head>m__1(CardboardEye)
extern "C" CardboardHead_t5 * StereoController_U3Cget_HeadU3Em__1_m198 (Object_t * __this /* static, unused */, CardboardEye_t29 * ___eye, const MethodInfo* method) IL2CPP_METHOD_ATTR;
