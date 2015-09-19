#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Cardboard
struct Cardboard_t24;
// System.Action
struct Action_t27;
// UnityEngine.RenderTexture
struct RenderTexture_t12;
// CardboardProfile
struct CardboardProfile_t41;
// Pose3D
struct Pose3D_t49;
// System.Collections.IEnumerator
struct IEnumerator_t62;
// Cardboard/Eye
#include "AssemblyU2DCSharp_Cardboard_Eye.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// Cardboard/Distortion
#include "AssemblyU2DCSharp_Cardboard_Distortion.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void Cardboard::.ctor()
extern "C" void Cardboard__ctor_m46 (Cardboard_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::.cctor()
extern "C" void Cardboard__cctor_m47 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::add_OnTrigger(System.Action)
extern "C" void Cardboard_add_OnTrigger_m48 (Cardboard_t24 * __this, Action_t27 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::remove_OnTrigger(System.Action)
extern "C" void Cardboard_remove_OnTrigger_m49 (Cardboard_t24 * __this, Action_t27 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::add_OnTilt(System.Action)
extern "C" void Cardboard_add_OnTilt_m50 (Cardboard_t24 * __this, Action_t27 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::remove_OnTilt(System.Action)
extern "C" void Cardboard_remove_OnTilt_m51 (Cardboard_t24 * __this, Action_t27 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Cardboard Cardboard::get_SDK()
extern "C" Cardboard_t24 * Cardboard_get_SDK_m52 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_DistortionCorrection()
extern "C" bool Cardboard_get_DistortionCorrection_m53 (Cardboard_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_DistortionCorrection(System.Boolean)
extern "C" void Cardboard_set_DistortionCorrection_m54 (Cardboard_t24 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_VRModeEnabled()
extern "C" bool Cardboard_get_VRModeEnabled_m55 (Cardboard_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_VRModeEnabled(System.Boolean)
extern "C" void Cardboard_set_VRModeEnabled_m56 (Cardboard_t24 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_EnableAlignmentMarker()
extern "C" bool Cardboard_get_EnableAlignmentMarker_m57 (Cardboard_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_EnableAlignmentMarker(System.Boolean)
extern "C" void Cardboard_set_EnableAlignmentMarker_m58 (Cardboard_t24 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_EnableSettingsButton()
extern "C" bool Cardboard_get_EnableSettingsButton_m59 (Cardboard_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_EnableSettingsButton(System.Boolean)
extern "C" void Cardboard_set_EnableSettingsButton_m60 (Cardboard_t24 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_TapIsTrigger()
extern "C" bool Cardboard_get_TapIsTrigger_m61 (Cardboard_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_TapIsTrigger(System.Boolean)
extern "C" void Cardboard_set_TapIsTrigger_m62 (Cardboard_t24 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Cardboard::get_NeckModelScale()
extern "C" float Cardboard_get_NeckModelScale_m63 (Cardboard_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_NeckModelScale(System.Single)
extern "C" void Cardboard_set_NeckModelScale_m64 (Cardboard_t24 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_AutoDriftCorrection()
extern "C" bool Cardboard_get_AutoDriftCorrection_m65 (Cardboard_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_AutoDriftCorrection(System.Boolean)
extern "C" void Cardboard_set_AutoDriftCorrection_m66 (Cardboard_t24 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_SyncWithCardboardApp()
extern "C" bool Cardboard_get_SyncWithCardboardApp_m67 (Cardboard_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_SyncWithCardboardApp(System.Boolean)
extern "C" void Cardboard_set_SyncWithCardboardApp_m68 (Cardboard_t24 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_NativeDistortionCorrectionSupported()
extern "C" bool Cardboard_get_NativeDistortionCorrectionSupported_m69 (Cardboard_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_NativeDistortionCorrectionSupported(System.Boolean)
extern "C" void Cardboard_set_NativeDistortionCorrectionSupported_m70 (Cardboard_t24 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_NativeUILayerSupported()
extern "C" bool Cardboard_get_NativeUILayerSupported_m71 (Cardboard_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_NativeUILayerSupported(System.Boolean)
extern "C" void Cardboard_set_NativeUILayerSupported_m72 (Cardboard_t24 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture Cardboard::get_StereoScreen()
extern "C" RenderTexture_t12 * Cardboard_get_StereoScreen_m73 (Cardboard_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_StereoScreen(UnityEngine.RenderTexture)
extern "C" void Cardboard_set_StereoScreen_m74 (Cardboard_t24 * __this, RenderTexture_t12 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_UseDistortionEffect()
extern "C" bool Cardboard_get_UseDistortionEffect_m75 (Cardboard_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CardboardProfile Cardboard::get_Profile()
extern "C" CardboardProfile_t41 * Cardboard_get_Profile_m76 (Cardboard_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pose3D Cardboard::get_HeadPose()
extern "C" Pose3D_t49 * Cardboard_get_HeadPose_m77 (Cardboard_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pose3D Cardboard::EyePose(Cardboard/Eye)
extern "C" Pose3D_t49 * Cardboard_EyePose_m78 (Cardboard_t24 * __this, int32_t ___eye, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Cardboard::Projection(Cardboard/Eye,Cardboard/Distortion)
extern "C" Matrix4x4_t43  Cardboard_Projection_m79 (Cardboard_t24 * __this, int32_t ___eye, int32_t ___distortion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Cardboard::Viewport(Cardboard/Eye,Cardboard/Distortion)
extern "C" Rect_t18  Cardboard_Viewport_m80 (Cardboard_t24 * __this, int32_t ___eye, int32_t ___distortion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Cardboard::get_ComfortableViewingRange()
extern "C" Vector2_t15  Cardboard_get_ComfortableViewingRange_m81 (Cardboard_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::InitDevice()
extern "C" void Cardboard_InitDevice_m82 (Cardboard_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::Awake()
extern "C" void Cardboard_Awake_m83 (Cardboard_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_Triggered()
extern "C" bool Cardboard_get_Triggered_m84 (Cardboard_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_Triggered(System.Boolean)
extern "C" void Cardboard_set_Triggered_m85 (Cardboard_t24 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_Tilted()
extern "C" bool Cardboard_get_Tilted_m86 (Cardboard_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_Tilted(System.Boolean)
extern "C" void Cardboard_set_Tilted_m87 (Cardboard_t24 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::UpdateState()
extern "C" void Cardboard_UpdateState_m88 (Cardboard_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::DispatchEvents()
extern "C" void Cardboard_DispatchEvents_m89 (Cardboard_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::AddDummyCamera()
extern "C" void Cardboard_AddDummyCamera_m90 (Cardboard_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Cardboard::EndOfFrame()
extern "C" Object_t * Cardboard_EndOfFrame_m91 (Cardboard_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture Cardboard::CreateStereoScreen()
extern "C" RenderTexture_t12 * Cardboard_CreateStereoScreen_m92 (Cardboard_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::Recenter()
extern "C" void Cardboard_Recenter_m93 (Cardboard_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::SetTouchCoordinates(System.Int32,System.Int32)
extern "C" void Cardboard_SetTouchCoordinates_m94 (Cardboard_t24 * __this, int32_t ___x, int32_t ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::ShowSettingsDialog()
extern "C" void Cardboard_ShowSettingsDialog_m95 (Cardboard_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::OnEnable()
extern "C" void Cardboard_OnEnable_m96 (Cardboard_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::OnDisable()
extern "C" void Cardboard_OnDisable_m97 (Cardboard_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::OnApplicationPause(System.Boolean)
extern "C" void Cardboard_OnApplicationPause_m98 (Cardboard_t24 * __this, bool ___pause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::OnApplicationFocus(System.Boolean)
extern "C" void Cardboard_OnApplicationFocus_m99 (Cardboard_t24 * __this, bool ___focus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::OnLevelWasLoaded(System.Int32)
extern "C" void Cardboard_OnLevelWasLoaded_m100 (Cardboard_t24 * __this, int32_t ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::OnDestroy()
extern "C" void Cardboard_OnDestroy_m101 (Cardboard_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::OnApplicationQuit()
extern "C" void Cardboard_OnApplicationQuit_m102 (Cardboard_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_nativeDistortionCorrection()
extern "C" bool Cardboard_get_nativeDistortionCorrection_m103 (Cardboard_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_nativeDistortionCorrection(System.Boolean)
extern "C" void Cardboard_set_nativeDistortionCorrection_m104 (Cardboard_t24 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_InCardboard()
extern "C" bool Cardboard_get_InCardboard_m105 (Cardboard_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_CardboardTriggered()
extern "C" bool Cardboard_get_CardboardTriggered_m106 (Cardboard_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Cardboard::get_HeadView()
extern "C" Matrix4x4_t43  Cardboard_get_HeadView_m107 (Cardboard_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion Cardboard::get_HeadRotation()
extern "C" Quaternion_t50  Cardboard_get_HeadRotation_m108 (Cardboard_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Cardboard::get_HeadPosition()
extern "C" Vector3_t3  Cardboard_get_HeadPosition_m109 (Cardboard_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Cardboard::EyeView(Cardboard/Eye)
extern "C" Matrix4x4_t43  Cardboard_EyeView_m110 (Cardboard_t24 * __this, int32_t ___eye, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Cardboard::EyeOffset(Cardboard/Eye)
extern "C" Vector3_t3  Cardboard_EyeOffset_m111 (Cardboard_t24 * __this, int32_t ___eye, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Cardboard::UndistortedProjection(Cardboard/Eye)
extern "C" Matrix4x4_t43  Cardboard_UndistortedProjection_m112 (Cardboard_t24 * __this, int32_t ___eye, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Cardboard::EyeRect(Cardboard/Eye)
extern "C" Rect_t18  Cardboard_EyeRect_m113 (Cardboard_t24 * __this, int32_t ___eye, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Cardboard::get_MinimumComfortDistance()
extern "C" float Cardboard_get_MinimumComfortDistance_m114 (Cardboard_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Cardboard::get_MaximumComfortDistance()
extern "C" float Cardboard_get_MaximumComfortDistance_m115 (Cardboard_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
