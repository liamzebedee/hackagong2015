#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t85;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t46;
// UnityEngine.GameObject
struct GameObject_t47;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t86;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t48;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t87;
// System.String
struct String_t;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void UnityEngine.EventSystems.EventSystem::.ctor()
extern "C" void EventSystem__ctor_m562 (EventSystem_t85 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::.cctor()
extern "C" void EventSystem__cctor_m563 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
extern "C" EventSystem_t85 * EventSystem_get_current_m564 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::set_current(UnityEngine.EventSystems.EventSystem)
extern "C" void EventSystem_set_current_m565 (Object_t * __this /* static, unused */, EventSystem_t85 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.EventSystem::get_sendNavigationEvents()
extern "C" bool EventSystem_get_sendNavigationEvents_m566 (EventSystem_t85 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::set_sendNavigationEvents(System.Boolean)
extern "C" void EventSystem_set_sendNavigationEvents_m567 (EventSystem_t85 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.EventSystem::get_pixelDragThreshold()
extern "C" int32_t EventSystem_get_pixelDragThreshold_m568 (EventSystem_t85 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::set_pixelDragThreshold(System.Int32)
extern "C" void EventSystem_set_pixelDragThreshold_m569 (EventSystem_t85 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::get_currentInputModule()
extern "C" BaseInputModule_t46 * EventSystem_get_currentInputModule_m570 (EventSystem_t85 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_firstSelectedGameObject()
extern "C" GameObject_t47 * EventSystem_get_firstSelectedGameObject_m571 (EventSystem_t85 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::set_firstSelectedGameObject(UnityEngine.GameObject)
extern "C" void EventSystem_set_firstSelectedGameObject_m572 (EventSystem_t85 * __this, GameObject_t47 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_currentSelectedGameObject()
extern "C" GameObject_t47 * EventSystem_get_currentSelectedGameObject_m487 (EventSystem_t85 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_lastSelectedGameObject()
extern "C" GameObject_t47 * EventSystem_get_lastSelectedGameObject_m573 (EventSystem_t85 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::UpdateModules()
extern "C" void EventSystem_UpdateModules_m574 (EventSystem_t85 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.EventSystem::get_alreadySelecting()
extern "C" bool EventSystem_get_alreadySelecting_m575 (EventSystem_t85 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::SetSelectedGameObject(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData)
extern "C" void EventSystem_SetSelectedGameObject_m475 (EventSystem_t85 * __this, GameObject_t47 * ___selected, BaseEventData_t86 * ___pointer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::get_baseEventDataCache()
extern "C" BaseEventData_t86 * EventSystem_get_baseEventDataCache_m576 (EventSystem_t85 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::SetSelectedGameObject(UnityEngine.GameObject)
extern "C" void EventSystem_SetSelectedGameObject_m577 (EventSystem_t85 * __this, GameObject_t47 * ___selected, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.EventSystem::RaycastComparer(UnityEngine.EventSystems.RaycastResult,UnityEngine.EventSystems.RaycastResult)
extern "C" int32_t EventSystem_RaycastComparer_m578 (Object_t * __this /* static, unused */, RaycastResult_t88  ___lhs, RaycastResult_t88  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::RaycastAll(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
extern "C" void EventSystem_RaycastAll_m481 (EventSystem_t85 * __this, PointerEventData_t48 * ___eventData, List_1_t87 * ___raycastResults, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.EventSystem::IsPointerOverGameObject()
extern "C" bool EventSystem_IsPointerOverGameObject_m579 (EventSystem_t85 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.EventSystem::IsPointerOverGameObject(System.Int32)
extern "C" bool EventSystem_IsPointerOverGameObject_m580 (EventSystem_t85 * __this, int32_t ___pointerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::OnEnable()
extern "C" void EventSystem_OnEnable_m581 (EventSystem_t85 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::OnDisable()
extern "C" void EventSystem_OnDisable_m582 (EventSystem_t85 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::TickModules()
extern "C" void EventSystem_TickModules_m583 (EventSystem_t85 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::Update()
extern "C" void EventSystem_Update_m584 (EventSystem_t85 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::ChangeEventModule(UnityEngine.EventSystems.BaseInputModule)
extern "C" void EventSystem_ChangeEventModule_m585 (EventSystem_t85 * __this, BaseInputModule_t46 * ___module, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.EventSystem::ToString()
extern "C" String_t* EventSystem_ToString_m586 (EventSystem_t85 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
