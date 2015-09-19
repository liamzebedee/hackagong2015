#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Button
struct Button_t170;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t167;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t48;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t86;
// System.Collections.IEnumerator
struct IEnumerator_t62;

// System.Void UnityEngine.UI.Button::.ctor()
extern "C" void Button__ctor_m854 (Button_t170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
extern "C" ButtonClickedEvent_t167 * Button_get_onClick_m855 (Button_t170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::set_onClick(UnityEngine.UI.Button/ButtonClickedEvent)
extern "C" void Button_set_onClick_m856 (Button_t170 * __this, ButtonClickedEvent_t167 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::Press()
extern "C" void Button_Press_m857 (Button_t170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C" void Button_OnPointerClick_m858 (Button_t170 * __this, PointerEventData_t48 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnSubmit(UnityEngine.EventSystems.BaseEventData)
extern "C" void Button_OnSubmit_m859 (Button_t170 * __this, BaseEventData_t86 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.Button::OnFinishSubmit()
extern "C" Object_t * Button_OnFinishSubmit_m860 (Button_t170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
