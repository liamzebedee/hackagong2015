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

// System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_10.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_10MethodDeclarations.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.String
#include "mscorlib_System_String.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Collections.Generic.Comparer`1<System.DateTimeOffset>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_10MethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern "C" void DefaultComparer__ctor_m17516_gshared (DefaultComparer_t2343 * __this, const MethodInfo* method)
{
	{
		NullCheck((Comparer_1_t2342 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (Comparer_1_t2342 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Comparer_1_t2342 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>::Compare(T,T)
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* IComparable_t1734_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t402_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2798;
extern "C" int32_t DefaultComparer_Compare_m17517_gshared (DefaultComparer_t2343 * __this, DateTimeOffset_t1625  ___x, DateTimeOffset_t1625  ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IComparable_t1734_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(735);
		ArgumentException_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(269);
		_stringLiteral2798 = il2cpp_codegen_string_literal_from_index(2798);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		DateTimeOffset_t1625  L_0 = ___x;
		goto IL_001e;
	}
	{
		DateTimeOffset_t1625  L_1 = ___y;
		goto IL_001c;
	}
	{
		G_B4_0 = 0;
		goto IL_001d;
	}

IL_001c:
	{
		G_B4_0 = (-1);
	}

IL_001d:
	{
		return G_B4_0;
	}

IL_001e:
	{
		DateTimeOffset_t1625  L_2 = ___y;
		goto IL_002b;
	}
	{
		return 1;
	}

IL_002b:
	{
		DateTimeOffset_t1625  L_3 = ___x;
		DateTimeOffset_t1625  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_4);
		if (!((Object_t*)IsInst(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))
		{
			goto IL_004d;
		}
	}
	{
		DateTimeOffset_t1625  L_6 = ___x;
		DateTimeOffset_t1625  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_7);
		DateTimeOffset_t1625  L_9 = ___y;
		NullCheck((Object_t*)((Object_t*)Castclass(L_8, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))));
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, DateTimeOffset_t1625  >::Invoke(0 /* System.Int32 System.IComparable`1<System.DateTimeOffset>::CompareTo(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)((Object_t*)Castclass(L_8, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))), (DateTimeOffset_t1625 )L_9);
		return L_10;
	}

IL_004d:
	{
		DateTimeOffset_t1625  L_11 = ___x;
		DateTimeOffset_t1625  L_12 = L_11;
		Object_t * L_13 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_12);
		if (!((Object_t *)IsInst(L_13, IComparable_t1734_il2cpp_TypeInfo_var)))
		{
			goto IL_0074;
		}
	}
	{
		DateTimeOffset_t1625  L_14 = ___x;
		DateTimeOffset_t1625  L_15 = L_14;
		Object_t * L_16 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_15);
		DateTimeOffset_t1625  L_17 = ___y;
		DateTimeOffset_t1625  L_18 = L_17;
		Object_t * L_19 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_18);
		NullCheck((Object_t *)((Object_t *)Castclass(L_16, IComparable_t1734_il2cpp_TypeInfo_var)));
		int32_t L_20 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(0 /* System.Int32 System.IComparable::CompareTo(System.Object) */, IComparable_t1734_il2cpp_TypeInfo_var, (Object_t *)((Object_t *)Castclass(L_16, IComparable_t1734_il2cpp_TypeInfo_var)), (Object_t *)L_19);
		return L_20;
	}

IL_0074:
	{
		ArgumentException_t402 * L_21 = (ArgumentException_t402 *)il2cpp_codegen_object_new (ArgumentException_t402_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2370(L_21, (String_t*)_stringLiteral2798, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_21);
	}
}
// System.Collections.Generic.GenericEqualityComparer`1<System.DateTimeOffset>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__0.h"
// System.Collections.Generic.GenericEqualityComparer`1<System.DateTimeOffset>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__0MethodDeclarations.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_12MethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.DateTimeOffset>::.ctor()
extern "C" void GenericEqualityComparer_1__ctor_m10710_gshared (GenericEqualityComparer_1_t1765 * __this, const MethodInfo* method)
{
	{
		NullCheck((EqualityComparer_1_t2344 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (EqualityComparer_1_t2344 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t2344 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.DateTimeOffset>::GetHashCode(T)
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffsetMethodDeclarations.h"
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m17518_gshared (GenericEqualityComparer_1_t1765 * __this, DateTimeOffset_t1625  ___obj, const MethodInfo* method)
{
	{
		DateTimeOffset_t1625  L_0 = ___obj;
		goto IL_000d;
	}
	{
		return 0;
	}

IL_000d:
	{
		NullCheck((DateTimeOffset_t1625 *)(&___obj));
		int32_t L_1 = DateTimeOffset_GetHashCode_m10208((DateTimeOffset_t1625 *)(&___obj), NULL);
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.DateTimeOffset>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m17519_gshared (GenericEqualityComparer_1_t1765 * __this, DateTimeOffset_t1625  ___x, DateTimeOffset_t1625  ___y, const MethodInfo* method)
{
	{
		DateTimeOffset_t1625  L_0 = ___x;
		goto IL_0015;
	}
	{
		DateTimeOffset_t1625  L_1 = ___y;
		DateTimeOffset_t1625  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return ((((Object_t*)(Object_t *)L_3) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0015:
	{
		DateTimeOffset_t1625  L_4 = ___y;
		NullCheck((DateTimeOffset_t1625 *)(&___x));
		bool L_5 = DateTimeOffset_Equals_m10206((DateTimeOffset_t1625 *)(&___x), (DateTimeOffset_t1625 )L_4, NULL);
		return L_5;
	}
}
// System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_12.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
#include "mscorlib_ArrayTypes.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_12.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_12MethodDeclarations.h"
// System.Void System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void EqualityComparer_1__ctor_m17520_gshared (EqualityComparer_1_t2344 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m355((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::.cctor()
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
extern const Il2CppType* GenericEqualityComparer_1_t2537_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t645_il2cpp_TypeInfo_var;
extern "C" void EqualityComparer_1__cctor_m17521_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericEqualityComparer_1_t2537_0_0_0_var = il2cpp_codegen_type_from_index(2656);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(194);
		TypeU5BU5D_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(393);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m2130(NULL /*static, unused*/, (RuntimeTypeHandle_t1077 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Type_t * L_1 = Type_GetTypeFromHandle_m2130(NULL /*static, unused*/, (RuntimeTypeHandle_t1077 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_0, (Type_t *)L_1);
		if (!L_2)
		{
			goto IL_0054;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m2130(NULL /*static, unused*/, (RuntimeTypeHandle_t1077 )LoadTypeToken(GenericEqualityComparer_1_t2537_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t645* L_4 = (TypeU5BU5D_t645*)((TypeU5BU5D_t645*)SZArrayNew(TypeU5BU5D_t645_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m2130(NULL /*static, unused*/, (RuntimeTypeHandle_t1077 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0, sizeof(Type_t *))) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t645* >::Invoke(77 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t645*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m9840(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((EqualityComparer_1_t2344_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((EqualityComparer_1_t2344 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_005e;
	}

IL_0054:
	{
		DefaultComparer_t2345 * L_8 = (DefaultComparer_t2345 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t2345 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((EqualityComparer_1_t2344_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_005e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m17522_gshared (EqualityComparer_1_t2344 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		NullCheck((EqualityComparer_1_t2344 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, DateTimeOffset_t1625  >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::GetHashCode(T) */, (EqualityComparer_1_t2344 *)__this, (DateTimeOffset_t1625 )((*(DateTimeOffset_t1625 *)((DateTimeOffset_t1625 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m17523_gshared (EqualityComparer_1_t2344 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		NullCheck((EqualityComparer_1_t2344 *)__this);
		bool L_2 = (bool)VirtFuncInvoker2< bool, DateTimeOffset_t1625 , DateTimeOffset_t1625  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::Equals(T,T) */, (EqualityComparer_1_t2344 *)__this, (DateTimeOffset_t1625 )((*(DateTimeOffset_t1625 *)((DateTimeOffset_t1625 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (DateTimeOffset_t1625 )((*(DateTimeOffset_t1625 *)((DateTimeOffset_t1625 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::get_Default()
extern "C" EqualityComparer_1_t2344 * EqualityComparer_1_get_Default_m17524_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t2344 * L_0 = ((EqualityComparer_1_t2344_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern "C" void DefaultComparer__ctor_m17525_gshared (DefaultComparer_t2345 * __this, const MethodInfo* method)
{
	{
		NullCheck((EqualityComparer_1_t2344 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (EqualityComparer_1_t2344 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t2344 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::GetHashCode(T)
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffsetMethodDeclarations.h"
extern "C" int32_t DefaultComparer_GetHashCode_m17526_gshared (DefaultComparer_t2345 * __this, DateTimeOffset_t1625  ___obj, const MethodInfo* method)
{
	{
		DateTimeOffset_t1625  L_0 = ___obj;
		goto IL_000d;
	}
	{
		return 0;
	}

IL_000d:
	{
		NullCheck((DateTimeOffset_t1625 *)(&___obj));
		int32_t L_1 = DateTimeOffset_GetHashCode_m10208((DateTimeOffset_t1625 *)(&___obj), NULL);
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m17527_gshared (DefaultComparer_t2345 * __this, DateTimeOffset_t1625  ___x, DateTimeOffset_t1625  ___y, const MethodInfo* method)
{
	{
		DateTimeOffset_t1625  L_0 = ___x;
		goto IL_0015;
	}
	{
		DateTimeOffset_t1625  L_1 = ___y;
		DateTimeOffset_t1625  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return ((((Object_t*)(Object_t *)L_3) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0015:
	{
		DateTimeOffset_t1625  L_4 = ___y;
		DateTimeOffset_t1625  L_5 = L_4;
		Object_t * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_5);
		NullCheck((DateTimeOffset_t1625 *)(&___x));
		bool L_7 = DateTimeOffset_Equals_m10207((DateTimeOffset_t1625 *)(&___x), (Object_t *)L_6, NULL);
		return L_7;
	}
}
// System.Nullable`1<System.TimeSpan>
#include "mscorlib_System_Nullable_1_gen.h"
// System.Nullable`1<System.TimeSpan>
#include "mscorlib_System_Nullable_1_genMethodDeclarations.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.ValueType
#include "mscorlib_System_ValueType.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.ValueType
#include "mscorlib_System_ValueTypeMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
extern "C" void Nullable_1__ctor_m10711_gshared (Nullable_1_t1729 * __this, TimeSpan_t959  ___value, const MethodInfo* method)
{
	{
		__this->___has_value_1 = 1;
		TimeSpan_t959  L_0 = ___value;
		__this->___value_0 = L_0;
		return;
	}
}
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m10712_gshared (Nullable_1_t1729 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (bool)(__this->___has_value_1);
		return L_0;
	}
}
// T System.Nullable`1<System.TimeSpan>::get_Value()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t881_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2813;
extern "C" TimeSpan_t959  Nullable_1_get_Value_m10713_gshared (Nullable_1_t1729 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t881_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(515);
		_stringLiteral2813 = il2cpp_codegen_string_literal_from_index(2813);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (bool)(__this->___has_value_1);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		InvalidOperationException_t881 * L_1 = (InvalidOperationException_t881 *)il2cpp_codegen_object_new (InvalidOperationException_t881_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4709(L_1, (String_t*)_stringLiteral2813, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		TimeSpan_t959  L_2 = (TimeSpan_t959 )(__this->___value_0);
		return L_2;
	}
}
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" bool Nullable_1_Equals_m17528_gshared (Nullable_1_t1729 * __this, Object_t * ___other, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___other;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = (bool)(__this->___has_value_1);
		return ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}

IL_0010:
	{
		Object_t * L_2 = ___other;
		if (((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0))))
		{
			goto IL_001d;
		}
	}
	{
		return 0;
	}

IL_001d:
	{
		Object_t * L_3 = ___other;
		void* L_4 = alloca(sizeof(Nullable_1_t1729 ));
		UnBoxNullable(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), L_4);
		bool L_5 = (( bool (*) (Nullable_1_t1729 *, Nullable_1_t1729 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Nullable_1_t1729 *)__this, (Nullable_1_t1729 )((*(Nullable_1_t1729 *)((Nullable_1_t1729 *)L_4))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_5;
	}
}
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Nullable`1<T>)
// System.Nullable`1<System.TimeSpan>
#include "mscorlib_System_Nullable_1_gen.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpanMethodDeclarations.h"
extern "C" bool Nullable_1_Equals_m17529_gshared (Nullable_1_t1729 * __this, Nullable_1_t1729  ___other, const MethodInfo* method)
{
	{
		bool L_0 = (bool)((&___other)->___has_value_1);
		bool L_1 = (bool)(__this->___has_value_1);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0014;
		}
	}
	{
		return 0;
	}

IL_0014:
	{
		bool L_2 = (bool)(__this->___has_value_1);
		if (L_2)
		{
			goto IL_0021;
		}
	}
	{
		return 1;
	}

IL_0021:
	{
		TimeSpan_t959 * L_3 = (TimeSpan_t959 *)&((&___other)->___value_0);
		TimeSpan_t959  L_4 = (TimeSpan_t959 )(__this->___value_0);
		TimeSpan_t959  L_5 = L_4;
		Object_t * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_5);
		NullCheck((TimeSpan_t959 *)L_3);
		bool L_7 = TimeSpan_Equals_m10572((TimeSpan_t959 *)L_3, (Object_t *)L_6, NULL);
		return L_7;
	}
}
// System.Int32 System.Nullable`1<System.TimeSpan>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m17530_gshared (Nullable_1_t1729 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (bool)(__this->___has_value_1);
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
		TimeSpan_t959 * L_1 = (TimeSpan_t959 *)&(__this->___value_0);
		NullCheck((TimeSpan_t959 *)L_1);
		int32_t L_2 = TimeSpan_GetHashCode_m10579((TimeSpan_t959 *)L_1, NULL);
		return L_2;
	}
}
// System.String System.Nullable`1<System.TimeSpan>::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Nullable_1_ToString_m17531_gshared (Nullable_1_t1729 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (bool)(__this->___has_value_1);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		TimeSpan_t959 * L_1 = (TimeSpan_t959 *)&(__this->___value_0);
		NullCheck((TimeSpan_t959 *)L_1);
		String_t* L_2 = TimeSpan_ToString_m10582((TimeSpan_t959 *)L_1, NULL);
		return L_2;
	}

IL_001d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_3;
	}
}
// System.Collections.Generic.GenericComparer`1<System.Guid>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_gen_1.h"
// System.Collections.Generic.GenericComparer`1<System.Guid>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_gen_1MethodDeclarations.h"
// System.Guid
#include "mscorlib_System_Guid.h"
// System.Collections.Generic.Comparer`1<System.Guid>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_11MethodDeclarations.h"
// System.Void System.Collections.Generic.GenericComparer`1<System.Guid>::.ctor()
extern "C" void GenericComparer_1__ctor_m10714_gshared (GenericComparer_1_t1766 * __this, const MethodInfo* method)
{
	{
		NullCheck((Comparer_1_t2346 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (Comparer_1_t2346 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Comparer_1_t2346 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericComparer`1<System.Guid>::Compare(T,T)
// System.Guid
#include "mscorlib_System_Guid.h"
// System.Guid
#include "mscorlib_System_GuidMethodDeclarations.h"
extern "C" int32_t GenericComparer_1_Compare_m17532_gshared (GenericComparer_1_t1766 * __this, Guid_t1647  ___x, Guid_t1647  ___y, const MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		Guid_t1647  L_0 = ___x;
		goto IL_001e;
	}
	{
		Guid_t1647  L_1 = ___y;
		goto IL_001c;
	}
	{
		G_B4_0 = 0;
		goto IL_001d;
	}

IL_001c:
	{
		G_B4_0 = (-1);
	}

IL_001d:
	{
		return G_B4_0;
	}

IL_001e:
	{
		Guid_t1647  L_2 = ___y;
		goto IL_002b;
	}
	{
		return 1;
	}

IL_002b:
	{
		Guid_t1647  L_3 = ___y;
		NullCheck((Guid_t1647 *)(&___x));
		int32_t L_4 = Guid_CompareTo_m10279((Guid_t1647 *)(&___x), (Guid_t1647 )L_3, NULL);
		return L_4;
	}
}
// System.Collections.Generic.Comparer`1<System.Guid>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_11.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_11.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_11MethodDeclarations.h"
// System.Void System.Collections.Generic.Comparer`1<System.Guid>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void Comparer_1__ctor_m17533_gshared (Comparer_1_t2346 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m355((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<System.Guid>::.cctor()
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
extern const Il2CppType* GenericComparer_1_t2538_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t645_il2cpp_TypeInfo_var;
extern "C" void Comparer_1__cctor_m17534_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericComparer_1_t2538_0_0_0_var = il2cpp_codegen_type_from_index(2657);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(194);
		TypeU5BU5D_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(393);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m2130(NULL /*static, unused*/, (RuntimeTypeHandle_t1077 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Type_t * L_1 = Type_GetTypeFromHandle_m2130(NULL /*static, unused*/, (RuntimeTypeHandle_t1077 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_0, (Type_t *)L_1);
		if (!L_2)
		{
			goto IL_0054;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m2130(NULL /*static, unused*/, (RuntimeTypeHandle_t1077 )LoadTypeToken(GenericComparer_1_t2538_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t645* L_4 = (TypeU5BU5D_t645*)((TypeU5BU5D_t645*)SZArrayNew(TypeU5BU5D_t645_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m2130(NULL /*static, unused*/, (RuntimeTypeHandle_t1077 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0, sizeof(Type_t *))) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t645* >::Invoke(77 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t645*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m9840(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((Comparer_1_t2346_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((Comparer_1_t2346 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_005e;
	}

IL_0054:
	{
		DefaultComparer_t2347 * L_8 = (DefaultComparer_t2347 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t2347 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((Comparer_1_t2346_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_005e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<System.Guid>::System.Collections.IComparer.Compare(System.Object,System.Object)
// System.Object
#include "mscorlib_System_Object.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentException_t402_il2cpp_TypeInfo_var;
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m17535_gshared (Comparer_1_t2346 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(269);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		Object_t * L_0 = ___x;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Object_t * L_1 = ___y;
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0013;
	}

IL_0012:
	{
		G_B4_0 = (-1);
	}

IL_0013:
	{
		return G_B4_0;
	}

IL_0014:
	{
		Object_t * L_2 = ___y;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		return 1;
	}

IL_001c:
	{
		Object_t * L_3 = ___x;
		if (!((Object_t *)IsInst(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0045;
		}
	}
	{
		Object_t * L_4 = ___y;
		if (!((Object_t *)IsInst(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0045;
		}
	}
	{
		Object_t * L_5 = ___x;
		Object_t * L_6 = ___y;
		NullCheck((Comparer_1_t2346 *)__this);
		int32_t L_7 = (int32_t)VirtFuncInvoker2< int32_t, Guid_t1647 , Guid_t1647  >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Guid>::Compare(T,T) */, (Comparer_1_t2346 *)__this, (Guid_t1647 )((*(Guid_t1647 *)((Guid_t1647 *)UnBox (L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (Guid_t1647 )((*(Guid_t1647 *)((Guid_t1647 *)UnBox (L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_7;
	}

IL_0045:
	{
		ArgumentException_t402 * L_8 = (ArgumentException_t402 *)il2cpp_codegen_object_new (ArgumentException_t402_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9866(L_8, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_8);
	}
}
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.Guid>::get_Default()
extern "C" Comparer_1_t2346 * Comparer_1_get_Default_m17536_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Comparer_1_t2346 * L_0 = ((Comparer_1_t2346_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m17537_gshared (DefaultComparer_t2347 * __this, const MethodInfo* method)
{
	{
		NullCheck((Comparer_1_t2346 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (Comparer_1_t2346 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Comparer_1_t2346 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::Compare(T,T)
// System.Guid
#include "mscorlib_System_Guid.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* IComparable_t1734_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t402_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2798;
extern "C" int32_t DefaultComparer_Compare_m17538_gshared (DefaultComparer_t2347 * __this, Guid_t1647  ___x, Guid_t1647  ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IComparable_t1734_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(735);
		ArgumentException_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(269);
		_stringLiteral2798 = il2cpp_codegen_string_literal_from_index(2798);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		Guid_t1647  L_0 = ___x;
		goto IL_001e;
	}
	{
		Guid_t1647  L_1 = ___y;
		goto IL_001c;
	}
	{
		G_B4_0 = 0;
		goto IL_001d;
	}

IL_001c:
	{
		G_B4_0 = (-1);
	}

IL_001d:
	{
		return G_B4_0;
	}

IL_001e:
	{
		Guid_t1647  L_2 = ___y;
		goto IL_002b;
	}
	{
		return 1;
	}

IL_002b:
	{
		Guid_t1647  L_3 = ___x;
		Guid_t1647  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_4);
		if (!((Object_t*)IsInst(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))
		{
			goto IL_004d;
		}
	}
	{
		Guid_t1647  L_6 = ___x;
		Guid_t1647  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_7);
		Guid_t1647  L_9 = ___y;
		NullCheck((Object_t*)((Object_t*)Castclass(L_8, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))));
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, Guid_t1647  >::Invoke(0 /* System.Int32 System.IComparable`1<System.Guid>::CompareTo(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)((Object_t*)Castclass(L_8, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))), (Guid_t1647 )L_9);
		return L_10;
	}

IL_004d:
	{
		Guid_t1647  L_11 = ___x;
		Guid_t1647  L_12 = L_11;
		Object_t * L_13 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_12);
		if (!((Object_t *)IsInst(L_13, IComparable_t1734_il2cpp_TypeInfo_var)))
		{
			goto IL_0074;
		}
	}
	{
		Guid_t1647  L_14 = ___x;
		Guid_t1647  L_15 = L_14;
		Object_t * L_16 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_15);
		Guid_t1647  L_17 = ___y;
		Guid_t1647  L_18 = L_17;
		Object_t * L_19 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_18);
		NullCheck((Object_t *)((Object_t *)Castclass(L_16, IComparable_t1734_il2cpp_TypeInfo_var)));
		int32_t L_20 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(0 /* System.Int32 System.IComparable::CompareTo(System.Object) */, IComparable_t1734_il2cpp_TypeInfo_var, (Object_t *)((Object_t *)Castclass(L_16, IComparable_t1734_il2cpp_TypeInfo_var)), (Object_t *)L_19);
		return L_20;
	}

IL_0074:
	{
		ArgumentException_t402 * L_21 = (ArgumentException_t402 *)il2cpp_codegen_object_new (ArgumentException_t402_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2370(L_21, (String_t*)_stringLiteral2798, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_21);
	}
}
// System.Collections.Generic.GenericEqualityComparer`1<System.Guid>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__1.h"
// System.Collections.Generic.GenericEqualityComparer`1<System.Guid>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__1MethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.Guid>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_13MethodDeclarations.h"
// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::.ctor()
extern "C" void GenericEqualityComparer_1__ctor_m10715_gshared (GenericEqualityComparer_1_t1767 * __this, const MethodInfo* method)
{
	{
		NullCheck((EqualityComparer_1_t2348 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (EqualityComparer_1_t2348 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t2348 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::GetHashCode(T)
// System.Guid
#include "mscorlib_System_Guid.h"
// System.Guid
#include "mscorlib_System_GuidMethodDeclarations.h"
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m17539_gshared (GenericEqualityComparer_1_t1767 * __this, Guid_t1647  ___obj, const MethodInfo* method)
{
	{
		Guid_t1647  L_0 = ___obj;
		goto IL_000d;
	}
	{
		return 0;
	}

IL_000d:
	{
		NullCheck((Guid_t1647 *)(&___obj));
		int32_t L_1 = Guid_GetHashCode_m10281((Guid_t1647 *)(&___obj), NULL);
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m17540_gshared (GenericEqualityComparer_1_t1767 * __this, Guid_t1647  ___x, Guid_t1647  ___y, const MethodInfo* method)
{
	{
		Guid_t1647  L_0 = ___x;
		goto IL_0015;
	}
	{
		Guid_t1647  L_1 = ___y;
		Guid_t1647  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return ((((Object_t*)(Object_t *)L_3) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0015:
	{
		Guid_t1647  L_4 = ___y;
		NullCheck((Guid_t1647 *)(&___x));
		bool L_5 = Guid_Equals_m10280((Guid_t1647 *)(&___x), (Guid_t1647 )L_4, NULL);
		return L_5;
	}
}
// System.Collections.Generic.EqualityComparer`1<System.Guid>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_13.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_13.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_13MethodDeclarations.h"
// System.Void System.Collections.Generic.EqualityComparer`1<System.Guid>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void EqualityComparer_1__ctor_m17541_gshared (EqualityComparer_1_t2348 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m355((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.Guid>::.cctor()
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
extern const Il2CppType* GenericEqualityComparer_1_t2537_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t645_il2cpp_TypeInfo_var;
extern "C" void EqualityComparer_1__cctor_m17542_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericEqualityComparer_1_t2537_0_0_0_var = il2cpp_codegen_type_from_index(2656);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(194);
		TypeU5BU5D_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(393);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m2130(NULL /*static, unused*/, (RuntimeTypeHandle_t1077 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Type_t * L_1 = Type_GetTypeFromHandle_m2130(NULL /*static, unused*/, (RuntimeTypeHandle_t1077 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_0, (Type_t *)L_1);
		if (!L_2)
		{
			goto IL_0054;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m2130(NULL /*static, unused*/, (RuntimeTypeHandle_t1077 )LoadTypeToken(GenericEqualityComparer_1_t2537_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t645* L_4 = (TypeU5BU5D_t645*)((TypeU5BU5D_t645*)SZArrayNew(TypeU5BU5D_t645_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m2130(NULL /*static, unused*/, (RuntimeTypeHandle_t1077 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0, sizeof(Type_t *))) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t645* >::Invoke(77 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t645*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m9840(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((EqualityComparer_1_t2348_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((EqualityComparer_1_t2348 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_005e;
	}

IL_0054:
	{
		DefaultComparer_t2349 * L_8 = (DefaultComparer_t2349 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t2349 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((EqualityComparer_1_t2348_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_005e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Guid>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m17543_gshared (EqualityComparer_1_t2348 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		NullCheck((EqualityComparer_1_t2348 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, Guid_t1647  >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.Guid>::GetHashCode(T) */, (EqualityComparer_1_t2348 *)__this, (Guid_t1647 )((*(Guid_t1647 *)((Guid_t1647 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m17544_gshared (EqualityComparer_1_t2348 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		NullCheck((EqualityComparer_1_t2348 *)__this);
		bool L_2 = (bool)VirtFuncInvoker2< bool, Guid_t1647 , Guid_t1647  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::Equals(T,T) */, (EqualityComparer_1_t2348 *)__this, (Guid_t1647 )((*(Guid_t1647 *)((Guid_t1647 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (Guid_t1647 )((*(Guid_t1647 *)((Guid_t1647 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.Guid>::get_Default()
extern "C" EqualityComparer_1_t2348 * EqualityComparer_1_get_Default_m17545_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t2348 * L_0 = ((EqualityComparer_1_t2348_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m17546_gshared (DefaultComparer_t2349 * __this, const MethodInfo* method)
{
	{
		NullCheck((EqualityComparer_1_t2348 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (EqualityComparer_1_t2348 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t2348 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::GetHashCode(T)
// System.Guid
#include "mscorlib_System_Guid.h"
// System.Guid
#include "mscorlib_System_GuidMethodDeclarations.h"
extern "C" int32_t DefaultComparer_GetHashCode_m17547_gshared (DefaultComparer_t2349 * __this, Guid_t1647  ___obj, const MethodInfo* method)
{
	{
		Guid_t1647  L_0 = ___obj;
		goto IL_000d;
	}
	{
		return 0;
	}

IL_000d:
	{
		NullCheck((Guid_t1647 *)(&___obj));
		int32_t L_1 = Guid_GetHashCode_m10281((Guid_t1647 *)(&___obj), NULL);
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m17548_gshared (DefaultComparer_t2349 * __this, Guid_t1647  ___x, Guid_t1647  ___y, const MethodInfo* method)
{
	{
		Guid_t1647  L_0 = ___x;
		goto IL_0015;
	}
	{
		Guid_t1647  L_1 = ___y;
		Guid_t1647  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return ((((Object_t*)(Object_t *)L_3) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0015:
	{
		Guid_t1647  L_4 = ___y;
		Guid_t1647  L_5 = L_4;
		Object_t * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_5);
		NullCheck((Guid_t1647 *)(&___x));
		bool L_7 = Guid_Equals_m10278((Guid_t1647 *)(&___x), (Object_t *)L_6, NULL);
		return L_7;
	}
}
// System.Collections.Generic.GenericComparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_gen_2.h"
// System.Collections.Generic.GenericComparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_gen_2MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_12MethodDeclarations.h"
// System.Void System.Collections.Generic.GenericComparer`1<System.TimeSpan>::.ctor()
extern "C" void GenericComparer_1__ctor_m10716_gshared (GenericComparer_1_t1768 * __this, const MethodInfo* method)
{
	{
		NullCheck((Comparer_1_t2350 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (Comparer_1_t2350 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Comparer_1_t2350 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericComparer`1<System.TimeSpan>::Compare(T,T)
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpanMethodDeclarations.h"
extern "C" int32_t GenericComparer_1_Compare_m17549_gshared (GenericComparer_1_t1768 * __this, TimeSpan_t959  ___x, TimeSpan_t959  ___y, const MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		TimeSpan_t959  L_0 = ___x;
		goto IL_001e;
	}
	{
		TimeSpan_t959  L_1 = ___y;
		goto IL_001c;
	}
	{
		G_B4_0 = 0;
		goto IL_001d;
	}

IL_001c:
	{
		G_B4_0 = (-1);
	}

IL_001d:
	{
		return G_B4_0;
	}

IL_001e:
	{
		TimeSpan_t959  L_2 = ___y;
		goto IL_002b;
	}
	{
		return 1;
	}

IL_002b:
	{
		TimeSpan_t959  L_3 = ___y;
		NullCheck((TimeSpan_t959 *)(&___x));
		int32_t L_4 = TimeSpan_CompareTo_m10569((TimeSpan_t959 *)(&___x), (TimeSpan_t959 )L_3, NULL);
		return L_4;
	}
}
// System.Collections.Generic.Comparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_12.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_12.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_12MethodDeclarations.h"
// System.Void System.Collections.Generic.Comparer`1<System.TimeSpan>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void Comparer_1__ctor_m17550_gshared (Comparer_1_t2350 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m355((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<System.TimeSpan>::.cctor()
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
extern const Il2CppType* GenericComparer_1_t2538_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t645_il2cpp_TypeInfo_var;
extern "C" void Comparer_1__cctor_m17551_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericComparer_1_t2538_0_0_0_var = il2cpp_codegen_type_from_index(2657);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(194);
		TypeU5BU5D_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(393);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m2130(NULL /*static, unused*/, (RuntimeTypeHandle_t1077 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Type_t * L_1 = Type_GetTypeFromHandle_m2130(NULL /*static, unused*/, (RuntimeTypeHandle_t1077 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_0, (Type_t *)L_1);
		if (!L_2)
		{
			goto IL_0054;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m2130(NULL /*static, unused*/, (RuntimeTypeHandle_t1077 )LoadTypeToken(GenericComparer_1_t2538_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t645* L_4 = (TypeU5BU5D_t645*)((TypeU5BU5D_t645*)SZArrayNew(TypeU5BU5D_t645_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m2130(NULL /*static, unused*/, (RuntimeTypeHandle_t1077 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0, sizeof(Type_t *))) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t645* >::Invoke(77 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t645*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m9840(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((Comparer_1_t2350_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((Comparer_1_t2350 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_005e;
	}

IL_0054:
	{
		DefaultComparer_t2351 * L_8 = (DefaultComparer_t2351 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t2351 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((Comparer_1_t2350_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_005e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<System.TimeSpan>::System.Collections.IComparer.Compare(System.Object,System.Object)
// System.Object
#include "mscorlib_System_Object.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentException_t402_il2cpp_TypeInfo_var;
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m17552_gshared (Comparer_1_t2350 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(269);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		Object_t * L_0 = ___x;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Object_t * L_1 = ___y;
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0013;
	}

IL_0012:
	{
		G_B4_0 = (-1);
	}

IL_0013:
	{
		return G_B4_0;
	}

IL_0014:
	{
		Object_t * L_2 = ___y;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		return 1;
	}

IL_001c:
	{
		Object_t * L_3 = ___x;
		if (!((Object_t *)IsInst(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0045;
		}
	}
	{
		Object_t * L_4 = ___y;
		if (!((Object_t *)IsInst(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0045;
		}
	}
	{
		Object_t * L_5 = ___x;
		Object_t * L_6 = ___y;
		NullCheck((Comparer_1_t2350 *)__this);
		int32_t L_7 = (int32_t)VirtFuncInvoker2< int32_t, TimeSpan_t959 , TimeSpan_t959  >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.TimeSpan>::Compare(T,T) */, (Comparer_1_t2350 *)__this, (TimeSpan_t959 )((*(TimeSpan_t959 *)((TimeSpan_t959 *)UnBox (L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (TimeSpan_t959 )((*(TimeSpan_t959 *)((TimeSpan_t959 *)UnBox (L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_7;
	}

IL_0045:
	{
		ArgumentException_t402 * L_8 = (ArgumentException_t402 *)il2cpp_codegen_object_new (ArgumentException_t402_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9866(L_8, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_8);
	}
}
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.TimeSpan>::get_Default()
extern "C" Comparer_1_t2350 * Comparer_1_get_Default_m17553_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Comparer_1_t2350 * L_0 = ((Comparer_1_t2350_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m17554_gshared (DefaultComparer_t2351 * __this, const MethodInfo* method)
{
	{
		NullCheck((Comparer_1_t2350 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (Comparer_1_t2350 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Comparer_1_t2350 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::Compare(T,T)
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* IComparable_t1734_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t402_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2798;
extern "C" int32_t DefaultComparer_Compare_m17555_gshared (DefaultComparer_t2351 * __this, TimeSpan_t959  ___x, TimeSpan_t959  ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IComparable_t1734_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(735);
		ArgumentException_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(269);
		_stringLiteral2798 = il2cpp_codegen_string_literal_from_index(2798);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		TimeSpan_t959  L_0 = ___x;
		goto IL_001e;
	}
	{
		TimeSpan_t959  L_1 = ___y;
		goto IL_001c;
	}
	{
		G_B4_0 = 0;
		goto IL_001d;
	}

IL_001c:
	{
		G_B4_0 = (-1);
	}

IL_001d:
	{
		return G_B4_0;
	}

IL_001e:
	{
		TimeSpan_t959  L_2 = ___y;
		goto IL_002b;
	}
	{
		return 1;
	}

IL_002b:
	{
		TimeSpan_t959  L_3 = ___x;
		TimeSpan_t959  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_4);
		if (!((Object_t*)IsInst(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))
		{
			goto IL_004d;
		}
	}
	{
		TimeSpan_t959  L_6 = ___x;
		TimeSpan_t959  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_7);
		TimeSpan_t959  L_9 = ___y;
		NullCheck((Object_t*)((Object_t*)Castclass(L_8, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))));
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, TimeSpan_t959  >::Invoke(0 /* System.Int32 System.IComparable`1<System.TimeSpan>::CompareTo(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)((Object_t*)Castclass(L_8, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))), (TimeSpan_t959 )L_9);
		return L_10;
	}

IL_004d:
	{
		TimeSpan_t959  L_11 = ___x;
		TimeSpan_t959  L_12 = L_11;
		Object_t * L_13 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_12);
		if (!((Object_t *)IsInst(L_13, IComparable_t1734_il2cpp_TypeInfo_var)))
		{
			goto IL_0074;
		}
	}
	{
		TimeSpan_t959  L_14 = ___x;
		TimeSpan_t959  L_15 = L_14;
		Object_t * L_16 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_15);
		TimeSpan_t959  L_17 = ___y;
		TimeSpan_t959  L_18 = L_17;
		Object_t * L_19 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_18);
		NullCheck((Object_t *)((Object_t *)Castclass(L_16, IComparable_t1734_il2cpp_TypeInfo_var)));
		int32_t L_20 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(0 /* System.Int32 System.IComparable::CompareTo(System.Object) */, IComparable_t1734_il2cpp_TypeInfo_var, (Object_t *)((Object_t *)Castclass(L_16, IComparable_t1734_il2cpp_TypeInfo_var)), (Object_t *)L_19);
		return L_20;
	}

IL_0074:
	{
		ArgumentException_t402 * L_21 = (ArgumentException_t402 *)il2cpp_codegen_object_new (ArgumentException_t402_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2370(L_21, (String_t*)_stringLiteral2798, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_21);
	}
}
// System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__2.h"
// System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__2MethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_14MethodDeclarations.h"
// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::.ctor()
extern "C" void GenericEqualityComparer_1__ctor_m10717_gshared (GenericEqualityComparer_1_t1769 * __this, const MethodInfo* method)
{
	{
		NullCheck((EqualityComparer_1_t2352 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (EqualityComparer_1_t2352 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t2352 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::GetHashCode(T)
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpanMethodDeclarations.h"
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m17556_gshared (GenericEqualityComparer_1_t1769 * __this, TimeSpan_t959  ___obj, const MethodInfo* method)
{
	{
		TimeSpan_t959  L_0 = ___obj;
		goto IL_000d;
	}
	{
		return 0;
	}

IL_000d:
	{
		NullCheck((TimeSpan_t959 *)(&___obj));
		int32_t L_1 = TimeSpan_GetHashCode_m10579((TimeSpan_t959 *)(&___obj), NULL);
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m17557_gshared (GenericEqualityComparer_1_t1769 * __this, TimeSpan_t959  ___x, TimeSpan_t959  ___y, const MethodInfo* method)
{
	{
		TimeSpan_t959  L_0 = ___x;
		goto IL_0015;
	}
	{
		TimeSpan_t959  L_1 = ___y;
		TimeSpan_t959  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return ((((Object_t*)(Object_t *)L_3) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0015:
	{
		TimeSpan_t959  L_4 = ___y;
		NullCheck((TimeSpan_t959 *)(&___x));
		bool L_5 = TimeSpan_Equals_m10570((TimeSpan_t959 *)(&___x), (TimeSpan_t959 )L_4, NULL);
		return L_5;
	}
}
// System.Collections.Generic.EqualityComparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_14.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_14.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_14MethodDeclarations.h"
// System.Void System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void EqualityComparer_1__ctor_m17558_gshared (EqualityComparer_1_t2352 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m355((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::.cctor()
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
extern const Il2CppType* GenericEqualityComparer_1_t2537_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t645_il2cpp_TypeInfo_var;
extern "C" void EqualityComparer_1__cctor_m17559_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericEqualityComparer_1_t2537_0_0_0_var = il2cpp_codegen_type_from_index(2656);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(194);
		TypeU5BU5D_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(393);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m2130(NULL /*static, unused*/, (RuntimeTypeHandle_t1077 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Type_t * L_1 = Type_GetTypeFromHandle_m2130(NULL /*static, unused*/, (RuntimeTypeHandle_t1077 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_0, (Type_t *)L_1);
		if (!L_2)
		{
			goto IL_0054;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m2130(NULL /*static, unused*/, (RuntimeTypeHandle_t1077 )LoadTypeToken(GenericEqualityComparer_1_t2537_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t645* L_4 = (TypeU5BU5D_t645*)((TypeU5BU5D_t645*)SZArrayNew(TypeU5BU5D_t645_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m2130(NULL /*static, unused*/, (RuntimeTypeHandle_t1077 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0, sizeof(Type_t *))) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t645* >::Invoke(77 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t645*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m9840(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((EqualityComparer_1_t2352_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((EqualityComparer_1_t2352 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_005e;
	}

IL_0054:
	{
		DefaultComparer_t2353 * L_8 = (DefaultComparer_t2353 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t2353 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((EqualityComparer_1_t2352_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_005e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m17560_gshared (EqualityComparer_1_t2352 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		NullCheck((EqualityComparer_1_t2352 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, TimeSpan_t959  >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::GetHashCode(T) */, (EqualityComparer_1_t2352 *)__this, (TimeSpan_t959 )((*(TimeSpan_t959 *)((TimeSpan_t959 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m17561_gshared (EqualityComparer_1_t2352 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		NullCheck((EqualityComparer_1_t2352 *)__this);
		bool L_2 = (bool)VirtFuncInvoker2< bool, TimeSpan_t959 , TimeSpan_t959  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::Equals(T,T) */, (EqualityComparer_1_t2352 *)__this, (TimeSpan_t959 )((*(TimeSpan_t959 *)((TimeSpan_t959 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (TimeSpan_t959 )((*(TimeSpan_t959 *)((TimeSpan_t959 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::get_Default()
extern "C" EqualityComparer_1_t2352 * EqualityComparer_1_get_Default_m17562_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t2352 * L_0 = ((EqualityComparer_1_t2352_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m17563_gshared (DefaultComparer_t2353 * __this, const MethodInfo* method)
{
	{
		NullCheck((EqualityComparer_1_t2352 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (EqualityComparer_1_t2352 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t2352 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::GetHashCode(T)
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpanMethodDeclarations.h"
extern "C" int32_t DefaultComparer_GetHashCode_m17564_gshared (DefaultComparer_t2353 * __this, TimeSpan_t959  ___obj, const MethodInfo* method)
{
	{
		TimeSpan_t959  L_0 = ___obj;
		goto IL_000d;
	}
	{
		return 0;
	}

IL_000d:
	{
		NullCheck((TimeSpan_t959 *)(&___obj));
		int32_t L_1 = TimeSpan_GetHashCode_m10579((TimeSpan_t959 *)(&___obj), NULL);
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m17565_gshared (DefaultComparer_t2353 * __this, TimeSpan_t959  ___x, TimeSpan_t959  ___y, const MethodInfo* method)
{
	{
		TimeSpan_t959  L_0 = ___x;
		goto IL_0015;
	}
	{
		TimeSpan_t959  L_1 = ___y;
		TimeSpan_t959  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return ((((Object_t*)(Object_t *)L_3) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0015:
	{
		TimeSpan_t959  L_4 = ___y;
		TimeSpan_t959  L_5 = L_4;
		Object_t * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_5);
		NullCheck((TimeSpan_t959 *)(&___x));
		bool L_7 = TimeSpan_Equals_m10572((TimeSpan_t959 *)(&___x), (Object_t *)L_6, NULL);
		return L_7;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
