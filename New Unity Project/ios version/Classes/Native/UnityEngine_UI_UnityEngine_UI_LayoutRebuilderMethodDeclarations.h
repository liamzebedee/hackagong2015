#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.RectTransform
struct RectTransform_t184;
// UnityEngine.Transform
struct Transform_t33;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t350;
// UnityEngine.Events.UnityAction`1<UnityEngine.Component>
struct UnityAction_1_t307;
// System.String
struct String_t;
// UnityEngine.Component
struct Component_t70;
// UnityEngine.UI.LayoutRebuilder
#include "UnityEngine_UI_UnityEngine_UI_LayoutRebuilder.h"
// UnityEngine.UI.CanvasUpdate
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate.h"

// System.Void UnityEngine.UI.LayoutRebuilder::.ctor(UnityEngine.RectTransform)
extern "C" void LayoutRebuilder__ctor_m1814 (LayoutRebuilder_t306 * __this, RectTransform_t184 * ___controller, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::.cctor()
extern "C" void LayoutRebuilder__cctor_m1815 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::UnityEngine.UI.ICanvasElement.Rebuild(UnityEngine.UI.CanvasUpdate)
extern "C" void LayoutRebuilder_UnityEngine_UI_ICanvasElement_Rebuild_m1816 (LayoutRebuilder_t306 * __this, int32_t ___executing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::ReapplyDrivenProperties(UnityEngine.RectTransform)
extern "C" void LayoutRebuilder_ReapplyDrivenProperties_m1817 (Object_t * __this /* static, unused */, RectTransform_t184 * ___driven, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.LayoutRebuilder::get_transform()
extern "C" Transform_t33 * LayoutRebuilder_get_transform_m1818 (LayoutRebuilder_t306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::IsDestroyed()
extern "C" bool LayoutRebuilder_IsDestroyed_m1819 (LayoutRebuilder_t306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::StripDisabledBehavioursFromList(System.Collections.Generic.List`1<UnityEngine.Component>)
extern "C" void LayoutRebuilder_StripDisabledBehavioursFromList_m1820 (Object_t * __this /* static, unused */, List_1_t350 * ___components, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::ForceRebuildLayoutImmediate(UnityEngine.RectTransform)
extern "C" void LayoutRebuilder_ForceRebuildLayoutImmediate_m1821 (Object_t * __this /* static, unused */, RectTransform_t184 * ___layoutRoot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::PerformLayoutControl(UnityEngine.RectTransform,UnityEngine.Events.UnityAction`1<UnityEngine.Component>)
extern "C" void LayoutRebuilder_PerformLayoutControl_m1822 (LayoutRebuilder_t306 * __this, RectTransform_t184 * ___rect, UnityAction_1_t307 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::PerformLayoutCalculation(UnityEngine.RectTransform,UnityEngine.Events.UnityAction`1<UnityEngine.Component>)
extern "C" void LayoutRebuilder_PerformLayoutCalculation_m1823 (LayoutRebuilder_t306 * __this, RectTransform_t184 * ___rect, UnityAction_1_t307 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::MarkLayoutForRebuild(UnityEngine.RectTransform)
extern "C" void LayoutRebuilder_MarkLayoutForRebuild_m1824 (Object_t * __this /* static, unused */, RectTransform_t184 * ___rect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::ValidLayoutGroup(UnityEngine.RectTransform)
extern "C" bool LayoutRebuilder_ValidLayoutGroup_m1825 (Object_t * __this /* static, unused */, RectTransform_t184 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::ValidController(UnityEngine.RectTransform)
extern "C" bool LayoutRebuilder_ValidController_m1826 (Object_t * __this /* static, unused */, RectTransform_t184 * ___layoutRoot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::MarkLayoutRootForRebuild(UnityEngine.RectTransform)
extern "C" void LayoutRebuilder_MarkLayoutRootForRebuild_m1827 (Object_t * __this /* static, unused */, RectTransform_t184 * ___controller, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::Equals(UnityEngine.UI.LayoutRebuilder)
extern "C" bool LayoutRebuilder_Equals_m1828 (LayoutRebuilder_t306 * __this, LayoutRebuilder_t306  ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.LayoutRebuilder::GetHashCode()
extern "C" int32_t LayoutRebuilder_GetHashCode_m1829 (LayoutRebuilder_t306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.UI.LayoutRebuilder::ToString()
extern "C" String_t* LayoutRebuilder_ToString_m1830 (LayoutRebuilder_t306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::<Rebuild>m__8(UnityEngine.Component)
extern "C" void LayoutRebuilder_U3CRebuildU3Em__8_m1831 (Object_t * __this /* static, unused */, Component_t70 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::<Rebuild>m__9(UnityEngine.Component)
extern "C" void LayoutRebuilder_U3CRebuildU3Em__9_m1832 (Object_t * __this /* static, unused */, Component_t70 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::<Rebuild>m__A(UnityEngine.Component)
extern "C" void LayoutRebuilder_U3CRebuildU3Em__A_m1833 (Object_t * __this /* static, unused */, Component_t70 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::<Rebuild>m__B(UnityEngine.Component)
extern "C" void LayoutRebuilder_U3CRebuildU3Em__B_m1834 (Object_t * __this /* static, unused */, Component_t70 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::<StripDisabledBehavioursFromList>m__C(UnityEngine.Component)
extern "C" bool LayoutRebuilder_U3CStripDisabledBehavioursFromListU3Em__C_m1835 (Object_t * __this /* static, unused */, Component_t70 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
