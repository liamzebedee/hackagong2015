#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUILayoutUtility/LayoutCache
struct LayoutCache_t541;
// UnityEngine.GUIStyle
struct GUIStyle_t545;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t644;
// UnityEngine.GUILayoutGroup
struct GUILayoutGroup_t542;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UnityEngine.GUILayoutUtility::.cctor()
extern "C" void GUILayoutUtility__cctor_m3246 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutUtility/LayoutCache UnityEngine.GUILayoutUtility::SelectIDList(System.Int32,System.Boolean)
extern "C" LayoutCache_t541 * GUILayoutUtility_SelectIDList_m3247 (Object_t * __this /* static, unused */, int32_t ___instanceID, bool ___isWindow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::Begin(System.Int32)
extern "C" void GUILayoutUtility_Begin_m3248 (Object_t * __this /* static, unused */, int32_t ___instanceID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::BeginWindow(System.Int32,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" void GUILayoutUtility_BeginWindow_m3249 (Object_t * __this /* static, unused */, int32_t ___windowID, GUIStyle_t545 * ___style, GUILayoutOptionU5BU5D_t644* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::Layout()
extern "C" void GUILayoutUtility_Layout_m3250 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::LayoutFromEditorWindow()
extern "C" void GUILayoutUtility_LayoutFromEditorWindow_m3251 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::LayoutFreeGroup(UnityEngine.GUILayoutGroup)
extern "C" void GUILayoutUtility_LayoutFreeGroup_m3252 (Object_t * __this /* static, unused */, GUILayoutGroup_t542 * ___toplevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::LayoutSingleGroup(UnityEngine.GUILayoutGroup)
extern "C" void GUILayoutUtility_LayoutSingleGroup_m3253 (Object_t * __this /* static, unused */, GUILayoutGroup_t542 * ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUILayoutUtility::get_spaceStyle()
extern "C" GUIStyle_t545 * GUILayoutUtility_get_spaceStyle_m3254 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::Internal_GetWindowRect(System.Int32)
extern "C" Rect_t18  GUILayoutUtility_Internal_GetWindowRect_m3255 (Object_t * __this /* static, unused */, int32_t ___windowID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::Internal_MoveWindow(System.Int32,UnityEngine.Rect)
extern "C" void GUILayoutUtility_Internal_MoveWindow_m3256 (Object_t * __this /* static, unused */, int32_t ___windowID, Rect_t18  ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::INTERNAL_CALL_Internal_MoveWindow(System.Int32,UnityEngine.Rect&)
extern "C" void GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m3257 (Object_t * __this /* static, unused */, int32_t ___windowID, Rect_t18 * ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
