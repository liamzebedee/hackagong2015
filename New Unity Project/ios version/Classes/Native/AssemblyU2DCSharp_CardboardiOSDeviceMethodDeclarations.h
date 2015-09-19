#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// CardboardiOSDevice
struct CardboardiOSDevice_t59;
// System.Collections.Generic.List`1<System.String>
struct List_1_t66;
// System.Uri
struct Uri_t25;
// System.Byte[]
struct ByteU5BU5D_t67;

// System.Void CardboardiOSDevice::.ctor()
extern "C" void CardboardiOSDevice__ctor_m259 (CardboardiOSDevice_t59 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CardboardiOSDevice::SupportsNativeDistortionCorrection(System.Collections.Generic.List`1<System.String>)
extern "C" bool CardboardiOSDevice_SupportsNativeDistortionCorrection_m260 (CardboardiOSDevice_t59 * __this, List_1_t66 * ___diagnostics, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CardboardiOSDevice::SupportsNativeUILayer(System.Collections.Generic.List`1<System.String>)
extern "C" bool CardboardiOSDevice_SupportsNativeUILayer_m261 (CardboardiOSDevice_t59 * __this, List_1_t66 * ___diagnostics, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardiOSDevice::SetVRModeEnabled(System.Boolean)
extern "C" void CardboardiOSDevice_SetVRModeEnabled_m262 (CardboardiOSDevice_t59 * __this, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardiOSDevice::SetSettingsButtonEnabled(System.Boolean)
extern "C" void CardboardiOSDevice_SetSettingsButtonEnabled_m263 (CardboardiOSDevice_t59 * __this, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardiOSDevice::SetAutoDriftCorrectionEnabled(System.Boolean)
extern "C" void CardboardiOSDevice_SetAutoDriftCorrectionEnabled_m264 (CardboardiOSDevice_t59 * __this, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardiOSDevice::SetTapIsTrigger(System.Boolean)
extern "C" void CardboardiOSDevice_SetTapIsTrigger_m265 (CardboardiOSDevice_t59 * __this, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CardboardiOSDevice::SetDefaultDeviceProfile(System.Uri)
extern "C" bool CardboardiOSDevice_SetDefaultDeviceProfile_m266 (CardboardiOSDevice_t59 * __this, Uri_t25 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardiOSDevice::Init()
extern "C" void CardboardiOSDevice_Init_m267 (CardboardiOSDevice_t59 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardiOSDevice::PostRender(System.Boolean)
extern "C" void CardboardiOSDevice_PostRender_m268 (CardboardiOSDevice_t59 * __this, bool ___vrMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardiOSDevice::OnFocus(System.Boolean)
extern "C" void CardboardiOSDevice_OnFocus_m269 (CardboardiOSDevice_t59 * __this, bool ___focus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardiOSDevice::OnPause(System.Boolean)
extern "C" void CardboardiOSDevice_OnPause_m270 (CardboardiOSDevice_t59 * __this, bool ___pause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardiOSDevice::ShowSettingsDialog()
extern "C" void CardboardiOSDevice_ShowSettingsDialog_m271 (CardboardiOSDevice_t59 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CardboardiOSDevice::isOpenGLAPI()
extern "C" bool CardboardiOSDevice_isOpenGLAPI_m272 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardiOSDevice::setVRModeEnabled(System.Boolean)
extern "C" void CardboardiOSDevice_setVRModeEnabled_m273 (Object_t * __this /* static, unused */, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardiOSDevice::setSettingsButtonEnabled(System.Boolean)
extern "C" void CardboardiOSDevice_setSettingsButtonEnabled_m274 (Object_t * __this /* static, unused */, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardiOSDevice::setSyncWithCardboardEnabled(System.Boolean)
extern "C" void CardboardiOSDevice_setSyncWithCardboardEnabled_m275 (Object_t * __this /* static, unused */, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardiOSDevice::readProfile()
extern "C" void CardboardiOSDevice_readProfile_m276 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CardboardiOSDevice::setDefaultDeviceProfile(System.Byte[],System.Int32)
extern "C" bool CardboardiOSDevice_setDefaultDeviceProfile_m277 (Object_t * __this /* static, unused */, ByteU5BU5D_t67* ___profileData, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CardboardiOSDevice::isOnboardingDone()
extern "C" bool CardboardiOSDevice_isOnboardingDone_m278 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardiOSDevice::launchSettingsDialog()
extern "C" void CardboardiOSDevice_launchSettingsDialog_m279 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardiOSDevice::launchOnboardingDialog()
extern "C" void CardboardiOSDevice_launchOnboardingDialog_m280 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
