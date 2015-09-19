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

// UnityEngine.Particle
#include "UnityEngine_UnityEngine_Particle.h"
// UnityEngine.Particle
#include "UnityEngine_UnityEngine_ParticleMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Vector3 UnityEngine.Particle::get_position()
extern "C" Vector3_t3  Particle_get_position_m2954 (Particle_t493 * __this, const MethodInfo* method)
{
	{
		Vector3_t3  L_0 = (__this->___m_Position_0);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_position(UnityEngine.Vector3)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
extern "C" void Particle_set_position_m2955 (Particle_t493 * __this, Vector3_t3  ___value, const MethodInfo* method)
{
	{
		Vector3_t3  L_0 = ___value;
		__this->___m_Position_0 = L_0;
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Particle::get_velocity()
extern "C" Vector3_t3  Particle_get_velocity_m2956 (Particle_t493 * __this, const MethodInfo* method)
{
	{
		Vector3_t3  L_0 = (__this->___m_Velocity_1);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_velocity(UnityEngine.Vector3)
extern "C" void Particle_set_velocity_m2957 (Particle_t493 * __this, Vector3_t3  ___value, const MethodInfo* method)
{
	{
		Vector3_t3  L_0 = ___value;
		__this->___m_Velocity_1 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_energy()
extern "C" float Particle_get_energy_m2958 (Particle_t493 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Energy_5);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_energy(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void Particle_set_energy_m2959 (Particle_t493 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Energy_5 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_startEnergy()
extern "C" float Particle_get_startEnergy_m2960 (Particle_t493 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_StartEnergy_6);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_startEnergy(System.Single)
extern "C" void Particle_set_startEnergy_m2961 (Particle_t493 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_StartEnergy_6 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_size()
extern "C" float Particle_get_size_m2962 (Particle_t493 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Size_2);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_size(System.Single)
extern "C" void Particle_set_size_m2963 (Particle_t493 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Size_2 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_rotation()
extern "C" float Particle_get_rotation_m2964 (Particle_t493 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Rotation_3);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_rotation(System.Single)
extern "C" void Particle_set_rotation_m2965 (Particle_t493 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Rotation_3 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_angularVelocity()
extern "C" float Particle_get_angularVelocity_m2966 (Particle_t493 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_AngularVelocity_4);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_angularVelocity(System.Single)
extern "C" void Particle_set_angularVelocity_m2967 (Particle_t493 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_AngularVelocity_4 = L_0;
		return;
	}
}
// UnityEngine.Color UnityEngine.Particle::get_color()
extern "C" Color_t11  Particle_get_color_m2968 (Particle_t493 * __this, const MethodInfo* method)
{
	{
		Color_t11  L_0 = (__this->___m_Color_7);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_color(UnityEngine.Color)
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
extern "C" void Particle_set_color_m2969 (Particle_t493 * __this, Color_t11  ___value, const MethodInfo* method)
{
	{
		Color_t11  L_0 = ___value;
		__this->___m_Color_7 = L_0;
		return;
	}
}
// UnityEngine.Collision
#include "UnityEngine_UnityEngine_Collision.h"
// UnityEngine.Collision
#include "UnityEngine_UnityEngine_CollisionMethodDeclarations.h"
// UnityEngine.QueryTriggerInteraction
#include "UnityEngine_UnityEngine_QueryTriggerInteraction.h"
// UnityEngine.QueryTriggerInteraction
#include "UnityEngine_UnityEngine_QueryTriggerInteractionMethodDeclarations.h"
// UnityEngine.Physics
#include "UnityEngine_UnityEngine_Physics.h"
// UnityEngine.Physics
#include "UnityEngine_UnityEngine_PhysicsMethodDeclarations.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
#include "UnityEngine_ArrayTypes.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// System.Single
#include "mscorlib_System_Single.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.QueryTriggerInteraction
#include "UnityEngine_UnityEngine_QueryTriggerInteraction.h"
// UnityEngine.Physics
#include "UnityEngine_UnityEngine_PhysicsMethodDeclarations.h"
extern "C" bool Physics_Raycast_m2970 (Object_t * __this /* static, unused */, Vector3_t3  ___origin, Vector3_t3  ___direction, RaycastHit_t71 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, int32_t ___queryTriggerInteraction, const MethodInfo* method)
{
	{
		Vector3_t3  L_0 = ___origin;
		Vector3_t3  L_1 = ___direction;
		RaycastHit_t71 * L_2 = ___hitInfo;
		float L_3 = ___maxDistance;
		int32_t L_4 = ___layerMask;
		int32_t L_5 = ___queryTriggerInteraction;
		bool L_6 = Physics_Internal_Raycast_m2975(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
extern "C" bool Physics_Raycast_m2159 (Object_t * __this /* static, unused */, Ray_t63  ___ray, RaycastHit_t71 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		V_0 = 0;
		Ray_t63  L_0 = ___ray;
		RaycastHit_t71 * L_1 = ___hitInfo;
		float L_2 = ___maxDistance;
		int32_t L_3 = ___layerMask;
		int32_t L_4 = V_0;
		bool L_5 = Physics_Raycast_m2971(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"
extern "C" bool Physics_Raycast_m2971 (Object_t * __this /* static, unused */, Ray_t63  ___ray, RaycastHit_t71 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, int32_t ___queryTriggerInteraction, const MethodInfo* method)
{
	{
		Vector3_t3  L_0 = Ray_get_origin_m1988((&___ray), /*hidden argument*/NULL);
		Vector3_t3  L_1 = Ray_get_direction_m1989((&___ray), /*hidden argument*/NULL);
		RaycastHit_t71 * L_2 = ___hitInfo;
		float L_3 = ___maxDistance;
		int32_t L_4 = ___layerMask;
		int32_t L_5 = ___queryTriggerInteraction;
		bool L_6 = Physics_Raycast_m2970(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t367* Physics_RaycastAll_m2000 (Object_t * __this /* static, unused */, Ray_t63  ___ray, float ___maxDistance, int32_t ___layerMask, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		V_0 = 0;
		Ray_t63  L_0 = ___ray;
		float L_1 = ___maxDistance;
		int32_t L_2 = ___layerMask;
		int32_t L_3 = V_0;
		RaycastHitU5BU5D_t367* L_4 = Physics_RaycastAll_m2972(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" RaycastHitU5BU5D_t367* Physics_RaycastAll_m2972 (Object_t * __this /* static, unused */, Ray_t63  ___ray, float ___maxDistance, int32_t ___layerMask, int32_t ___queryTriggerInteraction, const MethodInfo* method)
{
	{
		Vector3_t3  L_0 = Ray_get_origin_m1988((&___ray), /*hidden argument*/NULL);
		Vector3_t3  L_1 = Ray_get_direction_m1989((&___ray), /*hidden argument*/NULL);
		float L_2 = ___maxDistance;
		int32_t L_3 = ___layerMask;
		int32_t L_4 = ___queryTriggerInteraction;
		RaycastHitU5BU5D_t367* L_5 = Physics_RaycastAll_m2973(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" RaycastHitU5BU5D_t367* Physics_RaycastAll_m2973 (Object_t * __this /* static, unused */, Vector3_t3  ___origin, Vector3_t3  ___direction, float ___maxDistance, int32_t ___layermask, int32_t ___queryTriggerInteraction, const MethodInfo* method)
{
	{
		float L_0 = ___maxDistance;
		int32_t L_1 = ___layermask;
		int32_t L_2 = ___queryTriggerInteraction;
		RaycastHitU5BU5D_t367* L_3 = Physics_INTERNAL_CALL_RaycastAll_m2974(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" RaycastHitU5BU5D_t367* Physics_INTERNAL_CALL_RaycastAll_m2974 (Object_t * __this /* static, unused */, Vector3_t3 * ___origin, Vector3_t3 * ___direction, float ___maxDistance, int32_t ___layermask, int32_t ___queryTriggerInteraction, const MethodInfo* method)
{
	typedef RaycastHitU5BU5D_t367* (*Physics_INTERNAL_CALL_RaycastAll_m2974_ftn) (Vector3_t3 *, Vector3_t3 *, float, int32_t, int32_t);
	static Physics_INTERNAL_CALL_RaycastAll_m2974_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_RaycastAll_m2974_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)");
	return _il2cpp_icall_func(___origin, ___direction, ___maxDistance, ___layermask, ___queryTriggerInteraction);
}
// System.Boolean UnityEngine.Physics::Internal_Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" bool Physics_Internal_Raycast_m2975 (Object_t * __this /* static, unused */, Vector3_t3  ___origin, Vector3_t3  ___direction, RaycastHit_t71 * ___hitInfo, float ___maxDistance, int32_t ___layermask, int32_t ___queryTriggerInteraction, const MethodInfo* method)
{
	{
		RaycastHit_t71 * L_0 = ___hitInfo;
		float L_1 = ___maxDistance;
		int32_t L_2 = ___layermask;
		int32_t L_3 = ___queryTriggerInteraction;
		bool L_4 = Physics_INTERNAL_CALL_Internal_Raycast_m2976(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" bool Physics_INTERNAL_CALL_Internal_Raycast_m2976 (Object_t * __this /* static, unused */, Vector3_t3 * ___origin, Vector3_t3 * ___direction, RaycastHit_t71 * ___hitInfo, float ___maxDistance, int32_t ___layermask, int32_t ___queryTriggerInteraction, const MethodInfo* method)
{
	typedef bool (*Physics_INTERNAL_CALL_Internal_Raycast_m2976_ftn) (Vector3_t3 *, Vector3_t3 *, RaycastHit_t71 *, float, int32_t, int32_t);
	static Physics_INTERNAL_CALL_Internal_Raycast_m2976_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_Internal_Raycast_m2976_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)");
	return _il2cpp_icall_func(___origin, ___direction, ___hitInfo, ___maxDistance, ___layermask, ___queryTriggerInteraction);
}
// UnityEngine.ContactPoint
#include "UnityEngine_UnityEngine_ContactPoint.h"
// UnityEngine.ContactPoint
#include "UnityEngine_UnityEngine_ContactPointMethodDeclarations.h"
// UnityEngine.Rigidbody
#include "UnityEngine_UnityEngine_Rigidbody.h"
// UnityEngine.Rigidbody
#include "UnityEngine_UnityEngine_RigidbodyMethodDeclarations.h"
// UnityEngine.Collider
#include "UnityEngine_UnityEngine_Collider.h"
// UnityEngine.Collider
#include "UnityEngine_UnityEngine_ColliderMethodDeclarations.h"
// System.Boolean UnityEngine.Collider::Internal_Raycast(UnityEngine.Collider,UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
// UnityEngine.Collider
#include "UnityEngine_UnityEngine_Collider.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.Collider
#include "UnityEngine_UnityEngine_ColliderMethodDeclarations.h"
extern "C" bool Collider_Internal_Raycast_m2977 (Object_t * __this /* static, unused */, Collider_t72 * ___col, Ray_t63  ___ray, RaycastHit_t71 * ___hitInfo, float ___maxDistance, const MethodInfo* method)
{
	{
		Collider_t72 * L_0 = ___col;
		RaycastHit_t71 * L_1 = ___hitInfo;
		float L_2 = ___maxDistance;
		bool L_3 = Collider_INTERNAL_CALL_Internal_Raycast_m2978(NULL /*static, unused*/, L_0, (&___ray), L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean UnityEngine.Collider::INTERNAL_CALL_Internal_Raycast(UnityEngine.Collider,UnityEngine.Ray&,UnityEngine.RaycastHit&,System.Single)
extern "C" bool Collider_INTERNAL_CALL_Internal_Raycast_m2978 (Object_t * __this /* static, unused */, Collider_t72 * ___col, Ray_t63 * ___ray, RaycastHit_t71 * ___hitInfo, float ___maxDistance, const MethodInfo* method)
{
	typedef bool (*Collider_INTERNAL_CALL_Internal_Raycast_m2978_ftn) (Collider_t72 *, Ray_t63 *, RaycastHit_t71 *, float);
	static Collider_INTERNAL_CALL_Internal_Raycast_m2978_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider_INTERNAL_CALL_Internal_Raycast_m2978_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider::INTERNAL_CALL_Internal_Raycast(UnityEngine.Collider,UnityEngine.Ray&,UnityEngine.RaycastHit&,System.Single)");
	return _il2cpp_icall_func(___col, ___ray, ___hitInfo, ___maxDistance);
}
// System.Boolean UnityEngine.Collider::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
extern "C" bool Collider_Raycast_m299 (Collider_t72 * __this, Ray_t63  ___ray, RaycastHit_t71 * ___hitInfo, float ___maxDistance, const MethodInfo* method)
{
	{
		Ray_t63  L_0 = ___ray;
		RaycastHit_t71 * L_1 = ___hitInfo;
		float L_2 = ___maxDistance;
		bool L_3 = Collider_Internal_Raycast_m2977(NULL /*static, unused*/, __this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHitMethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// System.Void UnityEngine.RaycastHit::CalculateRaycastTexCoord(UnityEngine.Vector2&,UnityEngine.Collider,UnityEngine.Vector2,UnityEngine.Vector3,System.Int32,System.Int32)
// UnityEngine.Collider
#include "UnityEngine_UnityEngine_Collider.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHitMethodDeclarations.h"
extern "C" void RaycastHit_CalculateRaycastTexCoord_m2979 (Object_t * __this /* static, unused */, Vector2_t15 * ___output, Collider_t72 * ___col, Vector2_t15  ___uv, Vector3_t3  ___point, int32_t ___face, int32_t ___index, const MethodInfo* method)
{
	{
		Vector2_t15 * L_0 = ___output;
		Collider_t72 * L_1 = ___col;
		int32_t L_2 = ___face;
		int32_t L_3 = ___index;
		RaycastHit_INTERNAL_CALL_CalculateRaycastTexCoord_m2980(NULL /*static, unused*/, L_0, L_1, (&___uv), (&___point), L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.RaycastHit::INTERNAL_CALL_CalculateRaycastTexCoord(UnityEngine.Vector2&,UnityEngine.Collider,UnityEngine.Vector2&,UnityEngine.Vector3&,System.Int32,System.Int32)
extern "C" void RaycastHit_INTERNAL_CALL_CalculateRaycastTexCoord_m2980 (Object_t * __this /* static, unused */, Vector2_t15 * ___output, Collider_t72 * ___col, Vector2_t15 * ___uv, Vector3_t3 * ___point, int32_t ___face, int32_t ___index, const MethodInfo* method)
{
	typedef void (*RaycastHit_INTERNAL_CALL_CalculateRaycastTexCoord_m2980_ftn) (Vector2_t15 *, Collider_t72 *, Vector2_t15 *, Vector3_t3 *, int32_t, int32_t);
	static RaycastHit_INTERNAL_CALL_CalculateRaycastTexCoord_m2980_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RaycastHit_INTERNAL_CALL_CalculateRaycastTexCoord_m2980_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RaycastHit::INTERNAL_CALL_CalculateRaycastTexCoord(UnityEngine.Vector2&,UnityEngine.Collider,UnityEngine.Vector2&,UnityEngine.Vector3&,System.Int32,System.Int32)");
	_il2cpp_icall_func(___output, ___col, ___uv, ___point, ___face, ___index);
}
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
extern "C" Vector3_t3  RaycastHit_get_point_m2004 (RaycastHit_t71 * __this, const MethodInfo* method)
{
	{
		Vector3_t3  L_0 = (__this->___m_Point_0);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
extern "C" Vector3_t3  RaycastHit_get_normal_m2005 (RaycastHit_t71 * __this, const MethodInfo* method)
{
	{
		Vector3_t3  L_0 = (__this->___m_Normal_1);
		return L_0;
	}
}
// System.Single UnityEngine.RaycastHit::get_distance()
extern "C" float RaycastHit_get_distance_m331 (RaycastHit_t71 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Distance_3);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.RaycastHit::get_textureCoord()
extern "C" Vector2_t15  RaycastHit_get_textureCoord_m332 (RaycastHit_t71 * __this, const MethodInfo* method)
{
	Vector2_t15  V_0 = {0};
	{
		Collider_t72 * L_0 = RaycastHit_get_collider_m2003(__this, /*hidden argument*/NULL);
		Vector2_t15  L_1 = (__this->___m_UV_4);
		Vector3_t3  L_2 = (__this->___m_Point_0);
		int32_t L_3 = (__this->___m_FaceID_2);
		RaycastHit_CalculateRaycastTexCoord_m2979(NULL /*static, unused*/, (&V_0), L_0, L_1, L_2, L_3, 0, /*hidden argument*/NULL);
		Vector2_t15  L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
extern "C" Collider_t72 * RaycastHit_get_collider_m2003 (RaycastHit_t71 * __this, const MethodInfo* method)
{
	{
		Collider_t72 * L_0 = (__this->___m_Collider_5);
		return L_0;
	}
}
// UnityEngine.Physics2D
#include "UnityEngine_UnityEngine_Physics2D.h"
// UnityEngine.Physics2D
#include "UnityEngine_UnityEngine_Physics2DMethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_List_1_gen_28.h"
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2D.h"
// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_List_1_gen_28MethodDeclarations.h"
// System.Void UnityEngine.Physics2D::.cctor()
// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_List_1_gen_28MethodDeclarations.h"
extern TypeInfo* List_1_t500_il2cpp_TypeInfo_var;
extern TypeInfo* Physics2D_t364_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3617_MethodInfo_var;
extern "C" void Physics2D__cctor_m2981 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t500_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(353);
		Physics2D_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(127);
		List_1__ctor_m3617_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483975);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t500 * L_0 = (List_1_t500 *)il2cpp_codegen_object_new (List_1_t500_il2cpp_TypeInfo_var);
		List_1__ctor_m3617(L_0, /*hidden argument*/List_1__ctor_m3617_MethodInfo_var);
		((Physics2D_t364_StaticFields*)Physics2D_t364_il2cpp_TypeInfo_var->static_fields)->___m_LastDisabledRigidbody2D_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Physics2D::Internal_Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// System.Single
#include "mscorlib_System_Single.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.Physics2D
#include "UnityEngine_UnityEngine_Physics2DMethodDeclarations.h"
extern TypeInfo* Physics2D_t364_il2cpp_TypeInfo_var;
extern "C" void Physics2D_Internal_Raycast_m2982 (Object_t * __this /* static, unused */, Vector2_t15  ___origin, Vector2_t15  ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, RaycastHit2D_t365 * ___raycastHit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(127);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___distance;
		int32_t L_1 = ___layerMask;
		float L_2 = ___minDepth;
		float L_3 = ___maxDepth;
		RaycastHit2D_t365 * L_4 = ___raycastHit;
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t364_il2cpp_TypeInfo_var);
		Physics2D_INTERNAL_CALL_Internal_Raycast_m2983(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Physics2D::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
extern "C" void Physics2D_INTERNAL_CALL_Internal_Raycast_m2983 (Object_t * __this /* static, unused */, Vector2_t15 * ___origin, Vector2_t15 * ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, RaycastHit2D_t365 * ___raycastHit, const MethodInfo* method)
{
	typedef void (*Physics2D_INTERNAL_CALL_Internal_Raycast_m2983_ftn) (Vector2_t15 *, Vector2_t15 *, float, int32_t, float, float, RaycastHit2D_t365 *);
	static Physics2D_INTERNAL_CALL_Internal_Raycast_m2983_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics2D_INTERNAL_CALL_Internal_Raycast_m2983_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics2D::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)");
	_il2cpp_icall_func(___origin, ___direction, ___distance, ___layerMask, ___minDepth, ___maxDepth, ___raycastHit);
}
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
extern TypeInfo* Physics2D_t364_il2cpp_TypeInfo_var;
extern "C" RaycastHit2D_t365  Physics2D_Raycast_m2160 (Object_t * __this /* static, unused */, Vector2_t15  ___origin, Vector2_t15  ___direction, float ___distance, int32_t ___layerMask, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(127);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (std::numeric_limits<float>::infinity());
		V_1 = (-std::numeric_limits<float>::infinity());
		Vector2_t15  L_0 = ___origin;
		Vector2_t15  L_1 = ___direction;
		float L_2 = ___distance;
		int32_t L_3 = ___layerMask;
		float L_4 = V_1;
		float L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t364_il2cpp_TypeInfo_var);
		RaycastHit2D_t365  L_6 = Physics2D_Raycast_m2984(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single)
extern TypeInfo* Physics2D_t364_il2cpp_TypeInfo_var;
extern "C" RaycastHit2D_t365  Physics2D_Raycast_m2984 (Object_t * __this /* static, unused */, Vector2_t15  ___origin, Vector2_t15  ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(127);
		s_Il2CppMethodIntialized = true;
	}
	RaycastHit2D_t365  V_0 = {0};
	{
		Vector2_t15  L_0 = ___origin;
		Vector2_t15  L_1 = ___direction;
		float L_2 = ___distance;
		int32_t L_3 = ___layerMask;
		float L_4 = ___minDepth;
		float L_5 = ___maxDepth;
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t364_il2cpp_TypeInfo_var);
		Physics2D_Internal_Raycast_m2982(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, (&V_0), /*hidden argument*/NULL);
		RaycastHit2D_t365  L_6 = V_0;
		return L_6;
	}
}
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::RaycastAll(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
extern TypeInfo* Physics2D_t364_il2cpp_TypeInfo_var;
extern "C" RaycastHit2DU5BU5D_t362* Physics2D_RaycastAll_m1990 (Object_t * __this /* static, unused */, Vector2_t15  ___origin, Vector2_t15  ___direction, float ___distance, int32_t ___layerMask, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(127);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (std::numeric_limits<float>::infinity());
		V_1 = (-std::numeric_limits<float>::infinity());
		float L_0 = ___distance;
		int32_t L_1 = ___layerMask;
		float L_2 = V_1;
		float L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t364_il2cpp_TypeInfo_var);
		RaycastHit2DU5BU5D_t362* L_4 = Physics2D_INTERNAL_CALL_RaycastAll_m2985(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::INTERNAL_CALL_RaycastAll(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)
extern "C" RaycastHit2DU5BU5D_t362* Physics2D_INTERNAL_CALL_RaycastAll_m2985 (Object_t * __this /* static, unused */, Vector2_t15 * ___origin, Vector2_t15 * ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, const MethodInfo* method)
{
	typedef RaycastHit2DU5BU5D_t362* (*Physics2D_INTERNAL_CALL_RaycastAll_m2985_ftn) (Vector2_t15 *, Vector2_t15 *, float, int32_t, float, float);
	static Physics2D_INTERNAL_CALL_RaycastAll_m2985_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics2D_INTERNAL_CALL_RaycastAll_m2985_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics2D::INTERNAL_CALL_RaycastAll(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)");
	return _il2cpp_icall_func(___origin, ___direction, ___distance, ___layerMask, ___minDepth, ___maxDepth);
}
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2DMethodDeclarations.h"
// UnityEngine.Collider2D
#include "UnityEngine_UnityEngine_Collider2D.h"
// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2D.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Collider2D
#include "UnityEngine_UnityEngine_Collider2DMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_point()
extern "C" Vector2_t15  RaycastHit2D_get_point_m1995 (RaycastHit2D_t365 * __this, const MethodInfo* method)
{
	{
		Vector2_t15  L_0 = (__this->___m_Point_1);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_normal()
extern "C" Vector2_t15  RaycastHit2D_get_normal_m1996 (RaycastHit2D_t365 * __this, const MethodInfo* method)
{
	{
		Vector2_t15  L_0 = (__this->___m_Normal_2);
		return L_0;
	}
}
// System.Single UnityEngine.RaycastHit2D::get_fraction()
extern "C" float RaycastHit2D_get_fraction_m2161 (RaycastHit2D_t365 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Fraction_4);
		return L_0;
	}
}
// UnityEngine.Collider2D UnityEngine.RaycastHit2D::get_collider()
extern "C" Collider2D_t366 * RaycastHit2D_get_collider_m1991 (RaycastHit2D_t365 * __this, const MethodInfo* method)
{
	{
		Collider2D_t366 * L_0 = (__this->___m_Collider_5);
		return L_0;
	}
}
// UnityEngine.Rigidbody2D UnityEngine.RaycastHit2D::get_rigidbody()
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2DMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Collider2D
#include "UnityEngine_UnityEngine_Collider2DMethodDeclarations.h"
extern "C" Rigidbody2D_t501 * RaycastHit2D_get_rigidbody_m2986 (RaycastHit2D_t365 * __this, const MethodInfo* method)
{
	Rigidbody2D_t501 * G_B3_0 = {0};
	{
		Collider2D_t366 * L_0 = RaycastHit2D_get_collider_m1991(__this, /*hidden argument*/NULL);
		bool L_1 = Object_op_Inequality_m312(NULL /*static, unused*/, L_0, (Object_t75 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Collider2D_t366 * L_2 = RaycastHit2D_get_collider_m1991(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Rigidbody2D_t501 * L_3 = Collider2D_get_attachedRigidbody_m2987(L_2, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = ((Rigidbody2D_t501 *)(NULL));
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// UnityEngine.Transform UnityEngine.RaycastHit2D::get_transform()
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
extern "C" Transform_t33 * RaycastHit2D_get_transform_m1993 (RaycastHit2D_t365 * __this, const MethodInfo* method)
{
	Rigidbody2D_t501 * V_0 = {0};
	{
		Rigidbody2D_t501 * L_0 = RaycastHit2D_get_rigidbody_m2986(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		Rigidbody2D_t501 * L_1 = V_0;
		bool L_2 = Object_op_Inequality_m312(NULL /*static, unused*/, L_1, (Object_t75 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		Rigidbody2D_t501 * L_3 = V_0;
		NullCheck(L_3);
		Transform_t33 * L_4 = Component_get_transform_m283(L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_001a:
	{
		Collider2D_t366 * L_5 = RaycastHit2D_get_collider_m1991(__this, /*hidden argument*/NULL);
		bool L_6 = Object_op_Inequality_m312(NULL /*static, unused*/, L_5, (Object_t75 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		Collider2D_t366 * L_7 = RaycastHit2D_get_collider_m1991(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_t33 * L_8 = Component_get_transform_m283(L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0037:
	{
		return (Transform_t33 *)NULL;
	}
}
// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2DMethodDeclarations.h"
// UnityEngine.Rigidbody2D UnityEngine.Collider2D::get_attachedRigidbody()
extern "C" Rigidbody2D_t501 * Collider2D_get_attachedRigidbody_m2987 (Collider2D_t366 * __this, const MethodInfo* method)
{
	typedef Rigidbody2D_t501 * (*Collider2D_get_attachedRigidbody_m2987_ftn) (Collider2D_t366 *);
	static Collider2D_get_attachedRigidbody_m2987_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider2D_get_attachedRigidbody_m2987_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider2D::get_attachedRigidbody()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.ContactPoint2D
#include "UnityEngine_UnityEngine_ContactPoint2D.h"
// UnityEngine.ContactPoint2D
#include "UnityEngine_UnityEngine_ContactPoint2DMethodDeclarations.h"
// UnityEngine.Collision2D
#include "UnityEngine_UnityEngine_Collision2D.h"
// UnityEngine.Collision2D
#include "UnityEngine_UnityEngine_Collision2DMethodDeclarations.h"
// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
#include "UnityEngine_UnityEngine_AudioSettings_AudioConfigurationChan.h"
// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
#include "UnityEngine_UnityEngine_AudioSettings_AudioConfigurationChanMethodDeclarations.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void AudioConfigurationChangeHandler__ctor_m2988 (AudioConfigurationChangeHandler_t505 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::Invoke(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void AudioConfigurationChangeHandler_Invoke_m2989 (AudioConfigurationChangeHandler_t505 * __this, bool ___deviceWasChanged, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		AudioConfigurationChangeHandler_Invoke_m2989((AudioConfigurationChangeHandler_t505 *)__this->___prev_9,___deviceWasChanged, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, bool ___deviceWasChanged, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___deviceWasChanged,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, bool ___deviceWasChanged, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___deviceWasChanged,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_AudioConfigurationChangeHandler_t505(Il2CppObject* delegate, bool ___deviceWasChanged)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___deviceWasChanged' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___deviceWasChanged);

	// Marshaling cleanup of parameter '___deviceWasChanged' native representation

}
// System.IAsyncResult UnityEngine.AudioSettings/AudioConfigurationChangeHandler::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* Boolean_t356_il2cpp_TypeInfo_var;
extern "C" Object_t * AudioConfigurationChangeHandler_BeginInvoke_m2990 (AudioConfigurationChangeHandler_t505 * __this, bool ___deviceWasChanged, AsyncCallback_t9 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t356_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(47);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_t356_il2cpp_TypeInfo_var, &___deviceWasChanged);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::EndInvoke(System.IAsyncResult)
extern "C" void AudioConfigurationChangeHandler_EndInvoke_m2991 (AudioConfigurationChangeHandler_t505 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.AudioSettings
#include "UnityEngine_UnityEngine_AudioSettings.h"
// UnityEngine.AudioSettings
#include "UnityEngine_UnityEngine_AudioSettingsMethodDeclarations.h"
// System.Void UnityEngine.AudioSettings::InvokeOnAudioConfigurationChanged(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
#include "UnityEngine_UnityEngine_AudioSettings_AudioConfigurationChanMethodDeclarations.h"
extern TypeInfo* AudioSettings_t506_il2cpp_TypeInfo_var;
extern "C" void AudioSettings_InvokeOnAudioConfigurationChanged_m2992 (Object_t * __this /* static, unused */, bool ___deviceWasChanged, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AudioSettings_t506_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(354);
		s_Il2CppMethodIntialized = true;
	}
	{
		AudioConfigurationChangeHandler_t505 * L_0 = ((AudioSettings_t506_StaticFields*)AudioSettings_t506_il2cpp_TypeInfo_var->static_fields)->___OnAudioConfigurationChanged_0;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		AudioConfigurationChangeHandler_t505 * L_1 = ((AudioSettings_t506_StaticFields*)AudioSettings_t506_il2cpp_TypeInfo_var->static_fields)->___OnAudioConfigurationChanged_0;
		bool L_2 = ___deviceWasChanged;
		NullCheck(L_1);
		AudioConfigurationChangeHandler_Invoke_m2989(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// UnityEngine.AudioClip/PCMReaderCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMReaderCallback.h"
// UnityEngine.AudioClip/PCMReaderCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMReaderCallbackMethodDeclarations.h"
#include "mscorlib_ArrayTypes.h"
// System.Void UnityEngine.AudioClip/PCMReaderCallback::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void PCMReaderCallback__ctor_m2993 (PCMReaderCallback_t507 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[])
#include "mscorlib_ArrayTypes.h"
extern "C" void PCMReaderCallback_Invoke_m2994 (PCMReaderCallback_t507 * __this, SingleU5BU5D_t44* ___data, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		PCMReaderCallback_Invoke_m2994((PCMReaderCallback_t507 *)__this->___prev_9,___data, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, SingleU5BU5D_t44* ___data, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___data,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, SingleU5BU5D_t44* ___data, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___data,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___data,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void pinvoke_delegate_wrapper_PCMReaderCallback_t507(Il2CppObject* delegate, SingleU5BU5D_t44* ___data)
{
	typedef void (STDCALL *native_function_ptr_type)(float*);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___data' to native representation
	float* ____data_marshaled = { 0 };
	____data_marshaled = il2cpp_codegen_marshal_array<float>((Il2CppCodeGenArray*)___data);

	// Native function invocation
	_il2cpp_pinvoke_func(____data_marshaled);

	// Marshaling cleanup of parameter '___data' native representation

}
// System.IAsyncResult UnityEngine.AudioClip/PCMReaderCallback::BeginInvoke(System.Single[],System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * PCMReaderCallback_BeginInvoke_m2995 (PCMReaderCallback_t507 * __this, SingleU5BU5D_t44* ___data, AsyncCallback_t9 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___data;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.AudioClip/PCMReaderCallback::EndInvoke(System.IAsyncResult)
extern "C" void PCMReaderCallback_EndInvoke_m2996 (PCMReaderCallback_t507 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.AudioClip/PCMSetPositionCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMSetPositionCallback.h"
// UnityEngine.AudioClip/PCMSetPositionCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMSetPositionCallbackMethodDeclarations.h"
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void PCMSetPositionCallback__ctor_m2997 (PCMSetPositionCallback_t508 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::Invoke(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void PCMSetPositionCallback_Invoke_m2998 (PCMSetPositionCallback_t508 * __this, int32_t ___position, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		PCMSetPositionCallback_Invoke_m2998((PCMSetPositionCallback_t508 *)__this->___prev_9,___position, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___position, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___position,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, int32_t ___position, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___position,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_PCMSetPositionCallback_t508(Il2CppObject* delegate, int32_t ___position)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___position' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___position);

	// Marshaling cleanup of parameter '___position' native representation

}
// System.IAsyncResult UnityEngine.AudioClip/PCMSetPositionCallback::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* Int32_t106_il2cpp_TypeInfo_var;
extern "C" Object_t * PCMSetPositionCallback_BeginInvoke_m2999 (PCMSetPositionCallback_t508 * __this, int32_t ___position, AsyncCallback_t9 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t106_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t106_il2cpp_TypeInfo_var, &___position);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::EndInvoke(System.IAsyncResult)
extern "C" void PCMSetPositionCallback_EndInvoke_m3000 (PCMSetPositionCallback_t508 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.AudioClip
#include "UnityEngine_UnityEngine_AudioClip.h"
// UnityEngine.AudioClip
#include "UnityEngine_UnityEngine_AudioClipMethodDeclarations.h"
// System.Void UnityEngine.AudioClip::InvokePCMReaderCallback_Internal(System.Single[])
#include "mscorlib_ArrayTypes.h"
// UnityEngine.AudioClip/PCMReaderCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMReaderCallbackMethodDeclarations.h"
extern "C" void AudioClip_InvokePCMReaderCallback_Internal_m3001 (AudioClip_t509 * __this, SingleU5BU5D_t44* ___data, const MethodInfo* method)
{
	{
		PCMReaderCallback_t507 * L_0 = (__this->___m_PCMReaderCallback_2);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		PCMReaderCallback_t507 * L_1 = (__this->___m_PCMReaderCallback_2);
		SingleU5BU5D_t44* L_2 = ___data;
		NullCheck(L_1);
		PCMReaderCallback_Invoke_m2994(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Void UnityEngine.AudioClip::InvokePCMSetPositionCallback_Internal(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.AudioClip/PCMSetPositionCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMSetPositionCallbackMethodDeclarations.h"
extern "C" void AudioClip_InvokePCMSetPositionCallback_Internal_m3002 (AudioClip_t509 * __this, int32_t ___position, const MethodInfo* method)
{
	{
		PCMSetPositionCallback_t508 * L_0 = (__this->___m_PCMSetPositionCallback_3);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		PCMSetPositionCallback_t508 * L_1 = (__this->___m_PCMSetPositionCallback_3);
		int32_t L_2 = ___position;
		NullCheck(L_1);
		PCMSetPositionCallback_Invoke_m2998(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// UnityEngine.WebCamDevice
#include "UnityEngine_UnityEngine_WebCamDevice.h"
// UnityEngine.WebCamDevice
#include "UnityEngine_UnityEngine_WebCamDeviceMethodDeclarations.h"
// System.String
#include "mscorlib_System_String.h"
// System.String UnityEngine.WebCamDevice::get_name()
extern "C" String_t* WebCamDevice_get_name_m3003 (WebCamDevice_t510 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_Name_0);
		return L_0;
	}
}
// System.Boolean UnityEngine.WebCamDevice::get_isFrontFacing()
extern "C" bool WebCamDevice_get_isFrontFacing_m3004 (WebCamDevice_t510 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Flags_1);
		return ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)1))) == ((int32_t)1))? 1 : 0);
	}
}
// System.String
#include "mscorlib_System_String.h"
// Conversion methods for marshalling of: UnityEngine.WebCamDevice
extern "C" void WebCamDevice_t510_marshal(const WebCamDevice_t510& unmarshaled, WebCamDevice_t510_marshaled& marshaled)
{
	marshaled.___m_Name_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_Name_0);
	marshaled.___m_Flags_1 = unmarshaled.___m_Flags_1;
}
extern "C" void WebCamDevice_t510_marshal_back(const WebCamDevice_t510_marshaled& marshaled, WebCamDevice_t510& unmarshaled)
{
	unmarshaled.___m_Name_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_Name_0);
	unmarshaled.___m_Flags_1 = marshaled.___m_Flags_1;
}
// Conversion method for clean up from marshalling of: UnityEngine.WebCamDevice
extern "C" void WebCamDevice_t510_marshal_cleanup(WebCamDevice_t510_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Name_0);
	marshaled.___m_Name_0 = NULL;
}
// UnityEngine.AnimationEventSource
#include "UnityEngine_UnityEngine_AnimationEventSource.h"
// UnityEngine.AnimationEventSource
#include "UnityEngine_UnityEngine_AnimationEventSourceMethodDeclarations.h"
// UnityEngine.AnimationEvent
#include "UnityEngine_UnityEngine_AnimationEvent.h"
// UnityEngine.AnimationEvent
#include "UnityEngine_UnityEngine_AnimationEventMethodDeclarations.h"
// UnityEngine.AnimationState
#include "UnityEngine_UnityEngine_AnimationState.h"
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"
// UnityEngine.AnimatorStateInfo
#include "UnityEngine_UnityEngine_AnimatorStateInfo.h"
// UnityEngine.AnimatorClipInfo
#include "UnityEngine_UnityEngine_AnimatorClipInfo.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"
// System.Void UnityEngine.AnimationEvent::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void AnimationEvent__ctor_m3005 (AnimationEvent_t512 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m355(__this, /*hidden argument*/NULL);
		__this->___m_Time_0 = (0.0f);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___m_FunctionName_1 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___m_StringParameter_2 = L_1;
		__this->___m_ObjectReferenceParameter_3 = (Object_t75 *)NULL;
		__this->___m_FloatParameter_4 = (0.0f);
		__this->___m_IntParameter_5 = 0;
		__this->___m_MessageOptions_6 = 0;
		__this->___m_Source_7 = 0;
		__this->___m_StateSender_8 = (AnimationState_t513 *)NULL;
		return;
	}
}
// System.String UnityEngine.AnimationEvent::get_data()
extern "C" String_t* AnimationEvent_get_data_m3006 (AnimationEvent_t512 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_StringParameter_2);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_data(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" void AnimationEvent_set_data_m3007 (AnimationEvent_t512 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_StringParameter_2 = L_0;
		return;
	}
}
// System.String UnityEngine.AnimationEvent::get_stringParameter()
extern "C" String_t* AnimationEvent_get_stringParameter_m3008 (AnimationEvent_t512 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_StringParameter_2);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_stringParameter(System.String)
extern "C" void AnimationEvent_set_stringParameter_m3009 (AnimationEvent_t512 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_StringParameter_2 = L_0;
		return;
	}
}
// System.Single UnityEngine.AnimationEvent::get_floatParameter()
extern "C" float AnimationEvent_get_floatParameter_m3010 (AnimationEvent_t512 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_FloatParameter_4);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_floatParameter(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void AnimationEvent_set_floatParameter_m3011 (AnimationEvent_t512 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_FloatParameter_4 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.AnimationEvent::get_intParameter()
extern "C" int32_t AnimationEvent_get_intParameter_m3012 (AnimationEvent_t512 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_IntParameter_5);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_intParameter(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void AnimationEvent_set_intParameter_m3013 (AnimationEvent_t512 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_IntParameter_5 = L_0;
		return;
	}
}
// UnityEngine.Object UnityEngine.AnimationEvent::get_objectReferenceParameter()
extern "C" Object_t75 * AnimationEvent_get_objectReferenceParameter_m3014 (AnimationEvent_t512 * __this, const MethodInfo* method)
{
	{
		Object_t75 * L_0 = (__this->___m_ObjectReferenceParameter_3);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_objectReferenceParameter(UnityEngine.Object)
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
extern "C" void AnimationEvent_set_objectReferenceParameter_m3015 (AnimationEvent_t512 * __this, Object_t75 * ___value, const MethodInfo* method)
{
	{
		Object_t75 * L_0 = ___value;
		__this->___m_ObjectReferenceParameter_3 = L_0;
		return;
	}
}
// System.String UnityEngine.AnimationEvent::get_functionName()
extern "C" String_t* AnimationEvent_get_functionName_m3016 (AnimationEvent_t512 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_FunctionName_1);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_functionName(System.String)
extern "C" void AnimationEvent_set_functionName_m3017 (AnimationEvent_t512 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_FunctionName_1 = L_0;
		return;
	}
}
// System.Single UnityEngine.AnimationEvent::get_time()
extern "C" float AnimationEvent_get_time_m3018 (AnimationEvent_t512 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Time_0);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_time(System.Single)
extern "C" void AnimationEvent_set_time_m3019 (AnimationEvent_t512 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Time_0 = L_0;
		return;
	}
}
// UnityEngine.SendMessageOptions UnityEngine.AnimationEvent::get_messageOptions()
extern "C" int32_t AnimationEvent_get_messageOptions_m3020 (AnimationEvent_t512 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_MessageOptions_6);
		return (int32_t)(L_0);
	}
}
// System.Void UnityEngine.AnimationEvent::set_messageOptions(UnityEngine.SendMessageOptions)
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"
extern "C" void AnimationEvent_set_messageOptions_m3021 (AnimationEvent_t512 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_MessageOptions_6 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.AnimationEvent::get_isFiredByLegacy()
extern "C" bool AnimationEvent_get_isFiredByLegacy_m3022 (AnimationEvent_t512 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Source_7);
		return ((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
// System.Boolean UnityEngine.AnimationEvent::get_isFiredByAnimator()
extern "C" bool AnimationEvent_get_isFiredByAnimator_m3023 (AnimationEvent_t512 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Source_7);
		return ((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
	}
}
// UnityEngine.AnimationState UnityEngine.AnimationEvent::get_animationState()
// UnityEngine.AnimationEvent
#include "UnityEngine_UnityEngine_AnimationEventMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral189;
extern "C" AnimationState_t513 * AnimationEvent_get_animationState_m3024 (AnimationEvent_t512 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral189 = il2cpp_codegen_string_literal_from_index(189);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = AnimationEvent_get_isFiredByLegacy_m3022(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogError_m365(NULL /*static, unused*/, _stringLiteral189, /*hidden argument*/NULL);
	}

IL_0015:
	{
		AnimationState_t513 * L_1 = (__this->___m_StateSender_8);
		return L_1;
	}
}
// UnityEngine.AnimatorStateInfo UnityEngine.AnimationEvent::get_animatorStateInfo()
extern Il2CppCodeGenString* _stringLiteral190;
extern "C" AnimatorStateInfo_t514  AnimationEvent_get_animatorStateInfo_m3025 (AnimationEvent_t512 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral190 = il2cpp_codegen_string_literal_from_index(190);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = AnimationEvent_get_isFiredByAnimator_m3023(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogError_m365(NULL /*static, unused*/, _stringLiteral190, /*hidden argument*/NULL);
	}

IL_0015:
	{
		AnimatorStateInfo_t514  L_1 = (__this->___m_AnimatorStateInfo_9);
		return L_1;
	}
}
// UnityEngine.AnimatorClipInfo UnityEngine.AnimationEvent::get_animatorClipInfo()
extern Il2CppCodeGenString* _stringLiteral191;
extern "C" AnimatorClipInfo_t515  AnimationEvent_get_animatorClipInfo_m3026 (AnimationEvent_t512 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral191 = il2cpp_codegen_string_literal_from_index(191);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = AnimationEvent_get_isFiredByAnimator_m3023(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogError_m365(NULL /*static, unused*/, _stringLiteral191, /*hidden argument*/NULL);
	}

IL_0015:
	{
		AnimatorClipInfo_t515  L_1 = (__this->___m_AnimatorClipInfo_10);
		return L_1;
	}
}
// System.Int32 UnityEngine.AnimationEvent::GetHash()
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"
extern "C" int32_t AnimationEvent_GetHash_m3027 (AnimationEvent_t512 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		V_0 = 0;
		String_t* L_0 = AnimationEvent_get_functionName_m3016(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = String_GetHashCode_m3618(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		float L_3 = AnimationEvent_get_time_m3018(__this, /*hidden argument*/NULL);
		V_1 = L_3;
		int32_t L_4 = Single_GetHashCode_m3604((&V_1), /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)33)*(int32_t)L_2))+(int32_t)L_4));
		int32_t L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_Keyframe.h"
// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_KeyframeMethodDeclarations.h"
// UnityEngine.AnimationCurve
#include "UnityEngine_UnityEngine_AnimationCurve.h"
// UnityEngine.AnimationCurve
#include "UnityEngine_UnityEngine_AnimationCurveMethodDeclarations.h"
// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
#include "UnityEngine_ArrayTypes.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// UnityEngine.AnimationCurve
#include "UnityEngine_UnityEngine_AnimationCurveMethodDeclarations.h"
extern "C" void AnimationCurve__ctor_m3028 (AnimationCurve_t517 * __this, KeyframeU5BU5D_t640* ___keys, const MethodInfo* method)
{
	{
		Object__ctor_m355(__this, /*hidden argument*/NULL);
		KeyframeU5BU5D_t640* L_0 = ___keys;
		AnimationCurve_Init_m3032(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m3029 (AnimationCurve_t517 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m355(__this, /*hidden argument*/NULL);
		AnimationCurve_Init_m3032(__this, (KeyframeU5BU5D_t640*)(KeyframeU5BU5D_t640*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m3030 (AnimationCurve_t517 * __this, const MethodInfo* method)
{
	typedef void (*AnimationCurve_Cleanup_m3030_ftn) (AnimationCurve_t517 *);
	static AnimationCurve_Cleanup_m3030_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationCurve_Cleanup_m3030_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::Cleanup()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m3031 (AnimationCurve_t517 * __this, const MethodInfo* method)
{
	Exception_t108 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t108 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		AnimationCurve_Cleanup_m3030(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t108 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m3589(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t108 *)
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m3032 (AnimationCurve_t517 * __this, KeyframeU5BU5D_t640* ___keys, const MethodInfo* method)
{
	typedef void (*AnimationCurve_Init_m3032_ftn) (AnimationCurve_t517 *, KeyframeU5BU5D_t640*);
	static AnimationCurve_Init_m3032_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationCurve_Init_m3032_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])");
	_il2cpp_icall_func(__this, ___keys);
}
// Conversion methods for marshalling of: UnityEngine.AnimationCurve
extern "C" void AnimationCurve_t517_marshal(const AnimationCurve_t517& unmarshaled, AnimationCurve_t517_marshaled& marshaled)
{
	marshaled.___m_Ptr_0 = reinterpret_cast<intptr_t>((unmarshaled.___m_Ptr_0).___m_value_0);
}
extern "C" void AnimationCurve_t517_marshal_back(const AnimationCurve_t517_marshaled& marshaled, AnimationCurve_t517& unmarshaled)
{
	(unmarshaled.___m_Ptr_0).___m_value_0 = reinterpret_cast<void*>(marshaled.___m_Ptr_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimationCurve
extern "C" void AnimationCurve_t517_marshal_cleanup(AnimationCurve_t517_marshaled& marshaled)
{
}
// UnityEngine.AnimationState
#include "UnityEngine_UnityEngine_AnimationStateMethodDeclarations.h"
// UnityEngine.AnimatorClipInfo
#include "UnityEngine_UnityEngine_AnimatorClipInfoMethodDeclarations.h"
// UnityEngine.AnimatorStateInfo
#include "UnityEngine_UnityEngine_AnimatorStateInfoMethodDeclarations.h"
// UnityEngine.Animator
#include "UnityEngine_UnityEngine_AnimatorMethodDeclarations.h"
// System.Boolean UnityEngine.AnimatorStateInfo::IsName(System.String)
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.Animator
#include "UnityEngine_UnityEngine_AnimatorMethodDeclarations.h"
extern "C" bool AnimatorStateInfo_IsName_m3033 (AnimatorStateInfo_t514 * __this, String_t* ___name, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		String_t* L_0 = ___name;
		int32_t L_1 = Animator_StringToHash_m3053(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = (__this->___m_FullPath_2);
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_4 = V_0;
		int32_t L_5 = (__this->___m_Name_0);
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_6 = V_0;
		int32_t L_7 = (__this->___m_Path_1);
		G_B4_0 = ((((int32_t)L_6) == ((int32_t)L_7))? 1 : 0);
		goto IL_002b;
	}

IL_002a:
	{
		G_B4_0 = 1;
	}

IL_002b:
	{
		return G_B4_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_fullPathHash()
extern "C" int32_t AnimatorStateInfo_get_fullPathHash_m3034 (AnimatorStateInfo_t514 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_FullPath_2);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_nameHash()
extern "C" int32_t AnimatorStateInfo_get_nameHash_m3035 (AnimatorStateInfo_t514 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Path_1);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_shortNameHash()
extern "C" int32_t AnimatorStateInfo_get_shortNameHash_m3036 (AnimatorStateInfo_t514 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Name_0);
		return L_0;
	}
}
// System.Single UnityEngine.AnimatorStateInfo::get_normalizedTime()
extern "C" float AnimatorStateInfo_get_normalizedTime_m3037 (AnimatorStateInfo_t514 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_NormalizedTime_3);
		return L_0;
	}
}
// System.Single UnityEngine.AnimatorStateInfo::get_length()
extern "C" float AnimatorStateInfo_get_length_m3038 (AnimatorStateInfo_t514 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Length_4);
		return L_0;
	}
}
// System.Single UnityEngine.AnimatorStateInfo::get_speed()
extern "C" float AnimatorStateInfo_get_speed_m3039 (AnimatorStateInfo_t514 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Speed_5);
		return L_0;
	}
}
// System.Single UnityEngine.AnimatorStateInfo::get_speedMultiplier()
extern "C" float AnimatorStateInfo_get_speedMultiplier_m3040 (AnimatorStateInfo_t514 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_SpeedMultiplier_6);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_tagHash()
extern "C" int32_t AnimatorStateInfo_get_tagHash_m3041 (AnimatorStateInfo_t514 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Tag_7);
		return L_0;
	}
}
// System.Boolean UnityEngine.AnimatorStateInfo::IsTag(System.String)
extern "C" bool AnimatorStateInfo_IsTag_m3042 (AnimatorStateInfo_t514 * __this, String_t* ___tag, const MethodInfo* method)
{
	{
		String_t* L_0 = ___tag;
		int32_t L_1 = Animator_StringToHash_m3053(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		int32_t L_2 = (__this->___m_Tag_7);
		return ((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
	}
}
// System.Boolean UnityEngine.AnimatorStateInfo::get_loop()
extern "C" bool AnimatorStateInfo_get_loop_m3043 (AnimatorStateInfo_t514 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Loop_8);
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.AnimatorTransitionInfo
#include "UnityEngine_UnityEngine_AnimatorTransitionInfo.h"
// UnityEngine.AnimatorTransitionInfo
#include "UnityEngine_UnityEngine_AnimatorTransitionInfoMethodDeclarations.h"
// System.Boolean UnityEngine.AnimatorTransitionInfo::IsName(System.String)
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.Animator
#include "UnityEngine_UnityEngine_AnimatorMethodDeclarations.h"
extern "C" bool AnimatorTransitionInfo_IsName_m3044 (AnimatorTransitionInfo_t519 * __this, String_t* ___name, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = ___name;
		int32_t L_1 = Animator_StringToHash_m3053(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		int32_t L_2 = (__this->___m_Name_2);
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_3 = ___name;
		int32_t L_4 = Animator_StringToHash_m3053(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		int32_t L_5 = (__this->___m_FullPath_0);
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 1;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::IsUserName(System.String)
extern "C" bool AnimatorTransitionInfo_IsUserName_m3045 (AnimatorTransitionInfo_t519 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		int32_t L_1 = Animator_StringToHash_m3053(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		int32_t L_2 = (__this->___m_UserName_1);
		return ((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
	}
}
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_fullPathHash()
extern "C" int32_t AnimatorTransitionInfo_get_fullPathHash_m3046 (AnimatorTransitionInfo_t519 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_FullPath_0);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_nameHash()
extern "C" int32_t AnimatorTransitionInfo_get_nameHash_m3047 (AnimatorTransitionInfo_t519 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Name_2);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_userNameHash()
extern "C" int32_t AnimatorTransitionInfo_get_userNameHash_m3048 (AnimatorTransitionInfo_t519 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_UserName_1);
		return L_0;
	}
}
// System.Single UnityEngine.AnimatorTransitionInfo::get_normalizedTime()
extern "C" float AnimatorTransitionInfo_get_normalizedTime_m3049 (AnimatorTransitionInfo_t519 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_NormalizedTime_3);
		return L_0;
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_anyState()
extern "C" bool AnimatorTransitionInfo_get_anyState_m3050 (AnimatorTransitionInfo_t519 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_AnyState_4);
		return L_0;
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_entry()
extern "C" bool AnimatorTransitionInfo_get_entry_m3051 (AnimatorTransitionInfo_t519 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_TransitionType_5);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_exit()
extern "C" bool AnimatorTransitionInfo_get_exit_m3052 (AnimatorTransitionInfo_t519 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_TransitionType_5);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)4))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Conversion methods for marshalling of: UnityEngine.AnimatorTransitionInfo
extern "C" void AnimatorTransitionInfo_t519_marshal(const AnimatorTransitionInfo_t519& unmarshaled, AnimatorTransitionInfo_t519_marshaled& marshaled)
{
	marshaled.___m_FullPath_0 = unmarshaled.___m_FullPath_0;
	marshaled.___m_UserName_1 = unmarshaled.___m_UserName_1;
	marshaled.___m_Name_2 = unmarshaled.___m_Name_2;
	marshaled.___m_NormalizedTime_3 = unmarshaled.___m_NormalizedTime_3;
	marshaled.___m_AnyState_4 = unmarshaled.___m_AnyState_4;
	marshaled.___m_TransitionType_5 = unmarshaled.___m_TransitionType_5;
}
extern "C" void AnimatorTransitionInfo_t519_marshal_back(const AnimatorTransitionInfo_t519_marshaled& marshaled, AnimatorTransitionInfo_t519& unmarshaled)
{
	unmarshaled.___m_FullPath_0 = marshaled.___m_FullPath_0;
	unmarshaled.___m_UserName_1 = marshaled.___m_UserName_1;
	unmarshaled.___m_Name_2 = marshaled.___m_Name_2;
	unmarshaled.___m_NormalizedTime_3 = marshaled.___m_NormalizedTime_3;
	unmarshaled.___m_AnyState_4 = marshaled.___m_AnyState_4;
	unmarshaled.___m_TransitionType_5 = marshaled.___m_TransitionType_5;
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimatorTransitionInfo
extern "C" void AnimatorTransitionInfo_t519_marshal_cleanup(AnimatorTransitionInfo_t519_marshaled& marshaled)
{
}
// UnityEngine.Animator
#include "UnityEngine_UnityEngine_Animator.h"
// UnityEngine.RuntimeAnimatorController
#include "UnityEngine_UnityEngine_RuntimeAnimatorController.h"
// System.Void UnityEngine.Animator::SetTrigger(System.String)
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.Animator
#include "UnityEngine_UnityEngine_AnimatorMethodDeclarations.h"
extern "C" void Animator_SetTrigger_m2350 (Animator_t346 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		Animator_SetTriggerString_m3054(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::ResetTrigger(System.String)
extern "C" void Animator_ResetTrigger_m2349 (Animator_t346 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		Animator_ResetTriggerString_m3055(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.RuntimeAnimatorController UnityEngine.Animator::get_runtimeAnimatorController()
extern "C" RuntimeAnimatorController_t396 * Animator_get_runtimeAnimatorController_m2348 (Animator_t346 * __this, const MethodInfo* method)
{
	typedef RuntimeAnimatorController_t396 * (*Animator_get_runtimeAnimatorController_m2348_ftn) (Animator_t346 *);
	static Animator_get_runtimeAnimatorController_m2348_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_runtimeAnimatorController_m2348_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_runtimeAnimatorController()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
extern "C" int32_t Animator_StringToHash_m3053 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	typedef int32_t (*Animator_StringToHash_m3053_ftn) (String_t*);
	static Animator_StringToHash_m3053_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_StringToHash_m3053_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::StringToHash(System.String)");
	return _il2cpp_icall_func(___name);
}
// System.Void UnityEngine.Animator::SetTriggerString(System.String)
extern "C" void Animator_SetTriggerString_m3054 (Animator_t346 * __this, String_t* ___name, const MethodInfo* method)
{
	typedef void (*Animator_SetTriggerString_m3054_ftn) (Animator_t346 *, String_t*);
	static Animator_SetTriggerString_m3054_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetTriggerString_m3054_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetTriggerString(System.String)");
	_il2cpp_icall_func(__this, ___name);
}
// System.Void UnityEngine.Animator::ResetTriggerString(System.String)
extern "C" void Animator_ResetTriggerString_m3055 (Animator_t346 * __this, String_t* ___name, const MethodInfo* method)
{
	typedef void (*Animator_ResetTriggerString_m3055_ftn) (Animator_t346 *, String_t*);
	static Animator_ResetTriggerString_m3055_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_ResetTriggerString_m3055_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::ResetTriggerString(System.String)");
	_il2cpp_icall_func(__this, ___name);
}
// UnityEngine.SkeletonBone
#include "UnityEngine_UnityEngine_SkeletonBone.h"
// UnityEngine.SkeletonBone
#include "UnityEngine_UnityEngine_SkeletonBoneMethodDeclarations.h"
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// Conversion methods for marshalling of: UnityEngine.SkeletonBone
extern "C" void SkeletonBone_t520_marshal(const SkeletonBone_t520& unmarshaled, SkeletonBone_t520_marshaled& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_string(unmarshaled.___name_0);
	marshaled.___position_1 = unmarshaled.___position_1;
	marshaled.___rotation_2 = unmarshaled.___rotation_2;
	marshaled.___scale_3 = unmarshaled.___scale_3;
	marshaled.___transformModified_4 = unmarshaled.___transformModified_4;
}
extern "C" void SkeletonBone_t520_marshal_back(const SkeletonBone_t520_marshaled& marshaled, SkeletonBone_t520& unmarshaled)
{
	unmarshaled.___name_0 = il2cpp_codegen_marshal_string_result(marshaled.___name_0);
	unmarshaled.___position_1 = marshaled.___position_1;
	unmarshaled.___rotation_2 = marshaled.___rotation_2;
	unmarshaled.___scale_3 = marshaled.___scale_3;
	unmarshaled.___transformModified_4 = marshaled.___transformModified_4;
}
// Conversion method for clean up from marshalling of: UnityEngine.SkeletonBone
extern "C" void SkeletonBone_t520_marshal_cleanup(SkeletonBone_t520_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___name_0);
	marshaled.___name_0 = NULL;
}
// UnityEngine.HumanLimit
#include "UnityEngine_UnityEngine_HumanLimit.h"
// UnityEngine.HumanLimit
#include "UnityEngine_UnityEngine_HumanLimitMethodDeclarations.h"
// UnityEngine.HumanBone
#include "UnityEngine_UnityEngine_HumanBone.h"
// UnityEngine.HumanBone
#include "UnityEngine_UnityEngine_HumanBoneMethodDeclarations.h"
// System.String UnityEngine.HumanBone::get_boneName()
extern "C" String_t* HumanBone_get_boneName_m3056 (HumanBone_t522 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_BoneName_0);
		return L_0;
	}
}
// System.Void UnityEngine.HumanBone::set_boneName(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" void HumanBone_set_boneName_m3057 (HumanBone_t522 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_BoneName_0 = L_0;
		return;
	}
}
// System.String UnityEngine.HumanBone::get_humanName()
extern "C" String_t* HumanBone_get_humanName_m3058 (HumanBone_t522 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_HumanName_1);
		return L_0;
	}
}
// System.Void UnityEngine.HumanBone::set_humanName(System.String)
extern "C" void HumanBone_set_humanName_m3059 (HumanBone_t522 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_HumanName_1 = L_0;
		return;
	}
}
// UnityEngine.HumanLimit
#include "UnityEngine_UnityEngine_HumanLimit.h"
// Conversion methods for marshalling of: UnityEngine.HumanBone
extern "C" void HumanBone_t522_marshal(const HumanBone_t522& unmarshaled, HumanBone_t522_marshaled& marshaled)
{
	marshaled.___m_BoneName_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_BoneName_0);
	marshaled.___m_HumanName_1 = il2cpp_codegen_marshal_string(unmarshaled.___m_HumanName_1);
	marshaled.___limit_2 = unmarshaled.___limit_2;
}
extern "C" void HumanBone_t522_marshal_back(const HumanBone_t522_marshaled& marshaled, HumanBone_t522& unmarshaled)
{
	unmarshaled.___m_BoneName_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_BoneName_0);
	unmarshaled.___m_HumanName_1 = il2cpp_codegen_marshal_string_result(marshaled.___m_HumanName_1);
	unmarshaled.___limit_2 = marshaled.___limit_2;
}
// Conversion method for clean up from marshalling of: UnityEngine.HumanBone
extern "C" void HumanBone_t522_marshal_cleanup(HumanBone_t522_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_BoneName_0);
	marshaled.___m_BoneName_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_HumanName_1);
	marshaled.___m_HumanName_1 = NULL;
}
// UnityEngine.RuntimeAnimatorController
#include "UnityEngine_UnityEngine_RuntimeAnimatorControllerMethodDeclarations.h"
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchorMethodDeclarations.h"
// UnityEngine.HorizontalWrapMode
#include "UnityEngine_UnityEngine_HorizontalWrapMode.h"
// UnityEngine.HorizontalWrapMode
#include "UnityEngine_UnityEngine_HorizontalWrapModeMethodDeclarations.h"
// UnityEngine.VerticalWrapMode
#include "UnityEngine_UnityEngine_VerticalWrapMode.h"
// UnityEngine.VerticalWrapMode
#include "UnityEngine_UnityEngine_VerticalWrapModeMethodDeclarations.h"
// UnityEngine.CharacterInfo
#include "UnityEngine_UnityEngine_CharacterInfo.h"
// UnityEngine.CharacterInfo
#include "UnityEngine_UnityEngine_CharacterInfoMethodDeclarations.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// System.Int32 UnityEngine.CharacterInfo::get_advance()
extern "C" int32_t CharacterInfo_get_advance_m3060 (CharacterInfo_t525 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___width_3);
		return (((int32_t)L_0));
	}
}
// System.Void UnityEngine.CharacterInfo::set_advance(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void CharacterInfo_set_advance_m3061 (CharacterInfo_t525 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___width_3 = (((float)L_0));
		return;
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_glyphWidth()
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
extern "C" int32_t CharacterInfo_get_glyphWidth_m3062 (CharacterInfo_t525 * __this, const MethodInfo* method)
{
	{
		Rect_t18 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_width_m334(L_0, /*hidden argument*/NULL);
		return (((int32_t)L_1));
	}
}
// System.Void UnityEngine.CharacterInfo::set_glyphWidth(System.Int32)
extern "C" void CharacterInfo_set_glyphWidth_m3063 (CharacterInfo_t525 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		Rect_t18 * L_0 = &(__this->___vert_2);
		int32_t L_1 = ___value;
		Rect_set_width_m422(L_0, (((float)L_1)), /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_glyphHeight()
extern "C" int32_t CharacterInfo_get_glyphHeight_m3064 (CharacterInfo_t525 * __this, const MethodInfo* method)
{
	{
		Rect_t18 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_height_m336(L_0, /*hidden argument*/NULL);
		return (((int32_t)((-L_1))));
	}
}
// System.Void UnityEngine.CharacterInfo::set_glyphHeight(System.Int32)
extern "C" void CharacterInfo_set_glyphHeight_m3065 (CharacterInfo_t525 * __this, int32_t ___value, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		Rect_t18 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_height_m336(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Rect_t18 * L_2 = &(__this->___vert_2);
		int32_t L_3 = ___value;
		Rect_set_height_m423(L_2, (((float)((-L_3)))), /*hidden argument*/NULL);
		Rect_t18 * L_4 = &(__this->___vert_2);
		Rect_t18 * L_5 = L_4;
		float L_6 = Rect_get_y_m424(L_5, /*hidden argument*/NULL);
		float L_7 = V_0;
		Rect_t18 * L_8 = &(__this->___vert_2);
		float L_9 = Rect_get_height_m336(L_8, /*hidden argument*/NULL);
		Rect_set_y_m425(L_5, ((float)((float)L_6+(float)((float)((float)L_7-(float)L_9)))), /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_bearing()
extern "C" int32_t CharacterInfo_get_bearing_m3066 (CharacterInfo_t525 * __this, const MethodInfo* method)
{
	{
		Rect_t18 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_x_m420(L_0, /*hidden argument*/NULL);
		return (((int32_t)L_1));
	}
}
// System.Void UnityEngine.CharacterInfo::set_bearing(System.Int32)
extern "C" void CharacterInfo_set_bearing_m3067 (CharacterInfo_t525 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		Rect_t18 * L_0 = &(__this->___vert_2);
		int32_t L_1 = ___value;
		Rect_set_x_m421(L_0, (((float)L_1)), /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_minY()
extern "C" int32_t CharacterInfo_get_minY_m3068 (CharacterInfo_t525 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___ascent_7);
		Rect_t18 * L_1 = &(__this->___vert_2);
		float L_2 = Rect_get_y_m424(L_1, /*hidden argument*/NULL);
		Rect_t18 * L_3 = &(__this->___vert_2);
		float L_4 = Rect_get_height_m336(L_3, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_0+(int32_t)(((int32_t)((float)((float)L_2+(float)L_4))))));
	}
}
// System.Void UnityEngine.CharacterInfo::set_minY(System.Int32)
extern "C" void CharacterInfo_set_minY_m3069 (CharacterInfo_t525 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		Rect_t18 * L_0 = &(__this->___vert_2);
		int32_t L_1 = ___value;
		int32_t L_2 = (__this->___ascent_7);
		Rect_t18 * L_3 = &(__this->___vert_2);
		float L_4 = Rect_get_y_m424(L_3, /*hidden argument*/NULL);
		Rect_set_height_m423(L_0, ((float)((float)(((float)((int32_t)((int32_t)L_1-(int32_t)L_2))))-(float)L_4)), /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_maxY()
extern "C" int32_t CharacterInfo_get_maxY_m3070 (CharacterInfo_t525 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___ascent_7);
		Rect_t18 * L_1 = &(__this->___vert_2);
		float L_2 = Rect_get_y_m424(L_1, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_0+(int32_t)(((int32_t)L_2))));
	}
}
// System.Void UnityEngine.CharacterInfo::set_maxY(System.Int32)
extern "C" void CharacterInfo_set_maxY_m3071 (CharacterInfo_t525 * __this, int32_t ___value, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		Rect_t18 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_y_m424(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Rect_t18 * L_2 = &(__this->___vert_2);
		int32_t L_3 = ___value;
		int32_t L_4 = (__this->___ascent_7);
		Rect_set_y_m425(L_2, (((float)((int32_t)((int32_t)L_3-(int32_t)L_4)))), /*hidden argument*/NULL);
		Rect_t18 * L_5 = &(__this->___vert_2);
		Rect_t18 * L_6 = L_5;
		float L_7 = Rect_get_height_m336(L_6, /*hidden argument*/NULL);
		float L_8 = V_0;
		Rect_t18 * L_9 = &(__this->___vert_2);
		float L_10 = Rect_get_y_m424(L_9, /*hidden argument*/NULL);
		Rect_set_height_m423(L_6, ((float)((float)L_7+(float)((float)((float)L_8-(float)L_10)))), /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_minX()
extern "C" int32_t CharacterInfo_get_minX_m3072 (CharacterInfo_t525 * __this, const MethodInfo* method)
{
	{
		Rect_t18 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_x_m420(L_0, /*hidden argument*/NULL);
		return (((int32_t)L_1));
	}
}
// System.Void UnityEngine.CharacterInfo::set_minX(System.Int32)
extern "C" void CharacterInfo_set_minX_m3073 (CharacterInfo_t525 * __this, int32_t ___value, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		Rect_t18 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_x_m420(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Rect_t18 * L_2 = &(__this->___vert_2);
		int32_t L_3 = ___value;
		Rect_set_x_m421(L_2, (((float)L_3)), /*hidden argument*/NULL);
		Rect_t18 * L_4 = &(__this->___vert_2);
		Rect_t18 * L_5 = L_4;
		float L_6 = Rect_get_width_m334(L_5, /*hidden argument*/NULL);
		float L_7 = V_0;
		Rect_t18 * L_8 = &(__this->___vert_2);
		float L_9 = Rect_get_x_m420(L_8, /*hidden argument*/NULL);
		Rect_set_width_m422(L_5, ((float)((float)L_6+(float)((float)((float)L_7-(float)L_9)))), /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_maxX()
extern "C" int32_t CharacterInfo_get_maxX_m3074 (CharacterInfo_t525 * __this, const MethodInfo* method)
{
	{
		Rect_t18 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_x_m420(L_0, /*hidden argument*/NULL);
		Rect_t18 * L_2 = &(__this->___vert_2);
		float L_3 = Rect_get_width_m334(L_2, /*hidden argument*/NULL);
		return (((int32_t)((float)((float)L_1+(float)L_3))));
	}
}
// System.Void UnityEngine.CharacterInfo::set_maxX(System.Int32)
extern "C" void CharacterInfo_set_maxX_m3075 (CharacterInfo_t525 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		Rect_t18 * L_0 = &(__this->___vert_2);
		int32_t L_1 = ___value;
		Rect_t18 * L_2 = &(__this->___vert_2);
		float L_3 = Rect_get_x_m420(L_2, /*hidden argument*/NULL);
		Rect_set_width_m422(L_0, ((float)((float)(((float)L_1))-(float)L_3)), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomLeftUnFlipped()
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
extern "C" Vector2_t15  CharacterInfo_get_uvBottomLeftUnFlipped_m3076 (CharacterInfo_t525 * __this, const MethodInfo* method)
{
	{
		Rect_t18 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m420(L_0, /*hidden argument*/NULL);
		Rect_t18 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_y_m424(L_2, /*hidden argument*/NULL);
		Vector2_t15  L_4 = {0};
		Vector2__ctor_m337(&L_4, L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void UnityEngine.CharacterInfo::set_uvBottomLeftUnFlipped(UnityEngine.Vector2)
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.CharacterInfo
#include "UnityEngine_UnityEngine_CharacterInfoMethodDeclarations.h"
extern "C" void CharacterInfo_set_uvBottomLeftUnFlipped_m3077 (CharacterInfo_t525 * __this, Vector2_t15  ___value, const MethodInfo* method)
{
	Vector2_t15  V_0 = {0};
	{
		Vector2_t15  L_0 = CharacterInfo_get_uvTopRightUnFlipped_m3080(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		Rect_t18 * L_1 = &(__this->___uv_1);
		float L_2 = ((&___value)->___x_1);
		Rect_set_x_m421(L_1, L_2, /*hidden argument*/NULL);
		Rect_t18 * L_3 = &(__this->___uv_1);
		float L_4 = ((&___value)->___y_2);
		Rect_set_y_m425(L_3, L_4, /*hidden argument*/NULL);
		Rect_t18 * L_5 = &(__this->___uv_1);
		float L_6 = ((&V_0)->___x_1);
		Rect_t18 * L_7 = &(__this->___uv_1);
		float L_8 = Rect_get_x_m420(L_7, /*hidden argument*/NULL);
		Rect_set_width_m422(L_5, ((float)((float)L_6-(float)L_8)), /*hidden argument*/NULL);
		Rect_t18 * L_9 = &(__this->___uv_1);
		float L_10 = ((&V_0)->___y_2);
		Rect_t18 * L_11 = &(__this->___uv_1);
		float L_12 = Rect_get_y_m424(L_11, /*hidden argument*/NULL);
		Rect_set_height_m423(L_9, ((float)((float)L_10-(float)L_12)), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomRightUnFlipped()
extern "C" Vector2_t15  CharacterInfo_get_uvBottomRightUnFlipped_m3078 (CharacterInfo_t525 * __this, const MethodInfo* method)
{
	{
		Rect_t18 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m420(L_0, /*hidden argument*/NULL);
		Rect_t18 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_width_m334(L_2, /*hidden argument*/NULL);
		Rect_t18 * L_4 = &(__this->___uv_1);
		float L_5 = Rect_get_y_m424(L_4, /*hidden argument*/NULL);
		Vector2_t15  L_6 = {0};
		Vector2__ctor_m337(&L_6, ((float)((float)L_1+(float)L_3)), L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void UnityEngine.CharacterInfo::set_uvBottomRightUnFlipped(UnityEngine.Vector2)
extern "C" void CharacterInfo_set_uvBottomRightUnFlipped_m3079 (CharacterInfo_t525 * __this, Vector2_t15  ___value, const MethodInfo* method)
{
	Vector2_t15  V_0 = {0};
	{
		Vector2_t15  L_0 = CharacterInfo_get_uvTopRightUnFlipped_m3080(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		Rect_t18 * L_1 = &(__this->___uv_1);
		float L_2 = ((&___value)->___x_1);
		Rect_t18 * L_3 = &(__this->___uv_1);
		float L_4 = Rect_get_x_m420(L_3, /*hidden argument*/NULL);
		Rect_set_width_m422(L_1, ((float)((float)L_2-(float)L_4)), /*hidden argument*/NULL);
		Rect_t18 * L_5 = &(__this->___uv_1);
		float L_6 = ((&___value)->___y_2);
		Rect_set_y_m425(L_5, L_6, /*hidden argument*/NULL);
		Rect_t18 * L_7 = &(__this->___uv_1);
		float L_8 = ((&V_0)->___y_2);
		Rect_t18 * L_9 = &(__this->___uv_1);
		float L_10 = Rect_get_y_m424(L_9, /*hidden argument*/NULL);
		Rect_set_height_m423(L_7, ((float)((float)L_8-(float)L_10)), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopRightUnFlipped()
extern "C" Vector2_t15  CharacterInfo_get_uvTopRightUnFlipped_m3080 (CharacterInfo_t525 * __this, const MethodInfo* method)
{
	{
		Rect_t18 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m420(L_0, /*hidden argument*/NULL);
		Rect_t18 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_width_m334(L_2, /*hidden argument*/NULL);
		Rect_t18 * L_4 = &(__this->___uv_1);
		float L_5 = Rect_get_y_m424(L_4, /*hidden argument*/NULL);
		Rect_t18 * L_6 = &(__this->___uv_1);
		float L_7 = Rect_get_height_m336(L_6, /*hidden argument*/NULL);
		Vector2_t15  L_8 = {0};
		Vector2__ctor_m337(&L_8, ((float)((float)L_1+(float)L_3)), ((float)((float)L_5+(float)L_7)), /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Void UnityEngine.CharacterInfo::set_uvTopRightUnFlipped(UnityEngine.Vector2)
extern "C" void CharacterInfo_set_uvTopRightUnFlipped_m3081 (CharacterInfo_t525 * __this, Vector2_t15  ___value, const MethodInfo* method)
{
	{
		Rect_t18 * L_0 = &(__this->___uv_1);
		float L_1 = ((&___value)->___x_1);
		Rect_t18 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_x_m420(L_2, /*hidden argument*/NULL);
		Rect_set_width_m422(L_0, ((float)((float)L_1-(float)L_3)), /*hidden argument*/NULL);
		Rect_t18 * L_4 = &(__this->___uv_1);
		float L_5 = ((&___value)->___y_2);
		Rect_t18 * L_6 = &(__this->___uv_1);
		float L_7 = Rect_get_y_m424(L_6, /*hidden argument*/NULL);
		Rect_set_height_m423(L_4, ((float)((float)L_5-(float)L_7)), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopLeftUnFlipped()
extern "C" Vector2_t15  CharacterInfo_get_uvTopLeftUnFlipped_m3082 (CharacterInfo_t525 * __this, const MethodInfo* method)
{
	{
		Rect_t18 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m420(L_0, /*hidden argument*/NULL);
		Rect_t18 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_y_m424(L_2, /*hidden argument*/NULL);
		Rect_t18 * L_4 = &(__this->___uv_1);
		float L_5 = Rect_get_height_m336(L_4, /*hidden argument*/NULL);
		Vector2_t15  L_6 = {0};
		Vector2__ctor_m337(&L_6, L_1, ((float)((float)L_3+(float)L_5)), /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void UnityEngine.CharacterInfo::set_uvTopLeftUnFlipped(UnityEngine.Vector2)
extern "C" void CharacterInfo_set_uvTopLeftUnFlipped_m3083 (CharacterInfo_t525 * __this, Vector2_t15  ___value, const MethodInfo* method)
{
	Vector2_t15  V_0 = {0};
	{
		Vector2_t15  L_0 = CharacterInfo_get_uvTopRightUnFlipped_m3080(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		Rect_t18 * L_1 = &(__this->___uv_1);
		float L_2 = ((&___value)->___x_1);
		Rect_set_x_m421(L_1, L_2, /*hidden argument*/NULL);
		Rect_t18 * L_3 = &(__this->___uv_1);
		float L_4 = ((&___value)->___y_2);
		Rect_t18 * L_5 = &(__this->___uv_1);
		float L_6 = Rect_get_y_m424(L_5, /*hidden argument*/NULL);
		Rect_set_height_m423(L_3, ((float)((float)L_4-(float)L_6)), /*hidden argument*/NULL);
		Rect_t18 * L_7 = &(__this->___uv_1);
		float L_8 = ((&V_0)->___x_1);
		Rect_t18 * L_9 = &(__this->___uv_1);
		float L_10 = Rect_get_x_m420(L_9, /*hidden argument*/NULL);
		Rect_set_width_m422(L_7, ((float)((float)L_8-(float)L_10)), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomLeft()
extern "C" Vector2_t15  CharacterInfo_get_uvBottomLeft_m3084 (CharacterInfo_t525 * __this, const MethodInfo* method)
{
	{
		Vector2_t15  L_0 = CharacterInfo_get_uvBottomLeftUnFlipped_m3076(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.CharacterInfo::set_uvBottomLeft(UnityEngine.Vector2)
extern "C" void CharacterInfo_set_uvBottomLeft_m3085 (CharacterInfo_t525 * __this, Vector2_t15  ___value, const MethodInfo* method)
{
	{
		Vector2_t15  L_0 = ___value;
		CharacterInfo_set_uvBottomLeftUnFlipped_m3077(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomRight()
extern "C" Vector2_t15  CharacterInfo_get_uvBottomRight_m3086 (CharacterInfo_t525 * __this, const MethodInfo* method)
{
	Vector2_t15  G_B3_0 = {0};
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t15  L_1 = CharacterInfo_get_uvTopLeftUnFlipped_m3082(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t15  L_2 = CharacterInfo_get_uvBottomRightUnFlipped_m3078(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// System.Void UnityEngine.CharacterInfo::set_uvBottomRight(UnityEngine.Vector2)
extern "C" void CharacterInfo_set_uvBottomRight_m3087 (CharacterInfo_t525 * __this, Vector2_t15  ___value, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		Vector2_t15  L_1 = ___value;
		CharacterInfo_set_uvTopLeftUnFlipped_m3083(__this, L_1, /*hidden argument*/NULL);
		goto IL_001e;
	}

IL_0017:
	{
		Vector2_t15  L_2 = ___value;
		CharacterInfo_set_uvBottomRightUnFlipped_m3079(__this, L_2, /*hidden argument*/NULL);
	}

IL_001e:
	{
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopRight()
extern "C" Vector2_t15  CharacterInfo_get_uvTopRight_m3088 (CharacterInfo_t525 * __this, const MethodInfo* method)
{
	{
		Vector2_t15  L_0 = CharacterInfo_get_uvTopRightUnFlipped_m3080(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.CharacterInfo::set_uvTopRight(UnityEngine.Vector2)
extern "C" void CharacterInfo_set_uvTopRight_m3089 (CharacterInfo_t525 * __this, Vector2_t15  ___value, const MethodInfo* method)
{
	{
		Vector2_t15  L_0 = ___value;
		CharacterInfo_set_uvTopRightUnFlipped_m3081(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopLeft()
extern "C" Vector2_t15  CharacterInfo_get_uvTopLeft_m3090 (CharacterInfo_t525 * __this, const MethodInfo* method)
{
	Vector2_t15  G_B3_0 = {0};
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t15  L_1 = CharacterInfo_get_uvBottomRightUnFlipped_m3078(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t15  L_2 = CharacterInfo_get_uvTopLeftUnFlipped_m3082(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// System.Void UnityEngine.CharacterInfo::set_uvTopLeft(UnityEngine.Vector2)
extern "C" void CharacterInfo_set_uvTopLeft_m3091 (CharacterInfo_t525 * __this, Vector2_t15  ___value, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		Vector2_t15  L_1 = ___value;
		CharacterInfo_set_uvBottomRightUnFlipped_m3079(__this, L_1, /*hidden argument*/NULL);
		goto IL_001e;
	}

IL_0017:
	{
		Vector2_t15  L_2 = ___value;
		CharacterInfo_set_uvTopLeftUnFlipped_m3083(__this, L_2, /*hidden argument*/NULL);
	}

IL_001e:
	{
		return;
	}
}
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
// Conversion methods for marshalling of: UnityEngine.CharacterInfo
extern "C" void CharacterInfo_t525_marshal(const CharacterInfo_t525& unmarshaled, CharacterInfo_t525_marshaled& marshaled)
{
	marshaled.___index_0 = unmarshaled.___index_0;
	marshaled.___uv_1 = unmarshaled.___uv_1;
	marshaled.___vert_2 = unmarshaled.___vert_2;
	marshaled.___width_3 = unmarshaled.___width_3;
	marshaled.___size_4 = unmarshaled.___size_4;
	marshaled.___style_5 = unmarshaled.___style_5;
	marshaled.___flipped_6 = unmarshaled.___flipped_6;
	marshaled.___ascent_7 = unmarshaled.___ascent_7;
}
extern "C" void CharacterInfo_t525_marshal_back(const CharacterInfo_t525_marshaled& marshaled, CharacterInfo_t525& unmarshaled)
{
	unmarshaled.___index_0 = marshaled.___index_0;
	unmarshaled.___uv_1 = marshaled.___uv_1;
	unmarshaled.___vert_2 = marshaled.___vert_2;
	unmarshaled.___width_3 = marshaled.___width_3;
	unmarshaled.___size_4 = marshaled.___size_4;
	unmarshaled.___style_5 = marshaled.___style_5;
	unmarshaled.___flipped_6 = marshaled.___flipped_6;
	unmarshaled.___ascent_7 = marshaled.___ascent_7;
}
// Conversion method for clean up from marshalling of: UnityEngine.CharacterInfo
extern "C" void CharacterInfo_t525_marshal_cleanup(CharacterInfo_t525_marshaled& marshaled)
{
}
// UnityEngine.Font/FontTextureRebuildCallback
#include "UnityEngine_UnityEngine_Font_FontTextureRebuildCallback.h"
// UnityEngine.Font/FontTextureRebuildCallback
#include "UnityEngine_UnityEngine_Font_FontTextureRebuildCallbackMethodDeclarations.h"
// System.Void UnityEngine.Font/FontTextureRebuildCallback::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void FontTextureRebuildCallback__ctor_m3092 (FontTextureRebuildCallback_t526 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Font/FontTextureRebuildCallback::Invoke()
extern "C" void FontTextureRebuildCallback_Invoke_m3093 (FontTextureRebuildCallback_t526 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		FontTextureRebuildCallback_Invoke_m3093((FontTextureRebuildCallback_t526 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_FontTextureRebuildCallback_t526(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Font/FontTextureRebuildCallback::BeginInvoke(System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * FontTextureRebuildCallback_BeginInvoke_m3094 (FontTextureRebuildCallback_t526 * __this, AsyncCallback_t9 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Font/FontTextureRebuildCallback::EndInvoke(System.IAsyncResult)
extern "C" void FontTextureRebuildCallback_EndInvoke_m3095 (FontTextureRebuildCallback_t526 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Font
#include "UnityEngine_UnityEngine_Font.h"
// UnityEngine.Font
#include "UnityEngine_UnityEngine_FontMethodDeclarations.h"
// System.Action`1<UnityEngine.Font>
#include "mscorlib_System_Action_1_gen.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
// System.Char
#include "mscorlib_System_Char.h"
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// System.Action`1<UnityEngine.Font>
#include "mscorlib_System_Action_1_genMethodDeclarations.h"
// System.Void UnityEngine.Font::.ctor()
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Font
#include "UnityEngine_UnityEngine_FontMethodDeclarations.h"
extern "C" void Font__ctor_m3096 (Font_t197 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m2877(__this, /*hidden argument*/NULL);
		Font_Internal_CreateFont_m3103(NULL /*static, unused*/, __this, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Font::.ctor(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" void Font__ctor_m3097 (Font_t197 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		Object__ctor_m2877(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name;
		Font_Internal_CreateFont_m3103(NULL /*static, unused*/, __this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Font::.ctor(System.String[],System.Int32)
#include "mscorlib_ArrayTypes.h"
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void Font__ctor_m3098 (Font_t197 * __this, StringU5BU5D_t82* ___names, int32_t ___size, const MethodInfo* method)
{
	{
		Object__ctor_m2877(__this, /*hidden argument*/NULL);
		StringU5BU5D_t82* L_0 = ___names;
		int32_t L_1 = ___size;
		Font_Internal_CreateDynamicFont_m3104(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Font::add_textureRebuilt(System.Action`1<UnityEngine.Font>)
// System.Action`1<UnityEngine.Font>
#include "mscorlib_System_Action_1_gen.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
extern TypeInfo* Font_t197_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t376_il2cpp_TypeInfo_var;
extern "C" void Font_add_textureRebuilt_m2120 (Object_t * __this /* static, unused */, Action_1_t376 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Font_t197_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(180);
		Action_1_t376_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(184);
		s_Il2CppMethodIntialized = true;
	}
	{
		Action_1_t376 * L_0 = ((Font_t197_StaticFields*)Font_t197_il2cpp_TypeInfo_var->static_fields)->___textureRebuilt_2;
		Action_1_t376 * L_1 = ___value;
		Delegate_t74 * L_2 = Delegate_Combine_m303(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Font_t197_StaticFields*)Font_t197_il2cpp_TypeInfo_var->static_fields)->___textureRebuilt_2 = ((Action_1_t376 *)CastclassSealed(L_2, Action_1_t376_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Font::remove_textureRebuilt(System.Action`1<UnityEngine.Font>)
extern TypeInfo* Font_t197_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t376_il2cpp_TypeInfo_var;
extern "C" void Font_remove_textureRebuilt_m3099 (Object_t * __this /* static, unused */, Action_1_t376 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Font_t197_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(180);
		Action_1_t376_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(184);
		s_Il2CppMethodIntialized = true;
	}
	{
		Action_1_t376 * L_0 = ((Font_t197_StaticFields*)Font_t197_il2cpp_TypeInfo_var->static_fields)->___textureRebuilt_2;
		Action_1_t376 * L_1 = ___value;
		Delegate_t74 * L_2 = Delegate_Remove_m304(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Font_t197_StaticFields*)Font_t197_il2cpp_TypeInfo_var->static_fields)->___textureRebuilt_2 = ((Action_1_t376 *)CastclassSealed(L_2, Action_1_t376_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Font::add_m_FontTextureRebuildCallback(UnityEngine.Font/FontTextureRebuildCallback)
// UnityEngine.Font/FontTextureRebuildCallback
#include "UnityEngine_UnityEngine_Font_FontTextureRebuildCallback.h"
extern TypeInfo* FontTextureRebuildCallback_t526_il2cpp_TypeInfo_var;
extern "C" void Font_add_m_FontTextureRebuildCallback_m3100 (Font_t197 * __this, FontTextureRebuildCallback_t526 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FontTextureRebuildCallback_t526_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(355);
		s_Il2CppMethodIntialized = true;
	}
	{
		FontTextureRebuildCallback_t526 * L_0 = (__this->___m_FontTextureRebuildCallback_3);
		FontTextureRebuildCallback_t526 * L_1 = ___value;
		Delegate_t74 * L_2 = Delegate_Combine_m303(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___m_FontTextureRebuildCallback_3 = ((FontTextureRebuildCallback_t526 *)CastclassSealed(L_2, FontTextureRebuildCallback_t526_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Font::remove_m_FontTextureRebuildCallback(UnityEngine.Font/FontTextureRebuildCallback)
extern TypeInfo* FontTextureRebuildCallback_t526_il2cpp_TypeInfo_var;
extern "C" void Font_remove_m_FontTextureRebuildCallback_m3101 (Font_t197 * __this, FontTextureRebuildCallback_t526 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FontTextureRebuildCallback_t526_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(355);
		s_Il2CppMethodIntialized = true;
	}
	{
		FontTextureRebuildCallback_t526 * L_0 = (__this->___m_FontTextureRebuildCallback_3);
		FontTextureRebuildCallback_t526 * L_1 = ___value;
		Delegate_t74 * L_2 = Delegate_Remove_m304(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___m_FontTextureRebuildCallback_3 = ((FontTextureRebuildCallback_t526 *)CastclassSealed(L_2, FontTextureRebuildCallback_t526_il2cpp_TypeInfo_var));
		return;
	}
}
// System.String[] UnityEngine.Font::GetOSInstalledFontNames()
extern "C" StringU5BU5D_t82* Font_GetOSInstalledFontNames_m3102 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef StringU5BU5D_t82* (*Font_GetOSInstalledFontNames_m3102_ftn) ();
	static Font_GetOSInstalledFontNames_m3102_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_GetOSInstalledFontNames_m3102_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::GetOSInstalledFontNames()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Font::Internal_CreateFont(UnityEngine.Font,System.String)
// UnityEngine.Font
#include "UnityEngine_UnityEngine_Font.h"
extern "C" void Font_Internal_CreateFont_m3103 (Object_t * __this /* static, unused */, Font_t197 * ____font, String_t* ___name, const MethodInfo* method)
{
	typedef void (*Font_Internal_CreateFont_m3103_ftn) (Font_t197 *, String_t*);
	static Font_Internal_CreateFont_m3103_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_Internal_CreateFont_m3103_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::Internal_CreateFont(UnityEngine.Font,System.String)");
	_il2cpp_icall_func(____font, ___name);
}
// System.Void UnityEngine.Font::Internal_CreateDynamicFont(UnityEngine.Font,System.String[],System.Int32)
extern "C" void Font_Internal_CreateDynamicFont_m3104 (Object_t * __this /* static, unused */, Font_t197 * ____font, StringU5BU5D_t82* ____names, int32_t ___size, const MethodInfo* method)
{
	typedef void (*Font_Internal_CreateDynamicFont_m3104_ftn) (Font_t197 *, StringU5BU5D_t82*, int32_t);
	static Font_Internal_CreateDynamicFont_m3104_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_Internal_CreateDynamicFont_m3104_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::Internal_CreateDynamicFont(UnityEngine.Font,System.String[],System.Int32)");
	_il2cpp_icall_func(____font, ____names, ___size);
}
// UnityEngine.Font UnityEngine.Font::CreateDynamicFontFromOSFont(System.String,System.Int32)
extern TypeInfo* StringU5BU5D_t82_il2cpp_TypeInfo_var;
extern TypeInfo* Font_t197_il2cpp_TypeInfo_var;
extern "C" Font_t197 * Font_CreateDynamicFontFromOSFont_m3105 (Object_t * __this /* static, unused */, String_t* ___fontname, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(356);
		Font_t197_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(180);
		s_Il2CppMethodIntialized = true;
	}
	Font_t197 * V_0 = {0};
	{
		StringU5BU5D_t82* L_0 = ((StringU5BU5D_t82*)SZArrayNew(StringU5BU5D_t82_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = ___fontname;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0, sizeof(String_t*))) = (String_t*)L_1;
		int32_t L_2 = ___size;
		Font_t197 * L_3 = (Font_t197 *)il2cpp_codegen_object_new (Font_t197_il2cpp_TypeInfo_var);
		Font__ctor_m3098(L_3, L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Font_t197 * L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Font UnityEngine.Font::CreateDynamicFontFromOSFont(System.String[],System.Int32)
extern TypeInfo* Font_t197_il2cpp_TypeInfo_var;
extern "C" Font_t197 * Font_CreateDynamicFontFromOSFont_m3106 (Object_t * __this /* static, unused */, StringU5BU5D_t82* ___fontnames, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Font_t197_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(180);
		s_Il2CppMethodIntialized = true;
	}
	Font_t197 * V_0 = {0};
	{
		StringU5BU5D_t82* L_0 = ___fontnames;
		int32_t L_1 = ___size;
		Font_t197 * L_2 = (Font_t197 *)il2cpp_codegen_object_new (Font_t197_il2cpp_TypeInfo_var);
		Font__ctor_m3098(L_2, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Font_t197 * L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Material UnityEngine.Font::get_material()
extern "C" Material_t42 * Font_get_material_m2360 (Font_t197 * __this, const MethodInfo* method)
{
	typedef Material_t42 * (*Font_get_material_m2360_ftn) (Font_t197 *);
	static Font_get_material_m2360_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_material_m2360_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_material()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Font::set_material(UnityEngine.Material)
// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
extern "C" void Font_set_material_m3107 (Font_t197 * __this, Material_t42 * ___value, const MethodInfo* method)
{
	typedef void (*Font_set_material_m3107_ftn) (Font_t197 *, Material_t42 *);
	static Font_set_material_m3107_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_set_material_m3107_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::set_material(UnityEngine.Material)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.Font::HasCharacter(System.Char)
// System.Char
#include "mscorlib_System_Char.h"
extern "C" bool Font_HasCharacter_m2240 (Font_t197 * __this, uint16_t ___c, const MethodInfo* method)
{
	typedef bool (*Font_HasCharacter_m2240_ftn) (Font_t197 *, uint16_t);
	static Font_HasCharacter_m2240_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_HasCharacter_m2240_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::HasCharacter(System.Char)");
	return _il2cpp_icall_func(__this, ___c);
}
// System.String[] UnityEngine.Font::get_fontNames()
extern "C" StringU5BU5D_t82* Font_get_fontNames_m3108 (Font_t197 * __this, const MethodInfo* method)
{
	typedef StringU5BU5D_t82* (*Font_get_fontNames_m3108_ftn) (Font_t197 *);
	static Font_get_fontNames_m3108_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_fontNames_m3108_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_fontNames()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Font::set_fontNames(System.String[])
extern "C" void Font_set_fontNames_m3109 (Font_t197 * __this, StringU5BU5D_t82* ___value, const MethodInfo* method)
{
	typedef void (*Font_set_fontNames_m3109_ftn) (Font_t197 *, StringU5BU5D_t82*);
	static Font_set_fontNames_m3109_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_set_fontNames_m3109_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::set_fontNames(System.String[])");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.CharacterInfo[] UnityEngine.Font::get_characterInfo()
extern "C" CharacterInfoU5BU5D_t641* Font_get_characterInfo_m3110 (Font_t197 * __this, const MethodInfo* method)
{
	typedef CharacterInfoU5BU5D_t641* (*Font_get_characterInfo_m3110_ftn) (Font_t197 *);
	static Font_get_characterInfo_m3110_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_characterInfo_m3110_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_characterInfo()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Font::set_characterInfo(UnityEngine.CharacterInfo[])
#include "UnityEngine_ArrayTypes.h"
extern "C" void Font_set_characterInfo_m3111 (Font_t197 * __this, CharacterInfoU5BU5D_t641* ___value, const MethodInfo* method)
{
	typedef void (*Font_set_characterInfo_m3111_ftn) (Font_t197 *, CharacterInfoU5BU5D_t641*);
	static Font_set_characterInfo_m3111_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_set_characterInfo_m3111_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::set_characterInfo(UnityEngine.CharacterInfo[])");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Font::RequestCharactersInTexture(System.String,System.Int32,UnityEngine.FontStyle)
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
extern "C" void Font_RequestCharactersInTexture_m3112 (Font_t197 * __this, String_t* ___characters, int32_t ___size, int32_t ___style, const MethodInfo* method)
{
	typedef void (*Font_RequestCharactersInTexture_m3112_ftn) (Font_t197 *, String_t*, int32_t, int32_t);
	static Font_RequestCharactersInTexture_m3112_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_RequestCharactersInTexture_m3112_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::RequestCharactersInTexture(System.String,System.Int32,UnityEngine.FontStyle)");
	_il2cpp_icall_func(__this, ___characters, ___size, ___style);
}
// System.Void UnityEngine.Font::RequestCharactersInTexture(System.String,System.Int32)
extern "C" void Font_RequestCharactersInTexture_m3113 (Font_t197 * __this, String_t* ___characters, int32_t ___size, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		V_0 = 0;
		String_t* L_0 = ___characters;
		int32_t L_1 = ___size;
		int32_t L_2 = V_0;
		Font_RequestCharactersInTexture_m3112(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Font::RequestCharactersInTexture(System.String)
extern "C" void Font_RequestCharactersInTexture_m3114 (Font_t197 * __this, String_t* ___characters, const MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		String_t* L_0 = ___characters;
		int32_t L_1 = V_1;
		int32_t L_2 = V_0;
		Font_RequestCharactersInTexture_m3112(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Font::InvokeTextureRebuilt_Internal(UnityEngine.Font)
// System.Action`1<UnityEngine.Font>
#include "mscorlib_System_Action_1_genMethodDeclarations.h"
// UnityEngine.Font/FontTextureRebuildCallback
#include "UnityEngine_UnityEngine_Font_FontTextureRebuildCallbackMethodDeclarations.h"
extern TypeInfo* Font_t197_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m3619_MethodInfo_var;
extern "C" void Font_InvokeTextureRebuilt_Internal_m3115 (Object_t * __this /* static, unused */, Font_t197 * ___font, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Font_t197_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(180);
		Action_1_Invoke_m3619_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483976);
		s_Il2CppMethodIntialized = true;
	}
	Action_1_t376 * V_0 = {0};
	{
		Action_1_t376 * L_0 = ((Font_t197_StaticFields*)Font_t197_il2cpp_TypeInfo_var->static_fields)->___textureRebuilt_2;
		V_0 = L_0;
		Action_1_t376 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		Action_1_t376 * L_2 = V_0;
		Font_t197 * L_3 = ___font;
		NullCheck(L_2);
		Action_1_Invoke_m3619(L_2, L_3, /*hidden argument*/Action_1_Invoke_m3619_MethodInfo_var);
	}

IL_0013:
	{
		Font_t197 * L_4 = ___font;
		NullCheck(L_4);
		FontTextureRebuildCallback_t526 * L_5 = (L_4->___m_FontTextureRebuildCallback_3);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		Font_t197 * L_6 = ___font;
		NullCheck(L_6);
		FontTextureRebuildCallback_t526 * L_7 = (L_6->___m_FontTextureRebuildCallback_3);
		NullCheck(L_7);
		FontTextureRebuildCallback_Invoke_m3093(L_7, /*hidden argument*/NULL);
	}

IL_0029:
	{
		return;
	}
}
// UnityEngine.Font/FontTextureRebuildCallback UnityEngine.Font::get_textureRebuildCallback()
extern "C" FontTextureRebuildCallback_t526 * Font_get_textureRebuildCallback_m3116 (Font_t197 * __this, const MethodInfo* method)
{
	{
		FontTextureRebuildCallback_t526 * L_0 = (__this->___m_FontTextureRebuildCallback_3);
		return L_0;
	}
}
// System.Void UnityEngine.Font::set_textureRebuildCallback(UnityEngine.Font/FontTextureRebuildCallback)
extern "C" void Font_set_textureRebuildCallback_m3117 (Font_t197 * __this, FontTextureRebuildCallback_t526 * ___value, const MethodInfo* method)
{
	{
		FontTextureRebuildCallback_t526 * L_0 = ___value;
		__this->___m_FontTextureRebuildCallback_3 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Font::GetMaxVertsForString(System.String)
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern "C" int32_t Font_GetMaxVertsForString_m3118 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method)
{
	{
		String_t* L_0 = ___str;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m2207(L_0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_1*(int32_t)4))+(int32_t)4));
	}
}
// System.Boolean UnityEngine.Font::GetCharacterInfo(System.Char,UnityEngine.CharacterInfo&,System.Int32,UnityEngine.FontStyle)
extern "C" bool Font_GetCharacterInfo_m3119 (Font_t197 * __this, uint16_t ___ch, CharacterInfo_t525 * ___info, int32_t ___size, int32_t ___style, const MethodInfo* method)
{
	typedef bool (*Font_GetCharacterInfo_m3119_ftn) (Font_t197 *, uint16_t, CharacterInfo_t525 *, int32_t, int32_t);
	static Font_GetCharacterInfo_m3119_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_GetCharacterInfo_m3119_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::GetCharacterInfo(System.Char,UnityEngine.CharacterInfo&,System.Int32,UnityEngine.FontStyle)");
	return _il2cpp_icall_func(__this, ___ch, ___info, ___size, ___style);
}
// System.Boolean UnityEngine.Font::GetCharacterInfo(System.Char,UnityEngine.CharacterInfo&,System.Int32)
extern "C" bool Font_GetCharacterInfo_m3120 (Font_t197 * __this, uint16_t ___ch, CharacterInfo_t525 * ___info, int32_t ___size, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		V_0 = 0;
		uint16_t L_0 = ___ch;
		CharacterInfo_t525 * L_1 = ___info;
		int32_t L_2 = ___size;
		int32_t L_3 = V_0;
		bool L_4 = Font_GetCharacterInfo_m3119(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean UnityEngine.Font::GetCharacterInfo(System.Char,UnityEngine.CharacterInfo&)
extern "C" bool Font_GetCharacterInfo_m3121 (Font_t197 * __this, uint16_t ___ch, CharacterInfo_t525 * ___info, const MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		uint16_t L_0 = ___ch;
		CharacterInfo_t525 * L_1 = ___info;
		int32_t L_2 = V_1;
		int32_t L_3 = V_0;
		bool L_4 = Font_GetCharacterInfo_m3119(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean UnityEngine.Font::get_dynamic()
extern "C" bool Font_get_dynamic_m2363 (Font_t197 * __this, const MethodInfo* method)
{
	typedef bool (*Font_get_dynamic_m2363_ftn) (Font_t197 *);
	static Font_get_dynamic_m2363_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_dynamic_m2363_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_dynamic()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Font::get_ascent()
extern "C" int32_t Font_get_ascent_m3122 (Font_t197 * __this, const MethodInfo* method)
{
	typedef int32_t (*Font_get_ascent_m3122_ftn) (Font_t197 *);
	static Font_get_ascent_m3122_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_ascent_m3122_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_ascent()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Font::get_lineHeight()
extern "C" int32_t Font_get_lineHeight_m3123 (Font_t197 * __this, const MethodInfo* method)
{
	typedef int32_t (*Font_get_lineHeight_m3123_ftn) (Font_t197 *);
	static Font_get_lineHeight_m3123_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_lineHeight_m3123_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_lineHeight()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Font::get_fontSize()
extern "C" int32_t Font_get_fontSize_m2365 (Font_t197 * __this, const MethodInfo* method)
{
	typedef int32_t (*Font_get_fontSize_m2365_ftn) (Font_t197 *);
	static Font_get_fontSize_m2365_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_fontSize_m2365_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_fontSize()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfoMethodDeclarations.h"
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfoMethodDeclarations.h"
// UnityEngine.TextGenerator
#include "UnityEngine_UnityEngine_TextGenerator.h"
// UnityEngine.TextGenerator
#include "UnityEngine_UnityEngine_TextGeneratorMethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_gen_12.h"
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_29.h"
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_30.h"
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettings.h"
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_gen_12MethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_29MethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_30MethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettingsMethodDeclarations.h"
// System.Void UnityEngine.TextGenerator::.ctor()
// UnityEngine.TextGenerator
#include "UnityEngine_UnityEngine_TextGeneratorMethodDeclarations.h"
extern "C" void TextGenerator__ctor_m2201 (TextGenerator_t236 * __this, const MethodInfo* method)
{
	{
		TextGenerator__ctor_m2359(__this, ((int32_t)50), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::.ctor(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_gen_12MethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_29MethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_30MethodDeclarations.h"
extern TypeInfo* List_1_t341_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t527_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t528_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3620_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m3621_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m3622_MethodInfo_var;
extern "C" void TextGenerator__ctor_m2359 (TextGenerator_t236 * __this, int32_t ___initialCapacity, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(302);
		List_1_t527_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(357);
		List_1_t528_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(358);
		List_1__ctor_m3620_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483977);
		List_1__ctor_m3621_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483978);
		List_1__ctor_m3622_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483979);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m355(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___initialCapacity;
		List_1_t341 * L_1 = (List_1_t341 *)il2cpp_codegen_object_new (List_1_t341_il2cpp_TypeInfo_var);
		List_1__ctor_m3620(L_1, ((int32_t)((int32_t)((int32_t)((int32_t)L_0+(int32_t)1))*(int32_t)4)), /*hidden argument*/List_1__ctor_m3620_MethodInfo_var);
		__this->___m_Verts_5 = L_1;
		int32_t L_2 = ___initialCapacity;
		List_1_t527 * L_3 = (List_1_t527 *)il2cpp_codegen_object_new (List_1_t527_il2cpp_TypeInfo_var);
		List_1__ctor_m3621(L_3, ((int32_t)((int32_t)L_2+(int32_t)1)), /*hidden argument*/List_1__ctor_m3621_MethodInfo_var);
		__this->___m_Characters_6 = L_3;
		List_1_t528 * L_4 = (List_1_t528 *)il2cpp_codegen_object_new (List_1_t528_il2cpp_TypeInfo_var);
		List_1__ctor_m3622(L_4, ((int32_t)20), /*hidden argument*/List_1__ctor_m3622_MethodInfo_var);
		__this->___m_Lines_7 = L_4;
		TextGenerator_Init_m3125(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::System.IDisposable.Dispose()
extern "C" void TextGenerator_System_IDisposable_Dispose_m3124 (TextGenerator_t236 * __this, const MethodInfo* method)
{
	{
		TextGenerator_Dispose_cpp_m3126(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::Init()
extern "C" void TextGenerator_Init_m3125 (TextGenerator_t236 * __this, const MethodInfo* method)
{
	typedef void (*TextGenerator_Init_m3125_ftn) (TextGenerator_t236 *);
	static TextGenerator_Init_m3125_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_Init_m3125_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::Init()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::Dispose_cpp()
extern "C" void TextGenerator_Dispose_cpp_m3126 (TextGenerator_t236 * __this, const MethodInfo* method)
{
	typedef void (*TextGenerator_Dispose_cpp_m3126_ftn) (TextGenerator_t236 *);
	static TextGenerator_Dispose_cpp_m3126_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_Dispose_cpp_m3126_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::Dispose_cpp()");
	_il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.TextGenerator::Populate_Internal(System.String,UnityEngine.Font,UnityEngine.Color,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,UnityEngine.VerticalWrapMode,UnityEngine.HorizontalWrapMode,System.Boolean,UnityEngine.TextAnchor,UnityEngine.Vector2,UnityEngine.Vector2,System.Boolean)
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.Font
#include "UnityEngine_UnityEngine_Font.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.VerticalWrapMode
#include "UnityEngine_UnityEngine_VerticalWrapMode.h"
// UnityEngine.HorizontalWrapMode
#include "UnityEngine_UnityEngine_HorizontalWrapMode.h"
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
extern "C" bool TextGenerator_Populate_Internal_m3127 (TextGenerator_t236 * __this, String_t* ___str, Font_t197 * ___font, Color_t11  ___color, int32_t ___fontSize, float ___scaleFactor, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, Vector2_t15  ___extents, Vector2_t15  ___pivot, bool ___generateOutOfBounds, const MethodInfo* method)
{
	{
		String_t* L_0 = ___str;
		Font_t197 * L_1 = ___font;
		Color_t11  L_2 = ___color;
		int32_t L_3 = ___fontSize;
		float L_4 = ___scaleFactor;
		float L_5 = ___lineSpacing;
		int32_t L_6 = ___style;
		bool L_7 = ___richText;
		bool L_8 = ___resizeTextForBestFit;
		int32_t L_9 = ___resizeTextMinSize;
		int32_t L_10 = ___resizeTextMaxSize;
		int32_t L_11 = ___verticalOverFlow;
		int32_t L_12 = ___horizontalOverflow;
		bool L_13 = ___updateBounds;
		int32_t L_14 = ___anchor;
		float L_15 = ((&___extents)->___x_1);
		float L_16 = ((&___extents)->___y_2);
		float L_17 = ((&___pivot)->___x_1);
		float L_18 = ((&___pivot)->___y_2);
		bool L_19 = ___generateOutOfBounds;
		bool L_20 = TextGenerator_Populate_Internal_cpp_m3128(__this, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, L_19, /*hidden argument*/NULL);
		return L_20;
	}
}
// System.Boolean UnityEngine.TextGenerator::Populate_Internal_cpp(System.String,UnityEngine.Font,UnityEngine.Color,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean)
extern "C" bool TextGenerator_Populate_Internal_cpp_m3128 (TextGenerator_t236 * __this, String_t* ___str, Font_t197 * ___font, Color_t11  ___color, int32_t ___fontSize, float ___scaleFactor, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, float ___extentsX, float ___extentsY, float ___pivotX, float ___pivotY, bool ___generateOutOfBounds, const MethodInfo* method)
{
	{
		String_t* L_0 = ___str;
		Font_t197 * L_1 = ___font;
		int32_t L_2 = ___fontSize;
		float L_3 = ___scaleFactor;
		float L_4 = ___lineSpacing;
		int32_t L_5 = ___style;
		bool L_6 = ___richText;
		bool L_7 = ___resizeTextForBestFit;
		int32_t L_8 = ___resizeTextMinSize;
		int32_t L_9 = ___resizeTextMaxSize;
		int32_t L_10 = ___verticalOverFlow;
		int32_t L_11 = ___horizontalOverflow;
		bool L_12 = ___updateBounds;
		int32_t L_13 = ___anchor;
		float L_14 = ___extentsX;
		float L_15 = ___extentsY;
		float L_16 = ___pivotX;
		float L_17 = ___pivotY;
		bool L_18 = ___generateOutOfBounds;
		bool L_19 = TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m3129(NULL /*static, unused*/, __this, L_0, L_1, (&___color), L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, /*hidden argument*/NULL);
		return L_19;
	}
}
// System.Boolean UnityEngine.TextGenerator::INTERNAL_CALL_Populate_Internal_cpp(UnityEngine.TextGenerator,System.String,UnityEngine.Font,UnityEngine.Color&,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean)
// UnityEngine.TextGenerator
#include "UnityEngine_UnityEngine_TextGenerator.h"
extern "C" bool TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m3129 (Object_t * __this /* static, unused */, TextGenerator_t236 * ___self, String_t* ___str, Font_t197 * ___font, Color_t11 * ___color, int32_t ___fontSize, float ___scaleFactor, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, float ___extentsX, float ___extentsY, float ___pivotX, float ___pivotY, bool ___generateOutOfBounds, const MethodInfo* method)
{
	typedef bool (*TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m3129_ftn) (TextGenerator_t236 *, String_t*, Font_t197 *, Color_t11 *, int32_t, float, float, int32_t, bool, bool, int32_t, int32_t, int32_t, int32_t, bool, int32_t, float, float, float, float, bool);
	static TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m3129_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m3129_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::INTERNAL_CALL_Populate_Internal_cpp(UnityEngine.TextGenerator,System.String,UnityEngine.Font,UnityEngine.Color&,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean)");
	return _il2cpp_icall_func(___self, ___str, ___font, ___color, ___fontSize, ___scaleFactor, ___lineSpacing, ___style, ___richText, ___resizeTextForBestFit, ___resizeTextMinSize, ___resizeTextMaxSize, ___verticalOverFlow, ___horizontalOverflow, ___updateBounds, ___anchor, ___extentsX, ___extentsY, ___pivotX, ___pivotY, ___generateOutOfBounds);
}
// UnityEngine.Rect UnityEngine.TextGenerator::get_rectExtents()
extern "C" Rect_t18  TextGenerator_get_rectExtents_m2255 (TextGenerator_t236 * __this, const MethodInfo* method)
{
	Rect_t18  V_0 = {0};
	{
		TextGenerator_INTERNAL_get_rectExtents_m3130(__this, (&V_0), /*hidden argument*/NULL);
		Rect_t18  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.TextGenerator::INTERNAL_get_rectExtents(UnityEngine.Rect&)
extern "C" void TextGenerator_INTERNAL_get_rectExtents_m3130 (TextGenerator_t236 * __this, Rect_t18 * ___value, const MethodInfo* method)
{
	typedef void (*TextGenerator_INTERNAL_get_rectExtents_m3130_ftn) (TextGenerator_t236 *, Rect_t18 *);
	static TextGenerator_INTERNAL_get_rectExtents_m3130_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_INTERNAL_get_rectExtents_m3130_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::INTERNAL_get_rectExtents(UnityEngine.Rect&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.TextGenerator::get_vertexCount()
extern "C" int32_t TextGenerator_get_vertexCount_m3131 (TextGenerator_t236 * __this, const MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_vertexCount_m3131_ftn) (TextGenerator_t236 *);
	static TextGenerator_get_vertexCount_m3131_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_vertexCount_m3131_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_vertexCount()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::GetVerticesInternal(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" void TextGenerator_GetVerticesInternal_m3132 (TextGenerator_t236 * __this, Object_t * ___vertices, const MethodInfo* method)
{
	typedef void (*TextGenerator_GetVerticesInternal_m3132_ftn) (TextGenerator_t236 *, Object_t *);
	static TextGenerator_GetVerticesInternal_m3132_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetVerticesInternal_m3132_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetVerticesInternal(System.Object)");
	_il2cpp_icall_func(__this, ___vertices);
}
// UnityEngine.UIVertex[] UnityEngine.TextGenerator::GetVerticesArray()
extern "C" UIVertexU5BU5D_t235* TextGenerator_GetVerticesArray_m3133 (TextGenerator_t236 * __this, const MethodInfo* method)
{
	typedef UIVertexU5BU5D_t235* (*TextGenerator_GetVerticesArray_m3133_ftn) (TextGenerator_t236 *);
	static TextGenerator_GetVerticesArray_m3133_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetVerticesArray_m3133_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetVerticesArray()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_characterCount()
extern "C" int32_t TextGenerator_get_characterCount_m3134 (TextGenerator_t236 * __this, const MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_characterCount_m3134_ftn) (TextGenerator_t236 *);
	static TextGenerator_get_characterCount_m3134_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_characterCount_m3134_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_characterCount()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_characterCountVisible()
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t69_il2cpp_TypeInfo_var;
extern "C" int32_t TextGenerator_get_characterCountVisible_m2234 (TextGenerator_t236 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		Mathf_t69_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = (__this->___m_LastString_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m2253(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0036;
	}

IL_0016:
	{
		String_t* L_2 = (__this->___m_LastString_1);
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m2207(L_2, /*hidden argument*/NULL);
		int32_t L_4 = TextGenerator_get_vertexCount_m3131(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t69_il2cpp_TypeInfo_var);
		int32_t L_5 = Mathf_Max_m540(NULL /*static, unused*/, 0, ((int32_t)((int32_t)((int32_t)((int32_t)L_4-(int32_t)4))/(int32_t)4)), /*hidden argument*/NULL);
		int32_t L_6 = Mathf_Min_m541(NULL /*static, unused*/, L_3, L_5, /*hidden argument*/NULL);
		G_B3_0 = L_6;
	}

IL_0036:
	{
		return G_B3_0;
	}
}
// System.Void UnityEngine.TextGenerator::GetCharactersInternal(System.Object)
extern "C" void TextGenerator_GetCharactersInternal_m3135 (TextGenerator_t236 * __this, Object_t * ___characters, const MethodInfo* method)
{
	typedef void (*TextGenerator_GetCharactersInternal_m3135_ftn) (TextGenerator_t236 *, Object_t *);
	static TextGenerator_GetCharactersInternal_m3135_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetCharactersInternal_m3135_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetCharactersInternal(System.Object)");
	_il2cpp_icall_func(__this, ___characters);
}
// UnityEngine.UICharInfo[] UnityEngine.TextGenerator::GetCharactersArray()
extern "C" UICharInfoU5BU5D_t642* TextGenerator_GetCharactersArray_m3136 (TextGenerator_t236 * __this, const MethodInfo* method)
{
	typedef UICharInfoU5BU5D_t642* (*TextGenerator_GetCharactersArray_m3136_ftn) (TextGenerator_t236 *);
	static TextGenerator_GetCharactersArray_m3136_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetCharactersArray_m3136_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetCharactersArray()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_lineCount()
extern "C" int32_t TextGenerator_get_lineCount_m2233 (TextGenerator_t236 * __this, const MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_lineCount_m2233_ftn) (TextGenerator_t236 *);
	static TextGenerator_get_lineCount_m2233_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_lineCount_m2233_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_lineCount()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::GetLinesInternal(System.Object)
extern "C" void TextGenerator_GetLinesInternal_m3137 (TextGenerator_t236 * __this, Object_t * ___lines, const MethodInfo* method)
{
	typedef void (*TextGenerator_GetLinesInternal_m3137_ftn) (TextGenerator_t236 *, Object_t *);
	static TextGenerator_GetLinesInternal_m3137_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetLinesInternal_m3137_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetLinesInternal(System.Object)");
	_il2cpp_icall_func(__this, ___lines);
}
// UnityEngine.UILineInfo[] UnityEngine.TextGenerator::GetLinesArray()
extern "C" UILineInfoU5BU5D_t643* TextGenerator_GetLinesArray_m3138 (TextGenerator_t236 * __this, const MethodInfo* method)
{
	typedef UILineInfoU5BU5D_t643* (*TextGenerator_GetLinesArray_m3138_ftn) (TextGenerator_t236 *);
	static TextGenerator_GetLinesArray_m3138_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetLinesArray_m3138_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetLinesArray()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_fontSizeUsedForBestFit()
extern "C" int32_t TextGenerator_get_fontSizeUsedForBestFit_m2267 (TextGenerator_t236 * __this, const MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_fontSizeUsedForBestFit_m2267_ftn) (TextGenerator_t236 *);
	static TextGenerator_get_fontSizeUsedForBestFit_m2267_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_fontSizeUsedForBestFit_m2267_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_fontSizeUsedForBestFit()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::Finalize()
extern TypeInfo* IDisposable_t359_il2cpp_TypeInfo_var;
extern "C" void TextGenerator_Finalize_m3139 (TextGenerator_t236 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDisposable_t359_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(124);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t108 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t108 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t359_il2cpp_TypeInfo_var, __this);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t108 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m3589(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t108 *)
	}

IL_0012:
	{
		return;
	}
}
// UnityEngine.TextGenerationSettings UnityEngine.TextGenerator::ValidatedSettings(UnityEngine.TextGenerationSettings)
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettings.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Font
#include "UnityEngine_UnityEngine_FontMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral192;
extern Il2CppCodeGenString* _stringLiteral193;
extern "C" TextGenerationSettings_t347  TextGenerator_ValidatedSettings_m3140 (TextGenerator_t236 * __this, TextGenerationSettings_t347  ___settings, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral192 = il2cpp_codegen_string_literal_from_index(192);
		_stringLiteral193 = il2cpp_codegen_string_literal_from_index(193);
		s_Il2CppMethodIntialized = true;
	}
	{
		Font_t197 * L_0 = ((&___settings)->___font_0);
		bool L_1 = Object_op_Inequality_m312(NULL /*static, unused*/, L_0, (Object_t75 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		Font_t197 * L_2 = ((&___settings)->___font_0);
		NullCheck(L_2);
		bool L_3 = Font_get_dynamic_m2363(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		TextGenerationSettings_t347  L_4 = ___settings;
		return L_4;
	}

IL_0025:
	{
		int32_t L_5 = ((&___settings)->___fontSize_2);
		if (L_5)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_6 = ((&___settings)->___fontStyle_6);
		if (!L_6)
		{
			goto IL_0057;
		}
	}

IL_003d:
	{
		Debug_LogWarning_m310(NULL /*static, unused*/, _stringLiteral192, /*hidden argument*/NULL);
		(&___settings)->___fontSize_2 = 0;
		(&___settings)->___fontStyle_6 = 0;
	}

IL_0057:
	{
		bool L_7 = ((&___settings)->___resizeTextForBestFit_8);
		if (!L_7)
		{
			goto IL_0075;
		}
	}
	{
		Debug_LogWarning_m310(NULL /*static, unused*/, _stringLiteral193, /*hidden argument*/NULL);
		(&___settings)->___resizeTextForBestFit_8 = 0;
	}

IL_0075:
	{
		TextGenerationSettings_t347  L_8 = ___settings;
		return L_8;
	}
}
// System.Void UnityEngine.TextGenerator::Invalidate()
extern "C" void TextGenerator_Invalidate_m2362 (TextGenerator_t236 * __this, const MethodInfo* method)
{
	{
		__this->___m_HasGenerated_3 = 0;
		return;
	}
}
// System.Void UnityEngine.TextGenerator::GetCharacters(System.Collections.Generic.List`1<UnityEngine.UICharInfo>)
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_29.h"
extern "C" void TextGenerator_GetCharacters_m3141 (TextGenerator_t236 * __this, List_1_t527 * ___characters, const MethodInfo* method)
{
	{
		List_1_t527 * L_0 = ___characters;
		TextGenerator_GetCharactersInternal_m3135(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::GetLines(System.Collections.Generic.List`1<UnityEngine.UILineInfo>)
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_30.h"
extern "C" void TextGenerator_GetLines_m3142 (TextGenerator_t236 * __this, List_1_t528 * ___lines, const MethodInfo* method)
{
	{
		List_1_t528 * L_0 = ___lines;
		TextGenerator_GetLinesInternal_m3137(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::GetVertices(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_gen_12.h"
extern "C" void TextGenerator_GetVertices_m3143 (TextGenerator_t236 * __this, List_1_t341 * ___vertices, const MethodInfo* method)
{
	{
		List_1_t341 * L_0 = ___vertices;
		TextGenerator_GetVerticesInternal_m3132(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Single UnityEngine.TextGenerator::GetPreferredWidth(System.String,UnityEngine.TextGenerationSettings)
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
extern "C" float TextGenerator_GetPreferredWidth_m2367 (TextGenerator_t236 * __this, String_t* ___str, TextGenerationSettings_t347  ___settings, const MethodInfo* method)
{
	Rect_t18  V_0 = {0};
	{
		(&___settings)->___horizontalOverflow_13 = 1;
		(&___settings)->___verticalOverflow_12 = 1;
		(&___settings)->___updateBounds_11 = 1;
		String_t* L_0 = ___str;
		TextGenerationSettings_t347  L_1 = ___settings;
		TextGenerator_Populate_m2254(__this, L_0, L_1, /*hidden argument*/NULL);
		Rect_t18  L_2 = TextGenerator_get_rectExtents_m2255(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = Rect_get_width_m334((&V_0), /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Single UnityEngine.TextGenerator::GetPreferredHeight(System.String,UnityEngine.TextGenerationSettings)
extern "C" float TextGenerator_GetPreferredHeight_m2368 (TextGenerator_t236 * __this, String_t* ___str, TextGenerationSettings_t347  ___settings, const MethodInfo* method)
{
	Rect_t18  V_0 = {0};
	{
		(&___settings)->___verticalOverflow_12 = 1;
		(&___settings)->___updateBounds_11 = 1;
		String_t* L_0 = ___str;
		TextGenerationSettings_t347  L_1 = ___settings;
		TextGenerator_Populate_m2254(__this, L_0, L_1, /*hidden argument*/NULL);
		Rect_t18  L_2 = TextGenerator_get_rectExtents_m2255(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = Rect_get_height_m336((&V_0), /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean UnityEngine.TextGenerator::Populate(System.String,UnityEngine.TextGenerationSettings)
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettingsMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool TextGenerator_Populate_m2254 (TextGenerator_t236 * __this, String_t* ___str, TextGenerationSettings_t347  ___settings, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___m_HasGenerated_3);
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		String_t* L_1 = ___str;
		String_t* L_2 = (__this->___m_LastString_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m2205(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		TextGenerationSettings_t347  L_4 = (__this->___m_LastSettings_2);
		bool L_5 = TextGenerationSettings_Equals_m3518((&___settings), L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		bool L_6 = (__this->___m_LastValid_4);
		return L_6;
	}

IL_0035:
	{
		String_t* L_7 = ___str;
		TextGenerationSettings_t347  L_8 = ___settings;
		bool L_9 = TextGenerator_PopulateAlways_m3144(__this, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Boolean UnityEngine.TextGenerator::PopulateAlways(System.String,UnityEngine.TextGenerationSettings)
extern "C" bool TextGenerator_PopulateAlways_m3144 (TextGenerator_t236 * __this, String_t* ___str, TextGenerationSettings_t347  ___settings, const MethodInfo* method)
{
	TextGenerationSettings_t347  V_0 = {0};
	{
		String_t* L_0 = ___str;
		__this->___m_LastString_1 = L_0;
		__this->___m_HasGenerated_3 = 1;
		__this->___m_CachedVerts_8 = 0;
		__this->___m_CachedCharacters_9 = 0;
		__this->___m_CachedLines_10 = 0;
		TextGenerationSettings_t347  L_1 = ___settings;
		__this->___m_LastSettings_2 = L_1;
		TextGenerationSettings_t347  L_2 = ___settings;
		TextGenerationSettings_t347  L_3 = TextGenerator_ValidatedSettings_m3140(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4 = ___str;
		Font_t197 * L_5 = ((&V_0)->___font_0);
		Color_t11  L_6 = ((&V_0)->___color_1);
		int32_t L_7 = ((&V_0)->___fontSize_2);
		float L_8 = ((&V_0)->___scaleFactor_5);
		float L_9 = ((&V_0)->___lineSpacing_3);
		int32_t L_10 = ((&V_0)->___fontStyle_6);
		bool L_11 = ((&V_0)->___richText_4);
		bool L_12 = ((&V_0)->___resizeTextForBestFit_8);
		int32_t L_13 = ((&V_0)->___resizeTextMinSize_9);
		int32_t L_14 = ((&V_0)->___resizeTextMaxSize_10);
		int32_t L_15 = ((&V_0)->___verticalOverflow_12);
		int32_t L_16 = ((&V_0)->___horizontalOverflow_13);
		bool L_17 = ((&V_0)->___updateBounds_11);
		int32_t L_18 = ((&V_0)->___textAnchor_7);
		Vector2_t15  L_19 = ((&V_0)->___generationExtents_14);
		Vector2_t15  L_20 = ((&V_0)->___pivot_15);
		bool L_21 = ((&V_0)->___generateOutOfBounds_16);
		bool L_22 = TextGenerator_Populate_Internal_m3127(__this, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, L_19, L_20, L_21, /*hidden argument*/NULL);
		__this->___m_LastValid_4 = L_22;
		bool L_23 = (__this->___m_LastValid_4);
		return L_23;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.UIVertex> UnityEngine.TextGenerator::get_verts()
extern "C" Object_t* TextGenerator_get_verts_m2366 (TextGenerator_t236 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CachedVerts_8);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		List_1_t341 * L_1 = (__this->___m_Verts_5);
		TextGenerator_GetVertices_m3143(__this, L_1, /*hidden argument*/NULL);
		__this->___m_CachedVerts_8 = 1;
	}

IL_001e:
	{
		List_1_t341 * L_2 = (__this->___m_Verts_5);
		return L_2;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.UICharInfo> UnityEngine.TextGenerator::get_characters()
extern "C" Object_t* TextGenerator_get_characters_m2235 (TextGenerator_t236 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CachedCharacters_9);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		List_1_t527 * L_1 = (__this->___m_Characters_6);
		TextGenerator_GetCharacters_m3141(__this, L_1, /*hidden argument*/NULL);
		__this->___m_CachedCharacters_9 = 1;
	}

IL_001e:
	{
		List_1_t527 * L_2 = (__this->___m_Characters_6);
		return L_2;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.UILineInfo> UnityEngine.TextGenerator::get_lines()
extern "C" Object_t* TextGenerator_get_lines_m2232 (TextGenerator_t236 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CachedLines_10);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		List_1_t528 * L_1 = (__this->___m_Lines_7);
		TextGenerator_GetLines_m3142(__this, L_1, /*hidden argument*/NULL);
		__this->___m_CachedLines_10 = 1;
	}

IL_001e:
	{
		List_1_t528 * L_2 = (__this->___m_Lines_7);
		return L_2;
	}
}
// UnityEngine.RenderMode
#include "UnityEngine_UnityEngine_RenderMode.h"
// UnityEngine.RenderMode
#include "UnityEngine_UnityEngine_RenderModeMethodDeclarations.h"
// UnityEngine.Canvas/WillRenderCanvases
#include "UnityEngine_UnityEngine_Canvas_WillRenderCanvases.h"
// UnityEngine.Canvas/WillRenderCanvases
#include "UnityEngine_UnityEngine_Canvas_WillRenderCanvasesMethodDeclarations.h"
// System.Void UnityEngine.Canvas/WillRenderCanvases::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void WillRenderCanvases__ctor_m2018 (WillRenderCanvases_t368 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Canvas/WillRenderCanvases::Invoke()
extern "C" void WillRenderCanvases_Invoke_m3145 (WillRenderCanvases_t368 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		WillRenderCanvases_Invoke_m3145((WillRenderCanvases_t368 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_WillRenderCanvases_t368(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Canvas/WillRenderCanvases::BeginInvoke(System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * WillRenderCanvases_BeginInvoke_m3146 (WillRenderCanvases_t368 * __this, AsyncCallback_t9 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Canvas/WillRenderCanvases::EndInvoke(System.IAsyncResult)
extern "C" void WillRenderCanvases_EndInvoke_m3147 (WillRenderCanvases_t368 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Canvas
#include "UnityEngine_UnityEngine_Canvas.h"
// UnityEngine.Canvas
#include "UnityEngine_UnityEngine_CanvasMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// System.Void UnityEngine.Canvas::add_willRenderCanvases(UnityEngine.Canvas/WillRenderCanvases)
// UnityEngine.Canvas/WillRenderCanvases
#include "UnityEngine_UnityEngine_Canvas_WillRenderCanvases.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
extern TypeInfo* Canvas_t202_il2cpp_TypeInfo_var;
extern TypeInfo* WillRenderCanvases_t368_il2cpp_TypeInfo_var;
extern "C" void Canvas_add_willRenderCanvases_m2019 (Object_t * __this /* static, unused */, WillRenderCanvases_t368 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Canvas_t202_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(168);
		WillRenderCanvases_t368_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(139);
		s_Il2CppMethodIntialized = true;
	}
	{
		WillRenderCanvases_t368 * L_0 = ((Canvas_t202_StaticFields*)Canvas_t202_il2cpp_TypeInfo_var->static_fields)->___willRenderCanvases_2;
		WillRenderCanvases_t368 * L_1 = ___value;
		Delegate_t74 * L_2 = Delegate_Combine_m303(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Canvas_t202_StaticFields*)Canvas_t202_il2cpp_TypeInfo_var->static_fields)->___willRenderCanvases_2 = ((WillRenderCanvases_t368 *)CastclassSealed(L_2, WillRenderCanvases_t368_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Canvas::remove_willRenderCanvases(UnityEngine.Canvas/WillRenderCanvases)
extern TypeInfo* Canvas_t202_il2cpp_TypeInfo_var;
extern TypeInfo* WillRenderCanvases_t368_il2cpp_TypeInfo_var;
extern "C" void Canvas_remove_willRenderCanvases_m3148 (Object_t * __this /* static, unused */, WillRenderCanvases_t368 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Canvas_t202_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(168);
		WillRenderCanvases_t368_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(139);
		s_Il2CppMethodIntialized = true;
	}
	{
		WillRenderCanvases_t368 * L_0 = ((Canvas_t202_StaticFields*)Canvas_t202_il2cpp_TypeInfo_var->static_fields)->___willRenderCanvases_2;
		WillRenderCanvases_t368 * L_1 = ___value;
		Delegate_t74 * L_2 = Delegate_Remove_m304(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Canvas_t202_StaticFields*)Canvas_t202_il2cpp_TypeInfo_var->static_fields)->___willRenderCanvases_2 = ((WillRenderCanvases_t368 *)CastclassSealed(L_2, WillRenderCanvases_t368_il2cpp_TypeInfo_var));
		return;
	}
}
// UnityEngine.RenderMode UnityEngine.Canvas::get_renderMode()
extern "C" int32_t Canvas_get_renderMode_m2155 (Canvas_t202 * __this, const MethodInfo* method)
{
	typedef int32_t (*Canvas_get_renderMode_m2155_ftn) (Canvas_t202 *);
	static Canvas_get_renderMode_m2155_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_renderMode_m2155_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_renderMode()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Canvas::get_isRootCanvas()
extern "C" bool Canvas_get_isRootCanvas_m2380 (Canvas_t202 * __this, const MethodInfo* method)
{
	typedef bool (*Canvas_get_isRootCanvas_m2380_ftn) (Canvas_t202 *);
	static Canvas_get_isRootCanvas_m2380_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_isRootCanvas_m2380_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_isRootCanvas()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
extern "C" Camera_t32 * Canvas_get_worldCamera_m2164 (Canvas_t202 * __this, const MethodInfo* method)
{
	typedef Camera_t32 * (*Canvas_get_worldCamera_m2164_ftn) (Canvas_t202 *);
	static Canvas_get_worldCamera_m2164_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_worldCamera_m2164_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_worldCamera()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Canvas::get_scaleFactor()
extern "C" float Canvas_get_scaleFactor_m2364 (Canvas_t202 * __this, const MethodInfo* method)
{
	typedef float (*Canvas_get_scaleFactor_m2364_ftn) (Canvas_t202 *);
	static Canvas_get_scaleFactor_m2364_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_scaleFactor_m2364_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_scaleFactor()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Canvas::set_scaleFactor(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void Canvas_set_scaleFactor_m2382 (Canvas_t202 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*Canvas_set_scaleFactor_m2382_ftn) (Canvas_t202 *, float);
	static Canvas_set_scaleFactor_m2382_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_set_scaleFactor_m2382_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::set_scaleFactor(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.Canvas::get_referencePixelsPerUnit()
extern "C" float Canvas_get_referencePixelsPerUnit_m2180 (Canvas_t202 * __this, const MethodInfo* method)
{
	typedef float (*Canvas_get_referencePixelsPerUnit_m2180_ftn) (Canvas_t202 *);
	static Canvas_get_referencePixelsPerUnit_m2180_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_referencePixelsPerUnit_m2180_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_referencePixelsPerUnit()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Canvas::set_referencePixelsPerUnit(System.Single)
extern "C" void Canvas_set_referencePixelsPerUnit_m2383 (Canvas_t202 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*Canvas_set_referencePixelsPerUnit_m2383_ftn) (Canvas_t202 *, float);
	static Canvas_set_referencePixelsPerUnit_m2383_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_set_referencePixelsPerUnit_m2383_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::set_referencePixelsPerUnit(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.Canvas::get_pixelPerfect()
extern "C" bool Canvas_get_pixelPerfect_m2146 (Canvas_t202 * __this, const MethodInfo* method)
{
	typedef bool (*Canvas_get_pixelPerfect_m2146_ftn) (Canvas_t202 *);
	static Canvas_get_pixelPerfect_m2146_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_pixelPerfect_m2146_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_pixelPerfect()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Canvas::get_renderOrder()
extern "C" int32_t Canvas_get_renderOrder_m2156 (Canvas_t202 * __this, const MethodInfo* method)
{
	typedef int32_t (*Canvas_get_renderOrder_m2156_ftn) (Canvas_t202 *);
	static Canvas_get_renderOrder_m2156_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_renderOrder_m2156_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_renderOrder()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Canvas::get_overrideSorting()
extern "C" bool Canvas_get_overrideSorting_m2294 (Canvas_t202 * __this, const MethodInfo* method)
{
	typedef bool (*Canvas_get_overrideSorting_m2294_ftn) (Canvas_t202 *);
	static Canvas_get_overrideSorting_m2294_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_overrideSorting_m2294_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_overrideSorting()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Canvas::set_overrideSorting(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void Canvas_set_overrideSorting_m2074 (Canvas_t202 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*Canvas_set_overrideSorting_m2074_ftn) (Canvas_t202 *, bool);
	static Canvas_set_overrideSorting_m2074_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_set_overrideSorting_m2074_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::set_overrideSorting(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.Canvas::get_sortingOrder()
extern "C" int32_t Canvas_get_sortingOrder_m2100 (Canvas_t202 * __this, const MethodInfo* method)
{
	typedef int32_t (*Canvas_get_sortingOrder_m2100_ftn) (Canvas_t202 *);
	static Canvas_get_sortingOrder_m2100_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_sortingOrder_m2100_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_sortingOrder()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Canvas::set_sortingOrder(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void Canvas_set_sortingOrder_m2075 (Canvas_t202 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*Canvas_set_sortingOrder_m2075_ftn) (Canvas_t202 *, int32_t);
	static Canvas_set_sortingOrder_m2075_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_set_sortingOrder_m2075_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::set_sortingOrder(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.Canvas::get_sortingLayerID()
extern "C" int32_t Canvas_get_sortingLayerID_m2098 (Canvas_t202 * __this, const MethodInfo* method)
{
	typedef int32_t (*Canvas_get_sortingLayerID_m2098_ftn) (Canvas_t202 *);
	static Canvas_get_sortingLayerID_m2098_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_sortingLayerID_m2098_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_sortingLayerID()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Canvas::set_sortingLayerID(System.Int32)
extern "C" void Canvas_set_sortingLayerID_m2099 (Canvas_t202 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*Canvas_set_sortingLayerID_m2099_ftn) (Canvas_t202 *, int32_t);
	static Canvas_set_sortingLayerID_m2099_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_set_sortingLayerID_m2099_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::set_sortingLayerID(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.Canvas::get_cachedSortingLayerValue()
extern "C" int32_t Canvas_get_cachedSortingLayerValue_m2163 (Canvas_t202 * __this, const MethodInfo* method)
{
	typedef int32_t (*Canvas_get_cachedSortingLayerValue_m2163_ftn) (Canvas_t202 *);
	static Canvas_get_cachedSortingLayerValue_m2163_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_cachedSortingLayerValue_m2163_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_cachedSortingLayerValue()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Material UnityEngine.Canvas::GetDefaultCanvasMaterial()
extern "C" Material_t42 * Canvas_GetDefaultCanvasMaterial_m2124 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef Material_t42 * (*Canvas_GetDefaultCanvasMaterial_m2124_ftn) ();
	static Canvas_GetDefaultCanvasMaterial_m2124_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_GetDefaultCanvasMaterial_m2124_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::GetDefaultCanvasMaterial()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Canvas::SendWillRenderCanvases()
// UnityEngine.Canvas/WillRenderCanvases
#include "UnityEngine_UnityEngine_Canvas_WillRenderCanvasesMethodDeclarations.h"
extern TypeInfo* Canvas_t202_il2cpp_TypeInfo_var;
extern "C" void Canvas_SendWillRenderCanvases_m3149 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Canvas_t202_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(168);
		s_Il2CppMethodIntialized = true;
	}
	{
		WillRenderCanvases_t368 * L_0 = ((Canvas_t202_StaticFields*)Canvas_t202_il2cpp_TypeInfo_var->static_fields)->___willRenderCanvases_2;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		WillRenderCanvases_t368 * L_1 = ((Canvas_t202_StaticFields*)Canvas_t202_il2cpp_TypeInfo_var->static_fields)->___willRenderCanvases_2;
		NullCheck(L_1);
		WillRenderCanvases_Invoke_m3145(L_1, /*hidden argument*/NULL);
	}

IL_0014:
	{
		return;
	}
}
// System.Void UnityEngine.Canvas::ForceUpdateCanvases()
// UnityEngine.Canvas
#include "UnityEngine_UnityEngine_CanvasMethodDeclarations.h"
extern "C" void Canvas_ForceUpdateCanvases_m2309 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Canvas_SendWillRenderCanvases_m3149(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.CanvasGroup
#include "UnityEngine_UnityEngine_CanvasGroup.h"
// UnityEngine.CanvasGroup
#include "UnityEngine_UnityEngine_CanvasGroupMethodDeclarations.h"
// System.Single UnityEngine.CanvasGroup::get_alpha()
extern "C" float CanvasGroup_get_alpha_m2107 (CanvasGroup_t370 * __this, const MethodInfo* method)
{
	typedef float (*CanvasGroup_get_alpha_m2107_ftn) (CanvasGroup_t370 *);
	static CanvasGroup_get_alpha_m2107_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasGroup_get_alpha_m2107_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::get_alpha()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.CanvasGroup::set_alpha(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void CanvasGroup_set_alpha_m2111 (CanvasGroup_t370 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*CanvasGroup_set_alpha_m2111_ftn) (CanvasGroup_t370 *, float);
	static CanvasGroup_set_alpha_m2111_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasGroup_set_alpha_m2111_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::set_alpha(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.CanvasGroup::get_interactable()
extern "C" bool CanvasGroup_get_interactable_m2339 (CanvasGroup_t370 * __this, const MethodInfo* method)
{
	typedef bool (*CanvasGroup_get_interactable_m2339_ftn) (CanvasGroup_t370 *);
	static CanvasGroup_get_interactable_m2339_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasGroup_get_interactable_m2339_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::get_interactable()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.CanvasGroup::get_blocksRaycasts()
extern "C" bool CanvasGroup_get_blocksRaycasts_m3150 (CanvasGroup_t370 * __this, const MethodInfo* method)
{
	typedef bool (*CanvasGroup_get_blocksRaycasts_m3150_ftn) (CanvasGroup_t370 *);
	static CanvasGroup_get_blocksRaycasts_m3150_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasGroup_get_blocksRaycasts_m3150_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::get_blocksRaycasts()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.CanvasGroup::get_ignoreParentGroups()
extern "C" bool CanvasGroup_get_ignoreParentGroups_m2145 (CanvasGroup_t370 * __this, const MethodInfo* method)
{
	typedef bool (*CanvasGroup_get_ignoreParentGroups_m2145_ftn) (CanvasGroup_t370 *);
	static CanvasGroup_get_ignoreParentGroups_m2145_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasGroup_get_ignoreParentGroups_m2145_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::get_ignoreParentGroups()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.CanvasGroup::IsRaycastLocationValid(UnityEngine.Vector2,UnityEngine.Camera)
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// UnityEngine.CanvasGroup
#include "UnityEngine_UnityEngine_CanvasGroupMethodDeclarations.h"
extern "C" bool CanvasGroup_IsRaycastLocationValid_m3151 (CanvasGroup_t370 * __this, Vector2_t15  ___sp, Camera_t32 * ___eventCamera, const MethodInfo* method)
{
	{
		bool L_0 = CanvasGroup_get_blocksRaycasts_m3150(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertexMethodDeclarations.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"
// System.Byte
#include "mscorlib_System_Byte.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32MethodDeclarations.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// System.Void UnityEngine.UIVertex::.cctor()
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32MethodDeclarations.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
extern TypeInfo* UIVertex_t241_il2cpp_TypeInfo_var;
extern "C" void UIVertex__cctor_m3152 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UIVertex_t241_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	UIVertex_t241  V_0 = {0};
	{
		Color32_t343  L_0 = {0};
		Color32__ctor_m2026(&L_0, ((int32_t)255), ((int32_t)255), ((int32_t)255), ((int32_t)255), /*hidden argument*/NULL);
		((UIVertex_t241_StaticFields*)UIVertex_t241_il2cpp_TypeInfo_var->static_fields)->___s_DefaultColor_6 = L_0;
		Vector4_t84  L_1 = {0};
		Vector4__ctor_m416(&L_1, (1.0f), (0.0f), (0.0f), (-1.0f), /*hidden argument*/NULL);
		((UIVertex_t241_StaticFields*)UIVertex_t241_il2cpp_TypeInfo_var->static_fields)->___s_DefaultTangent_7 = L_1;
		Initobj (UIVertex_t241_il2cpp_TypeInfo_var, (&V_0));
		Vector3_t3  L_2 = Vector3_get_zero_m362(NULL /*static, unused*/, /*hidden argument*/NULL);
		(&V_0)->___position_0 = L_2;
		Vector3_t3  L_3 = Vector3_get_back_m2430(NULL /*static, unused*/, /*hidden argument*/NULL);
		(&V_0)->___normal_1 = L_3;
		Vector4_t84  L_4 = ((UIVertex_t241_StaticFields*)UIVertex_t241_il2cpp_TypeInfo_var->static_fields)->___s_DefaultTangent_7;
		(&V_0)->___tangent_5 = L_4;
		Color32_t343  L_5 = ((UIVertex_t241_StaticFields*)UIVertex_t241_il2cpp_TypeInfo_var->static_fields)->___s_DefaultColor_6;
		(&V_0)->___color_2 = L_5;
		Vector2_t15  L_6 = Vector2_get_zero_m329(NULL /*static, unused*/, /*hidden argument*/NULL);
		(&V_0)->___uv0_3 = L_6;
		Vector2_t15  L_7 = Vector2_get_zero_m329(NULL /*static, unused*/, /*hidden argument*/NULL);
		(&V_0)->___uv1_4 = L_7;
		UIVertex_t241  L_8 = V_0;
		((UIVertex_t241_StaticFields*)UIVertex_t241_il2cpp_TypeInfo_var->static_fields)->___simpleVert_8 = L_8;
		return;
	}
}
// UnityEngine.CanvasRenderer
#include "UnityEngine_UnityEngine_CanvasRenderer.h"
// UnityEngine.CanvasRenderer
#include "UnityEngine_UnityEngine_CanvasRendererMethodDeclarations.h"
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_Texture.h"
// UnityEngine.Mesh
#include "UnityEngine_UnityEngine_Mesh.h"
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
// System.Void UnityEngine.CanvasRenderer::SetColor(UnityEngine.Color)
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.CanvasRenderer
#include "UnityEngine_UnityEngine_CanvasRendererMethodDeclarations.h"
extern "C" void CanvasRenderer_SetColor_m2151 (CanvasRenderer_t201 * __this, Color_t11  ___color, const MethodInfo* method)
{
	{
		CanvasRenderer_INTERNAL_CALL_SetColor_m3153(NULL /*static, unused*/, __this, (&___color), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.CanvasRenderer::INTERNAL_CALL_SetColor(UnityEngine.CanvasRenderer,UnityEngine.Color&)
// UnityEngine.CanvasRenderer
#include "UnityEngine_UnityEngine_CanvasRenderer.h"
extern "C" void CanvasRenderer_INTERNAL_CALL_SetColor_m3153 (Object_t * __this /* static, unused */, CanvasRenderer_t201 * ___self, Color_t11 * ___color, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_INTERNAL_CALL_SetColor_m3153_ftn) (CanvasRenderer_t201 *, Color_t11 *);
	static CanvasRenderer_INTERNAL_CALL_SetColor_m3153_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_INTERNAL_CALL_SetColor_m3153_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::INTERNAL_CALL_SetColor(UnityEngine.CanvasRenderer,UnityEngine.Color&)");
	_il2cpp_icall_func(___self, ___color);
}
// UnityEngine.Color UnityEngine.CanvasRenderer::GetColor()
extern "C" Color_t11  CanvasRenderer_GetColor_m2149 (CanvasRenderer_t201 * __this, const MethodInfo* method)
{
	typedef Color_t11  (*CanvasRenderer_GetColor_m2149_ftn) (CanvasRenderer_t201 *);
	static CanvasRenderer_GetColor_m2149_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_GetColor_m2149_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::GetColor()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.CanvasRenderer::EnableRectClipping(UnityEngine.Rect)
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
extern "C" void CanvasRenderer_EnableRectClipping_m2291 (CanvasRenderer_t201 * __this, Rect_t18  ___rect, const MethodInfo* method)
{
	{
		CanvasRenderer_INTERNAL_CALL_EnableRectClipping_m3154(NULL /*static, unused*/, __this, (&___rect), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.CanvasRenderer::INTERNAL_CALL_EnableRectClipping(UnityEngine.CanvasRenderer,UnityEngine.Rect&)
extern "C" void CanvasRenderer_INTERNAL_CALL_EnableRectClipping_m3154 (Object_t * __this /* static, unused */, CanvasRenderer_t201 * ___self, Rect_t18 * ___rect, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_INTERNAL_CALL_EnableRectClipping_m3154_ftn) (CanvasRenderer_t201 *, Rect_t18 *);
	static CanvasRenderer_INTERNAL_CALL_EnableRectClipping_m3154_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_INTERNAL_CALL_EnableRectClipping_m3154_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::INTERNAL_CALL_EnableRectClipping(UnityEngine.CanvasRenderer,UnityEngine.Rect&)");
	_il2cpp_icall_func(___self, ___rect);
}
// System.Void UnityEngine.CanvasRenderer::DisableRectClipping()
extern "C" void CanvasRenderer_DisableRectClipping_m2292 (CanvasRenderer_t201 * __this, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_DisableRectClipping_m2292_ftn) (CanvasRenderer_t201 *);
	static CanvasRenderer_DisableRectClipping_m2292_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_DisableRectClipping_m2292_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::DisableRectClipping()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.CanvasRenderer::set_hasPopInstruction(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void CanvasRenderer_set_hasPopInstruction_m2282 (CanvasRenderer_t201 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_set_hasPopInstruction_m2282_ftn) (CanvasRenderer_t201 *, bool);
	static CanvasRenderer_set_hasPopInstruction_m2282_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_set_hasPopInstruction_m2282_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::set_hasPopInstruction(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.CanvasRenderer::get_materialCount()
extern "C" int32_t CanvasRenderer_get_materialCount_m3155 (CanvasRenderer_t201 * __this, const MethodInfo* method)
{
	typedef int32_t (*CanvasRenderer_get_materialCount_m3155_ftn) (CanvasRenderer_t201 *);
	static CanvasRenderer_get_materialCount_m3155_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_get_materialCount_m3155_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::get_materialCount()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.CanvasRenderer::set_materialCount(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void CanvasRenderer_set_materialCount_m2136 (CanvasRenderer_t201 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_set_materialCount_m2136_ftn) (CanvasRenderer_t201 *, int32_t);
	static CanvasRenderer_set_materialCount_m2136_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_set_materialCount_m2136_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::set_materialCount(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.CanvasRenderer::SetMaterial(UnityEngine.Material,System.Int32)
// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
extern "C" void CanvasRenderer_SetMaterial_m2137 (CanvasRenderer_t201 * __this, Material_t42 * ___material, int32_t ___index, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_SetMaterial_m2137_ftn) (CanvasRenderer_t201 *, Material_t42 *, int32_t);
	static CanvasRenderer_SetMaterial_m2137_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_SetMaterial_m2137_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::SetMaterial(UnityEngine.Material,System.Int32)");
	_il2cpp_icall_func(__this, ___material, ___index);
}
// System.Void UnityEngine.CanvasRenderer::SetMaterial(UnityEngine.Material,UnityEngine.Texture)
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_Texture.h"
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
extern "C" void CanvasRenderer_SetMaterial_m2259 (CanvasRenderer_t201 * __this, Material_t42 * ___material, Texture_t14 * ___texture, const MethodInfo* method)
{
	{
		int32_t L_0 = CanvasRenderer_get_materialCount_m3155(__this, /*hidden argument*/NULL);
		int32_t L_1 = Math_Max_m3623(NULL /*static, unused*/, 1, L_0, /*hidden argument*/NULL);
		CanvasRenderer_set_materialCount_m2136(__this, L_1, /*hidden argument*/NULL);
		Material_t42 * L_2 = ___material;
		CanvasRenderer_SetMaterial_m2137(__this, L_2, 0, /*hidden argument*/NULL);
		Texture_t14 * L_3 = ___texture;
		CanvasRenderer_SetTexture_m2138(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.CanvasRenderer::set_popMaterialCount(System.Int32)
extern "C" void CanvasRenderer_set_popMaterialCount_m2283 (CanvasRenderer_t201 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_set_popMaterialCount_m2283_ftn) (CanvasRenderer_t201 *, int32_t);
	static CanvasRenderer_set_popMaterialCount_m2283_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_set_popMaterialCount_m2283_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::set_popMaterialCount(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.CanvasRenderer::SetPopMaterial(UnityEngine.Material,System.Int32)
extern "C" void CanvasRenderer_SetPopMaterial_m2284 (CanvasRenderer_t201 * __this, Material_t42 * ___material, int32_t ___index, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_SetPopMaterial_m2284_ftn) (CanvasRenderer_t201 *, Material_t42 *, int32_t);
	static CanvasRenderer_SetPopMaterial_m2284_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_SetPopMaterial_m2284_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::SetPopMaterial(UnityEngine.Material,System.Int32)");
	_il2cpp_icall_func(__this, ___material, ___index);
}
// System.Void UnityEngine.CanvasRenderer::SetTexture(UnityEngine.Texture)
extern "C" void CanvasRenderer_SetTexture_m2138 (CanvasRenderer_t201 * __this, Texture_t14 * ___texture, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_SetTexture_m2138_ftn) (CanvasRenderer_t201 *, Texture_t14 *);
	static CanvasRenderer_SetTexture_m2138_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_SetTexture_m2138_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::SetTexture(UnityEngine.Texture)");
	_il2cpp_icall_func(__this, ___texture);
}
// System.Void UnityEngine.CanvasRenderer::SetMesh(UnityEngine.Mesh)
// UnityEngine.Mesh
#include "UnityEngine_UnityEngine_Mesh.h"
extern "C" void CanvasRenderer_SetMesh_m2139 (CanvasRenderer_t201 * __this, Mesh_t206 * ___mesh, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_SetMesh_m2139_ftn) (CanvasRenderer_t201 *, Mesh_t206 *);
	static CanvasRenderer_SetMesh_m2139_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_SetMesh_m2139_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::SetMesh(UnityEngine.Mesh)");
	_il2cpp_icall_func(__this, ___mesh);
}
// System.Void UnityEngine.CanvasRenderer::Clear()
extern "C" void CanvasRenderer_Clear_m2134 (CanvasRenderer_t201 * __this, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_Clear_m2134_ftn) (CanvasRenderer_t201 *);
	static CanvasRenderer_Clear_m2134_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_Clear_m2134_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::Clear()");
	_il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.CanvasRenderer::get_cull()
extern "C" bool CanvasRenderer_get_cull_m2135 (CanvasRenderer_t201 * __this, const MethodInfo* method)
{
	typedef bool (*CanvasRenderer_get_cull_m2135_ftn) (CanvasRenderer_t201 *);
	static CanvasRenderer_get_cull_m2135_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_get_cull_m2135_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::get_cull()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.CanvasRenderer::set_cull(System.Boolean)
extern "C" void CanvasRenderer_set_cull_m2289 (CanvasRenderer_t201 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_set_cull_m2289_ftn) (CanvasRenderer_t201 *, bool);
	static CanvasRenderer_set_cull_m2289_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_set_cull_m2289_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::set_cull(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.CanvasRenderer::get_absoluteDepth()
extern "C" int32_t CanvasRenderer_get_absoluteDepth_m2126 (CanvasRenderer_t201 * __this, const MethodInfo* method)
{
	typedef int32_t (*CanvasRenderer_get_absoluteDepth_m2126_ftn) (CanvasRenderer_t201 *);
	static CanvasRenderer_get_absoluteDepth_m2126_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_get_absoluteDepth_m2126_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::get_absoluteDepth()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.CanvasRenderer::get_hasMoved()
extern "C" bool CanvasRenderer_get_hasMoved_m2287 (CanvasRenderer_t201 * __this, const MethodInfo* method)
{
	typedef bool (*CanvasRenderer_get_hasMoved_m2287_ftn) (CanvasRenderer_t201 *);
	static CanvasRenderer_get_hasMoved_m2287_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_get_hasMoved_m2287_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::get_hasMoved()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.RectTransformUtility
#include "UnityEngine_UnityEngine_RectTransformUtility.h"
// UnityEngine.RectTransformUtility
#include "UnityEngine_UnityEngine_RectTransformUtilityMethodDeclarations.h"
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransform.h"
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_Plane.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_PlaneMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransformMethodDeclarations.h"
// System.Void UnityEngine.RectTransformUtility::.cctor()
extern TypeInfo* Vector3U5BU5D_t222_il2cpp_TypeInfo_var;
extern TypeInfo* RectTransformUtility_t374_il2cpp_TypeInfo_var;
extern "C" void RectTransformUtility__cctor_m3156 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3U5BU5D_t222_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(174);
		RectTransformUtility_t374_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(175);
		s_Il2CppMethodIntialized = true;
	}
	{
		((RectTransformUtility_t374_StaticFields*)RectTransformUtility_t374_il2cpp_TypeInfo_var->static_fields)->___s_Corners_0 = ((Vector3U5BU5D_t222*)SZArrayNew(Vector3U5BU5D_t222_il2cpp_TypeInfo_var, 4));
		return;
	}
}
// System.Boolean UnityEngine.RectTransformUtility::RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera)
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransform.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// UnityEngine.RectTransformUtility
#include "UnityEngine_UnityEngine_RectTransformUtilityMethodDeclarations.h"
extern TypeInfo* RectTransformUtility_t374_il2cpp_TypeInfo_var;
extern "C" bool RectTransformUtility_RectangleContainsScreenPoint_m2165 (Object_t * __this /* static, unused */, RectTransform_t184 * ___rect, Vector2_t15  ___screenPoint, Camera_t32 * ___cam, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransformUtility_t374_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(175);
		s_Il2CppMethodIntialized = true;
	}
	{
		RectTransform_t184 * L_0 = ___rect;
		Camera_t32 * L_1 = ___cam;
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t374_il2cpp_TypeInfo_var);
		bool L_2 = RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m3157(NULL /*static, unused*/, L_0, (&___screenPoint), L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.RectTransformUtility::INTERNAL_CALL_RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2&,UnityEngine.Camera)
extern "C" bool RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m3157 (Object_t * __this /* static, unused */, RectTransform_t184 * ___rect, Vector2_t15 * ___screenPoint, Camera_t32 * ___cam, const MethodInfo* method)
{
	typedef bool (*RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m3157_ftn) (RectTransform_t184 *, Vector2_t15 *, Camera_t32 *);
	static RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m3157_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m3157_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransformUtility::INTERNAL_CALL_RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2&,UnityEngine.Camera)");
	return _il2cpp_icall_func(___rect, ___screenPoint, ___cam);
}
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::PixelAdjustPoint(UnityEngine.Vector2,UnityEngine.Transform,UnityEngine.Canvas)
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// UnityEngine.Canvas
#include "UnityEngine_UnityEngine_Canvas.h"
extern TypeInfo* RectTransformUtility_t374_il2cpp_TypeInfo_var;
extern "C" Vector2_t15  RectTransformUtility_PixelAdjustPoint_m2147 (Object_t * __this /* static, unused */, Vector2_t15  ___point, Transform_t33 * ___elementTransform, Canvas_t202 * ___canvas, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransformUtility_t374_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(175);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t15  V_0 = {0};
	{
		Vector2_t15  L_0 = ___point;
		Transform_t33 * L_1 = ___elementTransform;
		Canvas_t202 * L_2 = ___canvas;
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t374_il2cpp_TypeInfo_var);
		RectTransformUtility_PixelAdjustPoint_m3158(NULL /*static, unused*/, L_0, L_1, L_2, (&V_0), /*hidden argument*/NULL);
		Vector2_t15  L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.RectTransformUtility::PixelAdjustPoint(UnityEngine.Vector2,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)
extern TypeInfo* RectTransformUtility_t374_il2cpp_TypeInfo_var;
extern "C" void RectTransformUtility_PixelAdjustPoint_m3158 (Object_t * __this /* static, unused */, Vector2_t15  ___point, Transform_t33 * ___elementTransform, Canvas_t202 * ___canvas, Vector2_t15 * ___output, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransformUtility_t374_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(175);
		s_Il2CppMethodIntialized = true;
	}
	{
		Transform_t33 * L_0 = ___elementTransform;
		Canvas_t202 * L_1 = ___canvas;
		Vector2_t15 * L_2 = ___output;
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t374_il2cpp_TypeInfo_var);
		RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m3159(NULL /*static, unused*/, (&___point), L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.RectTransformUtility::INTERNAL_CALL_PixelAdjustPoint(UnityEngine.Vector2&,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)
extern "C" void RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m3159 (Object_t * __this /* static, unused */, Vector2_t15 * ___point, Transform_t33 * ___elementTransform, Canvas_t202 * ___canvas, Vector2_t15 * ___output, const MethodInfo* method)
{
	typedef void (*RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m3159_ftn) (Vector2_t15 *, Transform_t33 *, Canvas_t202 *, Vector2_t15 *);
	static RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m3159_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m3159_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransformUtility::INTERNAL_CALL_PixelAdjustPoint(UnityEngine.Vector2&,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)");
	_il2cpp_icall_func(___point, ___elementTransform, ___canvas, ___output);
}
// UnityEngine.Rect UnityEngine.RectTransformUtility::PixelAdjustRect(UnityEngine.RectTransform,UnityEngine.Canvas)
extern "C" Rect_t18  RectTransformUtility_PixelAdjustRect_m2148 (Object_t * __this /* static, unused */, RectTransform_t184 * ___rectTransform, Canvas_t202 * ___canvas, const MethodInfo* method)
{
	typedef Rect_t18  (*RectTransformUtility_PixelAdjustRect_m2148_ftn) (RectTransform_t184 *, Canvas_t202 *);
	static RectTransformUtility_PixelAdjustRect_m2148_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransformUtility_PixelAdjustRect_m2148_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransformUtility::PixelAdjustRect(UnityEngine.RectTransform,UnityEngine.Canvas)");
	return _il2cpp_icall_func(___rectTransform, ___canvas);
}
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToWorldPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector3&)
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_PlaneMethodDeclarations.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"
extern TypeInfo* RectTransformUtility_t374_il2cpp_TypeInfo_var;
extern "C" bool RectTransformUtility_ScreenPointToWorldPointInRectangle_m3160 (Object_t * __this /* static, unused */, RectTransform_t184 * ___rect, Vector2_t15  ___screenPoint, Camera_t32 * ___cam, Vector3_t3 * ___worldPoint, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransformUtility_t374_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(175);
		s_Il2CppMethodIntialized = true;
	}
	Ray_t63  V_0 = {0};
	Plane_t389  V_1 = {0};
	float V_2 = 0.0f;
	{
		Vector3_t3 * L_0 = ___worldPoint;
		Vector2_t15  L_1 = Vector2_get_zero_m329(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3  L_2 = Vector2_op_Implicit_m1986(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		*L_0 = L_2;
		Camera_t32 * L_3 = ___cam;
		Vector2_t15  L_4 = ___screenPoint;
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t374_il2cpp_TypeInfo_var);
		Ray_t63  L_5 = RectTransformUtility_ScreenPointToRay_m3161(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		RectTransform_t184 * L_6 = ___rect;
		NullCheck(L_6);
		Quaternion_t50  L_7 = Transform_get_rotation_m453(L_6, /*hidden argument*/NULL);
		Vector3_t3  L_8 = Vector3_get_back_m2430(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3  L_9 = Quaternion_op_Multiply_m456(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		RectTransform_t184 * L_10 = ___rect;
		NullCheck(L_10);
		Vector3_t3  L_11 = Transform_get_position_m450(L_10, /*hidden argument*/NULL);
		Plane__ctor_m2229((&V_1), L_9, L_11, /*hidden argument*/NULL);
		Ray_t63  L_12 = V_0;
		bool L_13 = Plane_Raycast_m2230((&V_1), L_12, (&V_2), /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0046;
		}
	}
	{
		return 0;
	}

IL_0046:
	{
		Vector3_t3 * L_14 = ___worldPoint;
		float L_15 = V_2;
		Vector3_t3  L_16 = Ray_GetPoint_m2231((&V_0), L_15, /*hidden argument*/NULL);
		*L_14 = L_16;
		return 1;
	}
}
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
extern TypeInfo* RectTransformUtility_t374_il2cpp_TypeInfo_var;
extern "C" bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m2191 (Object_t * __this /* static, unused */, RectTransform_t184 * ___rect, Vector2_t15  ___screenPoint, Camera_t32 * ___cam, Vector2_t15 * ___localPoint, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransformUtility_t374_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(175);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t3  V_0 = {0};
	{
		Vector2_t15 * L_0 = ___localPoint;
		Vector2_t15  L_1 = Vector2_get_zero_m329(NULL /*static, unused*/, /*hidden argument*/NULL);
		*L_0 = L_1;
		RectTransform_t184 * L_2 = ___rect;
		Vector2_t15  L_3 = ___screenPoint;
		Camera_t32 * L_4 = ___cam;
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t374_il2cpp_TypeInfo_var);
		bool L_5 = RectTransformUtility_ScreenPointToWorldPointInRectangle_m3160(NULL /*static, unused*/, L_2, L_3, L_4, (&V_0), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		Vector2_t15 * L_6 = ___localPoint;
		RectTransform_t184 * L_7 = ___rect;
		Vector3_t3  L_8 = V_0;
		NullCheck(L_7);
		Vector3_t3  L_9 = Transform_InverseTransformPoint_m2089(L_7, L_8, /*hidden argument*/NULL);
		Vector2_t15  L_10 = Vector2_op_Implicit_m403(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		*L_6 = L_10;
		return 1;
	}

IL_002e:
	{
		return 0;
	}
}
// UnityEngine.Ray UnityEngine.RectTransformUtility::ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector2)
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
extern "C" Ray_t63  RectTransformUtility_ScreenPointToRay_m3161 (Object_t * __this /* static, unused */, Camera_t32 * ___cam, Vector2_t15  ___screenPos, const MethodInfo* method)
{
	Vector3_t3  V_0 = {0};
	{
		Camera_t32 * L_0 = ___cam;
		bool L_1 = Object_op_Inequality_m312(NULL /*static, unused*/, L_0, (Object_t75 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Camera_t32 * L_2 = ___cam;
		Vector2_t15  L_3 = ___screenPos;
		Vector3_t3  L_4 = Vector2_op_Implicit_m1986(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		Ray_t63  L_5 = Camera_ScreenPointToRay_m1987(L_2, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0019:
	{
		Vector2_t15  L_6 = ___screenPos;
		Vector3_t3  L_7 = Vector2_op_Implicit_m1986(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		Vector3_t3 * L_8 = (&V_0);
		float L_9 = (L_8->___z_3);
		L_8->___z_3 = ((float)((float)L_9-(float)(100.0f)));
		Vector3_t3  L_10 = V_0;
		Vector3_t3  L_11 = Vector3_get_forward_m410(NULL /*static, unused*/, /*hidden argument*/NULL);
		Ray_t63  L_12 = {0};
		Ray__ctor_m452(&L_12, L_10, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Void UnityEngine.RectTransformUtility::FlipLayoutOnAxis(UnityEngine.RectTransform,System.Int32,System.Boolean,System.Boolean)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransformMethodDeclarations.h"
extern TypeInfo* RectTransform_t184_il2cpp_TypeInfo_var;
extern TypeInfo* RectTransformUtility_t374_il2cpp_TypeInfo_var;
extern "C" void RectTransformUtility_FlipLayoutOnAxis_m2091 (Object_t * __this /* static, unused */, RectTransform_t184 * ___rect, int32_t ___axis, bool ___keepPositioning, bool ___recursive, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransform_t184_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(147);
		RectTransformUtility_t374_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(175);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	RectTransform_t184 * V_1 = {0};
	Vector2_t15  V_2 = {0};
	Vector2_t15  V_3 = {0};
	Vector2_t15  V_4 = {0};
	Vector2_t15  V_5 = {0};
	float V_6 = 0.0f;
	{
		RectTransform_t184 * L_0 = ___rect;
		bool L_1 = Object_op_Equality_m305(NULL /*static, unused*/, L_0, (Object_t75 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		bool L_2 = ___recursive;
		if (!L_2)
		{
			goto IL_004c;
		}
	}
	{
		V_0 = 0;
		goto IL_0040;
	}

IL_001a:
	{
		RectTransform_t184 * L_3 = ___rect;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Transform_t33 * L_5 = Transform_GetChild_m2034(L_3, L_4, /*hidden argument*/NULL);
		V_1 = ((RectTransform_t184 *)IsInstSealed(L_5, RectTransform_t184_il2cpp_TypeInfo_var));
		RectTransform_t184 * L_6 = V_1;
		bool L_7 = Object_op_Inequality_m312(NULL /*static, unused*/, L_6, (Object_t75 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_003c;
		}
	}
	{
		RectTransform_t184 * L_8 = V_1;
		int32_t L_9 = ___axis;
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t374_il2cpp_TypeInfo_var);
		RectTransformUtility_FlipLayoutOnAxis_m2091(NULL /*static, unused*/, L_8, L_9, 0, 1, /*hidden argument*/NULL);
	}

IL_003c:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0040:
	{
		int32_t L_11 = V_0;
		RectTransform_t184 * L_12 = ___rect;
		NullCheck(L_12);
		int32_t L_13 = Transform_get_childCount_m2035(L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_001a;
		}
	}

IL_004c:
	{
		RectTransform_t184 * L_14 = ___rect;
		NullCheck(L_14);
		Vector2_t15  L_15 = RectTransform_get_pivot_m2095(L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		int32_t L_16 = ___axis;
		int32_t L_17 = ___axis;
		float L_18 = Vector2_get_Item_m2188((&V_2), L_17, /*hidden argument*/NULL);
		Vector2_set_Item_m2195((&V_2), L_16, ((float)((float)(1.0f)-(float)L_18)), /*hidden argument*/NULL);
		RectTransform_t184 * L_19 = ___rect;
		Vector2_t15  L_20 = V_2;
		NullCheck(L_19);
		RectTransform_set_pivot_m2054(L_19, L_20, /*hidden argument*/NULL);
		bool L_21 = ___keepPositioning;
		if (!L_21)
		{
			goto IL_0077;
		}
	}
	{
		return;
	}

IL_0077:
	{
		RectTransform_t184 * L_22 = ___rect;
		NullCheck(L_22);
		Vector2_t15  L_23 = RectTransform_get_anchoredPosition_m2094(L_22, /*hidden argument*/NULL);
		V_3 = L_23;
		int32_t L_24 = ___axis;
		int32_t L_25 = ___axis;
		float L_26 = Vector2_get_Item_m2188((&V_3), L_25, /*hidden argument*/NULL);
		Vector2_set_Item_m2195((&V_3), L_24, ((-L_26)), /*hidden argument*/NULL);
		RectTransform_t184 * L_27 = ___rect;
		Vector2_t15  L_28 = V_3;
		NullCheck(L_27);
		RectTransform_set_anchoredPosition_m2040(L_27, L_28, /*hidden argument*/NULL);
		RectTransform_t184 * L_29 = ___rect;
		NullCheck(L_29);
		Vector2_t15  L_30 = RectTransform_get_anchorMin_m2092(L_29, /*hidden argument*/NULL);
		V_4 = L_30;
		RectTransform_t184 * L_31 = ___rect;
		NullCheck(L_31);
		Vector2_t15  L_32 = RectTransform_get_anchorMax_m2093(L_31, /*hidden argument*/NULL);
		V_5 = L_32;
		int32_t L_33 = ___axis;
		float L_34 = Vector2_get_Item_m2188((&V_4), L_33, /*hidden argument*/NULL);
		V_6 = L_34;
		int32_t L_35 = ___axis;
		int32_t L_36 = ___axis;
		float L_37 = Vector2_get_Item_m2188((&V_5), L_36, /*hidden argument*/NULL);
		Vector2_set_Item_m2195((&V_4), L_35, ((float)((float)(1.0f)-(float)L_37)), /*hidden argument*/NULL);
		int32_t L_38 = ___axis;
		float L_39 = V_6;
		Vector2_set_Item_m2195((&V_5), L_38, ((float)((float)(1.0f)-(float)L_39)), /*hidden argument*/NULL);
		RectTransform_t184 * L_40 = ___rect;
		Vector2_t15  L_41 = V_4;
		NullCheck(L_40);
		RectTransform_set_anchorMin_m2037(L_40, L_41, /*hidden argument*/NULL);
		RectTransform_t184 * L_42 = ___rect;
		Vector2_t15  L_43 = V_5;
		NullCheck(L_42);
		RectTransform_set_anchorMax_m2039(L_42, L_43, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.RectTransformUtility::FlipLayoutAxes(UnityEngine.RectTransform,System.Boolean,System.Boolean)
extern TypeInfo* RectTransform_t184_il2cpp_TypeInfo_var;
extern TypeInfo* RectTransformUtility_t374_il2cpp_TypeInfo_var;
extern "C" void RectTransformUtility_FlipLayoutAxes_m2306 (Object_t * __this /* static, unused */, RectTransform_t184 * ___rect, bool ___keepPositioning, bool ___recursive, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransform_t184_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(147);
		RectTransformUtility_t374_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(175);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	RectTransform_t184 * V_1 = {0};
	{
		RectTransform_t184 * L_0 = ___rect;
		bool L_1 = Object_op_Equality_m305(NULL /*static, unused*/, L_0, (Object_t75 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		bool L_2 = ___recursive;
		if (!L_2)
		{
			goto IL_004b;
		}
	}
	{
		V_0 = 0;
		goto IL_003f;
	}

IL_001a:
	{
		RectTransform_t184 * L_3 = ___rect;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Transform_t33 * L_5 = Transform_GetChild_m2034(L_3, L_4, /*hidden argument*/NULL);
		V_1 = ((RectTransform_t184 *)IsInstSealed(L_5, RectTransform_t184_il2cpp_TypeInfo_var));
		RectTransform_t184 * L_6 = V_1;
		bool L_7 = Object_op_Inequality_m312(NULL /*static, unused*/, L_6, (Object_t75 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_003b;
		}
	}
	{
		RectTransform_t184 * L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t374_il2cpp_TypeInfo_var);
		RectTransformUtility_FlipLayoutAxes_m2306(NULL /*static, unused*/, L_8, 0, 1, /*hidden argument*/NULL);
	}

IL_003b:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_003f:
	{
		int32_t L_10 = V_0;
		RectTransform_t184 * L_11 = ___rect;
		NullCheck(L_11);
		int32_t L_12 = Transform_get_childCount_m2035(L_11, /*hidden argument*/NULL);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_001a;
		}
	}

IL_004b:
	{
		RectTransform_t184 * L_13 = ___rect;
		RectTransform_t184 * L_14 = ___rect;
		NullCheck(L_14);
		Vector2_t15  L_15 = RectTransform_get_pivot_m2095(L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t374_il2cpp_TypeInfo_var);
		Vector2_t15  L_16 = RectTransformUtility_GetTransposed_m3162(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		NullCheck(L_13);
		RectTransform_set_pivot_m2054(L_13, L_16, /*hidden argument*/NULL);
		RectTransform_t184 * L_17 = ___rect;
		RectTransform_t184 * L_18 = ___rect;
		NullCheck(L_18);
		Vector2_t15  L_19 = RectTransform_get_sizeDelta_m2055(L_18, /*hidden argument*/NULL);
		Vector2_t15  L_20 = RectTransformUtility_GetTransposed_m3162(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		NullCheck(L_17);
		RectTransform_set_sizeDelta_m2030(L_17, L_20, /*hidden argument*/NULL);
		bool L_21 = ___keepPositioning;
		if (!L_21)
		{
			goto IL_0074;
		}
	}
	{
		return;
	}

IL_0074:
	{
		RectTransform_t184 * L_22 = ___rect;
		RectTransform_t184 * L_23 = ___rect;
		NullCheck(L_23);
		Vector2_t15  L_24 = RectTransform_get_anchoredPosition_m2094(L_23, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t374_il2cpp_TypeInfo_var);
		Vector2_t15  L_25 = RectTransformUtility_GetTransposed_m3162(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		NullCheck(L_22);
		RectTransform_set_anchoredPosition_m2040(L_22, L_25, /*hidden argument*/NULL);
		RectTransform_t184 * L_26 = ___rect;
		RectTransform_t184 * L_27 = ___rect;
		NullCheck(L_27);
		Vector2_t15  L_28 = RectTransform_get_anchorMin_m2092(L_27, /*hidden argument*/NULL);
		Vector2_t15  L_29 = RectTransformUtility_GetTransposed_m3162(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
		NullCheck(L_26);
		RectTransform_set_anchorMin_m2037(L_26, L_29, /*hidden argument*/NULL);
		RectTransform_t184 * L_30 = ___rect;
		RectTransform_t184 * L_31 = ___rect;
		NullCheck(L_31);
		Vector2_t15  L_32 = RectTransform_get_anchorMax_m2093(L_31, /*hidden argument*/NULL);
		Vector2_t15  L_33 = RectTransformUtility_GetTransposed_m3162(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
		NullCheck(L_30);
		RectTransform_set_anchorMax_m2039(L_30, L_33, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::GetTransposed(UnityEngine.Vector2)
extern "C" Vector2_t15  RectTransformUtility_GetTransposed_m3162 (Object_t * __this /* static, unused */, Vector2_t15  ___input, const MethodInfo* method)
{
	{
		float L_0 = ((&___input)->___y_2);
		float L_1 = ((&___input)->___x_1);
		Vector2_t15  L_2 = {0};
		Vector2__ctor_m337(&L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Event
#include "UnityEngine_UnityEngine_Event.h"
// UnityEngine.Event
#include "UnityEngine_UnityEngine_EventMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// UnityEngine.EventModifiers
#include "UnityEngine_UnityEngine_EventModifiers.h"
// UnityEngine.EventType
#include "UnityEngine_UnityEngine_EventType.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_4.h"
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_4MethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Enum
#include "mscorlib_System_EnumMethodDeclarations.h"
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
// System.Void UnityEngine.Event::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// UnityEngine.Event
#include "UnityEngine_UnityEngine_EventMethodDeclarations.h"
extern "C" void Event__ctor_m2200 (Event_t77 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m355(__this, /*hidden argument*/NULL);
		Event_Init_m3193(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Event::.ctor(UnityEngine.Event)
// UnityEngine.Event
#include "UnityEngine_UnityEngine_Event.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentException_t402_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral194;
extern "C" void Event__ctor_m3163 (Event_t77 * __this, Event_t77 * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(269);
		_stringLiteral194 = il2cpp_codegen_string_literal_from_index(194);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m355(__this, /*hidden argument*/NULL);
		Event_t77 * L_0 = ___other;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentException_t402 * L_1 = (ArgumentException_t402 *)il2cpp_codegen_object_new (ArgumentException_t402_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2370(L_1, _stringLiteral194, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0017:
	{
		Event_t77 * L_2 = ___other;
		Event_InitCopy_m3195(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Event::.ctor(System.IntPtr)
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Event__ctor_m3164 (Event_t77 * __this, IntPtr_t ___ptr, const MethodInfo* method)
{
	{
		Object__ctor_m355(__this, /*hidden argument*/NULL);
		IntPtr_t L_0 = ___ptr;
		Event_InitPtr_m3196(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Event::Finalize()
extern "C" void Event_Finalize_m3165 (Event_t77 * __this, const MethodInfo* method)
{
	Exception_t108 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t108 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		Event_Cleanup_m3194(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t108 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m3589(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t108 *)
	}

IL_0012:
	{
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.Event::get_mousePosition()
extern "C" Vector2_t15  Event_get_mousePosition_m3166 (Event_t77 * __this, const MethodInfo* method)
{
	Vector2_t15  V_0 = {0};
	{
		Event_Internal_GetMousePosition_m3201(__this, (&V_0), /*hidden argument*/NULL);
		Vector2_t15  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Event::set_mousePosition(UnityEngine.Vector2)
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
extern "C" void Event_set_mousePosition_m3167 (Event_t77 * __this, Vector2_t15  ___value, const MethodInfo* method)
{
	{
		Vector2_t15  L_0 = ___value;
		Event_Internal_SetMousePosition_m3199(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.Event::get_delta()
extern "C" Vector2_t15  Event_get_delta_m3168 (Event_t77 * __this, const MethodInfo* method)
{
	Vector2_t15  V_0 = {0};
	{
		Event_Internal_GetMouseDelta_m3204(__this, (&V_0), /*hidden argument*/NULL);
		Vector2_t15  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Event::set_delta(UnityEngine.Vector2)
extern "C" void Event_set_delta_m3169 (Event_t77 * __this, Vector2_t15  ___value, const MethodInfo* method)
{
	{
		Vector2_t15  L_0 = ___value;
		Event_Internal_SetMouseDelta_m3202(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Ray UnityEngine.Event::get_mouseRay()
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"
extern "C" Ray_t63  Event_get_mouseRay_m3170 (Event_t77 * __this, const MethodInfo* method)
{
	{
		Vector3_t3  L_0 = Vector3_get_up_m1938(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3  L_1 = Vector3_get_up_m1938(NULL /*static, unused*/, /*hidden argument*/NULL);
		Ray_t63  L_2 = {0};
		Ray__ctor_m452(&L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.Event::set_mouseRay(UnityEngine.Ray)
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
extern "C" void Event_set_mouseRay_m3171 (Event_t77 * __this, Ray_t63  ___value, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Boolean UnityEngine.Event::get_shift()
extern "C" bool Event_get_shift_m3172 (Event_t77 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = Event_get_modifiers_m2237(__this, /*hidden argument*/NULL);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)1))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void UnityEngine.Event::set_shift(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void Event_set_shift_m3173 (Event_t77 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_1 = Event_get_modifiers_m2237(__this, /*hidden argument*/NULL);
		Event_set_modifiers_m3207(__this, ((int32_t)((int32_t)L_1&(int32_t)((int32_t)-2))), /*hidden argument*/NULL);
		goto IL_0028;
	}

IL_001a:
	{
		int32_t L_2 = Event_get_modifiers_m2237(__this, /*hidden argument*/NULL);
		Event_set_modifiers_m3207(__this, ((int32_t)((int32_t)L_2|(int32_t)1)), /*hidden argument*/NULL);
	}

IL_0028:
	{
		return;
	}
}
// System.Boolean UnityEngine.Event::get_control()
extern "C" bool Event_get_control_m3174 (Event_t77 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = Event_get_modifiers_m2237(__this, /*hidden argument*/NULL);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void UnityEngine.Event::set_control(System.Boolean)
extern "C" void Event_set_control_m3175 (Event_t77 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_1 = Event_get_modifiers_m2237(__this, /*hidden argument*/NULL);
		Event_set_modifiers_m3207(__this, ((int32_t)((int32_t)L_1&(int32_t)((int32_t)-3))), /*hidden argument*/NULL);
		goto IL_0028;
	}

IL_001a:
	{
		int32_t L_2 = Event_get_modifiers_m2237(__this, /*hidden argument*/NULL);
		Event_set_modifiers_m3207(__this, ((int32_t)((int32_t)L_2|(int32_t)2)), /*hidden argument*/NULL);
	}

IL_0028:
	{
		return;
	}
}
// System.Boolean UnityEngine.Event::get_alt()
extern "C" bool Event_get_alt_m3176 (Event_t77 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = Event_get_modifiers_m2237(__this, /*hidden argument*/NULL);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)4))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void UnityEngine.Event::set_alt(System.Boolean)
extern "C" void Event_set_alt_m3177 (Event_t77 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_1 = Event_get_modifiers_m2237(__this, /*hidden argument*/NULL);
		Event_set_modifiers_m3207(__this, ((int32_t)((int32_t)L_1&(int32_t)((int32_t)-5))), /*hidden argument*/NULL);
		goto IL_0028;
	}

IL_001a:
	{
		int32_t L_2 = Event_get_modifiers_m2237(__this, /*hidden argument*/NULL);
		Event_set_modifiers_m3207(__this, ((int32_t)((int32_t)L_2|(int32_t)4)), /*hidden argument*/NULL);
	}

IL_0028:
	{
		return;
	}
}
// System.Boolean UnityEngine.Event::get_command()
extern "C" bool Event_get_command_m3178 (Event_t77 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = Event_get_modifiers_m2237(__this, /*hidden argument*/NULL);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)8))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void UnityEngine.Event::set_command(System.Boolean)
extern "C" void Event_set_command_m3179 (Event_t77 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_1 = Event_get_modifiers_m2237(__this, /*hidden argument*/NULL);
		Event_set_modifiers_m3207(__this, ((int32_t)((int32_t)L_1&(int32_t)((int32_t)-9))), /*hidden argument*/NULL);
		goto IL_0028;
	}

IL_001a:
	{
		int32_t L_2 = Event_get_modifiers_m2237(__this, /*hidden argument*/NULL);
		Event_set_modifiers_m3207(__this, ((int32_t)((int32_t)L_2|(int32_t)8)), /*hidden argument*/NULL);
	}

IL_0028:
	{
		return;
	}
}
// System.Boolean UnityEngine.Event::get_capsLock()
extern "C" bool Event_get_capsLock_m3180 (Event_t77 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = Event_get_modifiers_m2237(__this, /*hidden argument*/NULL);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)32)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void UnityEngine.Event::set_capsLock(System.Boolean)
extern "C" void Event_set_capsLock_m3181 (Event_t77 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_1 = Event_get_modifiers_m2237(__this, /*hidden argument*/NULL);
		Event_set_modifiers_m3207(__this, ((int32_t)((int32_t)L_1&(int32_t)((int32_t)-33))), /*hidden argument*/NULL);
		goto IL_0029;
	}

IL_001a:
	{
		int32_t L_2 = Event_get_modifiers_m2237(__this, /*hidden argument*/NULL);
		Event_set_modifiers_m3207(__this, ((int32_t)((int32_t)L_2|(int32_t)((int32_t)32))), /*hidden argument*/NULL);
	}

IL_0029:
	{
		return;
	}
}
// System.Boolean UnityEngine.Event::get_numeric()
extern "C" bool Event_get_numeric_m3182 (Event_t77 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = Event_get_modifiers_m2237(__this, /*hidden argument*/NULL);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)16)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void UnityEngine.Event::set_numeric(System.Boolean)
extern "C" void Event_set_numeric_m3183 (Event_t77 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_1 = Event_get_modifiers_m2237(__this, /*hidden argument*/NULL);
		Event_set_modifiers_m3207(__this, ((int32_t)((int32_t)L_1&(int32_t)((int32_t)-2))), /*hidden argument*/NULL);
		goto IL_0028;
	}

IL_001a:
	{
		int32_t L_2 = Event_get_modifiers_m2237(__this, /*hidden argument*/NULL);
		Event_set_modifiers_m3207(__this, ((int32_t)((int32_t)L_2|(int32_t)1)), /*hidden argument*/NULL);
	}

IL_0028:
	{
		return;
	}
}
// System.Boolean UnityEngine.Event::get_functionKey()
extern "C" bool Event_get_functionKey_m3184 (Event_t77 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = Event_get_modifiers_m2237(__this, /*hidden argument*/NULL);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)64)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.Event UnityEngine.Event::get_current()
extern TypeInfo* Event_t77_il2cpp_TypeInfo_var;
extern "C" Event_t77 * Event_get_current_m322 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Event_t77_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(216);
		s_Il2CppMethodIntialized = true;
	}
	{
		Event_t77 * L_0 = ((Event_t77_StaticFields*)Event_t77_il2cpp_TypeInfo_var->static_fields)->___s_Current_1;
		return L_0;
	}
}
// System.Void UnityEngine.Event::set_current(UnityEngine.Event)
extern TypeInfo* Event_t77_il2cpp_TypeInfo_var;
extern "C" void Event_set_current_m3185 (Object_t * __this /* static, unused */, Event_t77 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Event_t77_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(216);
		s_Il2CppMethodIntialized = true;
	}
	{
		Event_t77 * L_0 = ___value;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		Event_t77 * L_1 = ___value;
		((Event_t77_StaticFields*)Event_t77_il2cpp_TypeInfo_var->static_fields)->___s_Current_1 = L_1;
		goto IL_001b;
	}

IL_0011:
	{
		Event_t77 * L_2 = ((Event_t77_StaticFields*)Event_t77_il2cpp_TypeInfo_var->static_fields)->___s_MasterEvent_2;
		((Event_t77_StaticFields*)Event_t77_il2cpp_TypeInfo_var->static_fields)->___s_Current_1 = L_2;
	}

IL_001b:
	{
		Event_t77 * L_3 = ((Event_t77_StaticFields*)Event_t77_il2cpp_TypeInfo_var->static_fields)->___s_Current_1;
		NullCheck(L_3);
		IntPtr_t L_4 = (L_3->___m_Ptr_0);
		Event_Internal_SetNativeEvent_m3215(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Event::Internal_MakeMasterEventCurrent()
extern TypeInfo* Event_t77_il2cpp_TypeInfo_var;
extern "C" void Event_Internal_MakeMasterEventCurrent_m3186 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Event_t77_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(216);
		s_Il2CppMethodIntialized = true;
	}
	{
		Event_t77 * L_0 = ((Event_t77_StaticFields*)Event_t77_il2cpp_TypeInfo_var->static_fields)->___s_MasterEvent_2;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Event_t77 * L_1 = (Event_t77 *)il2cpp_codegen_object_new (Event_t77_il2cpp_TypeInfo_var);
		Event__ctor_m2200(L_1, /*hidden argument*/NULL);
		((Event_t77_StaticFields*)Event_t77_il2cpp_TypeInfo_var->static_fields)->___s_MasterEvent_2 = L_1;
	}

IL_0014:
	{
		Event_t77 * L_2 = ((Event_t77_StaticFields*)Event_t77_il2cpp_TypeInfo_var->static_fields)->___s_MasterEvent_2;
		((Event_t77_StaticFields*)Event_t77_il2cpp_TypeInfo_var->static_fields)->___s_Current_1 = L_2;
		Event_t77 * L_3 = ((Event_t77_StaticFields*)Event_t77_il2cpp_TypeInfo_var->static_fields)->___s_MasterEvent_2;
		NullCheck(L_3);
		IntPtr_t L_4 = (L_3->___m_Ptr_0);
		Event_Internal_SetNativeEvent_m3215(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Event::get_isKey()
extern "C" bool Event_get_isKey_m3187 (Event_t77 * __this, const MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = Event_get_type_m323(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)4)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = V_0;
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)5))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 1;
	}

IL_0015:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.Event::get_isMouse()
extern "C" bool Event_get_isMouse_m3188 (Event_t77 * __this, const MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = Event_get_type_m323(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_4 = V_0;
		G_B5_0 = ((((int32_t)L_4) == ((int32_t)3))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B5_0 = 1;
	}

IL_0022:
	{
		return G_B5_0;
	}
}
// UnityEngine.Event UnityEngine.Event::KeyboardEvent(System.String)
// System.String
#include "mscorlib_System_String.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_4MethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Enum
#include "mscorlib_System_EnumMethodDeclarations.h"
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
extern const Il2CppType* KeyCode_t530_0_0_0_var;
extern TypeInfo* Event_t77_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t240_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Enum_t660_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t106_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t402_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t78_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m2243_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral195;
extern Il2CppCodeGenString* _stringLiteral196;
extern Il2CppCodeGenString* _stringLiteral197;
extern Il2CppCodeGenString* _stringLiteral198;
extern Il2CppCodeGenString* _stringLiteral199;
extern Il2CppCodeGenString* _stringLiteral200;
extern Il2CppCodeGenString* _stringLiteral201;
extern Il2CppCodeGenString* _stringLiteral202;
extern Il2CppCodeGenString* _stringLiteral203;
extern Il2CppCodeGenString* _stringLiteral204;
extern Il2CppCodeGenString* _stringLiteral205;
extern Il2CppCodeGenString* _stringLiteral206;
extern Il2CppCodeGenString* _stringLiteral207;
extern Il2CppCodeGenString* _stringLiteral208;
extern Il2CppCodeGenString* _stringLiteral209;
extern Il2CppCodeGenString* _stringLiteral210;
extern Il2CppCodeGenString* _stringLiteral211;
extern Il2CppCodeGenString* _stringLiteral212;
extern Il2CppCodeGenString* _stringLiteral213;
extern Il2CppCodeGenString* _stringLiteral214;
extern Il2CppCodeGenString* _stringLiteral215;
extern Il2CppCodeGenString* _stringLiteral216;
extern Il2CppCodeGenString* _stringLiteral217;
extern Il2CppCodeGenString* _stringLiteral218;
extern Il2CppCodeGenString* _stringLiteral219;
extern Il2CppCodeGenString* _stringLiteral220;
extern Il2CppCodeGenString* _stringLiteral221;
extern Il2CppCodeGenString* _stringLiteral222;
extern Il2CppCodeGenString* _stringLiteral223;
extern Il2CppCodeGenString* _stringLiteral224;
extern Il2CppCodeGenString* _stringLiteral225;
extern Il2CppCodeGenString* _stringLiteral226;
extern Il2CppCodeGenString* _stringLiteral227;
extern Il2CppCodeGenString* _stringLiteral228;
extern Il2CppCodeGenString* _stringLiteral229;
extern Il2CppCodeGenString* _stringLiteral230;
extern Il2CppCodeGenString* _stringLiteral231;
extern Il2CppCodeGenString* _stringLiteral232;
extern Il2CppCodeGenString* _stringLiteral233;
extern Il2CppCodeGenString* _stringLiteral234;
extern Il2CppCodeGenString* _stringLiteral235;
extern Il2CppCodeGenString* _stringLiteral236;
extern Il2CppCodeGenString* _stringLiteral237;
extern Il2CppCodeGenString* _stringLiteral238;
extern Il2CppCodeGenString* _stringLiteral239;
extern Il2CppCodeGenString* _stringLiteral240;
extern Il2CppCodeGenString* _stringLiteral241;
extern Il2CppCodeGenString* _stringLiteral242;
extern Il2CppCodeGenString* _stringLiteral243;
extern Il2CppCodeGenString* _stringLiteral244;
extern "C" Event_t77 * Event_KeyboardEvent_m3189 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		KeyCode_t530_0_0_0_var = il2cpp_codegen_type_from_index(359);
		Event_t77_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(216);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		Dictionary_2_t240_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(194);
		Enum_t660_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(360);
		Int32_t106_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		ArgumentException_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(269);
		ObjectU5BU5D_t78_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(113);
		Dictionary_2__ctor_m2243_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483873);
		_stringLiteral195 = il2cpp_codegen_string_literal_from_index(195);
		_stringLiteral196 = il2cpp_codegen_string_literal_from_index(196);
		_stringLiteral197 = il2cpp_codegen_string_literal_from_index(197);
		_stringLiteral198 = il2cpp_codegen_string_literal_from_index(198);
		_stringLiteral199 = il2cpp_codegen_string_literal_from_index(199);
		_stringLiteral200 = il2cpp_codegen_string_literal_from_index(200);
		_stringLiteral201 = il2cpp_codegen_string_literal_from_index(201);
		_stringLiteral202 = il2cpp_codegen_string_literal_from_index(202);
		_stringLiteral203 = il2cpp_codegen_string_literal_from_index(203);
		_stringLiteral204 = il2cpp_codegen_string_literal_from_index(204);
		_stringLiteral205 = il2cpp_codegen_string_literal_from_index(205);
		_stringLiteral206 = il2cpp_codegen_string_literal_from_index(206);
		_stringLiteral207 = il2cpp_codegen_string_literal_from_index(207);
		_stringLiteral208 = il2cpp_codegen_string_literal_from_index(208);
		_stringLiteral209 = il2cpp_codegen_string_literal_from_index(209);
		_stringLiteral210 = il2cpp_codegen_string_literal_from_index(210);
		_stringLiteral211 = il2cpp_codegen_string_literal_from_index(211);
		_stringLiteral212 = il2cpp_codegen_string_literal_from_index(212);
		_stringLiteral213 = il2cpp_codegen_string_literal_from_index(213);
		_stringLiteral214 = il2cpp_codegen_string_literal_from_index(214);
		_stringLiteral215 = il2cpp_codegen_string_literal_from_index(215);
		_stringLiteral216 = il2cpp_codegen_string_literal_from_index(216);
		_stringLiteral217 = il2cpp_codegen_string_literal_from_index(217);
		_stringLiteral218 = il2cpp_codegen_string_literal_from_index(218);
		_stringLiteral219 = il2cpp_codegen_string_literal_from_index(219);
		_stringLiteral220 = il2cpp_codegen_string_literal_from_index(220);
		_stringLiteral221 = il2cpp_codegen_string_literal_from_index(221);
		_stringLiteral222 = il2cpp_codegen_string_literal_from_index(222);
		_stringLiteral223 = il2cpp_codegen_string_literal_from_index(223);
		_stringLiteral224 = il2cpp_codegen_string_literal_from_index(224);
		_stringLiteral225 = il2cpp_codegen_string_literal_from_index(225);
		_stringLiteral226 = il2cpp_codegen_string_literal_from_index(226);
		_stringLiteral227 = il2cpp_codegen_string_literal_from_index(227);
		_stringLiteral228 = il2cpp_codegen_string_literal_from_index(228);
		_stringLiteral229 = il2cpp_codegen_string_literal_from_index(229);
		_stringLiteral230 = il2cpp_codegen_string_literal_from_index(230);
		_stringLiteral231 = il2cpp_codegen_string_literal_from_index(231);
		_stringLiteral232 = il2cpp_codegen_string_literal_from_index(232);
		_stringLiteral233 = il2cpp_codegen_string_literal_from_index(233);
		_stringLiteral234 = il2cpp_codegen_string_literal_from_index(234);
		_stringLiteral235 = il2cpp_codegen_string_literal_from_index(235);
		_stringLiteral236 = il2cpp_codegen_string_literal_from_index(236);
		_stringLiteral237 = il2cpp_codegen_string_literal_from_index(237);
		_stringLiteral238 = il2cpp_codegen_string_literal_from_index(238);
		_stringLiteral239 = il2cpp_codegen_string_literal_from_index(239);
		_stringLiteral240 = il2cpp_codegen_string_literal_from_index(240);
		_stringLiteral241 = il2cpp_codegen_string_literal_from_index(241);
		_stringLiteral242 = il2cpp_codegen_string_literal_from_index(242);
		_stringLiteral243 = il2cpp_codegen_string_literal_from_index(243);
		_stringLiteral244 = il2cpp_codegen_string_literal_from_index(244);
		s_Il2CppMethodIntialized = true;
	}
	Event_t77 * V_0 = {0};
	int32_t V_1 = 0;
	bool V_2 = false;
	String_t* V_3 = {0};
	uint16_t V_4 = 0x0;
	String_t* V_5 = {0};
	Dictionary_2_t240 * V_6 = {0};
	int32_t V_7 = 0;
	Exception_t108 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t108 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Event_t77 * L_0 = (Event_t77 *)il2cpp_codegen_object_new (Event_t77_il2cpp_TypeInfo_var);
		Event__ctor_m2200(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Event_t77 * L_1 = V_0;
		NullCheck(L_1);
		Event_set_type_m3197(L_1, 4, /*hidden argument*/NULL);
		String_t* L_2 = ___key;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_IsNullOrEmpty_m2253(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		Event_t77 * L_4 = V_0;
		return L_4;
	}

IL_001a:
	{
		V_1 = 0;
		V_2 = 0;
	}

IL_001e:
	{
		V_2 = 1;
		int32_t L_5 = V_1;
		String_t* L_6 = ___key;
		NullCheck(L_6);
		int32_t L_7 = String_get_Length_m2207(L_6, /*hidden argument*/NULL);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_0033;
		}
	}
	{
		V_2 = 0;
		goto IL_00cd;
	}

IL_0033:
	{
		String_t* L_8 = ___key;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		uint16_t L_10 = String_get_Chars_m2226(L_8, L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		uint16_t L_11 = V_4;
		if (((int32_t)((int32_t)L_11-(int32_t)((int32_t)35))) == 0)
		{
			goto IL_00a9;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)((int32_t)35))) == 1)
		{
			goto IL_0056;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)((int32_t)35))) == 2)
		{
			goto IL_0092;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)((int32_t)35))) == 3)
		{
			goto IL_0064;
		}
	}

IL_0056:
	{
		uint16_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)94))))
		{
			goto IL_007b;
		}
	}
	{
		goto IL_00c0;
	}

IL_0064:
	{
		Event_t77 * L_13 = V_0;
		Event_t77 * L_14 = L_13;
		NullCheck(L_14);
		int32_t L_15 = Event_get_modifiers_m2237(L_14, /*hidden argument*/NULL);
		NullCheck(L_14);
		Event_set_modifiers_m3207(L_14, ((int32_t)((int32_t)L_15|(int32_t)4)), /*hidden argument*/NULL);
		int32_t L_16 = V_1;
		V_1 = ((int32_t)((int32_t)L_16+(int32_t)1));
		goto IL_00c7;
	}

IL_007b:
	{
		Event_t77 * L_17 = V_0;
		Event_t77 * L_18 = L_17;
		NullCheck(L_18);
		int32_t L_19 = Event_get_modifiers_m2237(L_18, /*hidden argument*/NULL);
		NullCheck(L_18);
		Event_set_modifiers_m3207(L_18, ((int32_t)((int32_t)L_19|(int32_t)2)), /*hidden argument*/NULL);
		int32_t L_20 = V_1;
		V_1 = ((int32_t)((int32_t)L_20+(int32_t)1));
		goto IL_00c7;
	}

IL_0092:
	{
		Event_t77 * L_21 = V_0;
		Event_t77 * L_22 = L_21;
		NullCheck(L_22);
		int32_t L_23 = Event_get_modifiers_m2237(L_22, /*hidden argument*/NULL);
		NullCheck(L_22);
		Event_set_modifiers_m3207(L_22, ((int32_t)((int32_t)L_23|(int32_t)8)), /*hidden argument*/NULL);
		int32_t L_24 = V_1;
		V_1 = ((int32_t)((int32_t)L_24+(int32_t)1));
		goto IL_00c7;
	}

IL_00a9:
	{
		Event_t77 * L_25 = V_0;
		Event_t77 * L_26 = L_25;
		NullCheck(L_26);
		int32_t L_27 = Event_get_modifiers_m2237(L_26, /*hidden argument*/NULL);
		NullCheck(L_26);
		Event_set_modifiers_m3207(L_26, ((int32_t)((int32_t)L_27|(int32_t)1)), /*hidden argument*/NULL);
		int32_t L_28 = V_1;
		V_1 = ((int32_t)((int32_t)L_28+(int32_t)1));
		goto IL_00c7;
	}

IL_00c0:
	{
		V_2 = 0;
		goto IL_00c7;
	}

IL_00c7:
	{
		bool L_29 = V_2;
		if (L_29)
		{
			goto IL_001e;
		}
	}

IL_00cd:
	{
		String_t* L_30 = ___key;
		int32_t L_31 = V_1;
		String_t* L_32 = ___key;
		NullCheck(L_32);
		int32_t L_33 = String_get_Length_m2207(L_32, /*hidden argument*/NULL);
		int32_t L_34 = V_1;
		NullCheck(L_30);
		String_t* L_35 = String_Substring_m2227(L_30, L_31, ((int32_t)((int32_t)L_33-(int32_t)L_34)), /*hidden argument*/NULL);
		NullCheck(L_35);
		String_t* L_36 = String_ToLower_m3624(L_35, /*hidden argument*/NULL);
		V_3 = L_36;
		String_t* L_37 = V_3;
		V_5 = L_37;
		String_t* L_38 = V_5;
		if (!L_38)
		{
			goto IL_09e5;
		}
	}
	{
		Dictionary_2_t240 * L_39 = ((Event_t77_StaticFields*)Event_t77_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map0_3;
		if (L_39)
		{
			goto IL_03ab;
		}
	}
	{
		Dictionary_2_t240 * L_40 = (Dictionary_2_t240 *)il2cpp_codegen_object_new (Dictionary_2_t240_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2243(L_40, ((int32_t)49), /*hidden argument*/Dictionary_2__ctor_m2243_MethodInfo_var);
		V_6 = L_40;
		Dictionary_2_t240 * L_41 = V_6;
		NullCheck(L_41);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_41, _stringLiteral195, 0);
		Dictionary_2_t240 * L_42 = V_6;
		NullCheck(L_42);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_42, _stringLiteral196, 1);
		Dictionary_2_t240 * L_43 = V_6;
		NullCheck(L_43);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_43, _stringLiteral197, 2);
		Dictionary_2_t240 * L_44 = V_6;
		NullCheck(L_44);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_44, _stringLiteral198, 3);
		Dictionary_2_t240 * L_45 = V_6;
		NullCheck(L_45);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_45, _stringLiteral199, 4);
		Dictionary_2_t240 * L_46 = V_6;
		NullCheck(L_46);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_46, _stringLiteral200, 5);
		Dictionary_2_t240 * L_47 = V_6;
		NullCheck(L_47);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_47, _stringLiteral201, 6);
		Dictionary_2_t240 * L_48 = V_6;
		NullCheck(L_48);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_48, _stringLiteral202, 7);
		Dictionary_2_t240 * L_49 = V_6;
		NullCheck(L_49);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_49, _stringLiteral203, 8);
		Dictionary_2_t240 * L_50 = V_6;
		NullCheck(L_50);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_50, _stringLiteral204, ((int32_t)9));
		Dictionary_2_t240 * L_51 = V_6;
		NullCheck(L_51);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_51, _stringLiteral205, ((int32_t)10));
		Dictionary_2_t240 * L_52 = V_6;
		NullCheck(L_52);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_52, _stringLiteral206, ((int32_t)11));
		Dictionary_2_t240 * L_53 = V_6;
		NullCheck(L_53);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_53, _stringLiteral207, ((int32_t)12));
		Dictionary_2_t240 * L_54 = V_6;
		NullCheck(L_54);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_54, _stringLiteral208, ((int32_t)13));
		Dictionary_2_t240 * L_55 = V_6;
		NullCheck(L_55);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_55, _stringLiteral209, ((int32_t)14));
		Dictionary_2_t240 * L_56 = V_6;
		NullCheck(L_56);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_56, _stringLiteral210, ((int32_t)15));
		Dictionary_2_t240 * L_57 = V_6;
		NullCheck(L_57);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_57, _stringLiteral211, ((int32_t)16));
		Dictionary_2_t240 * L_58 = V_6;
		NullCheck(L_58);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_58, _stringLiteral212, ((int32_t)17));
		Dictionary_2_t240 * L_59 = V_6;
		NullCheck(L_59);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_59, _stringLiteral213, ((int32_t)18));
		Dictionary_2_t240 * L_60 = V_6;
		NullCheck(L_60);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_60, _stringLiteral214, ((int32_t)19));
		Dictionary_2_t240 * L_61 = V_6;
		NullCheck(L_61);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_61, _stringLiteral215, ((int32_t)20));
		Dictionary_2_t240 * L_62 = V_6;
		NullCheck(L_62);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_62, _stringLiteral216, ((int32_t)21));
		Dictionary_2_t240 * L_63 = V_6;
		NullCheck(L_63);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_63, _stringLiteral217, ((int32_t)22));
		Dictionary_2_t240 * L_64 = V_6;
		NullCheck(L_64);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_64, _stringLiteral218, ((int32_t)23));
		Dictionary_2_t240 * L_65 = V_6;
		NullCheck(L_65);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_65, _stringLiteral219, ((int32_t)24));
		Dictionary_2_t240 * L_66 = V_6;
		NullCheck(L_66);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_66, _stringLiteral220, ((int32_t)25));
		Dictionary_2_t240 * L_67 = V_6;
		NullCheck(L_67);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_67, _stringLiteral221, ((int32_t)26));
		Dictionary_2_t240 * L_68 = V_6;
		NullCheck(L_68);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_68, _stringLiteral222, ((int32_t)27));
		Dictionary_2_t240 * L_69 = V_6;
		NullCheck(L_69);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_69, _stringLiteral223, ((int32_t)28));
		Dictionary_2_t240 * L_70 = V_6;
		NullCheck(L_70);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_70, _stringLiteral224, ((int32_t)29));
		Dictionary_2_t240 * L_71 = V_6;
		NullCheck(L_71);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_71, _stringLiteral225, ((int32_t)30));
		Dictionary_2_t240 * L_72 = V_6;
		NullCheck(L_72);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_72, _stringLiteral226, ((int32_t)31));
		Dictionary_2_t240 * L_73 = V_6;
		NullCheck(L_73);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_73, _stringLiteral227, ((int32_t)32));
		Dictionary_2_t240 * L_74 = V_6;
		NullCheck(L_74);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_74, _stringLiteral228, ((int32_t)33));
		Dictionary_2_t240 * L_75 = V_6;
		NullCheck(L_75);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_75, _stringLiteral229, ((int32_t)34));
		Dictionary_2_t240 * L_76 = V_6;
		NullCheck(L_76);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_76, _stringLiteral230, ((int32_t)35));
		Dictionary_2_t240 * L_77 = V_6;
		NullCheck(L_77);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_77, _stringLiteral231, ((int32_t)36));
		Dictionary_2_t240 * L_78 = V_6;
		NullCheck(L_78);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_78, _stringLiteral232, ((int32_t)37));
		Dictionary_2_t240 * L_79 = V_6;
		NullCheck(L_79);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_79, _stringLiteral233, ((int32_t)38));
		Dictionary_2_t240 * L_80 = V_6;
		NullCheck(L_80);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_80, _stringLiteral234, ((int32_t)39));
		Dictionary_2_t240 * L_81 = V_6;
		NullCheck(L_81);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_81, _stringLiteral235, ((int32_t)40));
		Dictionary_2_t240 * L_82 = V_6;
		NullCheck(L_82);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_82, _stringLiteral236, ((int32_t)41));
		Dictionary_2_t240 * L_83 = V_6;
		NullCheck(L_83);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_83, _stringLiteral237, ((int32_t)42));
		Dictionary_2_t240 * L_84 = V_6;
		NullCheck(L_84);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_84, _stringLiteral238, ((int32_t)43));
		Dictionary_2_t240 * L_85 = V_6;
		NullCheck(L_85);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_85, _stringLiteral239, ((int32_t)44));
		Dictionary_2_t240 * L_86 = V_6;
		NullCheck(L_86);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_86, _stringLiteral240, ((int32_t)45));
		Dictionary_2_t240 * L_87 = V_6;
		NullCheck(L_87);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_87, _stringLiteral241, ((int32_t)46));
		Dictionary_2_t240 * L_88 = V_6;
		NullCheck(L_88);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_88, _stringLiteral242, ((int32_t)47));
		Dictionary_2_t240 * L_89 = V_6;
		NullCheck(L_89);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_89, _stringLiteral243, ((int32_t)48));
		Dictionary_2_t240 * L_90 = V_6;
		((Event_t77_StaticFields*)Event_t77_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map0_3 = L_90;
	}

IL_03ab:
	{
		Dictionary_2_t240 * L_91 = ((Event_t77_StaticFields*)Event_t77_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map0_3;
		String_t* L_92 = V_5;
		NullCheck(L_91);
		bool L_93 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_91, L_92, (&V_7));
		if (!L_93)
		{
			goto IL_09e5;
		}
	}
	{
		int32_t L_94 = V_7;
		if (L_94 == 0)
		{
			goto IL_048e;
		}
		if (L_94 == 1)
		{
			goto IL_04a6;
		}
		if (L_94 == 2)
		{
			goto IL_04be;
		}
		if (L_94 == 3)
		{
			goto IL_04d6;
		}
		if (L_94 == 4)
		{
			goto IL_04ee;
		}
		if (L_94 == 5)
		{
			goto IL_0506;
		}
		if (L_94 == 6)
		{
			goto IL_051e;
		}
		if (L_94 == 7)
		{
			goto IL_0536;
		}
		if (L_94 == 8)
		{
			goto IL_054e;
		}
		if (L_94 == 9)
		{
			goto IL_0566;
		}
		if (L_94 == 10)
		{
			goto IL_057e;
		}
		if (L_94 == 11)
		{
			goto IL_0596;
		}
		if (L_94 == 12)
		{
			goto IL_05ae;
		}
		if (L_94 == 13)
		{
			goto IL_05c6;
		}
		if (L_94 == 14)
		{
			goto IL_05de;
		}
		if (L_94 == 15)
		{
			goto IL_05f6;
		}
		if (L_94 == 16)
		{
			goto IL_060e;
		}
		if (L_94 == 17)
		{
			goto IL_0626;
		}
		if (L_94 == 18)
		{
			goto IL_0645;
		}
		if (L_94 == 19)
		{
			goto IL_0664;
		}
		if (L_94 == 20)
		{
			goto IL_0683;
		}
		if (L_94 == 21)
		{
			goto IL_06a2;
		}
		if (L_94 == 22)
		{
			goto IL_06c1;
		}
		if (L_94 == 23)
		{
			goto IL_06e0;
		}
		if (L_94 == 24)
		{
			goto IL_06ff;
		}
		if (L_94 == 25)
		{
			goto IL_071e;
		}
		if (L_94 == 26)
		{
			goto IL_073d;
		}
		if (L_94 == 27)
		{
			goto IL_075c;
		}
		if (L_94 == 28)
		{
			goto IL_077b;
		}
		if (L_94 == 29)
		{
			goto IL_0796;
		}
		if (L_94 == 30)
		{
			goto IL_07b2;
		}
		if (L_94 == 31)
		{
			goto IL_07bf;
		}
		if (L_94 == 32)
		{
			goto IL_07de;
		}
		if (L_94 == 33)
		{
			goto IL_07fd;
		}
		if (L_94 == 34)
		{
			goto IL_081c;
		}
		if (L_94 == 35)
		{
			goto IL_083b;
		}
		if (L_94 == 36)
		{
			goto IL_085a;
		}
		if (L_94 == 37)
		{
			goto IL_0879;
		}
		if (L_94 == 38)
		{
			goto IL_0898;
		}
		if (L_94 == 39)
		{
			goto IL_08b7;
		}
		if (L_94 == 40)
		{
			goto IL_08d6;
		}
		if (L_94 == 41)
		{
			goto IL_08f5;
		}
		if (L_94 == 42)
		{
			goto IL_0914;
		}
		if (L_94 == 43)
		{
			goto IL_0933;
		}
		if (L_94 == 44)
		{
			goto IL_0952;
		}
		if (L_94 == 45)
		{
			goto IL_0971;
		}
		if (L_94 == 46)
		{
			goto IL_0990;
		}
		if (L_94 == 47)
		{
			goto IL_099d;
		}
		if (L_94 == 48)
		{
			goto IL_09c1;
		}
	}
	{
		goto IL_09e5;
	}

IL_048e:
	{
		Event_t77 * L_95 = V_0;
		NullCheck(L_95);
		Event_set_character_m3212(L_95, ((int32_t)48), /*hidden argument*/NULL);
		Event_t77 * L_96 = V_0;
		NullCheck(L_96);
		Event_set_keyCode_m3214(L_96, ((int32_t)256), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_04a6:
	{
		Event_t77 * L_97 = V_0;
		NullCheck(L_97);
		Event_set_character_m3212(L_97, ((int32_t)49), /*hidden argument*/NULL);
		Event_t77 * L_98 = V_0;
		NullCheck(L_98);
		Event_set_keyCode_m3214(L_98, ((int32_t)257), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_04be:
	{
		Event_t77 * L_99 = V_0;
		NullCheck(L_99);
		Event_set_character_m3212(L_99, ((int32_t)50), /*hidden argument*/NULL);
		Event_t77 * L_100 = V_0;
		NullCheck(L_100);
		Event_set_keyCode_m3214(L_100, ((int32_t)258), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_04d6:
	{
		Event_t77 * L_101 = V_0;
		NullCheck(L_101);
		Event_set_character_m3212(L_101, ((int32_t)51), /*hidden argument*/NULL);
		Event_t77 * L_102 = V_0;
		NullCheck(L_102);
		Event_set_keyCode_m3214(L_102, ((int32_t)259), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_04ee:
	{
		Event_t77 * L_103 = V_0;
		NullCheck(L_103);
		Event_set_character_m3212(L_103, ((int32_t)52), /*hidden argument*/NULL);
		Event_t77 * L_104 = V_0;
		NullCheck(L_104);
		Event_set_keyCode_m3214(L_104, ((int32_t)260), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_0506:
	{
		Event_t77 * L_105 = V_0;
		NullCheck(L_105);
		Event_set_character_m3212(L_105, ((int32_t)53), /*hidden argument*/NULL);
		Event_t77 * L_106 = V_0;
		NullCheck(L_106);
		Event_set_keyCode_m3214(L_106, ((int32_t)261), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_051e:
	{
		Event_t77 * L_107 = V_0;
		NullCheck(L_107);
		Event_set_character_m3212(L_107, ((int32_t)54), /*hidden argument*/NULL);
		Event_t77 * L_108 = V_0;
		NullCheck(L_108);
		Event_set_keyCode_m3214(L_108, ((int32_t)262), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_0536:
	{
		Event_t77 * L_109 = V_0;
		NullCheck(L_109);
		Event_set_character_m3212(L_109, ((int32_t)55), /*hidden argument*/NULL);
		Event_t77 * L_110 = V_0;
		NullCheck(L_110);
		Event_set_keyCode_m3214(L_110, ((int32_t)263), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_054e:
	{
		Event_t77 * L_111 = V_0;
		NullCheck(L_111);
		Event_set_character_m3212(L_111, ((int32_t)56), /*hidden argument*/NULL);
		Event_t77 * L_112 = V_0;
		NullCheck(L_112);
		Event_set_keyCode_m3214(L_112, ((int32_t)264), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_0566:
	{
		Event_t77 * L_113 = V_0;
		NullCheck(L_113);
		Event_set_character_m3212(L_113, ((int32_t)57), /*hidden argument*/NULL);
		Event_t77 * L_114 = V_0;
		NullCheck(L_114);
		Event_set_keyCode_m3214(L_114, ((int32_t)265), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_057e:
	{
		Event_t77 * L_115 = V_0;
		NullCheck(L_115);
		Event_set_character_m3212(L_115, ((int32_t)46), /*hidden argument*/NULL);
		Event_t77 * L_116 = V_0;
		NullCheck(L_116);
		Event_set_keyCode_m3214(L_116, ((int32_t)266), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_0596:
	{
		Event_t77 * L_117 = V_0;
		NullCheck(L_117);
		Event_set_character_m3212(L_117, ((int32_t)47), /*hidden argument*/NULL);
		Event_t77 * L_118 = V_0;
		NullCheck(L_118);
		Event_set_keyCode_m3214(L_118, ((int32_t)267), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_05ae:
	{
		Event_t77 * L_119 = V_0;
		NullCheck(L_119);
		Event_set_character_m3212(L_119, ((int32_t)45), /*hidden argument*/NULL);
		Event_t77 * L_120 = V_0;
		NullCheck(L_120);
		Event_set_keyCode_m3214(L_120, ((int32_t)269), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_05c6:
	{
		Event_t77 * L_121 = V_0;
		NullCheck(L_121);
		Event_set_character_m3212(L_121, ((int32_t)43), /*hidden argument*/NULL);
		Event_t77 * L_122 = V_0;
		NullCheck(L_122);
		Event_set_keyCode_m3214(L_122, ((int32_t)270), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_05de:
	{
		Event_t77 * L_123 = V_0;
		NullCheck(L_123);
		Event_set_character_m3212(L_123, ((int32_t)61), /*hidden argument*/NULL);
		Event_t77 * L_124 = V_0;
		NullCheck(L_124);
		Event_set_keyCode_m3214(L_124, ((int32_t)272), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_05f6:
	{
		Event_t77 * L_125 = V_0;
		NullCheck(L_125);
		Event_set_character_m3212(L_125, ((int32_t)61), /*hidden argument*/NULL);
		Event_t77 * L_126 = V_0;
		NullCheck(L_126);
		Event_set_keyCode_m3214(L_126, ((int32_t)272), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_060e:
	{
		Event_t77 * L_127 = V_0;
		NullCheck(L_127);
		Event_set_character_m3212(L_127, ((int32_t)10), /*hidden argument*/NULL);
		Event_t77 * L_128 = V_0;
		NullCheck(L_128);
		Event_set_keyCode_m3214(L_128, ((int32_t)271), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_0626:
	{
		Event_t77 * L_129 = V_0;
		NullCheck(L_129);
		Event_set_keyCode_m3214(L_129, ((int32_t)273), /*hidden argument*/NULL);
		Event_t77 * L_130 = V_0;
		Event_t77 * L_131 = L_130;
		NullCheck(L_131);
		int32_t L_132 = Event_get_modifiers_m2237(L_131, /*hidden argument*/NULL);
		NullCheck(L_131);
		Event_set_modifiers_m3207(L_131, ((int32_t)((int32_t)L_132|(int32_t)((int32_t)64))), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_0645:
	{
		Event_t77 * L_133 = V_0;
		NullCheck(L_133);
		Event_set_keyCode_m3214(L_133, ((int32_t)274), /*hidden argument*/NULL);
		Event_t77 * L_134 = V_0;
		Event_t77 * L_135 = L_134;
		NullCheck(L_135);
		int32_t L_136 = Event_get_modifiers_m2237(L_135, /*hidden argument*/NULL);
		NullCheck(L_135);
		Event_set_modifiers_m3207(L_135, ((int32_t)((int32_t)L_136|(int32_t)((int32_t)64))), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_0664:
	{
		Event_t77 * L_137 = V_0;
		NullCheck(L_137);
		Event_set_keyCode_m3214(L_137, ((int32_t)276), /*hidden argument*/NULL);
		Event_t77 * L_138 = V_0;
		Event_t77 * L_139 = L_138;
		NullCheck(L_139);
		int32_t L_140 = Event_get_modifiers_m2237(L_139, /*hidden argument*/NULL);
		NullCheck(L_139);
		Event_set_modifiers_m3207(L_139, ((int32_t)((int32_t)L_140|(int32_t)((int32_t)64))), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_0683:
	{
		Event_t77 * L_141 = V_0;
		NullCheck(L_141);
		Event_set_keyCode_m3214(L_141, ((int32_t)275), /*hidden argument*/NULL);
		Event_t77 * L_142 = V_0;
		Event_t77 * L_143 = L_142;
		NullCheck(L_143);
		int32_t L_144 = Event_get_modifiers_m2237(L_143, /*hidden argument*/NULL);
		NullCheck(L_143);
		Event_set_modifiers_m3207(L_143, ((int32_t)((int32_t)L_144|(int32_t)((int32_t)64))), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_06a2:
	{
		Event_t77 * L_145 = V_0;
		NullCheck(L_145);
		Event_set_keyCode_m3214(L_145, ((int32_t)277), /*hidden argument*/NULL);
		Event_t77 * L_146 = V_0;
		Event_t77 * L_147 = L_146;
		NullCheck(L_147);
		int32_t L_148 = Event_get_modifiers_m2237(L_147, /*hidden argument*/NULL);
		NullCheck(L_147);
		Event_set_modifiers_m3207(L_147, ((int32_t)((int32_t)L_148|(int32_t)((int32_t)64))), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_06c1:
	{
		Event_t77 * L_149 = V_0;
		NullCheck(L_149);
		Event_set_keyCode_m3214(L_149, ((int32_t)278), /*hidden argument*/NULL);
		Event_t77 * L_150 = V_0;
		Event_t77 * L_151 = L_150;
		NullCheck(L_151);
		int32_t L_152 = Event_get_modifiers_m2237(L_151, /*hidden argument*/NULL);
		NullCheck(L_151);
		Event_set_modifiers_m3207(L_151, ((int32_t)((int32_t)L_152|(int32_t)((int32_t)64))), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_06e0:
	{
		Event_t77 * L_153 = V_0;
		NullCheck(L_153);
		Event_set_keyCode_m3214(L_153, ((int32_t)279), /*hidden argument*/NULL);
		Event_t77 * L_154 = V_0;
		Event_t77 * L_155 = L_154;
		NullCheck(L_155);
		int32_t L_156 = Event_get_modifiers_m2237(L_155, /*hidden argument*/NULL);
		NullCheck(L_155);
		Event_set_modifiers_m3207(L_155, ((int32_t)((int32_t)L_156|(int32_t)((int32_t)64))), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_06ff:
	{
		Event_t77 * L_157 = V_0;
		NullCheck(L_157);
		Event_set_keyCode_m3214(L_157, ((int32_t)281), /*hidden argument*/NULL);
		Event_t77 * L_158 = V_0;
		Event_t77 * L_159 = L_158;
		NullCheck(L_159);
		int32_t L_160 = Event_get_modifiers_m2237(L_159, /*hidden argument*/NULL);
		NullCheck(L_159);
		Event_set_modifiers_m3207(L_159, ((int32_t)((int32_t)L_160|(int32_t)((int32_t)64))), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_071e:
	{
		Event_t77 * L_161 = V_0;
		NullCheck(L_161);
		Event_set_keyCode_m3214(L_161, ((int32_t)280), /*hidden argument*/NULL);
		Event_t77 * L_162 = V_0;
		Event_t77 * L_163 = L_162;
		NullCheck(L_163);
		int32_t L_164 = Event_get_modifiers_m2237(L_163, /*hidden argument*/NULL);
		NullCheck(L_163);
		Event_set_modifiers_m3207(L_163, ((int32_t)((int32_t)L_164|(int32_t)((int32_t)64))), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_073d:
	{
		Event_t77 * L_165 = V_0;
		NullCheck(L_165);
		Event_set_keyCode_m3214(L_165, ((int32_t)280), /*hidden argument*/NULL);
		Event_t77 * L_166 = V_0;
		Event_t77 * L_167 = L_166;
		NullCheck(L_167);
		int32_t L_168 = Event_get_modifiers_m2237(L_167, /*hidden argument*/NULL);
		NullCheck(L_167);
		Event_set_modifiers_m3207(L_167, ((int32_t)((int32_t)L_168|(int32_t)((int32_t)64))), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_075c:
	{
		Event_t77 * L_169 = V_0;
		NullCheck(L_169);
		Event_set_keyCode_m3214(L_169, ((int32_t)281), /*hidden argument*/NULL);
		Event_t77 * L_170 = V_0;
		Event_t77 * L_171 = L_170;
		NullCheck(L_171);
		int32_t L_172 = Event_get_modifiers_m2237(L_171, /*hidden argument*/NULL);
		NullCheck(L_171);
		Event_set_modifiers_m3207(L_171, ((int32_t)((int32_t)L_172|(int32_t)((int32_t)64))), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_077b:
	{
		Event_t77 * L_173 = V_0;
		NullCheck(L_173);
		Event_set_keyCode_m3214(L_173, 8, /*hidden argument*/NULL);
		Event_t77 * L_174 = V_0;
		Event_t77 * L_175 = L_174;
		NullCheck(L_175);
		int32_t L_176 = Event_get_modifiers_m2237(L_175, /*hidden argument*/NULL);
		NullCheck(L_175);
		Event_set_modifiers_m3207(L_175, ((int32_t)((int32_t)L_176|(int32_t)((int32_t)64))), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_0796:
	{
		Event_t77 * L_177 = V_0;
		NullCheck(L_177);
		Event_set_keyCode_m3214(L_177, ((int32_t)127), /*hidden argument*/NULL);
		Event_t77 * L_178 = V_0;
		Event_t77 * L_179 = L_178;
		NullCheck(L_179);
		int32_t L_180 = Event_get_modifiers_m2237(L_179, /*hidden argument*/NULL);
		NullCheck(L_179);
		Event_set_modifiers_m3207(L_179, ((int32_t)((int32_t)L_180|(int32_t)((int32_t)64))), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_07b2:
	{
		Event_t77 * L_181 = V_0;
		NullCheck(L_181);
		Event_set_keyCode_m3214(L_181, ((int32_t)9), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_07bf:
	{
		Event_t77 * L_182 = V_0;
		NullCheck(L_182);
		Event_set_keyCode_m3214(L_182, ((int32_t)282), /*hidden argument*/NULL);
		Event_t77 * L_183 = V_0;
		Event_t77 * L_184 = L_183;
		NullCheck(L_184);
		int32_t L_185 = Event_get_modifiers_m2237(L_184, /*hidden argument*/NULL);
		NullCheck(L_184);
		Event_set_modifiers_m3207(L_184, ((int32_t)((int32_t)L_185|(int32_t)((int32_t)64))), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_07de:
	{
		Event_t77 * L_186 = V_0;
		NullCheck(L_186);
		Event_set_keyCode_m3214(L_186, ((int32_t)283), /*hidden argument*/NULL);
		Event_t77 * L_187 = V_0;
		Event_t77 * L_188 = L_187;
		NullCheck(L_188);
		int32_t L_189 = Event_get_modifiers_m2237(L_188, /*hidden argument*/NULL);
		NullCheck(L_188);
		Event_set_modifiers_m3207(L_188, ((int32_t)((int32_t)L_189|(int32_t)((int32_t)64))), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_07fd:
	{
		Event_t77 * L_190 = V_0;
		NullCheck(L_190);
		Event_set_keyCode_m3214(L_190, ((int32_t)284), /*hidden argument*/NULL);
		Event_t77 * L_191 = V_0;
		Event_t77 * L_192 = L_191;
		NullCheck(L_192);
		int32_t L_193 = Event_get_modifiers_m2237(L_192, /*hidden argument*/NULL);
		NullCheck(L_192);
		Event_set_modifiers_m3207(L_192, ((int32_t)((int32_t)L_193|(int32_t)((int32_t)64))), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_081c:
	{
		Event_t77 * L_194 = V_0;
		NullCheck(L_194);
		Event_set_keyCode_m3214(L_194, ((int32_t)285), /*hidden argument*/NULL);
		Event_t77 * L_195 = V_0;
		Event_t77 * L_196 = L_195;
		NullCheck(L_196);
		int32_t L_197 = Event_get_modifiers_m2237(L_196, /*hidden argument*/NULL);
		NullCheck(L_196);
		Event_set_modifiers_m3207(L_196, ((int32_t)((int32_t)L_197|(int32_t)((int32_t)64))), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_083b:
	{
		Event_t77 * L_198 = V_0;
		NullCheck(L_198);
		Event_set_keyCode_m3214(L_198, ((int32_t)286), /*hidden argument*/NULL);
		Event_t77 * L_199 = V_0;
		Event_t77 * L_200 = L_199;
		NullCheck(L_200);
		int32_t L_201 = Event_get_modifiers_m2237(L_200, /*hidden argument*/NULL);
		NullCheck(L_200);
		Event_set_modifiers_m3207(L_200, ((int32_t)((int32_t)L_201|(int32_t)((int32_t)64))), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_085a:
	{
		Event_t77 * L_202 = V_0;
		NullCheck(L_202);
		Event_set_keyCode_m3214(L_202, ((int32_t)287), /*hidden argument*/NULL);
		Event_t77 * L_203 = V_0;
		Event_t77 * L_204 = L_203;
		NullCheck(L_204);
		int32_t L_205 = Event_get_modifiers_m2237(L_204, /*hidden argument*/NULL);
		NullCheck(L_204);
		Event_set_modifiers_m3207(L_204, ((int32_t)((int32_t)L_205|(int32_t)((int32_t)64))), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_0879:
	{
		Event_t77 * L_206 = V_0;
		NullCheck(L_206);
		Event_set_keyCode_m3214(L_206, ((int32_t)288), /*hidden argument*/NULL);
		Event_t77 * L_207 = V_0;
		Event_t77 * L_208 = L_207;
		NullCheck(L_208);
		int32_t L_209 = Event_get_modifiers_m2237(L_208, /*hidden argument*/NULL);
		NullCheck(L_208);
		Event_set_modifiers_m3207(L_208, ((int32_t)((int32_t)L_209|(int32_t)((int32_t)64))), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_0898:
	{
		Event_t77 * L_210 = V_0;
		NullCheck(L_210);
		Event_set_keyCode_m3214(L_210, ((int32_t)289), /*hidden argument*/NULL);
		Event_t77 * L_211 = V_0;
		Event_t77 * L_212 = L_211;
		NullCheck(L_212);
		int32_t L_213 = Event_get_modifiers_m2237(L_212, /*hidden argument*/NULL);
		NullCheck(L_212);
		Event_set_modifiers_m3207(L_212, ((int32_t)((int32_t)L_213|(int32_t)((int32_t)64))), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_08b7:
	{
		Event_t77 * L_214 = V_0;
		NullCheck(L_214);
		Event_set_keyCode_m3214(L_214, ((int32_t)290), /*hidden argument*/NULL);
		Event_t77 * L_215 = V_0;
		Event_t77 * L_216 = L_215;
		NullCheck(L_216);
		int32_t L_217 = Event_get_modifiers_m2237(L_216, /*hidden argument*/NULL);
		NullCheck(L_216);
		Event_set_modifiers_m3207(L_216, ((int32_t)((int32_t)L_217|(int32_t)((int32_t)64))), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_08d6:
	{
		Event_t77 * L_218 = V_0;
		NullCheck(L_218);
		Event_set_keyCode_m3214(L_218, ((int32_t)291), /*hidden argument*/NULL);
		Event_t77 * L_219 = V_0;
		Event_t77 * L_220 = L_219;
		NullCheck(L_220);
		int32_t L_221 = Event_get_modifiers_m2237(L_220, /*hidden argument*/NULL);
		NullCheck(L_220);
		Event_set_modifiers_m3207(L_220, ((int32_t)((int32_t)L_221|(int32_t)((int32_t)64))), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_08f5:
	{
		Event_t77 * L_222 = V_0;
		NullCheck(L_222);
		Event_set_keyCode_m3214(L_222, ((int32_t)292), /*hidden argument*/NULL);
		Event_t77 * L_223 = V_0;
		Event_t77 * L_224 = L_223;
		NullCheck(L_224);
		int32_t L_225 = Event_get_modifiers_m2237(L_224, /*hidden argument*/NULL);
		NullCheck(L_224);
		Event_set_modifiers_m3207(L_224, ((int32_t)((int32_t)L_225|(int32_t)((int32_t)64))), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_0914:
	{
		Event_t77 * L_226 = V_0;
		NullCheck(L_226);
		Event_set_keyCode_m3214(L_226, ((int32_t)293), /*hidden argument*/NULL);
		Event_t77 * L_227 = V_0;
		Event_t77 * L_228 = L_227;
		NullCheck(L_228);
		int32_t L_229 = Event_get_modifiers_m2237(L_228, /*hidden argument*/NULL);
		NullCheck(L_228);
		Event_set_modifiers_m3207(L_228, ((int32_t)((int32_t)L_229|(int32_t)((int32_t)64))), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_0933:
	{
		Event_t77 * L_230 = V_0;
		NullCheck(L_230);
		Event_set_keyCode_m3214(L_230, ((int32_t)294), /*hidden argument*/NULL);
		Event_t77 * L_231 = V_0;
		Event_t77 * L_232 = L_231;
		NullCheck(L_232);
		int32_t L_233 = Event_get_modifiers_m2237(L_232, /*hidden argument*/NULL);
		NullCheck(L_232);
		Event_set_modifiers_m3207(L_232, ((int32_t)((int32_t)L_233|(int32_t)((int32_t)64))), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_0952:
	{
		Event_t77 * L_234 = V_0;
		NullCheck(L_234);
		Event_set_keyCode_m3214(L_234, ((int32_t)295), /*hidden argument*/NULL);
		Event_t77 * L_235 = V_0;
		Event_t77 * L_236 = L_235;
		NullCheck(L_236);
		int32_t L_237 = Event_get_modifiers_m2237(L_236, /*hidden argument*/NULL);
		NullCheck(L_236);
		Event_set_modifiers_m3207(L_236, ((int32_t)((int32_t)L_237|(int32_t)((int32_t)64))), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_0971:
	{
		Event_t77 * L_238 = V_0;
		NullCheck(L_238);
		Event_set_keyCode_m3214(L_238, ((int32_t)296), /*hidden argument*/NULL);
		Event_t77 * L_239 = V_0;
		Event_t77 * L_240 = L_239;
		NullCheck(L_240);
		int32_t L_241 = Event_get_modifiers_m2237(L_240, /*hidden argument*/NULL);
		NullCheck(L_240);
		Event_set_modifiers_m3207(L_240, ((int32_t)((int32_t)L_241|(int32_t)((int32_t)64))), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_0990:
	{
		Event_t77 * L_242 = V_0;
		NullCheck(L_242);
		Event_set_keyCode_m3214(L_242, ((int32_t)27), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_099d:
	{
		Event_t77 * L_243 = V_0;
		NullCheck(L_243);
		Event_set_character_m3212(L_243, ((int32_t)10), /*hidden argument*/NULL);
		Event_t77 * L_244 = V_0;
		NullCheck(L_244);
		Event_set_keyCode_m3214(L_244, ((int32_t)13), /*hidden argument*/NULL);
		Event_t77 * L_245 = V_0;
		Event_t77 * L_246 = L_245;
		NullCheck(L_246);
		int32_t L_247 = Event_get_modifiers_m2237(L_246, /*hidden argument*/NULL);
		NullCheck(L_246);
		Event_set_modifiers_m3207(L_246, ((int32_t)((int32_t)L_247&(int32_t)((int32_t)-65))), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_09c1:
	{
		Event_t77 * L_248 = V_0;
		NullCheck(L_248);
		Event_set_keyCode_m3214(L_248, ((int32_t)32), /*hidden argument*/NULL);
		Event_t77 * L_249 = V_0;
		NullCheck(L_249);
		Event_set_character_m3212(L_249, ((int32_t)32), /*hidden argument*/NULL);
		Event_t77 * L_250 = V_0;
		Event_t77 * L_251 = L_250;
		NullCheck(L_251);
		int32_t L_252 = Event_get_modifiers_m2237(L_251, /*hidden argument*/NULL);
		NullCheck(L_251);
		Event_set_modifiers_m3207(L_251, ((int32_t)((int32_t)L_252&(int32_t)((int32_t)-65))), /*hidden argument*/NULL);
		goto IL_0a6b;
	}

IL_09e5:
	{
		String_t* L_253 = V_3;
		NullCheck(L_253);
		int32_t L_254 = String_get_Length_m2207(L_253, /*hidden argument*/NULL);
		if ((((int32_t)L_254) == ((int32_t)1)))
		{
			goto IL_0a36;
		}
	}

IL_09f1:
	try
	{ // begin try (depth: 1)
		Event_t77 * L_255 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_256 = Type_GetTypeFromHandle_m2130(NULL /*static, unused*/, LoadTypeToken(KeyCode_t530_0_0_0_var), /*hidden argument*/NULL);
		String_t* L_257 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t660_il2cpp_TypeInfo_var);
		Object_t * L_258 = Enum_Parse_m3625(NULL /*static, unused*/, L_256, L_257, 1, /*hidden argument*/NULL);
		NullCheck(L_255);
		Event_set_keyCode_m3214(L_255, ((*(int32_t*)((int32_t*)UnBox (L_258, Int32_t106_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		goto IL_0a31;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t108 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (ArgumentException_t402_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0a12;
		throw e;
	}

CATCH_0a12:
	{ // begin catch(System.ArgumentException)
		ObjectU5BU5D_t78* L_259 = ((ObjectU5BU5D_t78*)SZArrayNew(ObjectU5BU5D_t78_il2cpp_TypeInfo_var, 1));
		String_t* L_260 = V_3;
		NullCheck(L_259);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_259, 0);
		ArrayElementTypeCheck (L_259, L_260);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_259, 0, sizeof(Object_t *))) = (Object_t *)L_260;
		String_t* L_261 = UnityString_Format_m2799(NULL /*static, unused*/, _stringLiteral244, L_259, /*hidden argument*/NULL);
		Debug_LogError_m365(NULL /*static, unused*/, L_261, /*hidden argument*/NULL);
		goto IL_0a31;
	} // end catch (depth: 1)

IL_0a31:
	{
		goto IL_0a66;
	}

IL_0a36:
	{
		Event_t77 * L_262 = V_0;
		String_t* L_263 = V_3;
		NullCheck(L_263);
		String_t* L_264 = String_ToLower_m3624(L_263, /*hidden argument*/NULL);
		NullCheck(L_264);
		uint16_t L_265 = String_get_Chars_m2226(L_264, 0, /*hidden argument*/NULL);
		NullCheck(L_262);
		Event_set_character_m3212(L_262, L_265, /*hidden argument*/NULL);
		Event_t77 * L_266 = V_0;
		Event_t77 * L_267 = V_0;
		NullCheck(L_267);
		uint16_t L_268 = Event_get_character_m2239(L_267, /*hidden argument*/NULL);
		NullCheck(L_266);
		Event_set_keyCode_m3214(L_266, L_268, /*hidden argument*/NULL);
		Event_t77 * L_269 = V_0;
		NullCheck(L_269);
		int32_t L_270 = Event_get_modifiers_m2237(L_269, /*hidden argument*/NULL);
		if (!L_270)
		{
			goto IL_0a66;
		}
	}
	{
		Event_t77 * L_271 = V_0;
		NullCheck(L_271);
		Event_set_character_m3212(L_271, 0, /*hidden argument*/NULL);
	}

IL_0a66:
	{
		goto IL_0a6b;
	}

IL_0a6b:
	{
		Event_t77 * L_272 = V_0;
		return L_272;
	}
}
// System.Int32 UnityEngine.Event::GetHashCode()
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
extern "C" int32_t Event_GetHashCode_m3190 (Event_t77 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	Vector2_t15  V_1 = {0};
	{
		V_0 = 1;
		bool L_0 = Event_get_isKey_m3187(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1 = Event_get_keyCode_m2238(__this, /*hidden argument*/NULL);
		V_0 = (((uint16_t)L_1));
	}

IL_0015:
	{
		bool L_2 = Event_get_isMouse_m3188(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		Vector2_t15  L_3 = Event_get_mousePosition_m3166(__this, /*hidden argument*/NULL);
		V_1 = L_3;
		int32_t L_4 = Vector2_GetHashCode_m2633((&V_1), /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_002f:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = Event_get_modifiers_m2237(__this, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_5*(int32_t)((int32_t)37)))|(int32_t)L_6));
		int32_t L_7 = V_0;
		return L_7;
	}
}
// System.Boolean UnityEngine.Event::Equals(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo* Event_t77_il2cpp_TypeInfo_var;
extern "C" bool Event_Equals_m3191 (Event_t77 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Event_t77_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(216);
		s_Il2CppMethodIntialized = true;
	}
	Event_t77 * V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return 0;
	}

IL_0008:
	{
		Object_t * L_1 = ___obj;
		bool L_2 = Object_ReferenceEquals_m3626(NULL /*static, unused*/, __this, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		return 1;
	}

IL_0016:
	{
		Object_t * L_3 = ___obj;
		NullCheck(L_3);
		Type_t * L_4 = Object_GetType_m1961(L_3, /*hidden argument*/NULL);
		Type_t * L_5 = Object_GetType_m1961(__this, /*hidden argument*/NULL);
		if ((((Object_t*)(Type_t *)L_4) == ((Object_t*)(Type_t *)L_5)))
		{
			goto IL_0029;
		}
	}
	{
		return 0;
	}

IL_0029:
	{
		Object_t * L_6 = ___obj;
		V_0 = ((Event_t77 *)CastclassSealed(L_6, Event_t77_il2cpp_TypeInfo_var));
		int32_t L_7 = Event_get_type_m323(__this, /*hidden argument*/NULL);
		Event_t77 * L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = Event_get_type_m323(L_8, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)L_9))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_10 = Event_get_modifiers_m2237(__this, /*hidden argument*/NULL);
		Event_t77 * L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = Event_get_modifiers_m2237(L_11, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)((int32_t)L_10&(int32_t)((int32_t)-33)))) == ((int32_t)((int32_t)((int32_t)L_12&(int32_t)((int32_t)-33))))))
		{
			goto IL_005a;
		}
	}

IL_0058:
	{
		return 0;
	}

IL_005a:
	{
		bool L_13 = Event_get_isKey_m3187(__this, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0074;
		}
	}
	{
		int32_t L_14 = Event_get_keyCode_m2238(__this, /*hidden argument*/NULL);
		Event_t77 * L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = Event_get_keyCode_m2238(L_15, /*hidden argument*/NULL);
		return ((((int32_t)L_14) == ((int32_t)L_16))? 1 : 0);
	}

IL_0074:
	{
		bool L_17 = Event_get_isMouse_m3188(__this, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0091;
		}
	}
	{
		Vector2_t15  L_18 = Event_get_mousePosition_m3166(__this, /*hidden argument*/NULL);
		Event_t77 * L_19 = V_0;
		NullCheck(L_19);
		Vector2_t15  L_20 = Event_get_mousePosition_m3166(L_19, /*hidden argument*/NULL);
		bool L_21 = Vector2_op_Equality_m2448(NULL /*static, unused*/, L_18, L_20, /*hidden argument*/NULL);
		return L_21;
	}

IL_0091:
	{
		return 0;
	}
}
// System.String UnityEngine.Event::ToString()
extern TypeInfo* ObjectU5BU5D_t78_il2cpp_TypeInfo_var;
extern TypeInfo* EventType_t531_il2cpp_TypeInfo_var;
extern TypeInfo* EventModifiers_t532_il2cpp_TypeInfo_var;
extern TypeInfo* KeyCode_t530_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t106_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Vector2_t15_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral245;
extern Il2CppCodeGenString* _stringLiteral246;
extern Il2CppCodeGenString* _stringLiteral247;
extern Il2CppCodeGenString* _stringLiteral248;
extern Il2CppCodeGenString* _stringLiteral249;
extern Il2CppCodeGenString* _stringLiteral250;
extern Il2CppCodeGenString* _stringLiteral251;
extern "C" String_t* Event_ToString_m3192 (Event_t77 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t78_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(113);
		EventType_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(361);
		EventModifiers_t532_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(362);
		KeyCode_t530_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(359);
		Int32_t106_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		Vector2_t15_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(115);
		_stringLiteral245 = il2cpp_codegen_string_literal_from_index(245);
		_stringLiteral246 = il2cpp_codegen_string_literal_from_index(246);
		_stringLiteral247 = il2cpp_codegen_string_literal_from_index(247);
		_stringLiteral248 = il2cpp_codegen_string_literal_from_index(248);
		_stringLiteral249 = il2cpp_codegen_string_literal_from_index(249);
		_stringLiteral250 = il2cpp_codegen_string_literal_from_index(250);
		_stringLiteral251 = il2cpp_codegen_string_literal_from_index(251);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = Event_get_isKey_m3187(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_00b5;
		}
	}
	{
		uint16_t L_1 = Event_get_character_m2239(__this, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0051;
		}
	}
	{
		ObjectU5BU5D_t78* L_2 = ((ObjectU5BU5D_t78*)SZArrayNew(ObjectU5BU5D_t78_il2cpp_TypeInfo_var, 3));
		int32_t L_3 = Event_get_type_m323(__this, /*hidden argument*/NULL);
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(EventType_t531_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0, sizeof(Object_t *))) = (Object_t *)L_5;
		ObjectU5BU5D_t78* L_6 = L_2;
		int32_t L_7 = Event_get_modifiers_m2237(__this, /*hidden argument*/NULL);
		int32_t L_8 = L_7;
		Object_t * L_9 = Box(EventModifiers_t532_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 1);
		ArrayElementTypeCheck (L_6, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 1, sizeof(Object_t *))) = (Object_t *)L_9;
		ObjectU5BU5D_t78* L_10 = L_6;
		int32_t L_11 = Event_get_keyCode_m2238(__this, /*hidden argument*/NULL);
		int32_t L_12 = L_11;
		Object_t * L_13 = Box(KeyCode_t530_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 2);
		ArrayElementTypeCheck (L_10, L_13);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 2, sizeof(Object_t *))) = (Object_t *)L_13;
		String_t* L_14 = UnityString_Format_m2799(NULL /*static, unused*/, _stringLiteral245, L_10, /*hidden argument*/NULL);
		return L_14;
	}

IL_0051:
	{
		ObjectU5BU5D_t78* L_15 = ((ObjectU5BU5D_t78*)SZArrayNew(ObjectU5BU5D_t78_il2cpp_TypeInfo_var, 8));
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 0);
		ArrayElementTypeCheck (L_15, _stringLiteral246);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_15, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral246;
		ObjectU5BU5D_t78* L_16 = L_15;
		int32_t L_17 = Event_get_type_m323(__this, /*hidden argument*/NULL);
		int32_t L_18 = L_17;
		Object_t * L_19 = Box(EventType_t531_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 1);
		ArrayElementTypeCheck (L_16, L_19);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, 1, sizeof(Object_t *))) = (Object_t *)L_19;
		ObjectU5BU5D_t78* L_20 = L_16;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 2);
		ArrayElementTypeCheck (L_20, _stringLiteral247);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_20, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral247;
		ObjectU5BU5D_t78* L_21 = L_20;
		uint16_t L_22 = Event_get_character_m2239(__this, /*hidden argument*/NULL);
		int32_t L_23 = L_22;
		Object_t * L_24 = Box(Int32_t106_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, 3);
		ArrayElementTypeCheck (L_21, L_24);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_21, 3, sizeof(Object_t *))) = (Object_t *)L_24;
		ObjectU5BU5D_t78* L_25 = L_21;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, 4);
		ArrayElementTypeCheck (L_25, _stringLiteral248);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_25, 4, sizeof(Object_t *))) = (Object_t *)_stringLiteral248;
		ObjectU5BU5D_t78* L_26 = L_25;
		int32_t L_27 = Event_get_modifiers_m2237(__this, /*hidden argument*/NULL);
		int32_t L_28 = L_27;
		Object_t * L_29 = Box(EventModifiers_t532_il2cpp_TypeInfo_var, &L_28);
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, 5);
		ArrayElementTypeCheck (L_26, L_29);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_26, 5, sizeof(Object_t *))) = (Object_t *)L_29;
		ObjectU5BU5D_t78* L_30 = L_26;
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, 6);
		ArrayElementTypeCheck (L_30, _stringLiteral249);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_30, 6, sizeof(Object_t *))) = (Object_t *)_stringLiteral249;
		ObjectU5BU5D_t78* L_31 = L_30;
		int32_t L_32 = Event_get_keyCode_m2238(__this, /*hidden argument*/NULL);
		int32_t L_33 = L_32;
		Object_t * L_34 = Box(KeyCode_t530_il2cpp_TypeInfo_var, &L_33);
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, 7);
		ArrayElementTypeCheck (L_31, L_34);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_31, 7, sizeof(Object_t *))) = (Object_t *)L_34;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_35 = String_Concat_m1939(NULL /*static, unused*/, L_31, /*hidden argument*/NULL);
		return L_35;
	}

IL_00b5:
	{
		bool L_36 = Event_get_isMouse_m3188(__this, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_00fb;
		}
	}
	{
		ObjectU5BU5D_t78* L_37 = ((ObjectU5BU5D_t78*)SZArrayNew(ObjectU5BU5D_t78_il2cpp_TypeInfo_var, 3));
		int32_t L_38 = Event_get_type_m323(__this, /*hidden argument*/NULL);
		int32_t L_39 = L_38;
		Object_t * L_40 = Box(EventType_t531_il2cpp_TypeInfo_var, &L_39);
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, 0);
		ArrayElementTypeCheck (L_37, L_40);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_37, 0, sizeof(Object_t *))) = (Object_t *)L_40;
		ObjectU5BU5D_t78* L_41 = L_37;
		Vector2_t15  L_42 = Event_get_mousePosition_m3166(__this, /*hidden argument*/NULL);
		Vector2_t15  L_43 = L_42;
		Object_t * L_44 = Box(Vector2_t15_il2cpp_TypeInfo_var, &L_43);
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, 1);
		ArrayElementTypeCheck (L_41, L_44);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_41, 1, sizeof(Object_t *))) = (Object_t *)L_44;
		ObjectU5BU5D_t78* L_45 = L_41;
		int32_t L_46 = Event_get_modifiers_m2237(__this, /*hidden argument*/NULL);
		int32_t L_47 = L_46;
		Object_t * L_48 = Box(EventModifiers_t532_il2cpp_TypeInfo_var, &L_47);
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, 2);
		ArrayElementTypeCheck (L_45, L_48);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_45, 2, sizeof(Object_t *))) = (Object_t *)L_48;
		String_t* L_49 = UnityString_Format_m2799(NULL /*static, unused*/, _stringLiteral250, L_45, /*hidden argument*/NULL);
		return L_49;
	}

IL_00fb:
	{
		int32_t L_50 = Event_get_type_m323(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_50) == ((int32_t)((int32_t)14))))
		{
			goto IL_0115;
		}
	}
	{
		int32_t L_51 = Event_get_type_m323(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_51) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_013d;
		}
	}

IL_0115:
	{
		ObjectU5BU5D_t78* L_52 = ((ObjectU5BU5D_t78*)SZArrayNew(ObjectU5BU5D_t78_il2cpp_TypeInfo_var, 2));
		int32_t L_53 = Event_get_type_m323(__this, /*hidden argument*/NULL);
		int32_t L_54 = L_53;
		Object_t * L_55 = Box(EventType_t531_il2cpp_TypeInfo_var, &L_54);
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, 0);
		ArrayElementTypeCheck (L_52, L_55);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_52, 0, sizeof(Object_t *))) = (Object_t *)L_55;
		ObjectU5BU5D_t78* L_56 = L_52;
		String_t* L_57 = Event_get_commandName_m2242(__this, /*hidden argument*/NULL);
		NullCheck(L_56);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_56, 1);
		ArrayElementTypeCheck (L_56, L_57);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_56, 1, sizeof(Object_t *))) = (Object_t *)L_57;
		String_t* L_58 = UnityString_Format_m2799(NULL /*static, unused*/, _stringLiteral251, L_56, /*hidden argument*/NULL);
		return L_58;
	}

IL_013d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_59 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		int32_t L_60 = Event_get_type_m323(__this, /*hidden argument*/NULL);
		int32_t L_61 = L_60;
		Object_t * L_62 = Box(EventType_t531_il2cpp_TypeInfo_var, &L_61);
		String_t* L_63 = String_Concat_m1906(NULL /*static, unused*/, L_59, L_62, /*hidden argument*/NULL);
		return L_63;
	}
}
// System.Void UnityEngine.Event::Init()
extern "C" void Event_Init_m3193 (Event_t77 * __this, const MethodInfo* method)
{
	typedef void (*Event_Init_m3193_ftn) (Event_t77 *);
	static Event_Init_m3193_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_Init_m3193_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Init()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Event::Cleanup()
extern "C" void Event_Cleanup_m3194 (Event_t77 * __this, const MethodInfo* method)
{
	typedef void (*Event_Cleanup_m3194_ftn) (Event_t77 *);
	static Event_Cleanup_m3194_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_Cleanup_m3194_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Cleanup()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Event::InitCopy(UnityEngine.Event)
extern "C" void Event_InitCopy_m3195 (Event_t77 * __this, Event_t77 * ___other, const MethodInfo* method)
{
	typedef void (*Event_InitCopy_m3195_ftn) (Event_t77 *, Event_t77 *);
	static Event_InitCopy_m3195_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_InitCopy_m3195_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::InitCopy(UnityEngine.Event)");
	_il2cpp_icall_func(__this, ___other);
}
// System.Void UnityEngine.Event::InitPtr(System.IntPtr)
extern "C" void Event_InitPtr_m3196 (Event_t77 * __this, IntPtr_t ___ptr, const MethodInfo* method)
{
	typedef void (*Event_InitPtr_m3196_ftn) (Event_t77 *, IntPtr_t);
	static Event_InitPtr_m3196_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_InitPtr_m3196_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::InitPtr(System.IntPtr)");
	_il2cpp_icall_func(__this, ___ptr);
}
// UnityEngine.EventType UnityEngine.Event::get_rawType()
extern "C" int32_t Event_get_rawType_m2241 (Event_t77 * __this, const MethodInfo* method)
{
	typedef int32_t (*Event_get_rawType_m2241_ftn) (Event_t77 *);
	static Event_get_rawType_m2241_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_rawType_m2241_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_rawType()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.EventType UnityEngine.Event::get_type()
extern "C" int32_t Event_get_type_m323 (Event_t77 * __this, const MethodInfo* method)
{
	typedef int32_t (*Event_get_type_m323_ftn) (Event_t77 *);
	static Event_get_type_m323_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_type_m323_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_type()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Event::set_type(UnityEngine.EventType)
// UnityEngine.EventType
#include "UnityEngine_UnityEngine_EventType.h"
extern "C" void Event_set_type_m3197 (Event_t77 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*Event_set_type_m3197_ftn) (Event_t77 *, int32_t);
	static Event_set_type_m3197_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_set_type_m3197_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::set_type(UnityEngine.EventType)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.EventType UnityEngine.Event::GetTypeForControl(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" int32_t Event_GetTypeForControl_m3198 (Event_t77 * __this, int32_t ___controlID, const MethodInfo* method)
{
	typedef int32_t (*Event_GetTypeForControl_m3198_ftn) (Event_t77 *, int32_t);
	static Event_GetTypeForControl_m3198_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_GetTypeForControl_m3198_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::GetTypeForControl(System.Int32)");
	return _il2cpp_icall_func(__this, ___controlID);
}
// System.Void UnityEngine.Event::Internal_SetMousePosition(UnityEngine.Vector2)
extern "C" void Event_Internal_SetMousePosition_m3199 (Event_t77 * __this, Vector2_t15  ___value, const MethodInfo* method)
{
	{
		Event_INTERNAL_CALL_Internal_SetMousePosition_m3200(NULL /*static, unused*/, __this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Event::INTERNAL_CALL_Internal_SetMousePosition(UnityEngine.Event,UnityEngine.Vector2&)
extern "C" void Event_INTERNAL_CALL_Internal_SetMousePosition_m3200 (Object_t * __this /* static, unused */, Event_t77 * ___self, Vector2_t15 * ___value, const MethodInfo* method)
{
	typedef void (*Event_INTERNAL_CALL_Internal_SetMousePosition_m3200_ftn) (Event_t77 *, Vector2_t15 *);
	static Event_INTERNAL_CALL_Internal_SetMousePosition_m3200_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_INTERNAL_CALL_Internal_SetMousePosition_m3200_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::INTERNAL_CALL_Internal_SetMousePosition(UnityEngine.Event,UnityEngine.Vector2&)");
	_il2cpp_icall_func(___self, ___value);
}
// System.Void UnityEngine.Event::Internal_GetMousePosition(UnityEngine.Vector2&)
extern "C" void Event_Internal_GetMousePosition_m3201 (Event_t77 * __this, Vector2_t15 * ___value, const MethodInfo* method)
{
	typedef void (*Event_Internal_GetMousePosition_m3201_ftn) (Event_t77 *, Vector2_t15 *);
	static Event_Internal_GetMousePosition_m3201_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_Internal_GetMousePosition_m3201_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Internal_GetMousePosition(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Event::Internal_SetMouseDelta(UnityEngine.Vector2)
extern "C" void Event_Internal_SetMouseDelta_m3202 (Event_t77 * __this, Vector2_t15  ___value, const MethodInfo* method)
{
	{
		Event_INTERNAL_CALL_Internal_SetMouseDelta_m3203(NULL /*static, unused*/, __this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Event::INTERNAL_CALL_Internal_SetMouseDelta(UnityEngine.Event,UnityEngine.Vector2&)
extern "C" void Event_INTERNAL_CALL_Internal_SetMouseDelta_m3203 (Object_t * __this /* static, unused */, Event_t77 * ___self, Vector2_t15 * ___value, const MethodInfo* method)
{
	typedef void (*Event_INTERNAL_CALL_Internal_SetMouseDelta_m3203_ftn) (Event_t77 *, Vector2_t15 *);
	static Event_INTERNAL_CALL_Internal_SetMouseDelta_m3203_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_INTERNAL_CALL_Internal_SetMouseDelta_m3203_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::INTERNAL_CALL_Internal_SetMouseDelta(UnityEngine.Event,UnityEngine.Vector2&)");
	_il2cpp_icall_func(___self, ___value);
}
// System.Void UnityEngine.Event::Internal_GetMouseDelta(UnityEngine.Vector2&)
extern "C" void Event_Internal_GetMouseDelta_m3204 (Event_t77 * __this, Vector2_t15 * ___value, const MethodInfo* method)
{
	typedef void (*Event_Internal_GetMouseDelta_m3204_ftn) (Event_t77 *, Vector2_t15 *);
	static Event_Internal_GetMouseDelta_m3204_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_Internal_GetMouseDelta_m3204_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Internal_GetMouseDelta(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.Event::get_button()
extern "C" int32_t Event_get_button_m3205 (Event_t77 * __this, const MethodInfo* method)
{
	typedef int32_t (*Event_get_button_m3205_ftn) (Event_t77 *);
	static Event_get_button_m3205_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_button_m3205_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_button()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Event::set_button(System.Int32)
extern "C" void Event_set_button_m3206 (Event_t77 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*Event_set_button_m3206_ftn) (Event_t77 *, int32_t);
	static Event_set_button_m3206_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_set_button_m3206_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::set_button(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.EventModifiers UnityEngine.Event::get_modifiers()
extern "C" int32_t Event_get_modifiers_m2237 (Event_t77 * __this, const MethodInfo* method)
{
	typedef int32_t (*Event_get_modifiers_m2237_ftn) (Event_t77 *);
	static Event_get_modifiers_m2237_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_modifiers_m2237_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_modifiers()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Event::set_modifiers(UnityEngine.EventModifiers)
// UnityEngine.EventModifiers
#include "UnityEngine_UnityEngine_EventModifiers.h"
extern "C" void Event_set_modifiers_m3207 (Event_t77 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*Event_set_modifiers_m3207_ftn) (Event_t77 *, int32_t);
	static Event_set_modifiers_m3207_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_set_modifiers_m3207_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::set_modifiers(UnityEngine.EventModifiers)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.Event::get_pressure()
extern "C" float Event_get_pressure_m3208 (Event_t77 * __this, const MethodInfo* method)
{
	typedef float (*Event_get_pressure_m3208_ftn) (Event_t77 *);
	static Event_get_pressure_m3208_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_pressure_m3208_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_pressure()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Event::set_pressure(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void Event_set_pressure_m3209 (Event_t77 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*Event_set_pressure_m3209_ftn) (Event_t77 *, float);
	static Event_set_pressure_m3209_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_set_pressure_m3209_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::set_pressure(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.Event::get_clickCount()
extern "C" int32_t Event_get_clickCount_m3210 (Event_t77 * __this, const MethodInfo* method)
{
	typedef int32_t (*Event_get_clickCount_m3210_ftn) (Event_t77 *);
	static Event_get_clickCount_m3210_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_clickCount_m3210_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_clickCount()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Event::set_clickCount(System.Int32)
extern "C" void Event_set_clickCount_m3211 (Event_t77 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*Event_set_clickCount_m3211_ftn) (Event_t77 *, int32_t);
	static Event_set_clickCount_m3211_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_set_clickCount_m3211_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::set_clickCount(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Char UnityEngine.Event::get_character()
extern "C" uint16_t Event_get_character_m2239 (Event_t77 * __this, const MethodInfo* method)
{
	typedef uint16_t (*Event_get_character_m2239_ftn) (Event_t77 *);
	static Event_get_character_m2239_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_character_m2239_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_character()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Event::set_character(System.Char)
// System.Char
#include "mscorlib_System_Char.h"
extern "C" void Event_set_character_m3212 (Event_t77 * __this, uint16_t ___value, const MethodInfo* method)
{
	typedef void (*Event_set_character_m3212_ftn) (Event_t77 *, uint16_t);
	static Event_set_character_m3212_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_set_character_m3212_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::set_character(System.Char)");
	_il2cpp_icall_func(__this, ___value);
}
// System.String UnityEngine.Event::get_commandName()
extern "C" String_t* Event_get_commandName_m2242 (Event_t77 * __this, const MethodInfo* method)
{
	typedef String_t* (*Event_get_commandName_m2242_ftn) (Event_t77 *);
	static Event_get_commandName_m2242_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_commandName_m2242_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_commandName()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Event::set_commandName(System.String)
extern "C" void Event_set_commandName_m3213 (Event_t77 * __this, String_t* ___value, const MethodInfo* method)
{
	typedef void (*Event_set_commandName_m3213_ftn) (Event_t77 *, String_t*);
	static Event_set_commandName_m3213_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_set_commandName_m3213_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::set_commandName(System.String)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.KeyCode UnityEngine.Event::get_keyCode()
extern "C" int32_t Event_get_keyCode_m2238 (Event_t77 * __this, const MethodInfo* method)
{
	typedef int32_t (*Event_get_keyCode_m2238_ftn) (Event_t77 *);
	static Event_get_keyCode_m2238_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_keyCode_m2238_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_keyCode()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Event::set_keyCode(UnityEngine.KeyCode)
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"
extern "C" void Event_set_keyCode_m3214 (Event_t77 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*Event_set_keyCode_m3214_ftn) (Event_t77 *, int32_t);
	static Event_set_keyCode_m3214_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_set_keyCode_m3214_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::set_keyCode(UnityEngine.KeyCode)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Event::Internal_SetNativeEvent(System.IntPtr)
extern "C" void Event_Internal_SetNativeEvent_m3215 (Object_t * __this /* static, unused */, IntPtr_t ___ptr, const MethodInfo* method)
{
	typedef void (*Event_Internal_SetNativeEvent_m3215_ftn) (IntPtr_t);
	static Event_Internal_SetNativeEvent_m3215_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_Internal_SetNativeEvent_m3215_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Internal_SetNativeEvent(System.IntPtr)");
	_il2cpp_icall_func(___ptr);
}
// System.Void UnityEngine.Event::Use()
extern "C" void Event_Use_m3216 (Event_t77 * __this, const MethodInfo* method)
{
	typedef void (*Event_Use_m3216_ftn) (Event_t77 *);
	static Event_Use_m3216_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_Use_m3216_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Use()");
	_il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Event::PopEvent(UnityEngine.Event)
extern "C" bool Event_PopEvent_m2244 (Object_t * __this /* static, unused */, Event_t77 * ___outEvent, const MethodInfo* method)
{
	typedef bool (*Event_PopEvent_m2244_ftn) (Event_t77 *);
	static Event_PopEvent_m2244_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_PopEvent_m2244_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::PopEvent(UnityEngine.Event)");
	return _il2cpp_icall_func(___outEvent);
}
// System.Int32 UnityEngine.Event::GetEventCount()
extern "C" int32_t Event_GetEventCount_m3217 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*Event_GetEventCount_m3217_ftn) ();
	static Event_GetEventCount_m3217_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_GetEventCount_m3217_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::GetEventCount()");
	return _il2cpp_icall_func();
}
// Conversion methods for marshalling of: UnityEngine.Event
extern "C" void Event_t77_marshal(const Event_t77& unmarshaled, Event_t77_marshaled& marshaled)
{
	Il2CppCodeGenException* ___s_Current_1Exception = il2cpp_codegen_get_not_supported_exception("Cannot marshal field 's_Current' of type 'Event': Reference type field marshaling is not supported.");
	il2cpp_codegen_raise_exception((Il2CppCodeGenException*)___s_Current_1Exception);
}
extern "C" void Event_t77_marshal_back(const Event_t77_marshaled& marshaled, Event_t77& unmarshaled)
{
	Il2CppCodeGenException* ___s_Current_1Exception = il2cpp_codegen_get_not_supported_exception("Cannot marshal field 's_Current' of type 'Event': Reference type field marshaling is not supported.");
	il2cpp_codegen_raise_exception((Il2CppCodeGenException*)___s_Current_1Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.Event
extern "C" void Event_t77_marshal_cleanup(Event_t77_marshaled& marshaled)
{
}
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCodeMethodDeclarations.h"
// UnityEngine.EventType
#include "UnityEngine_UnityEngine_EventTypeMethodDeclarations.h"
// UnityEngine.EventModifiers
#include "UnityEngine_UnityEngine_EventModifiersMethodDeclarations.h"
// UnityEngine.ScaleMode
#include "UnityEngine_UnityEngine_ScaleMode.h"
// UnityEngine.ScaleMode
#include "UnityEngine_UnityEngine_ScaleModeMethodDeclarations.h"
// UnityEngine.GUI/ScrollViewState
#include "UnityEngine_UnityEngine_GUI_ScrollViewState.h"
// UnityEngine.GUI/ScrollViewState
#include "UnityEngine_UnityEngine_GUI_ScrollViewStateMethodDeclarations.h"
// System.Void UnityEngine.GUI/ScrollViewState::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void ScrollViewState__ctor_m3218 (ScrollViewState_t534 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m355(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUI/WindowFunction
#include "UnityEngine_UnityEngine_GUI_WindowFunction.h"
// UnityEngine.GUI/WindowFunction
#include "UnityEngine_UnityEngine_GUI_WindowFunctionMethodDeclarations.h"
// System.Void UnityEngine.GUI/WindowFunction::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void WindowFunction__ctor_m3219 (WindowFunction_t535 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.GUI/WindowFunction::Invoke(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void WindowFunction_Invoke_m3220 (WindowFunction_t535 * __this, int32_t ___id, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		WindowFunction_Invoke_m3220((WindowFunction_t535 *)__this->___prev_9,___id, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___id, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___id,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, int32_t ___id, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___id,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_WindowFunction_t535(Il2CppObject* delegate, int32_t ___id)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___id' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___id);

	// Marshaling cleanup of parameter '___id' native representation

}
// System.IAsyncResult UnityEngine.GUI/WindowFunction::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* Int32_t106_il2cpp_TypeInfo_var;
extern "C" Object_t * WindowFunction_BeginInvoke_m3221 (WindowFunction_t535 * __this, int32_t ___id, AsyncCallback_t9 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t106_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t106_il2cpp_TypeInfo_var, &___id);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.GUI/WindowFunction::EndInvoke(System.IAsyncResult)
extern "C" void WindowFunction_EndInvoke_m3222 (WindowFunction_t535 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.GUI
#include "UnityEngine_UnityEngine_GUI.h"
// UnityEngine.GUI
#include "UnityEngine_UnityEngine_GUIMethodDeclarations.h"
// UnityEngineInternal.GenericStack
#include "UnityEngine_UnityEngineInternal_GenericStack.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// UnityEngine.GUISkin
#include "UnityEngine_UnityEngine_GUISkin.h"
// UnityEngine.InternalDrawTextureArguments
#include "UnityEngine_UnityEngine_InternalDrawTextureArguments.h"
// UnityEngine.GUIContent
#include "UnityEngine_UnityEngine_GUIContent.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyle.h"
// UnityEngine.GUILayoutOption
#include "UnityEngine_UnityEngine_GUILayoutOption.h"
// UnityEngine.GUILayoutUtility/LayoutCache
#include "UnityEngine_UnityEngine_GUILayoutUtility_LayoutCache.h"
// UnityEngineInternal.GenericStack
#include "UnityEngine_UnityEngineInternal_GenericStackMethodDeclarations.h"
// System.DateTime
#include "mscorlib_System_DateTimeMethodDeclarations.h"
// UnityEngine.GUIUtility
#include "UnityEngine_UnityEngine_GUIUtilityMethodDeclarations.h"
// UnityEngine.GUISkin
#include "UnityEngine_UnityEngine_GUISkinMethodDeclarations.h"
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_TextureMethodDeclarations.h"
// UnityEngine.Graphics
#include "UnityEngine_UnityEngine_GraphicsMethodDeclarations.h"
// UnityEngine.GUIContent
#include "UnityEngine_UnityEngine_GUIContentMethodDeclarations.h"
// UnityEngine.GUILayoutUtility
#include "UnityEngine_UnityEngine_GUILayoutUtilityMethodDeclarations.h"
// UnityEngine.GUILayout
#include "UnityEngine_UnityEngine_GUILayoutMethodDeclarations.h"
// System.Void UnityEngine.GUI::.cctor()
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngineInternal.GenericStack
#include "UnityEngine_UnityEngineInternal_GenericStackMethodDeclarations.h"
// System.DateTime
#include "mscorlib_System_DateTimeMethodDeclarations.h"
// UnityEngine.GUI
#include "UnityEngine_UnityEngine_GUIMethodDeclarations.h"
extern TypeInfo* GUI_t73_il2cpp_TypeInfo_var;
extern TypeInfo* GenericStack_t537_il2cpp_TypeInfo_var;
extern TypeInfo* DateTime_t538_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral252;
extern Il2CppCodeGenString* _stringLiteral253;
extern Il2CppCodeGenString* _stringLiteral98;
extern Il2CppCodeGenString* _stringLiteral254;
extern Il2CppCodeGenString* _stringLiteral90;
extern Il2CppCodeGenString* _stringLiteral255;
extern Il2CppCodeGenString* _stringLiteral256;
extern "C" void GUI__cctor_m3223 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		GenericStack_t537_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(363);
		DateTime_t538_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(364);
		_stringLiteral252 = il2cpp_codegen_string_literal_from_index(252);
		_stringLiteral253 = il2cpp_codegen_string_literal_from_index(253);
		_stringLiteral98 = il2cpp_codegen_string_literal_from_index(98);
		_stringLiteral254 = il2cpp_codegen_string_literal_from_index(254);
		_stringLiteral90 = il2cpp_codegen_string_literal_from_index(90);
		_stringLiteral255 = il2cpp_codegen_string_literal_from_index(255);
		_stringLiteral256 = il2cpp_codegen_string_literal_from_index(256);
		s_Il2CppMethodIntialized = true;
	}
	{
		((GUI_t73_StaticFields*)GUI_t73_il2cpp_TypeInfo_var->static_fields)->___s_ScrollStepSize_0 = (10.0f);
		((GUI_t73_StaticFields*)GUI_t73_il2cpp_TypeInfo_var->static_fields)->___s_HotTextField_2 = (-1);
		NullCheck(_stringLiteral252);
		int32_t L_0 = String_GetHashCode_m3618(_stringLiteral252, /*hidden argument*/NULL);
		((GUI_t73_StaticFields*)GUI_t73_il2cpp_TypeInfo_var->static_fields)->___s_BoxHash_3 = L_0;
		NullCheck(_stringLiteral253);
		int32_t L_1 = String_GetHashCode_m3618(_stringLiteral253, /*hidden argument*/NULL);
		((GUI_t73_StaticFields*)GUI_t73_il2cpp_TypeInfo_var->static_fields)->___s_RepeatButtonHash_4 = L_1;
		NullCheck(_stringLiteral98);
		int32_t L_2 = String_GetHashCode_m3618(_stringLiteral98, /*hidden argument*/NULL);
		((GUI_t73_StaticFields*)GUI_t73_il2cpp_TypeInfo_var->static_fields)->___s_ToggleHash_5 = L_2;
		NullCheck(_stringLiteral254);
		int32_t L_3 = String_GetHashCode_m3618(_stringLiteral254, /*hidden argument*/NULL);
		((GUI_t73_StaticFields*)GUI_t73_il2cpp_TypeInfo_var->static_fields)->___s_ButtonGridHash_6 = L_3;
		NullCheck(_stringLiteral90);
		int32_t L_4 = String_GetHashCode_m3618(_stringLiteral90, /*hidden argument*/NULL);
		((GUI_t73_StaticFields*)GUI_t73_il2cpp_TypeInfo_var->static_fields)->___s_SliderHash_7 = L_4;
		NullCheck(_stringLiteral255);
		int32_t L_5 = String_GetHashCode_m3618(_stringLiteral255, /*hidden argument*/NULL);
		((GUI_t73_StaticFields*)GUI_t73_il2cpp_TypeInfo_var->static_fields)->___s_BeginGroupHash_8 = L_5;
		NullCheck(_stringLiteral256);
		int32_t L_6 = String_GetHashCode_m3618(_stringLiteral256, /*hidden argument*/NULL);
		((GUI_t73_StaticFields*)GUI_t73_il2cpp_TypeInfo_var->static_fields)->___s_ScrollviewHash_9 = L_6;
		GenericStack_t537 * L_7 = (GenericStack_t537 *)il2cpp_codegen_object_new (GenericStack_t537_il2cpp_TypeInfo_var);
		GenericStack__ctor_m3579(L_7, /*hidden argument*/NULL);
		((GUI_t73_StaticFields*)GUI_t73_il2cpp_TypeInfo_var->static_fields)->___s_ScrollViewStates_12 = L_7;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t538_il2cpp_TypeInfo_var);
		DateTime_t538  L_8 = DateTime_get_Now_m3627(NULL /*static, unused*/, /*hidden argument*/NULL);
		GUI_set_nextScrollStepTime_m3224(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUI::set_nextScrollStepTime(System.DateTime)
// System.DateTime
#include "mscorlib_System_DateTime.h"
extern TypeInfo* GUI_t73_il2cpp_TypeInfo_var;
extern "C" void GUI_set_nextScrollStepTime_m3224 (Object_t * __this /* static, unused */, DateTime_t538  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	{
		DateTime_t538  L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t73_il2cpp_TypeInfo_var);
		((GUI_t73_StaticFields*)GUI_t73_il2cpp_TypeInfo_var->static_fields)->___U3CnextScrollStepTimeU3Ek__BackingField_13 = L_0;
		return;
	}
}
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
// UnityEngine.GUISkin
#include "UnityEngine_UnityEngine_GUISkin.h"
// UnityEngine.GUIUtility
#include "UnityEngine_UnityEngine_GUIUtilityMethodDeclarations.h"
extern TypeInfo* GUIUtility_t388_il2cpp_TypeInfo_var;
extern TypeInfo* GUI_t73_il2cpp_TypeInfo_var;
extern "C" void GUI_set_skin_m3225 (Object_t * __this /* static, unused */, GUISkin_t536 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIUtility_t388_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(227);
		GUI_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t388_il2cpp_TypeInfo_var);
		GUIUtility_CheckOnGUI_m3391(NULL /*static, unused*/, /*hidden argument*/NULL);
		GUISkin_t536 * L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t73_il2cpp_TypeInfo_var);
		GUI_DoSetSkin_m3227(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
extern TypeInfo* GUIUtility_t388_il2cpp_TypeInfo_var;
extern TypeInfo* GUI_t73_il2cpp_TypeInfo_var;
extern "C" GUISkin_t536 * GUI_get_skin_m3226 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIUtility_t388_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(227);
		GUI_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t388_il2cpp_TypeInfo_var);
		GUIUtility_CheckOnGUI_m3391(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t73_il2cpp_TypeInfo_var);
		GUISkin_t536 * L_0 = ((GUI_t73_StaticFields*)GUI_t73_il2cpp_TypeInfo_var->static_fields)->___s_Skin_10;
		return L_0;
	}
}
// System.Void UnityEngine.GUI::DoSetSkin(UnityEngine.GUISkin)
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.GUISkin
#include "UnityEngine_UnityEngine_GUISkinMethodDeclarations.h"
extern TypeInfo* GUIUtility_t388_il2cpp_TypeInfo_var;
extern TypeInfo* GUI_t73_il2cpp_TypeInfo_var;
extern "C" void GUI_DoSetSkin_m3227 (Object_t * __this /* static, unused */, GUISkin_t536 * ___newSkin, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIUtility_t388_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(227);
		GUI_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUISkin_t536 * L_0 = ___newSkin;
		bool L_1 = Object_op_Implicit_m314(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t388_il2cpp_TypeInfo_var);
		GUISkin_t536 * L_2 = GUIUtility_GetDefaultSkin_m3387(NULL /*static, unused*/, /*hidden argument*/NULL);
		___newSkin = L_2;
	}

IL_0012:
	{
		GUISkin_t536 * L_3 = ___newSkin;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t73_il2cpp_TypeInfo_var);
		((GUI_t73_StaticFields*)GUI_t73_il2cpp_TypeInfo_var->static_fields)->___s_Skin_10 = L_3;
		GUISkin_t536 * L_4 = ___newSkin;
		NullCheck(L_4);
		GUISkin_MakeCurrent_m3343(L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode)
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_Texture.h"
// UnityEngine.ScaleMode
#include "UnityEngine_UnityEngine_ScaleMode.h"
extern TypeInfo* GUI_t73_il2cpp_TypeInfo_var;
extern "C" void GUI_DrawTexture_m339 (Object_t * __this /* static, unused */, Rect_t18  ___position, Texture_t14 * ___image, int32_t ___scaleMode, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	{
		Rect_t18  L_0 = ___position;
		Texture_t14 * L_1 = ___image;
		int32_t L_2 = ___scaleMode;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t73_il2cpp_TypeInfo_var);
		GUI_DrawTexture_m3228(NULL /*static, unused*/, L_0, L_1, L_2, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode,System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo* GUI_t73_il2cpp_TypeInfo_var;
extern "C" void GUI_DrawTexture_m3228 (Object_t * __this /* static, unused */, Rect_t18  ___position, Texture_t14 * ___image, int32_t ___scaleMode, bool ___alphaBlend, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	{
		Rect_t18  L_0 = ___position;
		Texture_t14 * L_1 = ___image;
		int32_t L_2 = ___scaleMode;
		bool L_3 = ___alphaBlend;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t73_il2cpp_TypeInfo_var);
		GUI_DrawTexture_m3229(NULL /*static, unused*/, L_0, L_1, L_2, L_3, (0.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode,System.Boolean,System.Single)
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.Event
#include "UnityEngine_UnityEngine_EventMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32MethodDeclarations.h"
// UnityEngine.Graphics
#include "UnityEngine_UnityEngine_GraphicsMethodDeclarations.h"
extern TypeInfo* GUI_t73_il2cpp_TypeInfo_var;
extern TypeInfo* InternalDrawTextureArguments_t448_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral257;
extern "C" void GUI_DrawTexture_m3229 (Object_t * __this /* static, unused */, Rect_t18  ___position, Texture_t14 * ___image, int32_t ___scaleMode, bool ___alphaBlend, float ___imageAspect, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		InternalDrawTextureArguments_t448_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(331);
		_stringLiteral257 = il2cpp_codegen_string_literal_from_index(257);
		s_Il2CppMethodIntialized = true;
	}
	Material_t42 * V_0 = {0};
	float V_1 = 0.0f;
	InternalDrawTextureArguments_t448  V_2 = {0};
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	int32_t V_7 = {0};
	Material_t42 * G_B8_0 = {0};
	{
		Event_t77 * L_0 = Event_get_current_m322(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = Event_get_type_m323(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)7))))
		{
			goto IL_0277;
		}
	}
	{
		Texture_t14 * L_2 = ___image;
		bool L_3 = Object_op_Equality_m305(NULL /*static, unused*/, L_2, (Object_t75 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		Debug_LogWarning_m310(NULL /*static, unused*/, _stringLiteral257, /*hidden argument*/NULL);
		return;
	}

IL_0027:
	{
		float L_4 = ___imageAspect;
		if ((!(((float)L_4) == ((float)(0.0f)))))
		{
			goto IL_0044;
		}
	}
	{
		Texture_t14 * L_5 = ___image;
		NullCheck(L_5);
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_5);
		Texture_t14 * L_7 = ___image;
		NullCheck(L_7);
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_7);
		___imageAspect = ((float)((float)(((float)L_6))/(float)(((float)L_8))));
	}

IL_0044:
	{
		bool L_9 = ___alphaBlend;
		if (!L_9)
		{
			goto IL_0054;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t73_il2cpp_TypeInfo_var);
		Material_t42 * L_10 = GUI_get_blendMaterial_m3234(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B8_0 = L_10;
		goto IL_0059;
	}

IL_0054:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t73_il2cpp_TypeInfo_var);
		Material_t42 * L_11 = GUI_get_blitMaterial_m3235(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B8_0 = L_11;
	}

IL_0059:
	{
		V_0 = G_B8_0;
		float L_12 = Rect_get_width_m334((&___position), /*hidden argument*/NULL);
		float L_13 = Rect_get_height_m336((&___position), /*hidden argument*/NULL);
		V_1 = ((float)((float)L_12/(float)L_13));
		Initobj (InternalDrawTextureArguments_t448_il2cpp_TypeInfo_var, (&V_2));
		Texture_t14 * L_14 = ___image;
		(&V_2)->___texture_1 = L_14;
		(&V_2)->___leftBorder_3 = 0;
		(&V_2)->___rightBorder_4 = 0;
		(&V_2)->___topBorder_5 = 0;
		(&V_2)->___bottomBorder_6 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t73_il2cpp_TypeInfo_var);
		Color_t11  L_15 = GUI_get_color_m3231(NULL /*static, unused*/, /*hidden argument*/NULL);
		Color32_t343  L_16 = Color32_op_Implicit_m2142(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		(&V_2)->___color_7 = L_16;
		Material_t42 * L_17 = V_0;
		(&V_2)->___mat_8 = L_17;
		int32_t L_18 = ___scaleMode;
		V_7 = L_18;
		int32_t L_19 = V_7;
		if (L_19 == 0)
		{
			goto IL_00ce;
		}
		if (L_19 == 1)
		{
			goto IL_0102;
		}
		if (L_19 == 2)
		{
			goto IL_0187;
		}
	}
	{
		goto IL_0277;
	}

IL_00ce:
	{
		Rect_t18  L_20 = ___position;
		(&V_2)->___screenRect_0 = L_20;
		Rect_t18  L_21 = {0};
		Rect__ctor_m300(&L_21, (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		(&V_2)->___sourceRect_2 = L_21;
		Graphics_DrawTexture_m2576(NULL /*static, unused*/, (&V_2), /*hidden argument*/NULL);
		goto IL_0277;
	}

IL_0102:
	{
		float L_22 = V_1;
		float L_23 = ___imageAspect;
		if ((!(((float)L_22) > ((float)L_23))))
		{
			goto IL_0147;
		}
	}
	{
		float L_24 = ___imageAspect;
		float L_25 = V_1;
		V_3 = ((float)((float)L_24/(float)L_25));
		Rect_t18  L_26 = ___position;
		(&V_2)->___screenRect_0 = L_26;
		float L_27 = V_3;
		float L_28 = V_3;
		Rect_t18  L_29 = {0};
		Rect__ctor_m300(&L_29, (0.0f), ((float)((float)((float)((float)(1.0f)-(float)L_27))*(float)(0.5f))), (1.0f), L_28, /*hidden argument*/NULL);
		(&V_2)->___sourceRect_2 = L_29;
		Graphics_DrawTexture_m2576(NULL /*static, unused*/, (&V_2), /*hidden argument*/NULL);
		goto IL_0182;
	}

IL_0147:
	{
		float L_30 = V_1;
		float L_31 = ___imageAspect;
		V_4 = ((float)((float)L_30/(float)L_31));
		Rect_t18  L_32 = ___position;
		(&V_2)->___screenRect_0 = L_32;
		float L_33 = V_4;
		float L_34 = V_4;
		Rect_t18  L_35 = {0};
		Rect__ctor_m300(&L_35, ((float)((float)(0.5f)-(float)((float)((float)L_33*(float)(0.5f))))), (0.0f), L_34, (1.0f), /*hidden argument*/NULL);
		(&V_2)->___sourceRect_2 = L_35;
		Graphics_DrawTexture_m2576(NULL /*static, unused*/, (&V_2), /*hidden argument*/NULL);
	}

IL_0182:
	{
		goto IL_0277;
	}

IL_0187:
	{
		float L_36 = V_1;
		float L_37 = ___imageAspect;
		if ((!(((float)L_36) > ((float)L_37))))
		{
			goto IL_0203;
		}
	}
	{
		float L_38 = ___imageAspect;
		float L_39 = V_1;
		V_5 = ((float)((float)L_38/(float)L_39));
		float L_40 = Rect_get_xMin_m333((&___position), /*hidden argument*/NULL);
		float L_41 = Rect_get_width_m334((&___position), /*hidden argument*/NULL);
		float L_42 = V_5;
		float L_43 = Rect_get_yMin_m335((&___position), /*hidden argument*/NULL);
		float L_44 = V_5;
		float L_45 = Rect_get_width_m334((&___position), /*hidden argument*/NULL);
		float L_46 = Rect_get_height_m336((&___position), /*hidden argument*/NULL);
		Rect_t18  L_47 = {0};
		Rect__ctor_m300(&L_47, ((float)((float)L_40+(float)((float)((float)((float)((float)L_41*(float)((float)((float)(1.0f)-(float)L_42))))*(float)(0.5f))))), L_43, ((float)((float)L_44*(float)L_45)), L_46, /*hidden argument*/NULL);
		(&V_2)->___screenRect_0 = L_47;
		Rect_t18  L_48 = {0};
		Rect__ctor_m300(&L_48, (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		(&V_2)->___sourceRect_2 = L_48;
		Graphics_DrawTexture_m2576(NULL /*static, unused*/, (&V_2), /*hidden argument*/NULL);
		goto IL_0272;
	}

IL_0203:
	{
		float L_49 = V_1;
		float L_50 = ___imageAspect;
		V_6 = ((float)((float)L_49/(float)L_50));
		float L_51 = Rect_get_xMin_m333((&___position), /*hidden argument*/NULL);
		float L_52 = Rect_get_yMin_m335((&___position), /*hidden argument*/NULL);
		float L_53 = Rect_get_height_m336((&___position), /*hidden argument*/NULL);
		float L_54 = V_6;
		float L_55 = Rect_get_width_m334((&___position), /*hidden argument*/NULL);
		float L_56 = V_6;
		float L_57 = Rect_get_height_m336((&___position), /*hidden argument*/NULL);
		Rect_t18  L_58 = {0};
		Rect__ctor_m300(&L_58, L_51, ((float)((float)L_52+(float)((float)((float)((float)((float)L_53*(float)((float)((float)(1.0f)-(float)L_54))))*(float)(0.5f))))), L_55, ((float)((float)L_56*(float)L_57)), /*hidden argument*/NULL);
		(&V_2)->___screenRect_0 = L_58;
		Rect_t18  L_59 = {0};
		Rect__ctor_m300(&L_59, (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		(&V_2)->___sourceRect_2 = L_59;
		Graphics_DrawTexture_m2576(NULL /*static, unused*/, (&V_2), /*hidden argument*/NULL);
	}

IL_0272:
	{
		goto IL_0277;
	}

IL_0277:
	{
		return;
	}
}
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String)
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.GUIContent
#include "UnityEngine_UnityEngine_GUIContentMethodDeclarations.h"
extern TypeInfo* GUIContent_t539_il2cpp_TypeInfo_var;
extern TypeInfo* GUI_t73_il2cpp_TypeInfo_var;
extern "C" bool GUI_Button_m301 (Object_t * __this /* static, unused */, Rect_t18  ___position, String_t* ___text, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIContent_t539_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(365);
		GUI_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	{
		Rect_t18  L_0 = ___position;
		String_t* L_1 = ___text;
		IL2CPP_RUNTIME_CLASS_INIT(GUIContent_t539_il2cpp_TypeInfo_var);
		GUIContent_t539 * L_2 = GUIContent_Temp_m3241(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t73_il2cpp_TypeInfo_var);
		GUISkin_t536 * L_3 = ((GUI_t73_StaticFields*)GUI_t73_il2cpp_TypeInfo_var->static_fields)->___s_Skin_10;
		NullCheck(L_3);
		GUIStyle_t545 * L_4 = GUISkin_get_button_m3303(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		IntPtr_t L_5 = (L_4->___m_Ptr_0);
		bool L_6 = GUI_DoButton_m3236(NULL /*static, unused*/, L_0, L_2, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void UnityEngine.GUI::CallWindowDelegate(UnityEngine.GUI/WindowFunction,System.Int32,UnityEngine.GUISkin,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle)
// UnityEngine.GUI/WindowFunction
#include "UnityEngine_UnityEngine_GUI_WindowFunction.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyle.h"
// UnityEngine.GUILayoutUtility
#include "UnityEngine_UnityEngine_GUILayoutUtilityMethodDeclarations.h"
// UnityEngine.GUILayout
#include "UnityEngine_UnityEngine_GUILayoutMethodDeclarations.h"
// UnityEngine.GUI/WindowFunction
#include "UnityEngine_UnityEngine_GUI_WindowFunctionMethodDeclarations.h"
extern TypeInfo* GUILayoutUtility_t543_il2cpp_TypeInfo_var;
extern TypeInfo* GUI_t73_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutOptionU5BU5D_t644_il2cpp_TypeInfo_var;
extern "C" void GUI_CallWindowDelegate_m3230 (Object_t * __this /* static, unused */, WindowFunction_t535 * ___func, int32_t ___id, GUISkin_t536 * ____skin, int32_t ___forceRect, float ___width, float ___height, GUIStyle_t545 * ___style, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutUtility_t543_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(366);
		GUI_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		GUILayoutOptionU5BU5D_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(367);
		s_Il2CppMethodIntialized = true;
	}
	GUISkin_t536 * V_0 = {0};
	GUILayoutOptionU5BU5D_t644* V_1 = {0};
	{
		int32_t L_0 = ___id;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t543_il2cpp_TypeInfo_var);
		GUILayoutUtility_SelectIDList_m3247(NULL /*static, unused*/, L_0, 1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t73_il2cpp_TypeInfo_var);
		GUISkin_t536 * L_1 = GUI_get_skin_m3226(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		Event_t77 * L_2 = Event_get_current_m322(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = Event_get_type_m323(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)8))))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_4 = ___forceRect;
		if (!L_4)
		{
			goto IL_004d;
		}
	}
	{
		GUILayoutOptionU5BU5D_t644* L_5 = ((GUILayoutOptionU5BU5D_t644*)SZArrayNew(GUILayoutOptionU5BU5D_t644_il2cpp_TypeInfo_var, 2));
		float L_6 = ___width;
		GUILayoutOption_t550 * L_7 = GUILayout_Width_m3243(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 0);
		ArrayElementTypeCheck (L_5, L_7);
		*((GUILayoutOption_t550 **)(GUILayoutOption_t550 **)SZArrayLdElema(L_5, 0, sizeof(GUILayoutOption_t550 *))) = (GUILayoutOption_t550 *)L_7;
		GUILayoutOptionU5BU5D_t644* L_8 = L_5;
		float L_9 = ___height;
		GUILayoutOption_t550 * L_10 = GUILayout_Height_m3244(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 1);
		ArrayElementTypeCheck (L_8, L_10);
		*((GUILayoutOption_t550 **)(GUILayoutOption_t550 **)SZArrayLdElema(L_8, 1, sizeof(GUILayoutOption_t550 *))) = (GUILayoutOption_t550 *)L_10;
		V_1 = L_8;
		int32_t L_11 = ___id;
		GUIStyle_t545 * L_12 = ___style;
		GUILayoutOptionU5BU5D_t644* L_13 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t543_il2cpp_TypeInfo_var);
		GUILayoutUtility_BeginWindow_m3249(NULL /*static, unused*/, L_11, L_12, L_13, /*hidden argument*/NULL);
		goto IL_0056;
	}

IL_004d:
	{
		int32_t L_14 = ___id;
		GUIStyle_t545 * L_15 = ___style;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t543_il2cpp_TypeInfo_var);
		GUILayoutUtility_BeginWindow_m3249(NULL /*static, unused*/, L_14, L_15, (GUILayoutOptionU5BU5D_t644*)(GUILayoutOptionU5BU5D_t644*)NULL, /*hidden argument*/NULL);
	}

IL_0056:
	{
		GUISkin_t536 * L_16 = ____skin;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t73_il2cpp_TypeInfo_var);
		GUI_set_skin_m3225(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		WindowFunction_t535 * L_17 = ___func;
		int32_t L_18 = ___id;
		NullCheck(L_17);
		WindowFunction_Invoke_m3220(L_17, L_18, /*hidden argument*/NULL);
		Event_t77 * L_19 = Event_get_current_m322(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_19);
		int32_t L_20 = Event_get_type_m323(L_19, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_20) == ((uint32_t)8))))
		{
			goto IL_0078;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t543_il2cpp_TypeInfo_var);
		GUILayoutUtility_Layout_m3250(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0078:
	{
		GUISkin_t536 * L_21 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t73_il2cpp_TypeInfo_var);
		GUI_set_skin_m3225(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Color UnityEngine.GUI::get_color()
extern TypeInfo* GUI_t73_il2cpp_TypeInfo_var;
extern "C" Color_t11  GUI_get_color_m3231 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	Color_t11  V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t73_il2cpp_TypeInfo_var);
		GUI_INTERNAL_get_color_m3232(NULL /*static, unused*/, (&V_0), /*hidden argument*/NULL);
		Color_t11  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.GUI::INTERNAL_get_color(UnityEngine.Color&)
extern "C" void GUI_INTERNAL_get_color_m3232 (Object_t * __this /* static, unused */, Color_t11 * ___value, const MethodInfo* method)
{
	typedef void (*GUI_INTERNAL_get_color_m3232_ftn) (Color_t11 *);
	static GUI_INTERNAL_get_color_m3232_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUI_INTERNAL_get_color_m3232_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUI::INTERNAL_get_color(UnityEngine.Color&)");
	_il2cpp_icall_func(___value);
}
// System.Void UnityEngine.GUI::set_changed(System.Boolean)
extern "C" void GUI_set_changed_m3233 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method)
{
	typedef void (*GUI_set_changed_m3233_ftn) (bool);
	static GUI_set_changed_m3233_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUI_set_changed_m3233_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUI::set_changed(System.Boolean)");
	_il2cpp_icall_func(___value);
}
// UnityEngine.Material UnityEngine.GUI::get_blendMaterial()
extern "C" Material_t42 * GUI_get_blendMaterial_m3234 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef Material_t42 * (*GUI_get_blendMaterial_m3234_ftn) ();
	static GUI_get_blendMaterial_m3234_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUI_get_blendMaterial_m3234_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUI::get_blendMaterial()");
	return _il2cpp_icall_func();
}
// UnityEngine.Material UnityEngine.GUI::get_blitMaterial()
extern "C" Material_t42 * GUI_get_blitMaterial_m3235 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef Material_t42 * (*GUI_get_blitMaterial_m3235_ftn) ();
	static GUI_get_blitMaterial_m3235_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUI_get_blitMaterial_m3235_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUI::get_blitMaterial()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.GUI::DoButton(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
// UnityEngine.GUIContent
#include "UnityEngine_UnityEngine_GUIContent.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern TypeInfo* GUI_t73_il2cpp_TypeInfo_var;
extern "C" bool GUI_DoButton_m3236 (Object_t * __this /* static, unused */, Rect_t18  ___position, GUIContent_t539 * ___content, IntPtr_t ___style, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUIContent_t539 * L_0 = ___content;
		IntPtr_t L_1 = ___style;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t73_il2cpp_TypeInfo_var);
		bool L_2 = GUI_INTERNAL_CALL_DoButton_m3237(NULL /*static, unused*/, (&___position), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.GUI::INTERNAL_CALL_DoButton(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
extern "C" bool GUI_INTERNAL_CALL_DoButton_m3237 (Object_t * __this /* static, unused */, Rect_t18 * ___position, GUIContent_t539 * ___content, IntPtr_t ___style, const MethodInfo* method)
{
	typedef bool (*GUI_INTERNAL_CALL_DoButton_m3237_ftn) (Rect_t18 *, GUIContent_t539 *, IntPtr_t);
	static GUI_INTERNAL_CALL_DoButton_m3237_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUI_INTERNAL_CALL_DoButton_m3237_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUI::INTERNAL_CALL_DoButton(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)");
	return _il2cpp_icall_func(___position, ___content, ___style);
}
// System.Void UnityEngine.GUIContent::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void GUIContent__ctor_m3238 (GUIContent_t539 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___m_Text_0 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___m_Tooltip_2 = L_1;
		Object__ctor_m355(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUIContent::.ctor(System.String)
// System.String
#include "mscorlib_System_String.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void GUIContent__ctor_m3239 (GUIContent_t539 * __this, String_t* ___text, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___m_Text_0 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___m_Tooltip_2 = L_1;
		Object__ctor_m355(__this, /*hidden argument*/NULL);
		String_t* L_2 = ___text;
		__this->___m_Text_0 = L_2;
		return;
	}
}
// System.Void UnityEngine.GUIContent::.cctor()
// UnityEngine.GUIContent
#include "UnityEngine_UnityEngine_GUIContentMethodDeclarations.h"
extern TypeInfo* GUIContent_t539_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void GUIContent__cctor_m3240 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIContent_t539_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(365);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUIContent_t539 * L_0 = (GUIContent_t539 *)il2cpp_codegen_object_new (GUIContent_t539_il2cpp_TypeInfo_var);
		GUIContent__ctor_m3238(L_0, /*hidden argument*/NULL);
		((GUIContent_t539_StaticFields*)GUIContent_t539_il2cpp_TypeInfo_var->static_fields)->___s_Text_3 = L_0;
		GUIContent_t539 * L_1 = (GUIContent_t539 *)il2cpp_codegen_object_new (GUIContent_t539_il2cpp_TypeInfo_var);
		GUIContent__ctor_m3238(L_1, /*hidden argument*/NULL);
		((GUIContent_t539_StaticFields*)GUIContent_t539_il2cpp_TypeInfo_var->static_fields)->___s_Image_4 = L_1;
		GUIContent_t539 * L_2 = (GUIContent_t539 *)il2cpp_codegen_object_new (GUIContent_t539_il2cpp_TypeInfo_var);
		GUIContent__ctor_m3238(L_2, /*hidden argument*/NULL);
		((GUIContent_t539_StaticFields*)GUIContent_t539_il2cpp_TypeInfo_var->static_fields)->___s_TextImage_5 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		GUIContent_t539 * L_4 = (GUIContent_t539 *)il2cpp_codegen_object_new (GUIContent_t539_il2cpp_TypeInfo_var);
		GUIContent__ctor_m3239(L_4, L_3, /*hidden argument*/NULL);
		((GUIContent_t539_StaticFields*)GUIContent_t539_il2cpp_TypeInfo_var->static_fields)->___none_6 = L_4;
		return;
	}
}
// UnityEngine.GUIContent UnityEngine.GUIContent::Temp(System.String)
extern TypeInfo* GUIContent_t539_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" GUIContent_t539 * GUIContent_Temp_m3241 (Object_t * __this /* static, unused */, String_t* ___t, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIContent_t539_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(365);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIContent_t539_il2cpp_TypeInfo_var);
		GUIContent_t539 * L_0 = ((GUIContent_t539_StaticFields*)GUIContent_t539_il2cpp_TypeInfo_var->static_fields)->___s_Text_3;
		String_t* L_1 = ___t;
		NullCheck(L_0);
		L_0->___m_Text_0 = L_1;
		GUIContent_t539 * L_2 = ((GUIContent_t539_StaticFields*)GUIContent_t539_il2cpp_TypeInfo_var->static_fields)->___s_Text_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_2);
		L_2->___m_Tooltip_2 = L_3;
		GUIContent_t539 * L_4 = ((GUIContent_t539_StaticFields*)GUIContent_t539_il2cpp_TypeInfo_var->static_fields)->___s_Text_3;
		return L_4;
	}
}
// System.Void UnityEngine.GUIContent::ClearStaticCache()
extern TypeInfo* GUIContent_t539_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void GUIContent_ClearStaticCache_m3242 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIContent_t539_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(365);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIContent_t539_il2cpp_TypeInfo_var);
		GUIContent_t539 * L_0 = ((GUIContent_t539_StaticFields*)GUIContent_t539_il2cpp_TypeInfo_var->static_fields)->___s_Text_3;
		NullCheck(L_0);
		L_0->___m_Text_0 = (String_t*)NULL;
		GUIContent_t539 * L_1 = ((GUIContent_t539_StaticFields*)GUIContent_t539_il2cpp_TypeInfo_var->static_fields)->___s_Text_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_1);
		L_1->___m_Tooltip_2 = L_2;
		GUIContent_t539 * L_3 = ((GUIContent_t539_StaticFields*)GUIContent_t539_il2cpp_TypeInfo_var->static_fields)->___s_Image_4;
		NullCheck(L_3);
		L_3->___m_Image_1 = (Texture_t14 *)NULL;
		GUIContent_t539 * L_4 = ((GUIContent_t539_StaticFields*)GUIContent_t539_il2cpp_TypeInfo_var->static_fields)->___s_Image_4;
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_4);
		L_4->___m_Tooltip_2 = L_5;
		GUIContent_t539 * L_6 = ((GUIContent_t539_StaticFields*)GUIContent_t539_il2cpp_TypeInfo_var->static_fields)->___s_TextImage_5;
		NullCheck(L_6);
		L_6->___m_Text_0 = (String_t*)NULL;
		GUIContent_t539 * L_7 = ((GUIContent_t539_StaticFields*)GUIContent_t539_il2cpp_TypeInfo_var->static_fields)->___s_TextImage_5;
		NullCheck(L_7);
		L_7->___m_Image_1 = (Texture_t14 *)NULL;
		return;
	}
}
// UnityEngine.GUILayout
#include "UnityEngine_UnityEngine_GUILayout.h"
// UnityEngine.GUILayoutOption/Type
#include "UnityEngine_UnityEngine_GUILayoutOption_Type.h"
// UnityEngine.GUILayoutOption
#include "UnityEngine_UnityEngine_GUILayoutOptionMethodDeclarations.h"
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Width(System.Single)
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.GUILayoutOption
#include "UnityEngine_UnityEngine_GUILayoutOptionMethodDeclarations.h"
extern TypeInfo* Single_t355_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutOption_t550_il2cpp_TypeInfo_var;
extern "C" GUILayoutOption_t550 * GUILayout_Width_m3243 (Object_t * __this /* static, unused */, float ___width, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Single_t355_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(36);
		GUILayoutOption_t550_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(368);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___width;
		float L_1 = L_0;
		Object_t * L_2 = Box(Single_t355_il2cpp_TypeInfo_var, &L_1);
		GUILayoutOption_t550 * L_3 = (GUILayoutOption_t550 *)il2cpp_codegen_object_new (GUILayoutOption_t550_il2cpp_TypeInfo_var);
		GUILayoutOption__ctor_m3285(L_3, 0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Height(System.Single)
extern TypeInfo* Single_t355_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutOption_t550_il2cpp_TypeInfo_var;
extern "C" GUILayoutOption_t550 * GUILayout_Height_m3244 (Object_t * __this /* static, unused */, float ___height, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Single_t355_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(36);
		GUILayoutOption_t550_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(368);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___height;
		float L_1 = L_0;
		Object_t * L_2 = Box(Single_t355_il2cpp_TypeInfo_var, &L_1);
		GUILayoutOption_t550 * L_3 = (GUILayoutOption_t550 *)il2cpp_codegen_object_new (GUILayoutOption_t550_il2cpp_TypeInfo_var);
		GUILayoutOption__ctor_m3285(L_3, 1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.GUILayoutUtility/LayoutCache
#include "UnityEngine_UnityEngine_GUILayoutUtility_LayoutCacheMethodDeclarations.h"
// UnityEngine.GUILayoutGroup
#include "UnityEngine_UnityEngine_GUILayoutGroup.h"
// System.Collections.Stack
#include "mscorlib_System_Collections_Stack.h"
// UnityEngine.GUILayoutGroup
#include "UnityEngine_UnityEngine_GUILayoutGroupMethodDeclarations.h"
// System.Collections.Stack
#include "mscorlib_System_Collections_StackMethodDeclarations.h"
// System.Void UnityEngine.GUILayoutUtility/LayoutCache::.ctor()
// UnityEngine.GUILayoutGroup
#include "UnityEngine_UnityEngine_GUILayoutGroupMethodDeclarations.h"
// UnityEngineInternal.GenericStack
#include "UnityEngine_UnityEngineInternal_GenericStackMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern TypeInfo* GUILayoutGroup_t542_il2cpp_TypeInfo_var;
extern TypeInfo* GenericStack_t537_il2cpp_TypeInfo_var;
extern "C" void LayoutCache__ctor_m3245 (LayoutCache_t541 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutGroup_t542_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(369);
		GenericStack_t537_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(363);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUILayoutGroup_t542 * L_0 = (GUILayoutGroup_t542 *)il2cpp_codegen_object_new (GUILayoutGroup_t542_il2cpp_TypeInfo_var);
		GUILayoutGroup__ctor_m3270(L_0, /*hidden argument*/NULL);
		__this->___topLevel_0 = L_0;
		GenericStack_t537 * L_1 = (GenericStack_t537 *)il2cpp_codegen_object_new (GenericStack_t537_il2cpp_TypeInfo_var);
		GenericStack__ctor_m3579(L_1, /*hidden argument*/NULL);
		__this->___layoutGroups_1 = L_1;
		GUILayoutGroup_t542 * L_2 = (GUILayoutGroup_t542 *)il2cpp_codegen_object_new (GUILayoutGroup_t542_il2cpp_TypeInfo_var);
		GUILayoutGroup__ctor_m3270(L_2, /*hidden argument*/NULL);
		__this->___windows_2 = L_2;
		Object__ctor_m355(__this, /*hidden argument*/NULL);
		GenericStack_t537 * L_3 = (__this->___layoutGroups_1);
		GUILayoutGroup_t542 * L_4 = (__this->___topLevel_0);
		NullCheck(L_3);
		VirtActionInvoker1< Object_t * >::Invoke(17 /* System.Void System.Collections.Stack::Push(System.Object) */, L_3, L_4);
		return;
	}
}
// UnityEngine.GUILayoutUtility
#include "UnityEngine_UnityEngine_GUILayoutUtility.h"
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_6.h"
// UnityEngine.GUILayoutEntry
#include "UnityEngine_UnityEngine_GUILayoutEntry.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_0.h"
// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Collections_Generic_List_1_gen_31.h"
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_6MethodDeclarations.h"
// UnityEngine.GUILayoutEntry
#include "UnityEngine_UnityEngine_GUILayoutEntryMethodDeclarations.h"
// UnityEngine.Screen
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Collections_Generic_List_1_gen_31MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_0MethodDeclarations.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyleMethodDeclarations.h"
// System.Void UnityEngine.GUILayoutUtility::.cctor()
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_6MethodDeclarations.h"
// UnityEngine.GUILayoutUtility/LayoutCache
#include "UnityEngine_UnityEngine_GUILayoutUtility_LayoutCacheMethodDeclarations.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
extern TypeInfo* Dictionary_2_t544_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutUtility_t543_il2cpp_TypeInfo_var;
extern TypeInfo* LayoutCache_t541_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3628_MethodInfo_var;
extern "C" void GUILayoutUtility__cctor_m3246 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t544_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(371);
		GUILayoutUtility_t543_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(366);
		LayoutCache_t541_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(370);
		Dictionary_2__ctor_m3628_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483980);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t544 * L_0 = (Dictionary_2_t544 *)il2cpp_codegen_object_new (Dictionary_2_t544_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3628(L_0, /*hidden argument*/Dictionary_2__ctor_m3628_MethodInfo_var);
		((GUILayoutUtility_t543_StaticFields*)GUILayoutUtility_t543_il2cpp_TypeInfo_var->static_fields)->___s_StoredLayouts_0 = L_0;
		Dictionary_2_t544 * L_1 = (Dictionary_2_t544 *)il2cpp_codegen_object_new (Dictionary_2_t544_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3628(L_1, /*hidden argument*/Dictionary_2__ctor_m3628_MethodInfo_var);
		((GUILayoutUtility_t543_StaticFields*)GUILayoutUtility_t543_il2cpp_TypeInfo_var->static_fields)->___s_StoredWindows_1 = L_1;
		LayoutCache_t541 * L_2 = (LayoutCache_t541 *)il2cpp_codegen_object_new (LayoutCache_t541_il2cpp_TypeInfo_var);
		LayoutCache__ctor_m3245(L_2, /*hidden argument*/NULL);
		((GUILayoutUtility_t543_StaticFields*)GUILayoutUtility_t543_il2cpp_TypeInfo_var->static_fields)->___current_2 = L_2;
		Rect_t18  L_3 = {0};
		Rect__ctor_m300(&L_3, (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		((GUILayoutUtility_t543_StaticFields*)GUILayoutUtility_t543_il2cpp_TypeInfo_var->static_fields)->___kDummyRect_3 = L_3;
		return;
	}
}
// UnityEngine.GUILayoutUtility/LayoutCache UnityEngine.GUILayoutUtility::SelectIDList(System.Int32,System.Boolean)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo* GUILayoutUtility_t543_il2cpp_TypeInfo_var;
extern TypeInfo* LayoutCache_t541_il2cpp_TypeInfo_var;
extern "C" LayoutCache_t541 * GUILayoutUtility_SelectIDList_m3247 (Object_t * __this /* static, unused */, int32_t ___instanceID, bool ___isWindow, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutUtility_t543_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(366);
		LayoutCache_t541_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(370);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t544 * V_0 = {0};
	LayoutCache_t541 * V_1 = {0};
	Dictionary_2_t544 * G_B3_0 = {0};
	{
		bool L_0 = ___isWindow;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t543_il2cpp_TypeInfo_var);
		Dictionary_2_t544 * L_1 = ((GUILayoutUtility_t543_StaticFields*)GUILayoutUtility_t543_il2cpp_TypeInfo_var->static_fields)->___s_StoredWindows_1;
		G_B3_0 = L_1;
		goto IL_0015;
	}

IL_0010:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t543_il2cpp_TypeInfo_var);
		Dictionary_2_t544 * L_2 = ((GUILayoutUtility_t543_StaticFields*)GUILayoutUtility_t543_il2cpp_TypeInfo_var->static_fields)->___s_StoredLayouts_0;
		G_B3_0 = L_2;
	}

IL_0015:
	{
		V_0 = G_B3_0;
		Dictionary_2_t544 * L_3 = V_0;
		int32_t L_4 = ___instanceID;
		NullCheck(L_3);
		bool L_5 = (bool)VirtFuncInvoker2< bool, int32_t, LayoutCache_t541 ** >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::TryGetValue(!0,!1&) */, L_3, L_4, (&V_1));
		if (L_5)
		{
			goto IL_0037;
		}
	}
	{
		LayoutCache_t541 * L_6 = (LayoutCache_t541 *)il2cpp_codegen_object_new (LayoutCache_t541_il2cpp_TypeInfo_var);
		LayoutCache__ctor_m3245(L_6, /*hidden argument*/NULL);
		V_1 = L_6;
		Dictionary_2_t544 * L_7 = V_0;
		int32_t L_8 = ___instanceID;
		LayoutCache_t541 * L_9 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< int32_t, LayoutCache_t541 * >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::set_Item(!0,!1) */, L_7, L_8, L_9);
		goto IL_0037;
	}

IL_0037:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t543_il2cpp_TypeInfo_var);
		LayoutCache_t541 * L_10 = ((GUILayoutUtility_t543_StaticFields*)GUILayoutUtility_t543_il2cpp_TypeInfo_var->static_fields)->___current_2;
		LayoutCache_t541 * L_11 = V_1;
		NullCheck(L_11);
		GUILayoutGroup_t542 * L_12 = (L_11->___topLevel_0);
		NullCheck(L_10);
		L_10->___topLevel_0 = L_12;
		LayoutCache_t541 * L_13 = ((GUILayoutUtility_t543_StaticFields*)GUILayoutUtility_t543_il2cpp_TypeInfo_var->static_fields)->___current_2;
		LayoutCache_t541 * L_14 = V_1;
		NullCheck(L_14);
		GenericStack_t537 * L_15 = (L_14->___layoutGroups_1);
		NullCheck(L_13);
		L_13->___layoutGroups_1 = L_15;
		LayoutCache_t541 * L_16 = ((GUILayoutUtility_t543_StaticFields*)GUILayoutUtility_t543_il2cpp_TypeInfo_var->static_fields)->___current_2;
		LayoutCache_t541 * L_17 = V_1;
		NullCheck(L_17);
		GUILayoutGroup_t542 * L_18 = (L_17->___windows_2);
		NullCheck(L_16);
		L_16->___windows_2 = L_18;
		LayoutCache_t541 * L_19 = V_1;
		return L_19;
	}
}
// System.Void UnityEngine.GUILayoutUtility::Begin(System.Int32)
// UnityEngine.GUILayoutUtility
#include "UnityEngine_UnityEngine_GUILayoutUtilityMethodDeclarations.h"
// UnityEngine.Event
#include "UnityEngine_UnityEngine_EventMethodDeclarations.h"
// UnityEngine.GUILayoutGroup
#include "UnityEngine_UnityEngine_GUILayoutGroupMethodDeclarations.h"
extern TypeInfo* GUILayoutUtility_t543_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutGroup_t542_il2cpp_TypeInfo_var;
extern "C" void GUILayoutUtility_Begin_m3248 (Object_t * __this /* static, unused */, int32_t ___instanceID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutUtility_t543_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(366);
		GUILayoutGroup_t542_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(369);
		s_Il2CppMethodIntialized = true;
	}
	LayoutCache_t541 * V_0 = {0};
	GUILayoutGroup_t542 * V_1 = {0};
	{
		int32_t L_0 = ___instanceID;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t543_il2cpp_TypeInfo_var);
		LayoutCache_t541 * L_1 = GUILayoutUtility_SelectIDList_m3247(NULL /*static, unused*/, L_0, 0, /*hidden argument*/NULL);
		V_0 = L_1;
		Event_t77 * L_2 = Event_get_current_m322(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = Event_get_type_m323(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)8))))
		{
			goto IL_0075;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t543_il2cpp_TypeInfo_var);
		LayoutCache_t541 * L_4 = ((GUILayoutUtility_t543_StaticFields*)GUILayoutUtility_t543_il2cpp_TypeInfo_var->static_fields)->___current_2;
		LayoutCache_t541 * L_5 = V_0;
		GUILayoutGroup_t542 * L_6 = (GUILayoutGroup_t542 *)il2cpp_codegen_object_new (GUILayoutGroup_t542_il2cpp_TypeInfo_var);
		GUILayoutGroup__ctor_m3270(L_6, /*hidden argument*/NULL);
		GUILayoutGroup_t542 * L_7 = L_6;
		V_1 = L_7;
		NullCheck(L_5);
		L_5->___topLevel_0 = L_7;
		GUILayoutGroup_t542 * L_8 = V_1;
		NullCheck(L_4);
		L_4->___topLevel_0 = L_8;
		LayoutCache_t541 * L_9 = ((GUILayoutUtility_t543_StaticFields*)GUILayoutUtility_t543_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_9);
		GenericStack_t537 * L_10 = (L_9->___layoutGroups_1);
		NullCheck(L_10);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Collections.Stack::Clear() */, L_10);
		LayoutCache_t541 * L_11 = ((GUILayoutUtility_t543_StaticFields*)GUILayoutUtility_t543_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_11);
		GenericStack_t537 * L_12 = (L_11->___layoutGroups_1);
		LayoutCache_t541 * L_13 = ((GUILayoutUtility_t543_StaticFields*)GUILayoutUtility_t543_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_13);
		GUILayoutGroup_t542 * L_14 = (L_13->___topLevel_0);
		NullCheck(L_12);
		VirtActionInvoker1< Object_t * >::Invoke(17 /* System.Void System.Collections.Stack::Push(System.Object) */, L_12, L_14);
		LayoutCache_t541 * L_15 = ((GUILayoutUtility_t543_StaticFields*)GUILayoutUtility_t543_il2cpp_TypeInfo_var->static_fields)->___current_2;
		LayoutCache_t541 * L_16 = V_0;
		GUILayoutGroup_t542 * L_17 = (GUILayoutGroup_t542 *)il2cpp_codegen_object_new (GUILayoutGroup_t542_il2cpp_TypeInfo_var);
		GUILayoutGroup__ctor_m3270(L_17, /*hidden argument*/NULL);
		GUILayoutGroup_t542 * L_18 = L_17;
		V_1 = L_18;
		NullCheck(L_16);
		L_16->___windows_2 = L_18;
		GUILayoutGroup_t542 * L_19 = V_1;
		NullCheck(L_15);
		L_15->___windows_2 = L_19;
		goto IL_00a5;
	}

IL_0075:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t543_il2cpp_TypeInfo_var);
		LayoutCache_t541 * L_20 = ((GUILayoutUtility_t543_StaticFields*)GUILayoutUtility_t543_il2cpp_TypeInfo_var->static_fields)->___current_2;
		LayoutCache_t541 * L_21 = V_0;
		NullCheck(L_21);
		GUILayoutGroup_t542 * L_22 = (L_21->___topLevel_0);
		NullCheck(L_20);
		L_20->___topLevel_0 = L_22;
		LayoutCache_t541 * L_23 = ((GUILayoutUtility_t543_StaticFields*)GUILayoutUtility_t543_il2cpp_TypeInfo_var->static_fields)->___current_2;
		LayoutCache_t541 * L_24 = V_0;
		NullCheck(L_24);
		GenericStack_t537 * L_25 = (L_24->___layoutGroups_1);
		NullCheck(L_23);
		L_23->___layoutGroups_1 = L_25;
		LayoutCache_t541 * L_26 = ((GUILayoutUtility_t543_StaticFields*)GUILayoutUtility_t543_il2cpp_TypeInfo_var->static_fields)->___current_2;
		LayoutCache_t541 * L_27 = V_0;
		NullCheck(L_27);
		GUILayoutGroup_t542 * L_28 = (L_27->___windows_2);
		NullCheck(L_26);
		L_26->___windows_2 = L_28;
	}

IL_00a5:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::BeginWindow(System.Int32,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyle.h"
#include "UnityEngine_ArrayTypes.h"
// UnityEngine.GUILayoutEntry
#include "UnityEngine_UnityEngine_GUILayoutEntryMethodDeclarations.h"
extern TypeInfo* GUILayoutUtility_t543_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutGroup_t542_il2cpp_TypeInfo_var;
extern "C" void GUILayoutUtility_BeginWindow_m3249 (Object_t * __this /* static, unused */, int32_t ___windowID, GUIStyle_t545 * ___style, GUILayoutOptionU5BU5D_t644* ___options, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutUtility_t543_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(366);
		GUILayoutGroup_t542_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(369);
		s_Il2CppMethodIntialized = true;
	}
	LayoutCache_t541 * V_0 = {0};
	GUILayoutGroup_t542 * V_1 = {0};
	{
		int32_t L_0 = ___windowID;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t543_il2cpp_TypeInfo_var);
		LayoutCache_t541 * L_1 = GUILayoutUtility_SelectIDList_m3247(NULL /*static, unused*/, L_0, 1, /*hidden argument*/NULL);
		V_0 = L_1;
		Event_t77 * L_2 = Event_get_current_m322(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = Event_get_type_m323(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)8))))
		{
			goto IL_00ab;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t543_il2cpp_TypeInfo_var);
		LayoutCache_t541 * L_4 = ((GUILayoutUtility_t543_StaticFields*)GUILayoutUtility_t543_il2cpp_TypeInfo_var->static_fields)->___current_2;
		LayoutCache_t541 * L_5 = V_0;
		GUILayoutGroup_t542 * L_6 = (GUILayoutGroup_t542 *)il2cpp_codegen_object_new (GUILayoutGroup_t542_il2cpp_TypeInfo_var);
		GUILayoutGroup__ctor_m3270(L_6, /*hidden argument*/NULL);
		GUILayoutGroup_t542 * L_7 = L_6;
		V_1 = L_7;
		NullCheck(L_5);
		L_5->___topLevel_0 = L_7;
		GUILayoutGroup_t542 * L_8 = V_1;
		NullCheck(L_4);
		L_4->___topLevel_0 = L_8;
		LayoutCache_t541 * L_9 = ((GUILayoutUtility_t543_StaticFields*)GUILayoutUtility_t543_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_9);
		GUILayoutGroup_t542 * L_10 = (L_9->___topLevel_0);
		GUIStyle_t545 * L_11 = ___style;
		NullCheck(L_10);
		GUILayoutEntry_set_style_m3261(L_10, L_11, /*hidden argument*/NULL);
		LayoutCache_t541 * L_12 = ((GUILayoutUtility_t543_StaticFields*)GUILayoutUtility_t543_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_12);
		GUILayoutGroup_t542 * L_13 = (L_12->___topLevel_0);
		int32_t L_14 = ___windowID;
		NullCheck(L_13);
		L_13->___windowID_16 = L_14;
		GUILayoutOptionU5BU5D_t644* L_15 = ___options;
		if (!L_15)
		{
			goto IL_0066;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t543_il2cpp_TypeInfo_var);
		LayoutCache_t541 * L_16 = ((GUILayoutUtility_t543_StaticFields*)GUILayoutUtility_t543_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_16);
		GUILayoutGroup_t542 * L_17 = (L_16->___topLevel_0);
		GUILayoutOptionU5BU5D_t644* L_18 = ___options;
		NullCheck(L_17);
		VirtActionInvoker1< GUILayoutOptionU5BU5D_t644* >::Invoke(10 /* System.Void UnityEngine.GUILayoutGroup::ApplyOptions(UnityEngine.GUILayoutOption[]) */, L_17, L_18);
	}

IL_0066:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t543_il2cpp_TypeInfo_var);
		LayoutCache_t541 * L_19 = ((GUILayoutUtility_t543_StaticFields*)GUILayoutUtility_t543_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_19);
		GenericStack_t537 * L_20 = (L_19->___layoutGroups_1);
		NullCheck(L_20);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Collections.Stack::Clear() */, L_20);
		LayoutCache_t541 * L_21 = ((GUILayoutUtility_t543_StaticFields*)GUILayoutUtility_t543_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_21);
		GenericStack_t537 * L_22 = (L_21->___layoutGroups_1);
		LayoutCache_t541 * L_23 = ((GUILayoutUtility_t543_StaticFields*)GUILayoutUtility_t543_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_23);
		GUILayoutGroup_t542 * L_24 = (L_23->___topLevel_0);
		NullCheck(L_22);
		VirtActionInvoker1< Object_t * >::Invoke(17 /* System.Void System.Collections.Stack::Push(System.Object) */, L_22, L_24);
		LayoutCache_t541 * L_25 = ((GUILayoutUtility_t543_StaticFields*)GUILayoutUtility_t543_il2cpp_TypeInfo_var->static_fields)->___current_2;
		LayoutCache_t541 * L_26 = V_0;
		GUILayoutGroup_t542 * L_27 = (GUILayoutGroup_t542 *)il2cpp_codegen_object_new (GUILayoutGroup_t542_il2cpp_TypeInfo_var);
		GUILayoutGroup__ctor_m3270(L_27, /*hidden argument*/NULL);
		GUILayoutGroup_t542 * L_28 = L_27;
		V_1 = L_28;
		NullCheck(L_26);
		L_26->___windows_2 = L_28;
		GUILayoutGroup_t542 * L_29 = V_1;
		NullCheck(L_25);
		L_25->___windows_2 = L_29;
		goto IL_00db;
	}

IL_00ab:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t543_il2cpp_TypeInfo_var);
		LayoutCache_t541 * L_30 = ((GUILayoutUtility_t543_StaticFields*)GUILayoutUtility_t543_il2cpp_TypeInfo_var->static_fields)->___current_2;
		LayoutCache_t541 * L_31 = V_0;
		NullCheck(L_31);
		GUILayoutGroup_t542 * L_32 = (L_31->___topLevel_0);
		NullCheck(L_30);
		L_30->___topLevel_0 = L_32;
		LayoutCache_t541 * L_33 = ((GUILayoutUtility_t543_StaticFields*)GUILayoutUtility_t543_il2cpp_TypeInfo_var->static_fields)->___current_2;
		LayoutCache_t541 * L_34 = V_0;
		NullCheck(L_34);
		GenericStack_t537 * L_35 = (L_34->___layoutGroups_1);
		NullCheck(L_33);
		L_33->___layoutGroups_1 = L_35;
		LayoutCache_t541 * L_36 = ((GUILayoutUtility_t543_StaticFields*)GUILayoutUtility_t543_il2cpp_TypeInfo_var->static_fields)->___current_2;
		LayoutCache_t541 * L_37 = V_0;
		NullCheck(L_37);
		GUILayoutGroup_t542 * L_38 = (L_37->___windows_2);
		NullCheck(L_36);
		L_36->___windows_2 = L_38;
	}

IL_00db:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::Layout()
// UnityEngine.Screen
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"
// UnityEngine.GUIUtility
#include "UnityEngine_UnityEngine_GUIUtilityMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
extern TypeInfo* GUILayoutUtility_t543_il2cpp_TypeInfo_var;
extern TypeInfo* GUIUtility_t388_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t69_il2cpp_TypeInfo_var;
extern "C" void GUILayoutUtility_Layout_m3250 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutUtility_t543_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(366);
		GUIUtility_t388_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(227);
		Mathf_t69_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t543_il2cpp_TypeInfo_var);
		LayoutCache_t541 * L_0 = ((GUILayoutUtility_t543_StaticFields*)GUILayoutUtility_t543_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_0);
		GUILayoutGroup_t542 * L_1 = (L_0->___topLevel_0);
		NullCheck(L_1);
		int32_t L_2 = (L_1->___windowID_16);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_00af;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t543_il2cpp_TypeInfo_var);
		LayoutCache_t541 * L_3 = ((GUILayoutUtility_t543_StaticFields*)GUILayoutUtility_t543_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_3);
		GUILayoutGroup_t542 * L_4 = (L_3->___topLevel_0);
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(5 /* System.Void UnityEngine.GUILayoutGroup::CalcWidth() */, L_4);
		LayoutCache_t541 * L_5 = ((GUILayoutUtility_t543_StaticFields*)GUILayoutUtility_t543_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_5);
		GUILayoutGroup_t542 * L_6 = (L_5->___topLevel_0);
		int32_t L_7 = Screen_get_width_m316(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t388_il2cpp_TypeInfo_var);
		float L_8 = GUIUtility_get_pixelsPerPoint_m3386(NULL /*static, unused*/, /*hidden argument*/NULL);
		LayoutCache_t541 * L_9 = ((GUILayoutUtility_t543_StaticFields*)GUILayoutUtility_t543_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_9);
		GUILayoutGroup_t542 * L_10 = (L_9->___topLevel_0);
		NullCheck(L_10);
		float L_11 = (((GUILayoutEntry_t546 *)L_10)->___maxWidth_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t69_il2cpp_TypeInfo_var);
		float L_12 = Mathf_Min_m2376(NULL /*static, unused*/, ((float)((float)(((float)L_7))/(float)L_8)), L_11, /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtActionInvoker2< float, float >::Invoke(7 /* System.Void UnityEngine.GUILayoutGroup::SetHorizontal(System.Single,System.Single) */, L_6, (0.0f), L_12);
		LayoutCache_t541 * L_13 = ((GUILayoutUtility_t543_StaticFields*)GUILayoutUtility_t543_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_13);
		GUILayoutGroup_t542 * L_14 = (L_13->___topLevel_0);
		NullCheck(L_14);
		VirtActionInvoker0::Invoke(6 /* System.Void UnityEngine.GUILayoutGroup::CalcHeight() */, L_14);
		LayoutCache_t541 * L_15 = ((GUILayoutUtility_t543_StaticFields*)GUILayoutUtility_t543_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_15);
		GUILayoutGroup_t542 * L_16 = (L_15->___topLevel_0);
		int32_t L_17 = Screen_get_height_m318(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_18 = GUIUtility_get_pixelsPerPoint_m3386(NULL /*static, unused*/, /*hidden argument*/NULL);
		LayoutCache_t541 * L_19 = ((GUILayoutUtility_t543_StaticFields*)GUILayoutUtility_t543_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_19);
		GUILayoutGroup_t542 * L_20 = (L_19->___topLevel_0);
		NullCheck(L_20);
		float L_21 = (((GUILayoutEntry_t546 *)L_20)->___maxHeight_3);
		float L_22 = Mathf_Min_m2376(NULL /*static, unused*/, ((float)((float)(((float)L_17))/(float)L_18)), L_21, /*hidden argument*/NULL);
		NullCheck(L_16);
		VirtActionInvoker2< float, float >::Invoke(8 /* System.Void UnityEngine.GUILayoutGroup::SetVertical(System.Single,System.Single) */, L_16, (0.0f), L_22);
		LayoutCache_t541 * L_23 = ((GUILayoutUtility_t543_StaticFields*)GUILayoutUtility_t543_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_23);
		GUILayoutGroup_t542 * L_24 = (L_23->___windows_2);
		GUILayoutUtility_LayoutFreeGroup_m3252(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		goto IL_00cd;
	}

IL_00af:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t543_il2cpp_TypeInfo_var);
		LayoutCache_t541 * L_25 = ((GUILayoutUtility_t543_StaticFields*)GUILayoutUtility_t543_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_25);
		GUILayoutGroup_t542 * L_26 = (L_25->___topLevel_0);
		GUILayoutUtility_LayoutSingleGroup_m3253(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		LayoutCache_t541 * L_27 = ((GUILayoutUtility_t543_StaticFields*)GUILayoutUtility_t543_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_27);
		GUILayoutGroup_t542 * L_28 = (L_27->___windows_2);
		GUILayoutUtility_LayoutFreeGroup_m3252(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
	}

IL_00cd:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::LayoutFromEditorWindow()
extern TypeInfo* GUILayoutUtility_t543_il2cpp_TypeInfo_var;
extern TypeInfo* GUIUtility_t388_il2cpp_TypeInfo_var;
extern "C" void GUILayoutUtility_LayoutFromEditorWindow_m3251 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutUtility_t543_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(366);
		GUIUtility_t388_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(227);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t543_il2cpp_TypeInfo_var);
		LayoutCache_t541 * L_0 = ((GUILayoutUtility_t543_StaticFields*)GUILayoutUtility_t543_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_0);
		GUILayoutGroup_t542 * L_1 = (L_0->___topLevel_0);
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(5 /* System.Void UnityEngine.GUILayoutGroup::CalcWidth() */, L_1);
		LayoutCache_t541 * L_2 = ((GUILayoutUtility_t543_StaticFields*)GUILayoutUtility_t543_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_2);
		GUILayoutGroup_t542 * L_3 = (L_2->___topLevel_0);
		int32_t L_4 = Screen_get_width_m316(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t388_il2cpp_TypeInfo_var);
		float L_5 = GUIUtility_get_pixelsPerPoint_m3386(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker2< float, float >::Invoke(7 /* System.Void UnityEngine.GUILayoutGroup::SetHorizontal(System.Single,System.Single) */, L_3, (0.0f), ((float)((float)(((float)L_4))/(float)L_5)));
		LayoutCache_t541 * L_6 = ((GUILayoutUtility_t543_StaticFields*)GUILayoutUtility_t543_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_6);
		GUILayoutGroup_t542 * L_7 = (L_6->___topLevel_0);
		NullCheck(L_7);
		VirtActionInvoker0::Invoke(6 /* System.Void UnityEngine.GUILayoutGroup::CalcHeight() */, L_7);
		LayoutCache_t541 * L_8 = ((GUILayoutUtility_t543_StaticFields*)GUILayoutUtility_t543_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_8);
		GUILayoutGroup_t542 * L_9 = (L_8->___topLevel_0);
		int32_t L_10 = Screen_get_height_m318(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_11 = GUIUtility_get_pixelsPerPoint_m3386(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_9);
		VirtActionInvoker2< float, float >::Invoke(8 /* System.Void UnityEngine.GUILayoutGroup::SetVertical(System.Single,System.Single) */, L_9, (0.0f), ((float)((float)(((float)L_10))/(float)L_11)));
		LayoutCache_t541 * L_12 = ((GUILayoutUtility_t543_StaticFields*)GUILayoutUtility_t543_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_12);
		GUILayoutGroup_t542 * L_13 = (L_12->___windows_2);
		GUILayoutUtility_LayoutFreeGroup_m3252(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::LayoutFreeGroup(UnityEngine.GUILayoutGroup)
// UnityEngine.GUILayoutGroup
#include "UnityEngine_UnityEngine_GUILayoutGroup.h"
// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Collections_Generic_List_1_gen_31MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_0MethodDeclarations.h"
extern TypeInfo* GUILayoutGroup_t542_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutUtility_t543_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t661_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t359_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m3629_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3630_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3631_MethodInfo_var;
extern "C" void GUILayoutUtility_LayoutFreeGroup_m3252 (Object_t * __this /* static, unused */, GUILayoutGroup_t542 * ___toplevel, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutGroup_t542_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(369);
		GUILayoutUtility_t543_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(366);
		Enumerator_t661_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(373);
		IDisposable_t359_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(124);
		List_1_GetEnumerator_m3629_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483981);
		Enumerator_get_Current_m3630_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483982);
		Enumerator_MoveNext_m3631_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483983);
		s_Il2CppMethodIntialized = true;
	}
	GUILayoutGroup_t542 * V_0 = {0};
	Enumerator_t661  V_1 = {0};
	Exception_t108 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t108 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		GUILayoutGroup_t542 * L_0 = ___toplevel;
		NullCheck(L_0);
		List_1_t547 * L_1 = (L_0->___entries_10);
		NullCheck(L_1);
		Enumerator_t661  L_2 = List_1_GetEnumerator_m3629(L_1, /*hidden argument*/List_1_GetEnumerator_m3629_MethodInfo_var);
		V_1 = L_2;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0024;
		}

IL_0011:
		{
			GUILayoutEntry_t546 * L_3 = Enumerator_get_Current_m3630((&V_1), /*hidden argument*/Enumerator_get_Current_m3630_MethodInfo_var);
			V_0 = ((GUILayoutGroup_t542 *)CastclassClass(L_3, GUILayoutGroup_t542_il2cpp_TypeInfo_var));
			GUILayoutGroup_t542 * L_4 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t543_il2cpp_TypeInfo_var);
			GUILayoutUtility_LayoutSingleGroup_m3253(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		}

IL_0024:
		{
			bool L_5 = Enumerator_MoveNext_m3631((&V_1), /*hidden argument*/Enumerator_MoveNext_m3631_MethodInfo_var);
			if (L_5)
			{
				goto IL_0011;
			}
		}

IL_0030:
		{
			IL2CPP_LEAVE(0x41, FINALLY_0035);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t108 *)e.ex;
		goto FINALLY_0035;
	}

FINALLY_0035:
	{ // begin finally (depth: 1)
		Enumerator_t661  L_6 = V_1;
		Enumerator_t661  L_7 = L_6;
		Object_t * L_8 = Box(Enumerator_t661_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_8);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t359_il2cpp_TypeInfo_var, L_8);
		IL2CPP_END_FINALLY(53)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(53)
	{
		IL2CPP_JUMP_TBL(0x41, IL_0041)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t108 *)
	}

IL_0041:
	{
		GUILayoutGroup_t542 * L_9 = ___toplevel;
		NullCheck(L_9);
		GUILayoutGroup_ResetCursor_m3274(L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::LayoutSingleGroup(UnityEngine.GUILayoutGroup)
extern TypeInfo* Mathf_t69_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutUtility_t543_il2cpp_TypeInfo_var;
extern "C" void GUILayoutUtility_LayoutSingleGroup_m3253 (Object_t * __this /* static, unused */, GUILayoutGroup_t542 * ___i, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t69_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		GUILayoutUtility_t543_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(366);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Rect_t18  V_4 = {0};
	{
		GUILayoutGroup_t542 * L_0 = ___i;
		NullCheck(L_0);
		bool L_1 = (L_0->___isWindow_15);
		if (L_1)
		{
			goto IL_0074;
		}
	}
	{
		GUILayoutGroup_t542 * L_2 = ___i;
		NullCheck(L_2);
		float L_3 = (((GUILayoutEntry_t546 *)L_2)->___minWidth_0);
		V_0 = L_3;
		GUILayoutGroup_t542 * L_4 = ___i;
		NullCheck(L_4);
		float L_5 = (((GUILayoutEntry_t546 *)L_4)->___maxWidth_1);
		V_1 = L_5;
		GUILayoutGroup_t542 * L_6 = ___i;
		NullCheck(L_6);
		VirtActionInvoker0::Invoke(5 /* System.Void UnityEngine.GUILayoutGroup::CalcWidth() */, L_6);
		GUILayoutGroup_t542 * L_7 = ___i;
		GUILayoutGroup_t542 * L_8 = ___i;
		NullCheck(L_8);
		Rect_t18 * L_9 = &(((GUILayoutEntry_t546 *)L_8)->___rect_4);
		float L_10 = Rect_get_x_m420(L_9, /*hidden argument*/NULL);
		GUILayoutGroup_t542 * L_11 = ___i;
		NullCheck(L_11);
		float L_12 = (((GUILayoutEntry_t546 *)L_11)->___maxWidth_1);
		float L_13 = V_0;
		float L_14 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t69_il2cpp_TypeInfo_var);
		float L_15 = Mathf_Clamp_m292(NULL /*static, unused*/, L_12, L_13, L_14, /*hidden argument*/NULL);
		NullCheck(L_7);
		VirtActionInvoker2< float, float >::Invoke(7 /* System.Void UnityEngine.GUILayoutGroup::SetHorizontal(System.Single,System.Single) */, L_7, L_10, L_15);
		GUILayoutGroup_t542 * L_16 = ___i;
		NullCheck(L_16);
		float L_17 = (((GUILayoutEntry_t546 *)L_16)->___minHeight_2);
		V_2 = L_17;
		GUILayoutGroup_t542 * L_18 = ___i;
		NullCheck(L_18);
		float L_19 = (((GUILayoutEntry_t546 *)L_18)->___maxHeight_3);
		V_3 = L_19;
		GUILayoutGroup_t542 * L_20 = ___i;
		NullCheck(L_20);
		VirtActionInvoker0::Invoke(6 /* System.Void UnityEngine.GUILayoutGroup::CalcHeight() */, L_20);
		GUILayoutGroup_t542 * L_21 = ___i;
		GUILayoutGroup_t542 * L_22 = ___i;
		NullCheck(L_22);
		Rect_t18 * L_23 = &(((GUILayoutEntry_t546 *)L_22)->___rect_4);
		float L_24 = Rect_get_y_m424(L_23, /*hidden argument*/NULL);
		GUILayoutGroup_t542 * L_25 = ___i;
		NullCheck(L_25);
		float L_26 = (((GUILayoutEntry_t546 *)L_25)->___maxHeight_3);
		float L_27 = V_2;
		float L_28 = V_3;
		float L_29 = Mathf_Clamp_m292(NULL /*static, unused*/, L_26, L_27, L_28, /*hidden argument*/NULL);
		NullCheck(L_21);
		VirtActionInvoker2< float, float >::Invoke(8 /* System.Void UnityEngine.GUILayoutGroup::SetVertical(System.Single,System.Single) */, L_21, L_24, L_29);
		goto IL_00e8;
	}

IL_0074:
	{
		GUILayoutGroup_t542 * L_30 = ___i;
		NullCheck(L_30);
		VirtActionInvoker0::Invoke(5 /* System.Void UnityEngine.GUILayoutGroup::CalcWidth() */, L_30);
		GUILayoutGroup_t542 * L_31 = ___i;
		NullCheck(L_31);
		int32_t L_32 = (L_31->___windowID_16);
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t543_il2cpp_TypeInfo_var);
		Rect_t18  L_33 = GUILayoutUtility_Internal_GetWindowRect_m3255(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
		V_4 = L_33;
		GUILayoutGroup_t542 * L_34 = ___i;
		float L_35 = Rect_get_x_m420((&V_4), /*hidden argument*/NULL);
		float L_36 = Rect_get_width_m334((&V_4), /*hidden argument*/NULL);
		GUILayoutGroup_t542 * L_37 = ___i;
		NullCheck(L_37);
		float L_38 = (((GUILayoutEntry_t546 *)L_37)->___minWidth_0);
		GUILayoutGroup_t542 * L_39 = ___i;
		NullCheck(L_39);
		float L_40 = (((GUILayoutEntry_t546 *)L_39)->___maxWidth_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t69_il2cpp_TypeInfo_var);
		float L_41 = Mathf_Clamp_m292(NULL /*static, unused*/, L_36, L_38, L_40, /*hidden argument*/NULL);
		NullCheck(L_34);
		VirtActionInvoker2< float, float >::Invoke(7 /* System.Void UnityEngine.GUILayoutGroup::SetHorizontal(System.Single,System.Single) */, L_34, L_35, L_41);
		GUILayoutGroup_t542 * L_42 = ___i;
		NullCheck(L_42);
		VirtActionInvoker0::Invoke(6 /* System.Void UnityEngine.GUILayoutGroup::CalcHeight() */, L_42);
		GUILayoutGroup_t542 * L_43 = ___i;
		float L_44 = Rect_get_y_m424((&V_4), /*hidden argument*/NULL);
		float L_45 = Rect_get_height_m336((&V_4), /*hidden argument*/NULL);
		GUILayoutGroup_t542 * L_46 = ___i;
		NullCheck(L_46);
		float L_47 = (((GUILayoutEntry_t546 *)L_46)->___minHeight_2);
		GUILayoutGroup_t542 * L_48 = ___i;
		NullCheck(L_48);
		float L_49 = (((GUILayoutEntry_t546 *)L_48)->___maxHeight_3);
		float L_50 = Mathf_Clamp_m292(NULL /*static, unused*/, L_45, L_47, L_49, /*hidden argument*/NULL);
		NullCheck(L_43);
		VirtActionInvoker2< float, float >::Invoke(8 /* System.Void UnityEngine.GUILayoutGroup::SetVertical(System.Single,System.Single) */, L_43, L_44, L_50);
		GUILayoutGroup_t542 * L_51 = ___i;
		NullCheck(L_51);
		int32_t L_52 = (L_51->___windowID_16);
		GUILayoutGroup_t542 * L_53 = ___i;
		NullCheck(L_53);
		Rect_t18  L_54 = (((GUILayoutEntry_t546 *)L_53)->___rect_4);
		GUILayoutUtility_Internal_MoveWindow_m3256(NULL /*static, unused*/, L_52, L_54, /*hidden argument*/NULL);
	}

IL_00e8:
	{
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUILayoutUtility::get_spaceStyle()
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyleMethodDeclarations.h"
extern TypeInfo* GUILayoutUtility_t543_il2cpp_TypeInfo_var;
extern TypeInfo* GUIStyle_t545_il2cpp_TypeInfo_var;
extern "C" GUIStyle_t545 * GUILayoutUtility_get_spaceStyle_m3254 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutUtility_t543_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(366);
		GUIStyle_t545_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t543_il2cpp_TypeInfo_var);
		GUIStyle_t545 * L_0 = ((GUILayoutUtility_t543_StaticFields*)GUILayoutUtility_t543_il2cpp_TypeInfo_var->static_fields)->___s_SpaceStyle_4;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		GUIStyle_t545 * L_1 = (GUIStyle_t545 *)il2cpp_codegen_object_new (GUIStyle_t545_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m3364(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t543_il2cpp_TypeInfo_var);
		((GUILayoutUtility_t543_StaticFields*)GUILayoutUtility_t543_il2cpp_TypeInfo_var->static_fields)->___s_SpaceStyle_4 = L_1;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t543_il2cpp_TypeInfo_var);
		GUIStyle_t545 * L_2 = ((GUILayoutUtility_t543_StaticFields*)GUILayoutUtility_t543_il2cpp_TypeInfo_var->static_fields)->___s_SpaceStyle_4;
		NullCheck(L_2);
		GUIStyle_set_stretchWidth_m3381(L_2, 0, /*hidden argument*/NULL);
		GUIStyle_t545 * L_3 = ((GUILayoutUtility_t543_StaticFields*)GUILayoutUtility_t543_il2cpp_TypeInfo_var->static_fields)->___s_SpaceStyle_4;
		return L_3;
	}
}
// UnityEngine.Rect UnityEngine.GUILayoutUtility::Internal_GetWindowRect(System.Int32)
extern "C" Rect_t18  GUILayoutUtility_Internal_GetWindowRect_m3255 (Object_t * __this /* static, unused */, int32_t ___windowID, const MethodInfo* method)
{
	typedef Rect_t18  (*GUILayoutUtility_Internal_GetWindowRect_m3255_ftn) (int32_t);
	static GUILayoutUtility_Internal_GetWindowRect_m3255_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUILayoutUtility_Internal_GetWindowRect_m3255_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUILayoutUtility::Internal_GetWindowRect(System.Int32)");
	return _il2cpp_icall_func(___windowID);
}
// System.Void UnityEngine.GUILayoutUtility::Internal_MoveWindow(System.Int32,UnityEngine.Rect)
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
extern TypeInfo* GUILayoutUtility_t543_il2cpp_TypeInfo_var;
extern "C" void GUILayoutUtility_Internal_MoveWindow_m3256 (Object_t * __this /* static, unused */, int32_t ___windowID, Rect_t18  ___r, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutUtility_t543_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(366);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___windowID;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t543_il2cpp_TypeInfo_var);
		GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m3257(NULL /*static, unused*/, L_0, (&___r), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::INTERNAL_CALL_Internal_MoveWindow(System.Int32,UnityEngine.Rect&)
extern "C" void GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m3257 (Object_t * __this /* static, unused */, int32_t ___windowID, Rect_t18 * ___r, const MethodInfo* method)
{
	typedef void (*GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m3257_ftn) (int32_t, Rect_t18 *);
	static GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m3257_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m3257_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUILayoutUtility::INTERNAL_CALL_Internal_MoveWindow(System.Int32,UnityEngine.Rect&)");
	_il2cpp_icall_func(___windowID, ___r);
}
// UnityEngine.RectOffset
#include "UnityEngine_UnityEngine_RectOffset.h"
// System.Void UnityEngine.GUILayoutEntry::.ctor(System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle)
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyle.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyleMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// UnityEngine.GUILayoutEntry
#include "UnityEngine_UnityEngine_GUILayoutEntryMethodDeclarations.h"
extern TypeInfo* GUIStyle_t545_il2cpp_TypeInfo_var;
extern "C" void GUILayoutEntry__ctor_m3258 (GUILayoutEntry_t546 * __this, float ____minWidth, float ____maxWidth, float ____minHeight, float ____maxHeight, GUIStyle_t545 * ____style, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIStyle_t545_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		s_Il2CppMethodIntialized = true;
	}
	{
		Rect_t18  L_0 = {0};
		Rect__ctor_m300(&L_0, (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___rect_4 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t545_il2cpp_TypeInfo_var);
		GUIStyle_t545 * L_1 = GUIStyle_get_none_m3370(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___m_Style_7 = L_1;
		Object__ctor_m355(__this, /*hidden argument*/NULL);
		float L_2 = ____minWidth;
		__this->___minWidth_0 = L_2;
		float L_3 = ____maxWidth;
		__this->___maxWidth_1 = L_3;
		float L_4 = ____minHeight;
		__this->___minHeight_2 = L_4;
		float L_5 = ____maxHeight;
		__this->___maxHeight_3 = L_5;
		GUIStyle_t545 * L_6 = ____style;
		if (L_6)
		{
			goto IL_005b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t545_il2cpp_TypeInfo_var);
		GUIStyle_t545 * L_7 = GUIStyle_get_none_m3370(NULL /*static, unused*/, /*hidden argument*/NULL);
		____style = L_7;
	}

IL_005b:
	{
		GUIStyle_t545 * L_8 = ____style;
		GUILayoutEntry_set_style_m3261(__this, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUILayoutEntry::.cctor()
extern TypeInfo* GUILayoutEntry_t546_il2cpp_TypeInfo_var;
extern "C" void GUILayoutEntry__cctor_m3259 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutEntry_t546_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(372);
		s_Il2CppMethodIntialized = true;
	}
	{
		Rect_t18  L_0 = {0};
		Rect__ctor_m300(&L_0, (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		((GUILayoutEntry_t546_StaticFields*)GUILayoutEntry_t546_il2cpp_TypeInfo_var->static_fields)->___kDummyRect_8 = L_0;
		((GUILayoutEntry_t546_StaticFields*)GUILayoutEntry_t546_il2cpp_TypeInfo_var->static_fields)->___indent_9 = 0;
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUILayoutEntry::get_style()
extern "C" GUIStyle_t545 * GUILayoutEntry_get_style_m3260 (GUILayoutEntry_t546 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t545 * L_0 = (__this->___m_Style_7);
		return L_0;
	}
}
// System.Void UnityEngine.GUILayoutEntry::set_style(UnityEngine.GUIStyle)
extern "C" void GUILayoutEntry_set_style_m3261 (GUILayoutEntry_t546 * __this, GUIStyle_t545 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t545 * L_0 = ___value;
		__this->___m_Style_7 = L_0;
		GUIStyle_t545 * L_1 = ___value;
		VirtActionInvoker1< GUIStyle_t545 * >::Invoke(9 /* System.Void UnityEngine.GUILayoutEntry::ApplyStyleSettings(UnityEngine.GUIStyle) */, __this, L_1);
		return;
	}
}
// UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin()
extern "C" RectOffset_t304 * GUILayoutEntry_get_margin_m3262 (GUILayoutEntry_t546 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t545 * L_0 = GUILayoutEntry_get_style_m3260(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RectOffset_t304 * L_1 = GUIStyle_get_margin_m3368(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.GUILayoutEntry::CalcWidth()
extern "C" void GUILayoutEntry_CalcWidth_m3263 (GUILayoutEntry_t546 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutEntry::CalcHeight()
extern "C" void GUILayoutEntry_CalcHeight_m3264 (GUILayoutEntry_t546 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single)
extern "C" void GUILayoutEntry_SetHorizontal_m3265 (GUILayoutEntry_t546 * __this, float ___x, float ___width, const MethodInfo* method)
{
	{
		Rect_t18 * L_0 = &(__this->___rect_4);
		float L_1 = ___x;
		Rect_set_x_m421(L_0, L_1, /*hidden argument*/NULL);
		Rect_t18 * L_2 = &(__this->___rect_4);
		float L_3 = ___width;
		Rect_set_width_m422(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single)
extern "C" void GUILayoutEntry_SetVertical_m3266 (GUILayoutEntry_t546 * __this, float ___y, float ___height, const MethodInfo* method)
{
	{
		Rect_t18 * L_0 = &(__this->___rect_4);
		float L_1 = ___y;
		Rect_set_y_m425(L_0, L_1, /*hidden argument*/NULL);
		Rect_t18 * L_2 = &(__this->___rect_4);
		float L_3 = ___height;
		Rect_set_height_m423(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUILayoutEntry::ApplyStyleSettings(UnityEngine.GUIStyle)
extern "C" void GUILayoutEntry_ApplyStyleSettings_m3267 (GUILayoutEntry_t546 * __this, GUIStyle_t545 * ___style, const MethodInfo* method)
{
	GUILayoutEntry_t546 * G_B3_0 = {0};
	GUILayoutEntry_t546 * G_B1_0 = {0};
	GUILayoutEntry_t546 * G_B2_0 = {0};
	int32_t G_B4_0 = 0;
	GUILayoutEntry_t546 * G_B4_1 = {0};
	GUILayoutEntry_t546 * G_B7_0 = {0};
	GUILayoutEntry_t546 * G_B5_0 = {0};
	GUILayoutEntry_t546 * G_B6_0 = {0};
	int32_t G_B8_0 = 0;
	GUILayoutEntry_t546 * G_B8_1 = {0};
	{
		GUIStyle_t545 * L_0 = ___style;
		NullCheck(L_0);
		float L_1 = GUIStyle_get_fixedWidth_m3378(L_0, /*hidden argument*/NULL);
		G_B1_0 = __this;
		if ((!(((float)L_1) == ((float)(0.0f)))))
		{
			G_B3_0 = __this;
			goto IL_0022;
		}
	}
	{
		GUIStyle_t545 * L_2 = ___style;
		NullCheck(L_2);
		bool L_3 = GUIStyle_get_stretchWidth_m3380(L_2, /*hidden argument*/NULL);
		G_B2_0 = G_B1_0;
		if (!L_3)
		{
			G_B3_0 = G_B1_0;
			goto IL_0022;
		}
	}
	{
		G_B4_0 = 1;
		G_B4_1 = G_B2_0;
		goto IL_0023;
	}

IL_0022:
	{
		G_B4_0 = 0;
		G_B4_1 = G_B3_0;
	}

IL_0023:
	{
		NullCheck(G_B4_1);
		G_B4_1->___stretchWidth_5 = G_B4_0;
		GUIStyle_t545 * L_4 = ___style;
		NullCheck(L_4);
		float L_5 = GUIStyle_get_fixedHeight_m3379(L_4, /*hidden argument*/NULL);
		G_B5_0 = __this;
		if ((!(((float)L_5) == ((float)(0.0f)))))
		{
			G_B7_0 = __this;
			goto IL_004a;
		}
	}
	{
		GUIStyle_t545 * L_6 = ___style;
		NullCheck(L_6);
		bool L_7 = GUIStyle_get_stretchHeight_m3382(L_6, /*hidden argument*/NULL);
		G_B6_0 = G_B5_0;
		if (!L_7)
		{
			G_B7_0 = G_B5_0;
			goto IL_004a;
		}
	}
	{
		G_B8_0 = 1;
		G_B8_1 = G_B6_0;
		goto IL_004b;
	}

IL_004a:
	{
		G_B8_0 = 0;
		G_B8_1 = G_B7_0;
	}

IL_004b:
	{
		NullCheck(G_B8_1);
		G_B8_1->___stretchHeight_6 = G_B8_0;
		GUIStyle_t545 * L_8 = ___style;
		__this->___m_Style_7 = L_8;
		return;
	}
}
// System.Void UnityEngine.GUILayoutEntry::ApplyOptions(UnityEngine.GUILayoutOption[])
#include "UnityEngine_ArrayTypes.h"
extern TypeInfo* Single_t355_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t106_il2cpp_TypeInfo_var;
extern "C" void GUILayoutEntry_ApplyOptions_m3268 (GUILayoutEntry_t546 * __this, GUILayoutOptionU5BU5D_t644* ___options, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Single_t355_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(36);
		Int32_t106_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		s_Il2CppMethodIntialized = true;
	}
	GUILayoutOption_t550 * V_0 = {0};
	GUILayoutOptionU5BU5D_t644* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = {0};
	float V_4 = 0.0f;
	{
		GUILayoutOptionU5BU5D_t644* L_0 = ___options;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		return;
	}

IL_0007:
	{
		GUILayoutOptionU5BU5D_t644* L_1 = ___options;
		V_1 = L_1;
		V_2 = 0;
		goto IL_01a0;
	}

IL_0010:
	{
		GUILayoutOptionU5BU5D_t644* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_0 = (*(GUILayoutOption_t550 **)(GUILayoutOption_t550 **)SZArrayLdElema(L_2, L_4, sizeof(GUILayoutOption_t550 *)));
		GUILayoutOption_t550 * L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = (L_5->___type_0);
		V_3 = L_6;
		int32_t L_7 = V_3;
		if (L_7 == 0)
		{
			goto IL_0046;
		}
		if (L_7 == 1)
		{
			goto IL_006e;
		}
		if (L_7 == 2)
		{
			goto IL_0096;
		}
		if (L_7 == 3)
		{
			goto IL_00c9;
		}
		if (L_7 == 4)
		{
			goto IL_0103;
		}
		if (L_7 == 5)
		{
			goto IL_0136;
		}
		if (L_7 == 6)
		{
			goto IL_0170;
		}
		if (L_7 == 7)
		{
			goto IL_0186;
		}
	}
	{
		goto IL_019c;
	}

IL_0046:
	{
		GUILayoutOption_t550 * L_8 = V_0;
		NullCheck(L_8);
		Object_t * L_9 = (L_8->___value_1);
		float L_10 = ((*(float*)((float*)UnBox (L_9, Single_t355_il2cpp_TypeInfo_var))));
		V_4 = L_10;
		__this->___maxWidth_1 = L_10;
		float L_11 = V_4;
		__this->___minWidth_0 = L_11;
		__this->___stretchWidth_5 = 0;
		goto IL_019c;
	}

IL_006e:
	{
		GUILayoutOption_t550 * L_12 = V_0;
		NullCheck(L_12);
		Object_t * L_13 = (L_12->___value_1);
		float L_14 = ((*(float*)((float*)UnBox (L_13, Single_t355_il2cpp_TypeInfo_var))));
		V_4 = L_14;
		__this->___maxHeight_3 = L_14;
		float L_15 = V_4;
		__this->___minHeight_2 = L_15;
		__this->___stretchHeight_6 = 0;
		goto IL_019c;
	}

IL_0096:
	{
		GUILayoutOption_t550 * L_16 = V_0;
		NullCheck(L_16);
		Object_t * L_17 = (L_16->___value_1);
		__this->___minWidth_0 = ((*(float*)((float*)UnBox (L_17, Single_t355_il2cpp_TypeInfo_var))));
		float L_18 = (__this->___maxWidth_1);
		float L_19 = (__this->___minWidth_0);
		if ((!(((float)L_18) < ((float)L_19))))
		{
			goto IL_00c4;
		}
	}
	{
		float L_20 = (__this->___minWidth_0);
		__this->___maxWidth_1 = L_20;
	}

IL_00c4:
	{
		goto IL_019c;
	}

IL_00c9:
	{
		GUILayoutOption_t550 * L_21 = V_0;
		NullCheck(L_21);
		Object_t * L_22 = (L_21->___value_1);
		__this->___maxWidth_1 = ((*(float*)((float*)UnBox (L_22, Single_t355_il2cpp_TypeInfo_var))));
		float L_23 = (__this->___minWidth_0);
		float L_24 = (__this->___maxWidth_1);
		if ((!(((float)L_23) > ((float)L_24))))
		{
			goto IL_00f7;
		}
	}
	{
		float L_25 = (__this->___maxWidth_1);
		__this->___minWidth_0 = L_25;
	}

IL_00f7:
	{
		__this->___stretchWidth_5 = 0;
		goto IL_019c;
	}

IL_0103:
	{
		GUILayoutOption_t550 * L_26 = V_0;
		NullCheck(L_26);
		Object_t * L_27 = (L_26->___value_1);
		__this->___minHeight_2 = ((*(float*)((float*)UnBox (L_27, Single_t355_il2cpp_TypeInfo_var))));
		float L_28 = (__this->___maxHeight_3);
		float L_29 = (__this->___minHeight_2);
		if ((!(((float)L_28) < ((float)L_29))))
		{
			goto IL_0131;
		}
	}
	{
		float L_30 = (__this->___minHeight_2);
		__this->___maxHeight_3 = L_30;
	}

IL_0131:
	{
		goto IL_019c;
	}

IL_0136:
	{
		GUILayoutOption_t550 * L_31 = V_0;
		NullCheck(L_31);
		Object_t * L_32 = (L_31->___value_1);
		__this->___maxHeight_3 = ((*(float*)((float*)UnBox (L_32, Single_t355_il2cpp_TypeInfo_var))));
		float L_33 = (__this->___minHeight_2);
		float L_34 = (__this->___maxHeight_3);
		if ((!(((float)L_33) > ((float)L_34))))
		{
			goto IL_0164;
		}
	}
	{
		float L_35 = (__this->___maxHeight_3);
		__this->___minHeight_2 = L_35;
	}

IL_0164:
	{
		__this->___stretchHeight_6 = 0;
		goto IL_019c;
	}

IL_0170:
	{
		GUILayoutOption_t550 * L_36 = V_0;
		NullCheck(L_36);
		Object_t * L_37 = (L_36->___value_1);
		__this->___stretchWidth_5 = ((*(int32_t*)((int32_t*)UnBox (L_37, Int32_t106_il2cpp_TypeInfo_var))));
		goto IL_019c;
	}

IL_0186:
	{
		GUILayoutOption_t550 * L_38 = V_0;
		NullCheck(L_38);
		Object_t * L_39 = (L_38->___value_1);
		__this->___stretchHeight_6 = ((*(int32_t*)((int32_t*)UnBox (L_39, Int32_t106_il2cpp_TypeInfo_var))));
		goto IL_019c;
	}

IL_019c:
	{
		int32_t L_40 = V_2;
		V_2 = ((int32_t)((int32_t)L_40+(int32_t)1));
	}

IL_01a0:
	{
		int32_t L_41 = V_2;
		GUILayoutOptionU5BU5D_t644* L_42 = V_1;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)(((int32_t)(((Array_t *)L_42)->max_length))))))
		{
			goto IL_0010;
		}
	}
	{
		float L_43 = (__this->___maxWidth_1);
		if ((((float)L_43) == ((float)(0.0f))))
		{
			goto IL_01d6;
		}
	}
	{
		float L_44 = (__this->___maxWidth_1);
		float L_45 = (__this->___minWidth_0);
		if ((!(((float)L_44) < ((float)L_45))))
		{
			goto IL_01d6;
		}
	}
	{
		float L_46 = (__this->___minWidth_0);
		__this->___maxWidth_1 = L_46;
	}

IL_01d6:
	{
		float L_47 = (__this->___maxHeight_3);
		if ((((float)L_47) == ((float)(0.0f))))
		{
			goto IL_0203;
		}
	}
	{
		float L_48 = (__this->___maxHeight_3);
		float L_49 = (__this->___minHeight_2);
		if ((!(((float)L_48) < ((float)L_49))))
		{
			goto IL_0203;
		}
	}
	{
		float L_50 = (__this->___minHeight_2);
		__this->___maxHeight_3 = L_50;
	}

IL_0203:
	{
		return;
	}
}
// System.String UnityEngine.GUILayoutEntry::ToString()
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutEntry_t546_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t78_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t355_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral258;
extern Il2CppCodeGenString* _stringLiteral259;
extern Il2CppCodeGenString* _stringLiteral260;
extern Il2CppCodeGenString* _stringLiteral261;
extern Il2CppCodeGenString* _stringLiteral262;
extern Il2CppCodeGenString* _stringLiteral263;
extern Il2CppCodeGenString* _stringLiteral264;
extern "C" String_t* GUILayoutEntry_ToString_m3269 (GUILayoutEntry_t546 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		GUILayoutEntry_t546_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(372);
		ObjectU5BU5D_t78_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(113);
		Single_t355_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(36);
		_stringLiteral258 = il2cpp_codegen_string_literal_from_index(258);
		_stringLiteral259 = il2cpp_codegen_string_literal_from_index(259);
		_stringLiteral260 = il2cpp_codegen_string_literal_from_index(260);
		_stringLiteral261 = il2cpp_codegen_string_literal_from_index(261);
		_stringLiteral262 = il2cpp_codegen_string_literal_from_index(262);
		_stringLiteral263 = il2cpp_codegen_string_literal_from_index(263);
		_stringLiteral264 = il2cpp_codegen_string_literal_from_index(264);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t78* G_B5_1 = {0};
	ObjectU5BU5D_t78* G_B5_2 = {0};
	String_t* G_B5_3 = {0};
	int32_t G_B5_4 = 0;
	ObjectU5BU5D_t78* G_B5_5 = {0};
	ObjectU5BU5D_t78* G_B5_6 = {0};
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_t78* G_B4_1 = {0};
	ObjectU5BU5D_t78* G_B4_2 = {0};
	String_t* G_B4_3 = {0};
	int32_t G_B4_4 = 0;
	ObjectU5BU5D_t78* G_B4_5 = {0};
	ObjectU5BU5D_t78* G_B4_6 = {0};
	String_t* G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_t78* G_B6_2 = {0};
	ObjectU5BU5D_t78* G_B6_3 = {0};
	String_t* G_B6_4 = {0};
	int32_t G_B6_5 = 0;
	ObjectU5BU5D_t78* G_B6_6 = {0};
	ObjectU5BU5D_t78* G_B6_7 = {0};
	int32_t G_B8_0 = 0;
	ObjectU5BU5D_t78* G_B8_1 = {0};
	ObjectU5BU5D_t78* G_B8_2 = {0};
	int32_t G_B7_0 = 0;
	ObjectU5BU5D_t78* G_B7_1 = {0};
	ObjectU5BU5D_t78* G_B7_2 = {0};
	String_t* G_B9_0 = {0};
	int32_t G_B9_1 = 0;
	ObjectU5BU5D_t78* G_B9_2 = {0};
	ObjectU5BU5D_t78* G_B9_3 = {0};
	int32_t G_B11_0 = 0;
	ObjectU5BU5D_t78* G_B11_1 = {0};
	ObjectU5BU5D_t78* G_B11_2 = {0};
	int32_t G_B10_0 = 0;
	ObjectU5BU5D_t78* G_B10_1 = {0};
	ObjectU5BU5D_t78* G_B10_2 = {0};
	String_t* G_B12_0 = {0};
	int32_t G_B12_1 = 0;
	ObjectU5BU5D_t78* G_B12_2 = {0};
	ObjectU5BU5D_t78* G_B12_3 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_0 = L_0;
		V_1 = 0;
		goto IL_001d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m531(NULL /*static, unused*/, L_1, _stringLiteral258, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_1;
		V_1 = ((int32_t)((int32_t)L_3+(int32_t)1));
	}

IL_001d:
	{
		int32_t L_4 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutEntry_t546_il2cpp_TypeInfo_var);
		int32_t L_5 = ((GUILayoutEntry_t546_StaticFields*)GUILayoutEntry_t546_il2cpp_TypeInfo_var->static_fields)->___indent_9;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_000d;
		}
	}
	{
		ObjectU5BU5D_t78* L_6 = ((ObjectU5BU5D_t78*)SZArrayNew(ObjectU5BU5D_t78_il2cpp_TypeInfo_var, ((int32_t)12)));
		String_t* L_7 = V_0;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 0, sizeof(Object_t *))) = (Object_t *)L_7;
		ObjectU5BU5D_t78* L_8 = L_6;
		ObjectU5BU5D_t78* L_9 = ((ObjectU5BU5D_t78*)SZArrayNew(ObjectU5BU5D_t78_il2cpp_TypeInfo_var, 6));
		GUIStyle_t545 * L_10 = GUILayoutEntry_get_style_m3260(__this, /*hidden argument*/NULL);
		G_B4_0 = 0;
		G_B4_1 = L_9;
		G_B4_2 = L_9;
		G_B4_3 = _stringLiteral259;
		G_B4_4 = 1;
		G_B4_5 = L_8;
		G_B4_6 = L_8;
		if (!L_10)
		{
			G_B5_0 = 0;
			G_B5_1 = L_9;
			G_B5_2 = L_9;
			G_B5_3 = _stringLiteral259;
			G_B5_4 = 1;
			G_B5_5 = L_8;
			G_B5_6 = L_8;
			goto IL_005d;
		}
	}
	{
		GUIStyle_t545 * L_11 = GUILayoutEntry_get_style_m3260(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		String_t* L_12 = GUIStyle_get_name_m3374(L_11, /*hidden argument*/NULL);
		G_B6_0 = L_12;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		G_B6_5 = G_B4_4;
		G_B6_6 = G_B4_5;
		G_B6_7 = G_B4_6;
		goto IL_0062;
	}

IL_005d:
	{
		G_B6_0 = _stringLiteral260;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
		G_B6_5 = G_B5_4;
		G_B6_6 = G_B5_5;
		G_B6_7 = G_B5_6;
	}

IL_0062:
	{
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B6_2, G_B6_1, sizeof(Object_t *))) = (Object_t *)G_B6_0;
		ObjectU5BU5D_t78* L_13 = G_B6_3;
		Type_t * L_14 = Object_GetType_m1961(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 1);
		ArrayElementTypeCheck (L_13, L_14);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 1, sizeof(Object_t *))) = (Object_t *)L_14;
		ObjectU5BU5D_t78* L_15 = L_13;
		Rect_t18 * L_16 = &(__this->___rect_4);
		float L_17 = Rect_get_x_m420(L_16, /*hidden argument*/NULL);
		float L_18 = L_17;
		Object_t * L_19 = Box(Single_t355_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 2);
		ArrayElementTypeCheck (L_15, L_19);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_15, 2, sizeof(Object_t *))) = (Object_t *)L_19;
		ObjectU5BU5D_t78* L_20 = L_15;
		Rect_t18 * L_21 = &(__this->___rect_4);
		float L_22 = Rect_get_xMax_m559(L_21, /*hidden argument*/NULL);
		float L_23 = L_22;
		Object_t * L_24 = Box(Single_t355_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 3);
		ArrayElementTypeCheck (L_20, L_24);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_20, 3, sizeof(Object_t *))) = (Object_t *)L_24;
		ObjectU5BU5D_t78* L_25 = L_20;
		Rect_t18 * L_26 = &(__this->___rect_4);
		float L_27 = Rect_get_y_m424(L_26, /*hidden argument*/NULL);
		float L_28 = L_27;
		Object_t * L_29 = Box(Single_t355_il2cpp_TypeInfo_var, &L_28);
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, 4);
		ArrayElementTypeCheck (L_25, L_29);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_25, 4, sizeof(Object_t *))) = (Object_t *)L_29;
		ObjectU5BU5D_t78* L_30 = L_25;
		Rect_t18 * L_31 = &(__this->___rect_4);
		float L_32 = Rect_get_yMax_m2193(L_31, /*hidden argument*/NULL);
		float L_33 = L_32;
		Object_t * L_34 = Box(Single_t355_il2cpp_TypeInfo_var, &L_33);
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, 5);
		ArrayElementTypeCheck (L_30, L_34);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_30, 5, sizeof(Object_t *))) = (Object_t *)L_34;
		String_t* L_35 = UnityString_Format_m2799(NULL /*static, unused*/, G_B6_4, L_30, /*hidden argument*/NULL);
		NullCheck(G_B6_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_6, G_B6_5);
		ArrayElementTypeCheck (G_B6_6, L_35);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B6_6, G_B6_5, sizeof(Object_t *))) = (Object_t *)L_35;
		ObjectU5BU5D_t78* L_36 = G_B6_7;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, 2);
		ArrayElementTypeCheck (L_36, _stringLiteral261);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_36, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral261;
		ObjectU5BU5D_t78* L_37 = L_36;
		float L_38 = (__this->___minWidth_0);
		float L_39 = L_38;
		Object_t * L_40 = Box(Single_t355_il2cpp_TypeInfo_var, &L_39);
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, 3);
		ArrayElementTypeCheck (L_37, L_40);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_37, 3, sizeof(Object_t *))) = (Object_t *)L_40;
		ObjectU5BU5D_t78* L_41 = L_37;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, 4);
		ArrayElementTypeCheck (L_41, _stringLiteral262);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_41, 4, sizeof(Object_t *))) = (Object_t *)_stringLiteral262;
		ObjectU5BU5D_t78* L_42 = L_41;
		float L_43 = (__this->___maxWidth_1);
		float L_44 = L_43;
		Object_t * L_45 = Box(Single_t355_il2cpp_TypeInfo_var, &L_44);
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, 5);
		ArrayElementTypeCheck (L_42, L_45);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_42, 5, sizeof(Object_t *))) = (Object_t *)L_45;
		ObjectU5BU5D_t78* L_46 = L_42;
		int32_t L_47 = (__this->___stretchWidth_5);
		G_B7_0 = 6;
		G_B7_1 = L_46;
		G_B7_2 = L_46;
		if (!L_47)
		{
			G_B8_0 = 6;
			G_B8_1 = L_46;
			G_B8_2 = L_46;
			goto IL_0101;
		}
	}
	{
		G_B9_0 = _stringLiteral263;
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		G_B9_3 = G_B7_2;
		goto IL_0106;
	}

IL_0101:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_48 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B9_0 = L_48;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
		G_B9_3 = G_B8_2;
	}

IL_0106:
	{
		NullCheck(G_B9_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B9_2, G_B9_1);
		ArrayElementTypeCheck (G_B9_2, G_B9_0);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B9_2, G_B9_1, sizeof(Object_t *))) = (Object_t *)G_B9_0;
		ObjectU5BU5D_t78* L_49 = G_B9_3;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, 7);
		ArrayElementTypeCheck (L_49, _stringLiteral264);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_49, 7, sizeof(Object_t *))) = (Object_t *)_stringLiteral264;
		ObjectU5BU5D_t78* L_50 = L_49;
		float L_51 = (__this->___minHeight_2);
		float L_52 = L_51;
		Object_t * L_53 = Box(Single_t355_il2cpp_TypeInfo_var, &L_52);
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, 8);
		ArrayElementTypeCheck (L_50, L_53);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_50, 8, sizeof(Object_t *))) = (Object_t *)L_53;
		ObjectU5BU5D_t78* L_54 = L_50;
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, ((int32_t)9));
		ArrayElementTypeCheck (L_54, _stringLiteral262);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_54, ((int32_t)9), sizeof(Object_t *))) = (Object_t *)_stringLiteral262;
		ObjectU5BU5D_t78* L_55 = L_54;
		float L_56 = (__this->___maxHeight_3);
		float L_57 = L_56;
		Object_t * L_58 = Box(Single_t355_il2cpp_TypeInfo_var, &L_57);
		NullCheck(L_55);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_55, ((int32_t)10));
		ArrayElementTypeCheck (L_55, L_58);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_55, ((int32_t)10), sizeof(Object_t *))) = (Object_t *)L_58;
		ObjectU5BU5D_t78* L_59 = L_55;
		int32_t L_60 = (__this->___stretchHeight_6);
		G_B10_0 = ((int32_t)11);
		G_B10_1 = L_59;
		G_B10_2 = L_59;
		if (!L_60)
		{
			G_B11_0 = ((int32_t)11);
			G_B11_1 = L_59;
			G_B11_2 = L_59;
			goto IL_014d;
		}
	}
	{
		G_B12_0 = _stringLiteral263;
		G_B12_1 = G_B10_0;
		G_B12_2 = G_B10_1;
		G_B12_3 = G_B10_2;
		goto IL_0152;
	}

IL_014d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_61 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B12_0 = L_61;
		G_B12_1 = G_B11_0;
		G_B12_2 = G_B11_1;
		G_B12_3 = G_B11_2;
	}

IL_0152:
	{
		NullCheck(G_B12_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B12_2, G_B12_1);
		ArrayElementTypeCheck (G_B12_2, G_B12_0);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B12_2, G_B12_1, sizeof(Object_t *))) = (Object_t *)G_B12_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_62 = String_Concat_m1939(NULL /*static, unused*/, G_B12_3, /*hidden argument*/NULL);
		return L_62;
	}
}
// UnityEngine.RectOffset
#include "UnityEngine_UnityEngine_RectOffsetMethodDeclarations.h"
// System.Void UnityEngine.GUILayoutGroup::.ctor()
// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Collections_Generic_List_1_gen_31MethodDeclarations.h"
// UnityEngine.RectOffset
#include "UnityEngine_UnityEngine_RectOffsetMethodDeclarations.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyleMethodDeclarations.h"
// UnityEngine.GUILayoutEntry
#include "UnityEngine_UnityEngine_GUILayoutEntryMethodDeclarations.h"
extern TypeInfo* List_1_t547_il2cpp_TypeInfo_var;
extern TypeInfo* RectOffset_t304_il2cpp_TypeInfo_var;
extern TypeInfo* GUIStyle_t545_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutEntry_t546_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3632_MethodInfo_var;
extern "C" void GUILayoutGroup__ctor_m3270 (GUILayoutGroup_t542 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t547_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(375);
		RectOffset_t304_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		GUIStyle_t545_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		GUILayoutEntry_t546_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(372);
		List_1__ctor_m3632_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483984);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t547 * L_0 = (List_1_t547 *)il2cpp_codegen_object_new (List_1_t547_il2cpp_TypeInfo_var);
		List_1__ctor_m3632(L_0, /*hidden argument*/List_1__ctor_m3632_MethodInfo_var);
		__this->___entries_10 = L_0;
		__this->___isVertical_11 = 1;
		__this->___sameSize_14 = 1;
		__this->___windowID_16 = (-1);
		__this->___m_StretchableCountX_18 = ((int32_t)100);
		__this->___m_StretchableCountY_19 = ((int32_t)100);
		__this->___m_ChildMinWidth_22 = (100.0f);
		__this->___m_ChildMaxWidth_23 = (100.0f);
		__this->___m_ChildMinHeight_24 = (100.0f);
		__this->___m_ChildMaxHeight_25 = (100.0f);
		RectOffset_t304 * L_1 = (RectOffset_t304 *)il2cpp_codegen_object_new (RectOffset_t304_il2cpp_TypeInfo_var);
		RectOffset__ctor_m2398(L_1, /*hidden argument*/NULL);
		__this->___m_Margin_26 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t545_il2cpp_TypeInfo_var);
		GUIStyle_t545 * L_2 = GUIStyle_get_none_m3370(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutEntry_t546_il2cpp_TypeInfo_var);
		GUILayoutEntry__ctor_m3258(__this, (0.0f), (0.0f), (0.0f), (0.0f), L_2, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.RectOffset UnityEngine.GUILayoutGroup::get_margin()
extern "C" RectOffset_t304 * GUILayoutGroup_get_margin_m3271 (GUILayoutGroup_t542 * __this, const MethodInfo* method)
{
	{
		RectOffset_t304 * L_0 = (__this->___m_Margin_26);
		return L_0;
	}
}
// System.Void UnityEngine.GUILayoutGroup::ApplyOptions(UnityEngine.GUILayoutOption[])
#include "UnityEngine_ArrayTypes.h"
extern TypeInfo* Int32_t106_il2cpp_TypeInfo_var;
extern "C" void GUILayoutGroup_ApplyOptions_m3272 (GUILayoutGroup_t542 * __this, GUILayoutOptionU5BU5D_t644* ___options, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t106_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		s_Il2CppMethodIntialized = true;
	}
	GUILayoutOption_t550 * V_0 = {0};
	GUILayoutOptionU5BU5D_t644* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = {0};
	{
		GUILayoutOptionU5BU5D_t644* L_0 = ___options;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		return;
	}

IL_0007:
	{
		GUILayoutOptionU5BU5D_t644* L_1 = ___options;
		GUILayoutEntry_ApplyOptions_m3268(__this, L_1, /*hidden argument*/NULL);
		GUILayoutOptionU5BU5D_t644* L_2 = ___options;
		V_1 = L_2;
		V_2 = 0;
		goto IL_0098;
	}

IL_0017:
	{
		GUILayoutOptionU5BU5D_t644* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_0 = (*(GUILayoutOption_t550 **)(GUILayoutOption_t550 **)SZArrayLdElema(L_3, L_5, sizeof(GUILayoutOption_t550 *)));
		GUILayoutOption_t550 * L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = (L_6->___type_0);
		V_3 = L_7;
		int32_t L_8 = V_3;
		if (L_8 == 0)
		{
			goto IL_0065;
		}
		if (L_8 == 1)
		{
			goto IL_0071;
		}
		if (L_8 == 2)
		{
			goto IL_0065;
		}
		if (L_8 == 3)
		{
			goto IL_0065;
		}
		if (L_8 == 4)
		{
			goto IL_0071;
		}
		if (L_8 == 5)
		{
			goto IL_0071;
		}
		if (L_8 == 6)
		{
			goto IL_0094;
		}
		if (L_8 == 7)
		{
			goto IL_0094;
		}
		if (L_8 == 8)
		{
			goto IL_0094;
		}
		if (L_8 == 9)
		{
			goto IL_0094;
		}
		if (L_8 == 10)
		{
			goto IL_0094;
		}
		if (L_8 == 11)
		{
			goto IL_0094;
		}
		if (L_8 == 12)
		{
			goto IL_0094;
		}
		if (L_8 == 13)
		{
			goto IL_007d;
		}
	}
	{
		goto IL_0094;
	}

IL_0065:
	{
		__this->___m_UserSpecifiedHeight_21 = 1;
		goto IL_0094;
	}

IL_0071:
	{
		__this->___m_UserSpecifiedWidth_20 = 1;
		goto IL_0094;
	}

IL_007d:
	{
		GUILayoutOption_t550 * L_9 = V_0;
		NullCheck(L_9);
		Object_t * L_10 = (L_9->___value_1);
		__this->___spacing_13 = (((float)((*(int32_t*)((int32_t*)UnBox (L_10, Int32_t106_il2cpp_TypeInfo_var))))));
		goto IL_0094;
	}

IL_0094:
	{
		int32_t L_11 = V_2;
		V_2 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_0098:
	{
		int32_t L_12 = V_2;
		GUILayoutOptionU5BU5D_t644* L_13 = V_1;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)(((Array_t *)L_13)->max_length))))))
		{
			goto IL_0017;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::ApplyStyleSettings(UnityEngine.GUIStyle)
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyle.h"
extern "C" void GUILayoutGroup_ApplyStyleSettings_m3273 (GUILayoutGroup_t542 * __this, GUIStyle_t545 * ___style, const MethodInfo* method)
{
	RectOffset_t304 * V_0 = {0};
	{
		GUIStyle_t545 * L_0 = ___style;
		GUILayoutEntry_ApplyStyleSettings_m3267(__this, L_0, /*hidden argument*/NULL);
		GUIStyle_t545 * L_1 = ___style;
		NullCheck(L_1);
		RectOffset_t304 * L_2 = GUIStyle_get_margin_m3368(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		RectOffset_t304 * L_3 = (__this->___m_Margin_26);
		RectOffset_t304 * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = RectOffset_get_left_m2396(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		RectOffset_set_left_m3358(L_3, L_5, /*hidden argument*/NULL);
		RectOffset_t304 * L_6 = (__this->___m_Margin_26);
		RectOffset_t304 * L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = RectOffset_get_right_m3359(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		RectOffset_set_right_m3360(L_6, L_8, /*hidden argument*/NULL);
		RectOffset_t304 * L_9 = (__this->___m_Margin_26);
		RectOffset_t304 * L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = RectOffset_get_top_m2397(L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		RectOffset_set_top_m3361(L_9, L_11, /*hidden argument*/NULL);
		RectOffset_t304 * L_12 = (__this->___m_Margin_26);
		RectOffset_t304 * L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = RectOffset_get_bottom_m3362(L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		RectOffset_set_bottom_m3363(L_12, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::ResetCursor()
extern "C" void GUILayoutGroup_ResetCursor_m3274 (GUILayoutGroup_t542 * __this, const MethodInfo* method)
{
	{
		__this->___m_Cursor_17 = 0;
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::CalcWidth()
// System.Collections.Generic.List`1/Enumerator<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_0MethodDeclarations.h"
// UnityEngine.GUILayoutUtility
#include "UnityEngine_UnityEngine_GUILayoutUtilityMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
extern TypeInfo* GUILayoutUtility_t543_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t69_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t661_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t359_il2cpp_TypeInfo_var;
extern TypeInfo* GUIStyle_t545_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m3629_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3630_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3631_MethodInfo_var;
extern "C" void GUILayoutGroup_CalcWidth_m3275 (GUILayoutGroup_t542 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutUtility_t543_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(366);
		Mathf_t69_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		Enumerator_t661_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(373);
		IDisposable_t359_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(124);
		GUIStyle_t545_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		List_1_GetEnumerator_m3629_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483981);
		Enumerator_get_Current_m3630_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483982);
		Enumerator_MoveNext_m3631_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483983);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	GUILayoutEntry_t546 * V_3 = {0};
	Enumerator_t661  V_4 = {0};
	RectOffset_t304 * V_5 = {0};
	int32_t V_6 = 0;
	GUILayoutEntry_t546 * V_7 = {0};
	Enumerator_t661  V_8 = {0};
	RectOffset_t304 * V_9 = {0};
	int32_t V_10 = 0;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	Exception_t108 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t108 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B22_0 = 0;
	int32_t G_B39_0 = 0;
	int32_t G_B39_1 = 0;
	GUILayoutGroup_t542 * G_B39_2 = {0};
	int32_t G_B38_0 = 0;
	int32_t G_B38_1 = 0;
	GUILayoutGroup_t542 * G_B38_2 = {0};
	int32_t G_B40_0 = 0;
	int32_t G_B40_1 = 0;
	int32_t G_B40_2 = 0;
	GUILayoutGroup_t542 * G_B40_3 = {0};
	{
		List_1_t547 * L_0 = (__this->___entries_10);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count() */, L_0);
		if (L_1)
		{
			goto IL_0033;
		}
	}
	{
		GUIStyle_t545 * L_2 = GUILayoutEntry_get_style_m3260(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		RectOffset_t304 * L_3 = GUIStyle_get_padding_m3369(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = RectOffset_get_horizontal_m2391(L_3, /*hidden argument*/NULL);
		float L_5 = (((float)L_4));
		V_13 = L_5;
		((GUILayoutEntry_t546 *)__this)->___minWidth_0 = L_5;
		float L_6 = V_13;
		((GUILayoutEntry_t546 *)__this)->___maxWidth_1 = L_6;
		return;
	}

IL_0033:
	{
		V_0 = 0;
		V_1 = 0;
		__this->___m_ChildMinWidth_22 = (0.0f);
		__this->___m_ChildMaxWidth_23 = (0.0f);
		__this->___m_StretchableCountX_18 = 0;
		V_2 = 1;
		bool L_7 = (__this->___isVertical_11);
		if (!L_7)
		{
			goto IL_016a;
		}
	}
	{
		List_1_t547 * L_8 = (__this->___entries_10);
		NullCheck(L_8);
		Enumerator_t661  L_9 = List_1_GetEnumerator_m3629(L_8, /*hidden argument*/List_1_GetEnumerator_m3629_MethodInfo_var);
		V_4 = L_9;
	}

IL_006e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0125;
		}

IL_0073:
		{
			GUILayoutEntry_t546 * L_10 = Enumerator_get_Current_m3630((&V_4), /*hidden argument*/Enumerator_get_Current_m3630_MethodInfo_var);
			V_3 = L_10;
			GUILayoutEntry_t546 * L_11 = V_3;
			NullCheck(L_11);
			VirtActionInvoker0::Invoke(5 /* System.Void UnityEngine.GUILayoutEntry::CalcWidth() */, L_11);
			GUILayoutEntry_t546 * L_12 = V_3;
			NullCheck(L_12);
			RectOffset_t304 * L_13 = (RectOffset_t304 *)VirtFuncInvoker0< RectOffset_t304 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_12);
			V_5 = L_13;
			GUILayoutEntry_t546 * L_14 = V_3;
			NullCheck(L_14);
			GUIStyle_t545 * L_15 = GUILayoutEntry_get_style_m3260(L_14, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t543_il2cpp_TypeInfo_var);
			GUIStyle_t545 * L_16 = GUILayoutUtility_get_spaceStyle_m3254(NULL /*static, unused*/, /*hidden argument*/NULL);
			if ((((Object_t*)(GUIStyle_t545 *)L_15) == ((Object_t*)(GUIStyle_t545 *)L_16)))
			{
				goto IL_0112;
			}
		}

IL_0099:
		{
			bool L_17 = V_2;
			if (L_17)
			{
				goto IL_00c0;
			}
		}

IL_009f:
		{
			RectOffset_t304 * L_18 = V_5;
			NullCheck(L_18);
			int32_t L_19 = RectOffset_get_left_m2396(L_18, /*hidden argument*/NULL);
			int32_t L_20 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t69_il2cpp_TypeInfo_var);
			int32_t L_21 = Mathf_Min_m541(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/NULL);
			V_0 = L_21;
			RectOffset_t304 * L_22 = V_5;
			NullCheck(L_22);
			int32_t L_23 = RectOffset_get_right_m3359(L_22, /*hidden argument*/NULL);
			int32_t L_24 = V_1;
			int32_t L_25 = Mathf_Min_m541(NULL /*static, unused*/, L_23, L_24, /*hidden argument*/NULL);
			V_1 = L_25;
			goto IL_00d2;
		}

IL_00c0:
		{
			RectOffset_t304 * L_26 = V_5;
			NullCheck(L_26);
			int32_t L_27 = RectOffset_get_left_m2396(L_26, /*hidden argument*/NULL);
			V_0 = L_27;
			RectOffset_t304 * L_28 = V_5;
			NullCheck(L_28);
			int32_t L_29 = RectOffset_get_right_m3359(L_28, /*hidden argument*/NULL);
			V_1 = L_29;
			V_2 = 0;
		}

IL_00d2:
		{
			GUILayoutEntry_t546 * L_30 = V_3;
			NullCheck(L_30);
			float L_31 = (L_30->___minWidth_0);
			RectOffset_t304 * L_32 = V_5;
			NullCheck(L_32);
			int32_t L_33 = RectOffset_get_horizontal_m2391(L_32, /*hidden argument*/NULL);
			float L_34 = (__this->___m_ChildMinWidth_22);
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t69_il2cpp_TypeInfo_var);
			float L_35 = Mathf_Max_m2345(NULL /*static, unused*/, ((float)((float)L_31+(float)(((float)L_33)))), L_34, /*hidden argument*/NULL);
			__this->___m_ChildMinWidth_22 = L_35;
			GUILayoutEntry_t546 * L_36 = V_3;
			NullCheck(L_36);
			float L_37 = (L_36->___maxWidth_1);
			RectOffset_t304 * L_38 = V_5;
			NullCheck(L_38);
			int32_t L_39 = RectOffset_get_horizontal_m2391(L_38, /*hidden argument*/NULL);
			float L_40 = (__this->___m_ChildMaxWidth_23);
			float L_41 = Mathf_Max_m2345(NULL /*static, unused*/, ((float)((float)L_37+(float)(((float)L_39)))), L_40, /*hidden argument*/NULL);
			__this->___m_ChildMaxWidth_23 = L_41;
		}

IL_0112:
		{
			int32_t L_42 = (__this->___m_StretchableCountX_18);
			GUILayoutEntry_t546 * L_43 = V_3;
			NullCheck(L_43);
			int32_t L_44 = (L_43->___stretchWidth_5);
			__this->___m_StretchableCountX_18 = ((int32_t)((int32_t)L_42+(int32_t)L_44));
		}

IL_0125:
		{
			bool L_45 = Enumerator_MoveNext_m3631((&V_4), /*hidden argument*/Enumerator_MoveNext_m3631_MethodInfo_var);
			if (L_45)
			{
				goto IL_0073;
			}
		}

IL_0131:
		{
			IL2CPP_LEAVE(0x143, FINALLY_0136);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t108 *)e.ex;
		goto FINALLY_0136;
	}

FINALLY_0136:
	{ // begin finally (depth: 1)
		Enumerator_t661  L_46 = V_4;
		Enumerator_t661  L_47 = L_46;
		Object_t * L_48 = Box(Enumerator_t661_il2cpp_TypeInfo_var, &L_47);
		NullCheck(L_48);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t359_il2cpp_TypeInfo_var, L_48);
		IL2CPP_END_FINALLY(310)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(310)
	{
		IL2CPP_JUMP_TBL(0x143, IL_0143)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t108 *)
	}

IL_0143:
	{
		float L_49 = (__this->___m_ChildMinWidth_22);
		int32_t L_50 = V_0;
		int32_t L_51 = V_1;
		__this->___m_ChildMinWidth_22 = ((float)((float)L_49-(float)(((float)((int32_t)((int32_t)L_50+(int32_t)L_51))))));
		float L_52 = (__this->___m_ChildMaxWidth_23);
		int32_t L_53 = V_0;
		int32_t L_54 = V_1;
		__this->___m_ChildMaxWidth_23 = ((float)((float)L_52-(float)(((float)((int32_t)((int32_t)L_53+(int32_t)L_54))))));
		goto IL_02ea;
	}

IL_016a:
	{
		V_6 = 0;
		List_1_t547 * L_55 = (__this->___entries_10);
		NullCheck(L_55);
		Enumerator_t661  L_56 = List_1_GetEnumerator_m3629(L_55, /*hidden argument*/List_1_GetEnumerator_m3629_MethodInfo_var);
		V_8 = L_56;
	}

IL_017a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0273;
		}

IL_017f:
		{
			GUILayoutEntry_t546 * L_57 = Enumerator_get_Current_m3630((&V_8), /*hidden argument*/Enumerator_get_Current_m3630_MethodInfo_var);
			V_7 = L_57;
			GUILayoutEntry_t546 * L_58 = V_7;
			NullCheck(L_58);
			VirtActionInvoker0::Invoke(5 /* System.Void UnityEngine.GUILayoutEntry::CalcWidth() */, L_58);
			GUILayoutEntry_t546 * L_59 = V_7;
			NullCheck(L_59);
			RectOffset_t304 * L_60 = (RectOffset_t304 *)VirtFuncInvoker0< RectOffset_t304 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_59);
			V_9 = L_60;
			GUILayoutEntry_t546 * L_61 = V_7;
			NullCheck(L_61);
			GUIStyle_t545 * L_62 = GUILayoutEntry_get_style_m3260(L_61, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t543_il2cpp_TypeInfo_var);
			GUIStyle_t545 * L_63 = GUILayoutUtility_get_spaceStyle_m3254(NULL /*static, unused*/, /*hidden argument*/NULL);
			if ((((Object_t*)(GUIStyle_t545 *)L_62) == ((Object_t*)(GUIStyle_t545 *)L_63)))
			{
				goto IL_0237;
			}
		}

IL_01a9:
		{
			bool L_64 = V_2;
			if (L_64)
			{
				goto IL_01d2;
			}
		}

IL_01af:
		{
			int32_t L_65 = V_6;
			RectOffset_t304 * L_66 = V_9;
			NullCheck(L_66);
			int32_t L_67 = RectOffset_get_left_m2396(L_66, /*hidden argument*/NULL);
			if ((((int32_t)L_65) <= ((int32_t)L_67)))
			{
				goto IL_01c4;
			}
		}

IL_01bd:
		{
			int32_t L_68 = V_6;
			G_B22_0 = L_68;
			goto IL_01cb;
		}

IL_01c4:
		{
			RectOffset_t304 * L_69 = V_9;
			NullCheck(L_69);
			int32_t L_70 = RectOffset_get_left_m2396(L_69, /*hidden argument*/NULL);
			G_B22_0 = L_70;
		}

IL_01cb:
		{
			V_10 = G_B22_0;
			goto IL_01d7;
		}

IL_01d2:
		{
			V_10 = 0;
			V_2 = 0;
		}

IL_01d7:
		{
			float L_71 = (__this->___m_ChildMinWidth_22);
			GUILayoutEntry_t546 * L_72 = V_7;
			NullCheck(L_72);
			float L_73 = (L_72->___minWidth_0);
			float L_74 = (__this->___spacing_13);
			int32_t L_75 = V_10;
			__this->___m_ChildMinWidth_22 = ((float)((float)L_71+(float)((float)((float)((float)((float)L_73+(float)L_74))+(float)(((float)L_75))))));
			float L_76 = (__this->___m_ChildMaxWidth_23);
			GUILayoutEntry_t546 * L_77 = V_7;
			NullCheck(L_77);
			float L_78 = (L_77->___maxWidth_1);
			float L_79 = (__this->___spacing_13);
			int32_t L_80 = V_10;
			__this->___m_ChildMaxWidth_23 = ((float)((float)L_76+(float)((float)((float)((float)((float)L_78+(float)L_79))+(float)(((float)L_80))))));
			RectOffset_t304 * L_81 = V_9;
			NullCheck(L_81);
			int32_t L_82 = RectOffset_get_right_m3359(L_81, /*hidden argument*/NULL);
			V_6 = L_82;
			int32_t L_83 = (__this->___m_StretchableCountX_18);
			GUILayoutEntry_t546 * L_84 = V_7;
			NullCheck(L_84);
			int32_t L_85 = (L_84->___stretchWidth_5);
			__this->___m_StretchableCountX_18 = ((int32_t)((int32_t)L_83+(int32_t)L_85));
			goto IL_0273;
		}

IL_0237:
		{
			float L_86 = (__this->___m_ChildMinWidth_22);
			GUILayoutEntry_t546 * L_87 = V_7;
			NullCheck(L_87);
			float L_88 = (L_87->___minWidth_0);
			__this->___m_ChildMinWidth_22 = ((float)((float)L_86+(float)L_88));
			float L_89 = (__this->___m_ChildMaxWidth_23);
			GUILayoutEntry_t546 * L_90 = V_7;
			NullCheck(L_90);
			float L_91 = (L_90->___maxWidth_1);
			__this->___m_ChildMaxWidth_23 = ((float)((float)L_89+(float)L_91));
			int32_t L_92 = (__this->___m_StretchableCountX_18);
			GUILayoutEntry_t546 * L_93 = V_7;
			NullCheck(L_93);
			int32_t L_94 = (L_93->___stretchWidth_5);
			__this->___m_StretchableCountX_18 = ((int32_t)((int32_t)L_92+(int32_t)L_94));
		}

IL_0273:
		{
			bool L_95 = Enumerator_MoveNext_m3631((&V_8), /*hidden argument*/Enumerator_MoveNext_m3631_MethodInfo_var);
			if (L_95)
			{
				goto IL_017f;
			}
		}

IL_027f:
		{
			IL2CPP_LEAVE(0x291, FINALLY_0284);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t108 *)e.ex;
		goto FINALLY_0284;
	}

FINALLY_0284:
	{ // begin finally (depth: 1)
		Enumerator_t661  L_96 = V_8;
		Enumerator_t661  L_97 = L_96;
		Object_t * L_98 = Box(Enumerator_t661_il2cpp_TypeInfo_var, &L_97);
		NullCheck(L_98);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t359_il2cpp_TypeInfo_var, L_98);
		IL2CPP_END_FINALLY(644)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(644)
	{
		IL2CPP_JUMP_TBL(0x291, IL_0291)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t108 *)
	}

IL_0291:
	{
		float L_99 = (__this->___m_ChildMinWidth_22);
		float L_100 = (__this->___spacing_13);
		__this->___m_ChildMinWidth_22 = ((float)((float)L_99-(float)L_100));
		float L_101 = (__this->___m_ChildMaxWidth_23);
		float L_102 = (__this->___spacing_13);
		__this->___m_ChildMaxWidth_23 = ((float)((float)L_101-(float)L_102));
		List_1_t547 * L_103 = (__this->___entries_10);
		NullCheck(L_103);
		int32_t L_104 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count() */, L_103);
		if (!L_104)
		{
			goto IL_02e6;
		}
	}
	{
		List_1_t547 * L_105 = (__this->___entries_10);
		NullCheck(L_105);
		GUILayoutEntry_t546 * L_106 = (GUILayoutEntry_t546 *)VirtFuncInvoker1< GUILayoutEntry_t546 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Item(System.Int32) */, L_105, 0);
		NullCheck(L_106);
		RectOffset_t304 * L_107 = (RectOffset_t304 *)VirtFuncInvoker0< RectOffset_t304 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_106);
		NullCheck(L_107);
		int32_t L_108 = RectOffset_get_left_m2396(L_107, /*hidden argument*/NULL);
		V_0 = L_108;
		int32_t L_109 = V_6;
		V_1 = L_109;
		goto IL_02ea;
	}

IL_02e6:
	{
		int32_t L_110 = 0;
		V_1 = L_110;
		V_0 = L_110;
	}

IL_02ea:
	{
		V_11 = (0.0f);
		V_12 = (0.0f);
		GUIStyle_t545 * L_111 = GUILayoutEntry_get_style_m3260(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t545_il2cpp_TypeInfo_var);
		GUIStyle_t545 * L_112 = GUIStyle_get_none_m3370(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((Object_t*)(GUIStyle_t545 *)L_111) == ((Object_t*)(GUIStyle_t545 *)L_112))))
		{
			goto IL_0313;
		}
	}
	{
		bool L_113 = (__this->___m_UserSpecifiedWidth_20);
		if (!L_113)
		{
			goto IL_034a;
		}
	}

IL_0313:
	{
		GUIStyle_t545 * L_114 = GUILayoutEntry_get_style_m3260(__this, /*hidden argument*/NULL);
		NullCheck(L_114);
		RectOffset_t304 * L_115 = GUIStyle_get_padding_m3369(L_114, /*hidden argument*/NULL);
		NullCheck(L_115);
		int32_t L_116 = RectOffset_get_left_m2396(L_115, /*hidden argument*/NULL);
		int32_t L_117 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t69_il2cpp_TypeInfo_var);
		int32_t L_118 = Mathf_Max_m540(NULL /*static, unused*/, L_116, L_117, /*hidden argument*/NULL);
		V_11 = (((float)L_118));
		GUIStyle_t545 * L_119 = GUILayoutEntry_get_style_m3260(__this, /*hidden argument*/NULL);
		NullCheck(L_119);
		RectOffset_t304 * L_120 = GUIStyle_get_padding_m3369(L_119, /*hidden argument*/NULL);
		NullCheck(L_120);
		int32_t L_121 = RectOffset_get_right_m3359(L_120, /*hidden argument*/NULL);
		int32_t L_122 = V_1;
		int32_t L_123 = Mathf_Max_m540(NULL /*static, unused*/, L_121, L_122, /*hidden argument*/NULL);
		V_12 = (((float)L_123));
		goto IL_036c;
	}

IL_034a:
	{
		RectOffset_t304 * L_124 = (__this->___m_Margin_26);
		int32_t L_125 = V_0;
		NullCheck(L_124);
		RectOffset_set_left_m3358(L_124, L_125, /*hidden argument*/NULL);
		RectOffset_t304 * L_126 = (__this->___m_Margin_26);
		int32_t L_127 = V_1;
		NullCheck(L_126);
		RectOffset_set_right_m3360(L_126, L_127, /*hidden argument*/NULL);
		float L_128 = (0.0f);
		V_12 = L_128;
		V_11 = L_128;
	}

IL_036c:
	{
		float L_129 = (((GUILayoutEntry_t546 *)__this)->___minWidth_0);
		float L_130 = (__this->___m_ChildMinWidth_22);
		float L_131 = V_11;
		float L_132 = V_12;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t69_il2cpp_TypeInfo_var);
		float L_133 = Mathf_Max_m2345(NULL /*static, unused*/, L_129, ((float)((float)((float)((float)L_130+(float)L_131))+(float)L_132)), /*hidden argument*/NULL);
		((GUILayoutEntry_t546 *)__this)->___minWidth_0 = L_133;
		float L_134 = (((GUILayoutEntry_t546 *)__this)->___maxWidth_1);
		if ((!(((float)L_134) == ((float)(0.0f)))))
		{
			goto IL_03db;
		}
	}
	{
		int32_t L_135 = (((GUILayoutEntry_t546 *)__this)->___stretchWidth_5);
		int32_t L_136 = (__this->___m_StretchableCountX_18);
		GUIStyle_t545 * L_137 = GUILayoutEntry_get_style_m3260(__this, /*hidden argument*/NULL);
		NullCheck(L_137);
		bool L_138 = GUIStyle_get_stretchWidth_m3380(L_137, /*hidden argument*/NULL);
		G_B38_0 = L_136;
		G_B38_1 = L_135;
		G_B38_2 = __this;
		if (!L_138)
		{
			G_B39_0 = L_136;
			G_B39_1 = L_135;
			G_B39_2 = __this;
			goto IL_03bc;
		}
	}
	{
		G_B40_0 = 1;
		G_B40_1 = G_B38_0;
		G_B40_2 = G_B38_1;
		G_B40_3 = G_B38_2;
		goto IL_03bd;
	}

IL_03bc:
	{
		G_B40_0 = 0;
		G_B40_1 = G_B39_0;
		G_B40_2 = G_B39_1;
		G_B40_3 = G_B39_2;
	}

IL_03bd:
	{
		NullCheck(G_B40_3);
		((GUILayoutEntry_t546 *)G_B40_3)->___stretchWidth_5 = ((int32_t)((int32_t)G_B40_2+(int32_t)((int32_t)((int32_t)G_B40_1+(int32_t)G_B40_0))));
		float L_139 = (__this->___m_ChildMaxWidth_23);
		float L_140 = V_11;
		float L_141 = V_12;
		((GUILayoutEntry_t546 *)__this)->___maxWidth_1 = ((float)((float)((float)((float)L_139+(float)L_140))+(float)L_141));
		goto IL_03e2;
	}

IL_03db:
	{
		((GUILayoutEntry_t546 *)__this)->___stretchWidth_5 = 0;
	}

IL_03e2:
	{
		float L_142 = (((GUILayoutEntry_t546 *)__this)->___maxWidth_1);
		float L_143 = (((GUILayoutEntry_t546 *)__this)->___minWidth_0);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t69_il2cpp_TypeInfo_var);
		float L_144 = Mathf_Max_m2345(NULL /*static, unused*/, L_142, L_143, /*hidden argument*/NULL);
		((GUILayoutEntry_t546 *)__this)->___maxWidth_1 = L_144;
		GUIStyle_t545 * L_145 = GUILayoutEntry_get_style_m3260(__this, /*hidden argument*/NULL);
		NullCheck(L_145);
		float L_146 = GUIStyle_get_fixedWidth_m3378(L_145, /*hidden argument*/NULL);
		if ((((float)L_146) == ((float)(0.0f))))
		{
			goto IL_0431;
		}
	}
	{
		GUIStyle_t545 * L_147 = GUILayoutEntry_get_style_m3260(__this, /*hidden argument*/NULL);
		NullCheck(L_147);
		float L_148 = GUIStyle_get_fixedWidth_m3378(L_147, /*hidden argument*/NULL);
		float L_149 = L_148;
		V_13 = L_149;
		((GUILayoutEntry_t546 *)__this)->___minWidth_0 = L_149;
		float L_150 = V_13;
		((GUILayoutEntry_t546 *)__this)->___maxWidth_1 = L_150;
		((GUILayoutEntry_t546 *)__this)->___stretchWidth_5 = 0;
	}

IL_0431:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::SetHorizontal(System.Single,System.Single)
// System.Single
#include "mscorlib_System_Single.h"
extern TypeInfo* GUIStyle_t545_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t69_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t661_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t359_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutUtility_t543_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m3629_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3630_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3631_MethodInfo_var;
extern "C" void GUILayoutGroup_SetHorizontal_m3276 (GUILayoutGroup_t542 * __this, float ___x, float ___width, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIStyle_t545_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		Mathf_t69_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		Enumerator_t661_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(373);
		IDisposable_t359_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(124);
		GUILayoutUtility_t543_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(366);
		List_1_GetEnumerator_m3629_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483981);
		Enumerator_get_Current_m3630_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483982);
		Enumerator_MoveNext_m3631_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483983);
		s_Il2CppMethodIntialized = true;
	}
	RectOffset_t304 * V_0 = {0};
	GUILayoutEntry_t546 * V_1 = {0};
	Enumerator_t661  V_2 = {0};
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	GUILayoutEntry_t546 * V_8 = {0};
	Enumerator_t661  V_9 = {0};
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	int32_t V_15 = 0;
	bool V_16 = false;
	GUILayoutEntry_t546 * V_17 = {0};
	Enumerator_t661  V_18 = {0};
	float V_19 = 0.0f;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	Exception_t108 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t108 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B39_0 = 0;
	{
		float L_0 = ___x;
		float L_1 = ___width;
		GUILayoutEntry_SetHorizontal_m3265(__this, L_0, L_1, /*hidden argument*/NULL);
		bool L_2 = (__this->___resetCoords_12);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		___x = (0.0f);
	}

IL_001a:
	{
		GUIStyle_t545 * L_3 = GUILayoutEntry_get_style_m3260(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		RectOffset_t304 * L_4 = GUIStyle_get_padding_m3369(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		bool L_5 = (__this->___isVertical_11);
		if (!L_5)
		{
			goto IL_01bb;
		}
	}
	{
		GUIStyle_t545 * L_6 = GUILayoutEntry_get_style_m3260(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t545_il2cpp_TypeInfo_var);
		GUIStyle_t545 * L_7 = GUIStyle_get_none_m3370(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((Object_t*)(GUIStyle_t545 *)L_6) == ((Object_t*)(GUIStyle_t545 *)L_7)))
		{
			goto IL_00eb;
		}
	}
	{
		List_1_t547 * L_8 = (__this->___entries_10);
		NullCheck(L_8);
		Enumerator_t661  L_9 = List_1_GetEnumerator_m3629(L_8, /*hidden argument*/List_1_GetEnumerator_m3629_MethodInfo_var);
		V_2 = L_9;
	}

IL_004d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00c9;
		}

IL_0052:
		{
			GUILayoutEntry_t546 * L_10 = Enumerator_get_Current_m3630((&V_2), /*hidden argument*/Enumerator_get_Current_m3630_MethodInfo_var);
			V_1 = L_10;
			GUILayoutEntry_t546 * L_11 = V_1;
			NullCheck(L_11);
			RectOffset_t304 * L_12 = (RectOffset_t304 *)VirtFuncInvoker0< RectOffset_t304 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_11);
			NullCheck(L_12);
			int32_t L_13 = RectOffset_get_left_m2396(L_12, /*hidden argument*/NULL);
			RectOffset_t304 * L_14 = V_0;
			NullCheck(L_14);
			int32_t L_15 = RectOffset_get_left_m2396(L_14, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t69_il2cpp_TypeInfo_var);
			int32_t L_16 = Mathf_Max_m540(NULL /*static, unused*/, L_13, L_15, /*hidden argument*/NULL);
			V_3 = (((float)L_16));
			float L_17 = ___x;
			float L_18 = V_3;
			V_4 = ((float)((float)L_17+(float)L_18));
			float L_19 = ___width;
			GUILayoutEntry_t546 * L_20 = V_1;
			NullCheck(L_20);
			RectOffset_t304 * L_21 = (RectOffset_t304 *)VirtFuncInvoker0< RectOffset_t304 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_20);
			NullCheck(L_21);
			int32_t L_22 = RectOffset_get_right_m3359(L_21, /*hidden argument*/NULL);
			RectOffset_t304 * L_23 = V_0;
			NullCheck(L_23);
			int32_t L_24 = RectOffset_get_right_m3359(L_23, /*hidden argument*/NULL);
			int32_t L_25 = Mathf_Max_m540(NULL /*static, unused*/, L_22, L_24, /*hidden argument*/NULL);
			float L_26 = V_3;
			V_5 = ((float)((float)((float)((float)L_19-(float)(((float)L_25))))-(float)L_26));
			GUILayoutEntry_t546 * L_27 = V_1;
			NullCheck(L_27);
			int32_t L_28 = (L_27->___stretchWidth_5);
			if (!L_28)
			{
				goto IL_00ae;
			}
		}

IL_009f:
		{
			GUILayoutEntry_t546 * L_29 = V_1;
			float L_30 = V_4;
			float L_31 = V_5;
			NullCheck(L_29);
			VirtActionInvoker2< float, float >::Invoke(7 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_29, L_30, L_31);
			goto IL_00c9;
		}

IL_00ae:
		{
			GUILayoutEntry_t546 * L_32 = V_1;
			float L_33 = V_4;
			float L_34 = V_5;
			GUILayoutEntry_t546 * L_35 = V_1;
			NullCheck(L_35);
			float L_36 = (L_35->___minWidth_0);
			GUILayoutEntry_t546 * L_37 = V_1;
			NullCheck(L_37);
			float L_38 = (L_37->___maxWidth_1);
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t69_il2cpp_TypeInfo_var);
			float L_39 = Mathf_Clamp_m292(NULL /*static, unused*/, L_34, L_36, L_38, /*hidden argument*/NULL);
			NullCheck(L_32);
			VirtActionInvoker2< float, float >::Invoke(7 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_32, L_33, L_39);
		}

IL_00c9:
		{
			bool L_40 = Enumerator_MoveNext_m3631((&V_2), /*hidden argument*/Enumerator_MoveNext_m3631_MethodInfo_var);
			if (L_40)
			{
				goto IL_0052;
			}
		}

IL_00d5:
		{
			IL2CPP_LEAVE(0xE6, FINALLY_00da);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t108 *)e.ex;
		goto FINALLY_00da;
	}

FINALLY_00da:
	{ // begin finally (depth: 1)
		Enumerator_t661  L_41 = V_2;
		Enumerator_t661  L_42 = L_41;
		Object_t * L_43 = Box(Enumerator_t661_il2cpp_TypeInfo_var, &L_42);
		NullCheck(L_43);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t359_il2cpp_TypeInfo_var, L_43);
		IL2CPP_END_FINALLY(218)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(218)
	{
		IL2CPP_JUMP_TBL(0xE6, IL_00e6)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t108 *)
	}

IL_00e6:
	{
		goto IL_01b6;
	}

IL_00eb:
	{
		float L_44 = ___x;
		RectOffset_t304 * L_45 = (RectOffset_t304 *)VirtFuncInvoker0< RectOffset_t304 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutGroup::get_margin() */, __this);
		NullCheck(L_45);
		int32_t L_46 = RectOffset_get_left_m2396(L_45, /*hidden argument*/NULL);
		V_6 = ((float)((float)L_44-(float)(((float)L_46))));
		float L_47 = ___width;
		RectOffset_t304 * L_48 = (RectOffset_t304 *)VirtFuncInvoker0< RectOffset_t304 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutGroup::get_margin() */, __this);
		NullCheck(L_48);
		int32_t L_49 = RectOffset_get_horizontal_m2391(L_48, /*hidden argument*/NULL);
		V_7 = ((float)((float)L_47+(float)(((float)L_49))));
		List_1_t547 * L_50 = (__this->___entries_10);
		NullCheck(L_50);
		Enumerator_t661  L_51 = List_1_GetEnumerator_m3629(L_50, /*hidden argument*/List_1_GetEnumerator_m3629_MethodInfo_var);
		V_9 = L_51;
	}

IL_0118:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0198;
		}

IL_011d:
		{
			GUILayoutEntry_t546 * L_52 = Enumerator_get_Current_m3630((&V_9), /*hidden argument*/Enumerator_get_Current_m3630_MethodInfo_var);
			V_8 = L_52;
			GUILayoutEntry_t546 * L_53 = V_8;
			NullCheck(L_53);
			int32_t L_54 = (L_53->___stretchWidth_5);
			if (!L_54)
			{
				goto IL_015e;
			}
		}

IL_0132:
		{
			GUILayoutEntry_t546 * L_55 = V_8;
			float L_56 = V_6;
			GUILayoutEntry_t546 * L_57 = V_8;
			NullCheck(L_57);
			RectOffset_t304 * L_58 = (RectOffset_t304 *)VirtFuncInvoker0< RectOffset_t304 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_57);
			NullCheck(L_58);
			int32_t L_59 = RectOffset_get_left_m2396(L_58, /*hidden argument*/NULL);
			float L_60 = V_7;
			GUILayoutEntry_t546 * L_61 = V_8;
			NullCheck(L_61);
			RectOffset_t304 * L_62 = (RectOffset_t304 *)VirtFuncInvoker0< RectOffset_t304 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_61);
			NullCheck(L_62);
			int32_t L_63 = RectOffset_get_horizontal_m2391(L_62, /*hidden argument*/NULL);
			NullCheck(L_55);
			VirtActionInvoker2< float, float >::Invoke(7 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_55, ((float)((float)L_56+(float)(((float)L_59)))), ((float)((float)L_60-(float)(((float)L_63)))));
			goto IL_0198;
		}

IL_015e:
		{
			GUILayoutEntry_t546 * L_64 = V_8;
			float L_65 = V_6;
			GUILayoutEntry_t546 * L_66 = V_8;
			NullCheck(L_66);
			RectOffset_t304 * L_67 = (RectOffset_t304 *)VirtFuncInvoker0< RectOffset_t304 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_66);
			NullCheck(L_67);
			int32_t L_68 = RectOffset_get_left_m2396(L_67, /*hidden argument*/NULL);
			float L_69 = V_7;
			GUILayoutEntry_t546 * L_70 = V_8;
			NullCheck(L_70);
			RectOffset_t304 * L_71 = (RectOffset_t304 *)VirtFuncInvoker0< RectOffset_t304 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_70);
			NullCheck(L_71);
			int32_t L_72 = RectOffset_get_horizontal_m2391(L_71, /*hidden argument*/NULL);
			GUILayoutEntry_t546 * L_73 = V_8;
			NullCheck(L_73);
			float L_74 = (L_73->___minWidth_0);
			GUILayoutEntry_t546 * L_75 = V_8;
			NullCheck(L_75);
			float L_76 = (L_75->___maxWidth_1);
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t69_il2cpp_TypeInfo_var);
			float L_77 = Mathf_Clamp_m292(NULL /*static, unused*/, ((float)((float)L_69-(float)(((float)L_72)))), L_74, L_76, /*hidden argument*/NULL);
			NullCheck(L_64);
			VirtActionInvoker2< float, float >::Invoke(7 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_64, ((float)((float)L_65+(float)(((float)L_68)))), L_77);
		}

IL_0198:
		{
			bool L_78 = Enumerator_MoveNext_m3631((&V_9), /*hidden argument*/Enumerator_MoveNext_m3631_MethodInfo_var);
			if (L_78)
			{
				goto IL_011d;
			}
		}

IL_01a4:
		{
			IL2CPP_LEAVE(0x1B6, FINALLY_01a9);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t108 *)e.ex;
		goto FINALLY_01a9;
	}

FINALLY_01a9:
	{ // begin finally (depth: 1)
		Enumerator_t661  L_79 = V_9;
		Enumerator_t661  L_80 = L_79;
		Object_t * L_81 = Box(Enumerator_t661_il2cpp_TypeInfo_var, &L_80);
		NullCheck(L_81);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t359_il2cpp_TypeInfo_var, L_81);
		IL2CPP_END_FINALLY(425)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(425)
	{
		IL2CPP_JUMP_TBL(0x1B6, IL_01b6)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t108 *)
	}

IL_01b6:
	{
		goto IL_03b0;
	}

IL_01bb:
	{
		GUIStyle_t545 * L_82 = GUILayoutEntry_get_style_m3260(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t545_il2cpp_TypeInfo_var);
		GUIStyle_t545 * L_83 = GUIStyle_get_none_m3370(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((Object_t*)(GUIStyle_t545 *)L_82) == ((Object_t*)(GUIStyle_t545 *)L_83)))
		{
			goto IL_0248;
		}
	}
	{
		RectOffset_t304 * L_84 = V_0;
		NullCheck(L_84);
		int32_t L_85 = RectOffset_get_left_m2396(L_84, /*hidden argument*/NULL);
		V_10 = (((float)L_85));
		RectOffset_t304 * L_86 = V_0;
		NullCheck(L_86);
		int32_t L_87 = RectOffset_get_right_m3359(L_86, /*hidden argument*/NULL);
		V_11 = (((float)L_87));
		List_1_t547 * L_88 = (__this->___entries_10);
		NullCheck(L_88);
		int32_t L_89 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count() */, L_88);
		if (!L_89)
		{
			goto IL_0239;
		}
	}
	{
		float L_90 = V_10;
		List_1_t547 * L_91 = (__this->___entries_10);
		NullCheck(L_91);
		GUILayoutEntry_t546 * L_92 = (GUILayoutEntry_t546 *)VirtFuncInvoker1< GUILayoutEntry_t546 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Item(System.Int32) */, L_91, 0);
		NullCheck(L_92);
		RectOffset_t304 * L_93 = (RectOffset_t304 *)VirtFuncInvoker0< RectOffset_t304 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_92);
		NullCheck(L_93);
		int32_t L_94 = RectOffset_get_left_m2396(L_93, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t69_il2cpp_TypeInfo_var);
		float L_95 = Mathf_Max_m2345(NULL /*static, unused*/, L_90, (((float)L_94)), /*hidden argument*/NULL);
		V_10 = L_95;
		float L_96 = V_11;
		List_1_t547 * L_97 = (__this->___entries_10);
		List_1_t547 * L_98 = (__this->___entries_10);
		NullCheck(L_98);
		int32_t L_99 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count() */, L_98);
		NullCheck(L_97);
		GUILayoutEntry_t546 * L_100 = (GUILayoutEntry_t546 *)VirtFuncInvoker1< GUILayoutEntry_t546 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Item(System.Int32) */, L_97, ((int32_t)((int32_t)L_99-(int32_t)1)));
		NullCheck(L_100);
		RectOffset_t304 * L_101 = (RectOffset_t304 *)VirtFuncInvoker0< RectOffset_t304 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_100);
		NullCheck(L_101);
		int32_t L_102 = RectOffset_get_right_m3359(L_101, /*hidden argument*/NULL);
		float L_103 = Mathf_Max_m2345(NULL /*static, unused*/, L_96, (((float)L_102)), /*hidden argument*/NULL);
		V_11 = L_103;
	}

IL_0239:
	{
		float L_104 = ___x;
		float L_105 = V_10;
		___x = ((float)((float)L_104+(float)L_105));
		float L_106 = ___width;
		float L_107 = V_11;
		float L_108 = V_10;
		___width = ((float)((float)L_106-(float)((float)((float)L_107+(float)L_108))));
	}

IL_0248:
	{
		float L_109 = ___width;
		float L_110 = (__this->___spacing_13);
		List_1_t547 * L_111 = (__this->___entries_10);
		NullCheck(L_111);
		int32_t L_112 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count() */, L_111);
		V_12 = ((float)((float)L_109-(float)((float)((float)L_110*(float)(((float)((int32_t)((int32_t)L_112-(int32_t)1))))))));
		V_13 = (0.0f);
		float L_113 = (__this->___m_ChildMinWidth_22);
		float L_114 = (__this->___m_ChildMaxWidth_23);
		if ((((float)L_113) == ((float)L_114)))
		{
			goto IL_02a1;
		}
	}
	{
		float L_115 = V_12;
		float L_116 = (__this->___m_ChildMinWidth_22);
		float L_117 = (__this->___m_ChildMaxWidth_23);
		float L_118 = (__this->___m_ChildMinWidth_22);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t69_il2cpp_TypeInfo_var);
		float L_119 = Mathf_Clamp_m292(NULL /*static, unused*/, ((float)((float)((float)((float)L_115-(float)L_116))/(float)((float)((float)L_117-(float)L_118)))), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_13 = L_119;
	}

IL_02a1:
	{
		V_14 = (0.0f);
		float L_120 = V_12;
		float L_121 = (__this->___m_ChildMaxWidth_23);
		if ((!(((float)L_120) > ((float)L_121))))
		{
			goto IL_02d4;
		}
	}
	{
		int32_t L_122 = (__this->___m_StretchableCountX_18);
		if ((((int32_t)L_122) <= ((int32_t)0)))
		{
			goto IL_02d4;
		}
	}
	{
		float L_123 = V_12;
		float L_124 = (__this->___m_ChildMaxWidth_23);
		int32_t L_125 = (__this->___m_StretchableCountX_18);
		V_14 = ((float)((float)((float)((float)L_123-(float)L_124))/(float)(((float)L_125))));
	}

IL_02d4:
	{
		V_15 = 0;
		V_16 = 1;
		List_1_t547 * L_126 = (__this->___entries_10);
		NullCheck(L_126);
		Enumerator_t661  L_127 = List_1_GetEnumerator_m3629(L_126, /*hidden argument*/List_1_GetEnumerator_m3629_MethodInfo_var);
		V_18 = L_127;
	}

IL_02e7:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0392;
		}

IL_02ec:
		{
			GUILayoutEntry_t546 * L_128 = Enumerator_get_Current_m3630((&V_18), /*hidden argument*/Enumerator_get_Current_m3630_MethodInfo_var);
			V_17 = L_128;
			GUILayoutEntry_t546 * L_129 = V_17;
			NullCheck(L_129);
			float L_130 = (L_129->___minWidth_0);
			GUILayoutEntry_t546 * L_131 = V_17;
			NullCheck(L_131);
			float L_132 = (L_131->___maxWidth_1);
			float L_133 = V_13;
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t69_il2cpp_TypeInfo_var);
			float L_134 = Mathf_Lerp_m407(NULL /*static, unused*/, L_130, L_132, L_133, /*hidden argument*/NULL);
			V_19 = L_134;
			float L_135 = V_19;
			float L_136 = V_14;
			GUILayoutEntry_t546 * L_137 = V_17;
			NullCheck(L_137);
			int32_t L_138 = (L_137->___stretchWidth_5);
			V_19 = ((float)((float)L_135+(float)((float)((float)L_136*(float)(((float)L_138))))));
			GUILayoutEntry_t546 * L_139 = V_17;
			NullCheck(L_139);
			GUIStyle_t545 * L_140 = GUILayoutEntry_get_style_m3260(L_139, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t543_il2cpp_TypeInfo_var);
			GUIStyle_t545 * L_141 = GUILayoutUtility_get_spaceStyle_m3254(NULL /*static, unused*/, /*hidden argument*/NULL);
			if ((((Object_t*)(GUIStyle_t545 *)L_140) == ((Object_t*)(GUIStyle_t545 *)L_141)))
			{
				goto IL_0371;
			}
		}

IL_032d:
		{
			GUILayoutEntry_t546 * L_142 = V_17;
			NullCheck(L_142);
			RectOffset_t304 * L_143 = (RectOffset_t304 *)VirtFuncInvoker0< RectOffset_t304 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_142);
			NullCheck(L_143);
			int32_t L_144 = RectOffset_get_left_m2396(L_143, /*hidden argument*/NULL);
			V_20 = L_144;
			bool L_145 = V_16;
			if (!L_145)
			{
				goto IL_0348;
			}
		}

IL_0342:
		{
			V_20 = 0;
			V_16 = 0;
		}

IL_0348:
		{
			int32_t L_146 = V_15;
			int32_t L_147 = V_20;
			if ((((int32_t)L_146) <= ((int32_t)L_147)))
			{
				goto IL_0358;
			}
		}

IL_0351:
		{
			int32_t L_148 = V_15;
			G_B39_0 = L_148;
			goto IL_035a;
		}

IL_0358:
		{
			int32_t L_149 = V_20;
			G_B39_0 = L_149;
		}

IL_035a:
		{
			V_21 = G_B39_0;
			float L_150 = ___x;
			int32_t L_151 = V_21;
			___x = ((float)((float)L_150+(float)(((float)L_151))));
			GUILayoutEntry_t546 * L_152 = V_17;
			NullCheck(L_152);
			RectOffset_t304 * L_153 = (RectOffset_t304 *)VirtFuncInvoker0< RectOffset_t304 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_152);
			NullCheck(L_153);
			int32_t L_154 = RectOffset_get_right_m3359(L_153, /*hidden argument*/NULL);
			V_15 = L_154;
		}

IL_0371:
		{
			GUILayoutEntry_t546 * L_155 = V_17;
			float L_156 = ___x;
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t69_il2cpp_TypeInfo_var);
			float L_157 = roundf(L_156);
			float L_158 = V_19;
			float L_159 = roundf(L_158);
			NullCheck(L_155);
			VirtActionInvoker2< float, float >::Invoke(7 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_155, L_157, L_159);
			float L_160 = ___x;
			float L_161 = V_19;
			float L_162 = (__this->___spacing_13);
			___x = ((float)((float)L_160+(float)((float)((float)L_161+(float)L_162))));
		}

IL_0392:
		{
			bool L_163 = Enumerator_MoveNext_m3631((&V_18), /*hidden argument*/Enumerator_MoveNext_m3631_MethodInfo_var);
			if (L_163)
			{
				goto IL_02ec;
			}
		}

IL_039e:
		{
			IL2CPP_LEAVE(0x3B0, FINALLY_03a3);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t108 *)e.ex;
		goto FINALLY_03a3;
	}

FINALLY_03a3:
	{ // begin finally (depth: 1)
		Enumerator_t661  L_164 = V_18;
		Enumerator_t661  L_165 = L_164;
		Object_t * L_166 = Box(Enumerator_t661_il2cpp_TypeInfo_var, &L_165);
		NullCheck(L_166);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t359_il2cpp_TypeInfo_var, L_166);
		IL2CPP_END_FINALLY(931)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(931)
	{
		IL2CPP_JUMP_TBL(0x3B0, IL_03b0)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t108 *)
	}

IL_03b0:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::CalcHeight()
extern TypeInfo* GUILayoutUtility_t543_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t69_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t661_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t359_il2cpp_TypeInfo_var;
extern TypeInfo* GUIStyle_t545_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m3629_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3630_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3631_MethodInfo_var;
extern "C" void GUILayoutGroup_CalcHeight_m3277 (GUILayoutGroup_t542 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutUtility_t543_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(366);
		Mathf_t69_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		Enumerator_t661_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(373);
		IDisposable_t359_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(124);
		GUIStyle_t545_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		List_1_GetEnumerator_m3629_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483981);
		Enumerator_get_Current_m3630_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483982);
		Enumerator_MoveNext_m3631_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483983);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	GUILayoutEntry_t546 * V_4 = {0};
	Enumerator_t661  V_5 = {0};
	RectOffset_t304 * V_6 = {0};
	int32_t V_7 = 0;
	bool V_8 = false;
	GUILayoutEntry_t546 * V_9 = {0};
	Enumerator_t661  V_10 = {0};
	RectOffset_t304 * V_11 = {0};
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	Exception_t108 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t108 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B36_0 = 0;
	int32_t G_B36_1 = 0;
	GUILayoutGroup_t542 * G_B36_2 = {0};
	int32_t G_B35_0 = 0;
	int32_t G_B35_1 = 0;
	GUILayoutGroup_t542 * G_B35_2 = {0};
	int32_t G_B37_0 = 0;
	int32_t G_B37_1 = 0;
	int32_t G_B37_2 = 0;
	GUILayoutGroup_t542 * G_B37_3 = {0};
	{
		List_1_t547 * L_0 = (__this->___entries_10);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count() */, L_0);
		if (L_1)
		{
			goto IL_0033;
		}
	}
	{
		GUIStyle_t545 * L_2 = GUILayoutEntry_get_style_m3260(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		RectOffset_t304 * L_3 = GUIStyle_get_padding_m3369(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = RectOffset_get_vertical_m2393(L_3, /*hidden argument*/NULL);
		float L_5 = (((float)L_4));
		V_14 = L_5;
		((GUILayoutEntry_t546 *)__this)->___minHeight_2 = L_5;
		float L_6 = V_14;
		((GUILayoutEntry_t546 *)__this)->___maxHeight_3 = L_6;
		return;
	}

IL_0033:
	{
		V_0 = 0;
		V_1 = 0;
		__this->___m_ChildMinHeight_24 = (0.0f);
		__this->___m_ChildMaxHeight_25 = (0.0f);
		__this->___m_StretchableCountY_19 = 0;
		bool L_7 = (__this->___isVertical_11);
		if (!L_7)
		{
			goto IL_01d4;
		}
	}
	{
		V_2 = 0;
		V_3 = 1;
		List_1_t547 * L_8 = (__this->___entries_10);
		NullCheck(L_8);
		Enumerator_t661  L_9 = List_1_GetEnumerator_m3629(L_8, /*hidden argument*/List_1_GetEnumerator_m3629_MethodInfo_var);
		V_5 = L_9;
	}

IL_0070:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0159;
		}

IL_0075:
		{
			GUILayoutEntry_t546 * L_10 = Enumerator_get_Current_m3630((&V_5), /*hidden argument*/Enumerator_get_Current_m3630_MethodInfo_var);
			V_4 = L_10;
			GUILayoutEntry_t546 * L_11 = V_4;
			NullCheck(L_11);
			VirtActionInvoker0::Invoke(6 /* System.Void UnityEngine.GUILayoutEntry::CalcHeight() */, L_11);
			GUILayoutEntry_t546 * L_12 = V_4;
			NullCheck(L_12);
			RectOffset_t304 * L_13 = (RectOffset_t304 *)VirtFuncInvoker0< RectOffset_t304 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_12);
			V_6 = L_13;
			GUILayoutEntry_t546 * L_14 = V_4;
			NullCheck(L_14);
			GUIStyle_t545 * L_15 = GUILayoutEntry_get_style_m3260(L_14, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t543_il2cpp_TypeInfo_var);
			GUIStyle_t545 * L_16 = GUILayoutUtility_get_spaceStyle_m3254(NULL /*static, unused*/, /*hidden argument*/NULL);
			if ((((Object_t*)(GUIStyle_t545 *)L_15) == ((Object_t*)(GUIStyle_t545 *)L_16)))
			{
				goto IL_011d;
			}
		}

IL_009f:
		{
			bool L_17 = V_3;
			if (L_17)
			{
				goto IL_00b9;
			}
		}

IL_00a5:
		{
			int32_t L_18 = V_2;
			RectOffset_t304 * L_19 = V_6;
			NullCheck(L_19);
			int32_t L_20 = RectOffset_get_top_m2397(L_19, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t69_il2cpp_TypeInfo_var);
			int32_t L_21 = Mathf_Max_m540(NULL /*static, unused*/, L_18, L_20, /*hidden argument*/NULL);
			V_7 = L_21;
			goto IL_00be;
		}

IL_00b9:
		{
			V_7 = 0;
			V_3 = 0;
		}

IL_00be:
		{
			float L_22 = (__this->___m_ChildMinHeight_24);
			GUILayoutEntry_t546 * L_23 = V_4;
			NullCheck(L_23);
			float L_24 = (L_23->___minHeight_2);
			float L_25 = (__this->___spacing_13);
			int32_t L_26 = V_7;
			__this->___m_ChildMinHeight_24 = ((float)((float)L_22+(float)((float)((float)((float)((float)L_24+(float)L_25))+(float)(((float)L_26))))));
			float L_27 = (__this->___m_ChildMaxHeight_25);
			GUILayoutEntry_t546 * L_28 = V_4;
			NullCheck(L_28);
			float L_29 = (L_28->___maxHeight_3);
			float L_30 = (__this->___spacing_13);
			int32_t L_31 = V_7;
			__this->___m_ChildMaxHeight_25 = ((float)((float)L_27+(float)((float)((float)((float)((float)L_29+(float)L_30))+(float)(((float)L_31))))));
			RectOffset_t304 * L_32 = V_6;
			NullCheck(L_32);
			int32_t L_33 = RectOffset_get_bottom_m3362(L_32, /*hidden argument*/NULL);
			V_2 = L_33;
			int32_t L_34 = (__this->___m_StretchableCountY_19);
			GUILayoutEntry_t546 * L_35 = V_4;
			NullCheck(L_35);
			int32_t L_36 = (L_35->___stretchHeight_6);
			__this->___m_StretchableCountY_19 = ((int32_t)((int32_t)L_34+(int32_t)L_36));
			goto IL_0159;
		}

IL_011d:
		{
			float L_37 = (__this->___m_ChildMinHeight_24);
			GUILayoutEntry_t546 * L_38 = V_4;
			NullCheck(L_38);
			float L_39 = (L_38->___minHeight_2);
			__this->___m_ChildMinHeight_24 = ((float)((float)L_37+(float)L_39));
			float L_40 = (__this->___m_ChildMaxHeight_25);
			GUILayoutEntry_t546 * L_41 = V_4;
			NullCheck(L_41);
			float L_42 = (L_41->___maxHeight_3);
			__this->___m_ChildMaxHeight_25 = ((float)((float)L_40+(float)L_42));
			int32_t L_43 = (__this->___m_StretchableCountY_19);
			GUILayoutEntry_t546 * L_44 = V_4;
			NullCheck(L_44);
			int32_t L_45 = (L_44->___stretchHeight_6);
			__this->___m_StretchableCountY_19 = ((int32_t)((int32_t)L_43+(int32_t)L_45));
		}

IL_0159:
		{
			bool L_46 = Enumerator_MoveNext_m3631((&V_5), /*hidden argument*/Enumerator_MoveNext_m3631_MethodInfo_var);
			if (L_46)
			{
				goto IL_0075;
			}
		}

IL_0165:
		{
			IL2CPP_LEAVE(0x177, FINALLY_016a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t108 *)e.ex;
		goto FINALLY_016a;
	}

FINALLY_016a:
	{ // begin finally (depth: 1)
		Enumerator_t661  L_47 = V_5;
		Enumerator_t661  L_48 = L_47;
		Object_t * L_49 = Box(Enumerator_t661_il2cpp_TypeInfo_var, &L_48);
		NullCheck(L_49);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t359_il2cpp_TypeInfo_var, L_49);
		IL2CPP_END_FINALLY(362)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(362)
	{
		IL2CPP_JUMP_TBL(0x177, IL_0177)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t108 *)
	}

IL_0177:
	{
		float L_50 = (__this->___m_ChildMinHeight_24);
		float L_51 = (__this->___spacing_13);
		__this->___m_ChildMinHeight_24 = ((float)((float)L_50-(float)L_51));
		float L_52 = (__this->___m_ChildMaxHeight_25);
		float L_53 = (__this->___spacing_13);
		__this->___m_ChildMaxHeight_25 = ((float)((float)L_52-(float)L_53));
		List_1_t547 * L_54 = (__this->___entries_10);
		NullCheck(L_54);
		int32_t L_55 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count() */, L_54);
		if (!L_55)
		{
			goto IL_01cb;
		}
	}
	{
		List_1_t547 * L_56 = (__this->___entries_10);
		NullCheck(L_56);
		GUILayoutEntry_t546 * L_57 = (GUILayoutEntry_t546 *)VirtFuncInvoker1< GUILayoutEntry_t546 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Item(System.Int32) */, L_56, 0);
		NullCheck(L_57);
		RectOffset_t304 * L_58 = (RectOffset_t304 *)VirtFuncInvoker0< RectOffset_t304 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_57);
		NullCheck(L_58);
		int32_t L_59 = RectOffset_get_top_m2397(L_58, /*hidden argument*/NULL);
		V_0 = L_59;
		int32_t L_60 = V_2;
		V_1 = L_60;
		goto IL_01cf;
	}

IL_01cb:
	{
		int32_t L_61 = 0;
		V_0 = L_61;
		V_1 = L_61;
	}

IL_01cf:
	{
		goto IL_02b0;
	}

IL_01d4:
	{
		V_8 = 1;
		List_1_t547 * L_62 = (__this->___entries_10);
		NullCheck(L_62);
		Enumerator_t661  L_63 = List_1_GetEnumerator_m3629(L_62, /*hidden argument*/List_1_GetEnumerator_m3629_MethodInfo_var);
		V_10 = L_63;
	}

IL_01e4:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0292;
		}

IL_01e9:
		{
			GUILayoutEntry_t546 * L_64 = Enumerator_get_Current_m3630((&V_10), /*hidden argument*/Enumerator_get_Current_m3630_MethodInfo_var);
			V_9 = L_64;
			GUILayoutEntry_t546 * L_65 = V_9;
			NullCheck(L_65);
			VirtActionInvoker0::Invoke(6 /* System.Void UnityEngine.GUILayoutEntry::CalcHeight() */, L_65);
			GUILayoutEntry_t546 * L_66 = V_9;
			NullCheck(L_66);
			RectOffset_t304 * L_67 = (RectOffset_t304 *)VirtFuncInvoker0< RectOffset_t304 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_66);
			V_11 = L_67;
			GUILayoutEntry_t546 * L_68 = V_9;
			NullCheck(L_68);
			GUIStyle_t545 * L_69 = GUILayoutEntry_get_style_m3260(L_68, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t543_il2cpp_TypeInfo_var);
			GUIStyle_t545 * L_70 = GUILayoutUtility_get_spaceStyle_m3254(NULL /*static, unused*/, /*hidden argument*/NULL);
			if ((((Object_t*)(GUIStyle_t545 *)L_69) == ((Object_t*)(GUIStyle_t545 *)L_70)))
			{
				goto IL_027e;
			}
		}

IL_0213:
		{
			bool L_71 = V_8;
			if (L_71)
			{
				goto IL_023b;
			}
		}

IL_021a:
		{
			RectOffset_t304 * L_72 = V_11;
			NullCheck(L_72);
			int32_t L_73 = RectOffset_get_top_m2397(L_72, /*hidden argument*/NULL);
			int32_t L_74 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t69_il2cpp_TypeInfo_var);
			int32_t L_75 = Mathf_Min_m541(NULL /*static, unused*/, L_73, L_74, /*hidden argument*/NULL);
			V_0 = L_75;
			RectOffset_t304 * L_76 = V_11;
			NullCheck(L_76);
			int32_t L_77 = RectOffset_get_bottom_m3362(L_76, /*hidden argument*/NULL);
			int32_t L_78 = V_1;
			int32_t L_79 = Mathf_Min_m541(NULL /*static, unused*/, L_77, L_78, /*hidden argument*/NULL);
			V_1 = L_79;
			goto IL_024e;
		}

IL_023b:
		{
			RectOffset_t304 * L_80 = V_11;
			NullCheck(L_80);
			int32_t L_81 = RectOffset_get_top_m2397(L_80, /*hidden argument*/NULL);
			V_0 = L_81;
			RectOffset_t304 * L_82 = V_11;
			NullCheck(L_82);
			int32_t L_83 = RectOffset_get_bottom_m3362(L_82, /*hidden argument*/NULL);
			V_1 = L_83;
			V_8 = 0;
		}

IL_024e:
		{
			GUILayoutEntry_t546 * L_84 = V_9;
			NullCheck(L_84);
			float L_85 = (L_84->___minHeight_2);
			float L_86 = (__this->___m_ChildMinHeight_24);
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t69_il2cpp_TypeInfo_var);
			float L_87 = Mathf_Max_m2345(NULL /*static, unused*/, L_85, L_86, /*hidden argument*/NULL);
			__this->___m_ChildMinHeight_24 = L_87;
			GUILayoutEntry_t546 * L_88 = V_9;
			NullCheck(L_88);
			float L_89 = (L_88->___maxHeight_3);
			float L_90 = (__this->___m_ChildMaxHeight_25);
			float L_91 = Mathf_Max_m2345(NULL /*static, unused*/, L_89, L_90, /*hidden argument*/NULL);
			__this->___m_ChildMaxHeight_25 = L_91;
		}

IL_027e:
		{
			int32_t L_92 = (__this->___m_StretchableCountY_19);
			GUILayoutEntry_t546 * L_93 = V_9;
			NullCheck(L_93);
			int32_t L_94 = (L_93->___stretchHeight_6);
			__this->___m_StretchableCountY_19 = ((int32_t)((int32_t)L_92+(int32_t)L_94));
		}

IL_0292:
		{
			bool L_95 = Enumerator_MoveNext_m3631((&V_10), /*hidden argument*/Enumerator_MoveNext_m3631_MethodInfo_var);
			if (L_95)
			{
				goto IL_01e9;
			}
		}

IL_029e:
		{
			IL2CPP_LEAVE(0x2B0, FINALLY_02a3);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t108 *)e.ex;
		goto FINALLY_02a3;
	}

FINALLY_02a3:
	{ // begin finally (depth: 1)
		Enumerator_t661  L_96 = V_10;
		Enumerator_t661  L_97 = L_96;
		Object_t * L_98 = Box(Enumerator_t661_il2cpp_TypeInfo_var, &L_97);
		NullCheck(L_98);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t359_il2cpp_TypeInfo_var, L_98);
		IL2CPP_END_FINALLY(675)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(675)
	{
		IL2CPP_JUMP_TBL(0x2B0, IL_02b0)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t108 *)
	}

IL_02b0:
	{
		V_12 = (0.0f);
		V_13 = (0.0f);
		GUIStyle_t545 * L_99 = GUILayoutEntry_get_style_m3260(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t545_il2cpp_TypeInfo_var);
		GUIStyle_t545 * L_100 = GUIStyle_get_none_m3370(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((Object_t*)(GUIStyle_t545 *)L_99) == ((Object_t*)(GUIStyle_t545 *)L_100))))
		{
			goto IL_02d9;
		}
	}
	{
		bool L_101 = (__this->___m_UserSpecifiedHeight_21);
		if (!L_101)
		{
			goto IL_0310;
		}
	}

IL_02d9:
	{
		GUIStyle_t545 * L_102 = GUILayoutEntry_get_style_m3260(__this, /*hidden argument*/NULL);
		NullCheck(L_102);
		RectOffset_t304 * L_103 = GUIStyle_get_padding_m3369(L_102, /*hidden argument*/NULL);
		NullCheck(L_103);
		int32_t L_104 = RectOffset_get_top_m2397(L_103, /*hidden argument*/NULL);
		int32_t L_105 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t69_il2cpp_TypeInfo_var);
		int32_t L_106 = Mathf_Max_m540(NULL /*static, unused*/, L_104, L_105, /*hidden argument*/NULL);
		V_12 = (((float)L_106));
		GUIStyle_t545 * L_107 = GUILayoutEntry_get_style_m3260(__this, /*hidden argument*/NULL);
		NullCheck(L_107);
		RectOffset_t304 * L_108 = GUIStyle_get_padding_m3369(L_107, /*hidden argument*/NULL);
		NullCheck(L_108);
		int32_t L_109 = RectOffset_get_bottom_m3362(L_108, /*hidden argument*/NULL);
		int32_t L_110 = V_1;
		int32_t L_111 = Mathf_Max_m540(NULL /*static, unused*/, L_109, L_110, /*hidden argument*/NULL);
		V_13 = (((float)L_111));
		goto IL_0332;
	}

IL_0310:
	{
		RectOffset_t304 * L_112 = (__this->___m_Margin_26);
		int32_t L_113 = V_0;
		NullCheck(L_112);
		RectOffset_set_top_m3361(L_112, L_113, /*hidden argument*/NULL);
		RectOffset_t304 * L_114 = (__this->___m_Margin_26);
		int32_t L_115 = V_1;
		NullCheck(L_114);
		RectOffset_set_bottom_m3363(L_114, L_115, /*hidden argument*/NULL);
		float L_116 = (0.0f);
		V_13 = L_116;
		V_12 = L_116;
	}

IL_0332:
	{
		float L_117 = (((GUILayoutEntry_t546 *)__this)->___minHeight_2);
		float L_118 = (__this->___m_ChildMinHeight_24);
		float L_119 = V_12;
		float L_120 = V_13;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t69_il2cpp_TypeInfo_var);
		float L_121 = Mathf_Max_m2345(NULL /*static, unused*/, L_117, ((float)((float)((float)((float)L_118+(float)L_119))+(float)L_120)), /*hidden argument*/NULL);
		((GUILayoutEntry_t546 *)__this)->___minHeight_2 = L_121;
		float L_122 = (((GUILayoutEntry_t546 *)__this)->___maxHeight_3);
		if ((!(((float)L_122) == ((float)(0.0f)))))
		{
			goto IL_03a1;
		}
	}
	{
		int32_t L_123 = (((GUILayoutEntry_t546 *)__this)->___stretchHeight_6);
		int32_t L_124 = (__this->___m_StretchableCountY_19);
		GUIStyle_t545 * L_125 = GUILayoutEntry_get_style_m3260(__this, /*hidden argument*/NULL);
		NullCheck(L_125);
		bool L_126 = GUIStyle_get_stretchHeight_m3382(L_125, /*hidden argument*/NULL);
		G_B35_0 = L_124;
		G_B35_1 = L_123;
		G_B35_2 = __this;
		if (!L_126)
		{
			G_B36_0 = L_124;
			G_B36_1 = L_123;
			G_B36_2 = __this;
			goto IL_0382;
		}
	}
	{
		G_B37_0 = 1;
		G_B37_1 = G_B35_0;
		G_B37_2 = G_B35_1;
		G_B37_3 = G_B35_2;
		goto IL_0383;
	}

IL_0382:
	{
		G_B37_0 = 0;
		G_B37_1 = G_B36_0;
		G_B37_2 = G_B36_1;
		G_B37_3 = G_B36_2;
	}

IL_0383:
	{
		NullCheck(G_B37_3);
		((GUILayoutEntry_t546 *)G_B37_3)->___stretchHeight_6 = ((int32_t)((int32_t)G_B37_2+(int32_t)((int32_t)((int32_t)G_B37_1+(int32_t)G_B37_0))));
		float L_127 = (__this->___m_ChildMaxHeight_25);
		float L_128 = V_12;
		float L_129 = V_13;
		((GUILayoutEntry_t546 *)__this)->___maxHeight_3 = ((float)((float)((float)((float)L_127+(float)L_128))+(float)L_129));
		goto IL_03a8;
	}

IL_03a1:
	{
		((GUILayoutEntry_t546 *)__this)->___stretchHeight_6 = 0;
	}

IL_03a8:
	{
		float L_130 = (((GUILayoutEntry_t546 *)__this)->___maxHeight_3);
		float L_131 = (((GUILayoutEntry_t546 *)__this)->___minHeight_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t69_il2cpp_TypeInfo_var);
		float L_132 = Mathf_Max_m2345(NULL /*static, unused*/, L_130, L_131, /*hidden argument*/NULL);
		((GUILayoutEntry_t546 *)__this)->___maxHeight_3 = L_132;
		GUIStyle_t545 * L_133 = GUILayoutEntry_get_style_m3260(__this, /*hidden argument*/NULL);
		NullCheck(L_133);
		float L_134 = GUIStyle_get_fixedHeight_m3379(L_133, /*hidden argument*/NULL);
		if ((((float)L_134) == ((float)(0.0f))))
		{
			goto IL_03f7;
		}
	}
	{
		GUIStyle_t545 * L_135 = GUILayoutEntry_get_style_m3260(__this, /*hidden argument*/NULL);
		NullCheck(L_135);
		float L_136 = GUIStyle_get_fixedHeight_m3379(L_135, /*hidden argument*/NULL);
		float L_137 = L_136;
		V_14 = L_137;
		((GUILayoutEntry_t546 *)__this)->___minHeight_2 = L_137;
		float L_138 = V_14;
		((GUILayoutEntry_t546 *)__this)->___maxHeight_3 = L_138;
		((GUILayoutEntry_t546 *)__this)->___stretchHeight_6 = 0;
	}

IL_03f7:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::SetVertical(System.Single,System.Single)
extern TypeInfo* GUIStyle_t545_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t69_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutUtility_t543_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t661_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t359_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m3629_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3630_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3631_MethodInfo_var;
extern "C" void GUILayoutGroup_SetVertical_m3278 (GUILayoutGroup_t542 * __this, float ___y, float ___height, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIStyle_t545_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		Mathf_t69_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		GUILayoutUtility_t543_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(366);
		Enumerator_t661_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(373);
		IDisposable_t359_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(124);
		List_1_GetEnumerator_m3629_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483981);
		Enumerator_get_Current_m3630_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483982);
		Enumerator_MoveNext_m3631_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483983);
		s_Il2CppMethodIntialized = true;
	}
	RectOffset_t304 * V_0 = {0};
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	int32_t V_6 = 0;
	bool V_7 = false;
	GUILayoutEntry_t546 * V_8 = {0};
	Enumerator_t661  V_9 = {0};
	float V_10 = 0.0f;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	GUILayoutEntry_t546 * V_13 = {0};
	Enumerator_t661  V_14 = {0};
	float V_15 = 0.0f;
	float V_16 = 0.0f;
	float V_17 = 0.0f;
	float V_18 = 0.0f;
	float V_19 = 0.0f;
	GUILayoutEntry_t546 * V_20 = {0};
	Enumerator_t661  V_21 = {0};
	Exception_t108 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t108 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B22_0 = 0;
	{
		float L_0 = ___y;
		float L_1 = ___height;
		GUILayoutEntry_SetVertical_m3266(__this, L_0, L_1, /*hidden argument*/NULL);
		List_1_t547 * L_2 = (__this->___entries_10);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count() */, L_2);
		if (L_3)
		{
			goto IL_0019;
		}
	}
	{
		return;
	}

IL_0019:
	{
		GUIStyle_t545 * L_4 = GUILayoutEntry_get_style_m3260(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		RectOffset_t304 * L_5 = GUIStyle_get_padding_m3369(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		bool L_6 = (__this->___resetCoords_12);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		___y = (0.0f);
	}

IL_0037:
	{
		bool L_7 = (__this->___isVertical_11);
		if (!L_7)
		{
			goto IL_022f;
		}
	}
	{
		GUIStyle_t545 * L_8 = GUILayoutEntry_get_style_m3260(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t545_il2cpp_TypeInfo_var);
		GUIStyle_t545 * L_9 = GUIStyle_get_none_m3370(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((Object_t*)(GUIStyle_t545 *)L_8) == ((Object_t*)(GUIStyle_t545 *)L_9)))
		{
			goto IL_00c6;
		}
	}
	{
		RectOffset_t304 * L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = RectOffset_get_top_m2397(L_10, /*hidden argument*/NULL);
		V_1 = (((float)L_11));
		RectOffset_t304 * L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = RectOffset_get_bottom_m3362(L_12, /*hidden argument*/NULL);
		V_2 = (((float)L_13));
		List_1_t547 * L_14 = (__this->___entries_10);
		NullCheck(L_14);
		int32_t L_15 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count() */, L_14);
		if (!L_15)
		{
			goto IL_00ba;
		}
	}
	{
		float L_16 = V_1;
		List_1_t547 * L_17 = (__this->___entries_10);
		NullCheck(L_17);
		GUILayoutEntry_t546 * L_18 = (GUILayoutEntry_t546 *)VirtFuncInvoker1< GUILayoutEntry_t546 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Item(System.Int32) */, L_17, 0);
		NullCheck(L_18);
		RectOffset_t304 * L_19 = (RectOffset_t304 *)VirtFuncInvoker0< RectOffset_t304 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_18);
		NullCheck(L_19);
		int32_t L_20 = RectOffset_get_top_m2397(L_19, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t69_il2cpp_TypeInfo_var);
		float L_21 = Mathf_Max_m2345(NULL /*static, unused*/, L_16, (((float)L_20)), /*hidden argument*/NULL);
		V_1 = L_21;
		float L_22 = V_2;
		List_1_t547 * L_23 = (__this->___entries_10);
		List_1_t547 * L_24 = (__this->___entries_10);
		NullCheck(L_24);
		int32_t L_25 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count() */, L_24);
		NullCheck(L_23);
		GUILayoutEntry_t546 * L_26 = (GUILayoutEntry_t546 *)VirtFuncInvoker1< GUILayoutEntry_t546 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Item(System.Int32) */, L_23, ((int32_t)((int32_t)L_25-(int32_t)1)));
		NullCheck(L_26);
		RectOffset_t304 * L_27 = (RectOffset_t304 *)VirtFuncInvoker0< RectOffset_t304 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_26);
		NullCheck(L_27);
		int32_t L_28 = RectOffset_get_bottom_m3362(L_27, /*hidden argument*/NULL);
		float L_29 = Mathf_Max_m2345(NULL /*static, unused*/, L_22, (((float)L_28)), /*hidden argument*/NULL);
		V_2 = L_29;
	}

IL_00ba:
	{
		float L_30 = ___y;
		float L_31 = V_1;
		___y = ((float)((float)L_30+(float)L_31));
		float L_32 = ___height;
		float L_33 = V_2;
		float L_34 = V_1;
		___height = ((float)((float)L_32-(float)((float)((float)L_33+(float)L_34))));
	}

IL_00c6:
	{
		float L_35 = ___height;
		float L_36 = (__this->___spacing_13);
		List_1_t547 * L_37 = (__this->___entries_10);
		NullCheck(L_37);
		int32_t L_38 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count() */, L_37);
		V_3 = ((float)((float)L_35-(float)((float)((float)L_36*(float)(((float)((int32_t)((int32_t)L_38-(int32_t)1))))))));
		V_4 = (0.0f);
		float L_39 = (__this->___m_ChildMinHeight_24);
		float L_40 = (__this->___m_ChildMaxHeight_25);
		if ((((float)L_39) == ((float)L_40)))
		{
			goto IL_011d;
		}
	}
	{
		float L_41 = V_3;
		float L_42 = (__this->___m_ChildMinHeight_24);
		float L_43 = (__this->___m_ChildMaxHeight_25);
		float L_44 = (__this->___m_ChildMinHeight_24);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t69_il2cpp_TypeInfo_var);
		float L_45 = Mathf_Clamp_m292(NULL /*static, unused*/, ((float)((float)((float)((float)L_41-(float)L_42))/(float)((float)((float)L_43-(float)L_44)))), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_4 = L_45;
	}

IL_011d:
	{
		V_5 = (0.0f);
		float L_46 = V_3;
		float L_47 = (__this->___m_ChildMaxHeight_25);
		if ((!(((float)L_46) > ((float)L_47))))
		{
			goto IL_014e;
		}
	}
	{
		int32_t L_48 = (__this->___m_StretchableCountY_19);
		if ((((int32_t)L_48) <= ((int32_t)0)))
		{
			goto IL_014e;
		}
	}
	{
		float L_49 = V_3;
		float L_50 = (__this->___m_ChildMaxHeight_25);
		int32_t L_51 = (__this->___m_StretchableCountY_19);
		V_5 = ((float)((float)((float)((float)L_49-(float)L_50))/(float)(((float)L_51))));
	}

IL_014e:
	{
		V_6 = 0;
		V_7 = 1;
		List_1_t547 * L_52 = (__this->___entries_10);
		NullCheck(L_52);
		Enumerator_t661  L_53 = List_1_GetEnumerator_m3629(L_52, /*hidden argument*/List_1_GetEnumerator_m3629_MethodInfo_var);
		V_9 = L_53;
	}

IL_0161:
	try
	{ // begin try (depth: 1)
		{
			goto IL_020c;
		}

IL_0166:
		{
			GUILayoutEntry_t546 * L_54 = Enumerator_get_Current_m3630((&V_9), /*hidden argument*/Enumerator_get_Current_m3630_MethodInfo_var);
			V_8 = L_54;
			GUILayoutEntry_t546 * L_55 = V_8;
			NullCheck(L_55);
			float L_56 = (L_55->___minHeight_2);
			GUILayoutEntry_t546 * L_57 = V_8;
			NullCheck(L_57);
			float L_58 = (L_57->___maxHeight_3);
			float L_59 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t69_il2cpp_TypeInfo_var);
			float L_60 = Mathf_Lerp_m407(NULL /*static, unused*/, L_56, L_58, L_59, /*hidden argument*/NULL);
			V_10 = L_60;
			float L_61 = V_10;
			float L_62 = V_5;
			GUILayoutEntry_t546 * L_63 = V_8;
			NullCheck(L_63);
			int32_t L_64 = (L_63->___stretchHeight_6);
			V_10 = ((float)((float)L_61+(float)((float)((float)L_62*(float)(((float)L_64))))));
			GUILayoutEntry_t546 * L_65 = V_8;
			NullCheck(L_65);
			GUIStyle_t545 * L_66 = GUILayoutEntry_get_style_m3260(L_65, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t543_il2cpp_TypeInfo_var);
			GUIStyle_t545 * L_67 = GUILayoutUtility_get_spaceStyle_m3254(NULL /*static, unused*/, /*hidden argument*/NULL);
			if ((((Object_t*)(GUIStyle_t545 *)L_66) == ((Object_t*)(GUIStyle_t545 *)L_67)))
			{
				goto IL_01eb;
			}
		}

IL_01a7:
		{
			GUILayoutEntry_t546 * L_68 = V_8;
			NullCheck(L_68);
			RectOffset_t304 * L_69 = (RectOffset_t304 *)VirtFuncInvoker0< RectOffset_t304 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_68);
			NullCheck(L_69);
			int32_t L_70 = RectOffset_get_top_m2397(L_69, /*hidden argument*/NULL);
			V_11 = L_70;
			bool L_71 = V_7;
			if (!L_71)
			{
				goto IL_01c2;
			}
		}

IL_01bc:
		{
			V_11 = 0;
			V_7 = 0;
		}

IL_01c2:
		{
			int32_t L_72 = V_6;
			int32_t L_73 = V_11;
			if ((((int32_t)L_72) <= ((int32_t)L_73)))
			{
				goto IL_01d2;
			}
		}

IL_01cb:
		{
			int32_t L_74 = V_6;
			G_B22_0 = L_74;
			goto IL_01d4;
		}

IL_01d2:
		{
			int32_t L_75 = V_11;
			G_B22_0 = L_75;
		}

IL_01d4:
		{
			V_12 = G_B22_0;
			float L_76 = ___y;
			int32_t L_77 = V_12;
			___y = ((float)((float)L_76+(float)(((float)L_77))));
			GUILayoutEntry_t546 * L_78 = V_8;
			NullCheck(L_78);
			RectOffset_t304 * L_79 = (RectOffset_t304 *)VirtFuncInvoker0< RectOffset_t304 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_78);
			NullCheck(L_79);
			int32_t L_80 = RectOffset_get_bottom_m3362(L_79, /*hidden argument*/NULL);
			V_6 = L_80;
		}

IL_01eb:
		{
			GUILayoutEntry_t546 * L_81 = V_8;
			float L_82 = ___y;
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t69_il2cpp_TypeInfo_var);
			float L_83 = roundf(L_82);
			float L_84 = V_10;
			float L_85 = roundf(L_84);
			NullCheck(L_81);
			VirtActionInvoker2< float, float >::Invoke(8 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_81, L_83, L_85);
			float L_86 = ___y;
			float L_87 = V_10;
			float L_88 = (__this->___spacing_13);
			___y = ((float)((float)L_86+(float)((float)((float)L_87+(float)L_88))));
		}

IL_020c:
		{
			bool L_89 = Enumerator_MoveNext_m3631((&V_9), /*hidden argument*/Enumerator_MoveNext_m3631_MethodInfo_var);
			if (L_89)
			{
				goto IL_0166;
			}
		}

IL_0218:
		{
			IL2CPP_LEAVE(0x22A, FINALLY_021d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t108 *)e.ex;
		goto FINALLY_021d;
	}

FINALLY_021d:
	{ // begin finally (depth: 1)
		Enumerator_t661  L_90 = V_9;
		Enumerator_t661  L_91 = L_90;
		Object_t * L_92 = Box(Enumerator_t661_il2cpp_TypeInfo_var, &L_91);
		NullCheck(L_92);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t359_il2cpp_TypeInfo_var, L_92);
		IL2CPP_END_FINALLY(541)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(541)
	{
		IL2CPP_JUMP_TBL(0x22A, IL_022a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t108 *)
	}

IL_022a:
	{
		goto IL_03c1;
	}

IL_022f:
	{
		GUIStyle_t545 * L_93 = GUILayoutEntry_get_style_m3260(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t545_il2cpp_TypeInfo_var);
		GUIStyle_t545 * L_94 = GUIStyle_get_none_m3370(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((Object_t*)(GUIStyle_t545 *)L_93) == ((Object_t*)(GUIStyle_t545 *)L_94)))
		{
			goto IL_02f6;
		}
	}
	{
		List_1_t547 * L_95 = (__this->___entries_10);
		NullCheck(L_95);
		Enumerator_t661  L_96 = List_1_GetEnumerator_m3629(L_95, /*hidden argument*/List_1_GetEnumerator_m3629_MethodInfo_var);
		V_14 = L_96;
	}

IL_024c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_02d3;
		}

IL_0251:
		{
			GUILayoutEntry_t546 * L_97 = Enumerator_get_Current_m3630((&V_14), /*hidden argument*/Enumerator_get_Current_m3630_MethodInfo_var);
			V_13 = L_97;
			GUILayoutEntry_t546 * L_98 = V_13;
			NullCheck(L_98);
			RectOffset_t304 * L_99 = (RectOffset_t304 *)VirtFuncInvoker0< RectOffset_t304 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_98);
			NullCheck(L_99);
			int32_t L_100 = RectOffset_get_top_m2397(L_99, /*hidden argument*/NULL);
			RectOffset_t304 * L_101 = V_0;
			NullCheck(L_101);
			int32_t L_102 = RectOffset_get_top_m2397(L_101, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t69_il2cpp_TypeInfo_var);
			int32_t L_103 = Mathf_Max_m540(NULL /*static, unused*/, L_100, L_102, /*hidden argument*/NULL);
			V_15 = (((float)L_103));
			float L_104 = ___y;
			float L_105 = V_15;
			V_16 = ((float)((float)L_104+(float)L_105));
			float L_106 = ___height;
			GUILayoutEntry_t546 * L_107 = V_13;
			NullCheck(L_107);
			RectOffset_t304 * L_108 = (RectOffset_t304 *)VirtFuncInvoker0< RectOffset_t304 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_107);
			NullCheck(L_108);
			int32_t L_109 = RectOffset_get_bottom_m3362(L_108, /*hidden argument*/NULL);
			RectOffset_t304 * L_110 = V_0;
			NullCheck(L_110);
			int32_t L_111 = RectOffset_get_bottom_m3362(L_110, /*hidden argument*/NULL);
			int32_t L_112 = Mathf_Max_m540(NULL /*static, unused*/, L_109, L_111, /*hidden argument*/NULL);
			float L_113 = V_15;
			V_17 = ((float)((float)((float)((float)L_106-(float)(((float)L_112))))-(float)L_113));
			GUILayoutEntry_t546 * L_114 = V_13;
			NullCheck(L_114);
			int32_t L_115 = (L_114->___stretchHeight_6);
			if (!L_115)
			{
				goto IL_02b5;
			}
		}

IL_02a5:
		{
			GUILayoutEntry_t546 * L_116 = V_13;
			float L_117 = V_16;
			float L_118 = V_17;
			NullCheck(L_116);
			VirtActionInvoker2< float, float >::Invoke(8 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_116, L_117, L_118);
			goto IL_02d3;
		}

IL_02b5:
		{
			GUILayoutEntry_t546 * L_119 = V_13;
			float L_120 = V_16;
			float L_121 = V_17;
			GUILayoutEntry_t546 * L_122 = V_13;
			NullCheck(L_122);
			float L_123 = (L_122->___minHeight_2);
			GUILayoutEntry_t546 * L_124 = V_13;
			NullCheck(L_124);
			float L_125 = (L_124->___maxHeight_3);
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t69_il2cpp_TypeInfo_var);
			float L_126 = Mathf_Clamp_m292(NULL /*static, unused*/, L_121, L_123, L_125, /*hidden argument*/NULL);
			NullCheck(L_119);
			VirtActionInvoker2< float, float >::Invoke(8 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_119, L_120, L_126);
		}

IL_02d3:
		{
			bool L_127 = Enumerator_MoveNext_m3631((&V_14), /*hidden argument*/Enumerator_MoveNext_m3631_MethodInfo_var);
			if (L_127)
			{
				goto IL_0251;
			}
		}

IL_02df:
		{
			IL2CPP_LEAVE(0x2F1, FINALLY_02e4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t108 *)e.ex;
		goto FINALLY_02e4;
	}

FINALLY_02e4:
	{ // begin finally (depth: 1)
		Enumerator_t661  L_128 = V_14;
		Enumerator_t661  L_129 = L_128;
		Object_t * L_130 = Box(Enumerator_t661_il2cpp_TypeInfo_var, &L_129);
		NullCheck(L_130);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t359_il2cpp_TypeInfo_var, L_130);
		IL2CPP_END_FINALLY(740)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(740)
	{
		IL2CPP_JUMP_TBL(0x2F1, IL_02f1)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t108 *)
	}

IL_02f1:
	{
		goto IL_03c1;
	}

IL_02f6:
	{
		float L_131 = ___y;
		RectOffset_t304 * L_132 = (RectOffset_t304 *)VirtFuncInvoker0< RectOffset_t304 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutGroup::get_margin() */, __this);
		NullCheck(L_132);
		int32_t L_133 = RectOffset_get_top_m2397(L_132, /*hidden argument*/NULL);
		V_18 = ((float)((float)L_131-(float)(((float)L_133))));
		float L_134 = ___height;
		RectOffset_t304 * L_135 = (RectOffset_t304 *)VirtFuncInvoker0< RectOffset_t304 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutGroup::get_margin() */, __this);
		NullCheck(L_135);
		int32_t L_136 = RectOffset_get_vertical_m2393(L_135, /*hidden argument*/NULL);
		V_19 = ((float)((float)L_134+(float)(((float)L_136))));
		List_1_t547 * L_137 = (__this->___entries_10);
		NullCheck(L_137);
		Enumerator_t661  L_138 = List_1_GetEnumerator_m3629(L_137, /*hidden argument*/List_1_GetEnumerator_m3629_MethodInfo_var);
		V_21 = L_138;
	}

IL_0323:
	try
	{ // begin try (depth: 1)
		{
			goto IL_03a3;
		}

IL_0328:
		{
			GUILayoutEntry_t546 * L_139 = Enumerator_get_Current_m3630((&V_21), /*hidden argument*/Enumerator_get_Current_m3630_MethodInfo_var);
			V_20 = L_139;
			GUILayoutEntry_t546 * L_140 = V_20;
			NullCheck(L_140);
			int32_t L_141 = (L_140->___stretchHeight_6);
			if (!L_141)
			{
				goto IL_0369;
			}
		}

IL_033d:
		{
			GUILayoutEntry_t546 * L_142 = V_20;
			float L_143 = V_18;
			GUILayoutEntry_t546 * L_144 = V_20;
			NullCheck(L_144);
			RectOffset_t304 * L_145 = (RectOffset_t304 *)VirtFuncInvoker0< RectOffset_t304 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_144);
			NullCheck(L_145);
			int32_t L_146 = RectOffset_get_top_m2397(L_145, /*hidden argument*/NULL);
			float L_147 = V_19;
			GUILayoutEntry_t546 * L_148 = V_20;
			NullCheck(L_148);
			RectOffset_t304 * L_149 = (RectOffset_t304 *)VirtFuncInvoker0< RectOffset_t304 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_148);
			NullCheck(L_149);
			int32_t L_150 = RectOffset_get_vertical_m2393(L_149, /*hidden argument*/NULL);
			NullCheck(L_142);
			VirtActionInvoker2< float, float >::Invoke(8 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_142, ((float)((float)L_143+(float)(((float)L_146)))), ((float)((float)L_147-(float)(((float)L_150)))));
			goto IL_03a3;
		}

IL_0369:
		{
			GUILayoutEntry_t546 * L_151 = V_20;
			float L_152 = V_18;
			GUILayoutEntry_t546 * L_153 = V_20;
			NullCheck(L_153);
			RectOffset_t304 * L_154 = (RectOffset_t304 *)VirtFuncInvoker0< RectOffset_t304 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_153);
			NullCheck(L_154);
			int32_t L_155 = RectOffset_get_top_m2397(L_154, /*hidden argument*/NULL);
			float L_156 = V_19;
			GUILayoutEntry_t546 * L_157 = V_20;
			NullCheck(L_157);
			RectOffset_t304 * L_158 = (RectOffset_t304 *)VirtFuncInvoker0< RectOffset_t304 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_157);
			NullCheck(L_158);
			int32_t L_159 = RectOffset_get_vertical_m2393(L_158, /*hidden argument*/NULL);
			GUILayoutEntry_t546 * L_160 = V_20;
			NullCheck(L_160);
			float L_161 = (L_160->___minHeight_2);
			GUILayoutEntry_t546 * L_162 = V_20;
			NullCheck(L_162);
			float L_163 = (L_162->___maxHeight_3);
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t69_il2cpp_TypeInfo_var);
			float L_164 = Mathf_Clamp_m292(NULL /*static, unused*/, ((float)((float)L_156-(float)(((float)L_159)))), L_161, L_163, /*hidden argument*/NULL);
			NullCheck(L_151);
			VirtActionInvoker2< float, float >::Invoke(8 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_151, ((float)((float)L_152+(float)(((float)L_155)))), L_164);
		}

IL_03a3:
		{
			bool L_165 = Enumerator_MoveNext_m3631((&V_21), /*hidden argument*/Enumerator_MoveNext_m3631_MethodInfo_var);
			if (L_165)
			{
				goto IL_0328;
			}
		}

IL_03af:
		{
			IL2CPP_LEAVE(0x3C1, FINALLY_03b4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t108 *)e.ex;
		goto FINALLY_03b4;
	}

FINALLY_03b4:
	{ // begin finally (depth: 1)
		Enumerator_t661  L_166 = V_21;
		Enumerator_t661  L_167 = L_166;
		Object_t * L_168 = Box(Enumerator_t661_il2cpp_TypeInfo_var, &L_167);
		NullCheck(L_168);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t359_il2cpp_TypeInfo_var, L_168);
		IL2CPP_END_FINALLY(948)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(948)
	{
		IL2CPP_JUMP_TBL(0x3C1, IL_03c1)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t108 *)
	}

IL_03c1:
	{
		return;
	}
}
// System.String UnityEngine.GUILayoutGroup::ToString()
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutEntry_t546_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t78_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t355_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t661_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t359_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m3629_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3630_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3631_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral258;
extern Il2CppCodeGenString* _stringLiteral265;
extern Il2CppCodeGenString* _stringLiteral266;
extern Il2CppCodeGenString* _stringLiteral267;
extern Il2CppCodeGenString* _stringLiteral268;
extern "C" String_t* GUILayoutGroup_ToString_m3279 (GUILayoutGroup_t542 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		GUILayoutEntry_t546_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(372);
		ObjectU5BU5D_t78_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(113);
		Single_t355_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(36);
		Enumerator_t661_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(373);
		IDisposable_t359_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(124);
		List_1_GetEnumerator_m3629_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483981);
		Enumerator_get_Current_m3630_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483982);
		Enumerator_MoveNext_m3631_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483983);
		_stringLiteral258 = il2cpp_codegen_string_literal_from_index(258);
		_stringLiteral265 = il2cpp_codegen_string_literal_from_index(265);
		_stringLiteral266 = il2cpp_codegen_string_literal_from_index(266);
		_stringLiteral267 = il2cpp_codegen_string_literal_from_index(267);
		_stringLiteral268 = il2cpp_codegen_string_literal_from_index(268);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	int32_t V_2 = 0;
	GUILayoutEntry_t546 * V_3 = {0};
	Enumerator_t661  V_4 = {0};
	String_t* V_5 = {0};
	Exception_t108 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t108 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_0 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_1 = L_1;
		V_2 = 0;
		goto IL_0023;
	}

IL_0013:
	{
		String_t* L_2 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m531(NULL /*static, unused*/, L_2, _stringLiteral258, /*hidden argument*/NULL);
		V_1 = L_3;
		int32_t L_4 = V_2;
		V_2 = ((int32_t)((int32_t)L_4+(int32_t)1));
	}

IL_0023:
	{
		int32_t L_5 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutEntry_t546_il2cpp_TypeInfo_var);
		int32_t L_6 = ((GUILayoutEntry_t546_StaticFields*)GUILayoutEntry_t546_il2cpp_TypeInfo_var->static_fields)->___indent_9;
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_0013;
		}
	}
	{
		String_t* L_7 = V_0;
		V_5 = L_7;
		ObjectU5BU5D_t78* L_8 = ((ObjectU5BU5D_t78*)SZArrayNew(ObjectU5BU5D_t78_il2cpp_TypeInfo_var, 5));
		String_t* L_9 = V_5;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 0);
		ArrayElementTypeCheck (L_8, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 0, sizeof(Object_t *))) = (Object_t *)L_9;
		ObjectU5BU5D_t78* L_10 = L_8;
		String_t* L_11 = GUILayoutEntry_ToString_m3269(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 1);
		ArrayElementTypeCheck (L_10, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 1, sizeof(Object_t *))) = (Object_t *)L_11;
		ObjectU5BU5D_t78* L_12 = L_10;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 2);
		ArrayElementTypeCheck (L_12, _stringLiteral265);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral265;
		ObjectU5BU5D_t78* L_13 = L_12;
		float L_14 = (__this->___m_ChildMinHeight_24);
		float L_15 = L_14;
		Object_t * L_16 = Box(Single_t355_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 3);
		ArrayElementTypeCheck (L_13, L_16);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 3, sizeof(Object_t *))) = (Object_t *)L_16;
		ObjectU5BU5D_t78* L_17 = L_13;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 4);
		ArrayElementTypeCheck (L_17, _stringLiteral266);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, 4, sizeof(Object_t *))) = (Object_t *)_stringLiteral266;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_18 = String_Concat_m1939(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		V_0 = L_18;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutEntry_t546_il2cpp_TypeInfo_var);
		int32_t L_19 = ((GUILayoutEntry_t546_StaticFields*)GUILayoutEntry_t546_il2cpp_TypeInfo_var->static_fields)->___indent_9;
		((GUILayoutEntry_t546_StaticFields*)GUILayoutEntry_t546_il2cpp_TypeInfo_var->static_fields)->___indent_9 = ((int32_t)((int32_t)L_19+(int32_t)4));
		List_1_t547 * L_20 = (__this->___entries_10);
		NullCheck(L_20);
		Enumerator_t661  L_21 = List_1_GetEnumerator_m3629(L_20, /*hidden argument*/List_1_GetEnumerator_m3629_MethodInfo_var);
		V_4 = L_21;
	}

IL_0082:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00a1;
		}

IL_0087:
		{
			GUILayoutEntry_t546 * L_22 = Enumerator_get_Current_m3630((&V_4), /*hidden argument*/Enumerator_get_Current_m3630_MethodInfo_var);
			V_3 = L_22;
			String_t* L_23 = V_0;
			GUILayoutEntry_t546 * L_24 = V_3;
			NullCheck(L_24);
			String_t* L_25 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String UnityEngine.GUILayoutEntry::ToString() */, L_24);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_26 = String_Concat_m370(NULL /*static, unused*/, L_23, L_25, _stringLiteral267, /*hidden argument*/NULL);
			V_0 = L_26;
		}

IL_00a1:
		{
			bool L_27 = Enumerator_MoveNext_m3631((&V_4), /*hidden argument*/Enumerator_MoveNext_m3631_MethodInfo_var);
			if (L_27)
			{
				goto IL_0087;
			}
		}

IL_00ad:
		{
			IL2CPP_LEAVE(0xBF, FINALLY_00b2);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t108 *)e.ex;
		goto FINALLY_00b2;
	}

FINALLY_00b2:
	{ // begin finally (depth: 1)
		Enumerator_t661  L_28 = V_4;
		Enumerator_t661  L_29 = L_28;
		Object_t * L_30 = Box(Enumerator_t661_il2cpp_TypeInfo_var, &L_29);
		NullCheck(L_30);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t359_il2cpp_TypeInfo_var, L_30);
		IL2CPP_END_FINALLY(178)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(178)
	{
		IL2CPP_JUMP_TBL(0xBF, IL_00bf)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t108 *)
	}

IL_00bf:
	{
		String_t* L_31 = V_0;
		String_t* L_32 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_33 = String_Concat_m370(NULL /*static, unused*/, L_31, L_32, _stringLiteral268, /*hidden argument*/NULL);
		V_0 = L_33;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutEntry_t546_il2cpp_TypeInfo_var);
		int32_t L_34 = ((GUILayoutEntry_t546_StaticFields*)GUILayoutEntry_t546_il2cpp_TypeInfo_var->static_fields)->___indent_9;
		((GUILayoutEntry_t546_StaticFields*)GUILayoutEntry_t546_il2cpp_TypeInfo_var->static_fields)->___indent_9 = ((int32_t)((int32_t)L_34-(int32_t)4));
		String_t* L_35 = V_0;
		return L_35;
	}
}
// UnityEngine.GUIScrollGroup
#include "UnityEngine_UnityEngine_GUIScrollGroup.h"
// UnityEngine.GUIScrollGroup
#include "UnityEngine_UnityEngine_GUIScrollGroupMethodDeclarations.h"
// System.Void UnityEngine.GUIScrollGroup::.ctor()
// UnityEngine.GUILayoutGroup
#include "UnityEngine_UnityEngine_GUILayoutGroupMethodDeclarations.h"
extern "C" void GUIScrollGroup__ctor_m3280 (GUIScrollGroup_t548 * __this, const MethodInfo* method)
{
	{
		__this->___allowHorizontalScroll_33 = 1;
		__this->___allowVerticalScroll_34 = 1;
		GUILayoutGroup__ctor_m3270(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUIScrollGroup::CalcWidth()
extern "C" void GUIScrollGroup_CalcWidth_m3281 (GUIScrollGroup_t548 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		float L_0 = (((GUILayoutEntry_t546 *)__this)->___minWidth_0);
		V_0 = L_0;
		float L_1 = (((GUILayoutEntry_t546 *)__this)->___maxWidth_1);
		V_1 = L_1;
		bool L_2 = (__this->___allowHorizontalScroll_33);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		((GUILayoutEntry_t546 *)__this)->___minWidth_0 = (0.0f);
		((GUILayoutEntry_t546 *)__this)->___maxWidth_1 = (0.0f);
	}

IL_002f:
	{
		GUILayoutGroup_CalcWidth_m3275(__this, /*hidden argument*/NULL);
		float L_3 = (((GUILayoutEntry_t546 *)__this)->___minWidth_0);
		__this->___calcMinWidth_27 = L_3;
		float L_4 = (((GUILayoutEntry_t546 *)__this)->___maxWidth_1);
		__this->___calcMaxWidth_28 = L_4;
		bool L_5 = (__this->___allowHorizontalScroll_33);
		if (!L_5)
		{
			goto IL_009e;
		}
	}
	{
		float L_6 = (((GUILayoutEntry_t546 *)__this)->___minWidth_0);
		if ((!(((float)L_6) > ((float)(32.0f)))))
		{
			goto IL_0073;
		}
	}
	{
		((GUILayoutEntry_t546 *)__this)->___minWidth_0 = (32.0f);
	}

IL_0073:
	{
		float L_7 = V_0;
		if ((((float)L_7) == ((float)(0.0f))))
		{
			goto IL_0085;
		}
	}
	{
		float L_8 = V_0;
		((GUILayoutEntry_t546 *)__this)->___minWidth_0 = L_8;
	}

IL_0085:
	{
		float L_9 = V_1;
		if ((((float)L_9) == ((float)(0.0f))))
		{
			goto IL_009e;
		}
	}
	{
		float L_10 = V_1;
		((GUILayoutEntry_t546 *)__this)->___maxWidth_1 = L_10;
		((GUILayoutEntry_t546 *)__this)->___stretchWidth_5 = 0;
	}

IL_009e:
	{
		return;
	}
}
// System.Void UnityEngine.GUIScrollGroup::SetHorizontal(System.Single,System.Single)
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyleMethodDeclarations.h"
// UnityEngine.RectOffset
#include "UnityEngine_UnityEngine_RectOffsetMethodDeclarations.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
extern "C" void GUIScrollGroup_SetHorizontal_m3282 (GUIScrollGroup_t548 * __this, float ___x, float ___width, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		bool L_0 = (__this->___needsVerticalScrollbar_36);
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		float L_1 = ___width;
		GUIStyle_t545 * L_2 = (__this->___verticalScrollbar_38);
		NullCheck(L_2);
		float L_3 = GUIStyle_get_fixedWidth_m3378(L_2, /*hidden argument*/NULL);
		GUIStyle_t545 * L_4 = (__this->___verticalScrollbar_38);
		NullCheck(L_4);
		RectOffset_t304 * L_5 = GUIStyle_get_margin_m3368(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6 = RectOffset_get_left_m2396(L_5, /*hidden argument*/NULL);
		G_B3_0 = ((float)((float)((float)((float)L_1-(float)L_3))-(float)(((float)L_6))));
		goto IL_0030;
	}

IL_002f:
	{
		float L_7 = ___width;
		G_B3_0 = L_7;
	}

IL_0030:
	{
		V_0 = G_B3_0;
		bool L_8 = (__this->___allowHorizontalScroll_33);
		if (!L_8)
		{
			goto IL_0091;
		}
	}
	{
		float L_9 = V_0;
		float L_10 = (__this->___calcMinWidth_27);
		if ((!(((float)L_9) < ((float)L_10))))
		{
			goto IL_0091;
		}
	}
	{
		__this->___needsHorizontalScrollbar_35 = 1;
		float L_11 = (__this->___calcMinWidth_27);
		((GUILayoutEntry_t546 *)__this)->___minWidth_0 = L_11;
		float L_12 = (__this->___calcMaxWidth_28);
		((GUILayoutEntry_t546 *)__this)->___maxWidth_1 = L_12;
		float L_13 = ___x;
		float L_14 = (__this->___calcMinWidth_27);
		GUILayoutGroup_SetHorizontal_m3276(__this, L_13, L_14, /*hidden argument*/NULL);
		Rect_t18 * L_15 = &(((GUILayoutEntry_t546 *)__this)->___rect_4);
		float L_16 = ___width;
		Rect_set_width_m422(L_15, L_16, /*hidden argument*/NULL);
		float L_17 = (__this->___calcMinWidth_27);
		__this->___clientWidth_31 = L_17;
		goto IL_00d6;
	}

IL_0091:
	{
		__this->___needsHorizontalScrollbar_35 = 0;
		bool L_18 = (__this->___allowHorizontalScroll_33);
		if (!L_18)
		{
			goto IL_00bb;
		}
	}
	{
		float L_19 = (__this->___calcMinWidth_27);
		((GUILayoutEntry_t546 *)__this)->___minWidth_0 = L_19;
		float L_20 = (__this->___calcMaxWidth_28);
		((GUILayoutEntry_t546 *)__this)->___maxWidth_1 = L_20;
	}

IL_00bb:
	{
		float L_21 = ___x;
		float L_22 = V_0;
		GUILayoutGroup_SetHorizontal_m3276(__this, L_21, L_22, /*hidden argument*/NULL);
		Rect_t18 * L_23 = &(((GUILayoutEntry_t546 *)__this)->___rect_4);
		float L_24 = ___width;
		Rect_set_width_m422(L_23, L_24, /*hidden argument*/NULL);
		float L_25 = V_0;
		__this->___clientWidth_31 = L_25;
	}

IL_00d6:
	{
		return;
	}
}
// System.Void UnityEngine.GUIScrollGroup::CalcHeight()
extern "C" void GUIScrollGroup_CalcHeight_m3283 (GUIScrollGroup_t548 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		float L_0 = (((GUILayoutEntry_t546 *)__this)->___minHeight_2);
		V_0 = L_0;
		float L_1 = (((GUILayoutEntry_t546 *)__this)->___maxHeight_3);
		V_1 = L_1;
		bool L_2 = (__this->___allowVerticalScroll_34);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		((GUILayoutEntry_t546 *)__this)->___minHeight_2 = (0.0f);
		((GUILayoutEntry_t546 *)__this)->___maxHeight_3 = (0.0f);
	}

IL_002f:
	{
		GUILayoutGroup_CalcHeight_m3277(__this, /*hidden argument*/NULL);
		float L_3 = (((GUILayoutEntry_t546 *)__this)->___minHeight_2);
		__this->___calcMinHeight_29 = L_3;
		float L_4 = (((GUILayoutEntry_t546 *)__this)->___maxHeight_3);
		__this->___calcMaxHeight_30 = L_4;
		bool L_5 = (__this->___needsHorizontalScrollbar_35);
		if (!L_5)
		{
			goto IL_0092;
		}
	}
	{
		GUIStyle_t545 * L_6 = (__this->___horizontalScrollbar_37);
		NullCheck(L_6);
		float L_7 = GUIStyle_get_fixedHeight_m3379(L_6, /*hidden argument*/NULL);
		GUIStyle_t545 * L_8 = (__this->___horizontalScrollbar_37);
		NullCheck(L_8);
		RectOffset_t304 * L_9 = GUIStyle_get_margin_m3368(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		int32_t L_10 = RectOffset_get_top_m2397(L_9, /*hidden argument*/NULL);
		V_2 = ((float)((float)L_7+(float)(((float)L_10))));
		float L_11 = (((GUILayoutEntry_t546 *)__this)->___minHeight_2);
		float L_12 = V_2;
		((GUILayoutEntry_t546 *)__this)->___minHeight_2 = ((float)((float)L_11+(float)L_12));
		float L_13 = (((GUILayoutEntry_t546 *)__this)->___maxHeight_3);
		float L_14 = V_2;
		((GUILayoutEntry_t546 *)__this)->___maxHeight_3 = ((float)((float)L_13+(float)L_14));
	}

IL_0092:
	{
		bool L_15 = (__this->___allowVerticalScroll_34);
		if (!L_15)
		{
			goto IL_00e3;
		}
	}
	{
		float L_16 = (((GUILayoutEntry_t546 *)__this)->___minHeight_2);
		if ((!(((float)L_16) > ((float)(32.0f)))))
		{
			goto IL_00b8;
		}
	}
	{
		((GUILayoutEntry_t546 *)__this)->___minHeight_2 = (32.0f);
	}

IL_00b8:
	{
		float L_17 = V_0;
		if ((((float)L_17) == ((float)(0.0f))))
		{
			goto IL_00ca;
		}
	}
	{
		float L_18 = V_0;
		((GUILayoutEntry_t546 *)__this)->___minHeight_2 = L_18;
	}

IL_00ca:
	{
		float L_19 = V_1;
		if ((((float)L_19) == ((float)(0.0f))))
		{
			goto IL_00e3;
		}
	}
	{
		float L_20 = V_1;
		((GUILayoutEntry_t546 *)__this)->___maxHeight_3 = L_20;
		((GUILayoutEntry_t546 *)__this)->___stretchHeight_6 = 0;
	}

IL_00e3:
	{
		return;
	}
}
// System.Void UnityEngine.GUIScrollGroup::SetVertical(System.Single,System.Single)
// UnityEngine.GUIScrollGroup
#include "UnityEngine_UnityEngine_GUIScrollGroupMethodDeclarations.h"
extern "C" void GUIScrollGroup_SetVertical_m3284 (GUIScrollGroup_t548 * __this, float ___y, float ___height, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		float L_0 = ___height;
		V_0 = L_0;
		bool L_1 = (__this->___needsHorizontalScrollbar_35);
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		float L_2 = V_0;
		GUIStyle_t545 * L_3 = (__this->___horizontalScrollbar_37);
		NullCheck(L_3);
		float L_4 = GUIStyle_get_fixedHeight_m3379(L_3, /*hidden argument*/NULL);
		GUIStyle_t545 * L_5 = (__this->___horizontalScrollbar_37);
		NullCheck(L_5);
		RectOffset_t304 * L_6 = GUIStyle_get_margin_m3368(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		int32_t L_7 = RectOffset_get_top_m2397(L_6, /*hidden argument*/NULL);
		V_0 = ((float)((float)L_2-(float)((float)((float)L_4+(float)(((float)L_7))))));
	}

IL_002d:
	{
		bool L_8 = (__this->___allowVerticalScroll_34);
		if (!L_8)
		{
			goto IL_0139;
		}
	}
	{
		float L_9 = V_0;
		float L_10 = (__this->___calcMinHeight_29);
		if ((!(((float)L_9) < ((float)L_10))))
		{
			goto IL_0139;
		}
	}
	{
		bool L_11 = (__this->___needsHorizontalScrollbar_35);
		if (L_11)
		{
			goto IL_00db;
		}
	}
	{
		bool L_12 = (__this->___needsVerticalScrollbar_36);
		if (L_12)
		{
			goto IL_00db;
		}
	}
	{
		Rect_t18 * L_13 = &(((GUILayoutEntry_t546 *)__this)->___rect_4);
		float L_14 = Rect_get_width_m334(L_13, /*hidden argument*/NULL);
		GUIStyle_t545 * L_15 = (__this->___verticalScrollbar_38);
		NullCheck(L_15);
		float L_16 = GUIStyle_get_fixedWidth_m3378(L_15, /*hidden argument*/NULL);
		GUIStyle_t545 * L_17 = (__this->___verticalScrollbar_38);
		NullCheck(L_17);
		RectOffset_t304 * L_18 = GUIStyle_get_margin_m3368(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		int32_t L_19 = RectOffset_get_left_m2396(L_18, /*hidden argument*/NULL);
		__this->___clientWidth_31 = ((float)((float)((float)((float)L_14-(float)L_16))-(float)(((float)L_19))));
		float L_20 = (__this->___clientWidth_31);
		float L_21 = (__this->___calcMinWidth_27);
		if ((!(((float)L_20) < ((float)L_21))))
		{
			goto IL_00a6;
		}
	}
	{
		float L_22 = (__this->___calcMinWidth_27);
		__this->___clientWidth_31 = L_22;
	}

IL_00a6:
	{
		Rect_t18 * L_23 = &(((GUILayoutEntry_t546 *)__this)->___rect_4);
		float L_24 = Rect_get_width_m334(L_23, /*hidden argument*/NULL);
		V_1 = L_24;
		Rect_t18 * L_25 = &(((GUILayoutEntry_t546 *)__this)->___rect_4);
		float L_26 = Rect_get_x_m420(L_25, /*hidden argument*/NULL);
		float L_27 = (__this->___clientWidth_31);
		GUIScrollGroup_SetHorizontal_m3282(__this, L_26, L_27, /*hidden argument*/NULL);
		GUIScrollGroup_CalcHeight_m3283(__this, /*hidden argument*/NULL);
		Rect_t18 * L_28 = &(((GUILayoutEntry_t546 *)__this)->___rect_4);
		float L_29 = V_1;
		Rect_set_width_m422(L_28, L_29, /*hidden argument*/NULL);
	}

IL_00db:
	{
		float L_30 = (((GUILayoutEntry_t546 *)__this)->___minHeight_2);
		V_2 = L_30;
		float L_31 = (((GUILayoutEntry_t546 *)__this)->___maxHeight_3);
		V_3 = L_31;
		float L_32 = (__this->___calcMinHeight_29);
		((GUILayoutEntry_t546 *)__this)->___minHeight_2 = L_32;
		float L_33 = (__this->___calcMaxHeight_30);
		((GUILayoutEntry_t546 *)__this)->___maxHeight_3 = L_33;
		float L_34 = ___y;
		float L_35 = (__this->___calcMinHeight_29);
		GUILayoutGroup_SetVertical_m3278(__this, L_34, L_35, /*hidden argument*/NULL);
		float L_36 = V_2;
		((GUILayoutEntry_t546 *)__this)->___minHeight_2 = L_36;
		float L_37 = V_3;
		((GUILayoutEntry_t546 *)__this)->___maxHeight_3 = L_37;
		Rect_t18 * L_38 = &(((GUILayoutEntry_t546 *)__this)->___rect_4);
		float L_39 = ___height;
		Rect_set_height_m423(L_38, L_39, /*hidden argument*/NULL);
		float L_40 = (__this->___calcMinHeight_29);
		__this->___clientHeight_32 = L_40;
		goto IL_0177;
	}

IL_0139:
	{
		bool L_41 = (__this->___allowVerticalScroll_34);
		if (!L_41)
		{
			goto IL_015c;
		}
	}
	{
		float L_42 = (__this->___calcMinHeight_29);
		((GUILayoutEntry_t546 *)__this)->___minHeight_2 = L_42;
		float L_43 = (__this->___calcMaxHeight_30);
		((GUILayoutEntry_t546 *)__this)->___maxHeight_3 = L_43;
	}

IL_015c:
	{
		float L_44 = ___y;
		float L_45 = V_0;
		GUILayoutGroup_SetVertical_m3278(__this, L_44, L_45, /*hidden argument*/NULL);
		Rect_t18 * L_46 = &(((GUILayoutEntry_t546 *)__this)->___rect_4);
		float L_47 = ___height;
		Rect_set_height_m423(L_46, L_47, /*hidden argument*/NULL);
		float L_48 = V_0;
		__this->___clientHeight_32 = L_48;
	}

IL_0177:
	{
		return;
	}
}
// UnityEngine.GUILayoutOption/Type
#include "UnityEngine_UnityEngine_GUILayoutOption_TypeMethodDeclarations.h"
// System.Void UnityEngine.GUILayoutOption::.ctor(UnityEngine.GUILayoutOption/Type,System.Object)
// UnityEngine.GUILayoutOption/Type
#include "UnityEngine_UnityEngine_GUILayoutOption_Type.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void GUILayoutOption__ctor_m3285 (GUILayoutOption_t550 * __this, int32_t ___type, Object_t * ___value, const MethodInfo* method)
{
	{
		Object__ctor_m355(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___type;
		__this->___type_0 = L_0;
		Object_t * L_1 = ___value;
		__this->___value_1 = L_1;
		return;
	}
}
// UnityEngine.GUISettings
#include "UnityEngine_UnityEngine_GUISettings.h"
// UnityEngine.GUISettings
#include "UnityEngine_UnityEngine_GUISettingsMethodDeclarations.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
// System.Void UnityEngine.GUISettings::.ctor()
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void GUISettings__ctor_m3286 (GUISettings_t551 * __this, const MethodInfo* method)
{
	{
		__this->___m_DoubleClickSelectsWord_0 = 1;
		__this->___m_TripleClickSelectsLine_1 = 1;
		Color_t11  L_0 = Color_get_white_m2121(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___m_CursorColor_2 = L_0;
		__this->___m_CursorFlashSpeed_3 = (-1.0f);
		Color_t11  L_1 = {0};
		Color__ctor_m461(&L_1, (0.5f), (0.5f), (1.0f), /*hidden argument*/NULL);
		__this->___m_SelectionColor_4 = L_1;
		Object__ctor_m355(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUISkin/SkinChangedDelegate
#include "UnityEngine_UnityEngine_GUISkin_SkinChangedDelegate.h"
// UnityEngine.GUISkin/SkinChangedDelegate
#include "UnityEngine_UnityEngine_GUISkin_SkinChangedDelegateMethodDeclarations.h"
// System.Void UnityEngine.GUISkin/SkinChangedDelegate::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void SkinChangedDelegate__ctor_m3287 (SkinChangedDelegate_t552 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.GUISkin/SkinChangedDelegate::Invoke()
extern "C" void SkinChangedDelegate_Invoke_m3288 (SkinChangedDelegate_t552 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		SkinChangedDelegate_Invoke_m3288((SkinChangedDelegate_t552 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_SkinChangedDelegate_t552(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.GUISkin/SkinChangedDelegate::BeginInvoke(System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * SkinChangedDelegate_BeginInvoke_m3289 (SkinChangedDelegate_t552 * __this, AsyncCallback_t9 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.GUISkin/SkinChangedDelegate::EndInvoke(System.IAsyncResult)
extern "C" void SkinChangedDelegate_EndInvoke_m3290 (SkinChangedDelegate_t552 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.StringComparer
#include "mscorlib_System_StringComparer.h"
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_7.h"
// UnityEngine.GUIStyleState
#include "UnityEngine_UnityEngine_GUIStyleState.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_1.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_2.h"
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObjectMethodDeclarations.h"
// System.StringComparer
#include "mscorlib_System_StringComparerMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_7MethodDeclarations.h"
// UnityEngine.GUIStyleState
#include "UnityEngine_UnityEngine_GUIStyleStateMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_1MethodDeclarations.h"
// System.Void UnityEngine.GUISkin::.ctor()
// UnityEngine.GUISettings
#include "UnityEngine_UnityEngine_GUISettingsMethodDeclarations.h"
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObjectMethodDeclarations.h"
extern TypeInfo* GUISettings_t551_il2cpp_TypeInfo_var;
extern TypeInfo* GUIStyleU5BU5D_t553_il2cpp_TypeInfo_var;
extern "C" void GUISkin__ctor_m3291 (GUISkin_t536 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUISettings_t551_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(376);
		GUIStyleU5BU5D_t553_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(377);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUISettings_t551 * L_0 = (GUISettings_t551 *)il2cpp_codegen_object_new (GUISettings_t551_il2cpp_TypeInfo_var);
		GUISettings__ctor_m3286(L_0, /*hidden argument*/NULL);
		__this->___m_Settings_24 = L_0;
		ScriptableObject__ctor_m2462(__this, /*hidden argument*/NULL);
		__this->___m_CustomStyles_23 = ((GUIStyleU5BU5D_t553*)SZArrayNew(GUIStyleU5BU5D_t553_il2cpp_TypeInfo_var, 1));
		return;
	}
}
// System.Void UnityEngine.GUISkin::OnEnable()
// UnityEngine.GUISkin
#include "UnityEngine_UnityEngine_GUISkinMethodDeclarations.h"
extern "C" void GUISkin_OnEnable_m3292 (GUISkin_t536 * __this, const MethodInfo* method)
{
	{
		GUISkin_Apply_m3339(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Font UnityEngine.GUISkin::get_font()
extern "C" Font_t197 * GUISkin_get_font_m3293 (GUISkin_t536 * __this, const MethodInfo* method)
{
	{
		Font_t197 * L_0 = (__this->___m_Font_2);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_font(UnityEngine.Font)
// UnityEngine.Font
#include "UnityEngine_UnityEngine_Font.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyleMethodDeclarations.h"
extern TypeInfo* GUISkin_t536_il2cpp_TypeInfo_var;
extern TypeInfo* GUIStyle_t545_il2cpp_TypeInfo_var;
extern "C" void GUISkin_set_font_m3294 (GUISkin_t536 * __this, Font_t197 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUISkin_t536_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(378);
		GUIStyle_t545_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		s_Il2CppMethodIntialized = true;
	}
	{
		Font_t197 * L_0 = ___value;
		__this->___m_Font_2 = L_0;
		GUISkin_t536 * L_1 = ((GUISkin_t536_StaticFields*)GUISkin_t536_il2cpp_TypeInfo_var->static_fields)->___current_28;
		bool L_2 = Object_op_Equality_m305(NULL /*static, unused*/, L_1, __this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		Font_t197 * L_3 = (__this->___m_Font_2);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t545_il2cpp_TypeInfo_var);
		GUIStyle_SetDefaultFont_m3384(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0022:
	{
		GUISkin_Apply_m3339(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_box()
extern "C" GUIStyle_t545 * GUISkin_get_box_m3295 (GUISkin_t536 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t545 * L_0 = (__this->___m_box_3);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_box(UnityEngine.GUIStyle)
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyle.h"
extern "C" void GUISkin_set_box_m3296 (GUISkin_t536 * __this, GUIStyle_t545 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t545 * L_0 = ___value;
		__this->___m_box_3 = L_0;
		GUISkin_Apply_m3339(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_label()
extern "C" GUIStyle_t545 * GUISkin_get_label_m3297 (GUISkin_t536 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t545 * L_0 = (__this->___m_label_6);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_label(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_label_m3298 (GUISkin_t536 * __this, GUIStyle_t545 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t545 * L_0 = ___value;
		__this->___m_label_6 = L_0;
		GUISkin_Apply_m3339(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_textField()
extern "C" GUIStyle_t545 * GUISkin_get_textField_m3299 (GUISkin_t536 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t545 * L_0 = (__this->___m_textField_7);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_textField(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_textField_m3300 (GUISkin_t536 * __this, GUIStyle_t545 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t545 * L_0 = ___value;
		__this->___m_textField_7 = L_0;
		GUISkin_Apply_m3339(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_textArea()
extern "C" GUIStyle_t545 * GUISkin_get_textArea_m3301 (GUISkin_t536 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t545 * L_0 = (__this->___m_textArea_8);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_textArea(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_textArea_m3302 (GUISkin_t536 * __this, GUIStyle_t545 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t545 * L_0 = ___value;
		__this->___m_textArea_8 = L_0;
		GUISkin_Apply_m3339(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_button()
extern "C" GUIStyle_t545 * GUISkin_get_button_m3303 (GUISkin_t536 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t545 * L_0 = (__this->___m_button_4);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_button(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_button_m3304 (GUISkin_t536 * __this, GUIStyle_t545 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t545 * L_0 = ___value;
		__this->___m_button_4 = L_0;
		GUISkin_Apply_m3339(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_toggle()
extern "C" GUIStyle_t545 * GUISkin_get_toggle_m3305 (GUISkin_t536 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t545 * L_0 = (__this->___m_toggle_5);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_toggle(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_toggle_m3306 (GUISkin_t536 * __this, GUIStyle_t545 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t545 * L_0 = ___value;
		__this->___m_toggle_5 = L_0;
		GUISkin_Apply_m3339(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_window()
extern "C" GUIStyle_t545 * GUISkin_get_window_m3307 (GUISkin_t536 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t545 * L_0 = (__this->___m_window_9);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_window(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_window_m3308 (GUISkin_t536 * __this, GUIStyle_t545 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t545 * L_0 = ___value;
		__this->___m_window_9 = L_0;
		GUISkin_Apply_m3339(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalSlider()
extern "C" GUIStyle_t545 * GUISkin_get_horizontalSlider_m3309 (GUISkin_t536 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t545 * L_0 = (__this->___m_horizontalSlider_10);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_horizontalSlider(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_horizontalSlider_m3310 (GUISkin_t536 * __this, GUIStyle_t545 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t545 * L_0 = ___value;
		__this->___m_horizontalSlider_10 = L_0;
		GUISkin_Apply_m3339(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalSliderThumb()
extern "C" GUIStyle_t545 * GUISkin_get_horizontalSliderThumb_m3311 (GUISkin_t536 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t545 * L_0 = (__this->___m_horizontalSliderThumb_11);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_horizontalSliderThumb(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_horizontalSliderThumb_m3312 (GUISkin_t536 * __this, GUIStyle_t545 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t545 * L_0 = ___value;
		__this->___m_horizontalSliderThumb_11 = L_0;
		GUISkin_Apply_m3339(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalSlider()
extern "C" GUIStyle_t545 * GUISkin_get_verticalSlider_m3313 (GUISkin_t536 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t545 * L_0 = (__this->___m_verticalSlider_12);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_verticalSlider(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_verticalSlider_m3314 (GUISkin_t536 * __this, GUIStyle_t545 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t545 * L_0 = ___value;
		__this->___m_verticalSlider_12 = L_0;
		GUISkin_Apply_m3339(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalSliderThumb()
extern "C" GUIStyle_t545 * GUISkin_get_verticalSliderThumb_m3315 (GUISkin_t536 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t545 * L_0 = (__this->___m_verticalSliderThumb_13);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_verticalSliderThumb(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_verticalSliderThumb_m3316 (GUISkin_t536 * __this, GUIStyle_t545 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t545 * L_0 = ___value;
		__this->___m_verticalSliderThumb_13 = L_0;
		GUISkin_Apply_m3339(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbar()
extern "C" GUIStyle_t545 * GUISkin_get_horizontalScrollbar_m3317 (GUISkin_t536 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t545 * L_0 = (__this->___m_horizontalScrollbar_14);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_horizontalScrollbar(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_horizontalScrollbar_m3318 (GUISkin_t536 * __this, GUIStyle_t545 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t545 * L_0 = ___value;
		__this->___m_horizontalScrollbar_14 = L_0;
		GUISkin_Apply_m3339(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbarThumb()
extern "C" GUIStyle_t545 * GUISkin_get_horizontalScrollbarThumb_m3319 (GUISkin_t536 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t545 * L_0 = (__this->___m_horizontalScrollbarThumb_15);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_horizontalScrollbarThumb(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_horizontalScrollbarThumb_m3320 (GUISkin_t536 * __this, GUIStyle_t545 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t545 * L_0 = ___value;
		__this->___m_horizontalScrollbarThumb_15 = L_0;
		GUISkin_Apply_m3339(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbarLeftButton()
extern "C" GUIStyle_t545 * GUISkin_get_horizontalScrollbarLeftButton_m3321 (GUISkin_t536 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t545 * L_0 = (__this->___m_horizontalScrollbarLeftButton_16);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_horizontalScrollbarLeftButton(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_horizontalScrollbarLeftButton_m3322 (GUISkin_t536 * __this, GUIStyle_t545 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t545 * L_0 = ___value;
		__this->___m_horizontalScrollbarLeftButton_16 = L_0;
		GUISkin_Apply_m3339(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbarRightButton()
extern "C" GUIStyle_t545 * GUISkin_get_horizontalScrollbarRightButton_m3323 (GUISkin_t536 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t545 * L_0 = (__this->___m_horizontalScrollbarRightButton_17);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_horizontalScrollbarRightButton(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_horizontalScrollbarRightButton_m3324 (GUISkin_t536 * __this, GUIStyle_t545 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t545 * L_0 = ___value;
		__this->___m_horizontalScrollbarRightButton_17 = L_0;
		GUISkin_Apply_m3339(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbar()
extern "C" GUIStyle_t545 * GUISkin_get_verticalScrollbar_m3325 (GUISkin_t536 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t545 * L_0 = (__this->___m_verticalScrollbar_18);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_verticalScrollbar(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_verticalScrollbar_m3326 (GUISkin_t536 * __this, GUIStyle_t545 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t545 * L_0 = ___value;
		__this->___m_verticalScrollbar_18 = L_0;
		GUISkin_Apply_m3339(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbarThumb()
extern "C" GUIStyle_t545 * GUISkin_get_verticalScrollbarThumb_m3327 (GUISkin_t536 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t545 * L_0 = (__this->___m_verticalScrollbarThumb_19);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_verticalScrollbarThumb(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_verticalScrollbarThumb_m3328 (GUISkin_t536 * __this, GUIStyle_t545 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t545 * L_0 = ___value;
		__this->___m_verticalScrollbarThumb_19 = L_0;
		GUISkin_Apply_m3339(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbarUpButton()
extern "C" GUIStyle_t545 * GUISkin_get_verticalScrollbarUpButton_m3329 (GUISkin_t536 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t545 * L_0 = (__this->___m_verticalScrollbarUpButton_20);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_verticalScrollbarUpButton(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_verticalScrollbarUpButton_m3330 (GUISkin_t536 * __this, GUIStyle_t545 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t545 * L_0 = ___value;
		__this->___m_verticalScrollbarUpButton_20 = L_0;
		GUISkin_Apply_m3339(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbarDownButton()
extern "C" GUIStyle_t545 * GUISkin_get_verticalScrollbarDownButton_m3331 (GUISkin_t536 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t545 * L_0 = (__this->___m_verticalScrollbarDownButton_21);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_verticalScrollbarDownButton(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_verticalScrollbarDownButton_m3332 (GUISkin_t536 * __this, GUIStyle_t545 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t545 * L_0 = ___value;
		__this->___m_verticalScrollbarDownButton_21 = L_0;
		GUISkin_Apply_m3339(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_scrollView()
extern "C" GUIStyle_t545 * GUISkin_get_scrollView_m3333 (GUISkin_t536 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t545 * L_0 = (__this->___m_ScrollView_22);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_scrollView(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_scrollView_m3334 (GUISkin_t536 * __this, GUIStyle_t545 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t545 * L_0 = ___value;
		__this->___m_ScrollView_22 = L_0;
		GUISkin_Apply_m3339(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle[] UnityEngine.GUISkin::get_customStyles()
extern "C" GUIStyleU5BU5D_t553* GUISkin_get_customStyles_m3335 (GUISkin_t536 * __this, const MethodInfo* method)
{
	{
		GUIStyleU5BU5D_t553* L_0 = (__this->___m_CustomStyles_23);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_customStyles(UnityEngine.GUIStyle[])
#include "UnityEngine_ArrayTypes.h"
extern "C" void GUISkin_set_customStyles_m3336 (GUISkin_t536 * __this, GUIStyleU5BU5D_t553* ___value, const MethodInfo* method)
{
	{
		GUIStyleU5BU5D_t553* L_0 = ___value;
		__this->___m_CustomStyles_23 = L_0;
		GUISkin_Apply_m3339(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUISettings UnityEngine.GUISkin::get_settings()
extern "C" GUISettings_t551 * GUISkin_get_settings_m3337 (GUISkin_t536 * __this, const MethodInfo* method)
{
	{
		GUISettings_t551 * L_0 = (__this->___m_Settings_24);
		return L_0;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_error()
extern TypeInfo* GUISkin_t536_il2cpp_TypeInfo_var;
extern TypeInfo* GUIStyle_t545_il2cpp_TypeInfo_var;
extern "C" GUIStyle_t545 * GUISkin_get_error_m3338 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUISkin_t536_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(378);
		GUIStyle_t545_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUIStyle_t545 * L_0 = ((GUISkin_t536_StaticFields*)GUISkin_t536_il2cpp_TypeInfo_var->static_fields)->___ms_Error_25;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		GUIStyle_t545 * L_1 = (GUIStyle_t545 *)il2cpp_codegen_object_new (GUIStyle_t545_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m3364(L_1, /*hidden argument*/NULL);
		((GUISkin_t536_StaticFields*)GUISkin_t536_il2cpp_TypeInfo_var->static_fields)->___ms_Error_25 = L_1;
	}

IL_0014:
	{
		GUIStyle_t545 * L_2 = ((GUISkin_t536_StaticFields*)GUISkin_t536_il2cpp_TypeInfo_var->static_fields)->___ms_Error_25;
		return L_2;
	}
}
// System.Void UnityEngine.GUISkin::Apply()
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral269;
extern "C" void GUISkin_Apply_m3339 (GUISkin_t536 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral269 = il2cpp_codegen_string_literal_from_index(269);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUIStyleU5BU5D_t553* L_0 = (__this->___m_CustomStyles_23);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_Log_m353(NULL /*static, unused*/, _stringLiteral269, /*hidden argument*/NULL);
	}

IL_0015:
	{
		GUISkin_BuildStyleCache_m3340(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUISkin::BuildStyleCache()
// System.StringComparer
#include "mscorlib_System_StringComparerMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_7MethodDeclarations.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
// UnityEngine.GUIStyleState
#include "UnityEngine_UnityEngine_GUIStyleStateMethodDeclarations.h"
extern TypeInfo* GUIStyle_t545_il2cpp_TypeInfo_var;
extern TypeInfo* StringComparer_t662_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t554_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3634_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral270;
extern Il2CppCodeGenString* _stringLiteral271;
extern Il2CppCodeGenString* _stringLiteral272;
extern Il2CppCodeGenString* _stringLiteral273;
extern Il2CppCodeGenString* _stringLiteral274;
extern Il2CppCodeGenString* _stringLiteral275;
extern Il2CppCodeGenString* _stringLiteral276;
extern Il2CppCodeGenString* _stringLiteral277;
extern Il2CppCodeGenString* _stringLiteral278;
extern Il2CppCodeGenString* _stringLiteral279;
extern Il2CppCodeGenString* _stringLiteral280;
extern Il2CppCodeGenString* _stringLiteral281;
extern Il2CppCodeGenString* _stringLiteral282;
extern Il2CppCodeGenString* _stringLiteral283;
extern Il2CppCodeGenString* _stringLiteral284;
extern Il2CppCodeGenString* _stringLiteral285;
extern Il2CppCodeGenString* _stringLiteral286;
extern Il2CppCodeGenString* _stringLiteral287;
extern Il2CppCodeGenString* _stringLiteral288;
extern Il2CppCodeGenString* _stringLiteral289;
extern "C" void GUISkin_BuildStyleCache_m3340 (GUISkin_t536 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIStyle_t545_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		StringComparer_t662_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(379);
		Dictionary_2_t554_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(380);
		Dictionary_2__ctor_m3634_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483985);
		_stringLiteral270 = il2cpp_codegen_string_literal_from_index(270);
		_stringLiteral271 = il2cpp_codegen_string_literal_from_index(271);
		_stringLiteral272 = il2cpp_codegen_string_literal_from_index(272);
		_stringLiteral273 = il2cpp_codegen_string_literal_from_index(273);
		_stringLiteral274 = il2cpp_codegen_string_literal_from_index(274);
		_stringLiteral275 = il2cpp_codegen_string_literal_from_index(275);
		_stringLiteral276 = il2cpp_codegen_string_literal_from_index(276);
		_stringLiteral277 = il2cpp_codegen_string_literal_from_index(277);
		_stringLiteral278 = il2cpp_codegen_string_literal_from_index(278);
		_stringLiteral279 = il2cpp_codegen_string_literal_from_index(279);
		_stringLiteral280 = il2cpp_codegen_string_literal_from_index(280);
		_stringLiteral281 = il2cpp_codegen_string_literal_from_index(281);
		_stringLiteral282 = il2cpp_codegen_string_literal_from_index(282);
		_stringLiteral283 = il2cpp_codegen_string_literal_from_index(283);
		_stringLiteral284 = il2cpp_codegen_string_literal_from_index(284);
		_stringLiteral285 = il2cpp_codegen_string_literal_from_index(285);
		_stringLiteral286 = il2cpp_codegen_string_literal_from_index(286);
		_stringLiteral287 = il2cpp_codegen_string_literal_from_index(287);
		_stringLiteral288 = il2cpp_codegen_string_literal_from_index(288);
		_stringLiteral289 = il2cpp_codegen_string_literal_from_index(289);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		GUIStyle_t545 * L_0 = (__this->___m_box_3);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		GUIStyle_t545 * L_1 = (GUIStyle_t545 *)il2cpp_codegen_object_new (GUIStyle_t545_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m3364(L_1, /*hidden argument*/NULL);
		__this->___m_box_3 = L_1;
	}

IL_0016:
	{
		GUIStyle_t545 * L_2 = (__this->___m_button_4);
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		GUIStyle_t545 * L_3 = (GUIStyle_t545 *)il2cpp_codegen_object_new (GUIStyle_t545_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m3364(L_3, /*hidden argument*/NULL);
		__this->___m_button_4 = L_3;
	}

IL_002c:
	{
		GUIStyle_t545 * L_4 = (__this->___m_toggle_5);
		if (L_4)
		{
			goto IL_0042;
		}
	}
	{
		GUIStyle_t545 * L_5 = (GUIStyle_t545 *)il2cpp_codegen_object_new (GUIStyle_t545_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m3364(L_5, /*hidden argument*/NULL);
		__this->___m_toggle_5 = L_5;
	}

IL_0042:
	{
		GUIStyle_t545 * L_6 = (__this->___m_label_6);
		if (L_6)
		{
			goto IL_0058;
		}
	}
	{
		GUIStyle_t545 * L_7 = (GUIStyle_t545 *)il2cpp_codegen_object_new (GUIStyle_t545_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m3364(L_7, /*hidden argument*/NULL);
		__this->___m_label_6 = L_7;
	}

IL_0058:
	{
		GUIStyle_t545 * L_8 = (__this->___m_window_9);
		if (L_8)
		{
			goto IL_006e;
		}
	}
	{
		GUIStyle_t545 * L_9 = (GUIStyle_t545 *)il2cpp_codegen_object_new (GUIStyle_t545_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m3364(L_9, /*hidden argument*/NULL);
		__this->___m_window_9 = L_9;
	}

IL_006e:
	{
		GUIStyle_t545 * L_10 = (__this->___m_textField_7);
		if (L_10)
		{
			goto IL_0084;
		}
	}
	{
		GUIStyle_t545 * L_11 = (GUIStyle_t545 *)il2cpp_codegen_object_new (GUIStyle_t545_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m3364(L_11, /*hidden argument*/NULL);
		__this->___m_textField_7 = L_11;
	}

IL_0084:
	{
		GUIStyle_t545 * L_12 = (__this->___m_textArea_8);
		if (L_12)
		{
			goto IL_009a;
		}
	}
	{
		GUIStyle_t545 * L_13 = (GUIStyle_t545 *)il2cpp_codegen_object_new (GUIStyle_t545_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m3364(L_13, /*hidden argument*/NULL);
		__this->___m_textArea_8 = L_13;
	}

IL_009a:
	{
		GUIStyle_t545 * L_14 = (__this->___m_horizontalSlider_10);
		if (L_14)
		{
			goto IL_00b0;
		}
	}
	{
		GUIStyle_t545 * L_15 = (GUIStyle_t545 *)il2cpp_codegen_object_new (GUIStyle_t545_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m3364(L_15, /*hidden argument*/NULL);
		__this->___m_horizontalSlider_10 = L_15;
	}

IL_00b0:
	{
		GUIStyle_t545 * L_16 = (__this->___m_horizontalSliderThumb_11);
		if (L_16)
		{
			goto IL_00c6;
		}
	}
	{
		GUIStyle_t545 * L_17 = (GUIStyle_t545 *)il2cpp_codegen_object_new (GUIStyle_t545_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m3364(L_17, /*hidden argument*/NULL);
		__this->___m_horizontalSliderThumb_11 = L_17;
	}

IL_00c6:
	{
		GUIStyle_t545 * L_18 = (__this->___m_verticalSlider_12);
		if (L_18)
		{
			goto IL_00dc;
		}
	}
	{
		GUIStyle_t545 * L_19 = (GUIStyle_t545 *)il2cpp_codegen_object_new (GUIStyle_t545_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m3364(L_19, /*hidden argument*/NULL);
		__this->___m_verticalSlider_12 = L_19;
	}

IL_00dc:
	{
		GUIStyle_t545 * L_20 = (__this->___m_verticalSliderThumb_13);
		if (L_20)
		{
			goto IL_00f2;
		}
	}
	{
		GUIStyle_t545 * L_21 = (GUIStyle_t545 *)il2cpp_codegen_object_new (GUIStyle_t545_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m3364(L_21, /*hidden argument*/NULL);
		__this->___m_verticalSliderThumb_13 = L_21;
	}

IL_00f2:
	{
		GUIStyle_t545 * L_22 = (__this->___m_horizontalScrollbar_14);
		if (L_22)
		{
			goto IL_0108;
		}
	}
	{
		GUIStyle_t545 * L_23 = (GUIStyle_t545 *)il2cpp_codegen_object_new (GUIStyle_t545_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m3364(L_23, /*hidden argument*/NULL);
		__this->___m_horizontalScrollbar_14 = L_23;
	}

IL_0108:
	{
		GUIStyle_t545 * L_24 = (__this->___m_horizontalScrollbarThumb_15);
		if (L_24)
		{
			goto IL_011e;
		}
	}
	{
		GUIStyle_t545 * L_25 = (GUIStyle_t545 *)il2cpp_codegen_object_new (GUIStyle_t545_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m3364(L_25, /*hidden argument*/NULL);
		__this->___m_horizontalScrollbarThumb_15 = L_25;
	}

IL_011e:
	{
		GUIStyle_t545 * L_26 = (__this->___m_horizontalScrollbarLeftButton_16);
		if (L_26)
		{
			goto IL_0134;
		}
	}
	{
		GUIStyle_t545 * L_27 = (GUIStyle_t545 *)il2cpp_codegen_object_new (GUIStyle_t545_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m3364(L_27, /*hidden argument*/NULL);
		__this->___m_horizontalScrollbarLeftButton_16 = L_27;
	}

IL_0134:
	{
		GUIStyle_t545 * L_28 = (__this->___m_horizontalScrollbarRightButton_17);
		if (L_28)
		{
			goto IL_014a;
		}
	}
	{
		GUIStyle_t545 * L_29 = (GUIStyle_t545 *)il2cpp_codegen_object_new (GUIStyle_t545_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m3364(L_29, /*hidden argument*/NULL);
		__this->___m_horizontalScrollbarRightButton_17 = L_29;
	}

IL_014a:
	{
		GUIStyle_t545 * L_30 = (__this->___m_verticalScrollbar_18);
		if (L_30)
		{
			goto IL_0160;
		}
	}
	{
		GUIStyle_t545 * L_31 = (GUIStyle_t545 *)il2cpp_codegen_object_new (GUIStyle_t545_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m3364(L_31, /*hidden argument*/NULL);
		__this->___m_verticalScrollbar_18 = L_31;
	}

IL_0160:
	{
		GUIStyle_t545 * L_32 = (__this->___m_verticalScrollbarThumb_19);
		if (L_32)
		{
			goto IL_0176;
		}
	}
	{
		GUIStyle_t545 * L_33 = (GUIStyle_t545 *)il2cpp_codegen_object_new (GUIStyle_t545_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m3364(L_33, /*hidden argument*/NULL);
		__this->___m_verticalScrollbarThumb_19 = L_33;
	}

IL_0176:
	{
		GUIStyle_t545 * L_34 = (__this->___m_verticalScrollbarUpButton_20);
		if (L_34)
		{
			goto IL_018c;
		}
	}
	{
		GUIStyle_t545 * L_35 = (GUIStyle_t545 *)il2cpp_codegen_object_new (GUIStyle_t545_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m3364(L_35, /*hidden argument*/NULL);
		__this->___m_verticalScrollbarUpButton_20 = L_35;
	}

IL_018c:
	{
		GUIStyle_t545 * L_36 = (__this->___m_verticalScrollbarDownButton_21);
		if (L_36)
		{
			goto IL_01a2;
		}
	}
	{
		GUIStyle_t545 * L_37 = (GUIStyle_t545 *)il2cpp_codegen_object_new (GUIStyle_t545_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m3364(L_37, /*hidden argument*/NULL);
		__this->___m_verticalScrollbarDownButton_21 = L_37;
	}

IL_01a2:
	{
		GUIStyle_t545 * L_38 = (__this->___m_ScrollView_22);
		if (L_38)
		{
			goto IL_01b8;
		}
	}
	{
		GUIStyle_t545 * L_39 = (GUIStyle_t545 *)il2cpp_codegen_object_new (GUIStyle_t545_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m3364(L_39, /*hidden argument*/NULL);
		__this->___m_ScrollView_22 = L_39;
	}

IL_01b8:
	{
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t662_il2cpp_TypeInfo_var);
		StringComparer_t662 * L_40 = StringComparer_get_OrdinalIgnoreCase_m3633(NULL /*static, unused*/, /*hidden argument*/NULL);
		Dictionary_2_t554 * L_41 = (Dictionary_2_t554 *)il2cpp_codegen_object_new (Dictionary_2_t554_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3634(L_41, L_40, /*hidden argument*/Dictionary_2__ctor_m3634_MethodInfo_var);
		__this->___m_Styles_26 = L_41;
		Dictionary_2_t554 * L_42 = (__this->___m_Styles_26);
		GUIStyle_t545 * L_43 = (__this->___m_box_3);
		NullCheck(L_42);
		VirtActionInvoker2< String_t*, GUIStyle_t545 * >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_42, _stringLiteral270, L_43);
		GUIStyle_t545 * L_44 = (__this->___m_box_3);
		NullCheck(L_44);
		GUIStyle_set_name_m3375(L_44, _stringLiteral270, /*hidden argument*/NULL);
		Dictionary_2_t554 * L_45 = (__this->___m_Styles_26);
		GUIStyle_t545 * L_46 = (__this->___m_button_4);
		NullCheck(L_45);
		VirtActionInvoker2< String_t*, GUIStyle_t545 * >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_45, _stringLiteral271, L_46);
		GUIStyle_t545 * L_47 = (__this->___m_button_4);
		NullCheck(L_47);
		GUIStyle_set_name_m3375(L_47, _stringLiteral271, /*hidden argument*/NULL);
		Dictionary_2_t554 * L_48 = (__this->___m_Styles_26);
		GUIStyle_t545 * L_49 = (__this->___m_toggle_5);
		NullCheck(L_48);
		VirtActionInvoker2< String_t*, GUIStyle_t545 * >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_48, _stringLiteral272, L_49);
		GUIStyle_t545 * L_50 = (__this->___m_toggle_5);
		NullCheck(L_50);
		GUIStyle_set_name_m3375(L_50, _stringLiteral272, /*hidden argument*/NULL);
		Dictionary_2_t554 * L_51 = (__this->___m_Styles_26);
		GUIStyle_t545 * L_52 = (__this->___m_label_6);
		NullCheck(L_51);
		VirtActionInvoker2< String_t*, GUIStyle_t545 * >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_51, _stringLiteral273, L_52);
		GUIStyle_t545 * L_53 = (__this->___m_label_6);
		NullCheck(L_53);
		GUIStyle_set_name_m3375(L_53, _stringLiteral273, /*hidden argument*/NULL);
		Dictionary_2_t554 * L_54 = (__this->___m_Styles_26);
		GUIStyle_t545 * L_55 = (__this->___m_window_9);
		NullCheck(L_54);
		VirtActionInvoker2< String_t*, GUIStyle_t545 * >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_54, _stringLiteral274, L_55);
		GUIStyle_t545 * L_56 = (__this->___m_window_9);
		NullCheck(L_56);
		GUIStyle_set_name_m3375(L_56, _stringLiteral274, /*hidden argument*/NULL);
		Dictionary_2_t554 * L_57 = (__this->___m_Styles_26);
		GUIStyle_t545 * L_58 = (__this->___m_textField_7);
		NullCheck(L_57);
		VirtActionInvoker2< String_t*, GUIStyle_t545 * >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_57, _stringLiteral275, L_58);
		GUIStyle_t545 * L_59 = (__this->___m_textField_7);
		NullCheck(L_59);
		GUIStyle_set_name_m3375(L_59, _stringLiteral275, /*hidden argument*/NULL);
		Dictionary_2_t554 * L_60 = (__this->___m_Styles_26);
		GUIStyle_t545 * L_61 = (__this->___m_textArea_8);
		NullCheck(L_60);
		VirtActionInvoker2< String_t*, GUIStyle_t545 * >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_60, _stringLiteral276, L_61);
		GUIStyle_t545 * L_62 = (__this->___m_textArea_8);
		NullCheck(L_62);
		GUIStyle_set_name_m3375(L_62, _stringLiteral276, /*hidden argument*/NULL);
		Dictionary_2_t554 * L_63 = (__this->___m_Styles_26);
		GUIStyle_t545 * L_64 = (__this->___m_horizontalSlider_10);
		NullCheck(L_63);
		VirtActionInvoker2< String_t*, GUIStyle_t545 * >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_63, _stringLiteral277, L_64);
		GUIStyle_t545 * L_65 = (__this->___m_horizontalSlider_10);
		NullCheck(L_65);
		GUIStyle_set_name_m3375(L_65, _stringLiteral277, /*hidden argument*/NULL);
		Dictionary_2_t554 * L_66 = (__this->___m_Styles_26);
		GUIStyle_t545 * L_67 = (__this->___m_horizontalSliderThumb_11);
		NullCheck(L_66);
		VirtActionInvoker2< String_t*, GUIStyle_t545 * >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_66, _stringLiteral278, L_67);
		GUIStyle_t545 * L_68 = (__this->___m_horizontalSliderThumb_11);
		NullCheck(L_68);
		GUIStyle_set_name_m3375(L_68, _stringLiteral278, /*hidden argument*/NULL);
		Dictionary_2_t554 * L_69 = (__this->___m_Styles_26);
		GUIStyle_t545 * L_70 = (__this->___m_verticalSlider_12);
		NullCheck(L_69);
		VirtActionInvoker2< String_t*, GUIStyle_t545 * >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_69, _stringLiteral279, L_70);
		GUIStyle_t545 * L_71 = (__this->___m_verticalSlider_12);
		NullCheck(L_71);
		GUIStyle_set_name_m3375(L_71, _stringLiteral279, /*hidden argument*/NULL);
		Dictionary_2_t554 * L_72 = (__this->___m_Styles_26);
		GUIStyle_t545 * L_73 = (__this->___m_verticalSliderThumb_13);
		NullCheck(L_72);
		VirtActionInvoker2< String_t*, GUIStyle_t545 * >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_72, _stringLiteral280, L_73);
		GUIStyle_t545 * L_74 = (__this->___m_verticalSliderThumb_13);
		NullCheck(L_74);
		GUIStyle_set_name_m3375(L_74, _stringLiteral280, /*hidden argument*/NULL);
		Dictionary_2_t554 * L_75 = (__this->___m_Styles_26);
		GUIStyle_t545 * L_76 = (__this->___m_horizontalScrollbar_14);
		NullCheck(L_75);
		VirtActionInvoker2< String_t*, GUIStyle_t545 * >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_75, _stringLiteral281, L_76);
		GUIStyle_t545 * L_77 = (__this->___m_horizontalScrollbar_14);
		NullCheck(L_77);
		GUIStyle_set_name_m3375(L_77, _stringLiteral281, /*hidden argument*/NULL);
		Dictionary_2_t554 * L_78 = (__this->___m_Styles_26);
		GUIStyle_t545 * L_79 = (__this->___m_horizontalScrollbarThumb_15);
		NullCheck(L_78);
		VirtActionInvoker2< String_t*, GUIStyle_t545 * >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_78, _stringLiteral282, L_79);
		GUIStyle_t545 * L_80 = (__this->___m_horizontalScrollbarThumb_15);
		NullCheck(L_80);
		GUIStyle_set_name_m3375(L_80, _stringLiteral282, /*hidden argument*/NULL);
		Dictionary_2_t554 * L_81 = (__this->___m_Styles_26);
		GUIStyle_t545 * L_82 = (__this->___m_horizontalScrollbarLeftButton_16);
		NullCheck(L_81);
		VirtActionInvoker2< String_t*, GUIStyle_t545 * >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_81, _stringLiteral283, L_82);
		GUIStyle_t545 * L_83 = (__this->___m_horizontalScrollbarLeftButton_16);
		NullCheck(L_83);
		GUIStyle_set_name_m3375(L_83, _stringLiteral283, /*hidden argument*/NULL);
		Dictionary_2_t554 * L_84 = (__this->___m_Styles_26);
		GUIStyle_t545 * L_85 = (__this->___m_horizontalScrollbarRightButton_17);
		NullCheck(L_84);
		VirtActionInvoker2< String_t*, GUIStyle_t545 * >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_84, _stringLiteral284, L_85);
		GUIStyle_t545 * L_86 = (__this->___m_horizontalScrollbarRightButton_17);
		NullCheck(L_86);
		GUIStyle_set_name_m3375(L_86, _stringLiteral284, /*hidden argument*/NULL);
		Dictionary_2_t554 * L_87 = (__this->___m_Styles_26);
		GUIStyle_t545 * L_88 = (__this->___m_verticalScrollbar_18);
		NullCheck(L_87);
		VirtActionInvoker2< String_t*, GUIStyle_t545 * >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_87, _stringLiteral285, L_88);
		GUIStyle_t545 * L_89 = (__this->___m_verticalScrollbar_18);
		NullCheck(L_89);
		GUIStyle_set_name_m3375(L_89, _stringLiteral285, /*hidden argument*/NULL);
		Dictionary_2_t554 * L_90 = (__this->___m_Styles_26);
		GUIStyle_t545 * L_91 = (__this->___m_verticalScrollbarThumb_19);
		NullCheck(L_90);
		VirtActionInvoker2< String_t*, GUIStyle_t545 * >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_90, _stringLiteral286, L_91);
		GUIStyle_t545 * L_92 = (__this->___m_verticalScrollbarThumb_19);
		NullCheck(L_92);
		GUIStyle_set_name_m3375(L_92, _stringLiteral286, /*hidden argument*/NULL);
		Dictionary_2_t554 * L_93 = (__this->___m_Styles_26);
		GUIStyle_t545 * L_94 = (__this->___m_verticalScrollbarUpButton_20);
		NullCheck(L_93);
		VirtActionInvoker2< String_t*, GUIStyle_t545 * >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_93, _stringLiteral287, L_94);
		GUIStyle_t545 * L_95 = (__this->___m_verticalScrollbarUpButton_20);
		NullCheck(L_95);
		GUIStyle_set_name_m3375(L_95, _stringLiteral287, /*hidden argument*/NULL);
		Dictionary_2_t554 * L_96 = (__this->___m_Styles_26);
		GUIStyle_t545 * L_97 = (__this->___m_verticalScrollbarDownButton_21);
		NullCheck(L_96);
		VirtActionInvoker2< String_t*, GUIStyle_t545 * >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_96, _stringLiteral288, L_97);
		GUIStyle_t545 * L_98 = (__this->___m_verticalScrollbarDownButton_21);
		NullCheck(L_98);
		GUIStyle_set_name_m3375(L_98, _stringLiteral288, /*hidden argument*/NULL);
		Dictionary_2_t554 * L_99 = (__this->___m_Styles_26);
		GUIStyle_t545 * L_100 = (__this->___m_ScrollView_22);
		NullCheck(L_99);
		VirtActionInvoker2< String_t*, GUIStyle_t545 * >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_99, _stringLiteral289, L_100);
		GUIStyle_t545 * L_101 = (__this->___m_ScrollView_22);
		NullCheck(L_101);
		GUIStyle_set_name_m3375(L_101, _stringLiteral289, /*hidden argument*/NULL);
		GUIStyleU5BU5D_t553* L_102 = (__this->___m_CustomStyles_23);
		if (!L_102)
		{
			goto IL_0516;
		}
	}
	{
		V_0 = 0;
		goto IL_0508;
	}

IL_04d2:
	{
		GUIStyleU5BU5D_t553* L_103 = (__this->___m_CustomStyles_23);
		int32_t L_104 = V_0;
		NullCheck(L_103);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_103, L_104);
		int32_t L_105 = L_104;
		if ((*(GUIStyle_t545 **)(GUIStyle_t545 **)SZArrayLdElema(L_103, L_105, sizeof(GUIStyle_t545 *))))
		{
			goto IL_04e4;
		}
	}
	{
		goto IL_0504;
	}

IL_04e4:
	{
		Dictionary_2_t554 * L_106 = (__this->___m_Styles_26);
		GUIStyleU5BU5D_t553* L_107 = (__this->___m_CustomStyles_23);
		int32_t L_108 = V_0;
		NullCheck(L_107);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_107, L_108);
		int32_t L_109 = L_108;
		NullCheck((*(GUIStyle_t545 **)(GUIStyle_t545 **)SZArrayLdElema(L_107, L_109, sizeof(GUIStyle_t545 *))));
		String_t* L_110 = GUIStyle_get_name_m3374((*(GUIStyle_t545 **)(GUIStyle_t545 **)SZArrayLdElema(L_107, L_109, sizeof(GUIStyle_t545 *))), /*hidden argument*/NULL);
		GUIStyleU5BU5D_t553* L_111 = (__this->___m_CustomStyles_23);
		int32_t L_112 = V_0;
		NullCheck(L_111);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_111, L_112);
		int32_t L_113 = L_112;
		NullCheck(L_106);
		VirtActionInvoker2< String_t*, GUIStyle_t545 * >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_106, L_110, (*(GUIStyle_t545 **)(GUIStyle_t545 **)SZArrayLdElema(L_111, L_113, sizeof(GUIStyle_t545 *))));
	}

IL_0504:
	{
		int32_t L_114 = V_0;
		V_0 = ((int32_t)((int32_t)L_114+(int32_t)1));
	}

IL_0508:
	{
		int32_t L_115 = V_0;
		GUIStyleU5BU5D_t553* L_116 = (__this->___m_CustomStyles_23);
		NullCheck(L_116);
		if ((((int32_t)L_115) < ((int32_t)(((int32_t)(((Array_t *)L_116)->max_length))))))
		{
			goto IL_04d2;
		}
	}

IL_0516:
	{
		GUIStyle_t545 * L_117 = GUISkin_get_error_m3338(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_117);
		GUIStyle_set_stretchHeight_m3383(L_117, 1, /*hidden argument*/NULL);
		GUIStyle_t545 * L_118 = GUISkin_get_error_m3338(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_118);
		GUIStyleState_t555 * L_119 = GUIStyle_get_normal_m3367(L_118, /*hidden argument*/NULL);
		Color_t11  L_120 = Color_get_red_m288(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_119);
		GUIStyleState_set_textColor_m3351(L_119, L_120, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::GetStyle(System.String)
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.Event
#include "UnityEngine_UnityEngine_EventMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t78_il2cpp_TypeInfo_var;
extern TypeInfo* EventType_t531_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral290;
extern Il2CppCodeGenString* _stringLiteral291;
extern Il2CppCodeGenString* _stringLiteral292;
extern "C" GUIStyle_t545 * GUISkin_GetStyle_m3341 (GUISkin_t536 * __this, String_t* ___styleName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t78_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(113);
		EventType_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(361);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		_stringLiteral290 = il2cpp_codegen_string_literal_from_index(290);
		_stringLiteral291 = il2cpp_codegen_string_literal_from_index(291);
		_stringLiteral292 = il2cpp_codegen_string_literal_from_index(292);
		s_Il2CppMethodIntialized = true;
	}
	GUIStyle_t545 * V_0 = {0};
	{
		String_t* L_0 = ___styleName;
		GUIStyle_t545 * L_1 = GUISkin_FindStyle_m3342(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		GUIStyle_t545 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		GUIStyle_t545 * L_3 = V_0;
		return L_3;
	}

IL_0010:
	{
		ObjectU5BU5D_t78* L_4 = ((ObjectU5BU5D_t78*)SZArrayNew(ObjectU5BU5D_t78_il2cpp_TypeInfo_var, 6));
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, _stringLiteral290);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral290;
		ObjectU5BU5D_t78* L_5 = L_4;
		String_t* L_6 = ___styleName;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 1);
		ArrayElementTypeCheck (L_5, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 1, sizeof(Object_t *))) = (Object_t *)L_6;
		ObjectU5BU5D_t78* L_7 = L_5;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 2);
		ArrayElementTypeCheck (L_7, _stringLiteral291);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral291;
		ObjectU5BU5D_t78* L_8 = L_7;
		String_t* L_9 = Object_get_name_m530(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 3);
		ArrayElementTypeCheck (L_8, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 3, sizeof(Object_t *))) = (Object_t *)L_9;
		ObjectU5BU5D_t78* L_10 = L_8;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 4);
		ArrayElementTypeCheck (L_10, _stringLiteral292);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 4, sizeof(Object_t *))) = (Object_t *)_stringLiteral292;
		ObjectU5BU5D_t78* L_11 = L_10;
		Event_t77 * L_12 = Event_get_current_m322(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_12);
		int32_t L_13 = Event_get_type_m323(L_12, /*hidden argument*/NULL);
		int32_t L_14 = L_13;
		Object_t * L_15 = Box(EventType_t531_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 5);
		ArrayElementTypeCheck (L_11, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 5, sizeof(Object_t *))) = (Object_t *)L_15;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Concat_m1939(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		Debug_LogWarning_m310(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		GUIStyle_t545 * L_17 = GUISkin_get_error_m3338(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_17;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::FindStyle(System.String)
extern Il2CppCodeGenString* _stringLiteral293;
extern "C" GUIStyle_t545 * GUISkin_FindStyle_m3342 (GUISkin_t536 * __this, String_t* ___styleName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral293 = il2cpp_codegen_string_literal_from_index(293);
		s_Il2CppMethodIntialized = true;
	}
	GUIStyle_t545 * V_0 = {0};
	{
		bool L_0 = Object_op_Equality_m305(NULL /*static, unused*/, __this, (Object_t75 *)NULL, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		Debug_LogError_m365(NULL /*static, unused*/, _stringLiteral293, /*hidden argument*/NULL);
		return (GUIStyle_t545 *)NULL;
	}

IL_0018:
	{
		Dictionary_2_t554 * L_1 = (__this->___m_Styles_26);
		if (L_1)
		{
			goto IL_0029;
		}
	}
	{
		GUISkin_BuildStyleCache_m3340(__this, /*hidden argument*/NULL);
	}

IL_0029:
	{
		Dictionary_2_t554 * L_2 = (__this->___m_Styles_26);
		String_t* L_3 = ___styleName;
		NullCheck(L_2);
		bool L_4 = (bool)VirtFuncInvoker2< bool, String_t*, GUIStyle_t545 ** >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::TryGetValue(!0,!1&) */, L_2, L_3, (&V_0));
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		GUIStyle_t545 * L_5 = V_0;
		return L_5;
	}

IL_003e:
	{
		return (GUIStyle_t545 *)NULL;
	}
}
// System.Void UnityEngine.GUISkin::MakeCurrent()
// UnityEngine.GUISkin/SkinChangedDelegate
#include "UnityEngine_UnityEngine_GUISkin_SkinChangedDelegateMethodDeclarations.h"
extern TypeInfo* GUISkin_t536_il2cpp_TypeInfo_var;
extern TypeInfo* GUIStyle_t545_il2cpp_TypeInfo_var;
extern "C" void GUISkin_MakeCurrent_m3343 (GUISkin_t536 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUISkin_t536_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(378);
		GUIStyle_t545_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		s_Il2CppMethodIntialized = true;
	}
	{
		((GUISkin_t536_StaticFields*)GUISkin_t536_il2cpp_TypeInfo_var->static_fields)->___current_28 = __this;
		Font_t197 * L_0 = GUISkin_get_font_m3293(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t545_il2cpp_TypeInfo_var);
		GUIStyle_SetDefaultFont_m3384(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		SkinChangedDelegate_t552 * L_1 = ((GUISkin_t536_StaticFields*)GUISkin_t536_il2cpp_TypeInfo_var->static_fields)->___m_SkinChanged_27;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		SkinChangedDelegate_t552 * L_2 = ((GUISkin_t536_StaticFields*)GUISkin_t536_il2cpp_TypeInfo_var->static_fields)->___m_SkinChanged_27;
		NullCheck(L_2);
		SkinChangedDelegate_Invoke_m3288(L_2, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Collections.IEnumerator UnityEngine.GUISkin::GetEnumerator()
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_1MethodDeclarations.h"
extern TypeInfo* Enumerator_t664_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_get_Values_m3635_MethodInfo_var;
extern const MethodInfo* ValueCollection_GetEnumerator_m3636_MethodInfo_var;
extern "C" Object_t * GUISkin_GetEnumerator_m3344 (GUISkin_t536 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t664_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(381);
		Dictionary_2_get_Values_m3635_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483986);
		ValueCollection_GetEnumerator_m3636_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483987);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t554 * L_0 = (__this->___m_Styles_26);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		GUISkin_BuildStyleCache_m3340(__this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		Dictionary_2_t554 * L_1 = (__this->___m_Styles_26);
		NullCheck(L_1);
		ValueCollection_t663 * L_2 = Dictionary_2_get_Values_m3635(L_1, /*hidden argument*/Dictionary_2_get_Values_m3635_MethodInfo_var);
		NullCheck(L_2);
		Enumerator_t664  L_3 = ValueCollection_GetEnumerator_m3636(L_2, /*hidden argument*/ValueCollection_GetEnumerator_m3636_MethodInfo_var);
		Enumerator_t664  L_4 = L_3;
		Object_t * L_5 = Box(Enumerator_t664_il2cpp_TypeInfo_var, &L_4);
		return (Object_t *)L_5;
	}
}
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2D.h"
// System.Void UnityEngine.GUIStyleState::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// UnityEngine.GUIStyleState
#include "UnityEngine_UnityEngine_GUIStyleStateMethodDeclarations.h"
extern "C" void GUIStyleState__ctor_m3345 (GUIStyleState_t555 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m355(__this, /*hidden argument*/NULL);
		GUIStyleState_Init_m3348(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUIStyleState::.ctor(UnityEngine.GUIStyle,System.IntPtr)
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyle.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void GUIStyleState__ctor_m3346 (GUIStyleState_t555 * __this, GUIStyle_t545 * ___sourceStyle, IntPtr_t ___source, const MethodInfo* method)
{
	{
		Object__ctor_m355(__this, /*hidden argument*/NULL);
		GUIStyle_t545 * L_0 = ___sourceStyle;
		__this->___m_SourceStyle_1 = L_0;
		IntPtr_t L_1 = ___source;
		__this->___m_Ptr_0 = L_1;
		Texture2D_t205 * L_2 = GUIStyleState_GetBackgroundInternal_m3350(__this, /*hidden argument*/NULL);
		__this->___m_Background_2 = L_2;
		return;
	}
}
// System.Void UnityEngine.GUIStyleState::Finalize()
extern "C" void GUIStyleState_Finalize_m3347 (GUIStyleState_t555 * __this, const MethodInfo* method)
{
	Exception_t108 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t108 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			GUIStyle_t545 * L_0 = (__this->___m_SourceStyle_1);
			if (L_0)
			{
				goto IL_0011;
			}
		}

IL_000b:
		{
			GUIStyleState_Cleanup_m3349(__this, /*hidden argument*/NULL);
		}

IL_0011:
		{
			IL2CPP_LEAVE(0x1D, FINALLY_0016);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t108 *)e.ex;
		goto FINALLY_0016;
	}

FINALLY_0016:
	{ // begin finally (depth: 1)
		Object_Finalize_m3589(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(22)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(22)
	{
		IL2CPP_JUMP_TBL(0x1D, IL_001d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t108 *)
	}

IL_001d:
	{
		return;
	}
}
// System.Void UnityEngine.GUIStyleState::Init()
extern "C" void GUIStyleState_Init_m3348 (GUIStyleState_t555 * __this, const MethodInfo* method)
{
	typedef void (*GUIStyleState_Init_m3348_ftn) (GUIStyleState_t555 *);
	static GUIStyleState_Init_m3348_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyleState_Init_m3348_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyleState::Init()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GUIStyleState::Cleanup()
extern "C" void GUIStyleState_Cleanup_m3349 (GUIStyleState_t555 * __this, const MethodInfo* method)
{
	typedef void (*GUIStyleState_Cleanup_m3349_ftn) (GUIStyleState_t555 *);
	static GUIStyleState_Cleanup_m3349_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyleState_Cleanup_m3349_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyleState::Cleanup()");
	_il2cpp_icall_func(__this);
}
// UnityEngine.Texture2D UnityEngine.GUIStyleState::GetBackgroundInternal()
extern "C" Texture2D_t205 * GUIStyleState_GetBackgroundInternal_m3350 (GUIStyleState_t555 * __this, const MethodInfo* method)
{
	typedef Texture2D_t205 * (*GUIStyleState_GetBackgroundInternal_m3350_ftn) (GUIStyleState_t555 *);
	static GUIStyleState_GetBackgroundInternal_m3350_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyleState_GetBackgroundInternal_m3350_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyleState::GetBackgroundInternal()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GUIStyleState::set_textColor(UnityEngine.Color)
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
extern "C" void GUIStyleState_set_textColor_m3351 (GUIStyleState_t555 * __this, Color_t11  ___value, const MethodInfo* method)
{
	{
		GUIStyleState_INTERNAL_set_textColor_m3352(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUIStyleState::INTERNAL_set_textColor(UnityEngine.Color&)
extern "C" void GUIStyleState_INTERNAL_set_textColor_m3352 (GUIStyleState_t555 * __this, Color_t11 * ___value, const MethodInfo* method)
{
	typedef void (*GUIStyleState_INTERNAL_set_textColor_m3352_ftn) (GUIStyleState_t555 *, Color_t11 *);
	static GUIStyleState_INTERNAL_set_textColor_m3352_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyleState_INTERNAL_set_textColor_m3352_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyleState::INTERNAL_set_textColor(UnityEngine.Color&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.RectOffset::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// UnityEngine.RectOffset
#include "UnityEngine_UnityEngine_RectOffsetMethodDeclarations.h"
extern "C" void RectOffset__ctor_m2398 (RectOffset_t304 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m355(__this, /*hidden argument*/NULL);
		RectOffset_Init_m3356(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.RectOffset::.ctor(UnityEngine.GUIStyle,System.IntPtr)
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyle.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void RectOffset__ctor_m3353 (RectOffset_t304 * __this, GUIStyle_t545 * ___sourceStyle, IntPtr_t ___source, const MethodInfo* method)
{
	{
		Object__ctor_m355(__this, /*hidden argument*/NULL);
		GUIStyle_t545 * L_0 = ___sourceStyle;
		__this->___m_SourceStyle_1 = L_0;
		IntPtr_t L_1 = ___source;
		__this->___m_Ptr_0 = L_1;
		return;
	}
}
// System.Void UnityEngine.RectOffset::Finalize()
extern "C" void RectOffset_Finalize_m3354 (RectOffset_t304 * __this, const MethodInfo* method)
{
	Exception_t108 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t108 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			GUIStyle_t545 * L_0 = (__this->___m_SourceStyle_1);
			if (L_0)
			{
				goto IL_0011;
			}
		}

IL_000b:
		{
			RectOffset_Cleanup_m3357(__this, /*hidden argument*/NULL);
		}

IL_0011:
		{
			IL2CPP_LEAVE(0x1D, FINALLY_0016);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t108 *)e.ex;
		goto FINALLY_0016;
	}

FINALLY_0016:
	{ // begin finally (depth: 1)
		Object_Finalize_m3589(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(22)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(22)
	{
		IL2CPP_JUMP_TBL(0x1D, IL_001d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t108 *)
	}

IL_001d:
	{
		return;
	}
}
// System.String UnityEngine.RectOffset::ToString()
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t78_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t106_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral294;
extern "C" String_t* RectOffset_ToString_m3355 (RectOffset_t304 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t78_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(113);
		Int32_t106_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		_stringLiteral294 = il2cpp_codegen_string_literal_from_index(294);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t78* L_0 = ((ObjectU5BU5D_t78*)SZArrayNew(ObjectU5BU5D_t78_il2cpp_TypeInfo_var, 4));
		int32_t L_1 = RectOffset_get_left_m2396(__this, /*hidden argument*/NULL);
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t106_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_3;
		ObjectU5BU5D_t78* L_4 = L_0;
		int32_t L_5 = RectOffset_get_right_m3359(__this, /*hidden argument*/NULL);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(Int32_t106_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1, sizeof(Object_t *))) = (Object_t *)L_7;
		ObjectU5BU5D_t78* L_8 = L_4;
		int32_t L_9 = RectOffset_get_top_m2397(__this, /*hidden argument*/NULL);
		int32_t L_10 = L_9;
		Object_t * L_11 = Box(Int32_t106_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2, sizeof(Object_t *))) = (Object_t *)L_11;
		ObjectU5BU5D_t78* L_12 = L_8;
		int32_t L_13 = RectOffset_get_bottom_m3362(__this, /*hidden argument*/NULL);
		int32_t L_14 = L_13;
		Object_t * L_15 = Box(Int32_t106_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3, sizeof(Object_t *))) = (Object_t *)L_15;
		String_t* L_16 = UnityString_Format_m2799(NULL /*static, unused*/, _stringLiteral294, L_12, /*hidden argument*/NULL);
		return L_16;
	}
}
// System.Void UnityEngine.RectOffset::Init()
extern "C" void RectOffset_Init_m3356 (RectOffset_t304 * __this, const MethodInfo* method)
{
	typedef void (*RectOffset_Init_m3356_ftn) (RectOffset_t304 *);
	static RectOffset_Init_m3356_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_Init_m3356_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::Init()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.RectOffset::Cleanup()
extern "C" void RectOffset_Cleanup_m3357 (RectOffset_t304 * __this, const MethodInfo* method)
{
	typedef void (*RectOffset_Cleanup_m3357_ftn) (RectOffset_t304 *);
	static RectOffset_Cleanup_m3357_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_Cleanup_m3357_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::Cleanup()");
	_il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.RectOffset::get_left()
extern "C" int32_t RectOffset_get_left_m2396 (RectOffset_t304 * __this, const MethodInfo* method)
{
	typedef int32_t (*RectOffset_get_left_m2396_ftn) (RectOffset_t304 *);
	static RectOffset_get_left_m2396_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_get_left_m2396_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_left()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.RectOffset::set_left(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void RectOffset_set_left_m3358 (RectOffset_t304 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*RectOffset_set_left_m3358_ftn) (RectOffset_t304 *, int32_t);
	static RectOffset_set_left_m3358_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_set_left_m3358_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::set_left(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.RectOffset::get_right()
extern "C" int32_t RectOffset_get_right_m3359 (RectOffset_t304 * __this, const MethodInfo* method)
{
	typedef int32_t (*RectOffset_get_right_m3359_ftn) (RectOffset_t304 *);
	static RectOffset_get_right_m3359_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_get_right_m3359_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_right()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.RectOffset::set_right(System.Int32)
extern "C" void RectOffset_set_right_m3360 (RectOffset_t304 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*RectOffset_set_right_m3360_ftn) (RectOffset_t304 *, int32_t);
	static RectOffset_set_right_m3360_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_set_right_m3360_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::set_right(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.RectOffset::get_top()
extern "C" int32_t RectOffset_get_top_m2397 (RectOffset_t304 * __this, const MethodInfo* method)
{
	typedef int32_t (*RectOffset_get_top_m2397_ftn) (RectOffset_t304 *);
	static RectOffset_get_top_m2397_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_get_top_m2397_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_top()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.RectOffset::set_top(System.Int32)
extern "C" void RectOffset_set_top_m3361 (RectOffset_t304 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*RectOffset_set_top_m3361_ftn) (RectOffset_t304 *, int32_t);
	static RectOffset_set_top_m3361_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_set_top_m3361_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::set_top(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.RectOffset::get_bottom()
extern "C" int32_t RectOffset_get_bottom_m3362 (RectOffset_t304 * __this, const MethodInfo* method)
{
	typedef int32_t (*RectOffset_get_bottom_m3362_ftn) (RectOffset_t304 *);
	static RectOffset_get_bottom_m3362_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_get_bottom_m3362_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_bottom()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.RectOffset::set_bottom(System.Int32)
extern "C" void RectOffset_set_bottom_m3363 (RectOffset_t304 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*RectOffset_set_bottom_m3363_ftn) (RectOffset_t304 *, int32_t);
	static RectOffset_set_bottom_m3363_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_set_bottom_m3363_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::set_bottom(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.RectOffset::get_horizontal()
extern "C" int32_t RectOffset_get_horizontal_m2391 (RectOffset_t304 * __this, const MethodInfo* method)
{
	typedef int32_t (*RectOffset_get_horizontal_m2391_ftn) (RectOffset_t304 *);
	static RectOffset_get_horizontal_m2391_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_get_horizontal_m2391_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_horizontal()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.RectOffset::get_vertical()
extern "C" int32_t RectOffset_get_vertical_m2393 (RectOffset_t304 * __this, const MethodInfo* method)
{
	typedef int32_t (*RectOffset_get_vertical_m2393_ftn) (RectOffset_t304 *);
	static RectOffset_get_vertical_m2393_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_get_vertical_m2393_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_vertical()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyleMethodDeclarations.h"
// System.Void UnityEngine.GUIStyle::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyleMethodDeclarations.h"
extern "C" void GUIStyle__ctor_m3364 (GUIStyle_t545 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m355(__this, /*hidden argument*/NULL);
		GUIStyle_Init_m3372(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUIStyle::.cctor()
extern TypeInfo* GUIStyle_t545_il2cpp_TypeInfo_var;
extern "C" void GUIStyle__cctor_m3365 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIStyle_t545_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		s_Il2CppMethodIntialized = true;
	}
	{
		((GUIStyle_t545_StaticFields*)GUIStyle_t545_il2cpp_TypeInfo_var->static_fields)->___showKeyboardFocus_14 = 1;
		return;
	}
}
// System.Void UnityEngine.GUIStyle::Finalize()
extern "C" void GUIStyle_Finalize_m3366 (GUIStyle_t545 * __this, const MethodInfo* method)
{
	Exception_t108 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t108 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		GUIStyle_Cleanup_m3373(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t108 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m3589(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t108 *)
	}

IL_0012:
	{
		return;
	}
}
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
// UnityEngine.GUIStyleState
#include "UnityEngine_UnityEngine_GUIStyleStateMethodDeclarations.h"
extern TypeInfo* GUIStyleState_t555_il2cpp_TypeInfo_var;
extern "C" GUIStyleState_t555 * GUIStyle_get_normal_m3367 (GUIStyle_t545 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIStyleState_t555_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(382);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUIStyleState_t555 * L_0 = (__this->___m_Normal_1);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		IntPtr_t L_1 = GUIStyle_GetStyleStatePtr_m3376(__this, 0, /*hidden argument*/NULL);
		GUIStyleState_t555 * L_2 = (GUIStyleState_t555 *)il2cpp_codegen_object_new (GUIStyleState_t555_il2cpp_TypeInfo_var);
		GUIStyleState__ctor_m3346(L_2, __this, L_1, /*hidden argument*/NULL);
		__this->___m_Normal_1 = L_2;
	}

IL_001e:
	{
		GUIStyleState_t555 * L_3 = (__this->___m_Normal_1);
		return L_3;
	}
}
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_margin()
// UnityEngine.RectOffset
#include "UnityEngine_UnityEngine_RectOffsetMethodDeclarations.h"
extern TypeInfo* RectOffset_t304_il2cpp_TypeInfo_var;
extern "C" RectOffset_t304 * GUIStyle_get_margin_m3368 (GUIStyle_t545 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectOffset_t304_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	{
		RectOffset_t304 * L_0 = (__this->___m_Margin_11);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		IntPtr_t L_1 = GUIStyle_GetRectOffsetPtr_m3377(__this, 1, /*hidden argument*/NULL);
		RectOffset_t304 * L_2 = (RectOffset_t304 *)il2cpp_codegen_object_new (RectOffset_t304_il2cpp_TypeInfo_var);
		RectOffset__ctor_m3353(L_2, __this, L_1, /*hidden argument*/NULL);
		__this->___m_Margin_11 = L_2;
	}

IL_001e:
	{
		RectOffset_t304 * L_3 = (__this->___m_Margin_11);
		return L_3;
	}
}
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_padding()
extern TypeInfo* RectOffset_t304_il2cpp_TypeInfo_var;
extern "C" RectOffset_t304 * GUIStyle_get_padding_m3369 (GUIStyle_t545 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectOffset_t304_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	{
		RectOffset_t304 * L_0 = (__this->___m_Padding_10);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		IntPtr_t L_1 = GUIStyle_GetRectOffsetPtr_m3377(__this, 2, /*hidden argument*/NULL);
		RectOffset_t304 * L_2 = (RectOffset_t304 *)il2cpp_codegen_object_new (RectOffset_t304_il2cpp_TypeInfo_var);
		RectOffset__ctor_m3353(L_2, __this, L_1, /*hidden argument*/NULL);
		__this->___m_Padding_10 = L_2;
	}

IL_001e:
	{
		RectOffset_t304 * L_3 = (__this->___m_Padding_10);
		return L_3;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUIStyle::get_none()
extern TypeInfo* GUIStyle_t545_il2cpp_TypeInfo_var;
extern "C" GUIStyle_t545 * GUIStyle_get_none_m3370 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIStyle_t545_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t545_il2cpp_TypeInfo_var);
		GUIStyle_t545 * L_0 = ((GUIStyle_t545_StaticFields*)GUIStyle_t545_il2cpp_TypeInfo_var->static_fields)->___s_None_15;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		GUIStyle_t545 * L_1 = (GUIStyle_t545 *)il2cpp_codegen_object_new (GUIStyle_t545_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m3364(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t545_il2cpp_TypeInfo_var);
		((GUIStyle_t545_StaticFields*)GUIStyle_t545_il2cpp_TypeInfo_var->static_fields)->___s_None_15 = L_1;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t545_il2cpp_TypeInfo_var);
		GUIStyle_t545 * L_2 = ((GUIStyle_t545_StaticFields*)GUIStyle_t545_il2cpp_TypeInfo_var->static_fields)->___s_None_15;
		return L_2;
	}
}
// System.String UnityEngine.GUIStyle::ToString()
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t78_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral295;
extern "C" String_t* GUIStyle_ToString_m3371 (GUIStyle_t545 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t78_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(113);
		_stringLiteral295 = il2cpp_codegen_string_literal_from_index(295);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t78* L_0 = ((ObjectU5BU5D_t78*)SZArrayNew(ObjectU5BU5D_t78_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = GUIStyle_get_name_m3374(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_1;
		String_t* L_2 = UnityString_Format_m2799(NULL /*static, unused*/, _stringLiteral295, L_0, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.GUIStyle::Init()
extern "C" void GUIStyle_Init_m3372 (GUIStyle_t545 * __this, const MethodInfo* method)
{
	typedef void (*GUIStyle_Init_m3372_ftn) (GUIStyle_t545 *);
	static GUIStyle_Init_m3372_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Init_m3372_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Init()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GUIStyle::Cleanup()
extern "C" void GUIStyle_Cleanup_m3373 (GUIStyle_t545 * __this, const MethodInfo* method)
{
	typedef void (*GUIStyle_Cleanup_m3373_ftn) (GUIStyle_t545 *);
	static GUIStyle_Cleanup_m3373_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Cleanup_m3373_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Cleanup()");
	_il2cpp_icall_func(__this);
}
// System.String UnityEngine.GUIStyle::get_name()
extern "C" String_t* GUIStyle_get_name_m3374 (GUIStyle_t545 * __this, const MethodInfo* method)
{
	typedef String_t* (*GUIStyle_get_name_m3374_ftn) (GUIStyle_t545 *);
	static GUIStyle_get_name_m3374_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_name_m3374_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_name()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GUIStyle::set_name(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" void GUIStyle_set_name_m3375 (GUIStyle_t545 * __this, String_t* ___value, const MethodInfo* method)
{
	typedef void (*GUIStyle_set_name_m3375_ftn) (GUIStyle_t545 *, String_t*);
	static GUIStyle_set_name_m3375_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_set_name_m3375_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::set_name(System.String)");
	_il2cpp_icall_func(__this, ___value);
}
// System.IntPtr UnityEngine.GUIStyle::GetStyleStatePtr(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" IntPtr_t GUIStyle_GetStyleStatePtr_m3376 (GUIStyle_t545 * __this, int32_t ___idx, const MethodInfo* method)
{
	typedef IntPtr_t (*GUIStyle_GetStyleStatePtr_m3376_ftn) (GUIStyle_t545 *, int32_t);
	static GUIStyle_GetStyleStatePtr_m3376_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_GetStyleStatePtr_m3376_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::GetStyleStatePtr(System.Int32)");
	return _il2cpp_icall_func(__this, ___idx);
}
// System.IntPtr UnityEngine.GUIStyle::GetRectOffsetPtr(System.Int32)
extern "C" IntPtr_t GUIStyle_GetRectOffsetPtr_m3377 (GUIStyle_t545 * __this, int32_t ___idx, const MethodInfo* method)
{
	typedef IntPtr_t (*GUIStyle_GetRectOffsetPtr_m3377_ftn) (GUIStyle_t545 *, int32_t);
	static GUIStyle_GetRectOffsetPtr_m3377_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_GetRectOffsetPtr_m3377_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::GetRectOffsetPtr(System.Int32)");
	return _il2cpp_icall_func(__this, ___idx);
}
// System.Single UnityEngine.GUIStyle::get_fixedWidth()
extern "C" float GUIStyle_get_fixedWidth_m3378 (GUIStyle_t545 * __this, const MethodInfo* method)
{
	typedef float (*GUIStyle_get_fixedWidth_m3378_ftn) (GUIStyle_t545 *);
	static GUIStyle_get_fixedWidth_m3378_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_fixedWidth_m3378_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_fixedWidth()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.GUIStyle::get_fixedHeight()
extern "C" float GUIStyle_get_fixedHeight_m3379 (GUIStyle_t545 * __this, const MethodInfo* method)
{
	typedef float (*GUIStyle_get_fixedHeight_m3379_ftn) (GUIStyle_t545 *);
	static GUIStyle_get_fixedHeight_m3379_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_fixedHeight_m3379_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_fixedHeight()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.GUIStyle::get_stretchWidth()
extern "C" bool GUIStyle_get_stretchWidth_m3380 (GUIStyle_t545 * __this, const MethodInfo* method)
{
	typedef bool (*GUIStyle_get_stretchWidth_m3380_ftn) (GUIStyle_t545 *);
	static GUIStyle_get_stretchWidth_m3380_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_stretchWidth_m3380_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_stretchWidth()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GUIStyle::set_stretchWidth(System.Boolean)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void GUIStyle_set_stretchWidth_m3381 (GUIStyle_t545 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*GUIStyle_set_stretchWidth_m3381_ftn) (GUIStyle_t545 *, bool);
	static GUIStyle_set_stretchWidth_m3381_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_set_stretchWidth_m3381_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::set_stretchWidth(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.GUIStyle::get_stretchHeight()
extern "C" bool GUIStyle_get_stretchHeight_m3382 (GUIStyle_t545 * __this, const MethodInfo* method)
{
	typedef bool (*GUIStyle_get_stretchHeight_m3382_ftn) (GUIStyle_t545 *);
	static GUIStyle_get_stretchHeight_m3382_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_stretchHeight_m3382_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_stretchHeight()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GUIStyle::set_stretchHeight(System.Boolean)
extern "C" void GUIStyle_set_stretchHeight_m3383 (GUIStyle_t545 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*GUIStyle_set_stretchHeight_m3383_ftn) (GUIStyle_t545 *, bool);
	static GUIStyle_set_stretchHeight_m3383_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_set_stretchHeight_m3383_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::set_stretchHeight(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.GUIStyle::SetDefaultFont(UnityEngine.Font)
// UnityEngine.Font
#include "UnityEngine_UnityEngine_Font.h"
extern "C" void GUIStyle_SetDefaultFont_m3384 (Object_t * __this /* static, unused */, Font_t197 * ___font, const MethodInfo* method)
{
	typedef void (*GUIStyle_SetDefaultFont_m3384_ftn) (Font_t197 *);
	static GUIStyle_SetDefaultFont_m3384_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_SetDefaultFont_m3384_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::SetDefaultFont(UnityEngine.Font)");
	_il2cpp_icall_func(___font);
}
// UnityEngine.ExitGUIException
#include "UnityEngine_UnityEngine_ExitGUIException.h"
// UnityEngine.ExitGUIException
#include "UnityEngine_UnityEngine_ExitGUIExceptionMethodDeclarations.h"
// UnityEngine.GUIUtility
#include "UnityEngine_UnityEngine_GUIUtility.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
// System.Void UnityEngine.GUIUtility::.cctor()
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
extern TypeInfo* GUIUtility_t388_il2cpp_TypeInfo_var;
extern "C" void GUIUtility__cctor_m3385 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIUtility_t388_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(227);
		s_Il2CppMethodIntialized = true;
	}
	{
		Vector2_t15  L_0 = Vector2_get_zero_m329(NULL /*static, unused*/, /*hidden argument*/NULL);
		((GUIUtility_t388_StaticFields*)GUIUtility_t388_il2cpp_TypeInfo_var->static_fields)->___s_EditorScreenPointOffset_2 = L_0;
		((GUIUtility_t388_StaticFields*)GUIUtility_t388_il2cpp_TypeInfo_var->static_fields)->___s_HasKeyboardFocus_3 = 0;
		return;
	}
}
// System.Single UnityEngine.GUIUtility::get_pixelsPerPoint()
// UnityEngine.GUIUtility
#include "UnityEngine_UnityEngine_GUIUtilityMethodDeclarations.h"
extern TypeInfo* GUIUtility_t388_il2cpp_TypeInfo_var;
extern "C" float GUIUtility_get_pixelsPerPoint_m3386 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIUtility_t388_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(227);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t388_il2cpp_TypeInfo_var);
		float L_0 = GUIUtility_Internal_GetPixelsPerPoint_m3392(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.GUISkin UnityEngine.GUIUtility::GetDefaultSkin()
extern TypeInfo* GUIUtility_t388_il2cpp_TypeInfo_var;
extern "C" GUISkin_t536 * GUIUtility_GetDefaultSkin_m3387 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIUtility_t388_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(227);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t388_il2cpp_TypeInfo_var);
		int32_t L_0 = ((GUIUtility_t388_StaticFields*)GUIUtility_t388_il2cpp_TypeInfo_var->static_fields)->___s_SkinMode_0;
		GUISkin_t536 * L_1 = GUIUtility_Internal_GetDefaultSkin_m3393(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.GUIUtility::BeginGUI(System.Int32,System.Int32,System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.GUI
#include "UnityEngine_UnityEngine_GUIMethodDeclarations.h"
// UnityEngine.GUILayoutUtility
#include "UnityEngine_UnityEngine_GUILayoutUtilityMethodDeclarations.h"
extern TypeInfo* GUIUtility_t388_il2cpp_TypeInfo_var;
extern TypeInfo* GUI_t73_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutUtility_t543_il2cpp_TypeInfo_var;
extern "C" void GUIUtility_BeginGUI_m3388 (Object_t * __this /* static, unused */, int32_t ___skinMode, int32_t ___instanceID, int32_t ___useGUILayout, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIUtility_t388_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(227);
		GUI_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		GUILayoutUtility_t543_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(366);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___skinMode;
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t388_il2cpp_TypeInfo_var);
		((GUIUtility_t388_StaticFields*)GUIUtility_t388_il2cpp_TypeInfo_var->static_fields)->___s_SkinMode_0 = L_0;
		int32_t L_1 = ___instanceID;
		((GUIUtility_t388_StaticFields*)GUIUtility_t388_il2cpp_TypeInfo_var->static_fields)->___s_OriginalID_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t73_il2cpp_TypeInfo_var);
		GUI_set_skin_m3225(NULL /*static, unused*/, (GUISkin_t536 *)NULL, /*hidden argument*/NULL);
		int32_t L_2 = ___useGUILayout;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_3 = ___instanceID;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t543_il2cpp_TypeInfo_var);
		GUILayoutUtility_SelectIDList_m3247(NULL /*static, unused*/, L_3, 0, /*hidden argument*/NULL);
		int32_t L_4 = ___instanceID;
		GUILayoutUtility_Begin_m3248(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_0026:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t73_il2cpp_TypeInfo_var);
		GUI_set_changed_m3233(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUIUtility::EndGUI(System.Int32)
// UnityEngine.Event
#include "UnityEngine_UnityEngine_EventMethodDeclarations.h"
// UnityEngine.GUIContent
#include "UnityEngine_UnityEngine_GUIContentMethodDeclarations.h"
extern TypeInfo* GUILayoutUtility_t543_il2cpp_TypeInfo_var;
extern TypeInfo* GUIUtility_t388_il2cpp_TypeInfo_var;
extern TypeInfo* GUIContent_t539_il2cpp_TypeInfo_var;
extern "C" void GUIUtility_EndGUI_m3389 (Object_t * __this /* static, unused */, int32_t ___layoutType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutUtility_t543_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(366);
		GUIUtility_t388_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(227);
		GUIContent_t539_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(365);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Exception_t108 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t108 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Event_t77 * L_0 = Event_get_current_m322(NULL /*static, unused*/, /*hidden argument*/NULL);
			NullCheck(L_0);
			int32_t L_1 = Event_get_type_m323(L_0, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_1) == ((uint32_t)8))))
			{
				goto IL_0042;
			}
		}

IL_0010:
		{
			int32_t L_2 = ___layoutType;
			V_0 = L_2;
			int32_t L_3 = V_0;
			if (L_3 == 0)
			{
				goto IL_0029;
			}
			if (L_3 == 1)
			{
				goto IL_002e;
			}
			if (L_3 == 2)
			{
				goto IL_0038;
			}
		}

IL_0024:
		{
			goto IL_0042;
		}

IL_0029:
		{
			goto IL_0042;
		}

IL_002e:
		{
			IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t543_il2cpp_TypeInfo_var);
			GUILayoutUtility_Layout_m3250(NULL /*static, unused*/, /*hidden argument*/NULL);
			goto IL_0042;
		}

IL_0038:
		{
			IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t543_il2cpp_TypeInfo_var);
			GUILayoutUtility_LayoutFromEditorWindow_m3251(NULL /*static, unused*/, /*hidden argument*/NULL);
			goto IL_0042;
		}

IL_0042:
		{
			IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t388_il2cpp_TypeInfo_var);
			int32_t L_4 = ((GUIUtility_t388_StaticFields*)GUIUtility_t388_il2cpp_TypeInfo_var->static_fields)->___s_OriginalID_1;
			IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t543_il2cpp_TypeInfo_var);
			GUILayoutUtility_SelectIDList_m3247(NULL /*static, unused*/, L_4, 0, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(GUIContent_t539_il2cpp_TypeInfo_var);
			GUIContent_ClearStaticCache_m3242(NULL /*static, unused*/, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x5E, FINALLY_0058);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t108 *)e.ex;
		goto FINALLY_0058;
	}

FINALLY_0058:
	{ // begin finally (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t388_il2cpp_TypeInfo_var);
		GUIUtility_Internal_ExitGUI_m3394(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(88)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(88)
	{
		IL2CPP_JUMP_TBL(0x5E, IL_005e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t108 *)
	}

IL_005e:
	{
		return;
	}
}
// System.Boolean UnityEngine.GUIUtility::EndGUIFromException(System.Exception)
// System.Exception
#include "mscorlib_System_Exception.h"
extern TypeInfo* ExitGUIException_t557_il2cpp_TypeInfo_var;
extern TypeInfo* GUIUtility_t388_il2cpp_TypeInfo_var;
extern "C" bool GUIUtility_EndGUIFromException_m3390 (Object_t * __this /* static, unused */, Exception_t108 * ___exception, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExitGUIException_t557_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(383);
		GUIUtility_t388_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(227);
		s_Il2CppMethodIntialized = true;
	}
	{
		Exception_t108 * L_0 = ___exception;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return 0;
	}

IL_0008:
	{
		Exception_t108 * L_1 = ___exception;
		if (((ExitGUIException_t557 *)IsInstSealed(L_1, ExitGUIException_t557_il2cpp_TypeInfo_var)))
		{
			goto IL_0025;
		}
	}
	{
		Exception_t108 * L_2 = ___exception;
		NullCheck(L_2);
		Exception_t108 * L_3 = (Exception_t108 *)VirtFuncInvoker0< Exception_t108 * >::Invoke(5 /* System.Exception System.Exception::get_InnerException() */, L_2);
		if (((ExitGUIException_t557 *)IsInstSealed(L_3, ExitGUIException_t557_il2cpp_TypeInfo_var)))
		{
			goto IL_0025;
		}
	}
	{
		return 0;
	}

IL_0025:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t388_il2cpp_TypeInfo_var);
		GUIUtility_Internal_ExitGUI_m3394(NULL /*static, unused*/, /*hidden argument*/NULL);
		return 1;
	}
}
// System.Void UnityEngine.GUIUtility::CheckOnGUI()
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* GUIUtility_t388_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t402_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral296;
extern "C" void GUIUtility_CheckOnGUI_m3391 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIUtility_t388_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(227);
		ArgumentException_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(269);
		_stringLiteral296 = il2cpp_codegen_string_literal_from_index(296);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t388_il2cpp_TypeInfo_var);
		int32_t L_0 = GUIUtility_Internal_GetGUIDepth_m3395(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentException_t402 * L_1 = (ArgumentException_t402 *)il2cpp_codegen_object_new (ArgumentException_t402_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2370(L_1, _stringLiteral296, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		return;
	}
}
// System.Single UnityEngine.GUIUtility::Internal_GetPixelsPerPoint()
extern "C" float GUIUtility_Internal_GetPixelsPerPoint_m3392 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef float (*GUIUtility_Internal_GetPixelsPerPoint_m3392_ftn) ();
	static GUIUtility_Internal_GetPixelsPerPoint_m3392_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_Internal_GetPixelsPerPoint_m3392_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::Internal_GetPixelsPerPoint()");
	return _il2cpp_icall_func();
}
// System.String UnityEngine.GUIUtility::get_systemCopyBuffer()
extern "C" String_t* GUIUtility_get_systemCopyBuffer_m2221 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef String_t* (*GUIUtility_get_systemCopyBuffer_m2221_ftn) ();
	static GUIUtility_get_systemCopyBuffer_m2221_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_get_systemCopyBuffer_m2221_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::get_systemCopyBuffer()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.GUIUtility::set_systemCopyBuffer(System.String)
// System.String
#include "mscorlib_System_String.h"
extern "C" void GUIUtility_set_systemCopyBuffer_m2222 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method)
{
	typedef void (*GUIUtility_set_systemCopyBuffer_m2222_ftn) (String_t*);
	static GUIUtility_set_systemCopyBuffer_m2222_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_set_systemCopyBuffer_m2222_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::set_systemCopyBuffer(System.String)");
	_il2cpp_icall_func(___value);
}
// UnityEngine.GUISkin UnityEngine.GUIUtility::Internal_GetDefaultSkin(System.Int32)
extern "C" GUISkin_t536 * GUIUtility_Internal_GetDefaultSkin_m3393 (Object_t * __this /* static, unused */, int32_t ___skinMode, const MethodInfo* method)
{
	typedef GUISkin_t536 * (*GUIUtility_Internal_GetDefaultSkin_m3393_ftn) (int32_t);
	static GUIUtility_Internal_GetDefaultSkin_m3393_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_Internal_GetDefaultSkin_m3393_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::Internal_GetDefaultSkin(System.Int32)");
	return _il2cpp_icall_func(___skinMode);
}
// System.Void UnityEngine.GUIUtility::Internal_ExitGUI()
extern "C" void GUIUtility_Internal_ExitGUI_m3394 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*GUIUtility_Internal_ExitGUI_m3394_ftn) ();
	static GUIUtility_Internal_ExitGUI_m3394_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_Internal_ExitGUI_m3394_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::Internal_ExitGUI()");
	_il2cpp_icall_func();
}
// System.Int32 UnityEngine.GUIUtility::Internal_GetGUIDepth()
extern "C" int32_t GUIUtility_Internal_GetGUIDepth_m3395 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*GUIUtility_Internal_GetGUIDepth_m3395_ftn) ();
	static GUIUtility_Internal_GetGUIDepth_m3395_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_Internal_GetGUIDepth_m3395_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::Internal_GetGUIDepth()");
	return _il2cpp_icall_func();
}
// AOT.MonoPInvokeCallbackAttribute
#include "UnityEngine_AOT_MonoPInvokeCallbackAttribute.h"
// AOT.MonoPInvokeCallbackAttribute
#include "UnityEngine_AOT_MonoPInvokeCallbackAttributeMethodDeclarations.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
// System.Void AOT.MonoPInvokeCallbackAttribute::.ctor(System.Type)
// System.Type
#include "mscorlib_System_Type.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void MonoPInvokeCallbackAttribute__ctor_m3396 (MonoPInvokeCallbackAttribute_t558 * __this, Type_t * ___type, const MethodInfo* method)
{
	{
		Attribute__ctor_m3614(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcall.h"
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcallMethodDeclarations.h"
// System.Void UnityEngine.WrapperlessIcall::.ctor()
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void WrapperlessIcall__ctor_m3397 (WrapperlessIcall_t559 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3614(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttribute.h"
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttributeMethodDeclarations.h"
// System.Void UnityEngine.IL2CPPStructAlignmentAttribute::.ctor()
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void IL2CPPStructAlignmentAttribute__ctor_m3398 (IL2CPPStructAlignmentAttribute_t560 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3614(__this, /*hidden argument*/NULL);
		__this->___Align_0 = 1;
		return;
	}
}
// UnityEngine.AttributeHelperEngine
#include "UnityEngine_UnityEngine_AttributeHelperEngine.h"
// UnityEngine.AttributeHelperEngine
#include "UnityEngine_UnityEngine_AttributeHelperEngineMethodDeclarations.h"
// UnityEngine.DisallowMultipleComponent
#include "UnityEngine_UnityEngine_DisallowMultipleComponent.h"
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditMode.h"
// UnityEngine.RequireComponent
#include "UnityEngine_UnityEngine_RequireComponent.h"
// System.Collections.Generic.Stack`1<System.Type>
#include "System_System_Collections_Generic_Stack_1_gen.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfo.h"
// System.Collections.Generic.List`1<System.Type>
#include "mscorlib_System_Collections_Generic_List_1_gen_32.h"
// System.Collections.Generic.Stack`1<System.Type>
#include "System_System_Collections_Generic_Stack_1_genMethodDeclarations.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfoMethodDeclarations.h"
// System.Collections.Generic.List`1<System.Type>
#include "mscorlib_System_Collections_Generic_List_1_gen_32MethodDeclarations.h"
// System.Void UnityEngine.AttributeHelperEngine::.cctor()
extern TypeInfo* DisallowMultipleComponentU5BU5D_t562_il2cpp_TypeInfo_var;
extern TypeInfo* AttributeHelperEngine_t561_il2cpp_TypeInfo_var;
extern TypeInfo* ExecuteInEditModeU5BU5D_t563_il2cpp_TypeInfo_var;
extern TypeInfo* RequireComponentU5BU5D_t564_il2cpp_TypeInfo_var;
extern "C" void AttributeHelperEngine__cctor_m3399 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DisallowMultipleComponentU5BU5D_t562_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(384);
		AttributeHelperEngine_t561_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(386);
		ExecuteInEditModeU5BU5D_t563_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(387);
		RequireComponentU5BU5D_t564_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(389);
		s_Il2CppMethodIntialized = true;
	}
	{
		((AttributeHelperEngine_t561_StaticFields*)AttributeHelperEngine_t561_il2cpp_TypeInfo_var->static_fields)->____disallowMultipleComponentArray_0 = ((DisallowMultipleComponentU5BU5D_t562*)SZArrayNew(DisallowMultipleComponentU5BU5D_t562_il2cpp_TypeInfo_var, 1));
		((AttributeHelperEngine_t561_StaticFields*)AttributeHelperEngine_t561_il2cpp_TypeInfo_var->static_fields)->____executeInEditModeArray_1 = ((ExecuteInEditModeU5BU5D_t563*)SZArrayNew(ExecuteInEditModeU5BU5D_t563_il2cpp_TypeInfo_var, 1));
		((AttributeHelperEngine_t561_StaticFields*)AttributeHelperEngine_t561_il2cpp_TypeInfo_var->static_fields)->____requireComponentArray_2 = ((RequireComponentU5BU5D_t564*)SZArrayNew(RequireComponentU5BU5D_t564_il2cpp_TypeInfo_var, 1));
		return;
	}
}
// System.Type UnityEngine.AttributeHelperEngine::GetParentTypeDisallowingMultipleInclusion(System.Type)
// System.Type
#include "mscorlib_System_Type.h"
// System.Collections.Generic.Stack`1<System.Type>
#include "System_System_Collections_Generic_Stack_1_genMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
extern const Il2CppType* MonoBehaviour_t2_0_0_0_var;
extern const Il2CppType* DisallowMultipleComponent_t565_0_0_0_var;
extern TypeInfo* Stack_1_t665_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Stack_1__ctor_m3637_MethodInfo_var;
extern const MethodInfo* Stack_1_Push_m3638_MethodInfo_var;
extern const MethodInfo* Stack_1_Pop_m3639_MethodInfo_var;
extern "C" Type_t * AttributeHelperEngine_GetParentTypeDisallowingMultipleInclusion_m3400 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoBehaviour_t2_0_0_0_var = il2cpp_codegen_type_from_index(391);
		DisallowMultipleComponent_t565_0_0_0_var = il2cpp_codegen_type_from_index(385);
		Stack_1_t665_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(392);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(194);
		Stack_1__ctor_m3637_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483988);
		Stack_1_Push_m3638_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483989);
		Stack_1_Pop_m3639_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483990);
		s_Il2CppMethodIntialized = true;
	}
	Stack_1_t665 * V_0 = {0};
	Type_t * V_1 = {0};
	ObjectU5BU5D_t78* V_2 = {0};
	int32_t V_3 = 0;
	{
		Stack_1_t665 * L_0 = (Stack_1_t665 *)il2cpp_codegen_object_new (Stack_1_t665_il2cpp_TypeInfo_var);
		Stack_1__ctor_m3637(L_0, /*hidden argument*/Stack_1__ctor_m3637_MethodInfo_var);
		V_0 = L_0;
		goto IL_001a;
	}

IL_000b:
	{
		Stack_1_t665 * L_1 = V_0;
		Type_t * L_2 = ___type;
		NullCheck(L_1);
		Stack_1_Push_m3638(L_1, L_2, /*hidden argument*/Stack_1_Push_m3638_MethodInfo_var);
		Type_t * L_3 = ___type;
		NullCheck(L_3);
		Type_t * L_4 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_3);
		___type = L_4;
	}

IL_001a:
	{
		Type_t * L_5 = ___type;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		Type_t * L_6 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m2130(NULL /*static, unused*/, LoadTypeToken(MonoBehaviour_t2_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_6) == ((Object_t*)(Type_t *)L_7))))
		{
			goto IL_000b;
		}
	}

IL_0030:
	{
		V_1 = (Type_t *)NULL;
		goto IL_005c;
	}

IL_0037:
	{
		Stack_1_t665 * L_8 = V_0;
		NullCheck(L_8);
		Type_t * L_9 = Stack_1_Pop_m3639(L_8, /*hidden argument*/Stack_1_Pop_m3639_MethodInfo_var);
		V_1 = L_9;
		Type_t * L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11 = Type_GetTypeFromHandle_m2130(NULL /*static, unused*/, LoadTypeToken(DisallowMultipleComponent_t565_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_10);
		ObjectU5BU5D_t78* L_12 = (ObjectU5BU5D_t78*)VirtFuncInvoker2< ObjectU5BU5D_t78*, Type_t *, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_10, L_11, 0);
		V_2 = L_12;
		ObjectU5BU5D_t78* L_13 = V_2;
		NullCheck(L_13);
		V_3 = (((int32_t)(((Array_t *)L_13)->max_length)));
		int32_t L_14 = V_3;
		if (!L_14)
		{
			goto IL_005c;
		}
	}
	{
		Type_t * L_15 = V_1;
		return L_15;
	}

IL_005c:
	{
		Stack_1_t665 * L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Collections.Generic.Stack`1<System.Type>::get_Count() */, L_16);
		if ((((int32_t)L_17) > ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		return (Type_t *)NULL;
	}
}
// System.Type[] UnityEngine.AttributeHelperEngine::GetRequiredComponents(System.Type)
// System.Collections.Generic.List`1<System.Type>
#include "mscorlib_System_Collections_Generic_List_1_gen_32MethodDeclarations.h"
extern const Il2CppType* RequireComponent_t566_0_0_0_var;
extern const Il2CppType* MonoBehaviour_t2_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* RequireComponentU5BU5D_t564_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t645_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t666_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3640_MethodInfo_var;
extern const MethodInfo* List_1_ToArray_m3641_MethodInfo_var;
extern "C" TypeU5BU5D_t645* AttributeHelperEngine_GetRequiredComponents_m3401 (Object_t * __this /* static, unused */, Type_t * ___klass, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RequireComponent_t566_0_0_0_var = il2cpp_codegen_type_from_index(390);
		MonoBehaviour_t2_0_0_0_var = il2cpp_codegen_type_from_index(391);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(194);
		RequireComponentU5BU5D_t564_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(389);
		TypeU5BU5D_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(393);
		List_1_t666_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(394);
		List_1__ctor_m3640_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483991);
		List_1_ToArray_m3641_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483992);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t666 * V_0 = {0};
	RequireComponentU5BU5D_t564* V_1 = {0};
	Type_t * V_2 = {0};
	RequireComponent_t566 * V_3 = {0};
	RequireComponentU5BU5D_t564* V_4 = {0};
	int32_t V_5 = 0;
	TypeU5BU5D_t645* V_6 = {0};
	{
		V_0 = (List_1_t666 *)NULL;
		goto IL_00e0;
	}

IL_0007:
	{
		Type_t * L_0 = ___klass;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m2130(NULL /*static, unused*/, LoadTypeToken(RequireComponent_t566_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		ObjectU5BU5D_t78* L_2 = (ObjectU5BU5D_t78*)VirtFuncInvoker2< ObjectU5BU5D_t78*, Type_t *, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_0, L_1, 0);
		V_1 = ((RequireComponentU5BU5D_t564*)Castclass(L_2, RequireComponentU5BU5D_t564_il2cpp_TypeInfo_var));
		Type_t * L_3 = ___klass;
		NullCheck(L_3);
		Type_t * L_4 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_3);
		V_2 = L_4;
		RequireComponentU5BU5D_t564* L_5 = V_1;
		V_4 = L_5;
		V_5 = 0;
		goto IL_00d2;
	}

IL_0030:
	{
		RequireComponentU5BU5D_t564* L_6 = V_4;
		int32_t L_7 = V_5;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		V_3 = (*(RequireComponent_t566 **)(RequireComponent_t566 **)SZArrayLdElema(L_6, L_8, sizeof(RequireComponent_t566 *)));
		List_1_t666 * L_9 = V_0;
		if (L_9)
		{
			goto IL_007b;
		}
	}
	{
		RequireComponentU5BU5D_t564* L_10 = V_1;
		NullCheck(L_10);
		if ((!(((uint32_t)(((int32_t)(((Array_t *)L_10)->max_length)))) == ((uint32_t)1))))
		{
			goto IL_007b;
		}
	}
	{
		Type_t * L_11 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12 = Type_GetTypeFromHandle_m2130(NULL /*static, unused*/, LoadTypeToken(MonoBehaviour_t2_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_11) == ((Object_t*)(Type_t *)L_12))))
		{
			goto IL_007b;
		}
	}
	{
		TypeU5BU5D_t645* L_13 = ((TypeU5BU5D_t645*)SZArrayNew(TypeU5BU5D_t645_il2cpp_TypeInfo_var, 3));
		RequireComponent_t566 * L_14 = V_3;
		NullCheck(L_14);
		Type_t * L_15 = (L_14->___m_Type0_0);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 0);
		ArrayElementTypeCheck (L_13, L_15);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_13, 0, sizeof(Type_t *))) = (Type_t *)L_15;
		TypeU5BU5D_t645* L_16 = L_13;
		RequireComponent_t566 * L_17 = V_3;
		NullCheck(L_17);
		Type_t * L_18 = (L_17->___m_Type1_1);
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 1);
		ArrayElementTypeCheck (L_16, L_18);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_16, 1, sizeof(Type_t *))) = (Type_t *)L_18;
		TypeU5BU5D_t645* L_19 = L_16;
		RequireComponent_t566 * L_20 = V_3;
		NullCheck(L_20);
		Type_t * L_21 = (L_20->___m_Type2_2);
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 2);
		ArrayElementTypeCheck (L_19, L_21);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_19, 2, sizeof(Type_t *))) = (Type_t *)L_21;
		V_6 = L_19;
		TypeU5BU5D_t645* L_22 = V_6;
		return L_22;
	}

IL_007b:
	{
		List_1_t666 * L_23 = V_0;
		if (L_23)
		{
			goto IL_0087;
		}
	}
	{
		List_1_t666 * L_24 = (List_1_t666 *)il2cpp_codegen_object_new (List_1_t666_il2cpp_TypeInfo_var);
		List_1__ctor_m3640(L_24, /*hidden argument*/List_1__ctor_m3640_MethodInfo_var);
		V_0 = L_24;
	}

IL_0087:
	{
		RequireComponent_t566 * L_25 = V_3;
		NullCheck(L_25);
		Type_t * L_26 = (L_25->___m_Type0_0);
		if (!L_26)
		{
			goto IL_009e;
		}
	}
	{
		List_1_t666 * L_27 = V_0;
		RequireComponent_t566 * L_28 = V_3;
		NullCheck(L_28);
		Type_t * L_29 = (L_28->___m_Type0_0);
		NullCheck(L_27);
		VirtActionInvoker1< Type_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Type>::Add(!0) */, L_27, L_29);
	}

IL_009e:
	{
		RequireComponent_t566 * L_30 = V_3;
		NullCheck(L_30);
		Type_t * L_31 = (L_30->___m_Type1_1);
		if (!L_31)
		{
			goto IL_00b5;
		}
	}
	{
		List_1_t666 * L_32 = V_0;
		RequireComponent_t566 * L_33 = V_3;
		NullCheck(L_33);
		Type_t * L_34 = (L_33->___m_Type1_1);
		NullCheck(L_32);
		VirtActionInvoker1< Type_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Type>::Add(!0) */, L_32, L_34);
	}

IL_00b5:
	{
		RequireComponent_t566 * L_35 = V_3;
		NullCheck(L_35);
		Type_t * L_36 = (L_35->___m_Type2_2);
		if (!L_36)
		{
			goto IL_00cc;
		}
	}
	{
		List_1_t666 * L_37 = V_0;
		RequireComponent_t566 * L_38 = V_3;
		NullCheck(L_38);
		Type_t * L_39 = (L_38->___m_Type2_2);
		NullCheck(L_37);
		VirtActionInvoker1< Type_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Type>::Add(!0) */, L_37, L_39);
	}

IL_00cc:
	{
		int32_t L_40 = V_5;
		V_5 = ((int32_t)((int32_t)L_40+(int32_t)1));
	}

IL_00d2:
	{
		int32_t L_41 = V_5;
		RequireComponentU5BU5D_t564* L_42 = V_4;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)(((int32_t)(((Array_t *)L_42)->max_length))))))
		{
			goto IL_0030;
		}
	}
	{
		Type_t * L_43 = V_2;
		___klass = L_43;
	}

IL_00e0:
	{
		Type_t * L_44 = ___klass;
		if (!L_44)
		{
			goto IL_00f6;
		}
	}
	{
		Type_t * L_45 = ___klass;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_46 = Type_GetTypeFromHandle_m2130(NULL /*static, unused*/, LoadTypeToken(MonoBehaviour_t2_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_45) == ((Object_t*)(Type_t *)L_46))))
		{
			goto IL_0007;
		}
	}

IL_00f6:
	{
		List_1_t666 * L_47 = V_0;
		if (L_47)
		{
			goto IL_00fe;
		}
	}
	{
		return (TypeU5BU5D_t645*)NULL;
	}

IL_00fe:
	{
		List_1_t666 * L_48 = V_0;
		NullCheck(L_48);
		TypeU5BU5D_t645* L_49 = List_1_ToArray_m3641(L_48, /*hidden argument*/List_1_ToArray_m3641_MethodInfo_var);
		return L_49;
	}
}
// System.Boolean UnityEngine.AttributeHelperEngine::CheckIsEditorScript(System.Type)
extern const Il2CppType* ExecuteInEditMode_t568_0_0_0_var;
extern const Il2CppType* MonoBehaviour_t2_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool AttributeHelperEngine_CheckIsEditorScript_m3402 (Object_t * __this /* static, unused */, Type_t * ___klass, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExecuteInEditMode_t568_0_0_0_var = il2cpp_codegen_type_from_index(388);
		MonoBehaviour_t2_0_0_0_var = il2cpp_codegen_type_from_index(391);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(194);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t78* V_0 = {0};
	int32_t V_1 = 0;
	{
		goto IL_002b;
	}

IL_0005:
	{
		Type_t * L_0 = ___klass;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m2130(NULL /*static, unused*/, LoadTypeToken(ExecuteInEditMode_t568_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		ObjectU5BU5D_t78* L_2 = (ObjectU5BU5D_t78*)VirtFuncInvoker2< ObjectU5BU5D_t78*, Type_t *, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_0, L_1, 0);
		V_0 = L_2;
		ObjectU5BU5D_t78* L_3 = V_0;
		NullCheck(L_3);
		V_1 = (((int32_t)(((Array_t *)L_3)->max_length)));
		int32_t L_4 = V_1;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		return 1;
	}

IL_0023:
	{
		Type_t * L_5 = ___klass;
		NullCheck(L_5);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_5);
		___klass = L_6;
	}

IL_002b:
	{
		Type_t * L_7 = ___klass;
		if (!L_7)
		{
			goto IL_0041;
		}
	}
	{
		Type_t * L_8 = ___klass;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9 = Type_GetTypeFromHandle_m2130(NULL /*static, unused*/, LoadTypeToken(MonoBehaviour_t2_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_8) == ((Object_t*)(Type_t *)L_9))))
		{
			goto IL_0005;
		}
	}

IL_0041:
	{
		return 0;
	}
}
// UnityEngine.DisallowMultipleComponent
#include "UnityEngine_UnityEngine_DisallowMultipleComponentMethodDeclarations.h"
// System.Void UnityEngine.DisallowMultipleComponent::.ctor()
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void DisallowMultipleComponent__ctor_m3403 (DisallowMultipleComponent_t565 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3614(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.RequireComponent
#include "UnityEngine_UnityEngine_RequireComponentMethodDeclarations.h"
// System.Void UnityEngine.RequireComponent::.ctor(System.Type)
// System.Type
#include "mscorlib_System_Type.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void RequireComponent__ctor_m3404 (RequireComponent_t566 * __this, Type_t * ___requiredComponent, const MethodInfo* method)
{
	{
		Attribute__ctor_m3614(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___requiredComponent;
		__this->___m_Type0_0 = L_0;
		return;
	}
}
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenu.h"
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenuMethodDeclarations.h"
// System.Void UnityEngine.AddComponentMenu::.ctor(System.String)
// System.String
#include "mscorlib_System_String.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void AddComponentMenu__ctor_m3405 (AddComponentMenu_t567 * __this, String_t* ___menuName, const MethodInfo* method)
{
	{
		Attribute__ctor_m3614(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___menuName;
		__this->___m_AddComponentMenu_0 = L_0;
		__this->___m_Ordering_1 = 0;
		return;
	}
}
// System.Void UnityEngine.AddComponentMenu::.ctor(System.String,System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void AddComponentMenu__ctor_m3406 (AddComponentMenu_t567 * __this, String_t* ___menuName, int32_t ___order, const MethodInfo* method)
{
	{
		Attribute__ctor_m3614(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___menuName;
		__this->___m_AddComponentMenu_0 = L_0;
		int32_t L_1 = ___order;
		__this->___m_Ordering_1 = L_1;
		return;
	}
}
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditModeMethodDeclarations.h"
// System.Void UnityEngine.ExecuteInEditMode::.ctor()
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void ExecuteInEditMode__ctor_m3407 (ExecuteInEditMode_t568 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3614(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.HideInInspector
#include "UnityEngine_UnityEngine_HideInInspector.h"
// UnityEngine.HideInInspector
#include "UnityEngine_UnityEngine_HideInInspectorMethodDeclarations.h"
// System.Void UnityEngine.HideInInspector::.ctor()
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void HideInInspector__ctor_m3408 (HideInInspector_t569 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3614(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.SetupCoroutine
#include "UnityEngine_UnityEngine_SetupCoroutine.h"
// UnityEngine.SetupCoroutine
#include "UnityEngine_UnityEngine_SetupCoroutineMethodDeclarations.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.Binder
#include "mscorlib_System_Reflection_Binder.h"
// System.Reflection.ParameterModifier
#include "mscorlib_System_Reflection_ParameterModifier.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfo.h"
// System.Void UnityEngine.SetupCoroutine::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void SetupCoroutine__ctor_m3409 (SetupCoroutine_t570 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m355(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object UnityEngine.SetupCoroutine::InvokeMember(System.Object,System.String,System.Object)
// System.Object
#include "mscorlib_System_Object.h"
// System.String
#include "mscorlib_System_String.h"
extern TypeInfo* ObjectU5BU5D_t78_il2cpp_TypeInfo_var;
extern "C" Object_t * SetupCoroutine_InvokeMember_m3410 (Object_t * __this /* static, unused */, Object_t * ___behaviour, String_t* ___name, Object_t * ___variable, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t78_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(113);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t78* V_0 = {0};
	{
		V_0 = (ObjectU5BU5D_t78*)NULL;
		Object_t * L_0 = ___variable;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		V_0 = ((ObjectU5BU5D_t78*)SZArrayNew(ObjectU5BU5D_t78_il2cpp_TypeInfo_var, 1));
		ObjectU5BU5D_t78* L_1 = V_0;
		Object_t * L_2 = ___variable;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0, sizeof(Object_t *))) = (Object_t *)L_2;
	}

IL_0013:
	{
		Object_t * L_3 = ___behaviour;
		NullCheck(L_3);
		Type_t * L_4 = Object_GetType_m1961(L_3, /*hidden argument*/NULL);
		String_t* L_5 = ___name;
		Object_t * L_6 = ___behaviour;
		ObjectU5BU5D_t78* L_7 = V_0;
		NullCheck(L_4);
		Object_t * L_8 = (Object_t *)VirtFuncInvoker8< Object_t *, String_t*, int32_t, Binder_t667 *, Object_t *, ObjectU5BU5D_t78*, ParameterModifierU5BU5D_t668*, CultureInfo_t669 *, StringU5BU5D_t82* >::Invoke(71 /* System.Object System.Type::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[]) */, L_4, L_5, ((int32_t)308), (Binder_t667 *)NULL, L_6, L_7, (ParameterModifierU5BU5D_t668*)(ParameterModifierU5BU5D_t668*)NULL, (CultureInfo_t669 *)NULL, (StringU5BU5D_t82*)(StringU5BU5D_t82*)NULL);
		return L_8;
	}
}
// System.Object UnityEngine.SetupCoroutine::InvokeStatic(System.Type,System.String,System.Object)
// System.Type
#include "mscorlib_System_Type.h"
extern TypeInfo* ObjectU5BU5D_t78_il2cpp_TypeInfo_var;
extern "C" Object_t * SetupCoroutine_InvokeStatic_m3411 (Object_t * __this /* static, unused */, Type_t * ___klass, String_t* ___name, Object_t * ___variable, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t78_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(113);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t78* V_0 = {0};
	{
		V_0 = (ObjectU5BU5D_t78*)NULL;
		Object_t * L_0 = ___variable;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		V_0 = ((ObjectU5BU5D_t78*)SZArrayNew(ObjectU5BU5D_t78_il2cpp_TypeInfo_var, 1));
		ObjectU5BU5D_t78* L_1 = V_0;
		Object_t * L_2 = ___variable;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0, sizeof(Object_t *))) = (Object_t *)L_2;
	}

IL_0013:
	{
		Type_t * L_3 = ___klass;
		String_t* L_4 = ___name;
		ObjectU5BU5D_t78* L_5 = V_0;
		NullCheck(L_3);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker8< Object_t *, String_t*, int32_t, Binder_t667 *, Object_t *, ObjectU5BU5D_t78*, ParameterModifierU5BU5D_t668*, CultureInfo_t669 *, StringU5BU5D_t82* >::Invoke(71 /* System.Object System.Type::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[]) */, L_3, L_4, ((int32_t)312), (Binder_t667 *)NULL, NULL, L_5, (ParameterModifierU5BU5D_t668*)(ParameterModifierU5BU5D_t668*)NULL, (CultureInfo_t669 *)NULL, (StringU5BU5D_t82*)(StringU5BU5D_t82*)NULL);
		return L_6;
	}
}
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttribute.h"
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttributeMethodDeclarations.h"
// System.Void UnityEngine.WritableAttribute::.ctor()
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void WritableAttribute__ctor_m3412 (WritableAttribute_t571 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3614(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.AssemblyIsEditorAssembly
#include "UnityEngine_UnityEngine_AssemblyIsEditorAssembly.h"
// UnityEngine.AssemblyIsEditorAssembly
#include "UnityEngine_UnityEngine_AssemblyIsEditorAssemblyMethodDeclarations.h"
// System.Void UnityEngine.AssemblyIsEditorAssembly::.ctor()
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern "C" void AssemblyIsEditorAssembly__ctor_m3413 (AssemblyIsEditorAssembly_t572 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3614(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcUserPro.h"
// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcUserProMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.UserProfile
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserProfile.h"
// UnityEngine.SocialPlatforms.UserState
#include "UnityEngine_UnityEngine_SocialPlatforms_UserState.h"
// UnityEngine.SocialPlatforms.Impl.UserProfile
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserProfileMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.UserProfile UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::ToUserProfile()
// UnityEngine.SocialPlatforms.Impl.UserProfile
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserProfileMethodDeclarations.h"
extern TypeInfo* UserProfile_t585_il2cpp_TypeInfo_var;
extern "C" UserProfile_t585 * GcUserProfileData_ToUserProfile_m3414 (GcUserProfileData_t573 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserProfile_t585_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(310);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B2_0 = {0};
	String_t* G_B2_1 = {0};
	String_t* G_B1_0 = {0};
	String_t* G_B1_1 = {0};
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = {0};
	String_t* G_B3_2 = {0};
	{
		String_t* L_0 = (__this->___userName_0);
		String_t* L_1 = (__this->___userID_1);
		int32_t L_2 = (__this->___isFriend_2);
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_001e;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001f:
	{
		Texture2D_t205 * L_3 = (__this->___image_3);
		UserProfile_t585 * L_4 = (UserProfile_t585 *)il2cpp_codegen_object_new (UserProfile_t585_il2cpp_TypeInfo_var);
		UserProfile__ctor_m3432(L_4, G_B3_2, G_B3_1, G_B3_0, 3, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::AddToArray(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcUserProMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral297;
extern "C" void GcUserProfileData_AddToArray_m3415 (GcUserProfileData_t573 * __this, UserProfileU5BU5D_t439** ___array, int32_t ___number, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral297 = il2cpp_codegen_string_literal_from_index(297);
		s_Il2CppMethodIntialized = true;
	}
	{
		UserProfileU5BU5D_t439** L_0 = ___array;
		NullCheck((*((UserProfileU5BU5D_t439**)L_0)));
		int32_t L_1 = ___number;
		if ((((int32_t)(((int32_t)(((Array_t *)(*((UserProfileU5BU5D_t439**)L_0)))->max_length)))) <= ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___number;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		UserProfileU5BU5D_t439** L_3 = ___array;
		int32_t L_4 = ___number;
		UserProfile_t585 * L_5 = GcUserProfileData_ToUserProfile_m3414(__this, /*hidden argument*/NULL);
		NullCheck((*((UserProfileU5BU5D_t439**)L_3)));
		IL2CPP_ARRAY_BOUNDS_CHECK((*((UserProfileU5BU5D_t439**)L_3)), L_4);
		ArrayElementTypeCheck ((*((UserProfileU5BU5D_t439**)L_3)), L_5);
		*((UserProfile_t585 **)(UserProfile_t585 **)SZArrayLdElema((*((UserProfileU5BU5D_t439**)L_3)), L_4, sizeof(UserProfile_t585 *))) = (UserProfile_t585 *)L_5;
		goto IL_002a;
	}

IL_0020:
	{
		Debug_Log_m353(NULL /*static, unused*/, _stringLiteral297, /*hidden argument*/NULL);
	}

IL_002a:
	{
		return;
	}
}
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve.h"
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieveMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.AchievementDescription
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementDesc.h"
// UnityEngine.SocialPlatforms.Impl.AchievementDescription
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementDescMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.AchievementDescription UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::ToAchievementDescription()
// UnityEngine.SocialPlatforms.Impl.AchievementDescription
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementDescMethodDeclarations.h"
extern TypeInfo* AchievementDescription_t588_il2cpp_TypeInfo_var;
extern "C" AchievementDescription_t588 * GcAchievementDescriptionData_ToAchievementDescription_m3416 (GcAchievementDescriptionData_t574 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AchievementDescription_t588_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(307);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B2_0 = {0};
	String_t* G_B2_1 = {0};
	Texture2D_t205 * G_B2_2 = {0};
	String_t* G_B2_3 = {0};
	String_t* G_B2_4 = {0};
	String_t* G_B1_0 = {0};
	String_t* G_B1_1 = {0};
	Texture2D_t205 * G_B1_2 = {0};
	String_t* G_B1_3 = {0};
	String_t* G_B1_4 = {0};
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = {0};
	String_t* G_B3_2 = {0};
	Texture2D_t205 * G_B3_3 = {0};
	String_t* G_B3_4 = {0};
	String_t* G_B3_5 = {0};
	{
		String_t* L_0 = (__this->___m_Identifier_0);
		String_t* L_1 = (__this->___m_Title_1);
		Texture2D_t205 * L_2 = (__this->___m_Image_2);
		String_t* L_3 = (__this->___m_AchievedDescription_3);
		String_t* L_4 = (__this->___m_UnachievedDescription_4);
		int32_t L_5 = (__this->___m_Hidden_5);
		G_B1_0 = L_4;
		G_B1_1 = L_3;
		G_B1_2 = L_2;
		G_B1_3 = L_1;
		G_B1_4 = L_0;
		if (L_5)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_3;
			G_B2_2 = L_2;
			G_B2_3 = L_1;
			G_B2_4 = L_0;
			goto IL_002f;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		G_B3_5 = G_B1_4;
		goto IL_0030;
	}

IL_002f:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
		G_B3_5 = G_B2_4;
	}

IL_0030:
	{
		int32_t L_6 = (__this->___m_Points_6);
		AchievementDescription_t588 * L_7 = (AchievementDescription_t588 *)il2cpp_codegen_object_new (AchievementDescription_t588_il2cpp_TypeInfo_var);
		AchievementDescription__ctor_m3452(L_7, G_B3_5, G_B3_4, G_B3_3, G_B3_2, G_B3_1, G_B3_0, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve_0.h"
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve_0MethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.Achievement
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Achievement.h"
// System.Double
#include "mscorlib_System_Double.h"
// UnityEngine.SocialPlatforms.Impl.Achievement
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
// System.DateTime
#include "mscorlib_System_DateTimeMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.Achievement
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementMethodDeclarations.h"
extern TypeInfo* Achievement_t587_il2cpp_TypeInfo_var;
extern "C" Achievement_t587 * GcAchievementData_ToAchievement_m3417 (GcAchievementData_t575 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Achievement_t587_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(317);
		s_Il2CppMethodIntialized = true;
	}
	DateTime_t538  V_0 = {0};
	double G_B2_0 = 0.0;
	String_t* G_B2_1 = {0};
	double G_B1_0 = 0.0;
	String_t* G_B1_1 = {0};
	int32_t G_B3_0 = 0;
	double G_B3_1 = 0.0;
	String_t* G_B3_2 = {0};
	int32_t G_B5_0 = 0;
	double G_B5_1 = 0.0;
	String_t* G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	double G_B4_1 = 0.0;
	String_t* G_B4_2 = {0};
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	double G_B6_2 = 0.0;
	String_t* G_B6_3 = {0};
	{
		String_t* L_0 = (__this->___m_Identifier_0);
		double L_1 = (__this->___m_PercentCompleted_1);
		int32_t L_2 = (__this->___m_Completed_2);
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_001d;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001e:
	{
		int32_t L_3 = (__this->___m_Hidden_3);
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		if (L_3)
		{
			G_B5_0 = G_B3_0;
			G_B5_1 = G_B3_1;
			G_B5_2 = G_B3_2;
			goto IL_002f;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0030;
	}

IL_002f:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0030:
	{
		DateTime__ctor_m3642((&V_0), ((int32_t)1970), 1, 1, 0, 0, 0, 0, /*hidden argument*/NULL);
		int32_t L_4 = (__this->___m_LastReportedDate_4);
		DateTime_t538  L_5 = DateTime_AddSeconds_m3643((&V_0), (((double)L_4)), /*hidden argument*/NULL);
		Achievement_t587 * L_6 = (Achievement_t587 *)il2cpp_codegen_object_new (Achievement_t587_il2cpp_TypeInfo_var);
		Achievement__ctor_m3441(L_6, G_B6_3, G_B6_2, G_B6_1, G_B6_0, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.String
#include "mscorlib_System_String.h"
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
extern "C" void GcAchievementData_t575_marshal(const GcAchievementData_t575& unmarshaled, GcAchievementData_t575_marshaled& marshaled)
{
	marshaled.___m_Identifier_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_Identifier_0);
	marshaled.___m_PercentCompleted_1 = unmarshaled.___m_PercentCompleted_1;
	marshaled.___m_Completed_2 = unmarshaled.___m_Completed_2;
	marshaled.___m_Hidden_3 = unmarshaled.___m_Hidden_3;
	marshaled.___m_LastReportedDate_4 = unmarshaled.___m_LastReportedDate_4;
}
extern "C" void GcAchievementData_t575_marshal_back(const GcAchievementData_t575_marshaled& marshaled, GcAchievementData_t575& unmarshaled)
{
	unmarshaled.___m_Identifier_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_Identifier_0);
	unmarshaled.___m_PercentCompleted_1 = marshaled.___m_PercentCompleted_1;
	unmarshaled.___m_Completed_2 = marshaled.___m_Completed_2;
	unmarshaled.___m_Hidden_3 = marshaled.___m_Hidden_3;
	unmarshaled.___m_LastReportedDate_4 = marshaled.___m_LastReportedDate_4;
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
extern "C" void GcAchievementData_t575_marshal_cleanup(GcAchievementData_t575_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Identifier_0);
	marshaled.___m_Identifier_0 = NULL;
}
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDa.h"
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDaMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.Score
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Score.h"
// System.Int64
#include "mscorlib_System_Int64.h"
// UnityEngine.SocialPlatforms.Impl.Score
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_ScoreMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
// System.DateTime
#include "mscorlib_System_DateTimeMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.Score
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_ScoreMethodDeclarations.h"
extern TypeInfo* Score_t589_il2cpp_TypeInfo_var;
extern "C" Score_t589 * GcScoreData_ToScore_m3418 (GcScoreData_t576 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Score_t589_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(321);
		s_Il2CppMethodIntialized = true;
	}
	DateTime_t538  V_0 = {0};
	{
		String_t* L_0 = (__this->___m_Category_0);
		int32_t L_1 = (__this->___m_ValueHigh_2);
		int32_t L_2 = (__this->___m_ValueLow_1);
		String_t* L_3 = (__this->___m_PlayerID_5);
		DateTime__ctor_m3642((&V_0), ((int32_t)1970), 1, 1, 0, 0, 0, 0, /*hidden argument*/NULL);
		int32_t L_4 = (__this->___m_Date_3);
		DateTime_t538  L_5 = DateTime_AddSeconds_m3643((&V_0), (((double)L_4)), /*hidden argument*/NULL);
		String_t* L_6 = (__this->___m_FormattedValue_4);
		int32_t L_7 = (__this->___m_Rank_6);
		Score_t589 * L_8 = (Score_t589 *)il2cpp_codegen_object_new (Score_t589_il2cpp_TypeInfo_var);
		Score__ctor_m3463(L_8, L_0, ((int64_t)((int64_t)((int64_t)((int64_t)(((int64_t)L_1))<<(int32_t)((int32_t)32)))+(int64_t)(((int64_t)L_2)))), L_3, L_5, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.String
#include "mscorlib_System_String.h"
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcScoreData
extern "C" void GcScoreData_t576_marshal(const GcScoreData_t576& unmarshaled, GcScoreData_t576_marshaled& marshaled)
{
	marshaled.___m_Category_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_Category_0);
	marshaled.___m_ValueLow_1 = unmarshaled.___m_ValueLow_1;
	marshaled.___m_ValueHigh_2 = unmarshaled.___m_ValueHigh_2;
	marshaled.___m_Date_3 = unmarshaled.___m_Date_3;
	marshaled.___m_FormattedValue_4 = il2cpp_codegen_marshal_string(unmarshaled.___m_FormattedValue_4);
	marshaled.___m_PlayerID_5 = il2cpp_codegen_marshal_string(unmarshaled.___m_PlayerID_5);
	marshaled.___m_Rank_6 = unmarshaled.___m_Rank_6;
}
extern "C" void GcScoreData_t576_marshal_back(const GcScoreData_t576_marshaled& marshaled, GcScoreData_t576& unmarshaled)
{
	unmarshaled.___m_Category_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_Category_0);
	unmarshaled.___m_ValueLow_1 = marshaled.___m_ValueLow_1;
	unmarshaled.___m_ValueHigh_2 = marshaled.___m_ValueHigh_2;
	unmarshaled.___m_Date_3 = marshaled.___m_Date_3;
	unmarshaled.___m_FormattedValue_4 = il2cpp_codegen_marshal_string_result(marshaled.___m_FormattedValue_4);
	unmarshaled.___m_PlayerID_5 = il2cpp_codegen_marshal_string_result(marshaled.___m_PlayerID_5);
	unmarshaled.___m_Rank_6 = marshaled.___m_Rank_6;
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcScoreData
extern "C" void GcScoreData_t576_marshal_cleanup(GcScoreData_t576_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Category_0);
	marshaled.___m_Category_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_FormattedValue_4);
	marshaled.___m_FormattedValue_4 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_PlayerID_5);
	marshaled.___m_PlayerID_5 = NULL;
}
// UnityEngine.Resolution
#include "UnityEngine_UnityEngine_Resolution.h"
// UnityEngine.Resolution
#include "UnityEngine_UnityEngine_ResolutionMethodDeclarations.h"
// System.Int32 UnityEngine.Resolution::get_width()
extern "C" int32_t Resolution_get_width_m3419 (Resolution_t577 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Width_0);
		return L_0;
	}
}
// System.Void UnityEngine.Resolution::set_width(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void Resolution_set_width_m3420 (Resolution_t577 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_Width_0 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Resolution::get_height()
extern "C" int32_t Resolution_get_height_m3421 (Resolution_t577 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Height_1);
		return L_0;
	}
}
// System.Void UnityEngine.Resolution::set_height(System.Int32)
extern "C" void Resolution_set_height_m3422 (Resolution_t577 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_Height_1 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Resolution::get_refreshRate()
extern "C" int32_t Resolution_get_refreshRate_m3423 (Resolution_t577 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_RefreshRate_2);
		return L_0;
	}
}
// System.Void UnityEngine.Resolution::set_refreshRate(System.Int32)
extern "C" void Resolution_set_refreshRate_m3424 (Resolution_t577 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_RefreshRate_2 = L_0;
		return;
	}
}
// System.String UnityEngine.Resolution::ToString()
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t78_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t106_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral298;
extern "C" String_t* Resolution_ToString_m3425 (Resolution_t577 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t78_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(113);
		Int32_t106_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		_stringLiteral298 = il2cpp_codegen_string_literal_from_index(298);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t78* L_0 = ((ObjectU5BU5D_t78*)SZArrayNew(ObjectU5BU5D_t78_il2cpp_TypeInfo_var, 3));
		int32_t L_1 = (__this->___m_Width_0);
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t106_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_3;
		ObjectU5BU5D_t78* L_4 = L_0;
		int32_t L_5 = (__this->___m_Height_1);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(Int32_t106_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1, sizeof(Object_t *))) = (Object_t *)L_7;
		ObjectU5BU5D_t78* L_8 = L_4;
		int32_t L_9 = (__this->___m_RefreshRate_2);
		int32_t L_10 = L_9;
		Object_t * L_11 = Box(Int32_t106_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2, sizeof(Object_t *))) = (Object_t *)L_11;
		String_t* L_12 = UnityString_Format_m2799(NULL /*static, unused*/, _stringLiteral298, L_8, /*hidden argument*/NULL);
		return L_12;
	}
}
// UnityEngine.RenderBuffer
#include "UnityEngine_UnityEngine_RenderBuffer.h"
// UnityEngine.RenderBuffer
#include "UnityEngine_UnityEngine_RenderBufferMethodDeclarations.h"
// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlags.h"
// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlagsMethodDeclarations.h"
// UnityEngine.ColorSpace
#include "UnityEngine_UnityEngine_ColorSpace.h"
// UnityEngine.ColorSpace
#include "UnityEngine_UnityEngine_ColorSpaceMethodDeclarations.h"
// UnityEngine.TextureFormat
#include "UnityEngine_UnityEngine_TextureFormat.h"
// UnityEngine.TextureFormat
#include "UnityEngine_UnityEngine_TextureFormatMethodDeclarations.h"
// UnityEngine.RenderTextureFormat
#include "UnityEngine_UnityEngine_RenderTextureFormat.h"
// UnityEngine.RenderTextureFormat
#include "UnityEngine_UnityEngine_RenderTextureFormatMethodDeclarations.h"
// UnityEngine.RenderTextureReadWrite
#include "UnityEngine_UnityEngine_RenderTextureReadWrite.h"
// UnityEngine.RenderTextureReadWrite
#include "UnityEngine_UnityEngine_RenderTextureReadWriteMethodDeclarations.h"
// UnityEngine.Rendering.CompareFunction
#include "UnityEngine_UnityEngine_Rendering_CompareFunction.h"
// UnityEngine.Rendering.CompareFunction
#include "UnityEngine_UnityEngine_Rendering_CompareFunctionMethodDeclarations.h"
// UnityEngine.Rendering.ColorWriteMask
#include "UnityEngine_UnityEngine_Rendering_ColorWriteMask.h"
// UnityEngine.Rendering.ColorWriteMask
#include "UnityEngine_UnityEngine_Rendering_ColorWriteMaskMethodDeclarations.h"
#ifdef __clang__
#pragma clang diagnostic pop
#endif
