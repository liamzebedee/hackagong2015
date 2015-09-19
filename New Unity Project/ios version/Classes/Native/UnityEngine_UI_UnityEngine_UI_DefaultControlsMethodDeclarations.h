#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GameObject
struct GameObject_t47;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t182;
// UnityEngine.UI.Selectable
struct Selectable_t171;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.UI.DefaultControls/Resources
#include "UnityEngine_UI_UnityEngine_UI_DefaultControls_Resources.h"

// System.Void UnityEngine.UI.DefaultControls::.cctor()
extern "C" void DefaultControls__cctor_m892 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateUIElementRoot(System.String,UnityEngine.Vector2)
extern "C" GameObject_t47 * DefaultControls_CreateUIElementRoot_m893 (Object_t * __this /* static, unused */, String_t* ___name, Vector2_t15  ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateUIObject(System.String,UnityEngine.GameObject)
extern "C" GameObject_t47 * DefaultControls_CreateUIObject_m894 (Object_t * __this /* static, unused */, String_t* ___name, GameObject_t47 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.DefaultControls::SetDefaultTextValues(UnityEngine.UI.Text)
extern "C" void DefaultControls_SetDefaultTextValues_m895 (Object_t * __this /* static, unused */, Text_t182 * ___lbl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.DefaultControls::SetDefaultColorTransitionValues(UnityEngine.UI.Selectable)
extern "C" void DefaultControls_SetDefaultColorTransitionValues_m896 (Object_t * __this /* static, unused */, Selectable_t171 * ___slider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.DefaultControls::SetParentAndAlign(UnityEngine.GameObject,UnityEngine.GameObject)
extern "C" void DefaultControls_SetParentAndAlign_m897 (Object_t * __this /* static, unused */, GameObject_t47 * ___child, GameObject_t47 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.DefaultControls::SetLayerRecursively(UnityEngine.GameObject,System.Int32)
extern "C" void DefaultControls_SetLayerRecursively_m898 (Object_t * __this /* static, unused */, GameObject_t47 * ___go, int32_t ___layer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreatePanel(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t47 * DefaultControls_CreatePanel_m899 (Object_t * __this /* static, unused */, Resources_t178  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateButton(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t47 * DefaultControls_CreateButton_m900 (Object_t * __this /* static, unused */, Resources_t178  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateText(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t47 * DefaultControls_CreateText_m901 (Object_t * __this /* static, unused */, Resources_t178  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateImage(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t47 * DefaultControls_CreateImage_m902 (Object_t * __this /* static, unused */, Resources_t178  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateRawImage(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t47 * DefaultControls_CreateRawImage_m903 (Object_t * __this /* static, unused */, Resources_t178  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateSlider(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t47 * DefaultControls_CreateSlider_m904 (Object_t * __this /* static, unused */, Resources_t178  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateScrollbar(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t47 * DefaultControls_CreateScrollbar_m905 (Object_t * __this /* static, unused */, Resources_t178  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateToggle(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t47 * DefaultControls_CreateToggle_m906 (Object_t * __this /* static, unused */, Resources_t178  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateInputField(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t47 * DefaultControls_CreateInputField_m907 (Object_t * __this /* static, unused */, Resources_t178  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateDropdown(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t47 * DefaultControls_CreateDropdown_m908 (Object_t * __this /* static, unused */, Resources_t178  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateScrollView(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t47 * DefaultControls_CreateScrollView_m909 (Object_t * __this /* static, unused */, Resources_t178  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
