#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// CardboardEye
struct CardboardEye_t29;
// StereoController
struct StereoController_t31;
// CardboardHead
struct CardboardHead_t5;
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"

// System.Void CardboardEye::.ctor()
extern "C" void CardboardEye__ctor_m116 (CardboardEye_t29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// StereoController CardboardEye::get_Controller()
extern "C" StereoController_t31 * CardboardEye_get_Controller_m117 (CardboardEye_t29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CardboardHead CardboardEye::get_Head()
extern "C" CardboardHead_t5 * CardboardEye_get_Head_m118 (CardboardEye_t29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::Awake()
extern "C" void CardboardEye_Awake_m119 (CardboardEye_t29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::Start()
extern "C" void CardboardEye_Start_m120 (CardboardEye_t29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::FixProjection(UnityEngine.Matrix4x4&,System.Single,System.Single,System.Single)
extern "C" void CardboardEye_FixProjection_m121 (CardboardEye_t29 * __this, Matrix4x4_t43 * ___proj, float ___near, float ___far, float ___ipdScale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::Setup()
extern "C" void CardboardEye_Setup_m122 (CardboardEye_t29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::Render()
extern "C" void CardboardEye_Render_m123 (CardboardEye_t29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::OnPreCull()
extern "C" void CardboardEye_OnPreCull_m124 (CardboardEye_t29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::CopyCameraAndMakeSideBySide(StereoController,System.Single,System.Single)
extern "C" void CardboardEye_CopyCameraAndMakeSideBySide_m125 (CardboardEye_t29 * __this, StereoController_t31 * ___controller, float ___parx, float ___pary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
