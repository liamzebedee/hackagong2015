#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>

// System.Array
#include "mscorlib_System_Array.h"

// <Module>
#include "AssemblyU2DCSharp_U3CModuleU3E.h"
// <Module>
#include "AssemblyU2DCSharp_U3CModuleU3EMethodDeclarations.h"
// Teleport
#include "AssemblyU2DCSharp_Teleport.h"
// Teleport
#include "AssemblyU2DCSharp_TeleportMethodDeclarations.h"
// System.Void
#include "mscorlib_System_Void.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_Renderer.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// Cardboard
#include "AssemblyU2DCSharp_Cardboard.h"
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_RendererMethodDeclarations.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
// Cardboard
#include "AssemblyU2DCSharp_CardboardMethodDeclarations.h"
// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
struct Renderer_t68;
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
struct Object_t;
// Declaration !!0 UnityEngine.Component::GetComponent<System.Object>()
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" Object_t * Component_GetComponent_TisObject_t_m295_gshared (Component_t70 * __this, const MethodInfo* method);
#define Component_GetComponent_TisObject_t_m295(__this, method) (( Object_t * (*) (Component_t70 *, const MethodInfo*))Component_GetComponent_TisObject_t_m295_gshared)(__this, method)
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
#define Component_GetComponent_TisRenderer_t68_m285(__this, method) (( Renderer_t68 * (*) (Component_t70 *, const MethodInfo*))Component_GetComponent_TisObject_t_m295_gshared)(__this, method)
// System.Void Teleport::.ctor()
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern "C" void Teleport__ctor_m0 (Teleport_t1 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m282(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Teleport::Start()
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// Teleport
#include "AssemblyU2DCSharp_TeleportMethodDeclarations.h"
extern "C" void Teleport_Start_m1 (Teleport_t1 * __this, const MethodInfo* method)
{
	{
		Transform_t33 * L_0 = Component_get_transform_m283(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t3  L_1 = Transform_get_localPosition_m284(L_0, /*hidden argument*/NULL);
		__this->___startingPosition_2 = L_1;
		Teleport_SetGazedAt_m2(__this, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Teleport::SetGazedAt(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_RendererMethodDeclarations.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
extern const MethodInfo* Component_GetComponent_TisRenderer_t68_m285_MethodInfo_var;
extern "C" void Teleport_SetGazedAt_m2 (Teleport_t1 * __this, bool ___gazedAt, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisRenderer_t68_m285_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483649);
		s_Il2CppMethodIntialized = true;
	}
	Material_t42 * G_B2_0 = {0};
	Material_t42 * G_B1_0 = {0};
	Color_t11  G_B3_0 = {0};
	Material_t42 * G_B3_1 = {0};
	{
		Renderer_t68 * L_0 = Component_GetComponent_TisRenderer_t68_m285(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t68_m285_MethodInfo_var);
		NullCheck(L_0);
		Material_t42 * L_1 = Renderer_get_material_m286(L_0, /*hidden argument*/NULL);
		bool L_2 = ___gazedAt;
		G_B1_0 = L_1;
		if (!L_2)
		{
			G_B2_0 = L_1;
			goto IL_001b;
		}
	}
	{
		Color_t11  L_3 = Color_get_green_m287(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_0020;
	}

IL_001b:
	{
		Color_t11  L_4 = Color_get_red_m288(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_0020:
	{
		NullCheck(G_B3_1);
		Material_set_color_m289(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Teleport::Reset()
extern "C" void Teleport_Reset_m3 (Teleport_t1 * __this, const MethodInfo* method)
{
	{
		Transform_t33 * L_0 = Component_get_transform_m283(__this, /*hidden argument*/NULL);
		Vector3_t3  L_1 = (__this->___startingPosition_2);
		NullCheck(L_0);
		Transform_set_localPosition_m290(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Teleport::ToggleVRMode()
// Cardboard
#include "AssemblyU2DCSharp_CardboardMethodDeclarations.h"
extern TypeInfo* Cardboard_t24_il2cpp_TypeInfo_var;
extern "C" void Teleport_ToggleVRMode_m4 (Teleport_t1 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Cardboard_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		Cardboard_t24 * L_0 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/NULL);
		Cardboard_t24 * L_1 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = Cardboard_get_VRModeEnabled_m55(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Cardboard_set_VRModeEnabled_m56(L_0, ((((int32_t)L_2) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Teleport::TeleportRandomly()
// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
extern TypeInfo* Mathf_t69_il2cpp_TypeInfo_var;
extern "C" void Teleport_TeleportRandomly_m5 (Teleport_t1 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t69_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t3  V_0 = {0};
	float V_1 = 0.0f;
	{
		Vector3_t3  L_0 = Random_get_onUnitSphere_m291(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = ((&V_0)->___y_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t69_il2cpp_TypeInfo_var);
		float L_2 = Mathf_Clamp_m292(NULL /*static, unused*/, L_1, (0.5f), (1.0f), /*hidden argument*/NULL);
		(&V_0)->___y_2 = L_2;
		float L_3 = Random_get_value_m293(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = ((float)((float)((float)((float)(2.0f)*(float)L_3))+(float)(1.5f)));
		Transform_t33 * L_4 = Component_get_transform_m283(__this, /*hidden argument*/NULL);
		Vector3_t3  L_5 = V_0;
		float L_6 = V_1;
		Vector3_t3  L_7 = Vector3_op_Multiply_m294(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_localPosition_m290(L_4, L_7, /*hidden argument*/NULL);
		return;
	}
}
// TeleportLegacyUI
#include "AssemblyU2DCSharp_TeleportLegacyUI.h"
// TeleportLegacyUI
#include "AssemblyU2DCSharp_TeleportLegacyUIMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// StereoController
#include "AssemblyU2DCSharp_StereoController.h"
// CardboardHead
#include "AssemblyU2DCSharp_CardboardHead.h"
// CardboardOnGUI/OnGUICallback
#include "AssemblyU2DCSharp_CardboardOnGUI_OnGUICallback.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"
// UnityEngine.Collider
#include "UnityEngine_UnityEngine_Collider.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// StereoController
#include "AssemblyU2DCSharp_StereoControllerMethodDeclarations.h"
// CardboardOnGUI
#include "AssemblyU2DCSharp_CardboardOnGUIMethodDeclarations.h"
// CardboardOnGUI/OnGUICallback
#include "AssemblyU2DCSharp_CardboardOnGUI_OnGUICallbackMethodDeclarations.h"
// CardboardHead
#include "AssemblyU2DCSharp_CardboardHeadMethodDeclarations.h"
// UnityEngine.Collider
#include "UnityEngine_UnityEngine_ColliderMethodDeclarations.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// UnityEngine.GUI
#include "UnityEngine_UnityEngine_GUIMethodDeclarations.h"
struct StereoController_t31;
// Declaration !!0 UnityEngine.Component::GetComponent<StereoController>()
// !!0 UnityEngine.Component::GetComponent<StereoController>()
#define Component_GetComponent_TisStereoController_t31_m297(__this, method) (( StereoController_t31 * (*) (Component_t70 *, const MethodInfo*))Component_GetComponent_TisObject_t_m295_gshared)(__this, method)
struct Collider_t72;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Collider>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Collider>()
#define Component_GetComponent_TisCollider_t72_m298(__this, method) (( Collider_t72 * (*) (Component_t70 *, const MethodInfo*))Component_GetComponent_TisObject_t_m295_gshared)(__this, method)
// System.Void TeleportLegacyUI::.ctor()
// Teleport
#include "AssemblyU2DCSharp_TeleportMethodDeclarations.h"
extern "C" void TeleportLegacyUI__ctor_m6 (TeleportLegacyUI_t4 * __this, const MethodInfo* method)
{
	{
		Teleport__ctor_m0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TeleportLegacyUI::Awake()
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// StereoController
#include "AssemblyU2DCSharp_StereoControllerMethodDeclarations.h"
// CardboardOnGUI
#include "AssemblyU2DCSharp_CardboardOnGUIMethodDeclarations.h"
// CardboardOnGUI/OnGUICallback
#include "AssemblyU2DCSharp_CardboardOnGUI_OnGUICallbackMethodDeclarations.h"
extern TypeInfo* OnGUICallback_t6_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisStereoController_t31_m297_MethodInfo_var;
extern const MethodInfo* TeleportLegacyUI_OnGUI_m9_MethodInfo_var;
extern "C" void TeleportLegacyUI_Awake_m7 (TeleportLegacyUI_t4 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		OnGUICallback_t6_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Component_GetComponent_TisStereoController_t31_m297_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483650);
		TeleportLegacyUI_OnGUI_m9_MethodInfo_var = il2cpp_codegen_method_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	{
		Camera_t32 * L_0 = Camera_get_main_m296(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		StereoController_t31 * L_1 = Component_GetComponent_TisStereoController_t31_m297(L_0, /*hidden argument*/Component_GetComponent_TisStereoController_t31_m297_MethodInfo_var);
		NullCheck(L_1);
		CardboardHead_t5 * L_2 = StereoController_get_Head_m186(L_1, /*hidden argument*/NULL);
		__this->___head_3 = L_2;
		CardboardOnGUI_set_IsGUIVisible_m20(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		IntPtr_t L_3 = { (void*)TeleportLegacyUI_OnGUI_m9_MethodInfo_var };
		OnGUICallback_t6 * L_4 = (OnGUICallback_t6 *)il2cpp_codegen_object_new (OnGUICallback_t6_il2cpp_TypeInfo_var);
		OnGUICallback__ctor_m11(L_4, __this, L_3, /*hidden argument*/NULL);
		CardboardOnGUI_add_onGUICallback_m16(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TeleportLegacyUI::Update()
// CardboardHead
#include "AssemblyU2DCSharp_CardboardHeadMethodDeclarations.h"
// UnityEngine.Collider
#include "UnityEngine_UnityEngine_ColliderMethodDeclarations.h"
// Cardboard
#include "AssemblyU2DCSharp_CardboardMethodDeclarations.h"
extern TypeInfo* Cardboard_t24_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisCollider_t72_m298_MethodInfo_var;
extern "C" void TeleportLegacyUI_Update_m8 (TeleportLegacyUI_t4 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Cardboard_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		Component_GetComponent_TisCollider_t72_m298_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483652);
		s_Il2CppMethodIntialized = true;
	}
	RaycastHit_t71  V_0 = {0};
	bool V_1 = false;
	{
		Collider_t72 * L_0 = Component_GetComponent_TisCollider_t72_m298(__this, /*hidden argument*/Component_GetComponent_TisCollider_t72_m298_MethodInfo_var);
		CardboardHead_t5 * L_1 = (__this->___head_3);
		NullCheck(L_1);
		Ray_t63  L_2 = CardboardHead_get_Gaze_m127(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_3 = Collider_Raycast_m299(L_0, L_2, (&V_0), (std::numeric_limits<float>::infinity()), /*hidden argument*/NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		Teleport_SetGazedAt_m2(__this, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		Cardboard_t24 * L_5 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		bool L_6 = Cardboard_get_Triggered_m84(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0040;
		}
	}
	{
		Teleport_TeleportRandomly_m5(__this, /*hidden argument*/NULL);
	}

IL_0040:
	{
		return;
	}
}
// System.Void TeleportLegacyUI::OnGUI()
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// UnityEngine.GUI
#include "UnityEngine_UnityEngine_GUIMethodDeclarations.h"
extern TypeInfo* GUI_t73_il2cpp_TypeInfo_var;
extern TypeInfo* Cardboard_t24_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral0;
extern Il2CppCodeGenString* _stringLiteral1;
extern Il2CppCodeGenString* _stringLiteral2;
extern "C" void TeleportLegacyUI_OnGUI_m9 (TeleportLegacyUI_t4 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		Cardboard_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		_stringLiteral0 = il2cpp_codegen_string_literal_from_index(0);
		_stringLiteral1 = il2cpp_codegen_string_literal_from_index(1);
		_stringLiteral2 = il2cpp_codegen_string_literal_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = CardboardOnGUI_OKToDraw_m18(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		Rect_t18  L_1 = {0};
		Rect__ctor_m300(&L_1, (50.0f), (50.0f), (200.0f), (50.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t73_il2cpp_TypeInfo_var);
		bool L_2 = GUI_Button_m301(NULL /*static, unused*/, L_1, _stringLiteral0, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003a;
		}
	}
	{
		Teleport_Reset_m3(__this, /*hidden argument*/NULL);
	}

IL_003a:
	{
		Rect_t18  L_3 = {0};
		Rect__ctor_m300(&L_3, (50.0f), (110.0f), (200.0f), (50.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t73_il2cpp_TypeInfo_var);
		bool L_4 = GUI_Button_m301(NULL /*static, unused*/, L_3, _stringLiteral1, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_006c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		Cardboard_t24 * L_5 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		Cardboard_Recenter_m93(L_5, /*hidden argument*/NULL);
	}

IL_006c:
	{
		Rect_t18  L_6 = {0};
		Rect__ctor_m300(&L_6, (50.0f), (170.0f), (200.0f), (50.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t73_il2cpp_TypeInfo_var);
		bool L_7 = GUI_Button_m301(NULL /*static, unused*/, L_6, _stringLiteral2, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_009a;
		}
	}
	{
		Teleport_ToggleVRMode_m4(__this, /*hidden argument*/NULL);
	}

IL_009a:
	{
		return;
	}
}
// System.Void TeleportLegacyUI::OnDestroy()
extern TypeInfo* OnGUICallback_t6_il2cpp_TypeInfo_var;
extern const MethodInfo* TeleportLegacyUI_OnGUI_m9_MethodInfo_var;
extern "C" void TeleportLegacyUI_OnDestroy_m10 (TeleportLegacyUI_t4 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		OnGUICallback_t6_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		TeleportLegacyUI_OnGUI_m9_MethodInfo_var = il2cpp_codegen_method_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = { (void*)TeleportLegacyUI_OnGUI_m9_MethodInfo_var };
		OnGUICallback_t6 * L_1 = (OnGUICallback_t6 *)il2cpp_codegen_object_new (OnGUICallback_t6_il2cpp_TypeInfo_var);
		OnGUICallback__ctor_m11(L_1, __this, L_0, /*hidden argument*/NULL);
		CardboardOnGUI_remove_onGUICallback_m17(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
// System.Void CardboardOnGUI/OnGUICallback::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void OnGUICallback__ctor_m11 (OnGUICallback_t6 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void CardboardOnGUI/OnGUICallback::Invoke()
extern "C" void OnGUICallback_Invoke_m12 (OnGUICallback_t6 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		OnGUICallback_Invoke_m12((OnGUICallback_t6 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if ((__this->___m_target_2 != NULL || MethodHasParameters((MethodInfo*)(__this->___method_3.___m_value_0))) && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_OnGUICallback_t6(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult CardboardOnGUI/OnGUICallback::BeginInvoke(System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * OnGUICallback_BeginInvoke_m13 (OnGUICallback_t6 * __this, AsyncCallback_t9 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void CardboardOnGUI/OnGUICallback::EndInvoke(System.IAsyncResult)
extern "C" void OnGUICallback_EndInvoke_m14 (OnGUICallback_t6 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// CardboardOnGUI
#include "AssemblyU2DCSharp_CardboardOnGUI.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// CardboardOnGUIWindow
#include "AssemblyU2DCSharp_CardboardOnGUIWindow.h"
#include "Assembly-CSharp_ArrayTypes.h"
// UnityEngine.RenderTextureFormat
#include "UnityEngine_UnityEngine_RenderTextureFormat.h"
// CardboardOnGUIMouse
#include "AssemblyU2DCSharp_CardboardOnGUIMouse.h"
// UnityEngine.Event
#include "UnityEngine_UnityEngine_Event.h"
// UnityEngine.EventType
#include "UnityEngine_UnityEngine_EventType.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// UnityEngine.SystemInfo
#include "UnityEngine_UnityEngine_SystemInfoMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTextureMethodDeclarations.h"
// UnityEngine.Screen
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"
// CardboardOnGUIWindow
#include "AssemblyU2DCSharp_CardboardOnGUIWindowMethodDeclarations.h"
// UnityEngine.Event
#include "UnityEngine_UnityEngine_EventMethodDeclarations.h"
// UnityEngine.GL
#include "UnityEngine_UnityEngine_GLMethodDeclarations.h"
// CardboardOnGUIMouse
#include "AssemblyU2DCSharp_CardboardOnGUIMouseMethodDeclarations.h"
struct CardboardOnGUIWindowU5BU5D_t76;
struct ObjectU5BU5D_t78;
// Declaration !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>(System.Boolean)
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>(System.Boolean)
extern "C" ObjectU5BU5D_t78* Component_GetComponentsInChildren_TisObject_t_m328_gshared (Component_t70 * __this, bool p0, const MethodInfo* method);
#define Component_GetComponentsInChildren_TisObject_t_m328(__this, p0, method) (( ObjectU5BU5D_t78* (*) (Component_t70 *, bool, const MethodInfo*))Component_GetComponentsInChildren_TisObject_t_m328_gshared)(__this, p0, method)
// Declaration !!0[] UnityEngine.Component::GetComponentsInChildren<CardboardOnGUIWindow>(System.Boolean)
// !!0[] UnityEngine.Component::GetComponentsInChildren<CardboardOnGUIWindow>(System.Boolean)
#define Component_GetComponentsInChildren_TisCardboardOnGUIWindow_t16_m321(__this, p0, method) (( CardboardOnGUIWindowU5BU5D_t76* (*) (Component_t70 *, bool, const MethodInfo*))Component_GetComponentsInChildren_TisObject_t_m328_gshared)(__this, p0, method)
struct CardboardOnGUIMouse_t13;
// Declaration !!0 UnityEngine.Component::GetComponent<CardboardOnGUIMouse>()
// !!0 UnityEngine.Component::GetComponent<CardboardOnGUIMouse>()
#define Component_GetComponent_TisCardboardOnGUIMouse_t13_m327(__this, method) (( CardboardOnGUIMouse_t13 * (*) (Component_t70 *, const MethodInfo*))Component_GetComponent_TisObject_t_m295_gshared)(__this, method)
// System.Void CardboardOnGUI::.ctor()
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern "C" void CardboardOnGUI__ctor_m15 (CardboardOnGUI_t10 * __this, const MethodInfo* method)
{
	{
		Color_t11  L_0 = Color_get_clear_m302(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___background_4 = L_0;
		MonoBehaviour__ctor_m282(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CardboardOnGUI::add_onGUICallback(CardboardOnGUI/OnGUICallback)
// CardboardOnGUI/OnGUICallback
#include "AssemblyU2DCSharp_CardboardOnGUI_OnGUICallback.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
extern TypeInfo* CardboardOnGUI_t10_il2cpp_TypeInfo_var;
extern TypeInfo* OnGUICallback_t6_il2cpp_TypeInfo_var;
extern "C" void CardboardOnGUI_add_onGUICallback_m16 (Object_t * __this /* static, unused */, OnGUICallback_t6 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CardboardOnGUI_t10_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		OnGUICallback_t6_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		s_Il2CppMethodIntialized = true;
	}
	{
		OnGUICallback_t6 * L_0 = ((CardboardOnGUI_t10_StaticFields*)CardboardOnGUI_t10_il2cpp_TypeInfo_var->static_fields)->___onGUICallback_6;
		OnGUICallback_t6 * L_1 = ___value;
		Delegate_t74 * L_2 = Delegate_Combine_m303(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((CardboardOnGUI_t10_StaticFields*)CardboardOnGUI_t10_il2cpp_TypeInfo_var->static_fields)->___onGUICallback_6 = ((OnGUICallback_t6 *)CastclassSealed(L_2, OnGUICallback_t6_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void CardboardOnGUI::remove_onGUICallback(CardboardOnGUI/OnGUICallback)
extern TypeInfo* CardboardOnGUI_t10_il2cpp_TypeInfo_var;
extern TypeInfo* OnGUICallback_t6_il2cpp_TypeInfo_var;
extern "C" void CardboardOnGUI_remove_onGUICallback_m17 (Object_t * __this /* static, unused */, OnGUICallback_t6 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CardboardOnGUI_t10_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		OnGUICallback_t6_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		s_Il2CppMethodIntialized = true;
	}
	{
		OnGUICallback_t6 * L_0 = ((CardboardOnGUI_t10_StaticFields*)CardboardOnGUI_t10_il2cpp_TypeInfo_var->static_fields)->___onGUICallback_6;
		OnGUICallback_t6 * L_1 = ___value;
		Delegate_t74 * L_2 = Delegate_Remove_m304(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((CardboardOnGUI_t10_StaticFields*)CardboardOnGUI_t10_il2cpp_TypeInfo_var->static_fields)->___onGUICallback_6 = ((OnGUICallback_t6 *)CastclassSealed(L_2, OnGUICallback_t6_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Boolean CardboardOnGUI::OKToDraw(UnityEngine.MonoBehaviour)
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
extern TypeInfo* CardboardOnGUI_t10_il2cpp_TypeInfo_var;
extern "C" bool CardboardOnGUI_OKToDraw_m18 (Object_t * __this /* static, unused */, MonoBehaviour_t2 * ___mb, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CardboardOnGUI_t10_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B5_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	{
		bool L_0 = ((CardboardOnGUI_t10_StaticFields*)CardboardOnGUI_t10_il2cpp_TypeInfo_var->static_fields)->___okToDraw_2;
		if (!L_0)
		{
			goto IL_0034;
		}
	}
	{
		MonoBehaviour_t2 * L_1 = ___mb;
		bool L_2 = Object_op_Equality_m305(NULL /*static, unused*/, L_1, (Object_t75 *)NULL, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0031;
		}
	}
	{
		MonoBehaviour_t2 * L_3 = ___mb;
		NullCheck(L_3);
		bool L_4 = Behaviour_get_enabled_m306(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		MonoBehaviour_t2 * L_5 = ___mb;
		NullCheck(L_5);
		GameObject_t47 * L_6 = Component_get_gameObject_m307(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		bool L_7 = GameObject_get_activeInHierarchy_m308(L_6, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_7));
		goto IL_002f;
	}

IL_002e:
	{
		G_B5_0 = 0;
	}

IL_002f:
	{
		G_B7_0 = G_B5_0;
		goto IL_0032;
	}

IL_0031:
	{
		G_B7_0 = 1;
	}

IL_0032:
	{
		G_B9_0 = G_B7_0;
		goto IL_0035;
	}

IL_0034:
	{
		G_B9_0 = 0;
	}

IL_0035:
	{
		return G_B9_0;
	}
}
// System.Boolean CardboardOnGUI::get_IsGUIVisible()
// Cardboard
#include "AssemblyU2DCSharp_CardboardMethodDeclarations.h"
// UnityEngine.SystemInfo
#include "UnityEngine_UnityEngine_SystemInfoMethodDeclarations.h"
extern TypeInfo* CardboardOnGUI_t10_il2cpp_TypeInfo_var;
extern TypeInfo* Cardboard_t24_il2cpp_TypeInfo_var;
extern "C" bool CardboardOnGUI_get_IsGUIVisible_m19 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CardboardOnGUI_t10_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Cardboard_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		bool L_0 = ((CardboardOnGUI_t10_StaticFields*)CardboardOnGUI_t10_il2cpp_TypeInfo_var->static_fields)->___isGUIVisible_3;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		Cardboard_t24 * L_1 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = Cardboard_get_VRModeEnabled_m55(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		bool L_3 = SystemInfo_get_supportsRenderTextures_m309(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)(L_3));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 0;
	}

IL_0021:
	{
		return G_B4_0;
	}
}
// System.Void CardboardOnGUI::set_IsGUIVisible(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo* CardboardOnGUI_t10_il2cpp_TypeInfo_var;
extern "C" void CardboardOnGUI_set_IsGUIVisible_m20 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CardboardOnGUI_t10_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = ___value;
		((CardboardOnGUI_t10_StaticFields*)CardboardOnGUI_t10_il2cpp_TypeInfo_var->static_fields)->___isGUIVisible_3 = L_0;
		return;
	}
}
// System.Boolean CardboardOnGUI::get_Triggered()
// CardboardOnGUI
#include "AssemblyU2DCSharp_CardboardOnGUIMethodDeclarations.h"
extern TypeInfo* Cardboard_t24_il2cpp_TypeInfo_var;
extern "C" bool CardboardOnGUI_get_Triggered_m21 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Cardboard_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		bool L_0 = CardboardOnGUI_get_IsGUIVisible_m19(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		Cardboard_t24 * L_1 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = Cardboard_get_Triggered_m84(L_1, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 0;
	}

IL_0017:
	{
		return G_B3_0;
	}
}
// System.Void CardboardOnGUI::Awake()
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral3;
extern "C" void CardboardOnGUI_Awake_m22 (CardboardOnGUI_t10 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral3 = il2cpp_codegen_string_literal_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = SystemInfo_get_supportsRenderTextures_m309(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		Debug_LogWarning_m310(NULL /*static, unused*/, _stringLiteral3, /*hidden argument*/NULL);
		Behaviour_set_enabled_m311(__this, 0, /*hidden argument*/NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Void CardboardOnGUI::Start()
extern "C" void CardboardOnGUI_Start_m23 (CardboardOnGUI_t10 * __this, const MethodInfo* method)
{
	{
		CardboardOnGUI_Create_m24(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CardboardOnGUI::Create()
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTextureMethodDeclarations.h"
// UnityEngine.Screen
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"
// CardboardOnGUIWindow
#include "AssemblyU2DCSharp_CardboardOnGUIWindowMethodDeclarations.h"
extern TypeInfo* Cardboard_t24_il2cpp_TypeInfo_var;
extern TypeInfo* RenderTexture_t12_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponentsInChildren_TisCardboardOnGUIWindow_t16_m321_MethodInfo_var;
extern "C" void CardboardOnGUI_Create_m24 (CardboardOnGUI_t10 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Cardboard_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		RenderTexture_t12_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		Component_GetComponentsInChildren_TisCardboardOnGUIWindow_t16_m321_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483653);
		s_Il2CppMethodIntialized = true;
	}
	RenderTexture_t12 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	CardboardOnGUIWindow_t16 * V_3 = {0};
	CardboardOnGUIWindowU5BU5D_t76* V_4 = {0};
	int32_t V_5 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B8_0 = 0;
	{
		RenderTexture_t12 * L_0 = (__this->___guiScreen_5);
		bool L_1 = Object_op_Inequality_m312(NULL /*static, unused*/, L_0, (Object_t75 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		RenderTexture_t12 * L_2 = (__this->___guiScreen_5);
		NullCheck(L_2);
		RenderTexture_Release_m313(L_2, /*hidden argument*/NULL);
	}

IL_001c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		Cardboard_t24 * L_3 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		RenderTexture_t12 * L_4 = Cardboard_get_StereoScreen_m73(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		RenderTexture_t12 * L_5 = V_0;
		bool L_6 = Object_op_Implicit_m314(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		RenderTexture_t12 * L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = RenderTexture_get_width_m315(L_7, /*hidden argument*/NULL);
		G_B5_0 = L_8;
		goto IL_0042;
	}

IL_003d:
	{
		int32_t L_9 = Screen_get_width_m316(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B5_0 = L_9;
	}

IL_0042:
	{
		V_1 = G_B5_0;
		RenderTexture_t12 * L_10 = V_0;
		bool L_11 = Object_op_Implicit_m314(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0059;
		}
	}
	{
		RenderTexture_t12 * L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = RenderTexture_get_height_m317(L_12, /*hidden argument*/NULL);
		G_B8_0 = L_13;
		goto IL_005e;
	}

IL_0059:
	{
		int32_t L_14 = Screen_get_height_m318(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B8_0 = L_14;
	}

IL_005e:
	{
		V_2 = G_B8_0;
		int32_t L_15 = V_1;
		int32_t L_16 = V_2;
		RenderTexture_t12 * L_17 = (RenderTexture_t12 *)il2cpp_codegen_object_new (RenderTexture_t12_il2cpp_TypeInfo_var);
		RenderTexture__ctor_m319(L_17, L_15, L_16, 0, 0, /*hidden argument*/NULL);
		__this->___guiScreen_5 = L_17;
		RenderTexture_t12 * L_18 = (__this->___guiScreen_5);
		NullCheck(L_18);
		RenderTexture_Create_m320(L_18, /*hidden argument*/NULL);
		CardboardOnGUIWindowU5BU5D_t76* L_19 = Component_GetComponentsInChildren_TisCardboardOnGUIWindow_t16_m321(__this, 1, /*hidden argument*/Component_GetComponentsInChildren_TisCardboardOnGUIWindow_t16_m321_MethodInfo_var);
		V_4 = L_19;
		V_5 = 0;
		goto IL_00a3;
	}

IL_008b:
	{
		CardboardOnGUIWindowU5BU5D_t76* L_20 = V_4;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		V_3 = (*(CardboardOnGUIWindow_t16 **)(CardboardOnGUIWindow_t16 **)SZArrayLdElema(L_20, L_22, sizeof(CardboardOnGUIWindow_t16 *)));
		CardboardOnGUIWindow_t16 * L_23 = V_3;
		RenderTexture_t12 * L_24 = (__this->___guiScreen_5);
		NullCheck(L_23);
		CardboardOnGUIWindow_Create_m33(L_23, L_24, /*hidden argument*/NULL);
		int32_t L_25 = V_5;
		V_5 = ((int32_t)((int32_t)L_25+(int32_t)1));
	}

IL_00a3:
	{
		int32_t L_26 = V_5;
		CardboardOnGUIWindowU5BU5D_t76* L_27 = V_4;
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)(((int32_t)(((Array_t *)L_27)->max_length))))))
		{
			goto IL_008b;
		}
	}
	{
		return;
	}
}
// System.Void CardboardOnGUI::LateUpdate()
extern TypeInfo* Cardboard_t24_il2cpp_TypeInfo_var;
extern TypeInfo* CardboardOnGUI_t10_il2cpp_TypeInfo_var;
extern "C" void CardboardOnGUI_LateUpdate_m25 (CardboardOnGUI_t10 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Cardboard_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		CardboardOnGUI_t10_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		Cardboard_t24 * L_0 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = Cardboard_get_VRModeEnabled_m55(L_0, /*hidden argument*/NULL);
		((CardboardOnGUI_t10_StaticFields*)CardboardOnGUI_t10_il2cpp_TypeInfo_var->static_fields)->___okToDraw_2 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		return;
	}
}
// System.Void CardboardOnGUI::OnGUI()
// UnityEngine.Event
#include "UnityEngine_UnityEngine_EventMethodDeclarations.h"
// UnityEngine.GL
#include "UnityEngine_UnityEngine_GLMethodDeclarations.h"
// CardboardOnGUI/OnGUICallback
#include "AssemblyU2DCSharp_CardboardOnGUI_OnGUICallbackMethodDeclarations.h"
// CardboardOnGUIMouse
#include "AssemblyU2DCSharp_CardboardOnGUIMouseMethodDeclarations.h"
extern TypeInfo* CardboardOnGUI_t10_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisCardboardOnGUIMouse_t13_m327_MethodInfo_var;
extern "C" void CardboardOnGUI_OnGUI_m26 (CardboardOnGUI_t10 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CardboardOnGUI_t10_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Component_GetComponent_TisCardboardOnGUIMouse_t13_m327_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483654);
		s_Il2CppMethodIntialized = true;
	}
	RenderTexture_t12 * V_0 = {0};
	CardboardOnGUIMouse_t13 * V_1 = {0};
	{
		bool L_0 = CardboardOnGUI_get_IsGUIVisible_m19(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		V_0 = (RenderTexture_t12 *)NULL;
		Event_t77 * L_1 = Event_get_current_m322(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = Event_get_type_m323(L_1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)7))))
		{
			goto IL_003b;
		}
	}
	{
		RenderTexture_t12 * L_3 = RenderTexture_get_active_m324(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_3;
		RenderTexture_t12 * L_4 = (__this->___guiScreen_5);
		RenderTexture_set_active_m325(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		Color_t11  L_5 = (__this->___background_4);
		GL_Clear_m326(NULL /*static, unused*/, 0, 1, L_5, /*hidden argument*/NULL);
	}

IL_003b:
	{
		OnGUICallback_t6 * L_6 = ((CardboardOnGUI_t10_StaticFields*)CardboardOnGUI_t10_il2cpp_TypeInfo_var->static_fields)->___onGUICallback_6;
		if (!L_6)
		{
			goto IL_005b;
		}
	}
	{
		((CardboardOnGUI_t10_StaticFields*)CardboardOnGUI_t10_il2cpp_TypeInfo_var->static_fields)->___okToDraw_2 = 1;
		OnGUICallback_t6 * L_7 = ((CardboardOnGUI_t10_StaticFields*)CardboardOnGUI_t10_il2cpp_TypeInfo_var->static_fields)->___onGUICallback_6;
		NullCheck(L_7);
		OnGUICallback_Invoke_m12(L_7, /*hidden argument*/NULL);
		((CardboardOnGUI_t10_StaticFields*)CardboardOnGUI_t10_il2cpp_TypeInfo_var->static_fields)->___okToDraw_2 = 0;
	}

IL_005b:
	{
		Event_t77 * L_8 = Event_get_current_m322(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		int32_t L_9 = Event_get_type_m323(L_8, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)7))))
		{
			goto IL_008a;
		}
	}
	{
		CardboardOnGUIMouse_t13 * L_10 = Component_GetComponent_TisCardboardOnGUIMouse_t13_m327(__this, /*hidden argument*/Component_GetComponent_TisCardboardOnGUIMouse_t13_m327_MethodInfo_var);
		V_1 = L_10;
		CardboardOnGUIMouse_t13 * L_11 = V_1;
		bool L_12 = Object_op_Inequality_m312(NULL /*static, unused*/, L_11, (Object_t75 *)NULL, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0084;
		}
	}
	{
		CardboardOnGUIMouse_t13 * L_13 = V_1;
		NullCheck(L_13);
		CardboardOnGUIMouse_DrawPointerImage_m29(L_13, /*hidden argument*/NULL);
	}

IL_0084:
	{
		RenderTexture_t12 * L_14 = V_0;
		RenderTexture_set_active_m325(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
	}

IL_008a:
	{
		return;
	}
}
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_Texture.h"
// UnityEngine.ScaleMode
#include "UnityEngine_UnityEngine_ScaleMode.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHitMethodDeclarations.h"
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_TextureMethodDeclarations.h"
struct CardboardOnGUIWindowU5BU5D_t76;
struct ObjectU5BU5D_t78;
// Declaration !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
extern "C" ObjectU5BU5D_t78* Component_GetComponentsInChildren_TisObject_t_m340_gshared (Component_t70 * __this, const MethodInfo* method);
#define Component_GetComponentsInChildren_TisObject_t_m340(__this, method) (( ObjectU5BU5D_t78* (*) (Component_t70 *, const MethodInfo*))Component_GetComponentsInChildren_TisObject_t_m340_gshared)(__this, method)
// Declaration !!0[] UnityEngine.Component::GetComponentsInChildren<CardboardOnGUIWindow>()
// !!0[] UnityEngine.Component::GetComponentsInChildren<CardboardOnGUIWindow>()
#define Component_GetComponentsInChildren_TisCardboardOnGUIWindow_t16_m330(__this, method) (( CardboardOnGUIWindowU5BU5D_t76* (*) (Component_t70 *, const MethodInfo*))Component_GetComponentsInChildren_TisObject_t_m340_gshared)(__this, method)
// System.Void CardboardOnGUIMouse::.ctor()
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern "C" void CardboardOnGUIMouse__ctor_m27 (CardboardOnGUIMouse_t13 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m282(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CardboardOnGUIMouse::LateUpdate()
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// CardboardOnGUI
#include "AssemblyU2DCSharp_CardboardOnGUIMethodDeclarations.h"
// CardboardHead
#include "AssemblyU2DCSharp_CardboardHeadMethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Collider
#include "UnityEngine_UnityEngine_ColliderMethodDeclarations.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHitMethodDeclarations.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// UnityEngine.Screen
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"
// Cardboard
#include "AssemblyU2DCSharp_CardboardMethodDeclarations.h"
extern TypeInfo* Cardboard_t24_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponentsInChildren_TisCardboardOnGUIWindow_t16_m330_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisCollider_t72_m298_MethodInfo_var;
extern "C" void CardboardOnGUIMouse_LateUpdate_m28 (CardboardOnGUIMouse_t13 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Cardboard_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		Component_GetComponentsInChildren_TisCardboardOnGUIWindow_t16_m330_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483655);
		Component_GetComponent_TisCollider_t72_m298_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483652);
		s_Il2CppMethodIntialized = true;
	}
	Ray_t63  V_0 = {0};
	CardboardOnGUIWindow_t16 * V_1 = {0};
	float V_2 = 0.0f;
	Vector2_t15  V_3 = {0};
	CardboardOnGUIWindow_t16 * V_4 = {0};
	CardboardOnGUIWindowU5BU5D_t76* V_5 = {0};
	int32_t V_6 = 0;
	RaycastHit_t71  V_7 = {0};
	{
		CardboardHead_t5 * L_0 = (__this->___head_2);
		bool L_1 = Object_op_Equality_m305(NULL /*static, unused*/, L_0, (Object_t75 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		__this->___pointerVisible_6 = 1;
		return;
	}

IL_0019:
	{
		bool L_2 = CardboardOnGUI_get_IsGUIVisible_m19(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		__this->___pointerVisible_6 = 0;
		return;
	}

IL_002b:
	{
		CardboardHead_t5 * L_3 = (__this->___head_2);
		NullCheck(L_3);
		Ray_t63  L_4 = CardboardHead_get_Gaze_m127(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		V_1 = (CardboardOnGUIWindow_t16 *)NULL;
		V_2 = (std::numeric_limits<float>::infinity());
		Vector2_t15  L_5 = Vector2_get_zero_m329(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = L_5;
		CardboardOnGUIWindowU5BU5D_t76* L_6 = Component_GetComponentsInChildren_TisCardboardOnGUIWindow_t16_m330(__this, /*hidden argument*/Component_GetComponentsInChildren_TisCardboardOnGUIWindow_t16_m330_MethodInfo_var);
		V_5 = L_6;
		V_6 = 0;
		goto IL_009b;
	}

IL_0055:
	{
		CardboardOnGUIWindowU5BU5D_t76* L_7 = V_5;
		int32_t L_8 = V_6;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		V_4 = (*(CardboardOnGUIWindow_t16 **)(CardboardOnGUIWindow_t16 **)SZArrayLdElema(L_7, L_9, sizeof(CardboardOnGUIWindow_t16 *)));
		CardboardOnGUIWindow_t16 * L_10 = V_4;
		NullCheck(L_10);
		Collider_t72 * L_11 = Component_GetComponent_TisCollider_t72_m298(L_10, /*hidden argument*/Component_GetComponent_TisCollider_t72_m298_MethodInfo_var);
		Ray_t63  L_12 = V_0;
		NullCheck(L_11);
		bool L_13 = Collider_Raycast_m299(L_11, L_12, (&V_7), (std::numeric_limits<float>::infinity()), /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0095;
		}
	}
	{
		float L_14 = RaycastHit_get_distance_m331((&V_7), /*hidden argument*/NULL);
		float L_15 = V_2;
		if ((!(((float)L_14) < ((float)L_15))))
		{
			goto IL_0095;
		}
	}
	{
		float L_16 = RaycastHit_get_distance_m331((&V_7), /*hidden argument*/NULL);
		V_2 = L_16;
		CardboardOnGUIWindow_t16 * L_17 = V_4;
		V_1 = L_17;
		Vector2_t15  L_18 = RaycastHit_get_textureCoord_m332((&V_7), /*hidden argument*/NULL);
		V_3 = L_18;
	}

IL_0095:
	{
		int32_t L_19 = V_6;
		V_6 = ((int32_t)((int32_t)L_19+(int32_t)1));
	}

IL_009b:
	{
		int32_t L_20 = V_6;
		CardboardOnGUIWindowU5BU5D_t76* L_21 = V_5;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)(((int32_t)(((Array_t *)L_21)->max_length))))))
		{
			goto IL_0055;
		}
	}
	{
		CardboardOnGUIWindow_t16 * L_22 = V_1;
		bool L_23 = Object_op_Equality_m305(NULL /*static, unused*/, L_22, (Object_t75 *)NULL, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00ba;
		}
	}
	{
		__this->___pointerVisible_6 = 0;
		return;
	}

IL_00ba:
	{
		CardboardOnGUIWindow_t16 * L_24 = V_1;
		NullCheck(L_24);
		Rect_t18 * L_25 = &(L_24->___rect_3);
		float L_26 = Rect_get_xMin_m333(L_25, /*hidden argument*/NULL);
		CardboardOnGUIWindow_t16 * L_27 = V_1;
		NullCheck(L_27);
		Rect_t18 * L_28 = &(L_27->___rect_3);
		float L_29 = Rect_get_width_m334(L_28, /*hidden argument*/NULL);
		float L_30 = ((&V_3)->___x_1);
		(&V_3)->___x_1 = ((float)((float)L_26+(float)((float)((float)L_29*(float)L_30))));
		CardboardOnGUIWindow_t16 * L_31 = V_1;
		NullCheck(L_31);
		Rect_t18 * L_32 = &(L_31->___rect_3);
		float L_33 = Rect_get_yMin_m335(L_32, /*hidden argument*/NULL);
		CardboardOnGUIWindow_t16 * L_34 = V_1;
		NullCheck(L_34);
		Rect_t18 * L_35 = &(L_34->___rect_3);
		float L_36 = Rect_get_height_m336(L_35, /*hidden argument*/NULL);
		float L_37 = ((&V_3)->___y_2);
		(&V_3)->___y_2 = ((float)((float)L_33+(float)((float)((float)L_36*(float)L_37))));
		float L_38 = ((&V_3)->___x_1);
		int32_t L_39 = Screen_get_width_m316(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___pointerX_7 = (((int32_t)((float)((float)L_38*(float)(((float)L_39))))));
		float L_40 = ((&V_3)->___y_2);
		int32_t L_41 = Screen_get_height_m318(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___pointerY_8 = (((int32_t)((float)((float)L_40*(float)(((float)L_41))))));
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		Cardboard_t24 * L_42 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_43 = (__this->___pointerX_7);
		int32_t L_44 = Screen_get_height_m318(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_45 = (__this->___pointerY_8);
		NullCheck(L_42);
		Cardboard_SetTouchCoordinates_m94(L_42, L_43, ((int32_t)((int32_t)L_44-(int32_t)L_45)), /*hidden argument*/NULL);
		__this->___pointerVisible_6 = 1;
		return;
	}
}
// System.Void CardboardOnGUIMouse::DrawPointerImage()
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"
// UnityEngine.GUI
#include "UnityEngine_UnityEngine_GUIMethodDeclarations.h"
extern TypeInfo* GUI_t73_il2cpp_TypeInfo_var;
extern "C" void CardboardOnGUIMouse_DrawPointerImage_m29 (CardboardOnGUIMouse_t13 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t15  V_0 = {0};
	Vector2_t15  V_1 = {0};
	Vector2_t15  V_2 = {0};
	{
		Texture_t14 * L_0 = (__this->___pointerImage_3);
		bool L_1 = Object_op_Equality_m305(NULL /*static, unused*/, L_0, (Object_t75 *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2 = (__this->___pointerVisible_6);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		bool L_3 = Behaviour_get_enabled_m306(__this, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0028;
		}
	}

IL_0027:
	{
		return;
	}

IL_0028:
	{
		int32_t L_4 = (__this->___pointerX_7);
		int32_t L_5 = (__this->___pointerY_8);
		Vector2__ctor_m337((&V_0), (((float)L_4)), (((float)L_5)), /*hidden argument*/NULL);
		Vector2_t15  L_6 = (__this->___pointerSpot_5);
		V_1 = L_6;
		Vector2_t15  L_7 = (__this->___pointerSize_4);
		V_2 = L_7;
		float L_8 = Vector2_get_sqrMagnitude_m338((&V_2), /*hidden argument*/NULL);
		if ((!(((float)L_8) < ((float)(1.0f)))))
		{
			goto IL_0082;
		}
	}
	{
		Texture_t14 * L_9 = (__this->___pointerImage_3);
		NullCheck(L_9);
		int32_t L_10 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_9);
		(&V_2)->___x_1 = (((float)L_10));
		Texture_t14 * L_11 = (__this->___pointerImage_3);
		NullCheck(L_11);
		int32_t L_12 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_11);
		(&V_2)->___y_2 = (((float)L_12));
	}

IL_0082:
	{
		float L_13 = ((&V_0)->___x_1);
		float L_14 = ((&V_1)->___x_1);
		int32_t L_15 = Screen_get_height_m318(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_16 = ((&V_0)->___y_2);
		float L_17 = ((&V_1)->___y_2);
		float L_18 = ((&V_2)->___x_1);
		float L_19 = ((&V_2)->___y_2);
		Rect_t18  L_20 = {0};
		Rect__ctor_m300(&L_20, ((float)((float)L_13-(float)L_14)), ((float)((float)((float)((float)(((float)L_15))-(float)L_16))-(float)L_17)), L_18, L_19, /*hidden argument*/NULL);
		Texture_t14 * L_21 = (__this->___pointerImage_3);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t73_il2cpp_TypeInfo_var);
		GUI_DrawTexture_m339(NULL /*static, unused*/, L_20, L_21, 0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.MeshRenderer
#include "UnityEngine_UnityEngine_MeshRenderer.h"
// UnityEngine.Shader
#include "UnityEngine_UnityEngine_Shader.h"
// UnityEngine.Shader
#include "UnityEngine_UnityEngine_ShaderMethodDeclarations.h"
struct MeshRenderer_t17;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
#define Component_GetComponent_TisMeshRenderer_t17_m341(__this, method) (( MeshRenderer_t17 * (*) (Component_t70 *, const MethodInfo*))Component_GetComponent_TisObject_t_m295_gshared)(__this, method)
// System.Void CardboardOnGUIWindow::.ctor()
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern "C" void CardboardOnGUIWindow__ctor_m30 (CardboardOnGUIWindow_t16 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m282(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CardboardOnGUIWindow::Reset()
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
extern "C" void CardboardOnGUIWindow_Reset_m31 (CardboardOnGUIWindow_t16 * __this, const MethodInfo* method)
{
	{
		Rect_t18  L_0 = {0};
		Rect__ctor_m300(&L_0, (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->___rect_3 = L_0;
		return;
	}
}
// System.Void CardboardOnGUIWindow::Awake()
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.SystemInfo
#include "UnityEngine_UnityEngine_SystemInfoMethodDeclarations.h"
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"
extern const MethodInfo* Component_GetComponent_TisMeshRenderer_t17_m341_MethodInfo_var;
extern "C" void CardboardOnGUIWindow_Awake_m32 (CardboardOnGUIWindow_t16 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisMeshRenderer_t17_m341_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483656);
		s_Il2CppMethodIntialized = true;
	}
	{
		MeshRenderer_t17 * L_0 = Component_GetComponent_TisMeshRenderer_t17_m341(__this, /*hidden argument*/Component_GetComponent_TisMeshRenderer_t17_m341_MethodInfo_var);
		__this->___meshRenderer_2 = L_0;
		bool L_1 = SystemInfo_get_supportsRenderTextures_m309(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		Behaviour_set_enabled_m311(__this, 0, /*hidden argument*/NULL);
	}

IL_001d:
	{
		return;
	}
}
// System.Void CardboardOnGUIWindow::Create(UnityEngine.RenderTexture)
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// UnityEngine.Shader
#include "UnityEngine_UnityEngine_ShaderMethodDeclarations.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_RendererMethodDeclarations.h"
extern TypeInfo* Material_t42_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4;
extern "C" void CardboardOnGUIWindow_Create_m33 (CardboardOnGUIWindow_t16 * __this, RenderTexture_t12 * ___target, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Material_t42_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		_stringLiteral4 = il2cpp_codegen_string_literal_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	Material_t42 * V_0 = {0};
	{
		MeshRenderer_t17 * L_0 = (__this->___meshRenderer_2);
		Shader_t79 * L_1 = Shader_Find_m342(NULL /*static, unused*/, _stringLiteral4, /*hidden argument*/NULL);
		Material_t42 * L_2 = (Material_t42 *)il2cpp_codegen_object_new (Material_t42_il2cpp_TypeInfo_var);
		Material__ctor_m343(L_2, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Material_t42 * L_3 = V_0;
		RenderTexture_t12 * L_4 = ___target;
		NullCheck(L_3);
		Material_set_mainTexture_m344(L_3, L_4, /*hidden argument*/NULL);
		Material_t42 * L_5 = V_0;
		Rect_t18 * L_6 = &(__this->___rect_3);
		Vector2_t15  L_7 = Rect_get_position_m345(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		Material_set_mainTextureOffset_m346(L_5, L_7, /*hidden argument*/NULL);
		Material_t42 * L_8 = V_0;
		Rect_t18 * L_9 = &(__this->___rect_3);
		Vector2_t15  L_10 = Rect_get_size_m347(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		Material_set_mainTextureScale_m348(L_8, L_10, /*hidden argument*/NULL);
		Material_t42 * L_11 = V_0;
		NullCheck(L_0);
		Renderer_set_material_m349(L_0, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CardboardOnGUIWindow::OnDisable()
extern "C" void CardboardOnGUIWindow_OnDisable_m34 (CardboardOnGUIWindow_t16 * __this, const MethodInfo* method)
{
	{
		MeshRenderer_t17 * L_0 = (__this->___meshRenderer_2);
		NullCheck(L_0);
		Renderer_set_enabled_m350(L_0, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CardboardOnGUIWindow::LateUpdate()
// CardboardOnGUI
#include "AssemblyU2DCSharp_CardboardOnGUIMethodDeclarations.h"
// UnityEngine.Screen
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
extern "C" void CardboardOnGUIWindow_LateUpdate_m35 (CardboardOnGUIWindow_t16 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		MeshRenderer_t17 * L_0 = (__this->___meshRenderer_2);
		bool L_1 = CardboardOnGUI_get_IsGUIVisible_m19(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Renderer_set_enabled_m350(L_0, L_1, /*hidden argument*/NULL);
		MeshRenderer_t17 * L_2 = (__this->___meshRenderer_2);
		NullCheck(L_2);
		Material_t42 * L_3 = Renderer_get_material_m286(L_2, /*hidden argument*/NULL);
		Rect_t18 * L_4 = &(__this->___rect_3);
		Vector2_t15  L_5 = Rect_get_position_m345(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		Material_set_mainTextureOffset_m346(L_3, L_5, /*hidden argument*/NULL);
		MeshRenderer_t17 * L_6 = (__this->___meshRenderer_2);
		NullCheck(L_6);
		Material_t42 * L_7 = Renderer_get_material_m286(L_6, /*hidden argument*/NULL);
		Rect_t18 * L_8 = &(__this->___rect_3);
		Vector2_t15  L_9 = Rect_get_size_m347(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		Material_set_mainTextureScale_m348(L_7, L_9, /*hidden argument*/NULL);
		int32_t L_10 = Screen_get_width_m316(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t18 * L_11 = &(__this->___rect_3);
		float L_12 = Rect_get_width_m334(L_11, /*hidden argument*/NULL);
		int32_t L_13 = Screen_get_height_m318(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t18 * L_14 = &(__this->___rect_3);
		float L_15 = Rect_get_height_m336(L_14, /*hidden argument*/NULL);
		V_0 = ((float)((float)((float)((float)(((float)L_10))*(float)L_12))/(float)((float)((float)(((float)L_13))*(float)L_15))));
		Transform_t33 * L_16 = Component_get_transform_m283(__this, /*hidden argument*/NULL);
		float L_17 = V_0;
		Vector3_t3  L_18 = {0};
		Vector3__ctor_m351(&L_18, L_17, (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_set_localScale_m352(L_16, L_18, /*hidden argument*/NULL);
		return;
	}
}
// SkyboxMesh
#include "AssemblyU2DCSharp_SkyboxMesh.h"
// SkyboxMesh
#include "AssemblyU2DCSharp_SkyboxMeshMethodDeclarations.h"
// System.Void SkyboxMesh::.ctor()
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern "C" void SkyboxMesh__ctor_m36 (SkyboxMesh_t19 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m282(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkyboxMesh::Awake()
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral5;
extern "C" void SkyboxMesh_Awake_m37 (SkyboxMesh_t19 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral5 = il2cpp_codegen_string_literal_from_index(5);
		s_Il2CppMethodIntialized = true;
	}
	{
		Debug_Log_m353(NULL /*static, unused*/, _stringLiteral5, /*hidden argument*/NULL);
		Object_Destroy_m354(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// StereoLensFlare
#include "AssemblyU2DCSharp_StereoLensFlare.h"
// StereoLensFlare
#include "AssemblyU2DCSharp_StereoLensFlareMethodDeclarations.h"
// System.Void StereoLensFlare::.ctor()
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern "C" void StereoLensFlare__ctor_m38 (StereoLensFlare_t20 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m282(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void StereoLensFlare::Awake()
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral6;
extern "C" void StereoLensFlare_Awake_m39 (StereoLensFlare_t20 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral6 = il2cpp_codegen_string_literal_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		Debug_Log_m353(NULL /*static, unused*/, _stringLiteral6, /*hidden argument*/NULL);
		Object_Destroy_m354(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// Cardboard/Eye
#include "AssemblyU2DCSharp_Cardboard_Eye.h"
// Cardboard/Eye
#include "AssemblyU2DCSharp_Cardboard_EyeMethodDeclarations.h"
// Cardboard/Distortion
#include "AssemblyU2DCSharp_Cardboard_Distortion.h"
// Cardboard/Distortion
#include "AssemblyU2DCSharp_Cardboard_DistortionMethodDeclarations.h"
// Cardboard/<EndOfFrame>c__Iterator0
#include "AssemblyU2DCSharp_Cardboard_U3CEndOfFrameU3Ec__Iterator0.h"
// Cardboard/<EndOfFrame>c__Iterator0
#include "AssemblyU2DCSharp_Cardboard_U3CEndOfFrameU3Ec__Iterator0MethodDeclarations.h"
// System.UInt32
#include "mscorlib_System_UInt32.h"
// UnityEngine.WaitForEndOfFrame
#include "UnityEngine_UnityEngine_WaitForEndOfFrame.h"
// BaseVRDevice
#include "AssemblyU2DCSharp_BaseVRDevice.h"
// CardboardUILayer
#include "AssemblyU2DCSharp_CardboardUILayer.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// UnityEngine.WaitForEndOfFrame
#include "UnityEngine_UnityEngine_WaitForEndOfFrameMethodDeclarations.h"
// BaseVRDevice
#include "AssemblyU2DCSharp_BaseVRDeviceMethodDeclarations.h"
// CardboardUILayer
#include "AssemblyU2DCSharp_CardboardUILayerMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.Void Cardboard/<EndOfFrame>c__Iterator0::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void U3CEndOfFrameU3Ec__Iterator0__ctor_m40 (U3CEndOfFrameU3Ec__Iterator0_t23 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m355(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Cardboard/<EndOfFrame>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CEndOfFrameU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m41 (U3CEndOfFrameU3Ec__Iterator0_t23 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Object Cardboard/<EndOfFrame>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CEndOfFrameU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m42 (U3CEndOfFrameU3Ec__Iterator0_t23 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Boolean Cardboard/<EndOfFrame>c__Iterator0::MoveNext()
// UnityEngine.WaitForEndOfFrame
#include "UnityEngine_UnityEngine_WaitForEndOfFrameMethodDeclarations.h"
// Cardboard
#include "AssemblyU2DCSharp_CardboardMethodDeclarations.h"
// CardboardUILayer
#include "AssemblyU2DCSharp_CardboardUILayerMethodDeclarations.h"
extern TypeInfo* WaitForEndOfFrame_t80_il2cpp_TypeInfo_var;
extern TypeInfo* Cardboard_t24_il2cpp_TypeInfo_var;
extern TypeInfo* CardboardUILayer_t26_il2cpp_TypeInfo_var;
extern "C" bool U3CEndOfFrameU3Ec__Iterator0_MoveNext_m43 (U3CEndOfFrameU3Ec__Iterator0_t23 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForEndOfFrame_t80_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Cardboard_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		CardboardUILayer_t26_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = (__this->___U24PC_0);
		V_0 = L_0;
		__this->___U24PC_0 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0038;
		}
	}
	{
		goto IL_00cb;
	}

IL_0021:
	{
		WaitForEndOfFrame_t80 * L_2 = (WaitForEndOfFrame_t80 *)il2cpp_codegen_object_new (WaitForEndOfFrame_t80_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_m356(L_2, /*hidden argument*/NULL);
		__this->___U24current_1 = L_2;
		__this->___U24PC_0 = 1;
		goto IL_00cd;
	}

IL_0038:
	{
		Cardboard_t24 * L_3 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_3);
		Cardboard_UpdateState_m88(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		BaseVRDevice_t28 * L_4 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___device_11;
		Cardboard_t24 * L_5 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_5);
		bool L_6 = (L_5->___vrModeEnabled_4);
		NullCheck(L_4);
		VirtActionInvoker1< bool >::Invoke(21 /* System.Void BaseVRDevice::PostRender(System.Boolean) */, L_4, L_6);
		Cardboard_t24 * L_7 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_7);
		bool L_8 = (L_7->___vrModeEnabled_4);
		if (!L_8)
		{
			goto IL_00a8;
		}
	}
	{
		Cardboard_t24 * L_9 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_9);
		bool L_10 = Cardboard_get_NativeUILayerSupported_m71(L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_00a8;
		}
	}
	{
		Cardboard_t24 * L_11 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_11);
		CardboardUILayer_t26 * L_12 = (L_11->___uiLayer_16);
		if (L_12)
		{
			goto IL_0098;
		}
	}
	{
		Cardboard_t24 * L_13 = (__this->___U3CU3Ef__this_2);
		CardboardUILayer_t26 * L_14 = (CardboardUILayer_t26 *)il2cpp_codegen_object_new (CardboardUILayer_t26_il2cpp_TypeInfo_var);
		CardboardUILayer__ctor_m143(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		L_13->___uiLayer_16 = L_14;
	}

IL_0098:
	{
		Cardboard_t24 * L_15 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_15);
		CardboardUILayer_t26 * L_16 = (L_15->___uiLayer_16);
		NullCheck(L_16);
		CardboardUILayer_Draw_m146(L_16, /*hidden argument*/NULL);
	}

IL_00a8:
	{
		Cardboard_t24 * L_17 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_17);
		Cardboard_DispatchEvents_m89(L_17, /*hidden argument*/NULL);
		Cardboard_t24 * L_18 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_18);
		L_18->___updated_15 = 0;
		goto IL_0021;
	}
	// Dead block : IL_00c4: ldarg.0

IL_00cb:
	{
		return 0;
	}

IL_00cd:
	{
		return 1;
	}
}
// System.Void Cardboard/<EndOfFrame>c__Iterator0::Dispose()
extern "C" void U3CEndOfFrameU3Ec__Iterator0_Dispose_m44 (U3CEndOfFrameU3Ec__Iterator0_t23 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_0 = (-1);
		return;
	}
}
// System.Void Cardboard/<EndOfFrame>c__Iterator0::Reset()
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t81_il2cpp_TypeInfo_var;
extern "C" void U3CEndOfFrameU3Ec__Iterator0_Reset_m45 (U3CEndOfFrameU3Ec__Iterator0_t23 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t81_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t81 * L_0 = (NotSupportedException_t81 *)il2cpp_codegen_object_new (NotSupportedException_t81_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m357(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Action
#include "System_Core_System_Action.h"
// CardboardProfile
#include "AssemblyU2DCSharp_CardboardProfile.h"
// Pose3D
#include "AssemblyU2DCSharp_Pose3D.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// System.Collections.Generic.List`1<System.String>
#include "mscorlib_System_Collections_Generic_List_1_gen.h"
#include "mscorlib_ArrayTypes.h"
// System.Uri
#include "System_System_Uri.h"
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"
// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlags.h"
// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_Coroutine.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// System.Collections.Generic.List`1<System.String>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Uri
#include "System_System_UriMethodDeclarations.h"
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// System.Action
#include "System_Core_System_ActionMethodDeclarations.h"
// Pose3D
#include "AssemblyU2DCSharp_Pose3DMethodDeclarations.h"
struct Cardboard_t24;
struct Object_t;
// Declaration !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
extern "C" Object_t * Object_FindObjectOfType_TisObject_t_m388_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define Object_FindObjectOfType_TisObject_t_m388(__this /* static, unused */, method) (( Object_t * (*) (Object_t * /* static, unused */, const MethodInfo*))Object_FindObjectOfType_TisObject_t_m388_gshared)(__this /* static, unused */, method)
// Declaration !!0 UnityEngine.Object::FindObjectOfType<Cardboard>()
// !!0 UnityEngine.Object::FindObjectOfType<Cardboard>()
#define Object_FindObjectOfType_TisCardboard_t24_m358(__this /* static, unused */, method) (( Cardboard_t24 * (*) (Object_t * /* static, unused */, const MethodInfo*))Object_FindObjectOfType_TisObject_t_m388_gshared)(__this /* static, unused */, method)
struct Cardboard_t24;
struct Object_t;
// Declaration !!0 UnityEngine.GameObject::AddComponent<System.Object>()
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C" Object_t * GameObject_AddComponent_TisObject_t_m389_gshared (GameObject_t47 * __this, const MethodInfo* method);
#define GameObject_AddComponent_TisObject_t_m389(__this, method) (( Object_t * (*) (GameObject_t47 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m389_gshared)(__this, method)
// Declaration !!0 UnityEngine.GameObject::AddComponent<Cardboard>()
// !!0 UnityEngine.GameObject::AddComponent<Cardboard>()
#define GameObject_AddComponent_TisCardboard_t24_m360(__this, method) (( Cardboard_t24 * (*) (GameObject_t47 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m389_gshared)(__this, method)
struct Camera_t32;
struct Object_t;
// Declaration !!0 UnityEngine.GameObject::GetComponent<System.Object>()
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" Object_t * GameObject_GetComponent_TisObject_t_m390_gshared (GameObject_t47 * __this, const MethodInfo* method);
#define GameObject_GetComponent_TisObject_t_m390(__this, method) (( Object_t * (*) (GameObject_t47 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m390_gshared)(__this, method)
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Camera>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Camera>()
#define GameObject_GetComponent_TisCamera_t32_m377(__this, method) (( Camera_t32 * (*) (GameObject_t47 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m390_gshared)(__this, method)
struct Camera_t32;
// Declaration !!0 UnityEngine.GameObject::AddComponent<UnityEngine.Camera>()
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.Camera>()
#define GameObject_AddComponent_TisCamera_t32_m379(__this, method) (( Camera_t32 * (*) (GameObject_t47 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m389_gshared)(__this, method)
// System.Void Cardboard::.ctor()
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern "C" void Cardboard__ctor_m46 (Cardboard_t24 * __this, const MethodInfo* method)
{
	{
		__this->___distortionCorrection_3 = 1;
		__this->___vrModeEnabled_4 = 1;
		__this->___enableAlignmentMarker_5 = 1;
		__this->___enableSettingsButton_6 = 1;
		__this->___tapIsTrigger_7 = 1;
		__this->___autoDriftCorrection_9 = 1;
		Vector2_t15  L_0 = {0};
		Vector2__ctor_m337(&L_0, (1.0f), (100000.0f), /*hidden argument*/NULL);
		__this->___defaultComfortableViewingRange_13 = L_0;
		MonoBehaviour__ctor_m282(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Cardboard::.cctor()
extern "C" void Cardboard__cctor_m47 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Cardboard::add_OnTrigger(System.Action)
// System.Action
#include "System_Core_System_Action.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
extern TypeInfo* Action_t27_il2cpp_TypeInfo_var;
extern "C" void Cardboard_add_OnTrigger_m48 (Cardboard_t24 * __this, Action_t27 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Action_t27_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		Action_t27 * L_0 = (__this->___OnTrigger_17);
		Action_t27 * L_1 = ___value;
		Delegate_t74 * L_2 = Delegate_Combine_m303(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___OnTrigger_17 = ((Action_t27 *)CastclassSealed(L_2, Action_t27_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void Cardboard::remove_OnTrigger(System.Action)
extern TypeInfo* Action_t27_il2cpp_TypeInfo_var;
extern "C" void Cardboard_remove_OnTrigger_m49 (Cardboard_t24 * __this, Action_t27 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Action_t27_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		Action_t27 * L_0 = (__this->___OnTrigger_17);
		Action_t27 * L_1 = ___value;
		Delegate_t74 * L_2 = Delegate_Remove_m304(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___OnTrigger_17 = ((Action_t27 *)CastclassSealed(L_2, Action_t27_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void Cardboard::add_OnTilt(System.Action)
extern TypeInfo* Action_t27_il2cpp_TypeInfo_var;
extern "C" void Cardboard_add_OnTilt_m50 (Cardboard_t24 * __this, Action_t27 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Action_t27_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		Action_t27 * L_0 = (__this->___OnTilt_18);
		Action_t27 * L_1 = ___value;
		Delegate_t74 * L_2 = Delegate_Combine_m303(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___OnTilt_18 = ((Action_t27 *)CastclassSealed(L_2, Action_t27_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void Cardboard::remove_OnTilt(System.Action)
extern TypeInfo* Action_t27_il2cpp_TypeInfo_var;
extern "C" void Cardboard_remove_OnTilt_m51 (Cardboard_t24 * __this, Action_t27 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Action_t27_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		Action_t27 * L_0 = (__this->___OnTilt_18);
		Action_t27 * L_1 = ___value;
		Delegate_t74 * L_2 = Delegate_Remove_m304(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___OnTilt_18 = ((Action_t27 *)CastclassSealed(L_2, Action_t27_il2cpp_TypeInfo_var));
		return;
	}
}
// Cardboard Cardboard::get_SDK()
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
extern TypeInfo* Cardboard_t24_il2cpp_TypeInfo_var;
extern TypeInfo* GameObject_t47_il2cpp_TypeInfo_var;
extern const MethodInfo* Object_FindObjectOfType_TisCardboard_t24_m358_MethodInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisCardboard_t24_m360_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral7;
extern Il2CppCodeGenString* _stringLiteral8;
extern "C" Cardboard_t24 * Cardboard_get_SDK_m52 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Cardboard_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		GameObject_t47_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(18);
		Object_FindObjectOfType_TisCardboard_t24_m358_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483657);
		GameObject_AddComponent_TisCardboard_t24_m360_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483658);
		_stringLiteral7 = il2cpp_codegen_string_literal_from_index(7);
		_stringLiteral8 = il2cpp_codegen_string_literal_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t47 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		Cardboard_t24 * L_0 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___sdk_2;
		bool L_1 = Object_op_Equality_m305(NULL /*static, unused*/, L_0, (Object_t75 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Cardboard_t24 * L_2 = Object_FindObjectOfType_TisCardboard_t24_m358(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisCardboard_t24_m358_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___sdk_2 = L_2;
	}

IL_001a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		Cardboard_t24 * L_3 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___sdk_2;
		bool L_4 = Object_op_Equality_m305(NULL /*static, unused*/, L_3, (Object_t75 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_005a;
		}
	}
	{
		Debug_Log_m353(NULL /*static, unused*/, _stringLiteral7, /*hidden argument*/NULL);
		GameObject_t47 * L_5 = (GameObject_t47 *)il2cpp_codegen_object_new (GameObject_t47_il2cpp_TypeInfo_var);
		GameObject__ctor_m359(L_5, _stringLiteral8, /*hidden argument*/NULL);
		V_0 = L_5;
		GameObject_t47 * L_6 = V_0;
		NullCheck(L_6);
		Cardboard_t24 * L_7 = GameObject_AddComponent_TisCardboard_t24_m360(L_6, /*hidden argument*/GameObject_AddComponent_TisCardboard_t24_m360_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___sdk_2 = L_7;
		GameObject_t47 * L_8 = V_0;
		NullCheck(L_8);
		Transform_t33 * L_9 = GameObject_get_transform_m361(L_8, /*hidden argument*/NULL);
		Vector3_t3  L_10 = Vector3_get_zero_m362(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_localPosition_m290(L_9, L_10, /*hidden argument*/NULL);
	}

IL_005a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		Cardboard_t24 * L_11 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___sdk_2;
		return L_11;
	}
}
// System.Boolean Cardboard::get_DistortionCorrection()
extern "C" bool Cardboard_get_DistortionCorrection_m53 (Cardboard_t24 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___distortionCorrection_3);
		return L_0;
	}
}
// System.Void Cardboard::set_DistortionCorrection(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
// Cardboard
#include "AssemblyU2DCSharp_CardboardMethodDeclarations.h"
extern TypeInfo* Cardboard_t24_il2cpp_TypeInfo_var;
extern "C" void Cardboard_set_DistortionCorrection_m54 (Cardboard_t24 * __this, bool ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Cardboard_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	BaseVRDevice_t28 * G_B4_0 = {0};
	BaseVRDevice_t28 * G_B3_0 = {0};
	int32_t G_B5_0 = 0;
	BaseVRDevice_t28 * G_B5_1 = {0};
	{
		bool L_0 = ___value;
		bool L_1 = (__this->___distortionCorrection_3);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_002f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		BaseVRDevice_t28 * L_2 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___device_11;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		BaseVRDevice_t28 * L_3 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___device_11;
		bool L_4 = ___value;
		G_B3_0 = L_3;
		if (!L_4)
		{
			G_B4_0 = L_3;
			goto IL_0029;
		}
	}
	{
		bool L_5 = Cardboard_get_NativeDistortionCorrectionSupported_m69(__this, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_5));
		G_B5_1 = G_B3_0;
		goto IL_002a;
	}

IL_0029:
	{
		G_B5_0 = 0;
		G_B5_1 = G_B4_0;
	}

IL_002a:
	{
		NullCheck(G_B5_1);
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void BaseVRDevice::SetDistortionCorrectionEnabled(System.Boolean) */, G_B5_1, G_B5_0);
	}

IL_002f:
	{
		bool L_6 = ___value;
		__this->___distortionCorrection_3 = L_6;
		return;
	}
}
// System.Boolean Cardboard::get_VRModeEnabled()
extern "C" bool Cardboard_get_VRModeEnabled_m55 (Cardboard_t24 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___vrModeEnabled_4);
		return L_0;
	}
}
// System.Void Cardboard::set_VRModeEnabled(System.Boolean)
extern TypeInfo* Cardboard_t24_il2cpp_TypeInfo_var;
extern "C" void Cardboard_set_VRModeEnabled_m56 (Cardboard_t24 * __this, bool ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Cardboard_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = ___value;
		bool L_1 = (__this->___vrModeEnabled_4);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0021;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		BaseVRDevice_t28 * L_2 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___device_11;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		BaseVRDevice_t28 * L_3 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___device_11;
		bool L_4 = ___value;
		NullCheck(L_3);
		VirtActionInvoker1< bool >::Invoke(6 /* System.Void BaseVRDevice::SetVRModeEnabled(System.Boolean) */, L_3, L_4);
	}

IL_0021:
	{
		bool L_5 = ___value;
		__this->___vrModeEnabled_4 = L_5;
		return;
	}
}
// System.Boolean Cardboard::get_EnableAlignmentMarker()
extern "C" bool Cardboard_get_EnableAlignmentMarker_m57 (Cardboard_t24 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___enableAlignmentMarker_5);
		return L_0;
	}
}
// System.Void Cardboard::set_EnableAlignmentMarker(System.Boolean)
extern TypeInfo* Cardboard_t24_il2cpp_TypeInfo_var;
extern "C" void Cardboard_set_EnableAlignmentMarker_m58 (Cardboard_t24 * __this, bool ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Cardboard_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	BaseVRDevice_t28 * G_B4_0 = {0};
	BaseVRDevice_t28 * G_B3_0 = {0};
	int32_t G_B5_0 = 0;
	BaseVRDevice_t28 * G_B5_1 = {0};
	{
		bool L_0 = ___value;
		bool L_1 = (__this->___enableAlignmentMarker_5);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_002f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		BaseVRDevice_t28 * L_2 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___device_11;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		BaseVRDevice_t28 * L_3 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___device_11;
		bool L_4 = ___value;
		G_B3_0 = L_3;
		if (!L_4)
		{
			G_B4_0 = L_3;
			goto IL_0029;
		}
	}
	{
		bool L_5 = Cardboard_get_NativeUILayerSupported_m71(__this, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_5));
		G_B5_1 = G_B3_0;
		goto IL_002a;
	}

IL_0029:
	{
		G_B5_0 = 0;
		G_B5_1 = G_B4_0;
	}

IL_002a:
	{
		NullCheck(G_B5_1);
		VirtActionInvoker1< bool >::Invoke(7 /* System.Void BaseVRDevice::SetAlignmentMarkerEnabled(System.Boolean) */, G_B5_1, G_B5_0);
	}

IL_002f:
	{
		bool L_6 = ___value;
		__this->___enableAlignmentMarker_5 = L_6;
		return;
	}
}
// System.Boolean Cardboard::get_EnableSettingsButton()
extern "C" bool Cardboard_get_EnableSettingsButton_m59 (Cardboard_t24 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___enableSettingsButton_6);
		return L_0;
	}
}
// System.Void Cardboard::set_EnableSettingsButton(System.Boolean)
extern TypeInfo* Cardboard_t24_il2cpp_TypeInfo_var;
extern "C" void Cardboard_set_EnableSettingsButton_m60 (Cardboard_t24 * __this, bool ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Cardboard_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = ___value;
		bool L_1 = (__this->___enableSettingsButton_6);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0021;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		BaseVRDevice_t28 * L_2 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___device_11;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		BaseVRDevice_t28 * L_3 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___device_11;
		bool L_4 = ___value;
		NullCheck(L_3);
		VirtActionInvoker1< bool >::Invoke(8 /* System.Void BaseVRDevice::SetSettingsButtonEnabled(System.Boolean) */, L_3, L_4);
	}

IL_0021:
	{
		bool L_5 = ___value;
		__this->___enableSettingsButton_6 = L_5;
		return;
	}
}
// System.Boolean Cardboard::get_TapIsTrigger()
extern "C" bool Cardboard_get_TapIsTrigger_m61 (Cardboard_t24 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___tapIsTrigger_7);
		return L_0;
	}
}
// System.Void Cardboard::set_TapIsTrigger(System.Boolean)
extern TypeInfo* Cardboard_t24_il2cpp_TypeInfo_var;
extern "C" void Cardboard_set_TapIsTrigger_m62 (Cardboard_t24 * __this, bool ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Cardboard_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = ___value;
		bool L_1 = (__this->___tapIsTrigger_7);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0021;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		BaseVRDevice_t28 * L_2 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___device_11;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		BaseVRDevice_t28 * L_3 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___device_11;
		bool L_4 = ___value;
		NullCheck(L_3);
		VirtActionInvoker1< bool >::Invoke(9 /* System.Void BaseVRDevice::SetTapIsTrigger(System.Boolean) */, L_3, L_4);
	}

IL_0021:
	{
		bool L_5 = ___value;
		__this->___tapIsTrigger_7 = L_5;
		return;
	}
}
// System.Single Cardboard::get_NeckModelScale()
extern "C" float Cardboard_get_NeckModelScale_m63 (Cardboard_t24 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___neckModelScale_8);
		return L_0;
	}
}
// System.Void Cardboard::set_NeckModelScale(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
extern TypeInfo* Mathf_t69_il2cpp_TypeInfo_var;
extern TypeInfo* Cardboard_t24_il2cpp_TypeInfo_var;
extern "C" void Cardboard_set_NeckModelScale_m64 (Cardboard_t24 * __this, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t69_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		Cardboard_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t69_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Clamp01_m363(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		___value = L_1;
		float L_2 = ___value;
		float L_3 = (__this->___neckModelScale_8);
		bool L_4 = Mathf_Approximately_m364(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_002e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		BaseVRDevice_t28 * L_5 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___device_11;
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		BaseVRDevice_t28 * L_6 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___device_11;
		float L_7 = ___value;
		NullCheck(L_6);
		VirtActionInvoker1< float >::Invoke(10 /* System.Void BaseVRDevice::SetNeckModelScale(System.Single) */, L_6, L_7);
	}

IL_002e:
	{
		float L_8 = ___value;
		__this->___neckModelScale_8 = L_8;
		return;
	}
}
// System.Boolean Cardboard::get_AutoDriftCorrection()
extern "C" bool Cardboard_get_AutoDriftCorrection_m65 (Cardboard_t24 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___autoDriftCorrection_9);
		return L_0;
	}
}
// System.Void Cardboard::set_AutoDriftCorrection(System.Boolean)
extern TypeInfo* Cardboard_t24_il2cpp_TypeInfo_var;
extern "C" void Cardboard_set_AutoDriftCorrection_m66 (Cardboard_t24 * __this, bool ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Cardboard_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = ___value;
		bool L_1 = (__this->___autoDriftCorrection_9);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0021;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		BaseVRDevice_t28 * L_2 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___device_11;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		BaseVRDevice_t28 * L_3 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___device_11;
		bool L_4 = ___value;
		NullCheck(L_3);
		VirtActionInvoker1< bool >::Invoke(11 /* System.Void BaseVRDevice::SetAutoDriftCorrectionEnabled(System.Boolean) */, L_3, L_4);
	}

IL_0021:
	{
		bool L_5 = ___value;
		__this->___autoDriftCorrection_9 = L_5;
		return;
	}
}
// System.Boolean Cardboard::get_SyncWithCardboardApp()
extern "C" bool Cardboard_get_SyncWithCardboardApp_m67 (Cardboard_t24 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___syncWithCardboardApp_10);
		return L_0;
	}
}
// System.Void Cardboard::set_SyncWithCardboardApp(System.Boolean)
extern Il2CppCodeGenString* _stringLiteral9;
extern "C" void Cardboard_set_SyncWithCardboardApp_m68 (Cardboard_t24 * __this, bool ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral9 = il2cpp_codegen_string_literal_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = ___value;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		bool L_1 = ___value;
		bool L_2 = (__this->___syncWithCardboardApp_10);
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_001c;
		}
	}
	{
		Debug_LogWarning_m310(NULL /*static, unused*/, _stringLiteral9, /*hidden argument*/NULL);
	}

IL_001c:
	{
		bool L_3 = ___value;
		__this->___syncWithCardboardApp_10 = L_3;
		return;
	}
}
// System.Boolean Cardboard::get_NativeDistortionCorrectionSupported()
extern "C" bool Cardboard_get_NativeDistortionCorrectionSupported_m69 (Cardboard_t24 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_19);
		return L_0;
	}
}
// System.Void Cardboard::set_NativeDistortionCorrectionSupported(System.Boolean)
extern "C" void Cardboard_set_NativeDistortionCorrectionSupported_m70 (Cardboard_t24 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_19 = L_0;
		return;
	}
}
// System.Boolean Cardboard::get_NativeUILayerSupported()
extern "C" bool Cardboard_get_NativeUILayerSupported_m71 (Cardboard_t24 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CNativeUILayerSupportedU3Ek__BackingField_20);
		return L_0;
	}
}
// System.Void Cardboard::set_NativeUILayerSupported(System.Boolean)
extern "C" void Cardboard_set_NativeUILayerSupported_m72 (Cardboard_t24 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CNativeUILayerSupportedU3Ek__BackingField_20 = L_0;
		return;
	}
}
// UnityEngine.RenderTexture Cardboard::get_StereoScreen()
extern TypeInfo* Cardboard_t24_il2cpp_TypeInfo_var;
extern "C" RenderTexture_t12 * Cardboard_get_StereoScreen_m73 (Cardboard_t24 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Cardboard_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___distortionCorrection_3);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		bool L_1 = (__this->___vrModeEnabled_4);
		if (L_1)
		{
			goto IL_0018;
		}
	}

IL_0016:
	{
		return (RenderTexture_t12 *)NULL;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		RenderTexture_t12 * L_2 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___stereoScreen_12;
		bool L_3 = Object_op_Equality_m305(NULL /*static, unused*/, L_2, (Object_t75 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003f;
		}
	}
	{
		bool L_4 = Cardboard_get_NativeDistortionCorrectionSupported_m69(__this, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		RenderTexture_t12 * L_5 = Cardboard_CreateStereoScreen_m92(__this, /*hidden argument*/NULL);
		Cardboard_set_StereoScreen_m74(__this, L_5, /*hidden argument*/NULL);
	}

IL_003f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		RenderTexture_t12 * L_6 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___stereoScreen_12;
		return L_6;
	}
}
// System.Void Cardboard::set_StereoScreen(UnityEngine.RenderTexture)
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTextureMethodDeclarations.h"
extern TypeInfo* Cardboard_t24_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral10;
extern "C" void Cardboard_set_StereoScreen_m74 (Cardboard_t24 * __this, RenderTexture_t12 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Cardboard_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		_stringLiteral10 = il2cpp_codegen_string_literal_from_index(10);
		s_Il2CppMethodIntialized = true;
	}
	{
		RenderTexture_t12 * L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		RenderTexture_t12 * L_1 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___stereoScreen_12;
		bool L_2 = Object_op_Equality_m305(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		bool L_3 = Cardboard_get_NativeDistortionCorrectionSupported_m69(__this, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0033;
		}
	}
	{
		RenderTexture_t12 * L_4 = ___value;
		bool L_5 = Object_op_Inequality_m312(NULL /*static, unused*/, L_4, (Object_t75 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		Debug_LogError_m365(NULL /*static, unused*/, _stringLiteral10, /*hidden argument*/NULL);
		return;
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		RenderTexture_t12 * L_6 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___stereoScreen_12;
		bool L_7 = Object_op_Inequality_m312(NULL /*static, unused*/, L_6, (Object_t75 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		RenderTexture_t12 * L_8 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___stereoScreen_12;
		NullCheck(L_8);
		RenderTexture_Release_m313(L_8, /*hidden argument*/NULL);
	}

IL_004d:
	{
		RenderTexture_t12 * L_9 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___stereoScreen_12 = L_9;
		RenderTexture_t12 * L_10 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___stereoScreen_12;
		bool L_11 = Object_op_Inequality_m312(NULL /*static, unused*/, L_10, (Object_t75 *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_007d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		RenderTexture_t12 * L_12 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___stereoScreen_12;
		NullCheck(L_12);
		bool L_13 = RenderTexture_IsCreated_m366(L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_007d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		RenderTexture_t12 * L_14 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___stereoScreen_12;
		NullCheck(L_14);
		RenderTexture_Create_m320(L_14, /*hidden argument*/NULL);
	}

IL_007d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		BaseVRDevice_t28 * L_15 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___device_11;
		if (!L_15)
		{
			goto IL_0096;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		BaseVRDevice_t28 * L_16 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___device_11;
		RenderTexture_t12 * L_17 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___stereoScreen_12;
		NullCheck(L_16);
		VirtActionInvoker1< RenderTexture_t12 * >::Invoke(12 /* System.Void BaseVRDevice::SetStereoScreen(UnityEngine.RenderTexture) */, L_16, L_17);
	}

IL_0096:
	{
		return;
	}
}
// System.Boolean Cardboard::get_UseDistortionEffect()
// UnityEngine.SystemInfo
#include "UnityEngine_UnityEngine_SystemInfoMethodDeclarations.h"
extern "C" bool Cardboard_get_UseDistortionEffect_m75 (Cardboard_t24 * __this, const MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	{
		bool L_0 = Cardboard_get_NativeDistortionCorrectionSupported_m69(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0028;
		}
	}
	{
		bool L_1 = (__this->___distortionCorrection_3);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		bool L_2 = (__this->___vrModeEnabled_4);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		bool L_3 = SystemInfo_get_supportsRenderTextures_m309(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_3));
		goto IL_0029;
	}

IL_0028:
	{
		G_B5_0 = 0;
	}

IL_0029:
	{
		return G_B5_0;
	}
}
// CardboardProfile Cardboard::get_Profile()
// BaseVRDevice
#include "AssemblyU2DCSharp_BaseVRDeviceMethodDeclarations.h"
extern TypeInfo* Cardboard_t24_il2cpp_TypeInfo_var;
extern "C" CardboardProfile_t41 * Cardboard_get_Profile_m76 (Cardboard_t24 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Cardboard_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		BaseVRDevice_t28 * L_0 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___device_11;
		NullCheck(L_0);
		CardboardProfile_t41 * L_1 = BaseVRDevice_get_Profile_m238(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Pose3D Cardboard::get_HeadPose()
extern TypeInfo* Cardboard_t24_il2cpp_TypeInfo_var;
extern "C" Pose3D_t49 * Cardboard_get_HeadPose_m77 (Cardboard_t24 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Cardboard_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		BaseVRDevice_t28 * L_0 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___device_11;
		NullCheck(L_0);
		Pose3D_t49 * L_1 = BaseVRDevice_GetHeadPose_m246(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Pose3D Cardboard::EyePose(Cardboard/Eye)
// Cardboard/Eye
#include "AssemblyU2DCSharp_Cardboard_Eye.h"
extern TypeInfo* Cardboard_t24_il2cpp_TypeInfo_var;
extern "C" Pose3D_t49 * Cardboard_EyePose_m78 (Cardboard_t24 * __this, int32_t ___eye, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Cardboard_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		BaseVRDevice_t28 * L_0 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___device_11;
		int32_t L_1 = ___eye;
		NullCheck(L_0);
		Pose3D_t49 * L_2 = BaseVRDevice_GetEyePose_m247(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Matrix4x4 Cardboard::Projection(Cardboard/Eye,Cardboard/Distortion)
// Cardboard/Distortion
#include "AssemblyU2DCSharp_Cardboard_Distortion.h"
extern TypeInfo* Cardboard_t24_il2cpp_TypeInfo_var;
extern "C" Matrix4x4_t43  Cardboard_Projection_m79 (Cardboard_t24 * __this, int32_t ___eye, int32_t ___distortion, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Cardboard_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		BaseVRDevice_t28 * L_0 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___device_11;
		int32_t L_1 = ___eye;
		int32_t L_2 = ___distortion;
		NullCheck(L_0);
		Matrix4x4_t43  L_3 = BaseVRDevice_GetProjection_m248(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.Rect Cardboard::Viewport(Cardboard/Eye,Cardboard/Distortion)
extern TypeInfo* Cardboard_t24_il2cpp_TypeInfo_var;
extern "C" Rect_t18  Cardboard_Viewport_m80 (Cardboard_t24 * __this, int32_t ___eye, int32_t ___distortion, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Cardboard_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		BaseVRDevice_t28 * L_0 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___device_11;
		int32_t L_1 = ___eye;
		int32_t L_2 = ___distortion;
		NullCheck(L_0);
		Rect_t18  L_3 = BaseVRDevice_GetViewport_m249(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.Vector2 Cardboard::get_ComfortableViewingRange()
extern "C" Vector2_t15  Cardboard_get_ComfortableViewingRange_m81 (Cardboard_t24 * __this, const MethodInfo* method)
{
	{
		Vector2_t15  L_0 = (__this->___defaultComfortableViewingRange_13);
		return L_0;
	}
}
// System.Void Cardboard::InitDevice()
// System.Collections.Generic.List`1<System.String>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Uri
#include "System_System_UriMethodDeclarations.h"
extern TypeInfo* Cardboard_t24_il2cpp_TypeInfo_var;
extern TypeInfo* BaseVRDevice_t28_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t66_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t25_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m367_MethodInfo_var;
extern const MethodInfo* List_1_ToArray_m368_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral11;
extern Il2CppCodeGenString* _stringLiteral12;
extern Il2CppCodeGenString* _stringLiteral13;
extern Il2CppCodeGenString* _stringLiteral14;
extern "C" void Cardboard_InitDevice_m82 (Cardboard_t24 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Cardboard_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		BaseVRDevice_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		List_1_t66_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		Uri_t25_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		List_1__ctor_m367_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483659);
		List_1_ToArray_m368_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483660);
		_stringLiteral11 = il2cpp_codegen_string_literal_from_index(11);
		_stringLiteral12 = il2cpp_codegen_string_literal_from_index(12);
		_stringLiteral13 = il2cpp_codegen_string_literal_from_index(13);
		_stringLiteral14 = il2cpp_codegen_string_literal_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t66 * V_0 = {0};
	BaseVRDevice_t28 * G_B10_0 = {0};
	BaseVRDevice_t28 * G_B9_0 = {0};
	int32_t G_B11_0 = 0;
	BaseVRDevice_t28 * G_B11_1 = {0};
	BaseVRDevice_t28 * G_B13_0 = {0};
	BaseVRDevice_t28 * G_B12_0 = {0};
	int32_t G_B14_0 = 0;
	BaseVRDevice_t28 * G_B14_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		BaseVRDevice_t28 * L_0 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___device_11;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		BaseVRDevice_t28 * L_1 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___device_11;
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(27 /* System.Void BaseVRDevice::Destroy() */, L_1);
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(BaseVRDevice_t28_il2cpp_TypeInfo_var);
		BaseVRDevice_t28 * L_2 = BaseVRDevice_GetDevice_m258(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___device_11 = L_2;
		BaseVRDevice_t28 * L_3 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___device_11;
		NullCheck(L_3);
		VirtActionInvoker0::Invoke(4 /* System.Void BaseVRDevice::Init() */, L_3);
		List_1_t66 * L_4 = (List_1_t66 *)il2cpp_codegen_object_new (List_1_t66_il2cpp_TypeInfo_var);
		List_1__ctor_m367(L_4, /*hidden argument*/List_1__ctor_m367_MethodInfo_var);
		V_0 = L_4;
		BaseVRDevice_t28 * L_5 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___device_11;
		List_1_t66 * L_6 = V_0;
		NullCheck(L_5);
		bool L_7 = (bool)VirtFuncInvoker1< bool, List_1_t66 * >::Invoke(13 /* System.Boolean BaseVRDevice::SupportsNativeDistortionCorrection(System.Collections.Generic.List`1<System.String>) */, L_5, L_6);
		Cardboard_set_NativeDistortionCorrectionSupported_m70(__this, L_7, /*hidden argument*/NULL);
		List_1_t66 * L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.String>::get_Count() */, L_8);
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_006f;
		}
	}
	{
		List_1_t66 * L_10 = V_0;
		NullCheck(L_10);
		StringU5BU5D_t82* L_11 = List_1_ToArray_m368(L_10, /*hidden argument*/List_1_ToArray_m368_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Join_m369(NULL /*static, unused*/, _stringLiteral12, L_11, /*hidden argument*/NULL);
		String_t* L_13 = String_Concat_m370(NULL /*static, unused*/, _stringLiteral11, L_12, _stringLiteral13, /*hidden argument*/NULL);
		Debug_LogWarning_m310(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
	}

IL_006f:
	{
		List_1_t66 * L_14 = V_0;
		NullCheck(L_14);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<System.String>::Clear() */, L_14);
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		BaseVRDevice_t28 * L_15 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___device_11;
		List_1_t66 * L_16 = V_0;
		NullCheck(L_15);
		bool L_17 = (bool)VirtFuncInvoker1< bool, List_1_t66 * >::Invoke(14 /* System.Boolean BaseVRDevice::SupportsNativeUILayer(System.Collections.Generic.List`1<System.String>) */, L_15, L_16);
		Cardboard_set_NativeUILayerSupported_m72(__this, L_17, /*hidden argument*/NULL);
		List_1_t66 * L_18 = V_0;
		NullCheck(L_18);
		int32_t L_19 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.String>::get_Count() */, L_18);
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_00b6;
		}
	}
	{
		List_1_t66 * L_20 = V_0;
		NullCheck(L_20);
		StringU5BU5D_t82* L_21 = List_1_ToArray_m368(L_20, /*hidden argument*/List_1_ToArray_m368_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_22 = String_Join_m369(NULL /*static, unused*/, _stringLiteral12, L_21, /*hidden argument*/NULL);
		String_t* L_23 = String_Concat_m370(NULL /*static, unused*/, _stringLiteral14, L_22, _stringLiteral13, /*hidden argument*/NULL);
		Debug_LogWarning_m310(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
	}

IL_00b6:
	{
		Uri_t25 * L_24 = (__this->___DefaultDeviceProfile_14);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t25_il2cpp_TypeInfo_var);
		bool L_25 = Uri_op_Inequality_m371(NULL /*static, unused*/, L_24, (Uri_t25 *)NULL, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00d8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		BaseVRDevice_t28 * L_26 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___device_11;
		Uri_t25 * L_27 = (__this->___DefaultDeviceProfile_14);
		NullCheck(L_26);
		VirtFuncInvoker1< bool, Uri_t25 * >::Invoke(16 /* System.Boolean BaseVRDevice::SetDefaultDeviceProfile(System.Uri) */, L_26, L_27);
	}

IL_00d8:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		BaseVRDevice_t28 * L_28 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___device_11;
		bool L_29 = (__this->___vrModeEnabled_4);
		NullCheck(L_28);
		VirtActionInvoker1< bool >::Invoke(6 /* System.Void BaseVRDevice::SetVRModeEnabled(System.Boolean) */, L_28, L_29);
		BaseVRDevice_t28 * L_30 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___device_11;
		bool L_31 = (__this->___distortionCorrection_3);
		G_B9_0 = L_30;
		if (!L_31)
		{
			G_B10_0 = L_30;
			goto IL_0100;
		}
	}
	{
		bool L_32 = Cardboard_get_NativeDistortionCorrectionSupported_m69(__this, /*hidden argument*/NULL);
		G_B11_0 = ((int32_t)(L_32));
		G_B11_1 = G_B9_0;
		goto IL_0101;
	}

IL_0100:
	{
		G_B11_0 = 0;
		G_B11_1 = G_B10_0;
	}

IL_0101:
	{
		NullCheck(G_B11_1);
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void BaseVRDevice::SetDistortionCorrectionEnabled(System.Boolean) */, G_B11_1, G_B11_0);
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		BaseVRDevice_t28 * L_33 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___device_11;
		bool L_34 = (__this->___enableAlignmentMarker_5);
		G_B12_0 = L_33;
		if (!L_34)
		{
			G_B13_0 = L_33;
			goto IL_011e;
		}
	}
	{
		bool L_35 = Cardboard_get_NativeUILayerSupported_m71(__this, /*hidden argument*/NULL);
		G_B14_0 = ((int32_t)(L_35));
		G_B14_1 = G_B12_0;
		goto IL_011f;
	}

IL_011e:
	{
		G_B14_0 = 0;
		G_B14_1 = G_B13_0;
	}

IL_011f:
	{
		NullCheck(G_B14_1);
		VirtActionInvoker1< bool >::Invoke(7 /* System.Void BaseVRDevice::SetAlignmentMarkerEnabled(System.Boolean) */, G_B14_1, G_B14_0);
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		BaseVRDevice_t28 * L_36 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___device_11;
		bool L_37 = (__this->___enableSettingsButton_6);
		NullCheck(L_36);
		VirtActionInvoker1< bool >::Invoke(8 /* System.Void BaseVRDevice::SetSettingsButtonEnabled(System.Boolean) */, L_36, L_37);
		BaseVRDevice_t28 * L_38 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___device_11;
		bool L_39 = (__this->___tapIsTrigger_7);
		NullCheck(L_38);
		VirtActionInvoker1< bool >::Invoke(9 /* System.Void BaseVRDevice::SetTapIsTrigger(System.Boolean) */, L_38, L_39);
		BaseVRDevice_t28 * L_40 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___device_11;
		float L_41 = (__this->___neckModelScale_8);
		NullCheck(L_40);
		VirtActionInvoker1< float >::Invoke(10 /* System.Void BaseVRDevice::SetNeckModelScale(System.Single) */, L_40, L_41);
		BaseVRDevice_t28 * L_42 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___device_11;
		bool L_43 = (__this->___autoDriftCorrection_9);
		NullCheck(L_42);
		VirtActionInvoker1< bool >::Invoke(11 /* System.Void BaseVRDevice::SetAutoDriftCorrectionEnabled(System.Boolean) */, L_42, L_43);
		BaseVRDevice_t28 * L_44 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___device_11;
		NullCheck(L_44);
		VirtActionInvoker0::Invoke(19 /* System.Void BaseVRDevice::UpdateScreenData() */, L_44);
		return;
	}
}
// System.Void Cardboard::Awake()
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
// UnityEngine.Screen
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"
extern TypeInfo* Cardboard_t24_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral15;
extern "C" void Cardboard_Awake_m83 (Cardboard_t24 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Cardboard_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		_stringLiteral15 = il2cpp_codegen_string_literal_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		Cardboard_t24 * L_0 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___sdk_2;
		bool L_1 = Object_op_Equality_m305(NULL /*static, unused*/, L_0, (Object_t75 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___sdk_2 = __this;
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		Cardboard_t24 * L_2 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___sdk_2;
		bool L_3 = Object_op_Inequality_m312(NULL /*static, unused*/, L_2, __this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		Debug_LogWarning_m310(NULL /*static, unused*/, _stringLiteral15, /*hidden argument*/NULL);
		Behaviour_set_enabled_m311(__this, 0, /*hidden argument*/NULL);
		return;
	}

IL_0038:
	{
		Application_set_targetFrameRate_m372(NULL /*static, unused*/, ((int32_t)60), /*hidden argument*/NULL);
		Screen_set_sleepTimeout_m373(NULL /*static, unused*/, (-1), /*hidden argument*/NULL);
		Cardboard_InitDevice_m82(__this, /*hidden argument*/NULL);
		Cardboard_AddDummyCamera_m90(__this, /*hidden argument*/NULL);
		Cardboard_set_StereoScreen_m74(__this, (RenderTexture_t12 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Cardboard::get_Triggered()
extern "C" bool Cardboard_get_Triggered_m84 (Cardboard_t24 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CTriggeredU3Ek__BackingField_21);
		return L_0;
	}
}
// System.Void Cardboard::set_Triggered(System.Boolean)
extern "C" void Cardboard_set_Triggered_m85 (Cardboard_t24 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CTriggeredU3Ek__BackingField_21 = L_0;
		return;
	}
}
// System.Boolean Cardboard::get_Tilted()
extern "C" bool Cardboard_get_Tilted_m86 (Cardboard_t24 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CTiltedU3Ek__BackingField_22);
		return L_0;
	}
}
// System.Void Cardboard::set_Tilted(System.Boolean)
extern "C" void Cardboard_set_Tilted_m87 (Cardboard_t24 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CTiltedU3Ek__BackingField_22 = L_0;
		return;
	}
}
// System.Void Cardboard::UpdateState()
extern TypeInfo* Cardboard_t24_il2cpp_TypeInfo_var;
extern "C" void Cardboard_UpdateState_m88 (Cardboard_t24 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Cardboard_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___updated_15);
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		BaseVRDevice_t28 * L_1 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___device_11;
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(18 /* System.Void BaseVRDevice::UpdateState() */, L_1);
		__this->___updated_15 = 1;
	}

IL_001c:
	{
		return;
	}
}
// System.Void Cardboard::DispatchEvents()
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// System.Action
#include "System_Core_System_ActionMethodDeclarations.h"
extern TypeInfo* Cardboard_t24_il2cpp_TypeInfo_var;
extern TypeInfo* Input_t83_il2cpp_TypeInfo_var;
extern "C" void Cardboard_DispatchEvents_m89 (Cardboard_t24 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Cardboard_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		Input_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	Cardboard_t24 * G_B5_0 = {0};
	Cardboard_t24 * G_B1_0 = {0};
	Cardboard_t24 * G_B3_0 = {0};
	Cardboard_t24 * G_B2_0 = {0};
	int32_t G_B4_0 = 0;
	Cardboard_t24 * G_B4_1 = {0};
	int32_t G_B6_0 = 0;
	Cardboard_t24 * G_B6_1 = {0};
	Cardboard_t24 * G_B11_0 = {0};
	Cardboard_t24 * G_B7_0 = {0};
	Cardboard_t24 * G_B9_0 = {0};
	Cardboard_t24 * G_B8_0 = {0};
	int32_t G_B10_0 = 0;
	Cardboard_t24 * G_B10_1 = {0};
	int32_t G_B12_0 = 0;
	Cardboard_t24 * G_B12_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		BaseVRDevice_t28 * L_0 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___device_11;
		NullCheck(L_0);
		bool L_1 = (L_0->___triggered_12);
		G_B1_0 = __this;
		if (L_1)
		{
			G_B5_0 = __this;
			goto IL_0026;
		}
	}
	{
		bool L_2 = Cardboard_get_TapIsTrigger_m61(__this, /*hidden argument*/NULL);
		G_B2_0 = G_B1_0;
		if (!L_2)
		{
			G_B3_0 = G_B1_0;
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t83_il2cpp_TypeInfo_var);
		bool L_3 = Input_GetMouseButtonDown_m374(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)(L_3));
		G_B4_1 = G_B2_0;
		goto IL_0024;
	}

IL_0023:
	{
		G_B4_0 = 0;
		G_B4_1 = G_B3_0;
	}

IL_0024:
	{
		G_B6_0 = G_B4_0;
		G_B6_1 = G_B4_1;
		goto IL_0027;
	}

IL_0026:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_0027:
	{
		NullCheck(G_B6_1);
		Cardboard_set_Triggered_m85(G_B6_1, G_B6_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		BaseVRDevice_t28 * L_4 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___device_11;
		NullCheck(L_4);
		bool L_5 = (L_4->___tilted_13);
		G_B7_0 = __this;
		if (L_5)
		{
			G_B11_0 = __this;
			goto IL_0053;
		}
	}
	{
		bool L_6 = Cardboard_get_TapIsTrigger_m61(__this, /*hidden argument*/NULL);
		G_B8_0 = G_B7_0;
		if (!L_6)
		{
			G_B9_0 = G_B7_0;
			goto IL_0050;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t83_il2cpp_TypeInfo_var);
		bool L_7 = Input_GetKeyDown_m375(NULL /*static, unused*/, ((int32_t)27), /*hidden argument*/NULL);
		G_B10_0 = ((int32_t)(L_7));
		G_B10_1 = G_B8_0;
		goto IL_0051;
	}

IL_0050:
	{
		G_B10_0 = 0;
		G_B10_1 = G_B9_0;
	}

IL_0051:
	{
		G_B12_0 = G_B10_0;
		G_B12_1 = G_B10_1;
		goto IL_0054;
	}

IL_0053:
	{
		G_B12_0 = 1;
		G_B12_1 = G_B11_0;
	}

IL_0054:
	{
		NullCheck(G_B12_1);
		Cardboard_set_Tilted_m87(G_B12_1, G_B12_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		BaseVRDevice_t28 * L_8 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___device_11;
		NullCheck(L_8);
		L_8->___triggered_12 = 0;
		BaseVRDevice_t28 * L_9 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___device_11;
		NullCheck(L_9);
		L_9->___tilted_13 = 0;
		bool L_10 = Cardboard_get_Tilted_m86(__this, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0090;
		}
	}
	{
		Action_t27 * L_11 = (__this->___OnTilt_18);
		if (!L_11)
		{
			goto IL_0090;
		}
	}
	{
		Action_t27 * L_12 = (__this->___OnTilt_18);
		NullCheck(L_12);
		Action_Invoke_m376(L_12, /*hidden argument*/NULL);
	}

IL_0090:
	{
		bool L_13 = Cardboard_get_Triggered_m84(__this, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_00b1;
		}
	}
	{
		Action_t27 * L_14 = (__this->___OnTrigger_17);
		if (!L_14)
		{
			goto IL_00b1;
		}
	}
	{
		Action_t27 * L_15 = (__this->___OnTrigger_17);
		NullCheck(L_15);
		Action_Invoke_m376(L_15, /*hidden argument*/NULL);
	}

IL_00b1:
	{
		return;
	}
}
// System.Void Cardboard::AddDummyCamera()
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
extern TypeInfo* GameObject_t47_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisCamera_t32_m377_MethodInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisCamera_t32_m379_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral16;
extern "C" void Cardboard_AddDummyCamera_m90 (Cardboard_t24 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_t47_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(18);
		GameObject_GetComponent_TisCamera_t32_m377_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483661);
		GameObject_AddComponent_TisCamera_t32_m379_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483662);
		_stringLiteral16 = il2cpp_codegen_string_literal_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t47 * V_0 = {0};
	Camera_t32 * V_1 = {0};
	{
		GameObject_t47 * L_0 = Component_get_gameObject_m307(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		GameObject_t47 * L_1 = V_0;
		NullCheck(L_1);
		Camera_t32 * L_2 = GameObject_GetComponent_TisCamera_t32_m377(L_1, /*hidden argument*/GameObject_GetComponent_TisCamera_t32_m377_MethodInfo_var);
		bool L_3 = Object_op_Implicit_m314(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		GameObject_t47 * L_4 = (GameObject_t47 *)il2cpp_codegen_object_new (GameObject_t47_il2cpp_TypeInfo_var);
		GameObject__ctor_m359(L_4, _stringLiteral16, /*hidden argument*/NULL);
		V_0 = L_4;
		GameObject_t47 * L_5 = V_0;
		NullCheck(L_5);
		Transform_t33 * L_6 = GameObject_get_transform_m361(L_5, /*hidden argument*/NULL);
		GameObject_t47 * L_7 = Component_get_gameObject_m307(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_t33 * L_8 = GameObject_get_transform_m361(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_parent_m378(L_6, L_8, /*hidden argument*/NULL);
	}

IL_0038:
	{
		GameObject_t47 * L_9 = V_0;
		NullCheck(L_9);
		Camera_t32 * L_10 = GameObject_AddComponent_TisCamera_t32_m379(L_9, /*hidden argument*/GameObject_AddComponent_TisCamera_t32_m379_MethodInfo_var);
		V_1 = L_10;
		Camera_t32 * L_11 = V_1;
		NullCheck(L_11);
		Camera_set_clearFlags_m380(L_11, 2, /*hidden argument*/NULL);
		Camera_t32 * L_12 = V_1;
		Color_t11  L_13 = Color_get_black_m381(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_12);
		Camera_set_backgroundColor_m382(L_12, L_13, /*hidden argument*/NULL);
		Camera_t32 * L_14 = V_1;
		NullCheck(L_14);
		Camera_set_cullingMask_m383(L_14, 0, /*hidden argument*/NULL);
		Camera_t32 * L_15 = V_1;
		NullCheck(L_15);
		Camera_set_useOcclusionCulling_m384(L_15, 0, /*hidden argument*/NULL);
		Camera_t32 * L_16 = V_1;
		NullCheck(L_16);
		Camera_set_depth_m385(L_16, (-100.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator Cardboard::EndOfFrame()
// Cardboard/<EndOfFrame>c__Iterator0
#include "AssemblyU2DCSharp_Cardboard_U3CEndOfFrameU3Ec__Iterator0MethodDeclarations.h"
extern TypeInfo* U3CEndOfFrameU3Ec__Iterator0_t23_il2cpp_TypeInfo_var;
extern "C" Object_t * Cardboard_EndOfFrame_m91 (Cardboard_t24 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CEndOfFrameU3Ec__Iterator0_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		s_Il2CppMethodIntialized = true;
	}
	U3CEndOfFrameU3Ec__Iterator0_t23 * V_0 = {0};
	{
		U3CEndOfFrameU3Ec__Iterator0_t23 * L_0 = (U3CEndOfFrameU3Ec__Iterator0_t23 *)il2cpp_codegen_object_new (U3CEndOfFrameU3Ec__Iterator0_t23_il2cpp_TypeInfo_var);
		U3CEndOfFrameU3Ec__Iterator0__ctor_m40(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CEndOfFrameU3Ec__Iterator0_t23 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_2 = __this;
		U3CEndOfFrameU3Ec__Iterator0_t23 * L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.RenderTexture Cardboard::CreateStereoScreen()
extern TypeInfo* Cardboard_t24_il2cpp_TypeInfo_var;
extern "C" RenderTexture_t12 * Cardboard_CreateStereoScreen_m92 (Cardboard_t24 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Cardboard_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		BaseVRDevice_t28 * L_0 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___device_11;
		NullCheck(L_0);
		RenderTexture_t12 * L_1 = (RenderTexture_t12 *)VirtFuncInvoker0< RenderTexture_t12 * >::Invoke(15 /* UnityEngine.RenderTexture BaseVRDevice::CreateStereoScreen() */, L_0);
		return L_1;
	}
}
// System.Void Cardboard::Recenter()
extern TypeInfo* Cardboard_t24_il2cpp_TypeInfo_var;
extern "C" void Cardboard_Recenter_m93 (Cardboard_t24 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Cardboard_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		BaseVRDevice_t28 * L_0 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___device_11;
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(20 /* System.Void BaseVRDevice::Recenter() */, L_0);
		return;
	}
}
// System.Void Cardboard::SetTouchCoordinates(System.Int32,System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern TypeInfo* Cardboard_t24_il2cpp_TypeInfo_var;
extern "C" void Cardboard_SetTouchCoordinates_m94 (Cardboard_t24 * __this, int32_t ___x, int32_t ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Cardboard_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		BaseVRDevice_t28 * L_0 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___device_11;
		int32_t L_1 = ___x;
		int32_t L_2 = ___y;
		NullCheck(L_0);
		VirtActionInvoker2< int32_t, int32_t >::Invoke(22 /* System.Void BaseVRDevice::SetTouchCoordinates(System.Int32,System.Int32) */, L_0, L_1, L_2);
		return;
	}
}
// System.Void Cardboard::ShowSettingsDialog()
extern TypeInfo* Cardboard_t24_il2cpp_TypeInfo_var;
extern "C" void Cardboard_ShowSettingsDialog_m95 (Cardboard_t24 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Cardboard_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		BaseVRDevice_t28 * L_0 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___device_11;
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(17 /* System.Void BaseVRDevice::ShowSettingsDialog() */, L_0);
		return;
	}
}
// System.Void Cardboard::OnEnable()
extern TypeInfo* Cardboard_t24_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral17;
extern "C" void Cardboard_OnEnable_m96 (Cardboard_t24 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Cardboard_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		_stringLiteral17 = il2cpp_codegen_string_literal_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		BaseVRDevice_t28 * L_0 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___device_11;
		NullCheck(L_0);
		VirtActionInvoker1< bool >::Invoke(23 /* System.Void BaseVRDevice::OnPause(System.Boolean) */, L_0, 0);
		MonoBehaviour_StartCoroutine_m386(__this, _stringLiteral17, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Cardboard::OnDisable()
extern TypeInfo* Cardboard_t24_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral17;
extern "C" void Cardboard_OnDisable_m97 (Cardboard_t24 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Cardboard_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		_stringLiteral17 = il2cpp_codegen_string_literal_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		MonoBehaviour_StopCoroutine_m387(__this, _stringLiteral17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		BaseVRDevice_t28 * L_0 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___device_11;
		NullCheck(L_0);
		VirtActionInvoker1< bool >::Invoke(23 /* System.Void BaseVRDevice::OnPause(System.Boolean) */, L_0, 1);
		return;
	}
}
// System.Void Cardboard::OnApplicationPause(System.Boolean)
extern TypeInfo* Cardboard_t24_il2cpp_TypeInfo_var;
extern "C" void Cardboard_OnApplicationPause_m98 (Cardboard_t24 * __this, bool ___pause, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Cardboard_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		BaseVRDevice_t28 * L_0 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___device_11;
		bool L_1 = ___pause;
		NullCheck(L_0);
		VirtActionInvoker1< bool >::Invoke(23 /* System.Void BaseVRDevice::OnPause(System.Boolean) */, L_0, L_1);
		return;
	}
}
// System.Void Cardboard::OnApplicationFocus(System.Boolean)
extern TypeInfo* Cardboard_t24_il2cpp_TypeInfo_var;
extern "C" void Cardboard_OnApplicationFocus_m99 (Cardboard_t24 * __this, bool ___focus, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Cardboard_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		BaseVRDevice_t28 * L_0 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___device_11;
		bool L_1 = ___focus;
		NullCheck(L_0);
		VirtActionInvoker1< bool >::Invoke(24 /* System.Void BaseVRDevice::OnFocus(System.Boolean) */, L_0, L_1);
		return;
	}
}
// System.Void Cardboard::OnLevelWasLoaded(System.Int32)
extern TypeInfo* Cardboard_t24_il2cpp_TypeInfo_var;
extern "C" void Cardboard_OnLevelWasLoaded_m100 (Cardboard_t24 * __this, int32_t ___level, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Cardboard_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		BaseVRDevice_t28 * L_0 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___device_11;
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(25 /* System.Void BaseVRDevice::Reset() */, L_0);
		return;
	}
}
// System.Void Cardboard::OnDestroy()
extern TypeInfo* Cardboard_t24_il2cpp_TypeInfo_var;
extern "C" void Cardboard_OnDestroy_m101 (Cardboard_t24 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Cardboard_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		Cardboard_set_VRModeEnabled_m56(__this, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		BaseVRDevice_t28 * L_0 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___device_11;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		BaseVRDevice_t28 * L_1 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___device_11;
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(27 /* System.Void BaseVRDevice::Destroy() */, L_1);
	}

IL_001b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		Cardboard_t24 * L_2 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___sdk_2;
		bool L_3 = Object_op_Equality_m305(NULL /*static, unused*/, L_2, __this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___sdk_2 = (Cardboard_t24 *)NULL;
	}

IL_0031:
	{
		return;
	}
}
// System.Void Cardboard::OnApplicationQuit()
extern TypeInfo* Cardboard_t24_il2cpp_TypeInfo_var;
extern "C" void Cardboard_OnApplicationQuit_m102 (Cardboard_t24 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Cardboard_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		BaseVRDevice_t28 * L_0 = ((Cardboard_t24_StaticFields*)Cardboard_t24_il2cpp_TypeInfo_var->static_fields)->___device_11;
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(26 /* System.Void BaseVRDevice::OnApplicationQuit() */, L_0);
		return;
	}
}
// System.Boolean Cardboard::get_nativeDistortionCorrection()
extern "C" bool Cardboard_get_nativeDistortionCorrection_m103 (Cardboard_t24 * __this, const MethodInfo* method)
{
	{
		bool L_0 = Cardboard_get_DistortionCorrection_m53(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Cardboard::set_nativeDistortionCorrection(System.Boolean)
extern "C" void Cardboard_set_nativeDistortionCorrection_m104 (Cardboard_t24 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		Cardboard_set_DistortionCorrection_m54(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Cardboard::get_InCardboard()
extern "C" bool Cardboard_get_InCardboard_m105 (Cardboard_t24 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean Cardboard::get_CardboardTriggered()
extern "C" bool Cardboard_get_CardboardTriggered_m106 (Cardboard_t24 * __this, const MethodInfo* method)
{
	{
		bool L_0 = Cardboard_get_Triggered_m84(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Matrix4x4 Cardboard::get_HeadView()
// Pose3D
#include "AssemblyU2DCSharp_Pose3DMethodDeclarations.h"
extern "C" Matrix4x4_t43  Cardboard_get_HeadView_m107 (Cardboard_t24 * __this, const MethodInfo* method)
{
	{
		Pose3D_t49 * L_0 = Cardboard_get_HeadPose_m77(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Matrix4x4_t43  L_1 = Pose3D_get_Matrix_m165(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Quaternion Cardboard::get_HeadRotation()
extern "C" Quaternion_t50  Cardboard_get_HeadRotation_m108 (Cardboard_t24 * __this, const MethodInfo* method)
{
	{
		Pose3D_t49 * L_0 = Cardboard_get_HeadPose_m77(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Quaternion_t50  L_1 = Pose3D_get_Orientation_m163(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Vector3 Cardboard::get_HeadPosition()
extern "C" Vector3_t3  Cardboard_get_HeadPosition_m109 (Cardboard_t24 * __this, const MethodInfo* method)
{
	{
		Pose3D_t49 * L_0 = Cardboard_get_HeadPose_m77(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t3  L_1 = Pose3D_get_Position_m161(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Matrix4x4 Cardboard::EyeView(Cardboard/Eye)
extern "C" Matrix4x4_t43  Cardboard_EyeView_m110 (Cardboard_t24 * __this, int32_t ___eye, const MethodInfo* method)
{
	{
		int32_t L_0 = ___eye;
		Pose3D_t49 * L_1 = Cardboard_EyePose_m78(__this, L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Matrix4x4_t43  L_2 = Pose3D_get_Matrix_m165(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Vector3 Cardboard::EyeOffset(Cardboard/Eye)
extern "C" Vector3_t3  Cardboard_EyeOffset_m111 (Cardboard_t24 * __this, int32_t ___eye, const MethodInfo* method)
{
	{
		int32_t L_0 = ___eye;
		Pose3D_t49 * L_1 = Cardboard_EyePose_m78(__this, L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t3  L_2 = Pose3D_get_Position_m161(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Matrix4x4 Cardboard::UndistortedProjection(Cardboard/Eye)
extern "C" Matrix4x4_t43  Cardboard_UndistortedProjection_m112 (Cardboard_t24 * __this, int32_t ___eye, const MethodInfo* method)
{
	{
		int32_t L_0 = ___eye;
		Matrix4x4_t43  L_1 = Cardboard_Projection_m79(__this, L_0, 1, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Rect Cardboard::EyeRect(Cardboard/Eye)
extern "C" Rect_t18  Cardboard_EyeRect_m113 (Cardboard_t24 * __this, int32_t ___eye, const MethodInfo* method)
{
	{
		int32_t L_0 = ___eye;
		Rect_t18  L_1 = Cardboard_Viewport_m80(__this, L_0, 0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Single Cardboard::get_MinimumComfortDistance()
extern "C" float Cardboard_get_MinimumComfortDistance_m114 (Cardboard_t24 * __this, const MethodInfo* method)
{
	Vector2_t15  V_0 = {0};
	{
		Vector2_t15  L_0 = Cardboard_get_ComfortableViewingRange_m81(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = ((&V_0)->___x_1);
		return L_1;
	}
}
// System.Single Cardboard::get_MaximumComfortDistance()
extern "C" float Cardboard_get_MaximumComfortDistance_m115 (Cardboard_t24 * __this, const MethodInfo* method)
{
	Vector2_t15  V_0 = {0};
	{
		Vector2_t15  L_0 = Cardboard_get_ComfortableViewingRange_m81(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = ((&V_0)->___y_2);
		return L_1;
	}
}
// CardboardEye
#include "AssemblyU2DCSharp_CardboardEye.h"
// CardboardEye
#include "AssemblyU2DCSharp_CardboardEyeMethodDeclarations.h"
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMask.h"
// RadialUndistortionEffect
#include "AssemblyU2DCSharp_RadialUndistortionEffect.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// CardboardProfile/Device
#include "AssemblyU2DCSharp_CardboardProfile_Device.h"
// CardboardProfile/Distortion
#include "AssemblyU2DCSharp_CardboardProfile_Distortion.h"
// CardboardProfile/Screen
#include "AssemblyU2DCSharp_CardboardProfile_Screen.h"
// CardboardProfile/Lenses
#include "AssemblyU2DCSharp_CardboardProfile_Lenses.h"
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMaskMethodDeclarations.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4MethodDeclarations.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
// UnityEngine.Graphics
#include "UnityEngine_UnityEngine_GraphicsMethodDeclarations.h"
// CardboardProfile
#include "AssemblyU2DCSharp_CardboardProfileMethodDeclarations.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
struct StereoController_t31;
struct Object_t;
// Declaration !!0 UnityEngine.Component::GetComponentInParent<System.Object>()
// !!0 UnityEngine.Component::GetComponentInParent<System.Object>()
extern "C" Object_t * Component_GetComponentInParent_TisObject_t_m449_gshared (Component_t70 * __this, const MethodInfo* method);
#define Component_GetComponentInParent_TisObject_t_m449(__this, method) (( Object_t * (*) (Component_t70 *, const MethodInfo*))Component_GetComponentInParent_TisObject_t_m449_gshared)(__this, method)
// Declaration !!0 UnityEngine.Component::GetComponentInParent<StereoController>()
// !!0 UnityEngine.Component::GetComponentInParent<StereoController>()
#define Component_GetComponentInParent_TisStereoController_t31_m395(__this, method) (( StereoController_t31 * (*) (Component_t70 *, const MethodInfo*))Component_GetComponentInParent_TisObject_t_m449_gshared)(__this, method)
struct CardboardHead_t5;
// Declaration !!0 UnityEngine.Component::GetComponentInParent<CardboardHead>()
// !!0 UnityEngine.Component::GetComponentInParent<CardboardHead>()
#define Component_GetComponentInParent_TisCardboardHead_t5_m396(__this, method) (( CardboardHead_t5 * (*) (Component_t70 *, const MethodInfo*))Component_GetComponentInParent_TisObject_t_m449_gshared)(__this, method)
struct Camera_t32;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
#define Component_GetComponent_TisCamera_t32_m397(__this, method) (( Camera_t32 * (*) (Component_t70 *, const MethodInfo*))Component_GetComponent_TisObject_t_m295_gshared)(__this, method)
struct RadialUndistortionEffect_t52;
// Declaration !!0 UnityEngine.Component::GetComponent<RadialUndistortionEffect>()
// !!0 UnityEngine.Component::GetComponent<RadialUndistortionEffect>()
#define Component_GetComponent_TisRadialUndistortionEffect_t52_m398(__this, method) (( RadialUndistortionEffect_t52 * (*) (Component_t70 *, const MethodInfo*))Component_GetComponent_TisObject_t_m295_gshared)(__this, method)
struct RadialUndistortionEffect_t52;
// Declaration !!0 UnityEngine.GameObject::AddComponent<RadialUndistortionEffect>()
// !!0 UnityEngine.GameObject::AddComponent<RadialUndistortionEffect>()
#define GameObject_AddComponent_TisRadialUndistortionEffect_t52_m399(__this, method) (( RadialUndistortionEffect_t52 * (*) (GameObject_t47 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m389_gshared)(__this, method)
// System.Void CardboardEye::.ctor()
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMaskMethodDeclarations.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern "C" void CardboardEye__ctor_m116 (CardboardEye_t29 * __this, const MethodInfo* method)
{
	{
		LayerMask_t30  L_0 = LayerMask_op_Implicit_m391(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		__this->___toggleCullingMask_3 = L_0;
		MonoBehaviour__ctor_m282(__this, /*hidden argument*/NULL);
		return;
	}
}
// StereoController CardboardEye::get_Controller()
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
extern const MethodInfo* Component_GetComponentInParent_TisStereoController_t31_m395_MethodInfo_var;
extern "C" StereoController_t31 * CardboardEye_get_Controller_m117 (CardboardEye_t29 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponentInParent_TisStereoController_t31_m395_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483663);
		s_Il2CppMethodIntialized = true;
	}
	{
		Transform_t33 * L_0 = Component_get_transform_m283(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_t33 * L_1 = Transform_get_parent_m392(L_0, /*hidden argument*/NULL);
		bool L_2 = Object_op_Equality_m305(NULL /*static, unused*/, L_1, (Object_t75 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		return (StereoController_t31 *)NULL;
	}

IL_0018:
	{
		bool L_3 = Application_get_isEditor_m393(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		bool L_4 = Application_get_isPlaying_m394(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003d;
		}
	}

IL_002c:
	{
		StereoController_t31 * L_5 = (__this->___controller_4);
		bool L_6 = Object_op_Equality_m305(NULL /*static, unused*/, L_5, (Object_t75 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_004e;
		}
	}

IL_003d:
	{
		Transform_t33 * L_7 = Component_get_transform_m283(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_t33 * L_8 = Transform_get_parent_m392(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		StereoController_t31 * L_9 = Component_GetComponentInParent_TisStereoController_t31_m395(L_8, /*hidden argument*/Component_GetComponentInParent_TisStereoController_t31_m395_MethodInfo_var);
		return L_9;
	}

IL_004e:
	{
		StereoController_t31 * L_10 = (__this->___controller_4);
		return L_10;
	}
}
// CardboardHead CardboardEye::get_Head()
extern const MethodInfo* Component_GetComponentInParent_TisCardboardHead_t5_m396_MethodInfo_var;
extern "C" CardboardHead_t5 * CardboardEye_get_Head_m118 (CardboardEye_t29 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponentInParent_TisCardboardHead_t5_m396_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483664);
		s_Il2CppMethodIntialized = true;
	}
	{
		CardboardHead_t5 * L_0 = Component_GetComponentInParent_TisCardboardHead_t5_m396(__this, /*hidden argument*/Component_GetComponentInParent_TisCardboardHead_t5_m396_MethodInfo_var);
		return L_0;
	}
}
// System.Void CardboardEye::Awake()
extern const MethodInfo* Component_GetComponent_TisCamera_t32_m397_MethodInfo_var;
extern "C" void CardboardEye_Awake_m119 (CardboardEye_t29 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisCamera_t32_m397_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483665);
		s_Il2CppMethodIntialized = true;
	}
	{
		Camera_t32 * L_0 = Component_GetComponent_TisCamera_t32_m397(__this, /*hidden argument*/Component_GetComponent_TisCamera_t32_m397_MethodInfo_var);
		__this->___camera_5 = L_0;
		return;
	}
}
// System.Void CardboardEye::Start()
// CardboardEye
#include "AssemblyU2DCSharp_CardboardEyeMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"
// Cardboard
#include "AssemblyU2DCSharp_CardboardMethodDeclarations.h"
// UnityEngine.SystemInfo
#include "UnityEngine_UnityEngine_SystemInfoMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
extern TypeInfo* Cardboard_t24_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisRadialUndistortionEffect_t52_m398_MethodInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisRadialUndistortionEffect_t52_m399_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral18;
extern "C" void CardboardEye_Start_m120 (CardboardEye_t29 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Cardboard_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		Component_GetComponent_TisRadialUndistortionEffect_t52_m398_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483666);
		GameObject_AddComponent_TisRadialUndistortionEffect_t52_m399_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483667);
		_stringLiteral18 = il2cpp_codegen_string_literal_from_index(18);
		s_Il2CppMethodIntialized = true;
	}
	StereoController_t31 * V_0 = {0};
	RadialUndistortionEffect_t52 * V_1 = {0};
	{
		StereoController_t31 * L_0 = CardboardEye_get_Controller_m117(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		StereoController_t31 * L_1 = V_0;
		bool L_2 = Object_op_Equality_m305(NULL /*static, unused*/, L_1, (Object_t75 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		Debug_LogError_m365(NULL /*static, unused*/, _stringLiteral18, /*hidden argument*/NULL);
		Behaviour_set_enabled_m311(__this, 0, /*hidden argument*/NULL);
	}

IL_0024:
	{
		StereoController_t31 * L_3 = V_0;
		__this->___controller_4 = L_3;
		bool L_4 = Application_get_isPlaying_m394(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_006d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		Cardboard_t24 * L_5 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		bool L_6 = Cardboard_get_NativeDistortionCorrectionSupported_m69(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_006d;
		}
	}
	{
		bool L_7 = SystemInfo_get_supportsRenderTextures_m309(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_006d;
		}
	}
	{
		RadialUndistortionEffect_t52 * L_8 = Component_GetComponent_TisRadialUndistortionEffect_t52_m398(__this, /*hidden argument*/Component_GetComponent_TisRadialUndistortionEffect_t52_m398_MethodInfo_var);
		V_1 = L_8;
		RadialUndistortionEffect_t52 * L_9 = V_1;
		bool L_10 = Object_op_Equality_m305(NULL /*static, unused*/, L_9, (Object_t75 *)NULL, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		GameObject_t47 * L_11 = Component_get_gameObject_m307(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		RadialUndistortionEffect_t52 * L_12 = GameObject_AddComponent_TisRadialUndistortionEffect_t52_m399(L_11, /*hidden argument*/GameObject_AddComponent_TisRadialUndistortionEffect_t52_m399_MethodInfo_var);
		V_1 = L_12;
	}

IL_006d:
	{
		return;
	}
}
// System.Void CardboardEye::FixProjection(UnityEngine.Matrix4x4&,System.Single,System.Single,System.Single)
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4MethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
extern TypeInfo* Mathf_t69_il2cpp_TypeInfo_var;
extern "C" void CardboardEye_FixProjection_m121 (CardboardEye_t29 * __this, Matrix4x4_t43 * ___proj, float ___near, float ___far, float ___ipdScale, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t69_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	Vector2_t15  V_1 = {0};
	Rect_t18  V_2 = {0};
	Rect_t18  V_3 = {0};
	Matrix4x4_t43 * V_4 = {0};
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	float V_7 = 0.0f;
	Matrix4x4_t43 * V_8 = {0};
	Matrix4x4_t43 * V_9 = {0};
	{
		Camera_t32 * L_0 = (__this->___camera_5);
		NullCheck(L_0);
		Rect_t18  L_1 = Camera_get_rect_m400(L_0, /*hidden argument*/NULL);
		V_2 = L_1;
		float L_2 = Rect_get_height_m336((&V_2), /*hidden argument*/NULL);
		Camera_t32 * L_3 = (__this->___camera_5);
		NullCheck(L_3);
		Rect_t18  L_4 = Camera_get_rect_m400(L_3, /*hidden argument*/NULL);
		V_3 = L_4;
		float L_5 = Rect_get_width_m334((&V_3), /*hidden argument*/NULL);
		V_0 = ((float)((float)((float)((float)L_2/(float)L_5))/(float)(2.0f)));
		Matrix4x4_t43 * L_6 = ___proj;
		Matrix4x4_t43 * L_7 = L_6;
		V_4 = (Matrix4x4_t43 *)L_7;
		int32_t L_8 = 0;
		V_5 = L_8;
		int32_t L_9 = 0;
		V_6 = L_9;
		Matrix4x4_t43 * L_10 = V_4;
		int32_t L_11 = V_5;
		int32_t L_12 = V_6;
		float L_13 = Matrix4x4_get_Item_m401(L_10, L_11, L_12, /*hidden argument*/NULL);
		V_7 = L_13;
		float L_14 = V_7;
		float L_15 = V_0;
		Matrix4x4_set_Item_m402(L_7, L_8, L_9, ((float)((float)L_14*(float)L_15)), /*hidden argument*/NULL);
		Transform_t33 * L_16 = Component_get_transform_m283(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		Vector3_t3  L_17 = Transform_get_localPosition_m284(L_16, /*hidden argument*/NULL);
		Vector2_t15  L_18 = Vector2_op_Implicit_m403(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		V_1 = L_18;
		Vector2_t15  L_19 = Vector2_get_normalized_m404((&V_1), /*hidden argument*/NULL);
		float L_20 = ___ipdScale;
		Vector2_t15  L_21 = Vector2_op_Multiply_m405(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/NULL);
		V_1 = L_21;
		Matrix4x4_t43 * L_22 = ___proj;
		Matrix4x4_t43 * L_23 = L_22;
		V_8 = (Matrix4x4_t43 *)L_23;
		int32_t L_24 = 0;
		V_6 = L_24;
		int32_t L_25 = 2;
		V_5 = L_25;
		Matrix4x4_t43 * L_26 = V_8;
		int32_t L_27 = V_6;
		int32_t L_28 = V_5;
		float L_29 = Matrix4x4_get_Item_m401(L_26, L_27, L_28, /*hidden argument*/NULL);
		V_7 = L_29;
		float L_30 = V_7;
		float L_31 = ((&V_1)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t69_il2cpp_TypeInfo_var);
		float L_32 = fabsf(L_31);
		Matrix4x4_set_Item_m402(L_23, L_24, L_25, ((float)((float)L_30*(float)L_32)), /*hidden argument*/NULL);
		Matrix4x4_t43 * L_33 = ___proj;
		Matrix4x4_t43 * L_34 = L_33;
		V_9 = (Matrix4x4_t43 *)L_34;
		int32_t L_35 = 1;
		V_5 = L_35;
		int32_t L_36 = 2;
		V_6 = L_36;
		Matrix4x4_t43 * L_37 = V_9;
		int32_t L_38 = V_5;
		int32_t L_39 = V_6;
		float L_40 = Matrix4x4_get_Item_m401(L_37, L_38, L_39, /*hidden argument*/NULL);
		V_7 = L_40;
		float L_41 = V_7;
		float L_42 = ((&V_1)->___y_2);
		float L_43 = fabsf(L_42);
		Matrix4x4_set_Item_m402(L_34, L_35, L_36, ((float)((float)L_41*(float)L_43)), /*hidden argument*/NULL);
		Matrix4x4_t43 * L_44 = ___proj;
		float L_45 = ___near;
		float L_46 = ___far;
		float L_47 = ___near;
		float L_48 = ___far;
		Matrix4x4_set_Item_m402(L_44, 2, 2, ((float)((float)((float)((float)L_45+(float)L_46))/(float)((float)((float)L_47-(float)L_48)))), /*hidden argument*/NULL);
		Matrix4x4_t43 * L_49 = ___proj;
		float L_50 = ___near;
		float L_51 = ___far;
		float L_52 = ___near;
		float L_53 = ___far;
		Matrix4x4_set_Item_m402(L_49, 2, 3, ((float)((float)((float)((float)((float)((float)(2.0f)*(float)L_50))*(float)L_51))/(float)((float)((float)L_52-(float)L_53)))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void CardboardEye::Setup()
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// StereoController
#include "AssemblyU2DCSharp_StereoControllerMethodDeclarations.h"
// Pose3D
#include "AssemblyU2DCSharp_Pose3DMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
// UnityEngine.Shader
#include "UnityEngine_UnityEngine_ShaderMethodDeclarations.h"
// UnityEngine.Screen
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"
extern TypeInfo* Cardboard_t24_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t69_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisCamera_t32_m397_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral19;
extern Il2CppCodeGenString* _stringLiteral20;
extern Il2CppCodeGenString* _stringLiteral21;
extern Il2CppCodeGenString* _stringLiteral22;
extern "C" void CardboardEye_Setup_m122 (CardboardEye_t29 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Cardboard_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		Mathf_t69_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		Component_GetComponent_TisCamera_t32_m397_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483665);
		_stringLiteral19 = il2cpp_codegen_string_literal_from_index(19);
		_stringLiteral20 = il2cpp_codegen_string_literal_from_index(20);
		_stringLiteral21 = il2cpp_codegen_string_literal_from_index(21);
		_stringLiteral22 = il2cpp_codegen_string_literal_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	Camera_t32 * V_0 = {0};
	Matrix4x4_t43  V_1 = {0};
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	Matrix4x4_t43  V_9 = {0};
	Vector4_t84  V_10 = {0};
	Vector4_t84  V_11 = {0};
	CardboardProfile_t41 * V_12 = {0};
	Rect_t18  V_13 = {0};
	Rect_t18  V_14 = {0};
	float V_15 = 0.0f;
	float V_16 = 0.0f;
	float V_17 = 0.0f;
	Matrix4x4_t43  V_18 = {0};
	Matrix4x4_t43 * V_19 = {0};
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	float V_22 = 0.0f;
	Matrix4x4_t43 * V_23 = {0};
	Vector3_t3  V_24 = {0};
	{
		StereoController_t31 * L_0 = (__this->___controller_4);
		bool L_1 = Object_op_Equality_m305(NULL /*static, unused*/, L_0, (Object_t75 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		StereoController_t31 * L_2 = (__this->___controller_4);
		NullCheck(L_2);
		Camera_t32 * L_3 = Component_GetComponent_TisCamera_t32_m397(L_2, /*hidden argument*/Component_GetComponent_TisCamera_t32_m397_MethodInfo_var);
		V_0 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		Cardboard_t24 * L_4 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_5 = (__this->___eye_2);
		NullCheck(L_4);
		Matrix4x4_t43  L_6 = Cardboard_Projection_m79(L_4, L_5, 0, /*hidden argument*/NULL);
		V_1 = L_6;
		StereoController_t31 * L_7 = (__this->___controller_4);
		float L_8 = Matrix4x4_get_Item_m401((&V_1), 0, 2, /*hidden argument*/NULL);
		float L_9 = Matrix4x4_get_Item_m401((&V_1), 1, 2, /*hidden argument*/NULL);
		CardboardEye_CopyCameraAndMakeSideBySide_m125(__this, L_7, L_8, L_9, /*hidden argument*/NULL);
		StereoController_t31 * L_10 = (__this->___controller_4);
		NullCheck(L_10);
		float L_11 = (L_10->___matchByZoom_5);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t69_il2cpp_TypeInfo_var);
		float L_12 = Mathf_Clamp01_m363(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		StereoController_t31 * L_13 = (__this->___controller_4);
		NullCheck(L_13);
		float L_14 = (L_13->___matchMonoFOV_4);
		float L_15 = Mathf_Clamp01_m363(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		V_2 = ((float)((float)L_12*(float)L_15));
		Camera_t32 * L_16 = V_0;
		NullCheck(L_16);
		Matrix4x4_t43  L_17 = Camera_get_projectionMatrix_m406(L_16, /*hidden argument*/NULL);
		V_18 = L_17;
		float L_18 = Matrix4x4_get_Item_m401((&V_18), 1, 1, /*hidden argument*/NULL);
		V_3 = L_18;
		float L_19 = Matrix4x4_get_Item_m401((&V_1), 1, 1, /*hidden argument*/NULL);
		float L_20 = V_3;
		float L_21 = V_2;
		float L_22 = Mathf_Lerp_m407(NULL /*static, unused*/, ((float)((float)(1.0f)/(float)L_19)), ((float)((float)(1.0f)/(float)L_20)), L_21, /*hidden argument*/NULL);
		float L_23 = Matrix4x4_get_Item_m401((&V_1), 1, 1, /*hidden argument*/NULL);
		V_4 = ((float)((float)((float)((float)(1.0f)/(float)L_22))/(float)L_23));
		Matrix4x4_t43 * L_24 = (&V_1);
		V_19 = (Matrix4x4_t43 *)L_24;
		int32_t L_25 = 0;
		V_20 = L_25;
		int32_t L_26 = 0;
		V_21 = L_26;
		Matrix4x4_t43 * L_27 = V_19;
		int32_t L_28 = V_20;
		int32_t L_29 = V_21;
		float L_30 = Matrix4x4_get_Item_m401(L_27, L_28, L_29, /*hidden argument*/NULL);
		V_22 = L_30;
		float L_31 = V_22;
		float L_32 = V_4;
		Matrix4x4_set_Item_m402(L_24, L_25, L_26, ((float)((float)L_31*(float)L_32)), /*hidden argument*/NULL);
		Matrix4x4_t43 * L_33 = (&V_1);
		V_23 = (Matrix4x4_t43 *)L_33;
		int32_t L_34 = 1;
		V_21 = L_34;
		int32_t L_35 = 1;
		V_20 = L_35;
		Matrix4x4_t43 * L_36 = V_23;
		int32_t L_37 = V_21;
		int32_t L_38 = V_20;
		float L_39 = Matrix4x4_get_Item_m401(L_36, L_37, L_38, /*hidden argument*/NULL);
		V_22 = L_39;
		float L_40 = V_22;
		float L_41 = V_4;
		Matrix4x4_set_Item_m402(L_33, L_34, L_35, ((float)((float)L_40*(float)L_41)), /*hidden argument*/NULL);
		StereoController_t31 * L_42 = (__this->___controller_4);
		float L_43 = Matrix4x4_get_Item_m401((&V_1), 1, 1, /*hidden argument*/NULL);
		Transform_t33 * L_44 = Component_get_transform_m283(__this, /*hidden argument*/NULL);
		NullCheck(L_44);
		Vector3_t3  L_45 = Transform_get_lossyScale_m408(L_44, /*hidden argument*/NULL);
		V_24 = L_45;
		float L_46 = ((&V_24)->___z_3);
		NullCheck(L_42);
		StereoController_ComputeStereoAdjustment_m192(L_42, L_43, L_46, (&V_5), (&V_6), /*hidden argument*/NULL);
		Transform_t33 * L_47 = Component_get_transform_m283(__this, /*hidden argument*/NULL);
		float L_48 = V_5;
		Cardboard_t24 * L_49 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_50 = (__this->___eye_2);
		NullCheck(L_49);
		Pose3D_t49 * L_51 = Cardboard_EyePose_m78(L_49, L_50, /*hidden argument*/NULL);
		NullCheck(L_51);
		Vector3_t3  L_52 = Pose3D_get_Position_m161(L_51, /*hidden argument*/NULL);
		Vector3_t3  L_53 = Vector3_op_Multiply_m409(NULL /*static, unused*/, L_48, L_52, /*hidden argument*/NULL);
		float L_54 = V_6;
		Vector3_t3  L_55 = Vector3_get_forward_m410(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3  L_56 = Vector3_op_Multiply_m409(NULL /*static, unused*/, L_54, L_55, /*hidden argument*/NULL);
		Vector3_t3  L_57 = Vector3_op_Addition_m411(NULL /*static, unused*/, L_53, L_56, /*hidden argument*/NULL);
		NullCheck(L_47);
		Transform_set_localPosition_m290(L_47, L_57, /*hidden argument*/NULL);
		Camera_t32 * L_58 = V_0;
		NullCheck(L_58);
		float L_59 = Camera_get_nearClipPlane_m412(L_58, /*hidden argument*/NULL);
		V_7 = L_59;
		Camera_t32 * L_60 = V_0;
		NullCheck(L_60);
		float L_61 = Camera_get_farClipPlane_m413(L_60, /*hidden argument*/NULL);
		V_8 = L_61;
		float L_62 = V_7;
		float L_63 = V_8;
		float L_64 = V_5;
		CardboardEye_FixProjection_m121(__this, (&V_1), L_62, L_63, L_64, /*hidden argument*/NULL);
		Camera_t32 * L_65 = (__this->___camera_5);
		Matrix4x4_t43  L_66 = V_1;
		NullCheck(L_65);
		Camera_set_projectionMatrix_m414(L_65, L_66, /*hidden argument*/NULL);
		bool L_67 = Application_get_isEditor_m393(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_67)
		{
			goto IL_01bb;
		}
	}
	{
		Camera_t32 * L_68 = (__this->___camera_5);
		float L_69 = Matrix4x4_get_Item_m401((&V_1), 1, 1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t69_il2cpp_TypeInfo_var);
		float L_70 = atanf(((float)((float)(1.0f)/(float)L_69)));
		NullCheck(L_68);
		Camera_set_fieldOfView_m415(L_68, ((float)((float)((float)((float)(2.0f)*(float)L_70))*(float)(57.29578f))), /*hidden argument*/NULL);
	}

IL_01bb:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		Cardboard_t24 * L_71 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_71);
		bool L_72 = Cardboard_get_UseDistortionEffect_m75(L_71, /*hidden argument*/NULL);
		if (!L_72)
		{
			goto IL_02f9;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		Cardboard_t24 * L_73 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_74 = (__this->___eye_2);
		NullCheck(L_73);
		Matrix4x4_t43  L_75 = Cardboard_Projection_m79(L_73, L_74, 1, /*hidden argument*/NULL);
		V_9 = L_75;
		float L_76 = V_7;
		float L_77 = V_8;
		float L_78 = V_5;
		CardboardEye_FixProjection_m121(__this, (&V_9), L_76, L_77, L_78, /*hidden argument*/NULL);
		float L_79 = Matrix4x4_get_Item_m401((&V_1), 0, 0, /*hidden argument*/NULL);
		float L_80 = V_4;
		float L_81 = Matrix4x4_get_Item_m401((&V_1), 1, 1, /*hidden argument*/NULL);
		float L_82 = V_4;
		float L_83 = Matrix4x4_get_Item_m401((&V_1), 0, 2, /*hidden argument*/NULL);
		float L_84 = Matrix4x4_get_Item_m401((&V_1), 1, 2, /*hidden argument*/NULL);
		Vector4_t84  L_85 = {0};
		Vector4__ctor_m416(&L_85, ((float)((float)L_79/(float)L_80)), ((float)((float)L_81/(float)L_82)), ((float)((float)L_83-(float)(1.0f))), ((float)((float)L_84-(float)(1.0f))), /*hidden argument*/NULL);
		Vector4_t84  L_86 = Vector4_op_Division_m417(NULL /*static, unused*/, L_85, (2.0f), /*hidden argument*/NULL);
		V_10 = L_86;
		float L_87 = Matrix4x4_get_Item_m401((&V_9), 0, 0, /*hidden argument*/NULL);
		float L_88 = Matrix4x4_get_Item_m401((&V_9), 1, 1, /*hidden argument*/NULL);
		float L_89 = Matrix4x4_get_Item_m401((&V_9), 0, 2, /*hidden argument*/NULL);
		float L_90 = Matrix4x4_get_Item_m401((&V_9), 1, 2, /*hidden argument*/NULL);
		Vector4_t84  L_91 = {0};
		Vector4__ctor_m416(&L_91, L_87, L_88, ((float)((float)L_89-(float)(1.0f))), ((float)((float)L_90-(float)(1.0f))), /*hidden argument*/NULL);
		Vector4_t84  L_92 = Vector4_op_Division_m417(NULL /*static, unused*/, L_91, (2.0f), /*hidden argument*/NULL);
		V_11 = L_92;
		Vector4_t84  L_93 = V_10;
		Shader_SetGlobalVector_m418(NULL /*static, unused*/, _stringLiteral19, L_93, /*hidden argument*/NULL);
		Vector4_t84  L_94 = V_11;
		Shader_SetGlobalVector_m418(NULL /*static, unused*/, _stringLiteral20, L_94, /*hidden argument*/NULL);
		Cardboard_t24 * L_95 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_95);
		CardboardProfile_t41 * L_96 = Cardboard_get_Profile_m76(L_95, /*hidden argument*/NULL);
		V_12 = L_96;
		CardboardProfile_t41 * L_97 = V_12;
		NullCheck(L_97);
		Device_t38 * L_98 = &(L_97->___device_1);
		Distortion_t37 * L_99 = &(L_98->___inverse_3);
		float L_100 = (L_99->___k1_0);
		CardboardProfile_t41 * L_101 = V_12;
		NullCheck(L_101);
		Device_t38 * L_102 = &(L_101->___device_1);
		Distortion_t37 * L_103 = &(L_102->___inverse_3);
		float L_104 = (L_103->___k2_1);
		Vector4_t84  L_105 = {0};
		Vector4__ctor_m419(&L_105, L_100, L_104, /*hidden argument*/NULL);
		Shader_SetGlobalVector_m418(NULL /*static, unused*/, _stringLiteral21, L_105, /*hidden argument*/NULL);
		CardboardProfile_t41 * L_106 = V_12;
		NullCheck(L_106);
		Device_t38 * L_107 = &(L_106->___device_1);
		Distortion_t37 * L_108 = &(L_107->___distortion_2);
		float L_109 = (L_108->___k1_0);
		CardboardProfile_t41 * L_110 = V_12;
		NullCheck(L_110);
		Device_t38 * L_111 = &(L_110->___device_1);
		Distortion_t37 * L_112 = &(L_111->___distortion_2);
		float L_113 = (L_112->___k2_1);
		Vector4_t84  L_114 = {0};
		Vector4__ctor_m419(&L_114, L_109, L_113, /*hidden argument*/NULL);
		Shader_SetGlobalVector_m418(NULL /*static, unused*/, _stringLiteral22, L_114, /*hidden argument*/NULL);
	}

IL_02f9:
	{
		StereoController_t31 * L_115 = (__this->___controller_4);
		NullCheck(L_115);
		RenderTexture_t12 * L_116 = StereoController_get_StereoScreen_m187(L_115, /*hidden argument*/NULL);
		bool L_117 = Object_op_Equality_m305(NULL /*static, unused*/, L_116, (Object_t75 *)NULL, /*hidden argument*/NULL);
		if (!L_117)
		{
			goto IL_0493;
		}
	}
	{
		Camera_t32 * L_118 = (__this->___camera_5);
		NullCheck(L_118);
		Rect_t18  L_119 = Camera_get_rect_m400(L_118, /*hidden argument*/NULL);
		V_13 = L_119;
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		Cardboard_t24 * L_120 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_120);
		bool L_121 = Cardboard_get_DistortionCorrection_m53(L_120, /*hidden argument*/NULL);
		if (!L_121)
		{
			goto IL_033a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		Cardboard_t24 * L_122 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_122);
		bool L_123 = Cardboard_get_UseDistortionEffect_m75(L_122, /*hidden argument*/NULL);
		if (!L_123)
		{
			goto IL_03de;
		}
	}

IL_033a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		Cardboard_t24 * L_124 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_125 = (__this->___eye_2);
		NullCheck(L_124);
		Rect_t18  L_126 = Cardboard_Viewport_m80(L_124, L_125, 0, /*hidden argument*/NULL);
		V_14 = L_126;
		int32_t L_127 = (__this->___eye_2);
		if ((!(((uint32_t)L_127) == ((uint32_t)1))))
		{
			goto IL_036c;
		}
	}
	{
		Rect_t18 * L_128 = (&V_13);
		float L_129 = Rect_get_x_m420(L_128, /*hidden argument*/NULL);
		Rect_set_x_m421(L_128, ((float)((float)L_129-(float)(0.5f))), /*hidden argument*/NULL);
	}

IL_036c:
	{
		Rect_t18 * L_130 = (&V_13);
		float L_131 = Rect_get_width_m334(L_130, /*hidden argument*/NULL);
		float L_132 = Rect_get_width_m334((&V_14), /*hidden argument*/NULL);
		Rect_set_width_m422(L_130, ((float)((float)L_131*(float)((float)((float)(2.0f)*(float)L_132)))), /*hidden argument*/NULL);
		float L_133 = Rect_get_x_m420((&V_14), /*hidden argument*/NULL);
		float L_134 = Rect_get_x_m420((&V_13), /*hidden argument*/NULL);
		float L_135 = Rect_get_width_m334((&V_14), /*hidden argument*/NULL);
		Rect_set_x_m421((&V_13), ((float)((float)L_133+(float)((float)((float)((float)((float)(2.0f)*(float)L_134))*(float)L_135)))), /*hidden argument*/NULL);
		Rect_t18 * L_136 = (&V_13);
		float L_137 = Rect_get_height_m336(L_136, /*hidden argument*/NULL);
		float L_138 = Rect_get_height_m336((&V_14), /*hidden argument*/NULL);
		Rect_set_height_m423(L_136, ((float)((float)L_137*(float)L_138)), /*hidden argument*/NULL);
		float L_139 = Rect_get_y_m424((&V_14), /*hidden argument*/NULL);
		float L_140 = Rect_get_y_m424((&V_13), /*hidden argument*/NULL);
		float L_141 = Rect_get_height_m336((&V_14), /*hidden argument*/NULL);
		Rect_set_y_m425((&V_13), ((float)((float)L_139+(float)((float)((float)L_140*(float)L_141)))), /*hidden argument*/NULL);
	}

IL_03de:
	{
		bool L_142 = Application_get_isEditor_m393(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_142)
		{
			goto IL_0486;
		}
	}
	{
		int32_t L_143 = Screen_get_width_m316(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_144 = Screen_get_height_m318(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_15 = ((float)((float)(((float)L_143))/(float)(((float)L_144))));
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		Cardboard_t24 * L_145 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_145);
		CardboardProfile_t41 * L_146 = Cardboard_get_Profile_m76(L_145, /*hidden argument*/NULL);
		NullCheck(L_146);
		Screen_t34 * L_147 = &(L_146->___screen_0);
		float L_148 = (L_147->___width_0);
		Cardboard_t24 * L_149 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_149);
		CardboardProfile_t41 * L_150 = Cardboard_get_Profile_m76(L_149, /*hidden argument*/NULL);
		NullCheck(L_150);
		Screen_t34 * L_151 = &(L_150->___screen_0);
		float L_152 = (L_151->___height_1);
		V_16 = ((float)((float)L_148/(float)L_152));
		float L_153 = V_16;
		float L_154 = V_15;
		V_17 = ((float)((float)L_153/(float)L_154));
		float L_155 = V_17;
		if ((!(((float)L_155) < ((float)(1.0f)))))
		{
			goto IL_0476;
		}
	}
	{
		Rect_t18 * L_156 = (&V_13);
		float L_157 = Rect_get_width_m334(L_156, /*hidden argument*/NULL);
		float L_158 = V_17;
		Rect_set_width_m422(L_156, ((float)((float)L_157*(float)L_158)), /*hidden argument*/NULL);
		Rect_t18 * L_159 = (&V_13);
		float L_160 = Rect_get_x_m420(L_159, /*hidden argument*/NULL);
		float L_161 = V_17;
		Rect_set_x_m421(L_159, ((float)((float)L_160*(float)L_161)), /*hidden argument*/NULL);
		Rect_t18 * L_162 = (&V_13);
		float L_163 = Rect_get_x_m420(L_162, /*hidden argument*/NULL);
		float L_164 = V_17;
		Rect_set_x_m421(L_162, ((float)((float)L_163+(float)((float)((float)((float)((float)(1.0f)-(float)L_164))/(float)(2.0f))))), /*hidden argument*/NULL);
		goto IL_0486;
	}

IL_0476:
	{
		Rect_t18 * L_165 = (&V_13);
		float L_166 = Rect_get_height_m336(L_165, /*hidden argument*/NULL);
		float L_167 = V_17;
		Rect_set_height_m423(L_165, ((float)((float)L_166/(float)L_167)), /*hidden argument*/NULL);
	}

IL_0486:
	{
		Camera_t32 * L_168 = (__this->___camera_5);
		Rect_t18  L_169 = V_13;
		NullCheck(L_168);
		Camera_set_rect_m426(L_168, L_169, /*hidden argument*/NULL);
	}

IL_0493:
	{
		return;
	}
}
// System.Void CardboardEye::Render()
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTextureMethodDeclarations.h"
// UnityEngine.GL
#include "UnityEngine_UnityEngine_GLMethodDeclarations.h"
// UnityEngine.Graphics
#include "UnityEngine_UnityEngine_GraphicsMethodDeclarations.h"
extern "C" void CardboardEye_Render_m123 (CardboardEye_t29 * __this, const MethodInfo* method)
{
	Rect_t18  V_0 = {0};
	RenderTexture_t12 * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = {0};
	RenderTexture_t12 * V_6 = {0};
	Rect_t18  V_7 = {0};
	int32_t G_B5_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B14_0 = 0;
	{
		CardboardEye_Setup_m122(__this, /*hidden argument*/NULL);
		StereoController_t31 * L_0 = (__this->___controller_4);
		NullCheck(L_0);
		bool L_1 = (L_0->___directRender_2);
		if (!L_1)
		{
			goto IL_003c;
		}
	}
	{
		Camera_t32 * L_2 = (__this->___camera_5);
		StereoController_t31 * L_3 = (__this->___controller_4);
		NullCheck(L_3);
		RenderTexture_t12 * L_4 = StereoController_get_StereoScreen_m187(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		Camera_set_targetTexture_m427(L_2, L_4, /*hidden argument*/NULL);
		Camera_t32 * L_5 = (__this->___camera_5);
		NullCheck(L_5);
		Camera_Render_m428(L_5, /*hidden argument*/NULL);
		goto IL_0181;
	}

IL_003c:
	{
		Camera_t32 * L_6 = (__this->___camera_5);
		NullCheck(L_6);
		Rect_t18  L_7 = Camera_get_pixelRect_m429(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		Camera_t32 * L_8 = (__this->___camera_5);
		Rect_t18  L_9 = {0};
		Rect__ctor_m300(&L_9, (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_8);
		Camera_set_rect_m426(L_8, L_9, /*hidden argument*/NULL);
		StereoController_t31 * L_10 = (__this->___controller_4);
		NullCheck(L_10);
		RenderTexture_t12 * L_11 = StereoController_get_StereoScreen_m187(L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		RenderTexture_t12 * L_12 = V_1;
		bool L_13 = Object_op_Implicit_m314(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_008e;
		}
	}
	{
		RenderTexture_t12 * L_14 = V_1;
		NullCheck(L_14);
		int32_t L_15 = RenderTexture_get_width_m315(L_14, /*hidden argument*/NULL);
		G_B5_0 = L_15;
		goto IL_0093;
	}

IL_008e:
	{
		int32_t L_16 = Screen_get_width_m316(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B5_0 = L_16;
	}

IL_0093:
	{
		V_2 = G_B5_0;
		RenderTexture_t12 * L_17 = V_1;
		bool L_18 = Object_op_Implicit_m314(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RenderTexture_t12 * L_19 = V_1;
		NullCheck(L_19);
		int32_t L_20 = RenderTexture_get_height_m317(L_19, /*hidden argument*/NULL);
		G_B8_0 = L_20;
		goto IL_00af;
	}

IL_00aa:
	{
		int32_t L_21 = Screen_get_height_m318(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B8_0 = L_21;
	}

IL_00af:
	{
		V_3 = G_B8_0;
		RenderTexture_t12 * L_22 = V_1;
		bool L_23 = Object_op_Implicit_m314(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00c6;
		}
	}
	{
		RenderTexture_t12 * L_24 = V_1;
		NullCheck(L_24);
		int32_t L_25 = RenderTexture_get_depth_m430(L_24, /*hidden argument*/NULL);
		G_B11_0 = L_25;
		goto IL_00c8;
	}

IL_00c6:
	{
		G_B11_0 = ((int32_t)16);
	}

IL_00c8:
	{
		V_4 = G_B11_0;
		RenderTexture_t12 * L_26 = V_1;
		bool L_27 = Object_op_Implicit_m314(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00e0;
		}
	}
	{
		RenderTexture_t12 * L_28 = V_1;
		NullCheck(L_28);
		int32_t L_29 = RenderTexture_get_format_m431(L_28, /*hidden argument*/NULL);
		G_B14_0 = ((int32_t)(L_29));
		goto IL_00e1;
	}

IL_00e0:
	{
		G_B14_0 = 4;
	}

IL_00e1:
	{
		V_5 = G_B14_0;
		Camera_t32 * L_30 = (__this->___camera_5);
		float L_31 = Rect_get_width_m334((&V_0), /*hidden argument*/NULL);
		float L_32 = Rect_get_height_m336((&V_0), /*hidden argument*/NULL);
		int32_t L_33 = V_4;
		int32_t L_34 = V_5;
		RenderTexture_t12 * L_35 = RenderTexture_GetTemporary_m432(NULL /*static, unused*/, (((int32_t)L_31)), (((int32_t)L_32)), L_33, L_34, /*hidden argument*/NULL);
		NullCheck(L_30);
		Camera_set_targetTexture_m427(L_30, L_35, /*hidden argument*/NULL);
		Camera_t32 * L_36 = (__this->___camera_5);
		NullCheck(L_36);
		Camera_Render_m428(L_36, /*hidden argument*/NULL);
		RenderTexture_t12 * L_37 = RenderTexture_get_active_m324(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_6 = L_37;
		RenderTexture_t12 * L_38 = V_1;
		RenderTexture_set_active_m325(NULL /*static, unused*/, L_38, /*hidden argument*/NULL);
		GL_PushMatrix_m433(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_39 = V_2;
		int32_t L_40 = V_3;
		GL_LoadPixelMatrix_m434(NULL /*static, unused*/, (0.0f), (((float)L_39)), (((float)L_40)), (0.0f), /*hidden argument*/NULL);
		Rect_t18  L_41 = V_0;
		V_7 = L_41;
		int32_t L_42 = V_3;
		float L_43 = Rect_get_height_m336((&V_0), /*hidden argument*/NULL);
		float L_44 = Rect_get_y_m424((&V_0), /*hidden argument*/NULL);
		Rect_set_y_m425((&V_7), ((float)((float)((float)((float)(((float)L_42))-(float)L_43))-(float)L_44)), /*hidden argument*/NULL);
		Rect_t18  L_45 = V_7;
		Camera_t32 * L_46 = (__this->___camera_5);
		NullCheck(L_46);
		RenderTexture_t12 * L_47 = Camera_get_targetTexture_m435(L_46, /*hidden argument*/NULL);
		Graphics_DrawTexture_m436(NULL /*static, unused*/, L_45, L_47, /*hidden argument*/NULL);
		GL_PopMatrix_m437(NULL /*static, unused*/, /*hidden argument*/NULL);
		RenderTexture_t12 * L_48 = V_6;
		RenderTexture_set_active_m325(NULL /*static, unused*/, L_48, /*hidden argument*/NULL);
		Camera_t32 * L_49 = (__this->___camera_5);
		NullCheck(L_49);
		RenderTexture_t12 * L_50 = Camera_get_targetTexture_m435(L_49, /*hidden argument*/NULL);
		RenderTexture_ReleaseTemporary_m438(NULL /*static, unused*/, L_50, /*hidden argument*/NULL);
	}

IL_0181:
	{
		Camera_t32 * L_51 = (__this->___camera_5);
		NullCheck(L_51);
		Camera_set_targetTexture_m427(L_51, (RenderTexture_t12 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CardboardEye::OnPreCull()
extern "C" void CardboardEye_OnPreCull_m124 (CardboardEye_t29 * __this, const MethodInfo* method)
{
	{
		Camera_t32 * L_0 = (__this->___camera_5);
		NullCheck(L_0);
		bool L_1 = Behaviour_get_enabled_m306(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		CardboardEye_Setup_m122(__this, /*hidden argument*/NULL);
		Camera_t32 * L_2 = (__this->___camera_5);
		StereoController_t31 * L_3 = (__this->___controller_4);
		NullCheck(L_3);
		RenderTexture_t12 * L_4 = StereoController_get_StereoScreen_m187(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		Camera_set_targetTexture_m427(L_2, L_4, /*hidden argument*/NULL);
	}

IL_002c:
	{
		return;
	}
}
// System.Void CardboardEye::CopyCameraAndMakeSideBySide(StereoController,System.Single,System.Single)
// StereoController
#include "AssemblyU2DCSharp_StereoController.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
extern TypeInfo* CardboardProfile_t41_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t69_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisCamera_t32_m397_MethodInfo_var;
extern "C" void CardboardEye_CopyCameraAndMakeSideBySide_m125 (CardboardEye_t29 * __this, StereoController_t31 * ___controller, float ___parx, float ___pary, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CardboardProfile_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(28);
		Mathf_t69_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		Component_GetComponent_TisCamera_t32_m397_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483665);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	Rect_t18  V_1 = {0};
	Vector2_t15  V_2 = {0};
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Rect_t18  V_5 = {0};
	Transform_t33 * G_B2_0 = {0};
	Transform_t33 * G_B1_0 = {0};
	float G_B3_0 = 0.0f;
	Transform_t33 * G_B3_1 = {0};
	{
		Camera_t32 * L_0 = (__this->___camera_5);
		StereoController_t31 * L_1 = ___controller;
		NullCheck(L_1);
		Camera_t32 * L_2 = Component_GetComponent_TisCamera_t32_m397(L_1, /*hidden argument*/Component_GetComponent_TisCamera_t32_m397_MethodInfo_var);
		NullCheck(L_0);
		Camera_CopyFrom_m439(L_0, L_2, /*hidden argument*/NULL);
		Camera_t32 * L_3 = (__this->___camera_5);
		Camera_t32 * L_4 = L_3;
		NullCheck(L_4);
		int32_t L_5 = Camera_get_cullingMask_m440(L_4, /*hidden argument*/NULL);
		LayerMask_t30 * L_6 = &(__this->___toggleCullingMask_3);
		int32_t L_7 = LayerMask_get_value_m441(L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		Camera_set_cullingMask_m383(L_4, ((int32_t)((int32_t)L_5^(int32_t)L_7)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CardboardProfile_t41_il2cpp_TypeInfo_var);
		CardboardProfile_t41 * L_8 = ((CardboardProfile_t41_StaticFields*)CardboardProfile_t41_il2cpp_TypeInfo_var->static_fields)->___Default_14;
		NullCheck(L_8);
		Device_t38 * L_9 = &(L_8->___device_1);
		Lenses_t35 * L_10 = &(L_9->___lenses_0);
		float L_11 = (L_10->___separation_3);
		StereoController_t31 * L_12 = ___controller;
		NullCheck(L_12);
		float L_13 = (L_12->___stereoMultiplier_3);
		V_0 = ((float)((float)L_11*(float)L_13));
		Transform_t33 * L_14 = Component_get_transform_m283(__this, /*hidden argument*/NULL);
		int32_t L_15 = (__this->___eye_2);
		G_B1_0 = L_14;
		if (L_15)
		{
			G_B2_0 = L_14;
			goto IL_0068;
		}
	}
	{
		float L_16 = V_0;
		G_B3_0 = ((float)((float)((-L_16))/(float)(2.0f)));
		G_B3_1 = G_B1_0;
		goto IL_006f;
	}

IL_0068:
	{
		float L_17 = V_0;
		G_B3_0 = ((float)((float)L_17/(float)(2.0f)));
		G_B3_1 = G_B2_0;
	}

IL_006f:
	{
		Vector3_t3  L_18 = Vector3_get_right_m442(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3  L_19 = Vector3_op_Multiply_m409(NULL /*static, unused*/, G_B3_0, L_18, /*hidden argument*/NULL);
		NullCheck(G_B3_1);
		Transform_set_localPosition_m290(G_B3_1, L_19, /*hidden argument*/NULL);
		Transform_t33 * L_20 = Component_get_transform_m283(__this, /*hidden argument*/NULL);
		Quaternion_t50  L_21 = Quaternion_get_identity_m443(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_localRotation_m444(L_20, L_21, /*hidden argument*/NULL);
		Transform_t33 * L_22 = Component_get_transform_m283(__this, /*hidden argument*/NULL);
		Vector3_t3  L_23 = Vector3_get_one_m445(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_set_localScale_m352(L_22, L_23, /*hidden argument*/NULL);
		Camera_t32 * L_24 = (__this->___camera_5);
		NullCheck(L_24);
		Rect_t18  L_25 = Camera_get_rect_m400(L_24, /*hidden argument*/NULL);
		V_1 = L_25;
		Vector2_t15  L_26 = Rect_get_center_m446((&V_1), /*hidden argument*/NULL);
		V_2 = L_26;
		float L_27 = ((&V_2)->___x_1);
		StereoController_t31 * L_28 = ___controller;
		NullCheck(L_28);
		float L_29 = (L_28->___stereoPaddingX_10);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t69_il2cpp_TypeInfo_var);
		float L_30 = Mathf_Clamp01_m363(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
		float L_31 = Mathf_Lerp_m407(NULL /*static, unused*/, L_27, (0.5f), L_30, /*hidden argument*/NULL);
		(&V_2)->___x_1 = L_31;
		float L_32 = ((&V_2)->___y_2);
		StereoController_t31 * L_33 = ___controller;
		NullCheck(L_33);
		float L_34 = (L_33->___stereoPaddingY_11);
		float L_35 = Mathf_Clamp01_m363(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
		float L_36 = Mathf_Lerp_m407(NULL /*static, unused*/, L_32, (0.5f), L_35, /*hidden argument*/NULL);
		(&V_2)->___y_2 = L_36;
		Vector2_t15  L_37 = V_2;
		Rect_set_center_m447((&V_1), L_37, /*hidden argument*/NULL);
		float L_38 = Rect_get_width_m334((&V_1), /*hidden argument*/NULL);
		float L_39 = Mathf_SmoothStep_m448(NULL /*static, unused*/, (-0.5f), (0.5f), ((float)((float)((float)((float)L_38+(float)(1.0f)))/(float)(2.0f))), /*hidden argument*/NULL);
		V_3 = L_39;
		Rect_t18 * L_40 = (&V_1);
		float L_41 = Rect_get_x_m420(L_40, /*hidden argument*/NULL);
		float L_42 = Rect_get_width_m334((&V_1), /*hidden argument*/NULL);
		float L_43 = V_3;
		Rect_set_x_m421(L_40, ((float)((float)L_41+(float)((float)((float)((float)((float)L_42-(float)L_43))/(float)(2.0f))))), /*hidden argument*/NULL);
		float L_44 = V_3;
		Rect_set_width_m422((&V_1), L_44, /*hidden argument*/NULL);
		Rect_t18 * L_45 = (&V_1);
		float L_46 = Rect_get_x_m420(L_45, /*hidden argument*/NULL);
		float L_47 = Rect_get_width_m334((&V_1), /*hidden argument*/NULL);
		float L_48 = Rect_get_width_m334((&V_1), /*hidden argument*/NULL);
		Rect_set_x_m421(L_45, ((float)((float)L_46*(float)((float)((float)((float)((float)(0.5f)-(float)L_47))/(float)((float)((float)(1.0f)-(float)L_48)))))), /*hidden argument*/NULL);
		int32_t L_49 = (__this->___eye_2);
		if ((!(((uint32_t)L_49) == ((uint32_t)1))))
		{
			goto IL_0190;
		}
	}
	{
		Rect_t18 * L_50 = (&V_1);
		float L_51 = Rect_get_x_m420(L_50, /*hidden argument*/NULL);
		Rect_set_x_m421(L_50, ((float)((float)L_51+(float)(0.5f))), /*hidden argument*/NULL);
	}

IL_0190:
	{
		StereoController_t31 * L_52 = ___controller;
		NullCheck(L_52);
		float L_53 = (L_52->___screenParallax_9);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t69_il2cpp_TypeInfo_var);
		float L_54 = Mathf_Clamp01_m363(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
		V_4 = L_54;
		StereoController_t31 * L_55 = ___controller;
		NullCheck(L_55);
		Camera_t32 * L_56 = Component_GetComponent_TisCamera_t32_m397(L_55, /*hidden argument*/Component_GetComponent_TisCamera_t32_m397_MethodInfo_var);
		NullCheck(L_56);
		Rect_t18  L_57 = Camera_get_rect_m400(L_56, /*hidden argument*/NULL);
		V_5 = L_57;
		float L_58 = Rect_get_width_m334((&V_5), /*hidden argument*/NULL);
		if ((!(((float)L_58) < ((float)(1.0f)))))
		{
			goto IL_01f7;
		}
	}
	{
		float L_59 = V_4;
		if ((!(((float)L_59) > ((float)(0.0f)))))
		{
			goto IL_01f7;
		}
	}
	{
		Rect_t18 * L_60 = (&V_1);
		float L_61 = Rect_get_x_m420(L_60, /*hidden argument*/NULL);
		float L_62 = ___parx;
		float L_63 = V_4;
		Rect_set_x_m421(L_60, ((float)((float)L_61-(float)((float)((float)((float)((float)L_62/(float)(4.0f)))*(float)L_63)))), /*hidden argument*/NULL);
		Rect_t18 * L_64 = (&V_1);
		float L_65 = Rect_get_y_m424(L_64, /*hidden argument*/NULL);
		float L_66 = ___pary;
		float L_67 = V_4;
		Rect_set_y_m425(L_64, ((float)((float)L_65-(float)((float)((float)((float)((float)L_66/(float)(2.0f)))*(float)L_67)))), /*hidden argument*/NULL);
	}

IL_01f7:
	{
		Camera_t32 * L_68 = (__this->___camera_5);
		Rect_t18  L_69 = V_1;
		NullCheck(L_68);
		Camera_set_rect_m426(L_68, L_69, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"
// System.Void CardboardHead::.ctor()
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern "C" void CardboardHead__ctor_m126 (CardboardHead_t5 * __this, const MethodInfo* method)
{
	{
		__this->___trackRotation_2 = 1;
		__this->___trackPosition_3 = 1;
		MonoBehaviour__ctor_m282(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Ray CardboardHead::get_Gaze()
// CardboardHead
#include "AssemblyU2DCSharp_CardboardHeadMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"
extern "C" Ray_t63  CardboardHead_get_Gaze_m127 (CardboardHead_t5 * __this, const MethodInfo* method)
{
	{
		CardboardHead_UpdateHead_m130(__this, /*hidden argument*/NULL);
		Transform_t33 * L_0 = Component_get_transform_m283(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t3  L_1 = Transform_get_position_m450(L_0, /*hidden argument*/NULL);
		Transform_t33 * L_2 = Component_get_transform_m283(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t3  L_3 = Transform_get_forward_m451(L_2, /*hidden argument*/NULL);
		Ray_t63  L_4 = {0};
		Ray__ctor_m452(&L_4, L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void CardboardHead::Update()
extern "C" void CardboardHead_Update_m128 (CardboardHead_t5 * __this, const MethodInfo* method)
{
	{
		__this->___updated_6 = 0;
		bool L_0 = (__this->___updateEarly_5);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		CardboardHead_UpdateHead_m130(__this, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void CardboardHead::LateUpdate()
extern "C" void CardboardHead_LateUpdate_m129 (CardboardHead_t5 * __this, const MethodInfo* method)
{
	{
		CardboardHead_UpdateHead_m130(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CardboardHead::UpdateHead()
// Cardboard
#include "AssemblyU2DCSharp_CardboardMethodDeclarations.h"
// Pose3D
#include "AssemblyU2DCSharp_Pose3DMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
extern TypeInfo* Cardboard_t24_il2cpp_TypeInfo_var;
extern "C" void CardboardHead_UpdateHead_m130 (CardboardHead_t5 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Cardboard_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	Quaternion_t50  V_0 = {0};
	Vector3_t3  V_1 = {0};
	{
		bool L_0 = (__this->___updated_6);
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		__this->___updated_6 = 1;
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		Cardboard_t24 * L_1 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		Cardboard_UpdateState_m88(L_1, /*hidden argument*/NULL);
		bool L_2 = (__this->___trackRotation_2);
		if (!L_2)
		{
			goto IL_0076;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		Cardboard_t24 * L_3 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		Pose3D_t49 * L_4 = Cardboard_get_HeadPose_m77(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Quaternion_t50  L_5 = Pose3D_get_Orientation_m163(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		Transform_t33 * L_6 = (__this->___target_4);
		bool L_7 = Object_op_Equality_m305(NULL /*static, unused*/, L_6, (Object_t75 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_005a;
		}
	}
	{
		Transform_t33 * L_8 = Component_get_transform_m283(__this, /*hidden argument*/NULL);
		Quaternion_t50  L_9 = V_0;
		NullCheck(L_8);
		Transform_set_localRotation_m444(L_8, L_9, /*hidden argument*/NULL);
		goto IL_0076;
	}

IL_005a:
	{
		Transform_t33 * L_10 = Component_get_transform_m283(__this, /*hidden argument*/NULL);
		Quaternion_t50  L_11 = V_0;
		Transform_t33 * L_12 = (__this->___target_4);
		NullCheck(L_12);
		Quaternion_t50  L_13 = Transform_get_rotation_m453(L_12, /*hidden argument*/NULL);
		Quaternion_t50  L_14 = Quaternion_op_Multiply_m454(NULL /*static, unused*/, L_11, L_13, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_rotation_m455(L_10, L_14, /*hidden argument*/NULL);
	}

IL_0076:
	{
		bool L_15 = (__this->___trackPosition_3);
		if (!L_15)
		{
			goto IL_00df;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		Cardboard_t24 * L_16 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_16);
		Pose3D_t49 * L_17 = Cardboard_get_HeadPose_m77(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_t3  L_18 = Pose3D_get_Position_m161(L_17, /*hidden argument*/NULL);
		V_1 = L_18;
		Transform_t33 * L_19 = (__this->___target_4);
		bool L_20 = Object_op_Equality_m305(NULL /*static, unused*/, L_19, (Object_t75 *)NULL, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00b3;
		}
	}
	{
		Transform_t33 * L_21 = Component_get_transform_m283(__this, /*hidden argument*/NULL);
		Vector3_t3  L_22 = V_1;
		NullCheck(L_21);
		Transform_set_localPosition_m290(L_21, L_22, /*hidden argument*/NULL);
		goto IL_00df;
	}

IL_00b3:
	{
		Transform_t33 * L_23 = Component_get_transform_m283(__this, /*hidden argument*/NULL);
		Transform_t33 * L_24 = (__this->___target_4);
		NullCheck(L_24);
		Vector3_t3  L_25 = Transform_get_position_m450(L_24, /*hidden argument*/NULL);
		Transform_t33 * L_26 = (__this->___target_4);
		NullCheck(L_26);
		Quaternion_t50  L_27 = Transform_get_rotation_m453(L_26, /*hidden argument*/NULL);
		Vector3_t3  L_28 = V_1;
		Vector3_t3  L_29 = Quaternion_op_Multiply_m456(NULL /*static, unused*/, L_27, L_28, /*hidden argument*/NULL);
		Vector3_t3  L_30 = Vector3_op_Addition_m411(NULL /*static, unused*/, L_25, L_29, /*hidden argument*/NULL);
		NullCheck(L_23);
		Transform_set_position_m457(L_23, L_30, /*hidden argument*/NULL);
	}

IL_00df:
	{
		return;
	}
}
// CardboardProfile/Screen
#include "AssemblyU2DCSharp_CardboardProfile_ScreenMethodDeclarations.h"
// CardboardProfile/Lenses
#include "AssemblyU2DCSharp_CardboardProfile_LensesMethodDeclarations.h"
// CardboardProfile/MaxFOV
#include "AssemblyU2DCSharp_CardboardProfile_MaxFOV.h"
// CardboardProfile/MaxFOV
#include "AssemblyU2DCSharp_CardboardProfile_MaxFOVMethodDeclarations.h"
// CardboardProfile/Distortion
#include "AssemblyU2DCSharp_CardboardProfile_DistortionMethodDeclarations.h"
// System.Single CardboardProfile/Distortion::distort(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" float Distortion_distort_m131 (Distortion_t37 * __this, float ___r, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = ___r;
		float L_1 = ___r;
		V_0 = ((float)((float)L_0*(float)L_1));
		float L_2 = (__this->___k2_1);
		float L_3 = V_0;
		float L_4 = (__this->___k1_0);
		float L_5 = V_0;
		float L_6 = ___r;
		return ((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)L_2*(float)L_3))+(float)L_4))*(float)L_5))+(float)(1.0f)))*(float)L_6));
	}
}
// CardboardProfile/Device
#include "AssemblyU2DCSharp_CardboardProfile_DeviceMethodDeclarations.h"
// CardboardProfile/ScreenSizes
#include "AssemblyU2DCSharp_CardboardProfile_ScreenSizes.h"
// CardboardProfile/ScreenSizes
#include "AssemblyU2DCSharp_CardboardProfile_ScreenSizesMethodDeclarations.h"
// CardboardProfile/DeviceTypes
#include "AssemblyU2DCSharp_CardboardProfile_DeviceTypes.h"
// CardboardProfile/DeviceTypes
#include "AssemblyU2DCSharp_CardboardProfile_DeviceTypesMethodDeclarations.h"
// System.Double
#include "mscorlib_System_Double.h"
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.Void CardboardProfile::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void CardboardProfile__ctor_m132 (CardboardProfile_t41 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m355(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CardboardProfile::.cctor()
// CardboardProfile
#include "AssemblyU2DCSharp_CardboardProfileMethodDeclarations.h"
extern TypeInfo* Screen_t34_il2cpp_TypeInfo_var;
extern TypeInfo* CardboardProfile_t41_il2cpp_TypeInfo_var;
extern TypeInfo* Device_t38_il2cpp_TypeInfo_var;
extern "C" void CardboardProfile__cctor_m133 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Screen_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		CardboardProfile_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(28);
		Device_t38_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		s_Il2CppMethodIntialized = true;
	}
	Screen_t34  V_0 = {0};
	Screen_t34  V_1 = {0};
	Screen_t34  V_2 = {0};
	Screen_t34  V_3 = {0};
	Screen_t34  V_4 = {0};
	Screen_t34  V_5 = {0};
	Screen_t34  V_6 = {0};
	Screen_t34  V_7 = {0};
	Screen_t34  V_8 = {0};
	Device_t38  V_9 = {0};
	Device_t38  V_10 = {0};
	Device_t38  V_11 = {0};
	CardboardProfile_t41 * V_12 = {0};
	{
		Initobj (Screen_t34_il2cpp_TypeInfo_var, (&V_0));
		(&V_0)->___width_0 = (0.11f);
		(&V_0)->___height_1 = (0.062f);
		(&V_0)->___border_2 = (0.004f);
		Screen_t34  L_0 = V_0;
		((CardboardProfile_t41_StaticFields*)CardboardProfile_t41_il2cpp_TypeInfo_var->static_fields)->___Nexus5_2 = L_0;
		Initobj (Screen_t34_il2cpp_TypeInfo_var, (&V_1));
		(&V_1)->___width_0 = (0.133f);
		(&V_1)->___height_1 = (0.074f);
		(&V_1)->___border_2 = (0.004f);
		Screen_t34  L_1 = V_1;
		((CardboardProfile_t41_StaticFields*)CardboardProfile_t41_il2cpp_TypeInfo_var->static_fields)->___Nexus6_3 = L_1;
		Initobj (Screen_t34_il2cpp_TypeInfo_var, (&V_2));
		(&V_2)->___width_0 = (0.114f);
		(&V_2)->___height_1 = (0.0635f);
		(&V_2)->___border_2 = (0.0035f);
		Screen_t34  L_2 = V_2;
		((CardboardProfile_t41_StaticFields*)CardboardProfile_t41_il2cpp_TypeInfo_var->static_fields)->___GalaxyS6_4 = L_2;
		Initobj (Screen_t34_il2cpp_TypeInfo_var, (&V_3));
		(&V_3)->___width_0 = (0.125f);
		(&V_3)->___height_1 = (0.0705f);
		(&V_3)->___border_2 = (0.0045f);
		Screen_t34  L_3 = V_3;
		((CardboardProfile_t41_StaticFields*)CardboardProfile_t41_il2cpp_TypeInfo_var->static_fields)->___GalaxyNote4_5 = L_3;
		Initobj (Screen_t34_il2cpp_TypeInfo_var, (&V_4));
		(&V_4)->___width_0 = (0.121f);
		(&V_4)->___height_1 = (0.068f);
		(&V_4)->___border_2 = (0.003f);
		Screen_t34  L_4 = V_4;
		((CardboardProfile_t41_StaticFields*)CardboardProfile_t41_il2cpp_TypeInfo_var->static_fields)->___LGG3_6 = L_4;
		Initobj (Screen_t34_il2cpp_TypeInfo_var, (&V_5));
		(&V_5)->___width_0 = (0.075f);
		(&V_5)->___height_1 = (0.05f);
		(&V_5)->___border_2 = (0.0045f);
		Screen_t34  L_5 = V_5;
		((CardboardProfile_t41_StaticFields*)CardboardProfile_t41_il2cpp_TypeInfo_var->static_fields)->___iPhone4_7 = L_5;
		Initobj (Screen_t34_il2cpp_TypeInfo_var, (&V_6));
		(&V_6)->___width_0 = (0.089f);
		(&V_6)->___height_1 = (0.05f);
		(&V_6)->___border_2 = (0.0045f);
		Screen_t34  L_6 = V_6;
		((CardboardProfile_t41_StaticFields*)CardboardProfile_t41_il2cpp_TypeInfo_var->static_fields)->___iPhone5_8 = L_6;
		Initobj (Screen_t34_il2cpp_TypeInfo_var, (&V_7));
		(&V_7)->___width_0 = (0.104f);
		(&V_7)->___height_1 = (0.058f);
		(&V_7)->___border_2 = (0.005f);
		Screen_t34  L_7 = V_7;
		((CardboardProfile_t41_StaticFields*)CardboardProfile_t41_il2cpp_TypeInfo_var->static_fields)->___iPhone6_9 = L_7;
		Initobj (Screen_t34_il2cpp_TypeInfo_var, (&V_8));
		(&V_8)->___width_0 = (0.112f);
		(&V_8)->___height_1 = (0.068f);
		(&V_8)->___border_2 = (0.005f);
		Screen_t34  L_8 = V_8;
		((CardboardProfile_t41_StaticFields*)CardboardProfile_t41_il2cpp_TypeInfo_var->static_fields)->___iPhone6p_10 = L_8;
		Initobj (Device_t38_il2cpp_TypeInfo_var, (&V_9));
		Lenses_t35 * L_9 = &((&V_9)->___lenses_0);
		L_9->___separation_3 = (0.06f);
		Lenses_t35 * L_10 = &((&V_9)->___lenses_0);
		L_10->___offset_4 = (0.035f);
		Lenses_t35 * L_11 = &((&V_9)->___lenses_0);
		L_11->___screenDistance_5 = (0.042f);
		Lenses_t35 * L_12 = &((&V_9)->___lenses_0);
		L_12->___alignment_6 = 1;
		MaxFOV_t36 * L_13 = &((&V_9)->___maxFOV_1);
		L_13->___outer_0 = (40.0f);
		MaxFOV_t36 * L_14 = &((&V_9)->___maxFOV_1);
		L_14->___inner_1 = (40.0f);
		MaxFOV_t36 * L_15 = &((&V_9)->___maxFOV_1);
		L_15->___upper_2 = (40.0f);
		MaxFOV_t36 * L_16 = &((&V_9)->___maxFOV_1);
		L_16->___lower_3 = (40.0f);
		Distortion_t37 * L_17 = &((&V_9)->___distortion_2);
		L_17->___k1_0 = (0.441f);
		Distortion_t37 * L_18 = &((&V_9)->___distortion_2);
		L_18->___k2_1 = (0.156f);
		Distortion_t37  L_19 = CardboardProfile_ApproximateInverse_m141(NULL /*static, unused*/, (0.441f), (0.156f), (1.0f), ((int32_t)10), /*hidden argument*/NULL);
		(&V_9)->___inverse_3 = L_19;
		Device_t38  L_20 = V_9;
		((CardboardProfile_t41_StaticFields*)CardboardProfile_t41_il2cpp_TypeInfo_var->static_fields)->___CardboardJun2014_11 = L_20;
		Initobj (Device_t38_il2cpp_TypeInfo_var, (&V_10));
		Lenses_t35 * L_21 = &((&V_10)->___lenses_0);
		L_21->___separation_3 = (0.062f);
		Lenses_t35 * L_22 = &((&V_10)->___lenses_0);
		L_22->___offset_4 = (0.035f);
		Lenses_t35 * L_23 = &((&V_10)->___lenses_0);
		L_23->___screenDistance_5 = (0.037f);
		Lenses_t35 * L_24 = &((&V_10)->___lenses_0);
		L_24->___alignment_6 = 1;
		MaxFOV_t36 * L_25 = &((&V_10)->___maxFOV_1);
		L_25->___outer_0 = (50.0f);
		MaxFOV_t36 * L_26 = &((&V_10)->___maxFOV_1);
		L_26->___inner_1 = (50.0f);
		MaxFOV_t36 * L_27 = &((&V_10)->___maxFOV_1);
		L_27->___upper_2 = (50.0f);
		MaxFOV_t36 * L_28 = &((&V_10)->___maxFOV_1);
		L_28->___lower_3 = (50.0f);
		Distortion_t37 * L_29 = &((&V_10)->___distortion_2);
		L_29->___k1_0 = (0.26f);
		Distortion_t37 * L_30 = &((&V_10)->___distortion_2);
		L_30->___k2_1 = (0.27f);
		Distortion_t37  L_31 = CardboardProfile_ApproximateInverse_m141(NULL /*static, unused*/, (0.26f), (0.27f), (1.0f), ((int32_t)10), /*hidden argument*/NULL);
		(&V_10)->___inverse_3 = L_31;
		Device_t38  L_32 = V_10;
		((CardboardProfile_t41_StaticFields*)CardboardProfile_t41_il2cpp_TypeInfo_var->static_fields)->___CardboardMay2015_12 = L_32;
		Initobj (Device_t38_il2cpp_TypeInfo_var, (&V_11));
		Lenses_t35 * L_33 = &((&V_11)->___lenses_0);
		L_33->___separation_3 = (0.065f);
		Lenses_t35 * L_34 = &((&V_11)->___lenses_0);
		L_34->___offset_4 = (0.036f);
		Lenses_t35 * L_35 = &((&V_11)->___lenses_0);
		L_35->___screenDistance_5 = (0.058f);
		Lenses_t35 * L_36 = &((&V_11)->___lenses_0);
		L_36->___alignment_6 = 1;
		MaxFOV_t36 * L_37 = &((&V_11)->___maxFOV_1);
		L_37->___outer_0 = (50.0f);
		MaxFOV_t36 * L_38 = &((&V_11)->___maxFOV_1);
		L_38->___inner_1 = (50.0f);
		MaxFOV_t36 * L_39 = &((&V_11)->___maxFOV_1);
		L_39->___upper_2 = (50.0f);
		MaxFOV_t36 * L_40 = &((&V_11)->___maxFOV_1);
		L_40->___lower_3 = (50.0f);
		Distortion_t37 * L_41 = &((&V_11)->___distortion_2);
		L_41->___k1_0 = (0.3f);
		Distortion_t37 * L_42 = &((&V_11)->___distortion_2);
		L_42->___k2_1 = (0.0f);
		Distortion_t37  L_43 = CardboardProfile_ApproximateInverse_m141(NULL /*static, unused*/, (0.3f), (0.0f), (1.0f), ((int32_t)10), /*hidden argument*/NULL);
		(&V_11)->___inverse_3 = L_43;
		Device_t38  L_44 = V_11;
		((CardboardProfile_t41_StaticFields*)CardboardProfile_t41_il2cpp_TypeInfo_var->static_fields)->___GoggleTechC1Glass_13 = L_44;
		CardboardProfile_t41 * L_45 = (CardboardProfile_t41 *)il2cpp_codegen_object_new (CardboardProfile_t41_il2cpp_TypeInfo_var);
		CardboardProfile__ctor_m132(L_45, /*hidden argument*/NULL);
		V_12 = L_45;
		CardboardProfile_t41 * L_46 = V_12;
		Screen_t34  L_47 = ((CardboardProfile_t41_StaticFields*)CardboardProfile_t41_il2cpp_TypeInfo_var->static_fields)->___Nexus5_2;
		NullCheck(L_46);
		L_46->___screen_0 = L_47;
		CardboardProfile_t41 * L_48 = V_12;
		Device_t38  L_49 = ((CardboardProfile_t41_StaticFields*)CardboardProfile_t41_il2cpp_TypeInfo_var->static_fields)->___CardboardJun2014_11;
		NullCheck(L_48);
		L_48->___device_1 = L_49;
		CardboardProfile_t41 * L_50 = V_12;
		((CardboardProfile_t41_StaticFields*)CardboardProfile_t41_il2cpp_TypeInfo_var->static_fields)->___Default_14 = L_50;
		return;
	}
}
// CardboardProfile CardboardProfile::Clone()
extern TypeInfo* CardboardProfile_t41_il2cpp_TypeInfo_var;
extern "C" CardboardProfile_t41 * CardboardProfile_Clone_m134 (CardboardProfile_t41 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CardboardProfile_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(28);
		s_Il2CppMethodIntialized = true;
	}
	CardboardProfile_t41 * V_0 = {0};
	{
		CardboardProfile_t41 * L_0 = (CardboardProfile_t41 *)il2cpp_codegen_object_new (CardboardProfile_t41_il2cpp_TypeInfo_var);
		CardboardProfile__ctor_m132(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		CardboardProfile_t41 * L_1 = V_0;
		Screen_t34  L_2 = (__this->___screen_0);
		NullCheck(L_1);
		L_1->___screen_0 = L_2;
		CardboardProfile_t41 * L_3 = V_0;
		Device_t38  L_4 = (__this->___device_1);
		NullCheck(L_3);
		L_3->___device_1 = L_4;
		CardboardProfile_t41 * L_5 = V_0;
		return L_5;
	}
}
// System.Single CardboardProfile::get_VerticalLensOffset()
extern "C" float CardboardProfile_get_VerticalLensOffset_m135 (CardboardProfile_t41 * __this, const MethodInfo* method)
{
	{
		Device_t38 * L_0 = &(__this->___device_1);
		Lenses_t35 * L_1 = &(L_0->___lenses_0);
		float L_2 = (L_1->___offset_4);
		Screen_t34 * L_3 = &(__this->___screen_0);
		float L_4 = (L_3->___border_2);
		Screen_t34 * L_5 = &(__this->___screen_0);
		float L_6 = (L_5->___height_1);
		Device_t38 * L_7 = &(__this->___device_1);
		Lenses_t35 * L_8 = &(L_7->___lenses_0);
		int32_t L_9 = (L_8->___alignment_6);
		return ((float)((float)((float)((float)((float)((float)L_2-(float)L_4))-(float)((float)((float)L_6/(float)(2.0f)))))*(float)(((float)L_9))));
	}
}
// CardboardProfile CardboardProfile::GetKnownProfile(CardboardProfile/ScreenSizes,CardboardProfile/DeviceTypes)
// CardboardProfile/ScreenSizes
#include "AssemblyU2DCSharp_CardboardProfile_ScreenSizes.h"
// CardboardProfile/DeviceTypes
#include "AssemblyU2DCSharp_CardboardProfile_DeviceTypes.h"
extern TypeInfo* CardboardProfile_t41_il2cpp_TypeInfo_var;
extern "C" CardboardProfile_t41 * CardboardProfile_GetKnownProfile_m136 (Object_t * __this /* static, unused */, int32_t ___screenSize, int32_t ___deviceType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CardboardProfile_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(28);
		s_Il2CppMethodIntialized = true;
	}
	Screen_t34  V_0 = {0};
	Device_t38  V_1 = {0};
	int32_t V_2 = {0};
	int32_t V_3 = {0};
	CardboardProfile_t41 * V_4 = {0};
	{
		int32_t L_0 = ___screenSize;
		V_2 = L_0;
		int32_t L_1 = V_2;
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 0)
		{
			goto IL_002f;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 1)
		{
			goto IL_003a;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 2)
		{
			goto IL_0045;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 3)
		{
			goto IL_0050;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 4)
		{
			goto IL_005b;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 5)
		{
			goto IL_0066;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 6)
		{
			goto IL_0071;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 7)
		{
			goto IL_007c;
		}
	}
	{
		goto IL_0087;
	}

IL_002f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CardboardProfile_t41_il2cpp_TypeInfo_var);
		Screen_t34  L_2 = ((CardboardProfile_t41_StaticFields*)CardboardProfile_t41_il2cpp_TypeInfo_var->static_fields)->___Nexus6_3;
		V_0 = L_2;
		goto IL_0092;
	}

IL_003a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CardboardProfile_t41_il2cpp_TypeInfo_var);
		Screen_t34  L_3 = ((CardboardProfile_t41_StaticFields*)CardboardProfile_t41_il2cpp_TypeInfo_var->static_fields)->___GalaxyS6_4;
		V_0 = L_3;
		goto IL_0092;
	}

IL_0045:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CardboardProfile_t41_il2cpp_TypeInfo_var);
		Screen_t34  L_4 = ((CardboardProfile_t41_StaticFields*)CardboardProfile_t41_il2cpp_TypeInfo_var->static_fields)->___GalaxyNote4_5;
		V_0 = L_4;
		goto IL_0092;
	}

IL_0050:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CardboardProfile_t41_il2cpp_TypeInfo_var);
		Screen_t34  L_5 = ((CardboardProfile_t41_StaticFields*)CardboardProfile_t41_il2cpp_TypeInfo_var->static_fields)->___LGG3_6;
		V_0 = L_5;
		goto IL_0092;
	}

IL_005b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CardboardProfile_t41_il2cpp_TypeInfo_var);
		Screen_t34  L_6 = ((CardboardProfile_t41_StaticFields*)CardboardProfile_t41_il2cpp_TypeInfo_var->static_fields)->___iPhone4_7;
		V_0 = L_6;
		goto IL_0092;
	}

IL_0066:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CardboardProfile_t41_il2cpp_TypeInfo_var);
		Screen_t34  L_7 = ((CardboardProfile_t41_StaticFields*)CardboardProfile_t41_il2cpp_TypeInfo_var->static_fields)->___iPhone5_8;
		V_0 = L_7;
		goto IL_0092;
	}

IL_0071:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CardboardProfile_t41_il2cpp_TypeInfo_var);
		Screen_t34  L_8 = ((CardboardProfile_t41_StaticFields*)CardboardProfile_t41_il2cpp_TypeInfo_var->static_fields)->___iPhone6_9;
		V_0 = L_8;
		goto IL_0092;
	}

IL_007c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CardboardProfile_t41_il2cpp_TypeInfo_var);
		Screen_t34  L_9 = ((CardboardProfile_t41_StaticFields*)CardboardProfile_t41_il2cpp_TypeInfo_var->static_fields)->___iPhone6p_10;
		V_0 = L_9;
		goto IL_0092;
	}

IL_0087:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CardboardProfile_t41_il2cpp_TypeInfo_var);
		Screen_t34  L_10 = ((CardboardProfile_t41_StaticFields*)CardboardProfile_t41_il2cpp_TypeInfo_var->static_fields)->___Nexus5_2;
		V_0 = L_10;
		goto IL_0092;
	}

IL_0092:
	{
		int32_t L_11 = ___deviceType;
		V_3 = L_11;
		int32_t L_12 = V_3;
		if ((((int32_t)L_12) == ((int32_t)1)))
		{
			goto IL_00a0;
		}
	}
	{
		goto IL_00ab;
	}

IL_00a0:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CardboardProfile_t41_il2cpp_TypeInfo_var);
		Device_t38  L_13 = ((CardboardProfile_t41_StaticFields*)CardboardProfile_t41_il2cpp_TypeInfo_var->static_fields)->___CardboardMay2015_12;
		V_1 = L_13;
		goto IL_00b6;
	}

IL_00ab:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CardboardProfile_t41_il2cpp_TypeInfo_var);
		Device_t38  L_14 = ((CardboardProfile_t41_StaticFields*)CardboardProfile_t41_il2cpp_TypeInfo_var->static_fields)->___CardboardJun2014_11;
		V_1 = L_14;
		goto IL_00b6;
	}

IL_00b6:
	{
		CardboardProfile_t41 * L_15 = (CardboardProfile_t41 *)il2cpp_codegen_object_new (CardboardProfile_t41_il2cpp_TypeInfo_var);
		CardboardProfile__ctor_m132(L_15, /*hidden argument*/NULL);
		V_4 = L_15;
		CardboardProfile_t41 * L_16 = V_4;
		Screen_t34  L_17 = V_0;
		NullCheck(L_16);
		L_16->___screen_0 = L_17;
		CardboardProfile_t41 * L_18 = V_4;
		Device_t38  L_19 = V_1;
		NullCheck(L_18);
		L_18->___device_1 = L_19;
		CardboardProfile_t41 * L_20 = V_4;
		return L_20;
	}
}
// System.Void CardboardProfile::GetLeftEyeVisibleTanAngles(System.Single[]&)
// CardboardProfile/Distortion
#include "AssemblyU2DCSharp_CardboardProfile_DistortionMethodDeclarations.h"
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
extern "C" void CardboardProfile_GetLeftEyeVisibleTanAngles_m137 (CardboardProfile_t41 * __this, SingleU5BU5D_t44** ___result, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	{
		Device_t38 * L_0 = &(__this->___device_1);
		MaxFOV_t36 * L_1 = &(L_0->___maxFOV_1);
		float L_2 = (L_1->___outer_0);
		double L_3 = tan(((double)((double)((double)((double)(((double)((-L_2))))*(double)(3.1415926535897931)))/(double)(180.0))));
		V_0 = (((float)L_3));
		Device_t38 * L_4 = &(__this->___device_1);
		MaxFOV_t36 * L_5 = &(L_4->___maxFOV_1);
		float L_6 = (L_5->___upper_2);
		double L_7 = tan(((double)((double)((double)((double)(((double)L_6))*(double)(3.1415926535897931)))/(double)(180.0))));
		V_1 = (((float)L_7));
		Device_t38 * L_8 = &(__this->___device_1);
		MaxFOV_t36 * L_9 = &(L_8->___maxFOV_1);
		float L_10 = (L_9->___inner_1);
		double L_11 = tan(((double)((double)((double)((double)(((double)L_10))*(double)(3.1415926535897931)))/(double)(180.0))));
		V_2 = (((float)L_11));
		Device_t38 * L_12 = &(__this->___device_1);
		MaxFOV_t36 * L_13 = &(L_12->___maxFOV_1);
		float L_14 = (L_13->___lower_3);
		double L_15 = tan(((double)((double)((double)((double)(((double)((-L_14))))*(double)(3.1415926535897931)))/(double)(180.0))));
		V_3 = (((float)L_15));
		Screen_t34 * L_16 = &(__this->___screen_0);
		float L_17 = (L_16->___width_0);
		V_4 = ((float)((float)L_17/(float)(4.0f)));
		Screen_t34 * L_18 = &(__this->___screen_0);
		float L_19 = (L_18->___height_1);
		V_5 = ((float)((float)L_19/(float)(2.0f)));
		Device_t38 * L_20 = &(__this->___device_1);
		Lenses_t35 * L_21 = &(L_20->___lenses_0);
		float L_22 = (L_21->___separation_3);
		float L_23 = V_4;
		V_6 = ((float)((float)((float)((float)L_22/(float)(2.0f)))-(float)L_23));
		float L_24 = CardboardProfile_get_VerticalLensOffset_m135(__this, /*hidden argument*/NULL);
		V_7 = ((-L_24));
		Device_t38 * L_25 = &(__this->___device_1);
		Lenses_t35 * L_26 = &(L_25->___lenses_0);
		float L_27 = (L_26->___screenDistance_5);
		V_8 = L_27;
		Device_t38 * L_28 = &(__this->___device_1);
		Distortion_t37 * L_29 = &(L_28->___distortion_2);
		float L_30 = V_6;
		float L_31 = V_4;
		float L_32 = V_8;
		float L_33 = Distortion_distort_m131(L_29, ((float)((float)((float)((float)L_30-(float)L_31))/(float)L_32)), /*hidden argument*/NULL);
		V_9 = L_33;
		Device_t38 * L_34 = &(__this->___device_1);
		Distortion_t37 * L_35 = &(L_34->___distortion_2);
		float L_36 = V_7;
		float L_37 = V_5;
		float L_38 = V_8;
		float L_39 = Distortion_distort_m131(L_35, ((float)((float)((float)((float)L_36+(float)L_37))/(float)L_38)), /*hidden argument*/NULL);
		V_10 = L_39;
		Device_t38 * L_40 = &(__this->___device_1);
		Distortion_t37 * L_41 = &(L_40->___distortion_2);
		float L_42 = V_6;
		float L_43 = V_4;
		float L_44 = V_8;
		float L_45 = Distortion_distort_m131(L_41, ((float)((float)((float)((float)L_42+(float)L_43))/(float)L_44)), /*hidden argument*/NULL);
		V_11 = L_45;
		Device_t38 * L_46 = &(__this->___device_1);
		Distortion_t37 * L_47 = &(L_46->___distortion_2);
		float L_48 = V_7;
		float L_49 = V_4;
		float L_50 = V_8;
		float L_51 = Distortion_distort_m131(L_47, ((float)((float)((float)((float)L_48-(float)L_49))/(float)L_50)), /*hidden argument*/NULL);
		V_12 = L_51;
		SingleU5BU5D_t44** L_52 = ___result;
		float L_53 = V_0;
		float L_54 = V_9;
		float L_55 = Math_Max_m458(NULL /*static, unused*/, L_53, L_54, /*hidden argument*/NULL);
		NullCheck((*((SingleU5BU5D_t44**)L_52)));
		IL2CPP_ARRAY_BOUNDS_CHECK((*((SingleU5BU5D_t44**)L_52)), 0);
		*((float*)(float*)SZArrayLdElema((*((SingleU5BU5D_t44**)L_52)), 0, sizeof(float))) = (float)L_55;
		SingleU5BU5D_t44** L_56 = ___result;
		float L_57 = V_1;
		float L_58 = V_10;
		float L_59 = Math_Min_m459(NULL /*static, unused*/, L_57, L_58, /*hidden argument*/NULL);
		NullCheck((*((SingleU5BU5D_t44**)L_56)));
		IL2CPP_ARRAY_BOUNDS_CHECK((*((SingleU5BU5D_t44**)L_56)), 1);
		*((float*)(float*)SZArrayLdElema((*((SingleU5BU5D_t44**)L_56)), 1, sizeof(float))) = (float)L_59;
		SingleU5BU5D_t44** L_60 = ___result;
		float L_61 = V_2;
		float L_62 = V_11;
		float L_63 = Math_Min_m459(NULL /*static, unused*/, L_61, L_62, /*hidden argument*/NULL);
		NullCheck((*((SingleU5BU5D_t44**)L_60)));
		IL2CPP_ARRAY_BOUNDS_CHECK((*((SingleU5BU5D_t44**)L_60)), 2);
		*((float*)(float*)SZArrayLdElema((*((SingleU5BU5D_t44**)L_60)), 2, sizeof(float))) = (float)L_63;
		SingleU5BU5D_t44** L_64 = ___result;
		float L_65 = V_3;
		float L_66 = V_12;
		float L_67 = Math_Max_m458(NULL /*static, unused*/, L_65, L_66, /*hidden argument*/NULL);
		NullCheck((*((SingleU5BU5D_t44**)L_64)));
		IL2CPP_ARRAY_BOUNDS_CHECK((*((SingleU5BU5D_t44**)L_64)), 3);
		*((float*)(float*)SZArrayLdElema((*((SingleU5BU5D_t44**)L_64)), 3, sizeof(float))) = (float)L_67;
		return;
	}
}
// System.Void CardboardProfile::GetLeftEyeNoLensTanAngles(System.Single[]&)
extern "C" void CardboardProfile_GetLeftEyeNoLensTanAngles_m138 (CardboardProfile_t41 * __this, SingleU5BU5D_t44** ___result, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	{
		Device_t38 * L_0 = &(__this->___device_1);
		Distortion_t37 * L_1 = &(L_0->___inverse_3);
		Device_t38 * L_2 = &(__this->___device_1);
		MaxFOV_t36 * L_3 = &(L_2->___maxFOV_1);
		float L_4 = (L_3->___outer_0);
		double L_5 = tan(((double)((double)((double)((double)(((double)((-L_4))))*(double)(3.1415926535897931)))/(double)(180.0))));
		float L_6 = Distortion_distort_m131(L_1, (((float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		Device_t38 * L_7 = &(__this->___device_1);
		Distortion_t37 * L_8 = &(L_7->___inverse_3);
		Device_t38 * L_9 = &(__this->___device_1);
		MaxFOV_t36 * L_10 = &(L_9->___maxFOV_1);
		float L_11 = (L_10->___upper_2);
		double L_12 = tan(((double)((double)((double)((double)(((double)L_11))*(double)(3.1415926535897931)))/(double)(180.0))));
		float L_13 = Distortion_distort_m131(L_8, (((float)L_12)), /*hidden argument*/NULL);
		V_1 = L_13;
		Device_t38 * L_14 = &(__this->___device_1);
		Distortion_t37 * L_15 = &(L_14->___inverse_3);
		Device_t38 * L_16 = &(__this->___device_1);
		MaxFOV_t36 * L_17 = &(L_16->___maxFOV_1);
		float L_18 = (L_17->___inner_1);
		double L_19 = tan(((double)((double)((double)((double)(((double)L_18))*(double)(3.1415926535897931)))/(double)(180.0))));
		float L_20 = Distortion_distort_m131(L_15, (((float)L_19)), /*hidden argument*/NULL);
		V_2 = L_20;
		Device_t38 * L_21 = &(__this->___device_1);
		Distortion_t37 * L_22 = &(L_21->___inverse_3);
		Device_t38 * L_23 = &(__this->___device_1);
		MaxFOV_t36 * L_24 = &(L_23->___maxFOV_1);
		float L_25 = (L_24->___lower_3);
		double L_26 = tan(((double)((double)((double)((double)(((double)((-L_25))))*(double)(3.1415926535897931)))/(double)(180.0))));
		float L_27 = Distortion_distort_m131(L_22, (((float)L_26)), /*hidden argument*/NULL);
		V_3 = L_27;
		Screen_t34 * L_28 = &(__this->___screen_0);
		float L_29 = (L_28->___width_0);
		V_4 = ((float)((float)L_29/(float)(4.0f)));
		Screen_t34 * L_30 = &(__this->___screen_0);
		float L_31 = (L_30->___height_1);
		V_5 = ((float)((float)L_31/(float)(2.0f)));
		Device_t38 * L_32 = &(__this->___device_1);
		Lenses_t35 * L_33 = &(L_32->___lenses_0);
		float L_34 = (L_33->___separation_3);
		float L_35 = V_4;
		V_6 = ((float)((float)((float)((float)L_34/(float)(2.0f)))-(float)L_35));
		float L_36 = CardboardProfile_get_VerticalLensOffset_m135(__this, /*hidden argument*/NULL);
		V_7 = ((-L_36));
		Device_t38 * L_37 = &(__this->___device_1);
		Lenses_t35 * L_38 = &(L_37->___lenses_0);
		float L_39 = (L_38->___screenDistance_5);
		V_8 = L_39;
		float L_40 = V_6;
		float L_41 = V_4;
		float L_42 = V_8;
		V_9 = ((float)((float)((float)((float)L_40-(float)L_41))/(float)L_42));
		float L_43 = V_7;
		float L_44 = V_5;
		float L_45 = V_8;
		V_10 = ((float)((float)((float)((float)L_43+(float)L_44))/(float)L_45));
		float L_46 = V_6;
		float L_47 = V_4;
		float L_48 = V_8;
		V_11 = ((float)((float)((float)((float)L_46+(float)L_47))/(float)L_48));
		float L_49 = V_7;
		float L_50 = V_4;
		float L_51 = V_8;
		V_12 = ((float)((float)((float)((float)L_49-(float)L_50))/(float)L_51));
		SingleU5BU5D_t44** L_52 = ___result;
		float L_53 = V_0;
		float L_54 = V_9;
		float L_55 = Math_Max_m458(NULL /*static, unused*/, L_53, L_54, /*hidden argument*/NULL);
		NullCheck((*((SingleU5BU5D_t44**)L_52)));
		IL2CPP_ARRAY_BOUNDS_CHECK((*((SingleU5BU5D_t44**)L_52)), 0);
		*((float*)(float*)SZArrayLdElema((*((SingleU5BU5D_t44**)L_52)), 0, sizeof(float))) = (float)L_55;
		SingleU5BU5D_t44** L_56 = ___result;
		float L_57 = V_1;
		float L_58 = V_10;
		float L_59 = Math_Min_m459(NULL /*static, unused*/, L_57, L_58, /*hidden argument*/NULL);
		NullCheck((*((SingleU5BU5D_t44**)L_56)));
		IL2CPP_ARRAY_BOUNDS_CHECK((*((SingleU5BU5D_t44**)L_56)), 1);
		*((float*)(float*)SZArrayLdElema((*((SingleU5BU5D_t44**)L_56)), 1, sizeof(float))) = (float)L_59;
		SingleU5BU5D_t44** L_60 = ___result;
		float L_61 = V_2;
		float L_62 = V_11;
		float L_63 = Math_Min_m459(NULL /*static, unused*/, L_61, L_62, /*hidden argument*/NULL);
		NullCheck((*((SingleU5BU5D_t44**)L_60)));
		IL2CPP_ARRAY_BOUNDS_CHECK((*((SingleU5BU5D_t44**)L_60)), 2);
		*((float*)(float*)SZArrayLdElema((*((SingleU5BU5D_t44**)L_60)), 2, sizeof(float))) = (float)L_63;
		SingleU5BU5D_t44** L_64 = ___result;
		float L_65 = V_3;
		float L_66 = V_12;
		float L_67 = Math_Max_m458(NULL /*static, unused*/, L_65, L_66, /*hidden argument*/NULL);
		NullCheck((*((SingleU5BU5D_t44**)L_64)));
		IL2CPP_ARRAY_BOUNDS_CHECK((*((SingleU5BU5D_t44**)L_64)), 3);
		*((float*)(float*)SZArrayLdElema((*((SingleU5BU5D_t44**)L_64)), 3, sizeof(float))) = (float)L_67;
		return;
	}
}
// UnityEngine.Rect CardboardProfile::GetLeftEyeVisibleScreenRect(System.Single[])
#include "mscorlib_ArrayTypes.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
extern "C" Rect_t18  CardboardProfile_GetLeftEyeVisibleScreenRect_m139 (CardboardProfile_t41 * __this, SingleU5BU5D_t44* ___undistortedFrustum, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	{
		Device_t38 * L_0 = &(__this->___device_1);
		Lenses_t35 * L_1 = &(L_0->___lenses_0);
		float L_2 = (L_1->___screenDistance_5);
		V_0 = L_2;
		Screen_t34 * L_3 = &(__this->___screen_0);
		float L_4 = (L_3->___width_0);
		Device_t38 * L_5 = &(__this->___device_1);
		Lenses_t35 * L_6 = &(L_5->___lenses_0);
		float L_7 = (L_6->___separation_3);
		V_1 = ((float)((float)((float)((float)L_4-(float)L_7))/(float)(2.0f)));
		float L_8 = CardboardProfile_get_VerticalLensOffset_m135(__this, /*hidden argument*/NULL);
		Screen_t34 * L_9 = &(__this->___screen_0);
		float L_10 = (L_9->___height_1);
		V_2 = ((float)((float)L_8+(float)((float)((float)L_10/(float)(2.0f)))));
		SingleU5BU5D_t44* L_11 = ___undistortedFrustum;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 0);
		int32_t L_12 = 0;
		float L_13 = V_0;
		float L_14 = V_1;
		Screen_t34 * L_15 = &(__this->___screen_0);
		float L_16 = (L_15->___width_0);
		V_3 = ((float)((float)((float)((float)((float)((float)(*(float*)(float*)SZArrayLdElema(L_11, L_12, sizeof(float)))*(float)L_13))+(float)L_14))/(float)L_16));
		SingleU5BU5D_t44* L_17 = ___undistortedFrustum;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 1);
		int32_t L_18 = 1;
		float L_19 = V_0;
		float L_20 = V_2;
		Screen_t34 * L_21 = &(__this->___screen_0);
		float L_22 = (L_21->___height_1);
		V_4 = ((float)((float)((float)((float)((float)((float)(*(float*)(float*)SZArrayLdElema(L_17, L_18, sizeof(float)))*(float)L_19))+(float)L_20))/(float)L_22));
		SingleU5BU5D_t44* L_23 = ___undistortedFrustum;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, 2);
		int32_t L_24 = 2;
		float L_25 = V_0;
		float L_26 = V_1;
		Screen_t34 * L_27 = &(__this->___screen_0);
		float L_28 = (L_27->___width_0);
		V_5 = ((float)((float)((float)((float)((float)((float)(*(float*)(float*)SZArrayLdElema(L_23, L_24, sizeof(float)))*(float)L_25))+(float)L_26))/(float)L_28));
		SingleU5BU5D_t44* L_29 = ___undistortedFrustum;
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, 3);
		int32_t L_30 = 3;
		float L_31 = V_0;
		float L_32 = V_2;
		Screen_t34 * L_33 = &(__this->___screen_0);
		float L_34 = (L_33->___height_1);
		V_6 = ((float)((float)((float)((float)((float)((float)(*(float*)(float*)SZArrayLdElema(L_29, L_30, sizeof(float)))*(float)L_31))+(float)L_32))/(float)L_34));
		float L_35 = V_3;
		float L_36 = V_6;
		float L_37 = V_5;
		float L_38 = V_3;
		float L_39 = V_4;
		float L_40 = V_6;
		Rect_t18  L_41 = {0};
		Rect__ctor_m300(&L_41, L_35, L_36, ((float)((float)L_37-(float)L_38)), ((float)((float)L_39-(float)L_40)), /*hidden argument*/NULL);
		return L_41;
	}
}
// System.Double[] CardboardProfile::solveLeastSquares(System.Double[,],System.Double[])
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
extern TypeInfo* DoubleU5BU2CU5D_t65_il2cpp_TypeInfo_var;
extern TypeInfo* DoubleU5BU5D_t64_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral23;
extern Il2CppCodeGenString* _stringLiteral24;
extern "C" DoubleU5BU5D_t64* CardboardProfile_solveLeastSquares_m140 (Object_t * __this /* static, unused */, DoubleU5BU2CU5D_t65* ___matA, DoubleU5BU5D_t64* ___vecY, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DoubleU5BU2CU5D_t65_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(31);
		DoubleU5BU5D_t64_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		_stringLiteral23 = il2cpp_codegen_string_literal_from_index(23);
		_stringLiteral24 = il2cpp_codegen_string_literal_from_index(24);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DoubleU5BU2CU5D_t65* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	double V_5 = 0.0;
	int32_t V_6 = 0;
	DoubleU5BU2CU5D_t65* V_7 = {0};
	double V_8 = 0.0;
	DoubleU5BU5D_t64* V_9 = {0};
	int32_t V_10 = 0;
	double V_11 = 0.0;
	int32_t V_12 = 0;
	DoubleU5BU5D_t64* V_13 = {0};
	int32_t V_14 = 0;
	double V_15 = 0.0;
	int32_t V_16 = 0;
	{
		DoubleU5BU2CU5D_t65* L_0 = ___matA;
		NullCheck(L_0);
		int32_t L_1 = Array_GetLength_m460(L_0, 0, /*hidden argument*/NULL);
		V_0 = L_1;
		DoubleU5BU2CU5D_t65* L_2 = ___matA;
		NullCheck(L_2);
		int32_t L_3 = Array_GetLength_m460(L_2, 1, /*hidden argument*/NULL);
		V_1 = L_3;
		int32_t L_4 = V_0;
		DoubleU5BU5D_t64* L_5 = ___vecY;
		NullCheck(L_5);
		if ((((int32_t)L_4) == ((int32_t)(((int32_t)(((Array_t *)L_5)->max_length))))))
		{
			goto IL_0025;
		}
	}
	{
		Debug_LogError_m365(NULL /*static, unused*/, _stringLiteral23, /*hidden argument*/NULL);
		return (DoubleU5BU5D_t64*)NULL;
	}

IL_0025:
	{
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)2)))
		{
			goto IL_0038;
		}
	}
	{
		Debug_LogError_m365(NULL /*static, unused*/, _stringLiteral24, /*hidden argument*/NULL);
		return (DoubleU5BU5D_t64*)NULL;
	}

IL_0038:
	{
		int32_t L_7 = V_1;
		int32_t L_8 = V_1;
		DoubleU5BU2CU5D_t65* L_9 = (DoubleU5BU2CU5D_t65*)GenArrayNew2(DoubleU5BU2CU5D_t65_il2cpp_TypeInfo_var, L_7, L_8);
		V_2 = L_9;
		V_3 = 0;
		goto IL_00a6;
	}

IL_0047:
	{
		V_4 = 0;
		goto IL_009a;
	}

IL_004f:
	{
		V_5 = (0.0);
		V_6 = 0;
		goto IL_0081;
	}

IL_0062:
	{
		double L_10 = V_5;
		DoubleU5BU2CU5D_t65* L_11 = ___matA;
		int32_t L_12 = V_6;
		int32_t L_13 = V_4;
		NullCheck(L_11);
		double L_14 = GenArrayGet2(L_11, L_12, L_13, double);;
		DoubleU5BU2CU5D_t65* L_15 = ___matA;
		int32_t L_16 = V_6;
		int32_t L_17 = V_3;
		NullCheck(L_15);
		double L_18 = GenArrayGet2(L_15, L_16, L_17, double);;
		V_5 = ((double)((double)L_10+(double)((double)((double)L_14*(double)L_18))));
		int32_t L_19 = V_6;
		V_6 = ((int32_t)((int32_t)L_19+(int32_t)1));
	}

IL_0081:
	{
		int32_t L_20 = V_6;
		int32_t L_21 = V_0;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_0062;
		}
	}
	{
		DoubleU5BU2CU5D_t65* L_22 = V_2;
		int32_t L_23 = V_4;
		int32_t L_24 = V_3;
		double L_25 = V_5;
		NullCheck(L_22);
		GenArraySet2(L_22, L_23, L_24, L_25, double);;
		int32_t L_26 = V_4;
		V_4 = ((int32_t)((int32_t)L_26+(int32_t)1));
	}

IL_009a:
	{
		int32_t L_27 = V_4;
		int32_t L_28 = V_1;
		if ((((int32_t)L_27) < ((int32_t)L_28)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_29 = V_3;
		V_3 = ((int32_t)((int32_t)L_29+(int32_t)1));
	}

IL_00a6:
	{
		int32_t L_30 = V_3;
		int32_t L_31 = V_1;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_32 = V_1;
		int32_t L_33 = V_1;
		DoubleU5BU2CU5D_t65* L_34 = (DoubleU5BU2CU5D_t65*)GenArrayNew2(DoubleU5BU2CU5D_t65_il2cpp_TypeInfo_var, L_32, L_33);
		V_7 = L_34;
		DoubleU5BU2CU5D_t65* L_35 = V_2;
		NullCheck(L_35);
		double L_36 = GenArrayGet2(L_35, 0, 0, double);;
		DoubleU5BU2CU5D_t65* L_37 = V_2;
		NullCheck(L_37);
		double L_38 = GenArrayGet2(L_37, 1, 1, double);;
		DoubleU5BU2CU5D_t65* L_39 = V_2;
		NullCheck(L_39);
		double L_40 = GenArrayGet2(L_39, 0, 1, double);;
		DoubleU5BU2CU5D_t65* L_41 = V_2;
		NullCheck(L_41);
		double L_42 = GenArrayGet2(L_41, 1, 0, double);;
		V_8 = ((double)((double)((double)((double)L_36*(double)L_38))-(double)((double)((double)L_40*(double)L_42))));
		DoubleU5BU2CU5D_t65* L_43 = V_7;
		DoubleU5BU2CU5D_t65* L_44 = V_2;
		NullCheck(L_44);
		double L_45 = GenArrayGet2(L_44, 1, 1, double);;
		double L_46 = V_8;
		NullCheck(L_43);
		GenArraySet2(L_43, 0, 0, ((double)((double)L_45/(double)L_46)), double);;
		DoubleU5BU2CU5D_t65* L_47 = V_7;
		DoubleU5BU2CU5D_t65* L_48 = V_2;
		NullCheck(L_48);
		double L_49 = GenArrayGet2(L_48, 0, 0, double);;
		double L_50 = V_8;
		NullCheck(L_47);
		GenArraySet2(L_47, 1, 1, ((double)((double)L_49/(double)L_50)), double);;
		DoubleU5BU2CU5D_t65* L_51 = V_7;
		DoubleU5BU2CU5D_t65* L_52 = V_2;
		NullCheck(L_52);
		double L_53 = GenArrayGet2(L_52, 1, 0, double);;
		double L_54 = V_8;
		NullCheck(L_51);
		GenArraySet2(L_51, 0, 1, ((double)((double)((-L_53))/(double)L_54)), double);;
		DoubleU5BU2CU5D_t65* L_55 = V_7;
		DoubleU5BU2CU5D_t65* L_56 = V_2;
		NullCheck(L_56);
		double L_57 = GenArrayGet2(L_56, 0, 1, double);;
		double L_58 = V_8;
		NullCheck(L_55);
		GenArraySet2(L_55, 1, 0, ((double)((double)((-L_57))/(double)L_58)), double);;
		int32_t L_59 = V_1;
		V_9 = ((DoubleU5BU5D_t64*)SZArrayNew(DoubleU5BU5D_t64_il2cpp_TypeInfo_var, L_59));
		V_10 = 0;
		goto IL_017f;
	}

IL_013d:
	{
		V_11 = (0.0);
		V_12 = 0;
		goto IL_016a;
	}

IL_0150:
	{
		double L_60 = V_11;
		DoubleU5BU2CU5D_t65* L_61 = ___matA;
		int32_t L_62 = V_12;
		int32_t L_63 = V_10;
		NullCheck(L_61);
		double L_64 = GenArrayGet2(L_61, L_62, L_63, double);;
		DoubleU5BU5D_t64* L_65 = ___vecY;
		int32_t L_66 = V_12;
		NullCheck(L_65);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_65, L_66);
		int32_t L_67 = L_66;
		V_11 = ((double)((double)L_60+(double)((double)((double)L_64*(double)(*(double*)(double*)SZArrayLdElema(L_65, L_67, sizeof(double)))))));
		int32_t L_68 = V_12;
		V_12 = ((int32_t)((int32_t)L_68+(int32_t)1));
	}

IL_016a:
	{
		int32_t L_69 = V_12;
		int32_t L_70 = V_0;
		if ((((int32_t)L_69) < ((int32_t)L_70)))
		{
			goto IL_0150;
		}
	}
	{
		DoubleU5BU5D_t64* L_71 = V_9;
		int32_t L_72 = V_10;
		double L_73 = V_11;
		NullCheck(L_71);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_71, L_72);
		*((double*)(double*)SZArrayLdElema(L_71, L_72, sizeof(double))) = (double)L_73;
		int32_t L_74 = V_10;
		V_10 = ((int32_t)((int32_t)L_74+(int32_t)1));
	}

IL_017f:
	{
		int32_t L_75 = V_10;
		int32_t L_76 = V_1;
		if ((((int32_t)L_75) < ((int32_t)L_76)))
		{
			goto IL_013d;
		}
	}
	{
		int32_t L_77 = V_1;
		V_13 = ((DoubleU5BU5D_t64*)SZArrayNew(DoubleU5BU5D_t64_il2cpp_TypeInfo_var, L_77));
		V_14 = 0;
		goto IL_01db;
	}

IL_0197:
	{
		V_15 = (0.0);
		V_16 = 0;
		goto IL_01c6;
	}

IL_01aa:
	{
		double L_78 = V_15;
		DoubleU5BU2CU5D_t65* L_79 = V_7;
		int32_t L_80 = V_16;
		int32_t L_81 = V_14;
		NullCheck(L_79);
		double L_82 = GenArrayGet2(L_79, L_80, L_81, double);;
		DoubleU5BU5D_t64* L_83 = V_9;
		int32_t L_84 = V_16;
		NullCheck(L_83);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_83, L_84);
		int32_t L_85 = L_84;
		V_15 = ((double)((double)L_78+(double)((double)((double)L_82*(double)(*(double*)(double*)SZArrayLdElema(L_83, L_85, sizeof(double)))))));
		int32_t L_86 = V_16;
		V_16 = ((int32_t)((int32_t)L_86+(int32_t)1));
	}

IL_01c6:
	{
		int32_t L_87 = V_16;
		int32_t L_88 = V_1;
		if ((((int32_t)L_87) < ((int32_t)L_88)))
		{
			goto IL_01aa;
		}
	}
	{
		DoubleU5BU5D_t64* L_89 = V_13;
		int32_t L_90 = V_14;
		double L_91 = V_15;
		NullCheck(L_89);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_89, L_90);
		*((double*)(double*)SZArrayLdElema(L_89, L_90, sizeof(double))) = (double)L_91;
		int32_t L_92 = V_14;
		V_14 = ((int32_t)((int32_t)L_92+(int32_t)1));
	}

IL_01db:
	{
		int32_t L_93 = V_14;
		int32_t L_94 = V_1;
		if ((((int32_t)L_93) < ((int32_t)L_94)))
		{
			goto IL_0197;
		}
	}
	{
		DoubleU5BU5D_t64* L_95 = V_13;
		return L_95;
	}
}
// CardboardProfile/Distortion CardboardProfile::ApproximateInverse(System.Single,System.Single,System.Single,System.Int32)
// System.Single
#include "mscorlib_System_Single.h"
// System.Int32
#include "mscorlib_System_Int32.h"
extern TypeInfo* Distortion_t37_il2cpp_TypeInfo_var;
extern TypeInfo* CardboardProfile_t41_il2cpp_TypeInfo_var;
extern "C" Distortion_t37  CardboardProfile_ApproximateInverse_m141 (Object_t * __this /* static, unused */, float ___k1, float ___k2, float ___maxRadius, int32_t ___numSamples, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Distortion_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(34);
		CardboardProfile_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(28);
		s_Il2CppMethodIntialized = true;
	}
	Distortion_t37  V_0 = {0};
	{
		Initobj (Distortion_t37_il2cpp_TypeInfo_var, (&V_0));
		float L_0 = ___k1;
		(&V_0)->___k1_0 = L_0;
		float L_1 = ___k2;
		(&V_0)->___k2_1 = L_1;
		Distortion_t37  L_2 = V_0;
		float L_3 = ___maxRadius;
		int32_t L_4 = ___numSamples;
		IL2CPP_RUNTIME_CLASS_INIT(CardboardProfile_t41_il2cpp_TypeInfo_var);
		Distortion_t37  L_5 = CardboardProfile_ApproximateInverse_m142(NULL /*static, unused*/, L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// CardboardProfile/Distortion CardboardProfile::ApproximateInverse(CardboardProfile/Distortion,System.Single,System.Int32)
// CardboardProfile/Distortion
#include "AssemblyU2DCSharp_CardboardProfile_Distortion.h"
extern TypeInfo* DoubleU5BU2CU5D_t65_il2cpp_TypeInfo_var;
extern TypeInfo* DoubleU5BU5D_t64_il2cpp_TypeInfo_var;
extern TypeInfo* CardboardProfile_t41_il2cpp_TypeInfo_var;
extern TypeInfo* Distortion_t37_il2cpp_TypeInfo_var;
extern "C" Distortion_t37  CardboardProfile_ApproximateInverse_m142 (Object_t * __this /* static, unused */, Distortion_t37  ___distort, float ___maxRadius, int32_t ___numSamples, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DoubleU5BU2CU5D_t65_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(31);
		DoubleU5BU5D_t64_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		CardboardProfile_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(28);
		Distortion_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(34);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	DoubleU5BU2CU5D_t65* V_1 = {0};
	DoubleU5BU5D_t64* V_2 = {0};
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	double V_5 = 0.0;
	double V_6 = 0.0;
	int32_t V_7 = 0;
	DoubleU5BU5D_t64* V_8 = {0};
	Distortion_t37  V_9 = {0};
	{
		int32_t L_0 = ___numSamples;
		DoubleU5BU2CU5D_t65* L_1 = (DoubleU5BU2CU5D_t65*)GenArrayNew2(DoubleU5BU2CU5D_t65_il2cpp_TypeInfo_var, L_0, 2);
		V_1 = L_1;
		int32_t L_2 = ___numSamples;
		V_2 = ((DoubleU5BU5D_t64*)SZArrayNew(DoubleU5BU5D_t64_il2cpp_TypeInfo_var, L_2));
		V_3 = 0;
		goto IL_0069;
	}

IL_0016:
	{
		float L_3 = ___maxRadius;
		int32_t L_4 = V_3;
		int32_t L_5 = ___numSamples;
		V_4 = ((float)((float)((float)((float)L_3*(float)(((float)((int32_t)((int32_t)L_4+(int32_t)1))))))/(float)(((float)L_5))));
		float L_6 = V_4;
		float L_7 = Distortion_distort_m131((&___distort), L_6, /*hidden argument*/NULL);
		V_5 = (((double)L_7));
		double L_8 = V_5;
		V_6 = L_8;
		V_7 = 0;
		goto IL_0054;
	}

IL_0039:
	{
		double L_9 = V_6;
		double L_10 = V_5;
		double L_11 = V_5;
		V_6 = ((double)((double)L_9*(double)((double)((double)L_10*(double)L_11))));
		DoubleU5BU2CU5D_t65* L_12 = V_1;
		int32_t L_13 = V_3;
		int32_t L_14 = V_7;
		double L_15 = V_6;
		NullCheck(L_12);
		GenArraySet2(L_12, L_13, L_14, L_15, double);;
		int32_t L_16 = V_7;
		V_7 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0054:
	{
		int32_t L_17 = V_7;
		if ((((int32_t)L_17) < ((int32_t)2)))
		{
			goto IL_0039;
		}
	}
	{
		DoubleU5BU5D_t64* L_18 = V_2;
		int32_t L_19 = V_3;
		float L_20 = V_4;
		double L_21 = V_5;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		*((double*)(double*)SZArrayLdElema(L_18, L_19, sizeof(double))) = (double)((double)((double)(((double)L_20))-(double)L_21));
		int32_t L_22 = V_3;
		V_3 = ((int32_t)((int32_t)L_22+(int32_t)1));
	}

IL_0069:
	{
		int32_t L_23 = V_3;
		int32_t L_24 = ___numSamples;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0016;
		}
	}
	{
		DoubleU5BU2CU5D_t65* L_25 = V_1;
		DoubleU5BU5D_t64* L_26 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(CardboardProfile_t41_il2cpp_TypeInfo_var);
		DoubleU5BU5D_t64* L_27 = CardboardProfile_solveLeastSquares_m140(NULL /*static, unused*/, L_25, L_26, /*hidden argument*/NULL);
		V_8 = L_27;
		Initobj (Distortion_t37_il2cpp_TypeInfo_var, (&V_9));
		DoubleU5BU5D_t64* L_28 = V_8;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, 0);
		int32_t L_29 = 0;
		(&V_9)->___k1_0 = (((float)(*(double*)(double*)SZArrayLdElema(L_28, L_29, sizeof(double)))));
		DoubleU5BU5D_t64* L_30 = V_8;
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, 1);
		int32_t L_31 = 1;
		(&V_9)->___k2_1 = (((float)(*(double*)(double*)SZArrayLdElema(L_30, L_31, sizeof(double)))));
		Distortion_t37  L_32 = V_9;
		return L_32;
	}
}
// <PrivateImplementationDetails>
#include "AssemblyU2DCSharp_U3CPrivateImplementationDetailsU3E.h"
// <PrivateImplementationDetails>/$ArrayType$20
#include "AssemblyU2DCSharp_U3CPrivateImplementationDetailsU3E_U24Arra.h"
// System.RuntimeFieldHandle
#include "mscorlib_System_RuntimeFieldHandle.h"
// <PrivateImplementationDetails>
#include "AssemblyU2DCSharp_U3CPrivateImplementationDetailsU3EMethodDeclarations.h"
// System.Runtime.CompilerServices.RuntimeHelpers
#include "mscorlib_System_Runtime_CompilerServices_RuntimeHelpersMethodDeclarations.h"
// System.Void CardboardUILayer::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// UnityEngine.Shader
#include "UnityEngine_UnityEngine_ShaderMethodDeclarations.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
// CardboardUILayer
#include "AssemblyU2DCSharp_CardboardUILayerMethodDeclarations.h"
extern TypeInfo* Material_t42_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral25;
extern "C" void CardboardUILayer__ctor_m143 (CardboardUILayer_t26 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Material_t42_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		_stringLiteral25 = il2cpp_codegen_string_literal_from_index(25);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m355(__this, /*hidden argument*/NULL);
		Shader_t79 * L_0 = Shader_Find_m342(NULL /*static, unused*/, _stringLiteral25, /*hidden argument*/NULL);
		Material_t42 * L_1 = (Material_t42 *)il2cpp_codegen_object_new (Material_t42_il2cpp_TypeInfo_var);
		Material__ctor_m343(L_1, L_0, /*hidden argument*/NULL);
		__this->___material_10 = L_1;
		Material_t42 * L_2 = (__this->___material_10);
		Color_t11  L_3 = {0};
		Color__ctor_m461(&L_3, (0.8f), (0.8f), (0.8f), /*hidden argument*/NULL);
		NullCheck(L_2);
		Material_set_color_m289(L_2, L_3, /*hidden argument*/NULL);
		bool L_4 = Application_get_isEditor_m393(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_004a;
		}
	}
	{
		CardboardUILayer_ComputeMatrix_m145(__this, /*hidden argument*/NULL);
	}

IL_004a:
	{
		return;
	}
}
// System.Void CardboardUILayer::.cctor()
// System.Runtime.CompilerServices.RuntimeHelpers
#include "mscorlib_System_Runtime_CompilerServices_RuntimeHelpersMethodDeclarations.h"
extern TypeInfo* SingleU5BU5D_t44_il2cpp_TypeInfo_var;
extern TypeInfo* CardboardUILayer_t26_il2cpp_TypeInfo_var;
extern FieldInfo* U3CPrivateImplementationDetailsU3E_t61____U24U24fieldU2D0_0_FieldInfo_var;
extern "C" void CardboardUILayer__cctor_m144 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SingleU5BU5D_t44_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(35);
		CardboardUILayer_t26_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		U3CPrivateImplementationDetailsU3E_t61____U24U24fieldU2D0_0_FieldInfo_var = il2cpp_codegen_field_info_from_index(37, 0);
		s_Il2CppMethodIntialized = true;
	}
	{
		SingleU5BU5D_t44* L_0 = ((SingleU5BU5D_t44*)SZArrayNew(SingleU5BU5D_t44_il2cpp_TypeInfo_var, 5));
		RuntimeHelpers_InitializeArray_m462(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, LoadFieldToken(U3CPrivateImplementationDetailsU3E_t61____U24U24fieldU2D0_0_FieldInfo_var), /*hidden argument*/NULL);
		((CardboardUILayer_t26_StaticFields*)CardboardUILayer_t26_il2cpp_TypeInfo_var->static_fields)->___Angles_9 = L_0;
		return;
	}
}
// System.Void CardboardUILayer::ComputeMatrix()
// UnityEngine.Screen
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4MethodDeclarations.h"
extern "C" void CardboardUILayer_ComputeMatrix_m145 (CardboardUILayer_t26 * __this, const MethodInfo* method)
{
	{
		float L_0 = Screen_get_dpi_m463(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___centerWidthPx_11 = ((float)((float)((float)((float)(0.025f)*(float)L_0))/(float)(2.0f)));
		float L_1 = Screen_get_dpi_m463(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___buttonWidthPx_12 = ((float)((float)((float)((float)(0.175f)*(float)L_1))/(float)(2.0f)));
		float L_2 = (__this->___buttonWidthPx_12);
		int32_t L_3 = Screen_get_width_m316(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___xScale_13 = ((float)((float)L_2/(float)(((float)L_3))));
		float L_4 = (__this->___buttonWidthPx_12);
		int32_t L_5 = Screen_get_height_m318(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___yScale_14 = ((float)((float)L_4/(float)(((float)L_5))));
		float L_6 = (__this->___yScale_14);
		Vector3_t3  L_7 = {0};
		Vector3__ctor_m351(&L_7, (0.5f), L_6, (0.0f), /*hidden argument*/NULL);
		Quaternion_t50  L_8 = Quaternion_get_identity_m443(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_9 = (__this->___xScale_13);
		float L_10 = (__this->___yScale_14);
		Vector3_t3  L_11 = {0};
		Vector3__ctor_m351(&L_11, L_9, L_10, (1.0f), /*hidden argument*/NULL);
		Matrix4x4_t43  L_12 = Matrix4x4_TRS_m464(NULL /*static, unused*/, L_7, L_8, L_11, /*hidden argument*/NULL);
		__this->___xfm_15 = L_12;
		return;
	}
}
// System.Void CardboardUILayer::Draw()
// Cardboard
#include "AssemblyU2DCSharp_CardboardMethodDeclarations.h"
// UnityEngine.GL
#include "UnityEngine_UnityEngine_GLMethodDeclarations.h"
extern TypeInfo* Cardboard_t24_il2cpp_TypeInfo_var;
extern "C" void CardboardUILayer_Draw_m146 (CardboardUILayer_t26 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Cardboard_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		Cardboard_t24 * L_0 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = Cardboard_get_NativeUILayerSupported_m71(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		Color_t11  L_2 = Color_get_black_m381(NULL /*static, unused*/, /*hidden argument*/NULL);
		GL_Clear_m326(NULL /*static, unused*/, 1, 0, L_2, /*hidden argument*/NULL);
		Material_t42 * L_3 = (__this->___material_10);
		NullCheck(L_3);
		Material_SetPass_m465(L_3, 0, /*hidden argument*/NULL);
		bool L_4 = Application_get_isEditor_m393(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0039;
		}
	}
	{
		CardboardUILayer_ComputeMatrix_m145(__this, /*hidden argument*/NULL);
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		Cardboard_t24 * L_5 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		bool L_6 = Cardboard_get_EnableAlignmentMarker_m57(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_00cc;
		}
	}
	{
		int32_t L_7 = Screen_get_width_m316(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_7/(int32_t)2));
		float L_8 = (__this->___centerWidthPx_11);
		V_1 = (((int32_t)L_8));
		float L_9 = (__this->___buttonWidthPx_12);
		V_2 = (((int32_t)((float)((float)(3.0f)*(float)L_9))));
		GL_PushMatrix_m433(NULL /*static, unused*/, /*hidden argument*/NULL);
		GL_LoadPixelMatrix_m466(NULL /*static, unused*/, /*hidden argument*/NULL);
		GL_Begin_m467(NULL /*static, unused*/, 7, /*hidden argument*/NULL);
		int32_t L_10 = V_0;
		int32_t L_11 = V_1;
		int32_t L_12 = V_2;
		GL_Vertex3_m468(NULL /*static, unused*/, (((float)((int32_t)((int32_t)L_10-(int32_t)L_11)))), (((float)L_12)), (0.0f), /*hidden argument*/NULL);
		int32_t L_13 = V_0;
		int32_t L_14 = V_1;
		int32_t L_15 = Screen_get_height_m318(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_16 = V_2;
		GL_Vertex3_m468(NULL /*static, unused*/, (((float)((int32_t)((int32_t)L_13-(int32_t)L_14)))), (((float)((int32_t)((int32_t)L_15-(int32_t)L_16)))), (0.0f), /*hidden argument*/NULL);
		int32_t L_17 = V_0;
		int32_t L_18 = V_1;
		int32_t L_19 = Screen_get_height_m318(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_20 = V_2;
		GL_Vertex3_m468(NULL /*static, unused*/, (((float)((int32_t)((int32_t)L_17+(int32_t)L_18)))), (((float)((int32_t)((int32_t)L_19-(int32_t)L_20)))), (0.0f), /*hidden argument*/NULL);
		int32_t L_21 = V_0;
		int32_t L_22 = V_1;
		int32_t L_23 = V_2;
		GL_Vertex3_m468(NULL /*static, unused*/, (((float)((int32_t)((int32_t)L_21+(int32_t)L_22)))), (((float)L_23)), (0.0f), /*hidden argument*/NULL);
		GL_End_m469(NULL /*static, unused*/, /*hidden argument*/NULL);
		GL_PopMatrix_m437(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_00cc:
	{
		return;
	}
}
// GazeInputModule
#include "AssemblyU2DCSharp_GazeInputModule.h"
// GazeInputModule
#include "AssemblyU2DCSharp_GazeInputModuleMethodDeclarations.h"
// UnityEngine.EventSystems.BaseInputModule
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseInputModule.h"
// UnityEngine.EventSystems.PointerEventData
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEventData.h"
// UnityEngine.EventSystems.EventSystem
#include "UnityEngine_UI_UnityEngine_EventSystems_EventSystem.h"
// UnityEngine.EventSystems.BaseEventData
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseEventData.h"
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_List_1_gen_0.h"
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF.h"
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_0.h"
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_1.h"
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_2.h"
// UnityEngine.EventSystems.BaseInputModule
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseInputModuleMethodDeclarations.h"
// UnityEngine.EventSystems.EventSystem
#include "UnityEngine_UI_UnityEngine_EventSystems_EventSystemMethodDeclarations.h"
// UnityEngine.EventSystems.PointerEventData
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEventDataMethodDeclarations.h"
// UnityEngine.EventSystems.BaseEventData
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseEventDataMethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResultMethodDeclarations.h"
// UnityEngine.EventSystems.ExecuteEvents
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEventsMethodDeclarations.h"
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
struct GameObject_t47;
// UnityEngine.EventSystems.ExecuteEvents
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents.h"
struct GameObject_t47;
// Declaration UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::GetEventHandler<System.Object>(UnityEngine.GameObject)
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::GetEventHandler<System.Object>(UnityEngine.GameObject)
extern "C" GameObject_t47 * ExecuteEvents_GetEventHandler_TisObject_t_m511_gshared (Object_t * __this /* static, unused */, GameObject_t47 * p0, const MethodInfo* method);
#define ExecuteEvents_GetEventHandler_TisObject_t_m511(__this /* static, unused */, p0, method) (( GameObject_t47 * (*) (Object_t * /* static, unused */, GameObject_t47 *, const MethodInfo*))ExecuteEvents_GetEventHandler_TisObject_t_m511_gshared)(__this /* static, unused */, p0, method)
// Declaration UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::GetEventHandler<UnityEngine.EventSystems.ISelectHandler>(UnityEngine.GameObject)
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::GetEventHandler<UnityEngine.EventSystems.ISelectHandler>(UnityEngine.GameObject)
#define ExecuteEvents_GetEventHandler_TisISelectHandler_t89_m486(__this /* static, unused */, p0, method) (( GameObject_t47 * (*) (Object_t * /* static, unused */, GameObject_t47 *, const MethodInfo*))ExecuteEvents_GetEventHandler_TisObject_t_m511_gshared)(__this /* static, unused */, p0, method)
struct GameObject_t47;
struct BaseEventData_t86;
struct EventFunction_1_t91;
struct GameObject_t47;
struct BaseEventData_t86;
struct EventFunction_1_t99;
// Declaration System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<System.Object>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<System.Object>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
extern "C" bool ExecuteEvents_Execute_TisObject_t_m512_gshared (Object_t * __this /* static, unused */, GameObject_t47 * p0, BaseEventData_t86 * p1, EventFunction_1_t99 * p2, const MethodInfo* method);
#define ExecuteEvents_Execute_TisObject_t_m512(__this /* static, unused */, p0, p1, p2, method) (( bool (*) (Object_t * /* static, unused */, GameObject_t47 *, BaseEventData_t86 *, EventFunction_1_t99 *, const MethodInfo*))ExecuteEvents_Execute_TisObject_t_m512_gshared)(__this /* static, unused */, p0, p1, p2, method)
// Declaration System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IUpdateSelectedHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IUpdateSelectedHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
#define ExecuteEvents_Execute_TisIUpdateSelectedHandler_t92_m489(__this /* static, unused */, p0, p1, p2, method) (( bool (*) (Object_t * /* static, unused */, GameObject_t47 *, BaseEventData_t86 *, EventFunction_1_t91 *, const MethodInfo*))ExecuteEvents_Execute_TisObject_t_m512_gshared)(__this /* static, unused */, p0, p1, p2, method)
struct GameObject_t47;
struct BaseEventData_t86;
struct EventFunction_1_t93;
// Declaration System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IPointerUpHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IPointerUpHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
#define ExecuteEvents_Execute_TisIPointerUpHandler_t94_m497(__this /* static, unused */, p0, p1, p2, method) (( bool (*) (Object_t * /* static, unused */, GameObject_t47 *, BaseEventData_t86 *, EventFunction_1_t93 *, const MethodInfo*))ExecuteEvents_Execute_TisObject_t_m512_gshared)(__this /* static, unused */, p0, p1, p2, method)
struct GameObject_t47;
struct BaseEventData_t86;
struct EventFunction_1_t95;
// Declaration System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IPointerClickHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IPointerClickHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
#define ExecuteEvents_Execute_TisIPointerClickHandler_t96_m499(__this /* static, unused */, p0, p1, p2, method) (( bool (*) (Object_t * /* static, unused */, GameObject_t47 *, BaseEventData_t86 *, EventFunction_1_t95 *, const MethodInfo*))ExecuteEvents_Execute_TisObject_t_m512_gshared)(__this /* static, unused */, p0, p1, p2, method)
struct GameObject_t47;
struct BaseEventData_t86;
struct EventFunction_1_t97;
struct GameObject_t47;
struct BaseEventData_t86;
struct EventFunction_1_t99;
// Declaration UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::ExecuteHierarchy<System.Object>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::ExecuteHierarchy<System.Object>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
extern "C" GameObject_t47 * ExecuteEvents_ExecuteHierarchy_TisObject_t_m513_gshared (Object_t * __this /* static, unused */, GameObject_t47 * p0, BaseEventData_t86 * p1, EventFunction_1_t99 * p2, const MethodInfo* method);
#define ExecuteEvents_ExecuteHierarchy_TisObject_t_m513(__this /* static, unused */, p0, p1, p2, method) (( GameObject_t47 * (*) (Object_t * /* static, unused */, GameObject_t47 *, BaseEventData_t86 *, EventFunction_1_t99 *, const MethodInfo*))ExecuteEvents_ExecuteHierarchy_TisObject_t_m513_gshared)(__this /* static, unused */, p0, p1, p2, method)
// Declaration UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::ExecuteHierarchy<UnityEngine.EventSystems.IPointerDownHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::ExecuteHierarchy<UnityEngine.EventSystems.IPointerDownHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
#define ExecuteEvents_ExecuteHierarchy_TisIPointerDownHandler_t98_m508(__this /* static, unused */, p0, p1, p2, method) (( GameObject_t47 * (*) (Object_t * /* static, unused */, GameObject_t47 *, BaseEventData_t86 *, EventFunction_1_t97 *, const MethodInfo*))ExecuteEvents_ExecuteHierarchy_TisObject_t_m513_gshared)(__this /* static, unused */, p0, p1, p2, method)
struct GameObject_t47;
// Declaration UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::GetEventHandler<UnityEngine.EventSystems.IPointerClickHandler>(UnityEngine.GameObject)
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::GetEventHandler<UnityEngine.EventSystems.IPointerClickHandler>(UnityEngine.GameObject)
#define ExecuteEvents_GetEventHandler_TisIPointerClickHandler_t96_m509(__this /* static, unused */, p0, method) (( GameObject_t47 * (*) (Object_t * /* static, unused */, GameObject_t47 *, const MethodInfo*))ExecuteEvents_GetEventHandler_TisObject_t_m511_gshared)(__this /* static, unused */, p0, method)
// System.Void GazeInputModule::.ctor()
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// UnityEngine.EventSystems.BaseInputModule
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseInputModuleMethodDeclarations.h"
extern "C" void GazeInputModule__ctor_m147 (GazeInputModule_t45 * __this, const MethodInfo* method)
{
	{
		__this->___clickTime_8 = (0.1f);
		Vector2_t15  L_0 = {0};
		Vector2__ctor_m337(&L_0, (0.5f), (0.5f), /*hidden argument*/NULL);
		__this->___hotspot_9 = L_0;
		BaseInputModule__ctor_m470(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean GazeInputModule::ShouldActivateModule()
// Cardboard
#include "AssemblyU2DCSharp_CardboardMethodDeclarations.h"
extern TypeInfo* Cardboard_t24_il2cpp_TypeInfo_var;
extern "C" bool GazeInputModule_ShouldActivateModule_m148 (GazeInputModule_t45 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Cardboard_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B5_0 = 0;
	{
		bool L_0 = BaseInputModule_ShouldActivateModule_m471(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		Cardboard_t24 * L_1 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = Cardboard_get_VRModeEnabled_m55(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0027;
		}
	}
	{
		bool L_3 = (__this->___vrModeOnly_6);
		G_B5_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0028;
	}

IL_0027:
	{
		G_B5_0 = 1;
	}

IL_0028:
	{
		return G_B5_0;
	}
}
// System.Void GazeInputModule::DeactivateModule()
// GazeInputModule
#include "AssemblyU2DCSharp_GazeInputModuleMethodDeclarations.h"
// UnityEngine.EventSystems.EventSystem
#include "UnityEngine_UI_UnityEngine_EventSystems_EventSystemMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
extern "C" void GazeInputModule_DeactivateModule_m149 (GazeInputModule_t45 * __this, const MethodInfo* method)
{
	{
		BaseInputModule_DeactivateModule_m472(__this, /*hidden argument*/NULL);
		PointerEventData_t48 * L_0 = (__this->___pointerData_10);
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		GazeInputModule_HandlePendingClick_m155(__this, /*hidden argument*/NULL);
		PointerEventData_t48 * L_1 = (__this->___pointerData_10);
		BaseInputModule_HandlePointerExitAndEnter_m473(__this, L_1, (GameObject_t47 *)NULL, /*hidden argument*/NULL);
		__this->___pointerData_10 = (PointerEventData_t48 *)NULL;
	}

IL_002b:
	{
		EventSystem_t85 * L_2 = BaseInputModule_get_eventSystem_m474(__this, /*hidden argument*/NULL);
		BaseEventData_t86 * L_3 = (BaseEventData_t86 *)VirtFuncInvoker0< BaseEventData_t86 * >::Invoke(18 /* UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::GetBaseEventData() */, __this);
		NullCheck(L_2);
		EventSystem_SetSelectedGameObject_m475(L_2, (GameObject_t47 *)NULL, L_3, /*hidden argument*/NULL);
		GameObject_t47 * L_4 = (__this->___cursor_7);
		bool L_5 = Object_op_Inequality_m312(NULL /*static, unused*/, L_4, (Object_t75 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_005a;
		}
	}
	{
		GameObject_t47 * L_6 = (__this->___cursor_7);
		NullCheck(L_6);
		GameObject_SetActive_m476(L_6, 0, /*hidden argument*/NULL);
	}

IL_005a:
	{
		return;
	}
}
// System.Boolean GazeInputModule::IsPointerOverGameObject(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.EventSystems.PointerEventData
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEventDataMethodDeclarations.h"
extern "C" bool GazeInputModule_IsPointerOverGameObject_m150 (GazeInputModule_t45 * __this, int32_t ___pointerId, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		PointerEventData_t48 * L_0 = (__this->___pointerData_10);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		PointerEventData_t48 * L_1 = (__this->___pointerData_10);
		NullCheck(L_1);
		GameObject_t47 * L_2 = PointerEventData_get_pointerEnter_m477(L_1, /*hidden argument*/NULL);
		bool L_3 = Object_op_Inequality_m312(NULL /*static, unused*/, L_2, (Object_t75 *)NULL, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 0;
	}

IL_001f:
	{
		return G_B3_0;
	}
}
// System.Void GazeInputModule::Process()
extern "C" void GazeInputModule_Process_m151 (GazeInputModule_t45 * __this, const MethodInfo* method)
{
	{
		GazeInputModule_CastRayFromGaze_m152(__this, /*hidden argument*/NULL);
		GazeInputModule_UpdateCurrentObject_m153(__this, /*hidden argument*/NULL);
		GazeInputModule_PlaceCursor_m154(__this, /*hidden argument*/NULL);
		GazeInputModule_HandlePendingClick_m155(__this, /*hidden argument*/NULL);
		GazeInputModule_HandleTrigger_m156(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GazeInputModule::CastRayFromGaze()
// UnityEngine.EventSystems.BaseEventData
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseEventDataMethodDeclarations.h"
// UnityEngine.Screen
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"
extern TypeInfo* PointerEventData_t48_il2cpp_TypeInfo_var;
extern "C" void GazeInputModule_CastRayFromGaze_m152 (GazeInputModule_t45 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PointerEventData_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(38);
		s_Il2CppMethodIntialized = true;
	}
	{
		PointerEventData_t48 * L_0 = (__this->___pointerData_10);
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		EventSystem_t85 * L_1 = BaseInputModule_get_eventSystem_m474(__this, /*hidden argument*/NULL);
		PointerEventData_t48 * L_2 = (PointerEventData_t48 *)il2cpp_codegen_object_new (PointerEventData_t48_il2cpp_TypeInfo_var);
		PointerEventData__ctor_m478(L_2, L_1, /*hidden argument*/NULL);
		__this->___pointerData_10 = L_2;
	}

IL_001c:
	{
		PointerEventData_t48 * L_3 = (__this->___pointerData_10);
		NullCheck(L_3);
		BaseEventData_Reset_m479(L_3, /*hidden argument*/NULL);
		PointerEventData_t48 * L_4 = (__this->___pointerData_10);
		Vector2_t15 * L_5 = &(__this->___hotspot_9);
		float L_6 = (L_5->___x_1);
		int32_t L_7 = Screen_get_width_m316(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t15 * L_8 = &(__this->___hotspot_9);
		float L_9 = (L_8->___y_2);
		int32_t L_10 = Screen_get_height_m318(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t15  L_11 = {0};
		Vector2__ctor_m337(&L_11, ((float)((float)L_6*(float)(((float)L_7)))), ((float)((float)L_9*(float)(((float)L_10)))), /*hidden argument*/NULL);
		NullCheck(L_4);
		PointerEventData_set_position_m480(L_4, L_11, /*hidden argument*/NULL);
		EventSystem_t85 * L_12 = BaseInputModule_get_eventSystem_m474(__this, /*hidden argument*/NULL);
		PointerEventData_t48 * L_13 = (__this->___pointerData_10);
		List_1_t87 * L_14 = (((BaseInputModule_t46 *)__this)->___m_RaycastResultCache_2);
		NullCheck(L_12);
		EventSystem_RaycastAll_m481(L_12, L_13, L_14, /*hidden argument*/NULL);
		PointerEventData_t48 * L_15 = (__this->___pointerData_10);
		List_1_t87 * L_16 = (((BaseInputModule_t46 *)__this)->___m_RaycastResultCache_2);
		RaycastResult_t88  L_17 = BaseInputModule_FindFirstRaycast_m482(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		PointerEventData_set_pointerCurrentRaycast_m483(L_15, L_17, /*hidden argument*/NULL);
		List_1_t87 * L_18 = (((BaseInputModule_t46 *)__this)->___m_RaycastResultCache_2);
		NullCheck(L_18);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Clear() */, L_18);
		return;
	}
}
// System.Void GazeInputModule::UpdateCurrentObject()
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResultMethodDeclarations.h"
// UnityEngine.EventSystems.ExecuteEvents
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEventsMethodDeclarations.h"
extern TypeInfo* ExecuteEvents_t90_il2cpp_TypeInfo_var;
extern const MethodInfo* ExecuteEvents_GetEventHandler_TisISelectHandler_t89_m486_MethodInfo_var;
extern const MethodInfo* ExecuteEvents_Execute_TisIUpdateSelectedHandler_t92_m489_MethodInfo_var;
extern "C" void GazeInputModule_UpdateCurrentObject_m153 (GazeInputModule_t45 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExecuteEvents_t90_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(41);
		ExecuteEvents_GetEventHandler_TisISelectHandler_t89_m486_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483668);
		ExecuteEvents_Execute_TisIUpdateSelectedHandler_t92_m489_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483669);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t47 * V_0 = {0};
	GameObject_t47 * V_1 = {0};
	RaycastResult_t88  V_2 = {0};
	{
		PointerEventData_t48 * L_0 = (__this->___pointerData_10);
		NullCheck(L_0);
		RaycastResult_t88  L_1 = PointerEventData_get_pointerCurrentRaycast_m484(L_0, /*hidden argument*/NULL);
		V_2 = L_1;
		GameObject_t47 * L_2 = RaycastResult_get_gameObject_m485((&V_2), /*hidden argument*/NULL);
		V_0 = L_2;
		PointerEventData_t48 * L_3 = (__this->___pointerData_10);
		GameObject_t47 * L_4 = V_0;
		BaseInputModule_HandlePointerExitAndEnter_m473(__this, L_3, L_4, /*hidden argument*/NULL);
		GameObject_t47 * L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t90_il2cpp_TypeInfo_var);
		GameObject_t47 * L_6 = ExecuteEvents_GetEventHandler_TisISelectHandler_t89_m486(NULL /*static, unused*/, L_5, /*hidden argument*/ExecuteEvents_GetEventHandler_TisISelectHandler_t89_m486_MethodInfo_var);
		V_1 = L_6;
		GameObject_t47 * L_7 = V_1;
		EventSystem_t85 * L_8 = BaseInputModule_get_eventSystem_m474(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		GameObject_t47 * L_9 = EventSystem_get_currentSelectedGameObject_m487(L_8, /*hidden argument*/NULL);
		bool L_10 = Object_op_Equality_m305(NULL /*static, unused*/, L_7, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_005f;
		}
	}
	{
		EventSystem_t85 * L_11 = BaseInputModule_get_eventSystem_m474(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		GameObject_t47 * L_12 = EventSystem_get_currentSelectedGameObject_m487(L_11, /*hidden argument*/NULL);
		BaseEventData_t86 * L_13 = (BaseEventData_t86 *)VirtFuncInvoker0< BaseEventData_t86 * >::Invoke(18 /* UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::GetBaseEventData() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t90_il2cpp_TypeInfo_var);
		EventFunction_1_t91 * L_14 = ExecuteEvents_get_updateSelectedHandler_m488(NULL /*static, unused*/, /*hidden argument*/NULL);
		ExecuteEvents_Execute_TisIUpdateSelectedHandler_t92_m489(NULL /*static, unused*/, L_12, L_13, L_14, /*hidden argument*/ExecuteEvents_Execute_TisIUpdateSelectedHandler_t92_m489_MethodInfo_var);
		goto IL_0071;
	}

IL_005f:
	{
		EventSystem_t85 * L_15 = BaseInputModule_get_eventSystem_m474(__this, /*hidden argument*/NULL);
		PointerEventData_t48 * L_16 = (__this->___pointerData_10);
		NullCheck(L_15);
		EventSystem_SetSelectedGameObject_m475(L_15, (GameObject_t47 *)NULL, L_16, /*hidden argument*/NULL);
	}

IL_0071:
	{
		return;
	}
}
// System.Void GazeInputModule::PlaceCursor()
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
extern "C" void GazeInputModule_PlaceCursor_m154 (GazeInputModule_t45 * __this, const MethodInfo* method)
{
	GameObject_t47 * V_0 = {0};
	Camera_t32 * V_1 = {0};
	float V_2 = 0.0f;
	RaycastResult_t88  V_3 = {0};
	RaycastResult_t88  V_4 = {0};
	{
		GameObject_t47 * L_0 = (__this->___cursor_7);
		bool L_1 = Object_op_Equality_m305(NULL /*static, unused*/, L_0, (Object_t75 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		PointerEventData_t48 * L_2 = (__this->___pointerData_10);
		NullCheck(L_2);
		RaycastResult_t88  L_3 = PointerEventData_get_pointerCurrentRaycast_m484(L_2, /*hidden argument*/NULL);
		V_3 = L_3;
		GameObject_t47 * L_4 = RaycastResult_get_gameObject_m485((&V_3), /*hidden argument*/NULL);
		V_0 = L_4;
		GameObject_t47 * L_5 = (__this->___cursor_7);
		GameObject_t47 * L_6 = V_0;
		bool L_7 = Object_op_Inequality_m312(NULL /*static, unused*/, L_6, (Object_t75 *)NULL, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_m476(L_5, L_7, /*hidden argument*/NULL);
		GameObject_t47 * L_8 = (__this->___cursor_7);
		NullCheck(L_8);
		bool L_9 = GameObject_get_activeInHierarchy_m308(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_00a1;
		}
	}
	{
		PointerEventData_t48 * L_10 = (__this->___pointerData_10);
		NullCheck(L_10);
		Camera_t32 * L_11 = PointerEventData_get_enterEventCamera_m490(L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		PointerEventData_t48 * L_12 = (__this->___pointerData_10);
		NullCheck(L_12);
		RaycastResult_t88  L_13 = PointerEventData_get_pointerCurrentRaycast_m484(L_12, /*hidden argument*/NULL);
		V_4 = L_13;
		float L_14 = ((&V_4)->___distance_2);
		Camera_t32 * L_15 = V_1;
		NullCheck(L_15);
		float L_16 = Camera_get_nearClipPlane_m412(L_15, /*hidden argument*/NULL);
		V_2 = ((float)((float)L_14+(float)L_16));
		GameObject_t47 * L_17 = (__this->___cursor_7);
		NullCheck(L_17);
		Transform_t33 * L_18 = GameObject_get_transform_m361(L_17, /*hidden argument*/NULL);
		Camera_t32 * L_19 = V_1;
		NullCheck(L_19);
		Transform_t33 * L_20 = Component_get_transform_m283(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		Vector3_t3  L_21 = Transform_get_position_m450(L_20, /*hidden argument*/NULL);
		Camera_t32 * L_22 = V_1;
		NullCheck(L_22);
		Transform_t33 * L_23 = Component_get_transform_m283(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		Vector3_t3  L_24 = Transform_get_forward_m451(L_23, /*hidden argument*/NULL);
		float L_25 = V_2;
		Vector3_t3  L_26 = Vector3_op_Multiply_m294(NULL /*static, unused*/, L_24, L_25, /*hidden argument*/NULL);
		Vector3_t3  L_27 = Vector3_op_Addition_m411(NULL /*static, unused*/, L_21, L_26, /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_set_position_m457(L_18, L_27, /*hidden argument*/NULL);
	}

IL_00a1:
	{
		return;
	}
}
// System.Void GazeInputModule::HandlePendingClick()
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
extern TypeInfo* Cardboard_t24_il2cpp_TypeInfo_var;
extern TypeInfo* Input_t83_il2cpp_TypeInfo_var;
extern TypeInfo* ExecuteEvents_t90_il2cpp_TypeInfo_var;
extern const MethodInfo* ExecuteEvents_Execute_TisIPointerUpHandler_t94_m497_MethodInfo_var;
extern const MethodInfo* ExecuteEvents_Execute_TisIPointerClickHandler_t96_m499_MethodInfo_var;
extern "C" void GazeInputModule_HandlePendingClick_m155 (GazeInputModule_t45 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Cardboard_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		Input_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		ExecuteEvents_t90_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(41);
		ExecuteEvents_Execute_TisIPointerUpHandler_t94_m497_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483670);
		ExecuteEvents_Execute_TisIPointerClickHandler_t96_m499_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483671);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	bool G_B8_0 = false;
	bool G_B7_0 = false;
	int32_t G_B9_0 = 0;
	bool G_B9_1 = false;
	{
		PointerEventData_t48 * L_0 = (__this->___pointerData_10);
		NullCheck(L_0);
		bool L_1 = PointerEventData_get_eligibleForClick_m491(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		Cardboard_t24 * L_2 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3 = Cardboard_get_Triggered_m84(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_003b;
		}
	}
	{
		float L_4 = Time_get_unscaledTime_m492(NULL /*static, unused*/, /*hidden argument*/NULL);
		PointerEventData_t48 * L_5 = (__this->___pointerData_10);
		NullCheck(L_5);
		float L_6 = PointerEventData_get_clickTime_m493(L_5, /*hidden argument*/NULL);
		float L_7 = (__this->___clickTime_8);
		G_B5_0 = ((((float)((float)((float)L_4-(float)L_6))) < ((float)L_7))? 1 : 0);
		goto IL_003c;
	}

IL_003b:
	{
		G_B5_0 = 0;
	}

IL_003c:
	{
		V_0 = G_B5_0;
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		Cardboard_t24 * L_8 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		bool L_9 = Cardboard_get_TapIsTrigger_m61(L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0063;
		}
	}
	{
		bool L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t83_il2cpp_TypeInfo_var);
		bool L_11 = Input_GetMouseButtonDown_m374(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		G_B7_0 = L_10;
		if (L_11)
		{
			G_B8_0 = L_10;
			goto IL_0060;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t83_il2cpp_TypeInfo_var);
		bool L_12 = Input_GetMouseButton_m494(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		G_B9_0 = ((int32_t)(L_12));
		G_B9_1 = G_B7_0;
		goto IL_0061;
	}

IL_0060:
	{
		G_B9_0 = 0;
		G_B9_1 = G_B8_0;
	}

IL_0061:
	{
		V_0 = ((int32_t)((int32_t)G_B9_1|(int32_t)G_B9_0));
	}

IL_0063:
	{
		bool L_13 = V_0;
		if (!L_13)
		{
			goto IL_006a;
		}
	}
	{
		return;
	}

IL_006a:
	{
		PointerEventData_t48 * L_14 = (__this->___pointerData_10);
		NullCheck(L_14);
		GameObject_t47 * L_15 = PointerEventData_get_pointerPress_m495(L_14, /*hidden argument*/NULL);
		PointerEventData_t48 * L_16 = (__this->___pointerData_10);
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t90_il2cpp_TypeInfo_var);
		EventFunction_1_t93 * L_17 = ExecuteEvents_get_pointerUpHandler_m496(NULL /*static, unused*/, /*hidden argument*/NULL);
		ExecuteEvents_Execute_TisIPointerUpHandler_t94_m497(NULL /*static, unused*/, L_15, L_16, L_17, /*hidden argument*/ExecuteEvents_Execute_TisIPointerUpHandler_t94_m497_MethodInfo_var);
		PointerEventData_t48 * L_18 = (__this->___pointerData_10);
		NullCheck(L_18);
		GameObject_t47 * L_19 = PointerEventData_get_pointerPress_m495(L_18, /*hidden argument*/NULL);
		PointerEventData_t48 * L_20 = (__this->___pointerData_10);
		EventFunction_1_t95 * L_21 = ExecuteEvents_get_pointerClickHandler_m498(NULL /*static, unused*/, /*hidden argument*/NULL);
		ExecuteEvents_Execute_TisIPointerClickHandler_t96_m499(NULL /*static, unused*/, L_19, L_20, L_21, /*hidden argument*/ExecuteEvents_Execute_TisIPointerClickHandler_t96_m499_MethodInfo_var);
		PointerEventData_t48 * L_22 = (__this->___pointerData_10);
		NullCheck(L_22);
		PointerEventData_set_pointerPress_m500(L_22, (GameObject_t47 *)NULL, /*hidden argument*/NULL);
		PointerEventData_t48 * L_23 = (__this->___pointerData_10);
		NullCheck(L_23);
		PointerEventData_set_rawPointerPress_m501(L_23, (GameObject_t47 *)NULL, /*hidden argument*/NULL);
		PointerEventData_t48 * L_24 = (__this->___pointerData_10);
		NullCheck(L_24);
		PointerEventData_set_eligibleForClick_m502(L_24, 0, /*hidden argument*/NULL);
		PointerEventData_t48 * L_25 = (__this->___pointerData_10);
		NullCheck(L_25);
		PointerEventData_set_clickCount_m503(L_25, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GazeInputModule::HandleTrigger()
extern TypeInfo* Cardboard_t24_il2cpp_TypeInfo_var;
extern TypeInfo* Input_t83_il2cpp_TypeInfo_var;
extern TypeInfo* ExecuteEvents_t90_il2cpp_TypeInfo_var;
extern const MethodInfo* ExecuteEvents_ExecuteHierarchy_TisIPointerDownHandler_t98_m508_MethodInfo_var;
extern const MethodInfo* ExecuteEvents_GetEventHandler_TisIPointerClickHandler_t96_m509_MethodInfo_var;
extern "C" void GazeInputModule_HandleTrigger_m156 (GazeInputModule_t45 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Cardboard_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		Input_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		ExecuteEvents_t90_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(41);
		ExecuteEvents_ExecuteHierarchy_TisIPointerDownHandler_t98_m508_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483672);
		ExecuteEvents_GetEventHandler_TisIPointerClickHandler_t96_m509_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483673);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	GameObject_t47 * V_1 = {0};
	RaycastResult_t88  V_2 = {0};
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	GameObject_t47 * G_B10_0 = {0};
	PointerEventData_t48 * G_B10_1 = {0};
	GameObject_t47 * G_B9_0 = {0};
	PointerEventData_t48 * G_B9_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		Cardboard_t24 * L_0 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = Cardboard_get_Triggered_m84(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0029;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		Cardboard_t24 * L_2 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3 = Cardboard_get_TapIsTrigger_m61(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0026;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t83_il2cpp_TypeInfo_var);
		bool L_4 = Input_GetMouseButtonDown_m374(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)(L_4));
		goto IL_0027;
	}

IL_0026:
	{
		G_B4_0 = 0;
	}

IL_0027:
	{
		G_B6_0 = G_B4_0;
		goto IL_002a;
	}

IL_0029:
	{
		G_B6_0 = 1;
	}

IL_002a:
	{
		V_0 = G_B6_0;
		bool L_5 = V_0;
		if (L_5)
		{
			goto IL_0032;
		}
	}
	{
		return;
	}

IL_0032:
	{
		PointerEventData_t48 * L_6 = (__this->___pointerData_10);
		NullCheck(L_6);
		RaycastResult_t88  L_7 = PointerEventData_get_pointerCurrentRaycast_m484(L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		GameObject_t47 * L_8 = RaycastResult_get_gameObject_m485((&V_2), /*hidden argument*/NULL);
		V_1 = L_8;
		PointerEventData_t48 * L_9 = (__this->___pointerData_10);
		PointerEventData_t48 * L_10 = (__this->___pointerData_10);
		NullCheck(L_10);
		Vector2_t15  L_11 = PointerEventData_get_position_m504(L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		PointerEventData_set_pressPosition_m505(L_9, L_11, /*hidden argument*/NULL);
		PointerEventData_t48 * L_12 = (__this->___pointerData_10);
		PointerEventData_t48 * L_13 = (__this->___pointerData_10);
		NullCheck(L_13);
		RaycastResult_t88  L_14 = PointerEventData_get_pointerCurrentRaycast_m484(L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		PointerEventData_set_pointerPressRaycast_m506(L_12, L_14, /*hidden argument*/NULL);
		PointerEventData_t48 * L_15 = (__this->___pointerData_10);
		GameObject_t47 * L_16 = V_1;
		PointerEventData_t48 * L_17 = (__this->___pointerData_10);
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t90_il2cpp_TypeInfo_var);
		EventFunction_1_t97 * L_18 = ExecuteEvents_get_pointerDownHandler_m507(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameObject_t47 * L_19 = ExecuteEvents_ExecuteHierarchy_TisIPointerDownHandler_t98_m508(NULL /*static, unused*/, L_16, L_17, L_18, /*hidden argument*/ExecuteEvents_ExecuteHierarchy_TisIPointerDownHandler_t98_m508_MethodInfo_var);
		GameObject_t47 * L_20 = L_19;
		G_B9_0 = L_20;
		G_B9_1 = L_15;
		if (L_20)
		{
			G_B10_0 = L_20;
			G_B10_1 = L_15;
			goto IL_0096;
		}
	}
	{
		GameObject_t47 * L_21 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t90_il2cpp_TypeInfo_var);
		GameObject_t47 * L_22 = ExecuteEvents_GetEventHandler_TisIPointerClickHandler_t96_m509(NULL /*static, unused*/, L_21, /*hidden argument*/ExecuteEvents_GetEventHandler_TisIPointerClickHandler_t96_m509_MethodInfo_var);
		G_B10_0 = L_22;
		G_B10_1 = G_B9_1;
	}

IL_0096:
	{
		NullCheck(G_B10_1);
		PointerEventData_set_pointerPress_m500(G_B10_1, G_B10_0, /*hidden argument*/NULL);
		PointerEventData_t48 * L_23 = (__this->___pointerData_10);
		GameObject_t47 * L_24 = V_1;
		NullCheck(L_23);
		PointerEventData_set_rawPointerPress_m501(L_23, L_24, /*hidden argument*/NULL);
		PointerEventData_t48 * L_25 = (__this->___pointerData_10);
		NullCheck(L_25);
		PointerEventData_set_eligibleForClick_m502(L_25, 1, /*hidden argument*/NULL);
		PointerEventData_t48 * L_26 = (__this->___pointerData_10);
		NullCheck(L_26);
		PointerEventData_set_clickCount_m503(L_26, 1, /*hidden argument*/NULL);
		PointerEventData_t48 * L_27 = (__this->___pointerData_10);
		float L_28 = Time_get_unscaledTime_m492(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_27);
		PointerEventData_set_clickTime_m510(L_27, L_28, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Pose3D::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// Pose3D
#include "AssemblyU2DCSharp_Pose3DMethodDeclarations.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4MethodDeclarations.h"
extern "C" void Pose3D__ctor_m157 (Pose3D_t49 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m355(__this, /*hidden argument*/NULL);
		Vector3_t3  L_0 = Vector3_get_zero_m362(NULL /*static, unused*/, /*hidden argument*/NULL);
		Pose3D_set_Position_m162(__this, L_0, /*hidden argument*/NULL);
		Quaternion_t50  L_1 = Quaternion_get_identity_m443(NULL /*static, unused*/, /*hidden argument*/NULL);
		Pose3D_set_Orientation_m164(__this, L_1, /*hidden argument*/NULL);
		Matrix4x4_t43  L_2 = Matrix4x4_get_identity_m514(NULL /*static, unused*/, /*hidden argument*/NULL);
		Pose3D_set_Matrix_m166(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Pose3D::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
extern "C" void Pose3D__ctor_m158 (Pose3D_t49 * __this, Vector3_t3  ___position, Quaternion_t50  ___orientation, const MethodInfo* method)
{
	{
		Object__ctor_m355(__this, /*hidden argument*/NULL);
		Vector3_t3  L_0 = ___position;
		Quaternion_t50  L_1 = ___orientation;
		Pose3D_Set_m168(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Pose3D::.ctor(UnityEngine.Matrix4x4)
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
extern "C" void Pose3D__ctor_m159 (Pose3D_t49 * __this, Matrix4x4_t43  ___matrix, const MethodInfo* method)
{
	{
		Object__ctor_m355(__this, /*hidden argument*/NULL);
		Matrix4x4_t43  L_0 = ___matrix;
		Pose3D_Set_m169(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Pose3D::.cctor()
extern TypeInfo* Pose3D_t49_il2cpp_TypeInfo_var;
extern "C" void Pose3D__cctor_m160 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Pose3D_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(45);
		s_Il2CppMethodIntialized = true;
	}
	{
		Vector3_t3  L_0 = {0};
		Vector3__ctor_m351(&L_0, (1.0f), (1.0f), (-1.0f), /*hidden argument*/NULL);
		Matrix4x4_t43  L_1 = Matrix4x4_Scale_m515(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		((Pose3D_t49_StaticFields*)Pose3D_t49_il2cpp_TypeInfo_var->static_fields)->___flipZ_0 = L_1;
		return;
	}
}
// UnityEngine.Vector3 Pose3D::get_Position()
extern "C" Vector3_t3  Pose3D_get_Position_m161 (Pose3D_t49 * __this, const MethodInfo* method)
{
	{
		Vector3_t3  L_0 = (__this->___U3CPositionU3Ek__BackingField_1);
		return L_0;
	}
}
// System.Void Pose3D::set_Position(UnityEngine.Vector3)
extern "C" void Pose3D_set_Position_m162 (Pose3D_t49 * __this, Vector3_t3  ___value, const MethodInfo* method)
{
	{
		Vector3_t3  L_0 = ___value;
		__this->___U3CPositionU3Ek__BackingField_1 = L_0;
		return;
	}
}
// UnityEngine.Quaternion Pose3D::get_Orientation()
extern "C" Quaternion_t50  Pose3D_get_Orientation_m163 (Pose3D_t49 * __this, const MethodInfo* method)
{
	{
		Quaternion_t50  L_0 = (__this->___U3COrientationU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Void Pose3D::set_Orientation(UnityEngine.Quaternion)
extern "C" void Pose3D_set_Orientation_m164 (Pose3D_t49 * __this, Quaternion_t50  ___value, const MethodInfo* method)
{
	{
		Quaternion_t50  L_0 = ___value;
		__this->___U3COrientationU3Ek__BackingField_2 = L_0;
		return;
	}
}
// UnityEngine.Matrix4x4 Pose3D::get_Matrix()
extern "C" Matrix4x4_t43  Pose3D_get_Matrix_m165 (Pose3D_t49 * __this, const MethodInfo* method)
{
	{
		Matrix4x4_t43  L_0 = (__this->___U3CMatrixU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void Pose3D::set_Matrix(UnityEngine.Matrix4x4)
extern "C" void Pose3D_set_Matrix_m166 (Pose3D_t49 * __this, Matrix4x4_t43  ___value, const MethodInfo* method)
{
	{
		Matrix4x4_t43  L_0 = ___value;
		__this->___U3CMatrixU3Ek__BackingField_3 = L_0;
		return;
	}
}
// UnityEngine.Matrix4x4 Pose3D::get_RightHandedMatrix()
extern TypeInfo* Pose3D_t49_il2cpp_TypeInfo_var;
extern "C" Matrix4x4_t43  Pose3D_get_RightHandedMatrix_m167 (Pose3D_t49 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Pose3D_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(45);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Pose3D_t49_il2cpp_TypeInfo_var);
		Matrix4x4_t43  L_0 = ((Pose3D_t49_StaticFields*)Pose3D_t49_il2cpp_TypeInfo_var->static_fields)->___flipZ_0;
		Matrix4x4_t43  L_1 = Pose3D_get_Matrix_m165(__this, /*hidden argument*/NULL);
		Matrix4x4_t43  L_2 = Matrix4x4_op_Multiply_m516(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		Matrix4x4_t43  L_3 = ((Pose3D_t49_StaticFields*)Pose3D_t49_il2cpp_TypeInfo_var->static_fields)->___flipZ_0;
		Matrix4x4_t43  L_4 = Matrix4x4_op_Multiply_m516(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void Pose3D::Set(UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" void Pose3D_Set_m168 (Pose3D_t49 * __this, Vector3_t3  ___position, Quaternion_t50  ___orientation, const MethodInfo* method)
{
	{
		Vector3_t3  L_0 = ___position;
		Pose3D_set_Position_m162(__this, L_0, /*hidden argument*/NULL);
		Quaternion_t50  L_1 = ___orientation;
		Pose3D_set_Orientation_m164(__this, L_1, /*hidden argument*/NULL);
		Vector3_t3  L_2 = ___position;
		Quaternion_t50  L_3 = ___orientation;
		Vector3_t3  L_4 = Vector3_get_one_m445(NULL /*static, unused*/, /*hidden argument*/NULL);
		Matrix4x4_t43  L_5 = Matrix4x4_TRS_m464(NULL /*static, unused*/, L_2, L_3, L_4, /*hidden argument*/NULL);
		Pose3D_set_Matrix_m166(__this, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Pose3D::Set(UnityEngine.Matrix4x4)
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
extern "C" void Pose3D_Set_m169 (Pose3D_t49 * __this, Matrix4x4_t43  ___matrix, const MethodInfo* method)
{
	{
		Matrix4x4_t43  L_0 = ___matrix;
		Pose3D_set_Matrix_m166(__this, L_0, /*hidden argument*/NULL);
		Vector4_t84  L_1 = Matrix4x4_GetColumn_m517((&___matrix), 3, /*hidden argument*/NULL);
		Vector3_t3  L_2 = Vector4_op_Implicit_m518(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		Pose3D_set_Position_m162(__this, L_2, /*hidden argument*/NULL);
		Vector4_t84  L_3 = Matrix4x4_GetColumn_m517((&___matrix), 2, /*hidden argument*/NULL);
		Vector3_t3  L_4 = Vector4_op_Implicit_m518(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		Vector4_t84  L_5 = Matrix4x4_GetColumn_m517((&___matrix), 1, /*hidden argument*/NULL);
		Vector3_t3  L_6 = Vector4_op_Implicit_m518(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		Quaternion_t50  L_7 = Quaternion_LookRotation_m519(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		Pose3D_set_Orientation_m164(__this, L_7, /*hidden argument*/NULL);
		return;
	}
}
// MutablePose3D
#include "AssemblyU2DCSharp_MutablePose3D.h"
// MutablePose3D
#include "AssemblyU2DCSharp_MutablePose3DMethodDeclarations.h"
// System.Void MutablePose3D::.ctor()
// Pose3D
#include "AssemblyU2DCSharp_Pose3DMethodDeclarations.h"
extern TypeInfo* Pose3D_t49_il2cpp_TypeInfo_var;
extern "C" void MutablePose3D__ctor_m170 (MutablePose3D_t51 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Pose3D_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(45);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Pose3D_t49_il2cpp_TypeInfo_var);
		Pose3D__ctor_m157(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MutablePose3D::Set(UnityEngine.Vector3,UnityEngine.Quaternion)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
extern "C" void MutablePose3D_Set_m171 (MutablePose3D_t51 * __this, Vector3_t3  ___position, Quaternion_t50  ___orientation, const MethodInfo* method)
{
	{
		Vector3_t3  L_0 = ___position;
		Quaternion_t50  L_1 = ___orientation;
		Pose3D_Set_m168(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MutablePose3D::Set(UnityEngine.Matrix4x4)
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
extern "C" void MutablePose3D_Set_m172 (MutablePose3D_t51 * __this, Matrix4x4_t43  ___matrix, const MethodInfo* method)
{
	{
		Matrix4x4_t43  L_0 = ___matrix;
		Pose3D_Set_m169(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MutablePose3D::SetRightHanded(UnityEngine.Matrix4x4)
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4MethodDeclarations.h"
// MutablePose3D
#include "AssemblyU2DCSharp_MutablePose3DMethodDeclarations.h"
extern TypeInfo* Pose3D_t49_il2cpp_TypeInfo_var;
extern "C" void MutablePose3D_SetRightHanded_m173 (MutablePose3D_t51 * __this, Matrix4x4_t43  ___matrix, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Pose3D_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(45);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Pose3D_t49_il2cpp_TypeInfo_var);
		Matrix4x4_t43  L_0 = ((Pose3D_t49_StaticFields*)Pose3D_t49_il2cpp_TypeInfo_var->static_fields)->___flipZ_0;
		Matrix4x4_t43  L_1 = ___matrix;
		Matrix4x4_t43  L_2 = Matrix4x4_op_Multiply_m516(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		Matrix4x4_t43  L_3 = ((Pose3D_t49_StaticFields*)Pose3D_t49_il2cpp_TypeInfo_var->static_fields)->___flipZ_0;
		Matrix4x4_t43  L_4 = Matrix4x4_op_Multiply_m516(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		MutablePose3D_Set_m172(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// RadialUndistortionEffect
#include "AssemblyU2DCSharp_RadialUndistortionEffectMethodDeclarations.h"
// System.Void RadialUndistortionEffect::.ctor()
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern "C" void RadialUndistortionEffect__ctor_m174 (RadialUndistortionEffect_t52 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m282(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RadialUndistortionEffect::Awake()
// UnityEngine.SystemInfo
#include "UnityEngine_UnityEngine_SystemInfoMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// UnityEngine.Shader
#include "UnityEngine_UnityEngine_ShaderMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
extern TypeInfo* Material_t42_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral26;
extern Il2CppCodeGenString* _stringLiteral27;
extern Il2CppCodeGenString* _stringLiteral28;
extern "C" void RadialUndistortionEffect_Awake_m175 (RadialUndistortionEffect_t52 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Material_t42_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		_stringLiteral26 = il2cpp_codegen_string_literal_from_index(26);
		_stringLiteral27 = il2cpp_codegen_string_literal_from_index(27);
		_stringLiteral28 = il2cpp_codegen_string_literal_from_index(28);
		s_Il2CppMethodIntialized = true;
	}
	Shader_t79 * V_0 = {0};
	{
		bool L_0 = SystemInfo_get_supportsRenderTextures_m309(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_Log_m353(NULL /*static, unused*/, _stringLiteral26, /*hidden argument*/NULL);
		return;
	}

IL_0015:
	{
		Shader_t79 * L_1 = Shader_Find_m342(NULL /*static, unused*/, _stringLiteral27, /*hidden argument*/NULL);
		V_0 = L_1;
		Shader_t79 * L_2 = V_0;
		bool L_3 = Object_op_Equality_m305(NULL /*static, unused*/, L_2, (Object_t75 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		Debug_Log_m353(NULL /*static, unused*/, _stringLiteral28, /*hidden argument*/NULL);
		return;
	}

IL_0037:
	{
		Shader_t79 * L_4 = V_0;
		Material_t42 * L_5 = (Material_t42 *)il2cpp_codegen_object_new (Material_t42_il2cpp_TypeInfo_var);
		Material__ctor_m343(L_5, L_4, /*hidden argument*/NULL);
		__this->___material_2 = L_5;
		return;
	}
}
// System.Void RadialUndistortionEffect::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// Cardboard
#include "AssemblyU2DCSharp_CardboardMethodDeclarations.h"
// UnityEngine.Graphics
#include "UnityEngine_UnityEngine_GraphicsMethodDeclarations.h"
extern TypeInfo* Cardboard_t24_il2cpp_TypeInfo_var;
extern "C" void RadialUndistortionEffect_OnRenderImage_m176 (RadialUndistortionEffect_t52 * __this, RenderTexture_t12 * ___source, RenderTexture_t12 * ___dest, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Cardboard_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		Material_t42 * L_0 = (__this->___material_2);
		bool L_1 = Object_op_Equality_m305(NULL /*static, unused*/, L_0, (Object_t75 *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		Cardboard_t24 * L_2 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3 = Cardboard_get_UseDistortionEffect_m75(L_2, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0021;
	}

IL_0020:
	{
		G_B3_0 = 1;
	}

IL_0021:
	{
		V_0 = G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		RenderTexture_t12 * L_5 = ___source;
		RenderTexture_t12 * L_6 = ___dest;
		Graphics_Blit_m520(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		goto IL_0041;
	}

IL_0034:
	{
		RenderTexture_t12 * L_7 = ___source;
		RenderTexture_t12 * L_8 = ___dest;
		Material_t42 * L_9 = (__this->___material_2);
		Graphics_Blit_m521(NULL /*static, unused*/, L_7, L_8, L_9, /*hidden argument*/NULL);
	}

IL_0041:
	{
		return;
	}
}
// StereoController/<EndOfFrame>c__Iterator1
#include "AssemblyU2DCSharp_StereoController_U3CEndOfFrameU3Ec__Iterat.h"
// StereoController/<EndOfFrame>c__Iterator1
#include "AssemblyU2DCSharp_StereoController_U3CEndOfFrameU3Ec__IteratMethodDeclarations.h"
// System.Void StereoController/<EndOfFrame>c__Iterator1::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void U3CEndOfFrameU3Ec__Iterator1__ctor_m177 (U3CEndOfFrameU3Ec__Iterator1_t53 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m355(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object StereoController/<EndOfFrame>c__Iterator1::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CEndOfFrameU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m178 (U3CEndOfFrameU3Ec__Iterator1_t53 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Object StereoController/<EndOfFrame>c__Iterator1::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CEndOfFrameU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m179 (U3CEndOfFrameU3Ec__Iterator1_t53 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Boolean StereoController/<EndOfFrame>c__Iterator1::MoveNext()
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"
// UnityEngine.WaitForEndOfFrame
#include "UnityEngine_UnityEngine_WaitForEndOfFrameMethodDeclarations.h"
extern TypeInfo* WaitForEndOfFrame_t80_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisCamera_t32_m397_MethodInfo_var;
extern "C" bool U3CEndOfFrameU3Ec__Iterator1_MoveNext_m180 (U3CEndOfFrameU3Ec__Iterator1_t53 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForEndOfFrame_t80_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Component_GetComponent_TisCamera_t32_m397_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483665);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = (__this->___U24PC_0);
		V_0 = L_0;
		__this->___U24PC_0 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0065;
		}
	}
	{
		goto IL_0071;
	}

IL_0021:
	{
		StereoController_t31 * L_2 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_2);
		bool L_3 = (L_2->___renderedStereo_12);
		if (!L_3)
		{
			goto IL_004e;
		}
	}
	{
		StereoController_t31 * L_4 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_4);
		Camera_t32 * L_5 = Component_GetComponent_TisCamera_t32_m397(L_4, /*hidden argument*/Component_GetComponent_TisCamera_t32_m397_MethodInfo_var);
		NullCheck(L_5);
		Behaviour_set_enabled_m311(L_5, 1, /*hidden argument*/NULL);
		StereoController_t31 * L_6 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_6);
		L_6->___renderedStereo_12 = 0;
	}

IL_004e:
	{
		WaitForEndOfFrame_t80 * L_7 = (WaitForEndOfFrame_t80 *)il2cpp_codegen_object_new (WaitForEndOfFrame_t80_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_m356(L_7, /*hidden argument*/NULL);
		__this->___U24current_1 = L_7;
		__this->___U24PC_0 = 1;
		goto IL_0073;
	}

IL_0065:
	{
		goto IL_0021;
	}
	// Dead block : IL_006a: ldarg.0

IL_0071:
	{
		return 0;
	}

IL_0073:
	{
		return 1;
	}
}
// System.Void StereoController/<EndOfFrame>c__Iterator1::Dispose()
extern "C" void U3CEndOfFrameU3Ec__Iterator1_Dispose_m181 (U3CEndOfFrameU3Ec__Iterator1_t53 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_0 = (-1);
		return;
	}
}
// System.Void StereoController/<EndOfFrame>c__Iterator1::Reset()
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t81_il2cpp_TypeInfo_var;
extern "C" void U3CEndOfFrameU3Ec__Iterator1_Reset_m182 (U3CEndOfFrameU3Ec__Iterator1_t53 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t81_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t81 * L_0 = (NotSupportedException_t81 *)il2cpp_codegen_object_new (NotSupportedException_t81_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m357(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Func`2<CardboardEye,System.Boolean>
#include "System_Core_System_Func_2_gen.h"
// System.Func`2<CardboardEye,CardboardHead>
#include "System_Core_System_Func_2_gen_0.h"
// System.Func`2<CardboardEye,System.Boolean>
#include "System_Core_System_Func_2_genMethodDeclarations.h"
// System.Linq.Enumerable
#include "System_Core_System_Linq_EnumerableMethodDeclarations.h"
// System.Func`2<CardboardEye,CardboardHead>
#include "System_Core_System_Func_2_gen_0MethodDeclarations.h"
struct CardboardEyeU5BU5D_t54;
// Declaration !!0[] UnityEngine.Component::GetComponentsInChildren<CardboardEye>(System.Boolean)
// !!0[] UnityEngine.Component::GetComponentsInChildren<CardboardEye>(System.Boolean)
#define Component_GetComponentsInChildren_TisCardboardEye_t29_m522(__this, p0, method) (( CardboardEyeU5BU5D_t54* (*) (Component_t70 *, bool, const MethodInfo*))Component_GetComponentsInChildren_TisObject_t_m328_gshared)(__this, p0, method)
struct IEnumerable_1_t101;
struct Func_2_t100;
// System.Linq.Enumerable
#include "System_Core_System_Linq_Enumerable.h"
struct IEnumerable_1_t102;
struct Func_2_t103;
// Declaration System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
extern "C" Object_t* Enumerable_Where_TisObject_t_m535_gshared (Object_t * __this /* static, unused */, Object_t* p0, Func_2_t103 * p1, const MethodInfo* method);
#define Enumerable_Where_TisObject_t_m535(__this /* static, unused */, p0, p1, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t103 *, const MethodInfo*))Enumerable_Where_TisObject_t_m535_gshared)(__this /* static, unused */, p0, p1, method)
// Declaration System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<CardboardEye>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<CardboardEye>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
#define Enumerable_Where_TisCardboardEye_t29_m524(__this /* static, unused */, p0, p1, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t100 *, const MethodInfo*))Enumerable_Where_TisObject_t_m535_gshared)(__this /* static, unused */, p0, p1, method)
struct CardboardEyeU5BU5D_t54;
struct IEnumerable_1_t101;
struct ObjectU5BU5D_t78;
struct IEnumerable_1_t102;
// Declaration !!0[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
// !!0[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C" ObjectU5BU5D_t78* Enumerable_ToArray_TisObject_t_m536_gshared (Object_t * __this /* static, unused */, Object_t* p0, const MethodInfo* method);
#define Enumerable_ToArray_TisObject_t_m536(__this /* static, unused */, p0, method) (( ObjectU5BU5D_t78* (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Enumerable_ToArray_TisObject_t_m536_gshared)(__this /* static, unused */, p0, method)
// Declaration !!0[] System.Linq.Enumerable::ToArray<CardboardEye>(System.Collections.Generic.IEnumerable`1<!!0>)
// !!0[] System.Linq.Enumerable::ToArray<CardboardEye>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_ToArray_TisCardboardEye_t29_m525(__this /* static, unused */, p0, method) (( CardboardEyeU5BU5D_t54* (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Enumerable_ToArray_TisObject_t_m536_gshared)(__this /* static, unused */, p0, method)
struct IEnumerable_1_t104;
struct IEnumerable_1_t101;
struct Func_2_t55;
struct IEnumerable_1_t102;
struct Func_2_t105;
// Declaration System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
extern "C" Object_t* Enumerable_Select_TisObject_t_TisObject_t_m537_gshared (Object_t * __this /* static, unused */, Object_t* p0, Func_2_t105 * p1, const MethodInfo* method);
#define Enumerable_Select_TisObject_t_TisObject_t_m537(__this /* static, unused */, p0, p1, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t105 *, const MethodInfo*))Enumerable_Select_TisObject_t_TisObject_t_m537_gshared)(__this /* static, unused */, p0, p1, method)
// Declaration System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<CardboardEye,CardboardHead>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<CardboardEye,CardboardHead>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
#define Enumerable_Select_TisCardboardEye_t29_TisCardboardHead_t5_m527(__this /* static, unused */, p0, p1, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t55 *, const MethodInfo*))Enumerable_Select_TisObject_t_TisObject_t_m537_gshared)(__this /* static, unused */, p0, p1, method)
struct CardboardHead_t5;
struct IEnumerable_1_t104;
struct Object_t;
struct IEnumerable_1_t102;
// Declaration !!0 System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
// !!0 System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C" Object_t * Enumerable_FirstOrDefault_TisObject_t_m538_gshared (Object_t * __this /* static, unused */, Object_t* p0, const MethodInfo* method);
#define Enumerable_FirstOrDefault_TisObject_t_m538(__this /* static, unused */, p0, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Enumerable_FirstOrDefault_TisObject_t_m538_gshared)(__this /* static, unused */, p0, method)
// Declaration !!0 System.Linq.Enumerable::FirstOrDefault<CardboardHead>(System.Collections.Generic.IEnumerable`1<!!0>)
// !!0 System.Linq.Enumerable::FirstOrDefault<CardboardHead>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_FirstOrDefault_TisCardboardHead_t5_m528(__this /* static, unused */, p0, method) (( CardboardHead_t5 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Enumerable_FirstOrDefault_TisObject_t_m538_gshared)(__this /* static, unused */, p0, method)
struct CardboardHead_t5;
// Declaration !!0 UnityEngine.GameObject::AddComponent<CardboardHead>()
// !!0 UnityEngine.GameObject::AddComponent<CardboardHead>()
#define GameObject_AddComponent_TisCardboardHead_t5_m529(__this, method) (( CardboardHead_t5 * (*) (GameObject_t47 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m389_gshared)(__this, method)
struct CardboardEye_t29;
// Declaration !!0 UnityEngine.GameObject::AddComponent<CardboardEye>()
// !!0 UnityEngine.GameObject::AddComponent<CardboardEye>()
#define GameObject_AddComponent_TisCardboardEye_t29_m532(__this, method) (( CardboardEye_t29 * (*) (GameObject_t47 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m389_gshared)(__this, method)
// System.Void StereoController::.ctor()
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern "C" void StereoController__ctor_m183 (StereoController_t31 * __this, const MethodInfo* method)
{
	{
		__this->___directRender_2 = 1;
		__this->___stereoMultiplier_3 = (1.0f);
		__this->___checkStereoComfort_8 = 1;
		MonoBehaviour__ctor_m282(__this, /*hidden argument*/NULL);
		return;
	}
}
// CardboardEye[] StereoController::get_Eyes()
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// System.Func`2<CardboardEye,System.Boolean>
#include "System_Core_System_Func_2_genMethodDeclarations.h"
// System.Linq.Enumerable
#include "System_Core_System_Linq_EnumerableMethodDeclarations.h"
extern TypeInfo* Func_2_t100_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponentsInChildren_TisCardboardEye_t29_m522_MethodInfo_var;
extern const MethodInfo* StereoController_U3Cget_EyesU3Em__0_m197_MethodInfo_var;
extern const MethodInfo* Func_2__ctor_m523_MethodInfo_var;
extern const MethodInfo* Enumerable_Where_TisCardboardEye_t29_m524_MethodInfo_var;
extern const MethodInfo* Enumerable_ToArray_TisCardboardEye_t29_m525_MethodInfo_var;
extern "C" CardboardEyeU5BU5D_t54* StereoController_get_Eyes_m184 (StereoController_t31 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Func_2_t100_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(48);
		Component_GetComponentsInChildren_TisCardboardEye_t29_m522_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483674);
		StereoController_U3Cget_EyesU3Em__0_m197_MethodInfo_var = il2cpp_codegen_method_info_from_index(27);
		Func_2__ctor_m523_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483676);
		Enumerable_Where_TisCardboardEye_t29_m524_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483677);
		Enumerable_ToArray_TisCardboardEye_t29_m525_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483678);
		s_Il2CppMethodIntialized = true;
	}
	{
		CardboardEyeU5BU5D_t54* L_0 = (__this->___eyes_13);
		if (L_0)
		{
			goto IL_002e;
		}
	}
	{
		CardboardEyeU5BU5D_t54* L_1 = Component_GetComponentsInChildren_TisCardboardEye_t29_m522(__this, 1, /*hidden argument*/Component_GetComponentsInChildren_TisCardboardEye_t29_m522_MethodInfo_var);
		IntPtr_t L_2 = { (void*)StereoController_U3Cget_EyesU3Em__0_m197_MethodInfo_var };
		Func_2_t100 * L_3 = (Func_2_t100 *)il2cpp_codegen_object_new (Func_2_t100_il2cpp_TypeInfo_var);
		Func_2__ctor_m523(L_3, __this, L_2, /*hidden argument*/Func_2__ctor_m523_MethodInfo_var);
		Object_t* L_4 = Enumerable_Where_TisCardboardEye_t29_m524(NULL /*static, unused*/, (Object_t*)(Object_t*)L_1, L_3, /*hidden argument*/Enumerable_Where_TisCardboardEye_t29_m524_MethodInfo_var);
		CardboardEyeU5BU5D_t54* L_5 = Enumerable_ToArray_TisCardboardEye_t29_m525(NULL /*static, unused*/, L_4, /*hidden argument*/Enumerable_ToArray_TisCardboardEye_t29_m525_MethodInfo_var);
		__this->___eyes_13 = L_5;
	}

IL_002e:
	{
		CardboardEyeU5BU5D_t54* L_6 = (__this->___eyes_13);
		return L_6;
	}
}
// System.Void StereoController::InvalidateEyes()
extern "C" void StereoController_InvalidateEyes_m185 (StereoController_t31 * __this, const MethodInfo* method)
{
	{
		__this->___eyes_13 = (CardboardEyeU5BU5D_t54*)NULL;
		return;
	}
}
// CardboardHead StereoController::get_Head()
// StereoController
#include "AssemblyU2DCSharp_StereoControllerMethodDeclarations.h"
// System.Func`2<CardboardEye,CardboardHead>
#include "System_Core_System_Func_2_gen_0MethodDeclarations.h"
extern TypeInfo* StereoController_t31_il2cpp_TypeInfo_var;
extern TypeInfo* Func_2_t55_il2cpp_TypeInfo_var;
extern const MethodInfo* StereoController_U3Cget_HeadU3Em__1_m198_MethodInfo_var;
extern const MethodInfo* Func_2__ctor_m526_MethodInfo_var;
extern const MethodInfo* Enumerable_Select_TisCardboardEye_t29_TisCardboardHead_t5_m527_MethodInfo_var;
extern const MethodInfo* Enumerable_FirstOrDefault_TisCardboardHead_t5_m528_MethodInfo_var;
extern "C" CardboardHead_t5 * StereoController_get_Head_m186 (StereoController_t31 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StereoController_t31_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		Func_2_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(49);
		StereoController_U3Cget_HeadU3Em__1_m198_MethodInfo_var = il2cpp_codegen_method_info_from_index(31);
		Func_2__ctor_m526_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483680);
		Enumerable_Select_TisCardboardEye_t29_TisCardboardHead_t5_m527_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483681);
		Enumerable_FirstOrDefault_TisCardboardHead_t5_m528_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483682);
		s_Il2CppMethodIntialized = true;
	}
	CardboardEyeU5BU5D_t54* G_B2_0 = {0};
	CardboardEyeU5BU5D_t54* G_B1_0 = {0};
	{
		CardboardEyeU5BU5D_t54* L_0 = StereoController_get_Eyes_m184(__this, /*hidden argument*/NULL);
		Func_2_t55 * L_1 = ((StereoController_t31_StaticFields*)StereoController_t31_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheC_14;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_001e;
		}
	}
	{
		IntPtr_t L_2 = { (void*)StereoController_U3Cget_HeadU3Em__1_m198_MethodInfo_var };
		Func_2_t55 * L_3 = (Func_2_t55 *)il2cpp_codegen_object_new (Func_2_t55_il2cpp_TypeInfo_var);
		Func_2__ctor_m526(L_3, NULL, L_2, /*hidden argument*/Func_2__ctor_m526_MethodInfo_var);
		((StereoController_t31_StaticFields*)StereoController_t31_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheC_14 = L_3;
		G_B2_0 = G_B1_0;
	}

IL_001e:
	{
		Func_2_t55 * L_4 = ((StereoController_t31_StaticFields*)StereoController_t31_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cacheC_14;
		Object_t* L_5 = Enumerable_Select_TisCardboardEye_t29_TisCardboardHead_t5_m527(NULL /*static, unused*/, (Object_t*)(Object_t*)G_B2_0, L_4, /*hidden argument*/Enumerable_Select_TisCardboardEye_t29_TisCardboardHead_t5_m527_MethodInfo_var);
		CardboardHead_t5 * L_6 = Enumerable_FirstOrDefault_TisCardboardHead_t5_m528(NULL /*static, unused*/, L_5, /*hidden argument*/Enumerable_FirstOrDefault_TisCardboardHead_t5_m528_MethodInfo_var);
		return L_6;
	}
}
// UnityEngine.RenderTexture StereoController::get_StereoScreen()
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// Cardboard
#include "AssemblyU2DCSharp_CardboardMethodDeclarations.h"
extern TypeInfo* Cardboard_t24_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisCamera_t32_m397_MethodInfo_var;
extern "C" RenderTexture_t12 * StereoController_get_StereoScreen_m187 (StereoController_t31 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Cardboard_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		Component_GetComponent_TisCamera_t32_m397_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483665);
		s_Il2CppMethodIntialized = true;
	}
	RenderTexture_t12 * G_B2_0 = {0};
	RenderTexture_t12 * G_B1_0 = {0};
	{
		Camera_t32 * L_0 = Component_GetComponent_TisCamera_t32_m397(__this, /*hidden argument*/Component_GetComponent_TisCamera_t32_m397_MethodInfo_var);
		NullCheck(L_0);
		RenderTexture_t12 * L_1 = Camera_get_targetTexture_m435(L_0, /*hidden argument*/NULL);
		RenderTexture_t12 * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		Cardboard_t24 * L_3 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		RenderTexture_t12 * L_4 = Cardboard_get_StereoScreen_m73(L_3, /*hidden argument*/NULL);
		G_B2_0 = L_4;
	}

IL_001c:
	{
		return G_B2_0;
	}
}
// System.Int32 StereoController::get_ScreenHeight()
// UnityEngine.Screen
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
extern "C" int32_t StereoController_get_ScreenHeight_m188 (StereoController_t31 * __this, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B4_1 = 0;
	{
		int32_t L_0 = Screen_get_height_m318(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_1 = Application_get_isEditor_m393(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B1_0 = L_0;
		if (!L_1)
		{
			G_B3_0 = L_0;
			goto IL_0027;
		}
	}
	{
		RenderTexture_t12 * L_2 = StereoController_get_StereoScreen_m187(__this, /*hidden argument*/NULL);
		bool L_3 = Object_op_Equality_m305(NULL /*static, unused*/, L_2, (Object_t75 *)NULL, /*hidden argument*/NULL);
		G_B2_0 = G_B1_0;
		if (!L_3)
		{
			G_B3_0 = G_B1_0;
			goto IL_0027;
		}
	}
	{
		G_B4_0 = ((int32_t)36);
		G_B4_1 = G_B2_0;
		goto IL_0028;
	}

IL_0027:
	{
		G_B4_0 = 0;
		G_B4_1 = G_B3_0;
	}

IL_0028:
	{
		return ((int32_t)((int32_t)G_B4_1-(int32_t)G_B4_0));
	}
}
// System.Void StereoController::Awake()
extern "C" void StereoController_Awake_m189 (StereoController_t31 * __this, const MethodInfo* method)
{
	{
		StereoController_AddStereoRig_m190(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void StereoController::AddStereoRig()
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
extern const MethodInfo* GameObject_AddComponent_TisCardboardHead_t5_m529_MethodInfo_var;
extern "C" void StereoController_AddStereoRig_m190 (StereoController_t31 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_AddComponent_TisCardboardHead_t5_m529_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483683);
		s_Il2CppMethodIntialized = true;
	}
	{
		CardboardEyeU5BU5D_t54* L_0 = StereoController_get_Eyes_m184(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		return;
	}

IL_000f:
	{
		StereoController_CreateEye_m191(__this, 0, /*hidden argument*/NULL);
		StereoController_CreateEye_m191(__this, 1, /*hidden argument*/NULL);
		CardboardHead_t5 * L_1 = StereoController_get_Head_m186(__this, /*hidden argument*/NULL);
		bool L_2 = Object_op_Equality_m305(NULL /*static, unused*/, L_1, (Object_t75 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003a;
		}
	}
	{
		GameObject_t47 * L_3 = Component_get_gameObject_m307(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_AddComponent_TisCardboardHead_t5_m529(L_3, /*hidden argument*/GameObject_AddComponent_TisCardboardHead_t5_m529_MethodInfo_var);
	}

IL_003a:
	{
		return;
	}
}
// System.Void StereoController::CreateEye(Cardboard/Eye)
// Cardboard/Eye
#include "AssemblyU2DCSharp_Cardboard_Eye.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"
// CardboardEye
#include "AssemblyU2DCSharp_CardboardEyeMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* GameObject_t47_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisCamera_t32_m379_MethodInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisCardboardEye_t29_m532_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral29;
extern Il2CppCodeGenString* _stringLiteral30;
extern "C" void StereoController_CreateEye_m191 (StereoController_t31 * __this, int32_t ___eye, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		GameObject_t47_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(18);
		GameObject_AddComponent_TisCamera_t32_m379_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483662);
		GameObject_AddComponent_TisCardboardEye_t29_m532_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483684);
		_stringLiteral29 = il2cpp_codegen_string_literal_from_index(29);
		_stringLiteral30 = il2cpp_codegen_string_literal_from_index(30);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	GameObject_t47 * V_1 = {0};
	CardboardEye_t29 * V_2 = {0};
	String_t* G_B2_0 = {0};
	String_t* G_B1_0 = {0};
	String_t* G_B3_0 = {0};
	String_t* G_B3_1 = {0};
	{
		String_t* L_0 = Object_get_name_m530(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___eye;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_0016;
		}
	}
	{
		G_B3_0 = _stringLiteral29;
		G_B3_1 = G_B1_0;
		goto IL_001b;
	}

IL_0016:
	{
		G_B3_0 = _stringLiteral30;
		G_B3_1 = G_B2_0;
	}

IL_001b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m531(NULL /*static, unused*/, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		GameObject_t47 * L_4 = (GameObject_t47 *)il2cpp_codegen_object_new (GameObject_t47_il2cpp_TypeInfo_var);
		GameObject__ctor_m359(L_4, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		GameObject_t47 * L_5 = V_1;
		NullCheck(L_5);
		Transform_t33 * L_6 = GameObject_get_transform_m361(L_5, /*hidden argument*/NULL);
		Transform_t33 * L_7 = Component_get_transform_m283(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_parent_m378(L_6, L_7, /*hidden argument*/NULL);
		GameObject_t47 * L_8 = V_1;
		NullCheck(L_8);
		Camera_t32 * L_9 = GameObject_AddComponent_TisCamera_t32_m379(L_8, /*hidden argument*/GameObject_AddComponent_TisCamera_t32_m379_MethodInfo_var);
		NullCheck(L_9);
		Behaviour_set_enabled_m311(L_9, 0, /*hidden argument*/NULL);
		GameObject_t47 * L_10 = V_1;
		NullCheck(L_10);
		CardboardEye_t29 * L_11 = GameObject_AddComponent_TisCardboardEye_t29_m532(L_10, /*hidden argument*/GameObject_AddComponent_TisCardboardEye_t29_m532_MethodInfo_var);
		V_2 = L_11;
		CardboardEye_t29 * L_12 = V_2;
		int32_t L_13 = ___eye;
		NullCheck(L_12);
		L_12->___eye_2 = L_13;
		CardboardEye_t29 * L_14 = V_2;
		NullCheck(L_14);
		CardboardEye_CopyCameraAndMakeSideBySide_m125(L_14, __this, (0.0f), (0.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void StereoController::ComputeStereoAdjustment(System.Single,System.Single,System.Single&,System.Single&)
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4MethodDeclarations.h"
extern TypeInfo* Mathf_t69_il2cpp_TypeInfo_var;
extern TypeInfo* Cardboard_t24_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisCamera_t32_m397_MethodInfo_var;
extern "C" void StereoController_ComputeStereoAdjustment_m192 (StereoController_t31 * __this, float ___proj11, float ___zScale, float* ___ipdScale, float* ___eyeOffset, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t69_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		Cardboard_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		Component_GetComponent_TisCamera_t32_m397_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483665);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	Vector3_t3  V_7 = {0};
	Matrix4x4_t43  V_8 = {0};
	Vector2_t15  V_9 = {0};
	Vector2_t15  V_10 = {0};
	{
		float* L_0 = ___ipdScale;
		float L_1 = (__this->___stereoMultiplier_3);
		*((float*)(L_0)) = (float)L_1;
		float* L_2 = ___eyeOffset;
		*((float*)(L_2)) = (float)(0.0f);
		Transform_t33 * L_3 = (__this->___centerOfInterest_6);
		bool L_4 = Object_op_Equality_m305(NULL /*static, unused*/, L_3, (Object_t75 *)NULL, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0036;
		}
	}
	{
		Transform_t33 * L_5 = (__this->___centerOfInterest_6);
		NullCheck(L_5);
		GameObject_t47 * L_6 = Component_get_gameObject_m307(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		bool L_7 = GameObject_get_activeInHierarchy_m308(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0037;
		}
	}

IL_0036:
	{
		return;
	}

IL_0037:
	{
		Transform_t33 * L_8 = (__this->___centerOfInterest_6);
		NullCheck(L_8);
		Vector3_t3  L_9 = Transform_get_position_m450(L_8, /*hidden argument*/NULL);
		Transform_t33 * L_10 = Component_get_transform_m283(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t3  L_11 = Transform_get_position_m450(L_10, /*hidden argument*/NULL);
		Vector3_t3  L_12 = Vector3_op_Subtraction_m533(NULL /*static, unused*/, L_9, L_11, /*hidden argument*/NULL);
		V_7 = L_12;
		float L_13 = Vector3_get_magnitude_m534((&V_7), /*hidden argument*/NULL);
		V_0 = L_13;
		float L_14 = (__this->___radiusOfInterest_7);
		float L_15 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t69_il2cpp_TypeInfo_var);
		float L_16 = Mathf_Clamp_m292(NULL /*static, unused*/, L_14, (0.0f), L_15, /*hidden argument*/NULL);
		V_1 = L_16;
		float L_17 = ___proj11;
		Camera_t32 * L_18 = Component_GetComponent_TisCamera_t32_m397(__this, /*hidden argument*/Component_GetComponent_TisCamera_t32_m397_MethodInfo_var);
		NullCheck(L_18);
		Matrix4x4_t43  L_19 = Camera_get_projectionMatrix_m406(L_18, /*hidden argument*/NULL);
		V_8 = L_19;
		float L_20 = Matrix4x4_get_Item_m401((&V_8), 1, 1, /*hidden argument*/NULL);
		V_2 = ((float)((float)L_17/(float)L_20));
		float L_21 = V_1;
		float L_22 = V_1;
		float L_23 = V_0;
		float L_24 = V_0;
		float L_25 = V_1;
		float L_26 = V_1;
		float L_27 = V_2;
		float L_28 = V_2;
		float L_29 = sqrtf(((float)((float)((float)((float)L_21*(float)L_22))+(float)((float)((float)((float)((float)((float)((float)((float)((float)L_23*(float)L_24))-(float)((float)((float)L_25*(float)L_26))))*(float)L_27))*(float)L_28)))));
		V_3 = L_29;
		float* L_30 = ___eyeOffset;
		float L_31 = V_0;
		float L_32 = V_3;
		float L_33 = (__this->___matchMonoFOV_4);
		float L_34 = Mathf_Clamp01_m363(NULL /*static, unused*/, L_33, /*hidden argument*/NULL);
		float L_35 = ___zScale;
		*((float*)(L_30)) = (float)((float)((float)((float)((float)((float)((float)L_31-(float)L_32))*(float)L_34))/(float)L_35));
		bool L_36 = (__this->___checkStereoComfort_8);
		if (!L_36)
		{
			goto IL_010c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		Cardboard_t24 * L_37 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_37);
		Vector2_t15  L_38 = Cardboard_get_ComfortableViewingRange_m81(L_37, /*hidden argument*/NULL);
		V_9 = L_38;
		float L_39 = ((&V_9)->___x_1);
		V_4 = L_39;
		Cardboard_t24 * L_40 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_40);
		Vector2_t15  L_41 = Cardboard_get_ComfortableViewingRange_m81(L_40, /*hidden argument*/NULL);
		V_10 = L_41;
		float L_42 = ((&V_10)->___y_2);
		V_5 = L_42;
		float L_43 = V_4;
		float L_44 = V_5;
		if ((!(((float)L_43) < ((float)L_44))))
		{
			goto IL_010c;
		}
	}
	{
		float L_45 = V_0;
		float L_46 = V_1;
		float L_47 = ___zScale;
		float* L_48 = ___eyeOffset;
		V_6 = ((float)((float)((float)((float)((float)((float)L_45-(float)L_46))/(float)L_47))-(float)(*((float*)L_48))));
		float* L_49 = ___ipdScale;
		float* L_50 = ___ipdScale;
		float L_51 = V_6;
		float L_52 = V_6;
		float L_53 = V_4;
		float L_54 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t69_il2cpp_TypeInfo_var);
		float L_55 = Mathf_Clamp_m292(NULL /*static, unused*/, L_52, L_53, L_54, /*hidden argument*/NULL);
		*((float*)(L_49)) = (float)((float)((float)(*((float*)L_50))*(float)((float)((float)L_51/(float)L_55))));
	}

IL_010c:
	{
		return;
	}
}
// System.Void StereoController::OnEnable()
extern Il2CppCodeGenString* _stringLiteral17;
extern "C" void StereoController_OnEnable_m193 (StereoController_t31 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral17 = il2cpp_codegen_string_literal_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		MonoBehaviour_StartCoroutine_m386(__this, _stringLiteral17, /*hidden argument*/NULL);
		return;
	}
}
// System.Void StereoController::OnDisable()
extern Il2CppCodeGenString* _stringLiteral17;
extern "C" void StereoController_OnDisable_m194 (StereoController_t31 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral17 = il2cpp_codegen_string_literal_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		MonoBehaviour_StopCoroutine_m387(__this, _stringLiteral17, /*hidden argument*/NULL);
		return;
	}
}
// System.Void StereoController::OnPreCull()
extern TypeInfo* Cardboard_t24_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisCamera_t32_m397_MethodInfo_var;
extern "C" void StereoController_OnPreCull_m195 (StereoController_t31 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Cardboard_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		Component_GetComponent_TisCamera_t32_m397_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483665);
		s_Il2CppMethodIntialized = true;
	}
	CardboardEye_t29 * V_0 = {0};
	CardboardEyeU5BU5D_t54* V_1 = {0};
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		Cardboard_t24 * L_0 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = Cardboard_get_VRModeEnabled_m55(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		Cardboard_t24 * L_2 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		Cardboard_UpdateState_m88(L_2, /*hidden argument*/NULL);
		Camera_t32 * L_3 = Component_GetComponent_TisCamera_t32_m397(__this, /*hidden argument*/Component_GetComponent_TisCamera_t32_m397_MethodInfo_var);
		NullCheck(L_3);
		Behaviour_set_enabled_m311(L_3, 0, /*hidden argument*/NULL);
		CardboardEyeU5BU5D_t54* L_4 = StereoController_get_Eyes_m184(__this, /*hidden argument*/NULL);
		V_1 = L_4;
		V_2 = 0;
		goto IL_0042;
	}

IL_0034:
	{
		CardboardEyeU5BU5D_t54* L_5 = V_1;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		V_0 = (*(CardboardEye_t29 **)(CardboardEye_t29 **)SZArrayLdElema(L_5, L_7, sizeof(CardboardEye_t29 *)));
		CardboardEye_t29 * L_8 = V_0;
		NullCheck(L_8);
		CardboardEye_Render_m123(L_8, /*hidden argument*/NULL);
		int32_t L_9 = V_2;
		V_2 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_0042:
	{
		int32_t L_10 = V_2;
		CardboardEyeU5BU5D_t54* L_11 = V_1;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)(((Array_t *)L_11)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		__this->___renderedStereo_12 = 1;
		return;
	}
}
// System.Collections.IEnumerator StereoController::EndOfFrame()
// StereoController/<EndOfFrame>c__Iterator1
#include "AssemblyU2DCSharp_StereoController_U3CEndOfFrameU3Ec__IteratMethodDeclarations.h"
extern TypeInfo* U3CEndOfFrameU3Ec__Iterator1_t53_il2cpp_TypeInfo_var;
extern "C" Object_t * StereoController_EndOfFrame_m196 (StereoController_t31 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CEndOfFrameU3Ec__Iterator1_t53_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		s_Il2CppMethodIntialized = true;
	}
	U3CEndOfFrameU3Ec__Iterator1_t53 * V_0 = {0};
	{
		U3CEndOfFrameU3Ec__Iterator1_t53 * L_0 = (U3CEndOfFrameU3Ec__Iterator1_t53 *)il2cpp_codegen_object_new (U3CEndOfFrameU3Ec__Iterator1_t53_il2cpp_TypeInfo_var);
		U3CEndOfFrameU3Ec__Iterator1__ctor_m177(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CEndOfFrameU3Ec__Iterator1_t53 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_2 = __this;
		U3CEndOfFrameU3Ec__Iterator1_t53 * L_2 = V_0;
		return L_2;
	}
}
// System.Boolean StereoController::<get_Eyes>m__0(CardboardEye)
// CardboardEye
#include "AssemblyU2DCSharp_CardboardEye.h"
extern "C" bool StereoController_U3Cget_EyesU3Em__0_m197 (StereoController_t31 * __this, CardboardEye_t29 * ___eye, const MethodInfo* method)
{
	{
		CardboardEye_t29 * L_0 = ___eye;
		NullCheck(L_0);
		StereoController_t31 * L_1 = CardboardEye_get_Controller_m117(L_0, /*hidden argument*/NULL);
		bool L_2 = Object_op_Equality_m305(NULL /*static, unused*/, L_1, __this, /*hidden argument*/NULL);
		return L_2;
	}
}
// CardboardHead StereoController::<get_Head>m__1(CardboardEye)
extern "C" CardboardHead_t5 * StereoController_U3Cget_HeadU3Em__1_m198 (Object_t * __this /* static, unused */, CardboardEye_t29 * ___eye, const MethodInfo* method)
{
	{
		CardboardEye_t29 * L_0 = ___eye;
		NullCheck(L_0);
		CardboardHead_t5 * L_1 = CardboardEye_get_Head_m118(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// BaseCardboardDevice/VREventCallback
#include "AssemblyU2DCSharp_BaseCardboardDevice_VREventCallback.h"
// BaseCardboardDevice/VREventCallback
#include "AssemblyU2DCSharp_BaseCardboardDevice_VREventCallbackMethodDeclarations.h"
// System.Void BaseCardboardDevice/VREventCallback::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void VREventCallback__ctor_m199 (VREventCallback_t56 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void BaseCardboardDevice/VREventCallback::Invoke(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void VREventCallback_Invoke_m200 (VREventCallback_t56 * __this, int32_t ___eventID, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		VREventCallback_Invoke_m200((VREventCallback_t56 *)__this->___prev_9,___eventID, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___eventID, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___eventID,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, int32_t ___eventID, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___eventID,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_VREventCallback_t56(Il2CppObject* delegate, int32_t ___eventID)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___eventID' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___eventID);

	// Marshaling cleanup of parameter '___eventID' native representation

}
// System.IAsyncResult BaseCardboardDevice/VREventCallback::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* Int32_t106_il2cpp_TypeInfo_var;
extern "C" Object_t * VREventCallback_BeginInvoke_m201 (VREventCallback_t56 * __this, int32_t ___eventID, AsyncCallback_t9 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t106_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t106_il2cpp_TypeInfo_var, &___eventID);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void BaseCardboardDevice/VREventCallback::EndInvoke(System.IAsyncResult)
extern "C" void VREventCallback_EndInvoke_m202 (VREventCallback_t56 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// BaseCardboardDevice
#include "AssemblyU2DCSharp_BaseCardboardDevice.h"
// BaseCardboardDevice
#include "AssemblyU2DCSharp_BaseCardboardDeviceMethodDeclarations.h"
// System.Collections.Generic.Queue`1<System.Int32>
#include "System_System_Collections_Generic_Queue_1_gen.h"
// System.Collections.Generic.Queue`1<System.Int32>
#include "System_System_Collections_Generic_Queue_1_genMethodDeclarations.h"
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"
// System.Void BaseCardboardDevice::.ctor()
// System.Collections.Generic.Queue`1<System.Int32>
#include "System_System_Collections_Generic_Queue_1_genMethodDeclarations.h"
// BaseVRDevice
#include "AssemblyU2DCSharp_BaseVRDeviceMethodDeclarations.h"
extern TypeInfo* SingleU5BU5D_t44_il2cpp_TypeInfo_var;
extern TypeInfo* Matrix4x4_t43_il2cpp_TypeInfo_var;
extern TypeInfo* Queue_1_t58_il2cpp_TypeInfo_var;
extern TypeInfo* BaseVRDevice_t28_il2cpp_TypeInfo_var;
extern const MethodInfo* Queue_1__ctor_m539_MethodInfo_var;
extern "C" void BaseCardboardDevice__ctor_m203 (BaseCardboardDevice_t57 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SingleU5BU5D_t44_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(35);
		Matrix4x4_t43_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		Queue_1_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(53);
		BaseVRDevice_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		Queue_1__ctor_m539_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483685);
		s_Il2CppMethodIntialized = true;
	}
	Matrix4x4_t43  V_0 = {0};
	Matrix4x4_t43  V_1 = {0};
	Matrix4x4_t43  V_2 = {0};
	{
		__this->___headData_20 = ((SingleU5BU5D_t44*)SZArrayNew(SingleU5BU5D_t44_il2cpp_TypeInfo_var, ((int32_t)16)));
		__this->___viewData_21 = ((SingleU5BU5D_t44*)SZArrayNew(SingleU5BU5D_t44_il2cpp_TypeInfo_var, ((int32_t)104)));
		__this->___profileData_22 = ((SingleU5BU5D_t44*)SZArrayNew(SingleU5BU5D_t44_il2cpp_TypeInfo_var, ((int32_t)13)));
		Initobj (Matrix4x4_t43_il2cpp_TypeInfo_var, (&V_0));
		Matrix4x4_t43  L_0 = V_0;
		__this->___headView_23 = L_0;
		Initobj (Matrix4x4_t43_il2cpp_TypeInfo_var, (&V_1));
		Matrix4x4_t43  L_1 = V_1;
		__this->___leftEyeView_24 = L_1;
		Initobj (Matrix4x4_t43_il2cpp_TypeInfo_var, (&V_2));
		Matrix4x4_t43  L_2 = V_2;
		__this->___rightEyeView_25 = L_2;
		Queue_1_t58 * L_3 = (Queue_1_t58 *)il2cpp_codegen_object_new (Queue_1_t58_il2cpp_TypeInfo_var);
		Queue_1__ctor_m539(L_3, /*hidden argument*/Queue_1__ctor_m539_MethodInfo_var);
		__this->___eventQueue_26 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(BaseVRDevice_t28_il2cpp_TypeInfo_var);
		BaseVRDevice__ctor_m236(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean BaseCardboardDevice::SupportsNativeDistortionCorrection(System.Collections.Generic.List`1<System.String>)
// System.Collections.Generic.List`1<System.String>
#include "mscorlib_System_Collections_Generic_List_1_gen.h"
extern Il2CppCodeGenString* _stringLiteral31;
extern "C" bool BaseCardboardDevice_SupportsNativeDistortionCorrection_m204 (BaseCardboardDevice_t57 * __this, List_1_t66 * ___diagnostics, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral31 = il2cpp_codegen_string_literal_from_index(31);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	{
		List_1_t66 * L_0 = ___diagnostics;
		bool L_1 = BaseVRDevice_SupportsNativeDistortionCorrection_m240(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = (__this->___debugDisableNativeDistortion_28);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		V_0 = 0;
		List_1_t66 * L_3 = ___diagnostics;
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_3, _stringLiteral31);
	}

IL_0020:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean BaseCardboardDevice::SupportsNativeUILayer(System.Collections.Generic.List`1<System.String>)
extern Il2CppCodeGenString* _stringLiteral31;
extern "C" bool BaseCardboardDevice_SupportsNativeUILayer_m205 (BaseCardboardDevice_t57 * __this, List_1_t66 * ___diagnostics, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral31 = il2cpp_codegen_string_literal_from_index(31);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	{
		List_1_t66 * L_0 = ___diagnostics;
		bool L_1 = BaseVRDevice_SupportsNativeUILayer_m241(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = (__this->___debugDisableNativeUILayer_29);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		V_0 = 0;
		List_1_t66 * L_3 = ___diagnostics;
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_3, _stringLiteral31);
	}

IL_0020:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Void BaseCardboardDevice::SetDistortionCorrectionEnabled(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
// BaseCardboardDevice
#include "AssemblyU2DCSharp_BaseCardboardDeviceMethodDeclarations.h"
extern "C" void BaseCardboardDevice_SetDistortionCorrectionEnabled_m206 (BaseCardboardDevice_t57 * __this, bool ___enabled, const MethodInfo* method)
{
	{
		bool L_0 = ___enabled;
		BaseCardboardDevice_EnableDistortionCorrection_m226(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BaseCardboardDevice::SetAlignmentMarkerEnabled(System.Boolean)
extern "C" void BaseCardboardDevice_SetAlignmentMarkerEnabled_m207 (BaseCardboardDevice_t57 * __this, bool ___enabled, const MethodInfo* method)
{
	{
		bool L_0 = ___enabled;
		BaseCardboardDevice_EnableAlignmentMarker_m227(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BaseCardboardDevice::SetNeckModelScale(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void BaseCardboardDevice_SetNeckModelScale_m208 (BaseCardboardDevice_t57 * __this, float ___scale, const MethodInfo* method)
{
	{
		float L_0 = ___scale;
		BaseCardboardDevice_SetNeckModelFactor_m230(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BaseCardboardDevice::SetAutoDriftCorrectionEnabled(System.Boolean)
extern "C" void BaseCardboardDevice_SetAutoDriftCorrectionEnabled_m209 (BaseCardboardDevice_t57 * __this, bool ___enabled, const MethodInfo* method)
{
	{
		bool L_0 = ___enabled;
		BaseCardboardDevice_EnableAutoDriftCorrection_m228(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BaseCardboardDevice::SetElectronicDisplayStabilizationEnabled(System.Boolean)
extern "C" void BaseCardboardDevice_SetElectronicDisplayStabilizationEnabled_m210 (BaseCardboardDevice_t57 * __this, bool ___enabled, const MethodInfo* method)
{
	{
		bool L_0 = ___enabled;
		BaseCardboardDevice_EnableElectronicDisplayStabilization_m229(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BaseCardboardDevice::Init()
// UnityEngine.Screen
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// BaseCardboardDevice/VREventCallback
#include "AssemblyU2DCSharp_BaseCardboardDevice_VREventCallbackMethodDeclarations.h"
extern TypeInfo* Mathf_t69_il2cpp_TypeInfo_var;
extern TypeInfo* VREventCallback_t56_il2cpp_TypeInfo_var;
extern const MethodInfo* BaseCardboardDevice_OnVREvent_m222_MethodInfo_var;
extern "C" void BaseCardboardDevice_Init_m211 (BaseCardboardDevice_t57 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t69_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		VREventCallback_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(54);
		BaseCardboardDevice_OnVREvent_m222_MethodInfo_var = il2cpp_codegen_method_info_from_index(38);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = Screen_get_width_m316(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = Screen_get_height_m318(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t69_il2cpp_TypeInfo_var);
		int32_t L_2 = Mathf_Max_m540(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = Screen_get_height_m318(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_4 = Screen_get_width_m316(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_5 = Mathf_Min_m541(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		float L_8 = Screen_get_dpi_m463(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_9 = Screen_get_dpi_m463(NULL /*static, unused*/, /*hidden argument*/NULL);
		BaseCardboardDevice_Start_m223(NULL /*static, unused*/, L_6, L_7, L_8, L_9, /*hidden argument*/NULL);
		IntPtr_t L_10 = { (void*)BaseCardboardDevice_OnVREvent_m222_MethodInfo_var };
		VREventCallback_t56 * L_11 = (VREventCallback_t56 *)il2cpp_codegen_object_new (VREventCallback_t56_il2cpp_TypeInfo_var);
		VREventCallback__ctor_m199(L_11, NULL, L_10, /*hidden argument*/NULL);
		BaseCardboardDevice_SetEventCallback_m224(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BaseCardboardDevice::SetStereoScreen(UnityEngine.RenderTexture)
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_TextureMethodDeclarations.h"
extern "C" void BaseCardboardDevice_SetStereoScreen_m212 (BaseCardboardDevice_t57 * __this, RenderTexture_t12 * ___stereoScreen, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		RenderTexture_t12 * L_0 = ___stereoScreen;
		bool L_1 = Object_op_Inequality_m312(NULL /*static, unused*/, L_0, (Object_t75 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		RenderTexture_t12 * L_2 = ___stereoScreen;
		NullCheck(L_2);
		int32_t L_3 = Texture_GetNativeTextureID_m542(L_2, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
	}

IL_0018:
	{
		BaseCardboardDevice_SetTextureId_m225(NULL /*static, unused*/, G_B3_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BaseCardboardDevice::UpdateState()
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4MethodDeclarations.h"
// MutablePose3D
#include "AssemblyU2DCSharp_MutablePose3DMethodDeclarations.h"
extern "C" void BaseCardboardDevice_UpdateState_m213 (BaseCardboardDevice_t57 * __this, const MethodInfo* method)
{
	{
		SingleU5BU5D_t44* L_0 = (__this->___headData_20);
		float L_1 = Time_get_smoothDeltaTime_m543(NULL /*static, unused*/, /*hidden argument*/NULL);
		BaseCardboardDevice_GetHeadPose_m233(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		Matrix4x4_t43 * L_2 = &(__this->___headView_23);
		SingleU5BU5D_t44* L_3 = (__this->___headData_20);
		BaseCardboardDevice_ExtractMatrix_m220(NULL /*static, unused*/, L_2, L_3, 0, /*hidden argument*/NULL);
		MutablePose3D_t51 * L_4 = (((BaseVRDevice_t28 *)__this)->___headPose_1);
		Matrix4x4_t43 * L_5 = &(__this->___headView_23);
		Matrix4x4_t43  L_6 = Matrix4x4_get_inverse_m544(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		MutablePose3D_SetRightHanded_m173(L_4, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BaseCardboardDevice::UpdateScreenData()
extern "C" void BaseCardboardDevice_UpdateScreenData_m214 (BaseCardboardDevice_t57 * __this, const MethodInfo* method)
{
	{
		BaseCardboardDevice_UpdateProfile_m219(__this, /*hidden argument*/NULL);
		bool L_0 = (__this->___debugDisableNativeProjections_27);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		BaseVRDevice_ComputeEyesFromProfile_m256(__this, /*hidden argument*/NULL);
		goto IL_0022;
	}

IL_001c:
	{
		BaseCardboardDevice_UpdateView_m218(__this, /*hidden argument*/NULL);
	}

IL_0022:
	{
		return;
	}
}
// System.Void BaseCardboardDevice::Recenter()
extern "C" void BaseCardboardDevice_Recenter_m215 (BaseCardboardDevice_t57 * __this, const MethodInfo* method)
{
	{
		BaseCardboardDevice_ResetHeadTracker_m231(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BaseCardboardDevice::PostRender(System.Boolean)
// UnityEngine.GL
#include "UnityEngine_UnityEngine_GLMethodDeclarations.h"
extern "C" void BaseCardboardDevice_PostRender_m216 (BaseCardboardDevice_t57 * __this, bool ___vrMode, const MethodInfo* method)
{
	{
		bool L_0 = ___vrMode;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		GL_IssuePluginEvent_m545(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		GL_InvalidateState_m546(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0011:
	{
		VirtActionInvoker0::Invoke(28 /* System.Void BaseCardboardDevice::ProcessEvents() */, __this);
		return;
	}
}
// System.Void BaseCardboardDevice::OnApplicationQuit()
extern "C" void BaseCardboardDevice_OnApplicationQuit_m217 (BaseCardboardDevice_t57 * __this, const MethodInfo* method)
{
	{
		BaseCardboardDevice_Stop_m235(NULL /*static, unused*/, /*hidden argument*/NULL);
		BaseVRDevice_OnApplicationQuit_m254(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BaseCardboardDevice::UpdateView()
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
extern "C" void BaseCardboardDevice_UpdateView_m218 (BaseCardboardDevice_t57 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		SingleU5BU5D_t44* L_0 = (__this->___viewData_21);
		BaseCardboardDevice_GetViewParameters_m234(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = 0;
		Matrix4x4_t43 * L_1 = &(__this->___leftEyeView_24);
		SingleU5BU5D_t44* L_2 = (__this->___viewData_21);
		int32_t L_3 = V_0;
		int32_t L_4 = BaseCardboardDevice_ExtractMatrix_m220(NULL /*static, unused*/, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		Matrix4x4_t43 * L_5 = &(__this->___rightEyeView_25);
		SingleU5BU5D_t44* L_6 = (__this->___viewData_21);
		int32_t L_7 = V_0;
		int32_t L_8 = BaseCardboardDevice_ExtractMatrix_m220(NULL /*static, unused*/, L_5, L_6, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		MutablePose3D_t51 * L_9 = (((BaseVRDevice_t28 *)__this)->___leftEyePose_2);
		Matrix4x4_t43 * L_10 = &(__this->___leftEyeView_24);
		Matrix4x4_t43  L_11 = Matrix4x4_get_inverse_m544(L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		MutablePose3D_SetRightHanded_m173(L_9, L_11, /*hidden argument*/NULL);
		MutablePose3D_t51 * L_12 = (((BaseVRDevice_t28 *)__this)->___rightEyePose_3);
		Matrix4x4_t43 * L_13 = &(__this->___rightEyeView_25);
		Matrix4x4_t43  L_14 = Matrix4x4_get_inverse_m544(L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		MutablePose3D_SetRightHanded_m173(L_12, L_14, /*hidden argument*/NULL);
		Matrix4x4_t43 * L_15 = &(((BaseVRDevice_t28 *)__this)->___leftEyeDistortedProjection_4);
		SingleU5BU5D_t44* L_16 = (__this->___viewData_21);
		int32_t L_17 = V_0;
		int32_t L_18 = BaseCardboardDevice_ExtractMatrix_m220(NULL /*static, unused*/, L_15, L_16, L_17, /*hidden argument*/NULL);
		V_0 = L_18;
		Matrix4x4_t43 * L_19 = &(((BaseVRDevice_t28 *)__this)->___rightEyeDistortedProjection_5);
		SingleU5BU5D_t44* L_20 = (__this->___viewData_21);
		int32_t L_21 = V_0;
		int32_t L_22 = BaseCardboardDevice_ExtractMatrix_m220(NULL /*static, unused*/, L_19, L_20, L_21, /*hidden argument*/NULL);
		V_0 = L_22;
		Matrix4x4_t43 * L_23 = &(((BaseVRDevice_t28 *)__this)->___leftEyeUndistortedProjection_6);
		SingleU5BU5D_t44* L_24 = (__this->___viewData_21);
		int32_t L_25 = V_0;
		int32_t L_26 = BaseCardboardDevice_ExtractMatrix_m220(NULL /*static, unused*/, L_23, L_24, L_25, /*hidden argument*/NULL);
		V_0 = L_26;
		Matrix4x4_t43 * L_27 = &(((BaseVRDevice_t28 *)__this)->___rightEyeUndistortedProjection_7);
		SingleU5BU5D_t44* L_28 = (__this->___viewData_21);
		int32_t L_29 = V_0;
		int32_t L_30 = BaseCardboardDevice_ExtractMatrix_m220(NULL /*static, unused*/, L_27, L_28, L_29, /*hidden argument*/NULL);
		V_0 = L_30;
		Rect_t18 * L_31 = &(((BaseVRDevice_t28 *)__this)->___leftEyeUndistortedViewport_10);
		SingleU5BU5D_t44* L_32 = (__this->___viewData_21);
		int32_t L_33 = V_0;
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, L_33);
		int32_t L_34 = L_33;
		SingleU5BU5D_t44* L_35 = (__this->___viewData_21);
		int32_t L_36 = V_0;
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, ((int32_t)((int32_t)L_36+(int32_t)1)));
		int32_t L_37 = ((int32_t)((int32_t)L_36+(int32_t)1));
		SingleU5BU5D_t44* L_38 = (__this->___viewData_21);
		int32_t L_39 = V_0;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, ((int32_t)((int32_t)L_39+(int32_t)2)));
		int32_t L_40 = ((int32_t)((int32_t)L_39+(int32_t)2));
		SingleU5BU5D_t44* L_41 = (__this->___viewData_21);
		int32_t L_42 = V_0;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, ((int32_t)((int32_t)L_42+(int32_t)3)));
		int32_t L_43 = ((int32_t)((int32_t)L_42+(int32_t)3));
		Rect_Set_m547(L_31, (*(float*)(float*)SZArrayLdElema(L_32, L_34, sizeof(float))), (*(float*)(float*)SZArrayLdElema(L_35, L_37, sizeof(float))), (*(float*)(float*)SZArrayLdElema(L_38, L_40, sizeof(float))), (*(float*)(float*)SZArrayLdElema(L_41, L_43, sizeof(float))), /*hidden argument*/NULL);
		Rect_t18  L_44 = (((BaseVRDevice_t28 *)__this)->___leftEyeUndistortedViewport_10);
		((BaseVRDevice_t28 *)__this)->___leftEyeDistortedViewport_8 = L_44;
		int32_t L_45 = V_0;
		V_0 = ((int32_t)((int32_t)L_45+(int32_t)4));
		Rect_t18 * L_46 = &(((BaseVRDevice_t28 *)__this)->___rightEyeUndistortedViewport_11);
		SingleU5BU5D_t44* L_47 = (__this->___viewData_21);
		int32_t L_48 = V_0;
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, L_48);
		int32_t L_49 = L_48;
		SingleU5BU5D_t44* L_50 = (__this->___viewData_21);
		int32_t L_51 = V_0;
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, ((int32_t)((int32_t)L_51+(int32_t)1)));
		int32_t L_52 = ((int32_t)((int32_t)L_51+(int32_t)1));
		SingleU5BU5D_t44* L_53 = (__this->___viewData_21);
		int32_t L_54 = V_0;
		NullCheck(L_53);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_53, ((int32_t)((int32_t)L_54+(int32_t)2)));
		int32_t L_55 = ((int32_t)((int32_t)L_54+(int32_t)2));
		SingleU5BU5D_t44* L_56 = (__this->___viewData_21);
		int32_t L_57 = V_0;
		NullCheck(L_56);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_56, ((int32_t)((int32_t)L_57+(int32_t)3)));
		int32_t L_58 = ((int32_t)((int32_t)L_57+(int32_t)3));
		Rect_Set_m547(L_46, (*(float*)(float*)SZArrayLdElema(L_47, L_49, sizeof(float))), (*(float*)(float*)SZArrayLdElema(L_50, L_52, sizeof(float))), (*(float*)(float*)SZArrayLdElema(L_53, L_55, sizeof(float))), (*(float*)(float*)SZArrayLdElema(L_56, L_58, sizeof(float))), /*hidden argument*/NULL);
		Rect_t18  L_59 = (((BaseVRDevice_t28 *)__this)->___rightEyeUndistortedViewport_11);
		((BaseVRDevice_t28 *)__this)->___rightEyeDistortedViewport_9 = L_59;
		int32_t L_60 = V_0;
		V_0 = ((int32_t)((int32_t)L_60+(int32_t)4));
		return;
	}
}
// System.Void BaseCardboardDevice::UpdateProfile()
// CardboardProfile
#include "AssemblyU2DCSharp_CardboardProfileMethodDeclarations.h"
extern TypeInfo* Device_t38_il2cpp_TypeInfo_var;
extern TypeInfo* Screen_t34_il2cpp_TypeInfo_var;
extern TypeInfo* CardboardProfile_t41_il2cpp_TypeInfo_var;
extern "C" void BaseCardboardDevice_UpdateProfile_m219 (BaseCardboardDevice_t57 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Device_t38_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		Screen_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		CardboardProfile_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(28);
		s_Il2CppMethodIntialized = true;
	}
	Device_t38  V_0 = {0};
	Screen_t34  V_1 = {0};
	{
		SingleU5BU5D_t44* L_0 = (__this->___profileData_22);
		BaseCardboardDevice_GetProfile_m232(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Initobj (Device_t38_il2cpp_TypeInfo_var, (&V_0));
		Initobj (Screen_t34_il2cpp_TypeInfo_var, (&V_1));
		MaxFOV_t36 * L_1 = &((&V_0)->___maxFOV_1);
		SingleU5BU5D_t44* L_2 = (__this->___profileData_22);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		int32_t L_3 = 0;
		L_1->___outer_0 = (*(float*)(float*)SZArrayLdElema(L_2, L_3, sizeof(float)));
		MaxFOV_t36 * L_4 = &((&V_0)->___maxFOV_1);
		SingleU5BU5D_t44* L_5 = (__this->___profileData_22);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 1);
		int32_t L_6 = 1;
		L_4->___upper_2 = (*(float*)(float*)SZArrayLdElema(L_5, L_6, sizeof(float)));
		MaxFOV_t36 * L_7 = &((&V_0)->___maxFOV_1);
		SingleU5BU5D_t44* L_8 = (__this->___profileData_22);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		int32_t L_9 = 2;
		L_7->___inner_1 = (*(float*)(float*)SZArrayLdElema(L_8, L_9, sizeof(float)));
		MaxFOV_t36 * L_10 = &((&V_0)->___maxFOV_1);
		SingleU5BU5D_t44* L_11 = (__this->___profileData_22);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 3);
		int32_t L_12 = 3;
		L_10->___lower_3 = (*(float*)(float*)SZArrayLdElema(L_11, L_12, sizeof(float)));
		SingleU5BU5D_t44* L_13 = (__this->___profileData_22);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 4);
		int32_t L_14 = 4;
		(&V_1)->___width_0 = (*(float*)(float*)SZArrayLdElema(L_13, L_14, sizeof(float)));
		SingleU5BU5D_t44* L_15 = (__this->___profileData_22);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 5);
		int32_t L_16 = 5;
		(&V_1)->___height_1 = (*(float*)(float*)SZArrayLdElema(L_15, L_16, sizeof(float)));
		SingleU5BU5D_t44* L_17 = (__this->___profileData_22);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 6);
		int32_t L_18 = 6;
		(&V_1)->___border_2 = (*(float*)(float*)SZArrayLdElema(L_17, L_18, sizeof(float)));
		Lenses_t35 * L_19 = &((&V_0)->___lenses_0);
		SingleU5BU5D_t44* L_20 = (__this->___profileData_22);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 7);
		int32_t L_21 = 7;
		L_19->___separation_3 = (*(float*)(float*)SZArrayLdElema(L_20, L_21, sizeof(float)));
		Lenses_t35 * L_22 = &((&V_0)->___lenses_0);
		SingleU5BU5D_t44* L_23 = (__this->___profileData_22);
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, 8);
		int32_t L_24 = 8;
		L_22->___offset_4 = (*(float*)(float*)SZArrayLdElema(L_23, L_24, sizeof(float)));
		Lenses_t35 * L_25 = &((&V_0)->___lenses_0);
		SingleU5BU5D_t44* L_26 = (__this->___profileData_22);
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, ((int32_t)9));
		int32_t L_27 = ((int32_t)9);
		L_25->___screenDistance_5 = (*(float*)(float*)SZArrayLdElema(L_26, L_27, sizeof(float)));
		Lenses_t35 * L_28 = &((&V_0)->___lenses_0);
		SingleU5BU5D_t44* L_29 = (__this->___profileData_22);
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, ((int32_t)10));
		int32_t L_30 = ((int32_t)10);
		L_28->___alignment_6 = (((int32_t)(*(float*)(float*)SZArrayLdElema(L_29, L_30, sizeof(float)))));
		Distortion_t37 * L_31 = &((&V_0)->___distortion_2);
		SingleU5BU5D_t44* L_32 = (__this->___profileData_22);
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, ((int32_t)11));
		int32_t L_33 = ((int32_t)11);
		L_31->___k1_0 = (*(float*)(float*)SZArrayLdElema(L_32, L_33, sizeof(float)));
		Distortion_t37 * L_34 = &((&V_0)->___distortion_2);
		SingleU5BU5D_t44* L_35 = (__this->___profileData_22);
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, ((int32_t)12));
		int32_t L_36 = ((int32_t)12);
		L_34->___k2_1 = (*(float*)(float*)SZArrayLdElema(L_35, L_36, sizeof(float)));
		Distortion_t37  L_37 = ((&V_0)->___distortion_2);
		IL2CPP_RUNTIME_CLASS_INIT(CardboardProfile_t41_il2cpp_TypeInfo_var);
		Distortion_t37  L_38 = CardboardProfile_ApproximateInverse_m142(NULL /*static, unused*/, L_37, (1.0f), ((int32_t)10), /*hidden argument*/NULL);
		(&V_0)->___inverse_3 = L_38;
		CardboardProfile_t41 * L_39 = BaseVRDevice_get_Profile_m238(__this, /*hidden argument*/NULL);
		Screen_t34  L_40 = V_1;
		NullCheck(L_39);
		L_39->___screen_0 = L_40;
		CardboardProfile_t41 * L_41 = BaseVRDevice_get_Profile_m238(__this, /*hidden argument*/NULL);
		Device_t38  L_42 = V_0;
		NullCheck(L_41);
		L_41->___device_1 = L_42;
		return;
	}
}
// System.Int32 BaseCardboardDevice::ExtractMatrix(UnityEngine.Matrix4x4&,System.Single[],System.Int32)
#include "mscorlib_ArrayTypes.h"
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" int32_t BaseCardboardDevice_ExtractMatrix_m220 (Object_t * __this /* static, unused */, Matrix4x4_t43 * ___mat, SingleU5BU5D_t44* ___data, int32_t ___i, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_002d;
	}

IL_0007:
	{
		V_1 = 0;
		goto IL_0022;
	}

IL_000e:
	{
		Matrix4x4_t43 * L_0 = ___mat;
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		SingleU5BU5D_t44* L_3 = ___data;
		int32_t L_4 = ___i;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		Matrix4x4_set_Item_m402(L_0, L_1, L_2, (*(float*)(float*)SZArrayLdElema(L_3, L_5, sizeof(float))), /*hidden argument*/NULL);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)((int32_t)L_6+(int32_t)1));
		int32_t L_7 = ___i;
		___i = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0022:
	{
		int32_t L_8 = V_1;
		if ((((int32_t)L_8) < ((int32_t)4)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_002d:
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) < ((int32_t)4)))
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_11 = ___i;
		return L_11;
	}
}
// System.Void BaseCardboardDevice::ProcessEvents()
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"
extern TypeInfo* Int32U5BU5D_t107_il2cpp_TypeInfo_var;
extern const MethodInfo* Queue_1_CopyTo_m549_MethodInfo_var;
extern const MethodInfo* Queue_1_Clear_m550_MethodInfo_var;
extern "C" void BaseCardboardDevice_ProcessEvents_m221 (BaseCardboardDevice_t57 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t107_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(55);
		Queue_1_CopyTo_m549_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483687);
		Queue_1_Clear_m550_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483688);
		s_Il2CppMethodIntialized = true;
	}
	Int32U5BU5D_t107* V_0 = {0};
	Queue_1_t58 * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Int32U5BU5D_t107* V_4 = {0};
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Exception_t108 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t108 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (Int32U5BU5D_t107*)NULL;
		Queue_1_t58 * L_0 = (__this->___eventQueue_26);
		V_1 = L_0;
		Queue_1_t58 * L_1 = V_1;
		Monitor_Enter_m548(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			Queue_1_t58 * L_2 = (__this->___eventQueue_26);
			NullCheck(L_2);
			int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 System.Collections.Generic.Queue`1<System.Int32>::get_Count() */, L_2);
			V_2 = L_3;
			int32_t L_4 = V_2;
			if ((((int32_t)L_4) <= ((int32_t)0)))
			{
				goto IL_0041;
			}
		}

IL_0022:
		{
			int32_t L_5 = V_2;
			V_0 = ((Int32U5BU5D_t107*)SZArrayNew(Int32U5BU5D_t107_il2cpp_TypeInfo_var, L_5));
			Queue_1_t58 * L_6 = (__this->___eventQueue_26);
			Int32U5BU5D_t107* L_7 = V_0;
			NullCheck(L_6);
			Queue_1_CopyTo_m549(L_6, L_7, 0, /*hidden argument*/Queue_1_CopyTo_m549_MethodInfo_var);
			Queue_1_t58 * L_8 = (__this->___eventQueue_26);
			NullCheck(L_8);
			Queue_1_Clear_m550(L_8, /*hidden argument*/Queue_1_Clear_m550_MethodInfo_var);
		}

IL_0041:
		{
			IL2CPP_LEAVE(0x4D, FINALLY_0046);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t108 *)e.ex;
		goto FINALLY_0046;
	}

FINALLY_0046:
	{ // begin finally (depth: 1)
		Queue_1_t58 * L_9 = V_1;
		Monitor_Exit_m551(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(70)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(70)
	{
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t108 *)
	}

IL_004d:
	{
		Int32U5BU5D_t107* L_10 = V_0;
		if (L_10)
		{
			goto IL_0054;
		}
	}
	{
		return;
	}

IL_0054:
	{
		Int32U5BU5D_t107* L_11 = V_0;
		V_4 = L_11;
		V_5 = 0;
		goto IL_00ab;
	}

IL_005f:
	{
		Int32U5BU5D_t107* L_12 = V_4;
		int32_t L_13 = V_5;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = L_13;
		V_3 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_12, L_14, sizeof(int32_t)));
		int32_t L_15 = V_3;
		V_6 = L_15;
		int32_t L_16 = V_6;
		if (((int32_t)((int32_t)L_16-(int32_t)1)) == 0)
		{
			goto IL_0082;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)1)) == 1)
		{
			goto IL_008e;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)1)) == 2)
		{
			goto IL_009a;
		}
	}
	{
		goto IL_00a5;
	}

IL_0082:
	{
		((BaseVRDevice_t28 *)__this)->___triggered_12 = 1;
		goto IL_00a5;
	}

IL_008e:
	{
		((BaseVRDevice_t28 *)__this)->___tilted_13 = 1;
		goto IL_00a5;
	}

IL_009a:
	{
		VirtActionInvoker0::Invoke(19 /* System.Void BaseCardboardDevice::UpdateScreenData() */, __this);
		goto IL_00a5;
	}

IL_00a5:
	{
		int32_t L_17 = V_5;
		V_5 = ((int32_t)((int32_t)L_17+(int32_t)1));
	}

IL_00ab:
	{
		int32_t L_18 = V_5;
		Int32U5BU5D_t107* L_19 = V_4;
		NullCheck(L_19);
		if ((((int32_t)L_18) < ((int32_t)(((int32_t)(((Array_t *)L_19)->max_length))))))
		{
			goto IL_005f;
		}
	}
	{
		return;
	}
}
// System.Void BaseCardboardDevice::OnVREvent(System.Int32)
void STDCALL native_delegate_wrapper_BaseCardboardDevice_OnVREvent_m222(int32_t ___eventID)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;
	// Marshaling of parameter '___eventID' to managed representation

	BaseCardboardDevice_OnVREvent_m222(NULL, ___eventID, NULL);

	// Marshaling of parameter '___eventID' to native representation

}
extern const methodPointerType* native_delegate_wrapper_BaseCardboardDevice_OnVREvent_m222_indirect = (const methodPointerType*)&native_delegate_wrapper_BaseCardboardDevice_OnVREvent_m222;
extern TypeInfo* BaseVRDevice_t28_il2cpp_TypeInfo_var;
extern TypeInfo* BaseCardboardDevice_t57_il2cpp_TypeInfo_var;
extern const MethodInfo* Queue_1_Enqueue_m552_MethodInfo_var;
extern "C" void BaseCardboardDevice_OnVREvent_m222 (Object_t * __this /* static, unused */, int32_t ___eventID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BaseVRDevice_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		BaseCardboardDevice_t57_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(56);
		Queue_1_Enqueue_m552_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483689);
		s_Il2CppMethodIntialized = true;
	}
	BaseCardboardDevice_t57 * V_0 = {0};
	Queue_1_t58 * V_1 = {0};
	Exception_t108 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t108 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(BaseVRDevice_t28_il2cpp_TypeInfo_var);
		BaseVRDevice_t28 * L_0 = BaseVRDevice_GetDevice_m258(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = ((BaseCardboardDevice_t57 *)IsInstClass(L_0, BaseCardboardDevice_t57_il2cpp_TypeInfo_var));
		BaseCardboardDevice_t57 * L_1 = V_0;
		NullCheck(L_1);
		Queue_1_t58 * L_2 = (L_1->___eventQueue_26);
		V_1 = L_2;
		Queue_1_t58 * L_3 = V_1;
		Monitor_Enter_m548(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		BaseCardboardDevice_t57 * L_4 = V_0;
		NullCheck(L_4);
		Queue_1_t58 * L_5 = (L_4->___eventQueue_26);
		int32_t L_6 = ___eventID;
		NullCheck(L_5);
		Queue_1_Enqueue_m552(L_5, L_6, /*hidden argument*/Queue_1_Enqueue_m552_MethodInfo_var);
		IL2CPP_LEAVE(0x30, FINALLY_0029);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t108 *)e.ex;
		goto FINALLY_0029;
	}

FINALLY_0029:
	{ // begin finally (depth: 1)
		Queue_1_t58 * L_7 = V_1;
		Monitor_Exit_m551(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(41)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(41)
	{
		IL2CPP_JUMP_TBL(0x30, IL_0030)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t108 *)
	}

IL_0030:
	{
		return;
	}
}
// System.Void BaseCardboardDevice::Start(System.Int32,System.Int32,System.Single,System.Single)
extern "C" {void DEFAULT_CALL Start(int32_t, int32_t, float, float);}
extern "C" void BaseCardboardDevice_Start_m223 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, float ___xdpi, float ___ydpi, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t, float, float);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)Start;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'Start'"));
		}
	}

	// Marshaling of parameter '___width' to native representation

	// Marshaling of parameter '___height' to native representation

	// Marshaling of parameter '___xdpi' to native representation

	// Marshaling of parameter '___ydpi' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___width, ___height, ___xdpi, ___ydpi);

	// Marshaling cleanup of parameter '___width' native representation

	// Marshaling cleanup of parameter '___height' native representation

	// Marshaling cleanup of parameter '___xdpi' native representation

	// Marshaling cleanup of parameter '___ydpi' native representation

}
// System.Void BaseCardboardDevice::SetEventCallback(BaseCardboardDevice/VREventCallback)
// BaseCardboardDevice/VREventCallback
#include "AssemblyU2DCSharp_BaseCardboardDevice_VREventCallback.h"
extern "C" {void DEFAULT_CALL SetEventCallback(methodPointerType);}
extern "C" void BaseCardboardDevice_SetEventCallback_m224 (Object_t * __this /* static, unused */, VREventCallback_t56 * ___callback, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (methodPointerType);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)SetEventCallback;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'SetEventCallback'"));
		}
	}

	// Marshaling of parameter '___callback' to native representation
	methodPointerType ____callback_marshaled = { 0 };
	____callback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(___callback));

	// Native function invocation
	_il2cpp_pinvoke_func(____callback_marshaled);

	// Marshaling cleanup of parameter '___callback' native representation

}
// System.Void BaseCardboardDevice::SetTextureId(System.Int32)
extern "C" {void DEFAULT_CALL SetTextureId(int32_t);}
extern "C" void BaseCardboardDevice_SetTextureId_m225 (Object_t * __this /* static, unused */, int32_t ___id, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)SetTextureId;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'SetTextureId'"));
		}
	}

	// Marshaling of parameter '___id' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___id);

	// Marshaling cleanup of parameter '___id' native representation

}
// System.Void BaseCardboardDevice::EnableDistortionCorrection(System.Boolean)
extern "C" {void DEFAULT_CALL EnableDistortionCorrection(int32_t);}
extern "C" void BaseCardboardDevice_EnableDistortionCorrection_m226 (Object_t * __this /* static, unused */, bool ___enable, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)EnableDistortionCorrection;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'EnableDistortionCorrection'"));
		}
	}

	// Marshaling of parameter '___enable' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___enable);

	// Marshaling cleanup of parameter '___enable' native representation

}
// System.Void BaseCardboardDevice::EnableAlignmentMarker(System.Boolean)
extern "C" {void DEFAULT_CALL EnableAlignmentMarker(int32_t);}
extern "C" void BaseCardboardDevice_EnableAlignmentMarker_m227 (Object_t * __this /* static, unused */, bool ___enable, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)EnableAlignmentMarker;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'EnableAlignmentMarker'"));
		}
	}

	// Marshaling of parameter '___enable' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___enable);

	// Marshaling cleanup of parameter '___enable' native representation

}
// System.Void BaseCardboardDevice::EnableAutoDriftCorrection(System.Boolean)
extern "C" {void DEFAULT_CALL EnableAutoDriftCorrection(int32_t);}
extern "C" void BaseCardboardDevice_EnableAutoDriftCorrection_m228 (Object_t * __this /* static, unused */, bool ___enable, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)EnableAutoDriftCorrection;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'EnableAutoDriftCorrection'"));
		}
	}

	// Marshaling of parameter '___enable' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___enable);

	// Marshaling cleanup of parameter '___enable' native representation

}
// System.Void BaseCardboardDevice::EnableElectronicDisplayStabilization(System.Boolean)
extern "C" {void DEFAULT_CALL EnableElectronicDisplayStabilization(int32_t);}
extern "C" void BaseCardboardDevice_EnableElectronicDisplayStabilization_m229 (Object_t * __this /* static, unused */, bool ___enable, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)EnableElectronicDisplayStabilization;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'EnableElectronicDisplayStabilization'"));
		}
	}

	// Marshaling of parameter '___enable' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___enable);

	// Marshaling cleanup of parameter '___enable' native representation

}
// System.Void BaseCardboardDevice::SetNeckModelFactor(System.Single)
extern "C" {void DEFAULT_CALL SetNeckModelFactor(float);}
extern "C" void BaseCardboardDevice_SetNeckModelFactor_m230 (Object_t * __this /* static, unused */, float ___factor, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (float);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)SetNeckModelFactor;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'SetNeckModelFactor'"));
		}
	}

	// Marshaling of parameter '___factor' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___factor);

	// Marshaling cleanup of parameter '___factor' native representation

}
// System.Void BaseCardboardDevice::ResetHeadTracker()
extern "C" {void DEFAULT_CALL ResetHeadTracker();}
extern "C" void BaseCardboardDevice_ResetHeadTracker_m231 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)ResetHeadTracker;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'ResetHeadTracker'"));
		}
	}

	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.Void BaseCardboardDevice::GetProfile(System.Single[])
extern "C" {void DEFAULT_CALL GetProfile(float*);}
extern "C" void BaseCardboardDevice_GetProfile_m232 (Object_t * __this /* static, unused */, SingleU5BU5D_t44* ___profile, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (float*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)GetProfile;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'GetProfile'"));
		}
	}

	// Marshaling of parameter '___profile' to native representation
	float* ____profile_marshaled = { 0 };
	____profile_marshaled = il2cpp_codegen_marshal_array<float>((Il2CppCodeGenArray*)___profile);

	// Native function invocation
	_il2cpp_pinvoke_func(____profile_marshaled);

	// Marshaling cleanup of parameter '___profile' native representation

}
// System.Void BaseCardboardDevice::GetHeadPose(System.Single[],System.Single)
extern "C" {void DEFAULT_CALL GetHeadPose(float*, float);}
extern "C" void BaseCardboardDevice_GetHeadPose_m233 (Object_t * __this /* static, unused */, SingleU5BU5D_t44* ___pose, float ___fps, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (float*, float);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)GetHeadPose;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'GetHeadPose'"));
		}
	}

	// Marshaling of parameter '___pose' to native representation
	float* ____pose_marshaled = { 0 };
	____pose_marshaled = il2cpp_codegen_marshal_array<float>((Il2CppCodeGenArray*)___pose);

	// Marshaling of parameter '___fps' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(____pose_marshaled, ___fps);

	// Marshaling cleanup of parameter '___pose' native representation

	// Marshaling cleanup of parameter '___fps' native representation

}
// System.Void BaseCardboardDevice::GetViewParameters(System.Single[])
extern "C" {void DEFAULT_CALL GetViewParameters(float*);}
extern "C" void BaseCardboardDevice_GetViewParameters_m234 (Object_t * __this /* static, unused */, SingleU5BU5D_t44* ___viewParams, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (float*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)GetViewParameters;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'GetViewParameters'"));
		}
	}

	// Marshaling of parameter '___viewParams' to native representation
	float* ____viewParams_marshaled = { 0 };
	____viewParams_marshaled = il2cpp_codegen_marshal_array<float>((Il2CppCodeGenArray*)___viewParams);

	// Native function invocation
	_il2cpp_pinvoke_func(____viewParams_marshaled);

	// Marshaling cleanup of parameter '___viewParams' native representation

}
// System.Void BaseCardboardDevice::Stop()
extern "C" {void DEFAULT_CALL Stop();}
extern "C" void BaseCardboardDevice_Stop_m235 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)Stop;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'Stop'"));
		}
	}

	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.Text.RegularExpressions.Regex
#include "System_System_Text_RegularExpressions_Regex.h"
// System.Version
#include "mscorlib_System_Version.h"
// CardboardiOSDevice
#include "AssemblyU2DCSharp_CardboardiOSDevice.h"
// System.Text.RegularExpressions.Regex
#include "System_System_Text_RegularExpressions_RegexMethodDeclarations.h"
// System.Version
#include "mscorlib_System_VersionMethodDeclarations.h"
// CardboardiOSDevice
#include "AssemblyU2DCSharp_CardboardiOSDeviceMethodDeclarations.h"
// System.Void BaseVRDevice::.ctor()
// MutablePose3D
#include "AssemblyU2DCSharp_MutablePose3DMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// CardboardProfile
#include "AssemblyU2DCSharp_CardboardProfileMethodDeclarations.h"
// BaseVRDevice
#include "AssemblyU2DCSharp_BaseVRDeviceMethodDeclarations.h"
extern TypeInfo* MutablePose3D_t51_il2cpp_TypeInfo_var;
extern TypeInfo* CardboardProfile_t41_il2cpp_TypeInfo_var;
extern "C" void BaseVRDevice__ctor_m236 (BaseVRDevice_t28 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MutablePose3D_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		CardboardProfile_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(28);
		s_Il2CppMethodIntialized = true;
	}
	{
		MutablePose3D_t51 * L_0 = (MutablePose3D_t51 *)il2cpp_codegen_object_new (MutablePose3D_t51_il2cpp_TypeInfo_var);
		MutablePose3D__ctor_m170(L_0, /*hidden argument*/NULL);
		__this->___headPose_1 = L_0;
		MutablePose3D_t51 * L_1 = (MutablePose3D_t51 *)il2cpp_codegen_object_new (MutablePose3D_t51_il2cpp_TypeInfo_var);
		MutablePose3D__ctor_m170(L_1, /*hidden argument*/NULL);
		__this->___leftEyePose_2 = L_1;
		MutablePose3D_t51 * L_2 = (MutablePose3D_t51 *)il2cpp_codegen_object_new (MutablePose3D_t51_il2cpp_TypeInfo_var);
		MutablePose3D__ctor_m170(L_2, /*hidden argument*/NULL);
		__this->___rightEyePose_3 = L_2;
		Object__ctor_m355(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CardboardProfile_t41_il2cpp_TypeInfo_var);
		CardboardProfile_t41 * L_3 = ((CardboardProfile_t41_StaticFields*)CardboardProfile_t41_il2cpp_TypeInfo_var->static_fields)->___Default_14;
		NullCheck(L_3);
		CardboardProfile_t41 * L_4 = CardboardProfile_Clone_m134(L_3, /*hidden argument*/NULL);
		BaseVRDevice_set_Profile_m239(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BaseVRDevice::.cctor()
extern "C" void BaseVRDevice__cctor_m237 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// CardboardProfile BaseVRDevice::get_Profile()
extern "C" CardboardProfile_t41 * BaseVRDevice_get_Profile_m238 (BaseVRDevice_t28 * __this, const MethodInfo* method)
{
	{
		CardboardProfile_t41 * L_0 = (__this->___U3CProfileU3Ek__BackingField_14);
		return L_0;
	}
}
// System.Void BaseVRDevice::set_Profile(CardboardProfile)
// CardboardProfile
#include "AssemblyU2DCSharp_CardboardProfile.h"
extern "C" void BaseVRDevice_set_Profile_m239 (BaseVRDevice_t28 * __this, CardboardProfile_t41 * ___value, const MethodInfo* method)
{
	{
		CardboardProfile_t41 * L_0 = ___value;
		__this->___U3CProfileU3Ek__BackingField_14 = L_0;
		return;
	}
}
// System.Boolean BaseVRDevice::SupportsNativeDistortionCorrection(System.Collections.Generic.List`1<System.String>)
// System.Collections.Generic.List`1<System.String>
#include "mscorlib_System_Collections_Generic_List_1_gen.h"
// UnityEngine.SystemInfo
#include "UnityEngine_UnityEngine_SystemInfoMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral32;
extern Il2CppCodeGenString* _stringLiteral33;
extern "C" bool BaseVRDevice_SupportsNativeDistortionCorrection_m240 (BaseVRDevice_t28 * __this, List_1_t66 * ___diagnostics, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral32 = il2cpp_codegen_string_literal_from_index(32);
		_stringLiteral33 = il2cpp_codegen_string_literal_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	{
		V_0 = 1;
		bool L_0 = SystemInfo_get_supportsRenderTextures_m309(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		List_1_t66 * L_1 = ___diagnostics;
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_1, _stringLiteral32);
		V_0 = 0;
	}

IL_0019:
	{
		bool L_2 = BaseVRDevice_SupportsUnityRenderEvent_m242(__this, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0031;
		}
	}
	{
		List_1_t66 * L_3 = ___diagnostics;
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_3, _stringLiteral33);
		V_0 = 0;
	}

IL_0031:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean BaseVRDevice::SupportsNativeUILayer(System.Collections.Generic.List`1<System.String>)
extern Il2CppCodeGenString* _stringLiteral33;
extern "C" bool BaseVRDevice_SupportsNativeUILayer_m241 (BaseVRDevice_t28 * __this, List_1_t66 * ___diagnostics, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral33 = il2cpp_codegen_string_literal_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	{
		V_0 = 1;
		bool L_0 = BaseVRDevice_SupportsUnityRenderEvent_m242(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		List_1_t66 * L_1 = ___diagnostics;
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_1, _stringLiteral33);
		V_0 = 0;
	}

IL_001a:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean BaseVRDevice::SupportsUnityRenderEvent()
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
// System.Text.RegularExpressions.Regex
#include "System_System_Text_RegularExpressions_RegexMethodDeclarations.h"
// System.Version
#include "mscorlib_System_VersionMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
extern TypeInfo* Regex_t109_il2cpp_TypeInfo_var;
extern TypeInfo* Version_t110_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral34;
extern Il2CppCodeGenString* _stringLiteral35;
extern Il2CppCodeGenString* _stringLiteral36;
extern Il2CppCodeGenString* _stringLiteral37;
extern "C" bool BaseVRDevice_SupportsUnityRenderEvent_m242 (BaseVRDevice_t28 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Regex_t109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		Version_t110_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		_stringLiteral34 = il2cpp_codegen_string_literal_from_index(34);
		_stringLiteral35 = il2cpp_codegen_string_literal_from_index(35);
		_stringLiteral36 = il2cpp_codegen_string_literal_from_index(36);
		_stringLiteral37 = il2cpp_codegen_string_literal_from_index(37);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = {0};
	Exception_t108 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t108 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = 1;
		bool L_0 = Application_get_isMobilePlatform_m553(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0061;
		}
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			Regex_t109 * L_1 = (Regex_t109 *)il2cpp_codegen_object_new (Regex_t109_il2cpp_TypeInfo_var);
			Regex__ctor_m554(L_1, _stringLiteral34, /*hidden argument*/NULL);
			String_t* L_2 = Application_get_unityVersion_m555(NULL /*static, unused*/, /*hidden argument*/NULL);
			NullCheck(L_1);
			String_t* L_3 = Regex_Replace_m556(L_1, L_2, _stringLiteral35, /*hidden argument*/NULL);
			V_1 = L_3;
			String_t* L_4 = V_1;
			Version_t110 * L_5 = (Version_t110 *)il2cpp_codegen_object_new (Version_t110_il2cpp_TypeInfo_var);
			Version__ctor_m557(L_5, L_4, /*hidden argument*/NULL);
			Version_t110 * L_6 = (Version_t110 *)il2cpp_codegen_object_new (Version_t110_il2cpp_TypeInfo_var);
			Version__ctor_m557(L_6, _stringLiteral36, /*hidden argument*/NULL);
			bool L_7 = Version_op_LessThan_m558(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
			if (!L_7)
			{
				goto IL_0042;
			}
		}

IL_0040:
		{
			V_0 = 0;
		}

IL_0042:
		{
			goto IL_0061;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t108 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Object_t_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0047;
		throw e;
	}

CATCH_0047:
	{ // begin catch(System.Object)
		String_t* L_8 = Application_get_unityVersion_m555(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Concat_m531(NULL /*static, unused*/, _stringLiteral37, L_8, /*hidden argument*/NULL);
		Debug_LogWarning_m310(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		goto IL_0061;
	} // end catch (depth: 1)

IL_0061:
	{
		bool L_10 = V_0;
		return L_10;
	}
}
// UnityEngine.RenderTexture BaseVRDevice::CreateStereoScreen()
// UnityEngine.Screen
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTextureMethodDeclarations.h"
extern TypeInfo* RenderTexture_t12_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral38;
extern "C" RenderTexture_t12 * BaseVRDevice_CreateStereoScreen_m243 (BaseVRDevice_t28 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RenderTexture_t12_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		_stringLiteral38 = il2cpp_codegen_string_literal_from_index(38);
		s_Il2CppMethodIntialized = true;
	}
	{
		Debug_Log_m353(NULL /*static, unused*/, _stringLiteral38, /*hidden argument*/NULL);
		int32_t L_0 = Screen_get_width_m316(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = Screen_get_height_m318(NULL /*static, unused*/, /*hidden argument*/NULL);
		RenderTexture_t12 * L_2 = (RenderTexture_t12 *)il2cpp_codegen_object_new (RenderTexture_t12_il2cpp_TypeInfo_var);
		RenderTexture__ctor_m319(L_2, L_0, L_1, ((int32_t)16), 4, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean BaseVRDevice::SetDefaultDeviceProfile(System.Uri)
// System.Uri
#include "System_System_Uri.h"
extern "C" bool BaseVRDevice_SetDefaultDeviceProfile_m244 (BaseVRDevice_t28 * __this, Uri_t25 * ___uri, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Void BaseVRDevice::ShowSettingsDialog()
extern "C" void BaseVRDevice_ShowSettingsDialog_m245 (BaseVRDevice_t28 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// Pose3D BaseVRDevice::GetHeadPose()
extern "C" Pose3D_t49 * BaseVRDevice_GetHeadPose_m246 (BaseVRDevice_t28 * __this, const MethodInfo* method)
{
	{
		MutablePose3D_t51 * L_0 = (__this->___headPose_1);
		return L_0;
	}
}
// Pose3D BaseVRDevice::GetEyePose(Cardboard/Eye)
// Cardboard/Eye
#include "AssemblyU2DCSharp_Cardboard_Eye.h"
extern "C" Pose3D_t49 * BaseVRDevice_GetEyePose_m247 (BaseVRDevice_t28 * __this, int32_t ___eye, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		int32_t L_0 = ___eye;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_001b;
		}
	}
	{
		goto IL_0022;
	}

IL_0014:
	{
		MutablePose3D_t51 * L_3 = (__this->___leftEyePose_2);
		return L_3;
	}

IL_001b:
	{
		MutablePose3D_t51 * L_4 = (__this->___rightEyePose_3);
		return L_4;
	}

IL_0022:
	{
		return (Pose3D_t49 *)NULL;
	}
}
// UnityEngine.Matrix4x4 BaseVRDevice::GetProjection(Cardboard/Eye,Cardboard/Distortion)
// Cardboard/Distortion
#include "AssemblyU2DCSharp_Cardboard_Distortion.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4MethodDeclarations.h"
extern "C" Matrix4x4_t43  BaseVRDevice_GetProjection_m248 (BaseVRDevice_t28 * __this, int32_t ___eye, int32_t ___distortion, const MethodInfo* method)
{
	int32_t V_0 = {0};
	Matrix4x4_t43  G_B6_0 = {0};
	Matrix4x4_t43  G_B10_0 = {0};
	{
		int32_t L_0 = ___eye;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_002c;
		}
	}
	{
		goto IL_0044;
	}

IL_0014:
	{
		int32_t L_3 = ___distortion;
		if (L_3)
		{
			goto IL_0025;
		}
	}
	{
		Matrix4x4_t43  L_4 = (__this->___leftEyeDistortedProjection_4);
		G_B6_0 = L_4;
		goto IL_002b;
	}

IL_0025:
	{
		Matrix4x4_t43  L_5 = (__this->___leftEyeUndistortedProjection_6);
		G_B6_0 = L_5;
	}

IL_002b:
	{
		return G_B6_0;
	}

IL_002c:
	{
		int32_t L_6 = ___distortion;
		if (L_6)
		{
			goto IL_003d;
		}
	}
	{
		Matrix4x4_t43  L_7 = (__this->___rightEyeDistortedProjection_5);
		G_B10_0 = L_7;
		goto IL_0043;
	}

IL_003d:
	{
		Matrix4x4_t43  L_8 = (__this->___rightEyeUndistortedProjection_7);
		G_B10_0 = L_8;
	}

IL_0043:
	{
		return G_B10_0;
	}

IL_0044:
	{
		Matrix4x4_t43  L_9 = Matrix4x4_get_identity_m514(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_9;
	}
}
// UnityEngine.Rect BaseVRDevice::GetViewport(Cardboard/Eye,Cardboard/Distortion)
extern TypeInfo* Rect_t18_il2cpp_TypeInfo_var;
extern "C" Rect_t18  BaseVRDevice_GetViewport_m249 (BaseVRDevice_t28 * __this, int32_t ___eye, int32_t ___distortion, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Rect_t18_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	Rect_t18  V_1 = {0};
	Rect_t18  G_B6_0 = {0};
	Rect_t18  G_B10_0 = {0};
	{
		int32_t L_0 = ___eye;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_002c;
		}
	}
	{
		goto IL_0044;
	}

IL_0014:
	{
		int32_t L_3 = ___distortion;
		if (L_3)
		{
			goto IL_0025;
		}
	}
	{
		Rect_t18  L_4 = (__this->___leftEyeDistortedViewport_8);
		G_B6_0 = L_4;
		goto IL_002b;
	}

IL_0025:
	{
		Rect_t18  L_5 = (__this->___leftEyeUndistortedViewport_10);
		G_B6_0 = L_5;
	}

IL_002b:
	{
		return G_B6_0;
	}

IL_002c:
	{
		int32_t L_6 = ___distortion;
		if (L_6)
		{
			goto IL_003d;
		}
	}
	{
		Rect_t18  L_7 = (__this->___rightEyeDistortedViewport_9);
		G_B10_0 = L_7;
		goto IL_0043;
	}

IL_003d:
	{
		Rect_t18  L_8 = (__this->___rightEyeUndistortedViewport_11);
		G_B10_0 = L_8;
	}

IL_0043:
	{
		return G_B10_0;
	}

IL_0044:
	{
		Initobj (Rect_t18_il2cpp_TypeInfo_var, (&V_1));
		Rect_t18  L_9 = V_1;
		return L_9;
	}
}
// System.Void BaseVRDevice::SetTouchCoordinates(System.Int32,System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void BaseVRDevice_SetTouchCoordinates_m250 (BaseVRDevice_t28 * __this, int32_t ___x, int32_t ___y, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void BaseVRDevice::OnPause(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void BaseVRDevice_OnPause_m251 (BaseVRDevice_t28 * __this, bool ___pause, const MethodInfo* method)
{
	{
		bool L_0 = ___pause;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		VirtActionInvoker0::Invoke(19 /* System.Void BaseVRDevice::UpdateScreenData() */, __this);
	}

IL_000c:
	{
		return;
	}
}
// System.Void BaseVRDevice::OnFocus(System.Boolean)
extern "C" void BaseVRDevice_OnFocus_m252 (BaseVRDevice_t28 * __this, bool ___focus, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void BaseVRDevice::Reset()
extern "C" void BaseVRDevice_Reset_m253 (BaseVRDevice_t28 * __this, const MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(20 /* System.Void BaseVRDevice::Recenter() */, __this);
		return;
	}
}
// System.Void BaseVRDevice::OnApplicationQuit()
extern "C" void BaseVRDevice_OnApplicationQuit_m254 (BaseVRDevice_t28 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void BaseVRDevice::Destroy()
extern TypeInfo* BaseVRDevice_t28_il2cpp_TypeInfo_var;
extern "C" void BaseVRDevice_Destroy_m255 (BaseVRDevice_t28 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BaseVRDevice_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BaseVRDevice_t28_il2cpp_TypeInfo_var);
		BaseVRDevice_t28 * L_0 = ((BaseVRDevice_t28_StaticFields*)BaseVRDevice_t28_il2cpp_TypeInfo_var->static_fields)->___device_0;
		if ((!(((Object_t*)(BaseVRDevice_t28 *)L_0) == ((Object_t*)(BaseVRDevice_t28 *)__this))))
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BaseVRDevice_t28_il2cpp_TypeInfo_var);
		((BaseVRDevice_t28_StaticFields*)BaseVRDevice_t28_il2cpp_TypeInfo_var->static_fields)->___device_0 = (BaseVRDevice_t28 *)NULL;
	}

IL_0011:
	{
		return;
	}
}
// System.Void BaseVRDevice::ComputeEyesFromProfile()
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
extern TypeInfo* SingleU5BU5D_t44_il2cpp_TypeInfo_var;
extern TypeInfo* BaseVRDevice_t28_il2cpp_TypeInfo_var;
extern "C" void BaseVRDevice_ComputeEyesFromProfile_m256 (BaseVRDevice_t28 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SingleU5BU5D_t44_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(35);
		BaseVRDevice_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		s_Il2CppMethodIntialized = true;
	}
	Matrix4x4_t43  V_0 = {0};
	SingleU5BU5D_t44* V_1 = {0};
	Matrix4x4_t43  V_2 = {0};
	Matrix4x4_t43 * V_3 = {0};
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	Matrix4x4_t43 * V_7 = {0};
	Matrix4x4_t43 * V_8 = {0};
	{
		Matrix4x4_t43  L_0 = Matrix4x4_get_identity_m514(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		CardboardProfile_t41 * L_1 = BaseVRDevice_get_Profile_m238(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Device_t38 * L_2 = &(L_1->___device_1);
		Lenses_t35 * L_3 = &(L_2->___lenses_0);
		float L_4 = (L_3->___separation_3);
		Matrix4x4_set_Item_m402((&V_0), 0, 3, ((float)((float)((-L_4))/(float)(2.0f))), /*hidden argument*/NULL);
		MutablePose3D_t51 * L_5 = (__this->___leftEyePose_2);
		Matrix4x4_t43  L_6 = V_0;
		NullCheck(L_5);
		MutablePose3D_Set_m172(L_5, L_6, /*hidden argument*/NULL);
		V_1 = ((SingleU5BU5D_t44*)SZArrayNew(SingleU5BU5D_t44_il2cpp_TypeInfo_var, 4));
		CardboardProfile_t41 * L_7 = BaseVRDevice_get_Profile_m238(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		CardboardProfile_GetLeftEyeVisibleTanAngles_m137(L_7, (&V_1), /*hidden argument*/NULL);
		SingleU5BU5D_t44* L_8 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 0);
		int32_t L_9 = 0;
		SingleU5BU5D_t44* L_10 = V_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 1);
		int32_t L_11 = 1;
		SingleU5BU5D_t44* L_12 = V_1;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 2);
		int32_t L_13 = 2;
		SingleU5BU5D_t44* L_14 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 3);
		int32_t L_15 = 3;
		IL2CPP_RUNTIME_CLASS_INIT(BaseVRDevice_t28_il2cpp_TypeInfo_var);
		Matrix4x4_t43  L_16 = BaseVRDevice_MakeProjection_m257(NULL /*static, unused*/, (*(float*)(float*)SZArrayLdElema(L_8, L_9, sizeof(float))), (*(float*)(float*)SZArrayLdElema(L_10, L_11, sizeof(float))), (*(float*)(float*)SZArrayLdElema(L_12, L_13, sizeof(float))), (*(float*)(float*)SZArrayLdElema(L_14, L_15, sizeof(float))), (1.0f), (1000.0f), /*hidden argument*/NULL);
		__this->___leftEyeDistortedProjection_4 = L_16;
		CardboardProfile_t41 * L_17 = BaseVRDevice_get_Profile_m238(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		CardboardProfile_GetLeftEyeNoLensTanAngles_m138(L_17, (&V_1), /*hidden argument*/NULL);
		SingleU5BU5D_t44* L_18 = V_1;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 0);
		int32_t L_19 = 0;
		SingleU5BU5D_t44* L_20 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 1);
		int32_t L_21 = 1;
		SingleU5BU5D_t44* L_22 = V_1;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, 2);
		int32_t L_23 = 2;
		SingleU5BU5D_t44* L_24 = V_1;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, 3);
		int32_t L_25 = 3;
		Matrix4x4_t43  L_26 = BaseVRDevice_MakeProjection_m257(NULL /*static, unused*/, (*(float*)(float*)SZArrayLdElema(L_18, L_19, sizeof(float))), (*(float*)(float*)SZArrayLdElema(L_20, L_21, sizeof(float))), (*(float*)(float*)SZArrayLdElema(L_22, L_23, sizeof(float))), (*(float*)(float*)SZArrayLdElema(L_24, L_25, sizeof(float))), (1.0f), (1000.0f), /*hidden argument*/NULL);
		__this->___leftEyeUndistortedProjection_6 = L_26;
		CardboardProfile_t41 * L_27 = BaseVRDevice_get_Profile_m238(__this, /*hidden argument*/NULL);
		SingleU5BU5D_t44* L_28 = V_1;
		NullCheck(L_27);
		Rect_t18  L_29 = CardboardProfile_GetLeftEyeVisibleScreenRect_m139(L_27, L_28, /*hidden argument*/NULL);
		__this->___leftEyeUndistortedViewport_10 = L_29;
		Rect_t18  L_30 = (__this->___leftEyeUndistortedViewport_10);
		__this->___leftEyeDistortedViewport_8 = L_30;
		Matrix4x4_t43  L_31 = V_0;
		V_2 = L_31;
		Matrix4x4_t43 * L_32 = (&V_2);
		V_3 = (Matrix4x4_t43 *)L_32;
		int32_t L_33 = 0;
		V_4 = L_33;
		int32_t L_34 = 3;
		V_5 = L_34;
		Matrix4x4_t43 * L_35 = V_3;
		int32_t L_36 = V_4;
		int32_t L_37 = V_5;
		float L_38 = Matrix4x4_get_Item_m401(L_35, L_36, L_37, /*hidden argument*/NULL);
		V_6 = L_38;
		float L_39 = V_6;
		Matrix4x4_set_Item_m402(L_32, L_33, L_34, ((float)((float)L_39*(float)(-1.0f))), /*hidden argument*/NULL);
		MutablePose3D_t51 * L_40 = (__this->___rightEyePose_3);
		Matrix4x4_t43  L_41 = V_2;
		NullCheck(L_40);
		MutablePose3D_Set_m172(L_40, L_41, /*hidden argument*/NULL);
		Matrix4x4_t43  L_42 = (__this->___leftEyeDistortedProjection_4);
		__this->___rightEyeDistortedProjection_5 = L_42;
		Matrix4x4_t43 * L_43 = &(__this->___rightEyeDistortedProjection_5);
		Matrix4x4_t43 * L_44 = L_43;
		V_7 = (Matrix4x4_t43 *)L_44;
		int32_t L_45 = 0;
		V_5 = L_45;
		int32_t L_46 = 2;
		V_4 = L_46;
		Matrix4x4_t43 * L_47 = V_7;
		int32_t L_48 = V_5;
		int32_t L_49 = V_4;
		float L_50 = Matrix4x4_get_Item_m401(L_47, L_48, L_49, /*hidden argument*/NULL);
		V_6 = L_50;
		float L_51 = V_6;
		Matrix4x4_set_Item_m402(L_44, L_45, L_46, ((float)((float)L_51*(float)(-1.0f))), /*hidden argument*/NULL);
		Matrix4x4_t43  L_52 = (__this->___leftEyeUndistortedProjection_6);
		__this->___rightEyeUndistortedProjection_7 = L_52;
		Matrix4x4_t43 * L_53 = &(__this->___rightEyeUndistortedProjection_7);
		Matrix4x4_t43 * L_54 = L_53;
		V_8 = (Matrix4x4_t43 *)L_54;
		int32_t L_55 = 0;
		V_4 = L_55;
		int32_t L_56 = 2;
		V_5 = L_56;
		Matrix4x4_t43 * L_57 = V_8;
		int32_t L_58 = V_4;
		int32_t L_59 = V_5;
		float L_60 = Matrix4x4_get_Item_m401(L_57, L_58, L_59, /*hidden argument*/NULL);
		V_6 = L_60;
		float L_61 = V_6;
		Matrix4x4_set_Item_m402(L_54, L_55, L_56, ((float)((float)L_61*(float)(-1.0f))), /*hidden argument*/NULL);
		Rect_t18  L_62 = (__this->___leftEyeUndistortedViewport_10);
		__this->___rightEyeUndistortedViewport_11 = L_62;
		Rect_t18 * L_63 = &(__this->___rightEyeUndistortedViewport_11);
		Rect_t18 * L_64 = &(__this->___rightEyeUndistortedViewport_11);
		float L_65 = Rect_get_xMax_m559(L_64, /*hidden argument*/NULL);
		Rect_set_x_m421(L_63, ((float)((float)(1.0f)-(float)L_65)), /*hidden argument*/NULL);
		Rect_t18  L_66 = (__this->___rightEyeUndistortedViewport_11);
		__this->___rightEyeDistortedViewport_9 = L_66;
		return;
	}
}
// UnityEngine.Matrix4x4 BaseVRDevice::MakeProjection(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" Matrix4x4_t43  BaseVRDevice_MakeProjection_m257 (Object_t * __this /* static, unused */, float ___l, float ___t, float ___r, float ___b, float ___n, float ___f, const MethodInfo* method)
{
	Matrix4x4_t43  V_0 = {0};
	{
		Matrix4x4_t43  L_0 = Matrix4x4_get_zero_m560(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = ___n;
		float L_2 = ___r;
		float L_3 = ___l;
		Matrix4x4_set_Item_m402((&V_0), 0, 0, ((float)((float)((float)((float)(2.0f)*(float)L_1))/(float)((float)((float)L_2-(float)L_3)))), /*hidden argument*/NULL);
		float L_4 = ___n;
		float L_5 = ___t;
		float L_6 = ___b;
		Matrix4x4_set_Item_m402((&V_0), 1, 1, ((float)((float)((float)((float)(2.0f)*(float)L_4))/(float)((float)((float)L_5-(float)L_6)))), /*hidden argument*/NULL);
		float L_7 = ___r;
		float L_8 = ___l;
		float L_9 = ___r;
		float L_10 = ___l;
		Matrix4x4_set_Item_m402((&V_0), 0, 2, ((float)((float)((float)((float)L_7+(float)L_8))/(float)((float)((float)L_9-(float)L_10)))), /*hidden argument*/NULL);
		float L_11 = ___t;
		float L_12 = ___b;
		float L_13 = ___t;
		float L_14 = ___b;
		Matrix4x4_set_Item_m402((&V_0), 1, 2, ((float)((float)((float)((float)L_11+(float)L_12))/(float)((float)((float)L_13-(float)L_14)))), /*hidden argument*/NULL);
		float L_15 = ___n;
		float L_16 = ___f;
		float L_17 = ___n;
		float L_18 = ___f;
		Matrix4x4_set_Item_m402((&V_0), 2, 2, ((float)((float)((float)((float)L_15+(float)L_16))/(float)((float)((float)L_17-(float)L_18)))), /*hidden argument*/NULL);
		float L_19 = ___n;
		float L_20 = ___f;
		float L_21 = ___n;
		float L_22 = ___f;
		Matrix4x4_set_Item_m402((&V_0), 2, 3, ((float)((float)((float)((float)((float)((float)(2.0f)*(float)L_19))*(float)L_20))/(float)((float)((float)L_21-(float)L_22)))), /*hidden argument*/NULL);
		Matrix4x4_set_Item_m402((&V_0), 3, 2, (-1.0f), /*hidden argument*/NULL);
		Matrix4x4_t43  L_23 = V_0;
		return L_23;
	}
}
// BaseVRDevice BaseVRDevice::GetDevice()
// CardboardiOSDevice
#include "AssemblyU2DCSharp_CardboardiOSDeviceMethodDeclarations.h"
extern TypeInfo* BaseVRDevice_t28_il2cpp_TypeInfo_var;
extern TypeInfo* CardboardiOSDevice_t59_il2cpp_TypeInfo_var;
extern "C" BaseVRDevice_t28 * BaseVRDevice_GetDevice_m258 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BaseVRDevice_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		CardboardiOSDevice_t59_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(61);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BaseVRDevice_t28_il2cpp_TypeInfo_var);
		BaseVRDevice_t28 * L_0 = ((BaseVRDevice_t28_StaticFields*)BaseVRDevice_t28_il2cpp_TypeInfo_var->static_fields)->___device_0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		CardboardiOSDevice_t59 * L_1 = (CardboardiOSDevice_t59 *)il2cpp_codegen_object_new (CardboardiOSDevice_t59_il2cpp_TypeInfo_var);
		CardboardiOSDevice__ctor_m259(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BaseVRDevice_t28_il2cpp_TypeInfo_var);
		((BaseVRDevice_t28_StaticFields*)BaseVRDevice_t28_il2cpp_TypeInfo_var->static_fields)->___device_0 = L_1;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(BaseVRDevice_t28_il2cpp_TypeInfo_var);
		BaseVRDevice_t28 * L_2 = ((BaseVRDevice_t28_StaticFields*)BaseVRDevice_t28_il2cpp_TypeInfo_var->static_fields)->___device_0;
		return L_2;
	}
}
// System.Byte
#include "mscorlib_System_Byte.h"
// System.Text.Encoding
#include "mscorlib_System_Text_Encoding.h"
// System.Text.Encoding
#include "mscorlib_System_Text_EncodingMethodDeclarations.h"
// System.Void CardboardiOSDevice::.ctor()
// BaseCardboardDevice
#include "AssemblyU2DCSharp_BaseCardboardDeviceMethodDeclarations.h"
extern "C" void CardboardiOSDevice__ctor_m259 (CardboardiOSDevice_t59 * __this, const MethodInfo* method)
{
	{
		BaseCardboardDevice__ctor_m203(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean CardboardiOSDevice::SupportsNativeDistortionCorrection(System.Collections.Generic.List`1<System.String>)
// System.Collections.Generic.List`1<System.String>
#include "mscorlib_System_Collections_Generic_List_1_gen.h"
extern Il2CppCodeGenString* _stringLiteral39;
extern "C" bool CardboardiOSDevice_SupportsNativeDistortionCorrection_m260 (CardboardiOSDevice_t59 * __this, List_1_t66 * ___diagnostics, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral39 = il2cpp_codegen_string_literal_from_index(39);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	{
		List_1_t66 * L_0 = ___diagnostics;
		bool L_1 = BaseCardboardDevice_SupportsNativeDistortionCorrection_m204(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = (__this->___isOpenGL_30);
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		List_1_t66 * L_3 = ___diagnostics;
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_3, _stringLiteral39);
		V_0 = 0;
	}

IL_0020:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean CardboardiOSDevice::SupportsNativeUILayer(System.Collections.Generic.List`1<System.String>)
extern Il2CppCodeGenString* _stringLiteral39;
extern "C" bool CardboardiOSDevice_SupportsNativeUILayer_m261 (CardboardiOSDevice_t59 * __this, List_1_t66 * ___diagnostics, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral39 = il2cpp_codegen_string_literal_from_index(39);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	{
		List_1_t66 * L_0 = ___diagnostics;
		bool L_1 = BaseCardboardDevice_SupportsNativeUILayer_m205(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = (__this->___isOpenGL_30);
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		List_1_t66 * L_3 = ___diagnostics;
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_3, _stringLiteral39);
		V_0 = 0;
	}

IL_0020:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Void CardboardiOSDevice::SetVRModeEnabled(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
// CardboardiOSDevice
#include "AssemblyU2DCSharp_CardboardiOSDeviceMethodDeclarations.h"
extern "C" void CardboardiOSDevice_SetVRModeEnabled_m262 (CardboardiOSDevice_t59 * __this, bool ___enabled, const MethodInfo* method)
{
	{
		bool L_0 = ___enabled;
		CardboardiOSDevice_setVRModeEnabled_m273(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CardboardiOSDevice::SetSettingsButtonEnabled(System.Boolean)
extern "C" void CardboardiOSDevice_SetSettingsButtonEnabled_m263 (CardboardiOSDevice_t59 * __this, bool ___enabled, const MethodInfo* method)
{
	{
		bool L_0 = ___enabled;
		CardboardiOSDevice_setSettingsButtonEnabled_m274(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CardboardiOSDevice::SetAutoDriftCorrectionEnabled(System.Boolean)
extern "C" void CardboardiOSDevice_SetAutoDriftCorrectionEnabled_m264 (CardboardiOSDevice_t59 * __this, bool ___enabled, const MethodInfo* method)
{
	{
		BaseCardboardDevice_SetAutoDriftCorrectionEnabled_m209(__this, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CardboardiOSDevice::SetTapIsTrigger(System.Boolean)
extern "C" void CardboardiOSDevice_SetTapIsTrigger_m265 (CardboardiOSDevice_t59 * __this, bool ___enabled, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Boolean CardboardiOSDevice::SetDefaultDeviceProfile(System.Uri)
// System.Uri
#include "System_System_Uri.h"
// System.Text.Encoding
#include "mscorlib_System_Text_EncodingMethodDeclarations.h"
extern TypeInfo* Encoding_t111_il2cpp_TypeInfo_var;
extern "C" bool CardboardiOSDevice_SetDefaultDeviceProfile_m266 (CardboardiOSDevice_t59 * __this, Uri_t25 * ___uri, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Encoding_t111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(62);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t67* V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t111_il2cpp_TypeInfo_var);
		Encoding_t111 * L_0 = Encoding_get_UTF8_m561(NULL /*static, unused*/, /*hidden argument*/NULL);
		Uri_t25 * L_1 = ___uri;
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Uri::ToString() */, L_1);
		NullCheck(L_0);
		ByteU5BU5D_t67* L_3 = (ByteU5BU5D_t67*)VirtFuncInvoker1< ByteU5BU5D_t67*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_2);
		V_0 = L_3;
		ByteU5BU5D_t67* L_4 = V_0;
		ByteU5BU5D_t67* L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = CardboardiOSDevice_setDefaultDeviceProfile_m277(NULL /*static, unused*/, L_4, (((int32_t)(((Array_t *)L_5)->max_length))), /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void CardboardiOSDevice::Init()
// Cardboard
#include "AssemblyU2DCSharp_CardboardMethodDeclarations.h"
extern TypeInfo* Cardboard_t24_il2cpp_TypeInfo_var;
extern "C" void CardboardiOSDevice_Init_m267 (CardboardiOSDevice_t59 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Cardboard_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = CardboardiOSDevice_isOpenGLAPI_m272(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___isOpenGL_30 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t24_il2cpp_TypeInfo_var);
		Cardboard_t24 * L_1 = Cardboard_get_SDK_m52(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = Cardboard_get_SyncWithCardboardApp_m67(L_1, /*hidden argument*/NULL);
		CardboardiOSDevice_setSyncWithCardboardEnabled_m275(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		BaseCardboardDevice_Init_m211(__this, /*hidden argument*/NULL);
		VirtActionInvoker1< bool >::Invoke(11 /* System.Void CardboardiOSDevice::SetAutoDriftCorrectionEnabled(System.Boolean) */, __this, 0);
		return;
	}
}
// System.Void CardboardiOSDevice::PostRender(System.Boolean)
extern "C" void CardboardiOSDevice_PostRender_m268 (CardboardiOSDevice_t59 * __this, bool ___vrMode, const MethodInfo* method)
{
	CardboardiOSDevice_t59 * G_B2_0 = {0};
	CardboardiOSDevice_t59 * G_B1_0 = {0};
	int32_t G_B3_0 = 0;
	CardboardiOSDevice_t59 * G_B3_1 = {0};
	{
		bool L_0 = ___vrMode;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_000f;
		}
	}
	{
		bool L_1 = (__this->___isOpenGL_30);
		G_B3_0 = ((int32_t)(L_1));
		G_B3_1 = G_B1_0;
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_0010:
	{
		NullCheck(G_B3_1);
		BaseCardboardDevice_PostRender_m216(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CardboardiOSDevice::OnFocus(System.Boolean)
extern "C" void CardboardiOSDevice_OnFocus_m269 (CardboardiOSDevice_t59 * __this, bool ___focus, const MethodInfo* method)
{
	{
		bool L_0 = ___focus;
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		bool L_1 = (__this->___debugOnboarding_31);
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		bool L_2 = CardboardiOSDevice_isOnboardingDone_m278(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0027;
		}
	}

IL_001b:
	{
		__this->___debugOnboarding_31 = 0;
		CardboardiOSDevice_launchOnboardingDialog_m280(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0027:
	{
		return;
	}
}
// System.Void CardboardiOSDevice::OnPause(System.Boolean)
extern "C" void CardboardiOSDevice_OnPause_m270 (CardboardiOSDevice_t59 * __this, bool ___pause, const MethodInfo* method)
{
	{
		bool L_0 = ___pause;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		CardboardiOSDevice_readProfile_m276(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_000b:
	{
		return;
	}
}
// System.Void CardboardiOSDevice::ShowSettingsDialog()
extern "C" void CardboardiOSDevice_ShowSettingsDialog_m271 (CardboardiOSDevice_t59 * __this, const MethodInfo* method)
{
	{
		CardboardiOSDevice_launchSettingsDialog_m279(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean CardboardiOSDevice::isOpenGLAPI()
extern "C" {int32_t DEFAULT_CALL isOpenGLAPI();}
extern "C" bool CardboardiOSDevice_isOpenGLAPI_m272 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)isOpenGLAPI;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'isOpenGLAPI'"));
		}
	}

	// Native function invocation and marshaling of return value back from native representation
	int32_t _return_value = _il2cpp_pinvoke_func();

	return _return_value;
}
// System.Void CardboardiOSDevice::setVRModeEnabled(System.Boolean)
extern "C" {void DEFAULT_CALL setVRModeEnabled(int32_t);}
extern "C" void CardboardiOSDevice_setVRModeEnabled_m273 (Object_t * __this /* static, unused */, bool ___enabled, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)setVRModeEnabled;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'setVRModeEnabled'"));
		}
	}

	// Marshaling of parameter '___enabled' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___enabled);

	// Marshaling cleanup of parameter '___enabled' native representation

}
// System.Void CardboardiOSDevice::setSettingsButtonEnabled(System.Boolean)
extern "C" {void DEFAULT_CALL setSettingsButtonEnabled(int32_t);}
extern "C" void CardboardiOSDevice_setSettingsButtonEnabled_m274 (Object_t * __this /* static, unused */, bool ___enabled, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)setSettingsButtonEnabled;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'setSettingsButtonEnabled'"));
		}
	}

	// Marshaling of parameter '___enabled' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___enabled);

	// Marshaling cleanup of parameter '___enabled' native representation

}
// System.Void CardboardiOSDevice::setSyncWithCardboardEnabled(System.Boolean)
extern "C" {void DEFAULT_CALL setSyncWithCardboardEnabled(int32_t);}
extern "C" void CardboardiOSDevice_setSyncWithCardboardEnabled_m275 (Object_t * __this /* static, unused */, bool ___enabled, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)setSyncWithCardboardEnabled;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'setSyncWithCardboardEnabled'"));
		}
	}

	// Marshaling of parameter '___enabled' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___enabled);

	// Marshaling cleanup of parameter '___enabled' native representation

}
// System.Void CardboardiOSDevice::readProfile()
extern "C" {void DEFAULT_CALL readProfile();}
extern "C" void CardboardiOSDevice_readProfile_m276 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)readProfile;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'readProfile'"));
		}
	}

	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.Boolean CardboardiOSDevice::setDefaultDeviceProfile(System.Byte[],System.Int32)
#include "mscorlib_ArrayTypes.h"
// System.Byte
#include "mscorlib_System_Byte.h"
extern "C" {int32_t DEFAULT_CALL setDefaultDeviceProfile(uint8_t*, int32_t);}
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" bool CardboardiOSDevice_setDefaultDeviceProfile_m277 (Object_t * __this /* static, unused */, ByteU5BU5D_t67* ___profileData, int32_t ___size, const MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (uint8_t*, int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)setDefaultDeviceProfile;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'setDefaultDeviceProfile'"));
		}
	}

	// Marshaling of parameter '___profileData' to native representation
	uint8_t* ____profileData_marshaled = { 0 };
	____profileData_marshaled = il2cpp_codegen_marshal_array<uint8_t>((Il2CppCodeGenArray*)___profileData);

	// Marshaling of parameter '___size' to native representation

	// Native function invocation and marshaling of return value back from native representation
	int32_t _return_value = _il2cpp_pinvoke_func(____profileData_marshaled, ___size);

	// Marshaling cleanup of parameter '___profileData' native representation

	// Marshaling cleanup of parameter '___size' native representation

	return _return_value;
}
// System.Boolean CardboardiOSDevice::isOnboardingDone()
extern "C" {int32_t DEFAULT_CALL isOnboardingDone();}
extern "C" bool CardboardiOSDevice_isOnboardingDone_m278 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)isOnboardingDone;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'isOnboardingDone'"));
		}
	}

	// Native function invocation and marshaling of return value back from native representation
	int32_t _return_value = _il2cpp_pinvoke_func();

	return _return_value;
}
// System.Void CardboardiOSDevice::launchSettingsDialog()
extern "C" {void DEFAULT_CALL launchSettingsDialog();}
extern "C" void CardboardiOSDevice_launchSettingsDialog_m279 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)launchSettingsDialog;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'launchSettingsDialog'"));
		}
	}

	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.Void CardboardiOSDevice::launchOnboardingDialog()
extern "C" {void DEFAULT_CALL launchOnboardingDialog();}
extern "C" void CardboardiOSDevice_launchOnboardingDialog_m280 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)launchOnboardingDialog;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'launchOnboardingDialog'"));
		}
	}

	// Native function invocation
	_il2cpp_pinvoke_func();

}
// <PrivateImplementationDetails>/$ArrayType$20
#include "AssemblyU2DCSharp_U3CPrivateImplementationDetailsU3E_U24ArraMethodDeclarations.h"
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$20
extern "C" void U24ArrayTypeU2420_t60_marshal(const U24ArrayTypeU2420_t60& unmarshaled, U24ArrayTypeU2420_t60_marshaled& marshaled)
{
}
extern "C" void U24ArrayTypeU2420_t60_marshal_back(const U24ArrayTypeU2420_t60_marshaled& marshaled, U24ArrayTypeU2420_t60& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$20
extern "C" void U24ArrayTypeU2420_t60_marshal_cleanup(U24ArrayTypeU2420_t60_marshaled& marshaled)
{
}
// System.Void <PrivateImplementationDetails>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void U3CPrivateImplementationDetailsU3E__ctor_m281 (U3CPrivateImplementationDetailsU3E_t61 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m355(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
