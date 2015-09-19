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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_1.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_1MethodDeclarations.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Transform_1__ctor_m12145_gshared (Transform_1_t1884 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::Invoke(TKey,TValue)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" KeyValuePair_2_t1876  Transform_1_Invoke_m12146_gshared (Transform_1_t1884 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m12146((Transform_1_t1884 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t1876  (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t1876  (*FunctionPointerType) (Object_t * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* Int32_t106_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m12147_gshared (Transform_1_t1884 * __this, int32_t ___key, Object_t * ___value, AsyncCallback_t9 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t106_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_t106_il2cpp_TypeInfo_var, &___key);
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t1876  Transform_1_EndInvoke_m12148_gshared (Transform_1_t1884 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t1876 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumeraMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_9.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_9MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0MethodDeclarations.h"
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_9.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void ShimEnumerator__ctor_m12149_gshared (ShimEnumerator_t1885 * __this, Dictionary_2_t1874 * ___host, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m355((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t1874 * L_0 = ___host;
		NullCheck((Dictionary_2_t1874 *)L_0);
		Enumerator_t1881  L_1 = (( Enumerator_t1881  (*) (Dictionary_2_t1874 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t1874 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m12150_gshared (ShimEnumerator_t1885 * __this, const MethodInfo* method)
{
	{
		Enumerator_t1881 * L_0 = (Enumerator_t1881 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t1881 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t1881 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern TypeInfo* IDictionaryEnumerator_t1049_il2cpp_TypeInfo_var;
extern "C" DictionaryEntry_t1050  ShimEnumerator_get_Entry_m12151_gshared (ShimEnumerator_t1885 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionaryEnumerator_t1049_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(601);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enumerator_t1881  L_0 = (Enumerator_t1881 )(__this->___host_enumerator_0);
		Enumerator_t1881  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck((Object_t *)L_2);
		DictionaryEntry_t1050  L_3 = (DictionaryEntry_t1050 )InterfaceFuncInvoker0< DictionaryEntry_t1050  >::Invoke(0 /* System.Collections.DictionaryEntry System.Collections.IDictionaryEnumerator::get_Entry() */, IDictionaryEnumerator_t1049_il2cpp_TypeInfo_var, (Object_t *)L_2);
		return L_3;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m12152_gshared (ShimEnumerator_t1885 * __this, const MethodInfo* method)
{
	KeyValuePair_2_t1876  V_0 = {0};
	{
		Enumerator_t1881 * L_0 = (Enumerator_t1881 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t1876  L_1 = (( KeyValuePair_2_t1876  (*) (Enumerator_t1881 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t1881 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (KeyValuePair_2_t1876 )L_1;
		int32_t L_2 = (( int32_t (*) (KeyValuePair_2_t1876 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t1876 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_3);
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m12153_gshared (ShimEnumerator_t1885 * __this, const MethodInfo* method)
{
	KeyValuePair_2_t1876  V_0 = {0};
	{
		Enumerator_t1881 * L_0 = (Enumerator_t1881 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t1876  L_1 = (( KeyValuePair_2_t1876  (*) (Enumerator_t1881 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t1881 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (KeyValuePair_2_t1876 )L_1;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t1876 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t1876 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern TypeInfo* DictionaryEntry_t1050_il2cpp_TypeInfo_var;
extern "C" Object_t * ShimEnumerator_get_Current_m12154_gshared (ShimEnumerator_t1885 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEntry_t1050_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((ShimEnumerator_t1885 *)__this);
		DictionaryEntry_t1050  L_0 = (DictionaryEntry_t1050 )VirtFuncInvoker0< DictionaryEntry_t1050  >::Invoke(6 /* System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry() */, (ShimEnumerator_t1885 *)__this);
		DictionaryEntry_t1050  L_1 = L_0;
		Object_t * L_2 = Box(DictionaryEntry_t1050_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.EqualityComparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_1.h"
// System.Collections.Generic.EqualityComparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_1MethodDeclarations.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
#include "mscorlib_ArrayTypes.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int32>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_1.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int32>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_1MethodDeclarations.h"
// System.Void System.Collections.Generic.EqualityComparer`1<System.Int32>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void EqualityComparer_1__ctor_m12155_gshared (EqualityComparer_1_t1886 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m355((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.Int32>::.cctor()
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
extern const Il2CppType* GenericEqualityComparer_1_t2537_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t645_il2cpp_TypeInfo_var;
extern "C" void EqualityComparer_1__cctor_m12156_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
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
		((EqualityComparer_1_t1886_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((EqualityComparer_1_t1886 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_005e;
	}

IL_0054:
	{
		DefaultComparer_t1888 * L_8 = (DefaultComparer_t1888 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t1888 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((EqualityComparer_1_t1886_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_005e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Int32>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m12157_gshared (EqualityComparer_1_t1886 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		NullCheck((EqualityComparer_1_t1886 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.Int32>::GetHashCode(T) */, (EqualityComparer_1_t1886 *)__this, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m12158_gshared (EqualityComparer_1_t1886 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		NullCheck((EqualityComparer_1_t1886 *)__this);
		bool L_2 = (bool)VirtFuncInvoker2< bool, int32_t, int32_t >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32>::Equals(T,T) */, (EqualityComparer_1_t1886 *)__this, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (int32_t)((*(int32_t*)((int32_t*)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.Int32>::get_Default()
extern "C" EqualityComparer_1_t1886 * EqualityComparer_1_get_Default_m12159_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t1886 * L_0 = ((EqualityComparer_1_t1886_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
// System.Collections.Generic.GenericEqualityComparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__3.h"
// System.Collections.Generic.GenericEqualityComparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__3MethodDeclarations.h"
// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.Int32>::.ctor()
extern "C" void GenericEqualityComparer_1__ctor_m12160_gshared (GenericEqualityComparer_1_t1887 * __this, const MethodInfo* method)
{
	{
		NullCheck((EqualityComparer_1_t1886 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (EqualityComparer_1_t1886 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t1886 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.Int32>::GetHashCode(T)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m12161_gshared (GenericEqualityComparer_1_t1887 * __this, int32_t ___obj, const MethodInfo* method)
{
	{
		int32_t L_0 = ___obj;
		goto IL_000d;
	}
	{
		return 0;
	}

IL_000d:
	{
		NullCheck((int32_t*)(&___obj));
		int32_t L_1 = Int32_GetHashCode_m3603((int32_t*)(&___obj), NULL);
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.Int32>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m12162_gshared (GenericEqualityComparer_1_t1887 * __this, int32_t ___x, int32_t ___y, const MethodInfo* method)
{
	{
		int32_t L_0 = ___x;
		goto IL_0015;
	}
	{
		int32_t L_1 = ___y;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return ((((Object_t*)(Object_t *)L_3) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0015:
	{
		int32_t L_4 = ___y;
		NullCheck((int32_t*)(&___x));
		bool L_5 = Int32_Equals_m3605((int32_t*)(&___x), (int32_t)L_4, NULL);
		return L_5;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int32>::.ctor()
extern "C" void DefaultComparer__ctor_m12163_gshared (DefaultComparer_t1888 * __this, const MethodInfo* method)
{
	{
		NullCheck((EqualityComparer_1_t1886 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (EqualityComparer_1_t1886 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t1886 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int32>::GetHashCode(T)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
extern "C" int32_t DefaultComparer_GetHashCode_m12164_gshared (DefaultComparer_t1888 * __this, int32_t ___obj, const MethodInfo* method)
{
	{
		int32_t L_0 = ___obj;
		goto IL_000d;
	}
	{
		return 0;
	}

IL_000d:
	{
		NullCheck((int32_t*)(&___obj));
		int32_t L_1 = Int32_GetHashCode_m3603((int32_t*)(&___obj), NULL);
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int32>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m12165_gshared (DefaultComparer_t1888 * __this, int32_t ___x, int32_t ___y, const MethodInfo* method)
{
	{
		int32_t L_0 = ___x;
		goto IL_0015;
	}
	{
		int32_t L_1 = ___y;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return ((((Object_t*)(Object_t *)L_3) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0015:
	{
		int32_t L_4 = ___y;
		int32_t L_5 = L_4;
		Object_t * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_5);
		NullCheck((int32_t*)(&___x));
		bool L_7 = Int32_Equals_m5755((int32_t*)(&___x), (Object_t *)L_6, NULL);
		return L_7;
	}
}
// System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_12.h"
// System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_12MethodDeclarations.h"
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2D.h"
// System.String
#include "mscorlib_System_String.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.RaycastHit2D>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.RaycastHit2D>(System.Int32)
extern "C" RaycastHit2D_t365  Array_InternalArray__get_Item_TisRaycastHit2D_t365_m17716_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisRaycastHit2D_t365_m17716(__this, p0, method) (( RaycastHit2D_t365  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisRaycastHit2D_t365_m17716_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m12292_gshared (InternalEnumerator_1_t1895 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12293_gshared (InternalEnumerator_1_t1895 * __this, const MethodInfo* method)
{
	{
		RaycastHit2D_t365  L_0 = (( RaycastHit2D_t365  (*) (InternalEnumerator_1_t1895 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t1895 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RaycastHit2D_t365  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12294_gshared (InternalEnumerator_1_t1895 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m12295_gshared (InternalEnumerator_1_t1895 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001e;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m5638((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001e:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B5_0 = 0;
	}

IL_0044:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t881_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2793;
extern Il2CppCodeGenString* _stringLiteral2794;
extern "C" RaycastHit2D_t365  InternalEnumerator_1_get_Current_m12296_gshared (InternalEnumerator_1_t1895 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t881_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(515);
		_stringLiteral2793 = il2cpp_codegen_string_literal_from_index(2793);
		_stringLiteral2794 = il2cpp_codegen_string_literal_from_index(2794);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t881 * L_1 = (InvalidOperationException_t881 *)il2cpp_codegen_object_new (InvalidOperationException_t881_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4709(L_1, (String_t*)_stringLiteral2793, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0018:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_002f;
		}
	}
	{
		InvalidOperationException_t881 * L_3 = (InvalidOperationException_t881 *)il2cpp_codegen_object_new (InvalidOperationException_t881_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4709(L_3, (String_t*)_stringLiteral2794, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_002f:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m5638((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		RaycastHit2D_t365  L_8 = (( RaycastHit2D_t365  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Comparison`1<UnityEngine.RaycastHit>
#include "mscorlib_System_Comparison_1_gen_0.h"
// System.Comparison`1<UnityEngine.RaycastHit>
#include "mscorlib_System_Comparison_1_gen_0MethodDeclarations.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"
// System.Void System.Comparison`1<UnityEngine.RaycastHit>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Comparison_1__ctor_m2001_gshared (Comparison_1_t158 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::Invoke(T,T)
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"
extern "C" int32_t Comparison_1_Invoke_m12297_gshared (Comparison_1_t158 * __this, RaycastHit_t71  ___x, RaycastHit_t71  ___y, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Comparison_1_Invoke_m12297((Comparison_1_t158 *)__this->___prev_9,___x, ___y, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, RaycastHit_t71  ___x, RaycastHit_t71  ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, RaycastHit_t71  ___x, RaycastHit_t71  ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Comparison`1<UnityEngine.RaycastHit>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* RaycastHit_t71_il2cpp_TypeInfo_var;
extern "C" Object_t * Comparison_1_BeginInvoke_m12298_gshared (Comparison_1_t158 * __this, RaycastHit_t71  ___x, RaycastHit_t71  ___y, AsyncCallback_t9 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RaycastHit_t71_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(128);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(RaycastHit_t71_il2cpp_TypeInfo_var, &___x);
	__d_args[1] = Box(RaycastHit_t71_il2cpp_TypeInfo_var, &___y);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m12299_gshared (Comparison_1_t158 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_13.h"
// System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_13MethodDeclarations.h"
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.RaycastHit>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.RaycastHit>(System.Int32)
extern "C" RaycastHit_t71  Array_InternalArray__get_Item_TisRaycastHit_t71_m17727_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisRaycastHit_t71_m17727(__this, p0, method) (( RaycastHit_t71  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisRaycastHit_t71_m17727_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m12300_gshared (InternalEnumerator_1_t1896 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12301_gshared (InternalEnumerator_1_t1896 * __this, const MethodInfo* method)
{
	{
		RaycastHit_t71  L_0 = (( RaycastHit_t71  (*) (InternalEnumerator_1_t1896 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t1896 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RaycastHit_t71  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12302_gshared (InternalEnumerator_1_t1896 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m12303_gshared (InternalEnumerator_1_t1896 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001e;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m5638((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001e:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B5_0 = 0;
	}

IL_0044:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t881_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2793;
extern Il2CppCodeGenString* _stringLiteral2794;
extern "C" RaycastHit_t71  InternalEnumerator_1_get_Current_m12304_gshared (InternalEnumerator_1_t1896 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t881_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(515);
		_stringLiteral2793 = il2cpp_codegen_string_literal_from_index(2793);
		_stringLiteral2794 = il2cpp_codegen_string_literal_from_index(2794);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t881 * L_1 = (InvalidOperationException_t881 *)il2cpp_codegen_object_new (InvalidOperationException_t881_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4709(L_1, (String_t*)_stringLiteral2793, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0018:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_002f;
		}
	}
	{
		InvalidOperationException_t881 * L_3 = (InvalidOperationException_t881 *)il2cpp_codegen_object_new (InvalidOperationException_t881_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4709(L_3, (String_t*)_stringLiteral2794, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_002f:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m5638((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		RaycastHit_t71  L_8 = (( RaycastHit_t71  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_0.h"
// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_0MethodDeclarations.h"
// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_0.h"
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCall.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
// UnityEngine.Events.InvokableCall`1<UnityEngine.Color>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_0.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBaseMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// UnityEngineInternal.NetFxCoreExtensions
#include "UnityEngine_UnityEngineInternal_NetFxCoreExtensionsMethodDeclarations.h"
// UnityEngine.Events.InvokableCall`1<UnityEngine.Color>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_0MethodDeclarations.h"
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::.ctor()
// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBaseMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t78_il2cpp_TypeInfo_var;
extern "C" void UnityEvent_1__ctor_m2006_gshared (UnityEvent_1_t161 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t78_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(113);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_InvokeArray_4 = ((ObjectU5BU5D_t78*)SZArrayNew(ObjectU5BU5D_t78_il2cpp_TypeInfo_var, 1));
		NullCheck((UnityEventBase_t624 *)__this);
		UnityEventBase__ctor_m3555((UnityEventBase_t624 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_0.h"
extern "C" void UnityEvent_1_AddListener_m2009_gshared (UnityEvent_1_t161 * __this, UnityAction_1_t338 * ___call, const MethodInfo* method)
{
	{
		UnityAction_1_t338 * L_0 = ___call;
		BaseInvokableCall_t616 * L_1 = (( BaseInvokableCall_t616 * (*) (Object_t * /* static, unused */, UnityAction_1_t338 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(NULL /*static, unused*/, (UnityAction_1_t338 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		NullCheck((UnityEventBase_t624 *)__this);
		UnityEventBase_AddCall_m3562((UnityEventBase_t624 *)__this, (BaseInvokableCall_t616 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// UnityEngineInternal.NetFxCoreExtensions
#include "UnityEngine_UnityEngineInternal_NetFxCoreExtensionsMethodDeclarations.h"
extern "C" void UnityEvent_1_RemoveListener_m12305_gshared (UnityEvent_1_t161 * __this, UnityAction_1_t338 * ___call, const MethodInfo* method)
{
	{
		UnityAction_1_t338 * L_0 = ___call;
		NullCheck((Delegate_t74 *)L_0);
		Object_t * L_1 = Delegate_get_Target_m3667((Delegate_t74 *)L_0, /*hidden argument*/NULL);
		UnityAction_1_t338 * L_2 = ___call;
		MethodInfo_t * L_3 = NetFxCoreExtensions_GetMethodInfo_m3581(NULL /*static, unused*/, (Delegate_t74 *)L_2, /*hidden argument*/NULL);
		NullCheck((UnityEventBase_t624 *)__this);
		UnityEventBase_RemoveListener_m3563((UnityEventBase_t624 *)__this, (Object_t *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::FindMethod_Impl(System.String,System.Object)
// System.String
#include "mscorlib_System_String.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
extern TypeInfo* TypeU5BU5D_t645_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m12306_gshared (UnityEvent_1_t161 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeU5BU5D_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(393);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(194);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___targetObj;
		String_t* L_1 = ___name;
		TypeU5BU5D_t645* L_2 = (TypeU5BU5D_t645*)((TypeU5BU5D_t645*)SZArrayNew(TypeU5BU5D_t645_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m2130(NULL /*static, unused*/, (RuntimeTypeHandle_t1077 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_2, 0, sizeof(Type_t *))) = (Type_t *)L_3;
		MethodInfo_t * L_4 = UnityEventBase_GetValidMethodInfo_m3566(NULL /*static, unused*/, (Object_t *)L_0, (String_t*)L_1, (TypeU5BU5D_t645*)L_2, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(System.Object,System.Reflection.MethodInfo)
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
extern "C" BaseInvokableCall_t616 * UnityEvent_1_GetDelegate_m12307_gshared (UnityEvent_1_t161 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		InvokableCall_1_t1897 * L_2 = (InvokableCall_1_t1897 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		(( void (*) (InvokableCall_1_t1897 *, Object_t *, MethodInfo_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_2, (Object_t *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_2;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t616 * UnityEvent_1_GetDelegate_m12308_gshared (Object_t * __this /* static, unused */, UnityAction_1_t338 * ___action, const MethodInfo* method)
{
	{
		UnityAction_1_t338 * L_0 = ___action;
		InvokableCall_1_t1897 * L_1 = (InvokableCall_1_t1897 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		(( void (*) (InvokableCall_1_t1897 *, UnityAction_1_t338 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_1, (UnityAction_1_t338 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_1;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::Invoke(T0)
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
extern "C" void UnityEvent_1_Invoke_m2008_gshared (UnityEvent_1_t161 * __this, Color_t11  ___arg0, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t78* L_0 = (ObjectU5BU5D_t78*)(__this->___m_InvokeArray_4);
		Color_t11  L_1 = ___arg0;
		Color_t11  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_3;
		ObjectU5BU5D_t78* L_4 = (ObjectU5BU5D_t78*)(__this->___m_InvokeArray_4);
		NullCheck((UnityEventBase_t624 *)__this);
		UnityEventBase_Invoke_m3564((UnityEventBase_t624 *)__this, (ObjectU5BU5D_t78*)L_4, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_0MethodDeclarations.h"
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void UnityAction_1__ctor_m2152_gshared (UnityAction_1_t338 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::Invoke(T0)
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
extern "C" void UnityAction_1_Invoke_m12309_gshared (UnityAction_1_t338 * __this, Color_t11  ___arg0, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAction_1_Invoke_m12309((UnityAction_1_t338 *)__this->___prev_9,___arg0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Color_t11  ___arg0, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg0,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Color_t11  ___arg0, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg0,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Color>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* Color_t11_il2cpp_TypeInfo_var;
extern "C" Object_t * UnityAction_1_BeginInvoke_m12310_gshared (UnityAction_1_t338 * __this, Color_t11  ___arg0, AsyncCallback_t9 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Color_t11_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(131);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Color_t11_il2cpp_TypeInfo_var, &___arg0);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m12311_gshared (UnityAction_1_t338 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCallMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
struct Object_t;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.Color>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.Color>(System.Object)
extern "C" void BaseInvokableCall_ThrowOnInvalidArg_TisColor_t11_m17741_gshared (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method);
#define BaseInvokableCall_ThrowOnInvalidArg_TisColor_t11_m17741(__this /* static, unused */, p0, method) (( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))BaseInvokableCall_ThrowOnInvalidArg_TisColor_t11_m17741_gshared)(__this /* static, unused */, p0, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Object
#include "mscorlib_System_Object.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCallMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// UnityEngineInternal.NetFxCoreExtensions
#include "UnityEngine_UnityEngineInternal_NetFxCoreExtensionsMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void InvokableCall_1__ctor_m12312_gshared (InvokableCall_1_t1897 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(194);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		NullCheck((BaseInvokableCall_t616 *)__this);
		BaseInvokableCall__ctor_m3533((BaseInvokableCall_t616 *)__this, (Object_t *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		UnityAction_1_t338 * L_2 = (UnityAction_1_t338 *)(__this->___Delegate_0);
		MethodInfo_t * L_3 = ___theFunction;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m2130(NULL /*static, unused*/, (RuntimeTypeHandle_t1077 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Object_t * L_5 = ___target;
		Delegate_t74 * L_6 = NetFxCoreExtensions_CreateDelegate_m3580(NULL /*static, unused*/, (MethodInfo_t *)L_3, (Type_t *)L_4, (Object_t *)L_5, /*hidden argument*/NULL);
		Delegate_t74 * L_7 = Delegate_Combine_m303(NULL /*static, unused*/, (Delegate_t74 *)L_2, (Delegate_t74 *)((UnityAction_1_t338 *)Castclass(L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))), /*hidden argument*/NULL);
		__this->___Delegate_0 = ((UnityAction_1_t338 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_0.h"
extern "C" void InvokableCall_1__ctor_m12313_gshared (InvokableCall_1_t1897 * __this, UnityAction_1_t338 * ___action, const MethodInfo* method)
{
	{
		NullCheck((BaseInvokableCall_t616 *)__this);
		BaseInvokableCall__ctor_m3532((BaseInvokableCall_t616 *)__this, /*hidden argument*/NULL);
		UnityAction_1_t338 * L_0 = (UnityAction_1_t338 *)(__this->___Delegate_0);
		UnityAction_1_t338 * L_1 = ___action;
		Delegate_t74 * L_2 = Delegate_Combine_m303(NULL /*static, unused*/, (Delegate_t74 *)L_0, (Delegate_t74 *)L_1, /*hidden argument*/NULL);
		__this->___Delegate_0 = ((UnityAction_1_t338 *)Castclass(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::Invoke(System.Object[])
#include "mscorlib_ArrayTypes.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentException_t402_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2801;
extern "C" void InvokableCall_1_Invoke_m12314_gshared (InvokableCall_1_t1897 * __this, ObjectU5BU5D_t78* ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(269);
		_stringLiteral2801 = il2cpp_codegen_string_literal_from_index(2801);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t78* L_0 = ___args;
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentException_t402 * L_1 = (ArgumentException_t402 *)il2cpp_codegen_object_new (ArgumentException_t402_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2370(L_1, (String_t*)_stringLiteral2801, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0014:
	{
		ObjectU5BU5D_t78* L_2 = ___args;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		int32_t L_3 = 0;
		(( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(NULL /*static, unused*/, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_2, L_3, sizeof(Object_t *))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		UnityAction_1_t338 * L_4 = (UnityAction_1_t338 *)(__this->___Delegate_0);
		bool L_5 = BaseInvokableCall_AllowInvoke_m3534(NULL /*static, unused*/, (Delegate_t74 *)L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		UnityAction_1_t338 * L_6 = (UnityAction_1_t338 *)(__this->___Delegate_0);
		ObjectU5BU5D_t78* L_7 = ___args;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		int32_t L_8 = 0;
		NullCheck((UnityAction_1_t338 *)L_6);
		(( void (*) (UnityAction_1_t338 *, Color_t11 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((UnityAction_1_t338 *)L_6, (Color_t11 )((*(Color_t11 *)((Color_t11 *)UnBox ((*(Object_t **)(Object_t **)SZArrayLdElema(L_7, L_8, sizeof(Object_t *))), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	}

IL_003f:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m12315_gshared (InvokableCall_1_t1897 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		UnityAction_1_t338 * L_0 = (UnityAction_1_t338 *)(__this->___Delegate_0);
		NullCheck((Delegate_t74 *)L_0);
		Object_t * L_1 = Delegate_get_Target_m3667((Delegate_t74 *)L_0, /*hidden argument*/NULL);
		Object_t * L_2 = ___targetObj;
		if ((!(((Object_t*)(Object_t *)L_1) == ((Object_t*)(Object_t *)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		UnityAction_1_t338 * L_3 = (UnityAction_1_t338 *)(__this->___Delegate_0);
		MethodInfo_t * L_4 = NetFxCoreExtensions_GetMethodInfo_m3581(NULL /*static, unused*/, (Delegate_t74 *)L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = ___method;
		G_B3_0 = ((((Object_t*)(MethodInfo_t *)L_4) == ((Object_t*)(MethodInfo_t *)L_5))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// UnityEngine.Events.UnityEvent`1<System.Single>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_1.h"
// UnityEngine.Events.UnityEvent`1<System.Single>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_1MethodDeclarations.h"
// UnityEngine.Events.UnityAction`1<System.Single>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_1.h"
// UnityEngine.Events.InvokableCall`1<System.Single>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_1.h"
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.Events.InvokableCall`1<System.Single>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_1MethodDeclarations.h"
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::.ctor()
// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBaseMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t78_il2cpp_TypeInfo_var;
extern "C" void UnityEvent_1__ctor_m2010_gshared (UnityEvent_1_t164 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t78_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(113);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_InvokeArray_4 = ((ObjectU5BU5D_t78*)SZArrayNew(ObjectU5BU5D_t78_il2cpp_TypeInfo_var, 1));
		NullCheck((UnityEventBase_t624 *)__this);
		UnityEventBase__ctor_m3555((UnityEventBase_t624 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
// UnityEngine.Events.UnityAction`1<System.Single>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_1.h"
extern "C" void UnityEvent_1_AddListener_m2012_gshared (UnityEvent_1_t164 * __this, UnityAction_1_t339 * ___call, const MethodInfo* method)
{
	{
		UnityAction_1_t339 * L_0 = ___call;
		BaseInvokableCall_t616 * L_1 = (( BaseInvokableCall_t616 * (*) (Object_t * /* static, unused */, UnityAction_1_t339 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(NULL /*static, unused*/, (UnityAction_1_t339 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		NullCheck((UnityEventBase_t624 *)__this);
		UnityEventBase_AddCall_m3562((UnityEventBase_t624 *)__this, (BaseInvokableCall_t616 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// UnityEngineInternal.NetFxCoreExtensions
#include "UnityEngine_UnityEngineInternal_NetFxCoreExtensionsMethodDeclarations.h"
extern "C" void UnityEvent_1_RemoveListener_m2308_gshared (UnityEvent_1_t164 * __this, UnityAction_1_t339 * ___call, const MethodInfo* method)
{
	{
		UnityAction_1_t339 * L_0 = ___call;
		NullCheck((Delegate_t74 *)L_0);
		Object_t * L_1 = Delegate_get_Target_m3667((Delegate_t74 *)L_0, /*hidden argument*/NULL);
		UnityAction_1_t339 * L_2 = ___call;
		MethodInfo_t * L_3 = NetFxCoreExtensions_GetMethodInfo_m3581(NULL /*static, unused*/, (Delegate_t74 *)L_2, /*hidden argument*/NULL);
		NullCheck((UnityEventBase_t624 *)__this);
		UnityEventBase_RemoveListener_m3563((UnityEventBase_t624 *)__this, (Object_t *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Single>::FindMethod_Impl(System.String,System.Object)
// System.String
#include "mscorlib_System_String.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
extern TypeInfo* TypeU5BU5D_t645_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m12316_gshared (UnityEvent_1_t164 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeU5BU5D_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(393);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(194);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___targetObj;
		String_t* L_1 = ___name;
		TypeU5BU5D_t645* L_2 = (TypeU5BU5D_t645*)((TypeU5BU5D_t645*)SZArrayNew(TypeU5BU5D_t645_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m2130(NULL /*static, unused*/, (RuntimeTypeHandle_t1077 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_2, 0, sizeof(Type_t *))) = (Type_t *)L_3;
		MethodInfo_t * L_4 = UnityEventBase_GetValidMethodInfo_m3566(NULL /*static, unused*/, (Object_t *)L_0, (String_t*)L_1, (TypeU5BU5D_t645*)L_2, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(System.Object,System.Reflection.MethodInfo)
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
extern "C" BaseInvokableCall_t616 * UnityEvent_1_GetDelegate_m12317_gshared (UnityEvent_1_t164 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		InvokableCall_1_t1898 * L_2 = (InvokableCall_1_t1898 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		(( void (*) (InvokableCall_1_t1898 *, Object_t *, MethodInfo_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_2, (Object_t *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_2;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t616 * UnityEvent_1_GetDelegate_m12318_gshared (Object_t * __this /* static, unused */, UnityAction_1_t339 * ___action, const MethodInfo* method)
{
	{
		UnityAction_1_t339 * L_0 = ___action;
		InvokableCall_1_t1898 * L_1 = (InvokableCall_1_t1898 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		(( void (*) (InvokableCall_1_t1898 *, UnityAction_1_t339 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_1, (UnityAction_1_t339 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_1;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(T0)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void UnityEvent_1_Invoke_m2011_gshared (UnityEvent_1_t164 * __this, float ___arg0, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t78* L_0 = (ObjectU5BU5D_t78*)(__this->___m_InvokeArray_4);
		float L_1 = ___arg0;
		float L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_3;
		ObjectU5BU5D_t78* L_4 = (ObjectU5BU5D_t78*)(__this->___m_InvokeArray_4);
		NullCheck((UnityEventBase_t624 *)__this);
		UnityEventBase_Invoke_m3564((UnityEventBase_t624 *)__this, (ObjectU5BU5D_t78*)L_4, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Events.UnityAction`1<System.Single>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_1MethodDeclarations.h"
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void UnityAction_1__ctor_m2109_gshared (UnityAction_1_t339 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::Invoke(T0)
// System.Single
#include "mscorlib_System_Single.h"
extern "C" void UnityAction_1_Invoke_m12319_gshared (UnityAction_1_t339 * __this, float ___arg0, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAction_1_Invoke_m12319((UnityAction_1_t339 *)__this->___prev_9,___arg0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, float ___arg0, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg0,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, float ___arg0, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg0,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Single>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* Single_t355_il2cpp_TypeInfo_var;
extern "C" Object_t * UnityAction_1_BeginInvoke_m12320_gshared (UnityAction_1_t339 * __this, float ___arg0, AsyncCallback_t9 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Single_t355_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(36);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Single_t355_il2cpp_TypeInfo_var, &___arg0);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m12321_gshared (UnityAction_1_t339 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
struct Object_t;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Single>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Single>(System.Object)
extern "C" void BaseInvokableCall_ThrowOnInvalidArg_TisSingle_t355_m17742_gshared (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method);
#define BaseInvokableCall_ThrowOnInvalidArg_TisSingle_t355_m17742(__this /* static, unused */, p0, method) (( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))BaseInvokableCall_ThrowOnInvalidArg_TisSingle_t355_m17742_gshared)(__this /* static, unused */, p0, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Object
#include "mscorlib_System_Object.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCallMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// UnityEngineInternal.NetFxCoreExtensions
#include "UnityEngine_UnityEngineInternal_NetFxCoreExtensionsMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void InvokableCall_1__ctor_m12322_gshared (InvokableCall_1_t1898 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(194);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		NullCheck((BaseInvokableCall_t616 *)__this);
		BaseInvokableCall__ctor_m3533((BaseInvokableCall_t616 *)__this, (Object_t *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		UnityAction_1_t339 * L_2 = (UnityAction_1_t339 *)(__this->___Delegate_0);
		MethodInfo_t * L_3 = ___theFunction;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m2130(NULL /*static, unused*/, (RuntimeTypeHandle_t1077 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Object_t * L_5 = ___target;
		Delegate_t74 * L_6 = NetFxCoreExtensions_CreateDelegate_m3580(NULL /*static, unused*/, (MethodInfo_t *)L_3, (Type_t *)L_4, (Object_t *)L_5, /*hidden argument*/NULL);
		Delegate_t74 * L_7 = Delegate_Combine_m303(NULL /*static, unused*/, (Delegate_t74 *)L_2, (Delegate_t74 *)((UnityAction_1_t339 *)Castclass(L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))), /*hidden argument*/NULL);
		__this->___Delegate_0 = ((UnityAction_1_t339 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// UnityEngine.Events.UnityAction`1<System.Single>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_1.h"
extern "C" void InvokableCall_1__ctor_m12323_gshared (InvokableCall_1_t1898 * __this, UnityAction_1_t339 * ___action, const MethodInfo* method)
{
	{
		NullCheck((BaseInvokableCall_t616 *)__this);
		BaseInvokableCall__ctor_m3532((BaseInvokableCall_t616 *)__this, /*hidden argument*/NULL);
		UnityAction_1_t339 * L_0 = (UnityAction_1_t339 *)(__this->___Delegate_0);
		UnityAction_1_t339 * L_1 = ___action;
		Delegate_t74 * L_2 = Delegate_Combine_m303(NULL /*static, unused*/, (Delegate_t74 *)L_0, (Delegate_t74 *)L_1, /*hidden argument*/NULL);
		__this->___Delegate_0 = ((UnityAction_1_t339 *)Castclass(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::Invoke(System.Object[])
#include "mscorlib_ArrayTypes.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentException_t402_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2801;
extern "C" void InvokableCall_1_Invoke_m12324_gshared (InvokableCall_1_t1898 * __this, ObjectU5BU5D_t78* ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(269);
		_stringLiteral2801 = il2cpp_codegen_string_literal_from_index(2801);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t78* L_0 = ___args;
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentException_t402 * L_1 = (ArgumentException_t402 *)il2cpp_codegen_object_new (ArgumentException_t402_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2370(L_1, (String_t*)_stringLiteral2801, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0014:
	{
		ObjectU5BU5D_t78* L_2 = ___args;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		int32_t L_3 = 0;
		(( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(NULL /*static, unused*/, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_2, L_3, sizeof(Object_t *))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		UnityAction_1_t339 * L_4 = (UnityAction_1_t339 *)(__this->___Delegate_0);
		bool L_5 = BaseInvokableCall_AllowInvoke_m3534(NULL /*static, unused*/, (Delegate_t74 *)L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		UnityAction_1_t339 * L_6 = (UnityAction_1_t339 *)(__this->___Delegate_0);
		ObjectU5BU5D_t78* L_7 = ___args;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		int32_t L_8 = 0;
		NullCheck((UnityAction_1_t339 *)L_6);
		(( void (*) (UnityAction_1_t339 *, float, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((UnityAction_1_t339 *)L_6, (float)((*(float*)((float*)UnBox ((*(Object_t **)(Object_t **)SZArrayLdElema(L_7, L_8, sizeof(Object_t *))), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	}

IL_003f:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Single>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m12325_gshared (InvokableCall_1_t1898 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		UnityAction_1_t339 * L_0 = (UnityAction_1_t339 *)(__this->___Delegate_0);
		NullCheck((Delegate_t74 *)L_0);
		Object_t * L_1 = Delegate_get_Target_m3667((Delegate_t74 *)L_0, /*hidden argument*/NULL);
		Object_t * L_2 = ___targetObj;
		if ((!(((Object_t*)(Object_t *)L_1) == ((Object_t*)(Object_t *)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		UnityAction_1_t339 * L_3 = (UnityAction_1_t339 *)(__this->___Delegate_0);
		MethodInfo_t * L_4 = NetFxCoreExtensions_GetMethodInfo_m3581(NULL /*static, unused*/, (Delegate_t74 *)L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = ___method;
		G_B3_0 = ((((Object_t*)(MethodInfo_t *)L_4) == ((Object_t*)(MethodInfo_t *)L_5))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_Collections_IndexedSet_1_gen_2.h"
// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_Collections_IndexedSet_1_gen_2MethodDeclarations.h"
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_36.h"
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_10.h"
// System.NotImplementedException
#include "mscorlib_System_NotImplementedException.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3.h"
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3.h"
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_36MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_10MethodDeclarations.h"
// System.NotImplementedException
#include "mscorlib_System_NotImplementedExceptionMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void IndexedSet_1__ctor_m12326_gshared (IndexedSet_1_t1900 * __this, const MethodInfo* method)
{
	{
		List_1_t353 * L_0 = (List_1_t353 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (List_1_t353 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		__this->___m_List_0 = L_0;
		Dictionary_2_t1901 * L_1 = (Dictionary_2_t1901 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (Dictionary_2_t1901 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		__this->___m_Dictionary_1 = L_1;
		NullCheck((Object_t *)__this);
		Object__ctor_m355((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m12328_gshared (IndexedSet_1_t1900 * __this, const MethodInfo* method)
{
	{
		NullCheck((IndexedSet_1_t1900 *)__this);
		Object_t* L_0 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(17 /* System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator() */, (IndexedSet_1_t1900 *)__this);
		return L_0;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" void IndexedSet_1_Add_m12330_gshared (IndexedSet_1_t1900 * __this, Object_t * ___item, const MethodInfo* method)
{
	{
		Dictionary_2_t1901 * L_0 = (Dictionary_2_t1901 *)(__this->___m_Dictionary_1);
		Object_t * L_1 = ___item;
		NullCheck((Dictionary_2_t1901 *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(28 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(!0) */, (Dictionary_2_t1901 *)L_0, (Object_t *)L_1);
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		List_1_t353 * L_3 = (List_1_t353 *)(__this->___m_List_0);
		Object_t * L_4 = ___item;
		NullCheck((List_1_t353 *)L_3);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, (List_1_t353 *)L_3, (Object_t *)L_4);
		Dictionary_2_t1901 * L_5 = (Dictionary_2_t1901 *)(__this->___m_Dictionary_1);
		Object_t * L_6 = ___item;
		List_1_t353 * L_7 = (List_1_t353 *)(__this->___m_List_0);
		NullCheck((List_1_t353 *)L_7);
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count() */, (List_1_t353 *)L_7);
		NullCheck((Dictionary_2_t1901 *)L_5);
		VirtActionInvoker2< Object_t *, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(!0,!1) */, (Dictionary_2_t1901 *)L_5, (Object_t *)L_6, (int32_t)((int32_t)((int32_t)L_8-(int32_t)1)));
		return;
	}
}
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m12332_gshared (IndexedSet_1_t1900 * __this, Object_t * ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)(-1);
		Dictionary_2_t1901 * L_0 = (Dictionary_2_t1901 *)(__this->___m_Dictionary_1);
		Object_t * L_1 = ___item;
		NullCheck((Dictionary_2_t1901 *)L_0);
		bool L_2 = (bool)VirtFuncInvoker2< bool, Object_t *, int32_t* >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(!0,!1&) */, (Dictionary_2_t1901 *)L_0, (Object_t *)L_1, (int32_t*)(&V_0));
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		return 0;
	}

IL_0017:
	{
		int32_t L_3 = V_0;
		NullCheck((IndexedSet_1_t1900 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(6 /* System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32) */, (IndexedSet_1_t1900 *)__this, (int32_t)L_3);
		return 1;
	}
}
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
// System.NotImplementedException
#include "mscorlib_System_NotImplementedExceptionMethodDeclarations.h"
extern TypeInfo* NotImplementedException_t707_il2cpp_TypeInfo_var;
extern "C" Object_t* IndexedSet_1_GetEnumerator_m12334_gshared (IndexedSet_1_t1900 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotImplementedException_t707_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(431);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotImplementedException_t707 * L_0 = (NotImplementedException_t707 *)il2cpp_codegen_object_new (NotImplementedException_t707_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m10407(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m12336_gshared (IndexedSet_1_t1900 * __this, const MethodInfo* method)
{
	{
		List_1_t353 * L_0 = (List_1_t353 *)(__this->___m_List_0);
		NullCheck((List_1_t353 *)L_0);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<System.Object>::Clear() */, (List_1_t353 *)L_0);
		Dictionary_2_t1901 * L_1 = (Dictionary_2_t1901 *)(__this->___m_Dictionary_1);
		NullCheck((Dictionary_2_t1901 *)L_1);
		VirtActionInvoker0::Invoke(13 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear() */, (Dictionary_2_t1901 *)L_1);
		return;
	}
}
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m12338_gshared (IndexedSet_1_t1900 * __this, Object_t * ___item, const MethodInfo* method)
{
	{
		Dictionary_2_t1901 * L_0 = (Dictionary_2_t1901 *)(__this->___m_Dictionary_1);
		Object_t * L_1 = ___item;
		NullCheck((Dictionary_2_t1901 *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(28 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(!0) */, (Dictionary_2_t1901 *)L_0, (Object_t *)L_1);
		return L_2;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
#include "mscorlib_ArrayTypes.h"
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void IndexedSet_1_CopyTo_m12340_gshared (IndexedSet_1_t1900 * __this, ObjectU5BU5D_t78* ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	{
		List_1_t353 * L_0 = (List_1_t353 *)(__this->___m_List_0);
		ObjectU5BU5D_t78* L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		NullCheck((List_1_t353 *)L_0);
		VirtActionInvoker2< ObjectU5BU5D_t78*, int32_t >::Invoke(25 /* System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(!0[],System.Int32) */, (List_1_t353 *)L_0, (ObjectU5BU5D_t78*)L_1, (int32_t)L_2);
		return;
	}
}
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m12342_gshared (IndexedSet_1_t1900 * __this, const MethodInfo* method)
{
	{
		List_1_t353 * L_0 = (List_1_t353 *)(__this->___m_List_0);
		NullCheck((List_1_t353 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count() */, (List_1_t353 *)L_0);
		return L_1;
	}
}
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m12344_gshared (IndexedSet_1_t1900 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m12346_gshared (IndexedSet_1_t1900 * __this, Object_t * ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)(-1);
		Dictionary_2_t1901 * L_0 = (Dictionary_2_t1901 *)(__this->___m_Dictionary_1);
		Object_t * L_1 = ___item;
		NullCheck((Dictionary_2_t1901 *)L_0);
		VirtFuncInvoker2< bool, Object_t *, int32_t* >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(!0,!1&) */, (Dictionary_2_t1901 *)L_0, (Object_t *)L_1, (int32_t*)(&V_0));
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t81_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2810;
extern "C" void IndexedSet_1_Insert_m12348_gshared (IndexedSet_1_t1900 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t81_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		_stringLiteral2810 = il2cpp_codegen_string_literal_from_index(2810);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t81 * L_0 = (NotSupportedException_t81 *)il2cpp_codegen_object_new (NotSupportedException_t81_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m4631(L_0, (String_t*)_stringLiteral2810, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m12350_gshared (IndexedSet_1_t1900 * __this, int32_t ___index, const MethodInfo* method)
{
	Object_t * V_0 = {0};
	int32_t V_1 = 0;
	Object_t * V_2 = {0};
	{
		List_1_t353 * L_0 = (List_1_t353 *)(__this->___m_List_0);
		int32_t L_1 = ___index;
		NullCheck((List_1_t353 *)L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32) */, (List_1_t353 *)L_0, (int32_t)L_1);
		V_0 = (Object_t *)L_2;
		Dictionary_2_t1901 * L_3 = (Dictionary_2_t1901 *)(__this->___m_Dictionary_1);
		Object_t * L_4 = V_0;
		NullCheck((Dictionary_2_t1901 *)L_3);
		VirtFuncInvoker1< bool, Object_t * >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(!0) */, (Dictionary_2_t1901 *)L_3, (Object_t *)L_4);
		int32_t L_5 = ___index;
		List_1_t353 * L_6 = (List_1_t353 *)(__this->___m_List_0);
		NullCheck((List_1_t353 *)L_6);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count() */, (List_1_t353 *)L_6);
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)((int32_t)L_7-(int32_t)1))))))
		{
			goto IL_003e;
		}
	}
	{
		List_1_t353 * L_8 = (List_1_t353 *)(__this->___m_List_0);
		int32_t L_9 = ___index;
		NullCheck((List_1_t353 *)L_8);
		VirtActionInvoker1< int32_t >::Invoke(30 /* System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32) */, (List_1_t353 *)L_8, (int32_t)L_9);
		goto IL_007f;
	}

IL_003e:
	{
		List_1_t353 * L_10 = (List_1_t353 *)(__this->___m_List_0);
		NullCheck((List_1_t353 *)L_10);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count() */, (List_1_t353 *)L_10);
		V_1 = (int32_t)((int32_t)((int32_t)L_11-(int32_t)1));
		List_1_t353 * L_12 = (List_1_t353 *)(__this->___m_List_0);
		int32_t L_13 = V_1;
		NullCheck((List_1_t353 *)L_12);
		Object_t * L_14 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32) */, (List_1_t353 *)L_12, (int32_t)L_13);
		V_2 = (Object_t *)L_14;
		List_1_t353 * L_15 = (List_1_t353 *)(__this->___m_List_0);
		int32_t L_16 = ___index;
		Object_t * L_17 = V_2;
		NullCheck((List_1_t353 *)L_15);
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(32 /* System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,!0) */, (List_1_t353 *)L_15, (int32_t)L_16, (Object_t *)L_17);
		Dictionary_2_t1901 * L_18 = (Dictionary_2_t1901 *)(__this->___m_Dictionary_1);
		Object_t * L_19 = V_2;
		int32_t L_20 = ___index;
		NullCheck((Dictionary_2_t1901 *)L_18);
		VirtActionInvoker2< Object_t *, int32_t >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(!0,!1) */, (Dictionary_2_t1901 *)L_18, (Object_t *)L_19, (int32_t)L_20);
		List_1_t353 * L_21 = (List_1_t353 *)(__this->___m_List_0);
		int32_t L_22 = V_1;
		NullCheck((List_1_t353 *)L_21);
		VirtActionInvoker1< int32_t >::Invoke(30 /* System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32) */, (List_1_t353 *)L_21, (int32_t)L_22);
	}

IL_007f:
	{
		return;
	}
}
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m12352_gshared (IndexedSet_1_t1900 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		List_1_t353 * L_0 = (List_1_t353 *)(__this->___m_List_0);
		int32_t L_1 = ___index;
		NullCheck((List_1_t353 *)L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32) */, (List_1_t353 *)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m12354_gshared (IndexedSet_1_t1900 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	Object_t * V_0 = {0};
	{
		List_1_t353 * L_0 = (List_1_t353 *)(__this->___m_List_0);
		int32_t L_1 = ___index;
		NullCheck((List_1_t353 *)L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32) */, (List_1_t353 *)L_0, (int32_t)L_1);
		V_0 = (Object_t *)L_2;
		Dictionary_2_t1901 * L_3 = (Dictionary_2_t1901 *)(__this->___m_Dictionary_1);
		Object_t * L_4 = V_0;
		NullCheck((Dictionary_2_t1901 *)L_3);
		VirtFuncInvoker1< bool, Object_t * >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(!0) */, (Dictionary_2_t1901 *)L_3, (Object_t *)L_4);
		List_1_t353 * L_5 = (List_1_t353 *)(__this->___m_List_0);
		int32_t L_6 = ___index;
		Object_t * L_7 = ___value;
		NullCheck((List_1_t353 *)L_5);
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(32 /* System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,!0) */, (List_1_t353 *)L_5, (int32_t)L_6, (Object_t *)L_7);
		Dictionary_2_t1901 * L_8 = (Dictionary_2_t1901 *)(__this->___m_Dictionary_1);
		Object_t * L_9 = V_0;
		int32_t L_10 = ___index;
		NullCheck((Dictionary_2_t1901 *)L_8);
		VirtActionInvoker2< Object_t *, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(!0,!1) */, (Dictionary_2_t1901 *)L_8, (Object_t *)L_9, (int32_t)L_10);
		return;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3.h"
extern "C" void IndexedSet_1_RemoveAll_m12355_gshared (IndexedSet_1_t1900 * __this, Predicate_1_t1780 * ___match, const MethodInfo* method)
{
	int32_t V_0 = 0;
	Object_t * V_1 = {0};
	{
		V_0 = (int32_t)0;
		goto IL_0031;
	}

IL_0007:
	{
		List_1_t353 * L_0 = (List_1_t353 *)(__this->___m_List_0);
		int32_t L_1 = V_0;
		NullCheck((List_1_t353 *)L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32) */, (List_1_t353 *)L_0, (int32_t)L_1);
		V_1 = (Object_t *)L_2;
		Predicate_1_t1780 * L_3 = ___match;
		Object_t * L_4 = V_1;
		NullCheck((Predicate_1_t1780 *)L_3);
		bool L_5 = (( bool (*) (Predicate_1_t1780 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Predicate_1_t1780 *)L_3, (Object_t *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		Object_t * L_6 = V_1;
		NullCheck((IndexedSet_1_t1900 *)__this);
		VirtFuncInvoker1< bool, Object_t * >::Invoke(16 /* System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T) */, (IndexedSet_1_t1900 *)__this, (Object_t *)L_6);
		goto IL_0031;
	}

IL_002d:
	{
		int32_t L_7 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0031:
	{
		int32_t L_8 = V_0;
		List_1_t353 * L_9 = (List_1_t353 *)(__this->___m_List_0);
		NullCheck((List_1_t353 *)L_9);
		int32_t L_10 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count() */, (List_1_t353 *)L_9);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3.h"
extern "C" void IndexedSet_1_Sort_m12356_gshared (IndexedSet_1_t1900 * __this, Comparison_1_t1786 * ___sortLayoutFunction, const MethodInfo* method)
{
	int32_t V_0 = 0;
	Object_t * V_1 = {0};
	{
		List_1_t353 * L_0 = (List_1_t353 *)(__this->___m_List_0);
		Comparison_1_t1786 * L_1 = ___sortLayoutFunction;
		NullCheck((List_1_t353 *)L_0);
		(( void (*) (List_1_t353 *, Comparison_1_t1786 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)((List_1_t353 *)L_0, (Comparison_1_t1786 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		V_0 = (int32_t)0;
		goto IL_0031;
	}

IL_0013:
	{
		List_1_t353 * L_2 = (List_1_t353 *)(__this->___m_List_0);
		int32_t L_3 = V_0;
		NullCheck((List_1_t353 *)L_2);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32) */, (List_1_t353 *)L_2, (int32_t)L_3);
		V_1 = (Object_t *)L_4;
		Dictionary_2_t1901 * L_5 = (Dictionary_2_t1901 *)(__this->___m_Dictionary_1);
		Object_t * L_6 = V_1;
		int32_t L_7 = V_0;
		NullCheck((Dictionary_2_t1901 *)L_5);
		VirtActionInvoker2< Object_t *, int32_t >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(!0,!1) */, (Dictionary_2_t1901 *)L_5, (Object_t *)L_6, (int32_t)L_7);
		int32_t L_8 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0031:
	{
		int32_t L_9 = V_0;
		List_1_t353 * L_10 = (List_1_t353 *)(__this->___m_List_0);
		NullCheck((List_1_t353 *)L_10);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count() */, (List_1_t353 *)L_10);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}
}
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_4.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_5.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__1.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_0.h"
// System.Collections.Generic.Link
#include "mscorlib_System_Collections_Generic_Link.h"
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundException.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_5.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_4MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_5MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__1MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_0MethodDeclarations.h"
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundExceptionMethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_genMethodDeclarations.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_5MethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
struct DictionaryEntryU5BU5D_t2442;
struct Transform_1_t1902;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1050_TisDictionaryEntry_t1050_m17757_gshared (Dictionary_2_t1901 * __this, DictionaryEntryU5BU5D_t2442* p0, int32_t p1, Transform_1_t1902 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1050_TisDictionaryEntry_t1050_m17757(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t1901 *, DictionaryEntryU5BU5D_t2442*, int32_t, Transform_1_t1902 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1050_TisDictionaryEntry_t1050_m17757_gshared)(__this, p0, p1, p2, method)
struct Array_t;
struct Transform_1_t1910;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t1904_m17758_gshared (Dictionary_2_t1901 * __this, Array_t * p0, int32_t p1, Transform_1_t1910 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t1904_m17758(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t1901 *, Array_t *, int32_t, Transform_1_t1910 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t1904_m17758_gshared)(__this, p0, p1, p2, method)
struct KeyValuePair_2U5BU5D_t2364;
struct Transform_1_t1910;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t1904_TisKeyValuePair_2_t1904_m17760_gshared (Dictionary_2_t1901 * __this, KeyValuePair_2U5BU5D_t2364* p0, int32_t p1, Transform_1_t1910 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t1904_TisKeyValuePair_2_t1904_m17760(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t1901 *, KeyValuePair_2U5BU5D_t2364*, int32_t, Transform_1_t1910 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t1904_TisKeyValuePair_2_t1904_m17760_gshared)(__this, p0, p1, p2, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void Dictionary_2__ctor_m12357_gshared (Dictionary_2_t1901 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m355((Object_t *)__this, /*hidden argument*/NULL);
		NullCheck((Dictionary_2_t1901 *)__this);
		(( void (*) (Dictionary_2_t1901 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t1901 *)__this, (int32_t)((int32_t)10), (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m12358_gshared (Dictionary_2_t1901 * __this, Object_t* ___comparer, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m355((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___comparer;
		NullCheck((Dictionary_2_t1901 *)__this);
		(( void (*) (Dictionary_2_t1901 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t1901 *)__this, (int32_t)((int32_t)10), (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void Dictionary_2__ctor_m12359_gshared (Dictionary_2_t1901 * __this, int32_t ___capacity, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m355((Object_t *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___capacity;
		NullCheck((Dictionary_2_t1901 *)__this);
		(( void (*) (Dictionary_2_t1901 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t1901 *)__this, (int32_t)L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
extern "C" void Dictionary_2__ctor_m12360_gshared (Dictionary_2_t1901 * __this, SerializationInfo_t647 * ___info, StreamingContext_t648  ___context, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m355((Object_t *)__this, /*hidden argument*/NULL);
		SerializationInfo_t647 * L_0 = ___info;
		__this->___serialization_info_13 = L_0;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m12361_gshared (Dictionary_2_t1901 * __this, Object_t * ___key, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		if (!((Object_t *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))))
		{
			goto IL_002f;
		}
	}
	{
		Object_t * L_1 = ___key;
		NullCheck((Dictionary_2_t1901 *)__this);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(28 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey) */, (Dictionary_2_t1901 *)__this, (Object_t *)((Object_t *)Castclass(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))));
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t1901 *)__this);
		Object_t * L_4 = (( Object_t * (*) (Dictionary_2_t1901 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Dictionary_2_t1901 *)__this, (Object_t *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		NullCheck((Dictionary_2_t1901 *)__this);
		int32_t L_5 = (int32_t)VirtFuncInvoker1< int32_t, Object_t * >::Invoke(25 /* TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey) */, (Dictionary_2_t1901 *)__this, (Object_t *)L_4);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_6);
		return L_7;
	}

IL_002f:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m12362_gshared (Dictionary_2_t1901 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck((Dictionary_2_t1901 *)__this);
		Object_t * L_1 = (( Object_t * (*) (Dictionary_2_t1901 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Dictionary_2_t1901 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Object_t * L_2 = ___value;
		NullCheck((Dictionary_2_t1901 *)__this);
		int32_t L_3 = (( int32_t (*) (Dictionary_2_t1901 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((Dictionary_2_t1901 *)__this, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		NullCheck((Dictionary_2_t1901 *)__this);
		VirtActionInvoker2< Object_t *, int32_t >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue) */, (Dictionary_2_t1901 *)__this, (Object_t *)L_1, (int32_t)L_3);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m12363_gshared (Dictionary_2_t1901 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck((Dictionary_2_t1901 *)__this);
		Object_t * L_1 = (( Object_t * (*) (Dictionary_2_t1901 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Dictionary_2_t1901 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Object_t * L_2 = ___value;
		NullCheck((Dictionary_2_t1901 *)__this);
		int32_t L_3 = (( int32_t (*) (Dictionary_2_t1901 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((Dictionary_2_t1901 *)__this, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		NullCheck((Dictionary_2_t1901 *)__this);
		VirtActionInvoker2< Object_t *, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue) */, (Dictionary_2_t1901 *)__this, (Object_t *)L_1, (int32_t)L_3);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t677_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral711;
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m12364_gshared (Dictionary_2_t1901 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t677_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		_stringLiteral711 = il2cpp_codegen_string_literal_from_index(711);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t677 * L_1 = (ArgumentNullException_t677 *)il2cpp_codegen_object_new (ArgumentNullException_t677_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3666(L_1, (String_t*)_stringLiteral711, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		Object_t * L_2 = ___key;
		if (!((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))))
		{
			goto IL_0029;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t1901 *)__this);
		bool L_4 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(28 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey) */, (Dictionary_2_t1901 *)__this, (Object_t *)((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))));
		return L_4;
	}

IL_0029:
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern TypeInfo* ArgumentNullException_t677_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral711;
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m12365_gshared (Dictionary_2_t1901 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t677_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		_stringLiteral711 = il2cpp_codegen_string_literal_from_index(711);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t677 * L_1 = (ArgumentNullException_t677 *)il2cpp_codegen_object_new (ArgumentNullException_t677_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3666(L_1, (String_t*)_stringLiteral711, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		Object_t * L_2 = ___key;
		if (!((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))))
		{
			goto IL_0029;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t1901 *)__this);
		VirtFuncInvoker1< bool, Object_t * >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey) */, (Dictionary_2_t1901 *)__this, (Object_t *)((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))));
	}

IL_0029:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12366_gshared (Dictionary_2_t1901 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12367_gshared (Dictionary_2_t1901 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12368_gshared (Dictionary_2_t1901 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12369_gshared (Dictionary_2_t1901 * __this, KeyValuePair_2_t1904  ___keyValuePair, const MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (KeyValuePair_2_t1904 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((KeyValuePair_2_t1904 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		int32_t L_1 = (( int32_t (*) (KeyValuePair_2_t1904 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)((KeyValuePair_2_t1904 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		NullCheck((Dictionary_2_t1901 *)__this);
		VirtActionInvoker2< Object_t *, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue) */, (Dictionary_2_t1901 *)__this, (Object_t *)L_0, (int32_t)L_1);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12370_gshared (Dictionary_2_t1901 * __this, KeyValuePair_2_t1904  ___keyValuePair, const MethodInfo* method)
{
	{
		KeyValuePair_2_t1904  L_0 = ___keyValuePair;
		NullCheck((Dictionary_2_t1901 *)__this);
		bool L_1 = (( bool (*) (Dictionary_2_t1901 *, KeyValuePair_2_t1904 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t1901 *)__this, (KeyValuePair_2_t1904 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#include "mscorlib_ArrayTypes.h"
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12371_gshared (Dictionary_2_t1901 * __this, KeyValuePair_2U5BU5D_t2364* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t2364* L_0 = ___array;
		int32_t L_1 = ___index;
		NullCheck((Dictionary_2_t1901 *)__this);
		(( void (*) (Dictionary_2_t1901 *, KeyValuePair_2U5BU5D_t2364*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)((Dictionary_2_t1901 *)__this, (KeyValuePair_2U5BU5D_t2364*)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12372_gshared (Dictionary_2_t1901 * __this, KeyValuePair_2_t1904  ___keyValuePair, const MethodInfo* method)
{
	{
		KeyValuePair_2_t1904  L_0 = ___keyValuePair;
		NullCheck((Dictionary_2_t1901 *)__this);
		bool L_1 = (( bool (*) (Dictionary_2_t1901 *, KeyValuePair_2_t1904 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t1901 *)__this, (KeyValuePair_2_t1904 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		return 0;
	}

IL_000e:
	{
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t1904 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((KeyValuePair_2_t1904 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		NullCheck((Dictionary_2_t1901 *)__this);
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey) */, (Dictionary_2_t1901 *)__this, (Object_t *)L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
extern TypeInfo* DictionaryEntryU5BU5D_t2442_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m12373_gshared (Dictionary_2_t1901 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEntryU5BU5D_t2442_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2658);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2U5BU5D_t2364* V_0 = {0};
	DictionaryEntryU5BU5D_t2442* V_1 = {0};
	int32_t G_B5_0 = 0;
	DictionaryEntryU5BU5D_t2442* G_B5_1 = {0};
	Dictionary_2_t1901 * G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	DictionaryEntryU5BU5D_t2442* G_B4_1 = {0};
	Dictionary_2_t1901 * G_B4_2 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (KeyValuePair_2U5BU5D_t2364*)((KeyValuePair_2U5BU5D_t2364*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)));
		KeyValuePair_2U5BU5D_t2364* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		KeyValuePair_2U5BU5D_t2364* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((Dictionary_2_t1901 *)__this);
		(( void (*) (Dictionary_2_t1901 *, KeyValuePair_2U5BU5D_t2364*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)((Dictionary_2_t1901 *)__this, (KeyValuePair_2U5BU5D_t2364*)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		return;
	}

IL_0016:
	{
		Array_t * L_4 = ___array;
		int32_t L_5 = ___index;
		NullCheck((Dictionary_2_t1901 *)__this);
		(( void (*) (Dictionary_2_t1901 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((Dictionary_2_t1901 *)__this, (Array_t *)L_4, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		Array_t * L_6 = ___array;
		V_1 = (DictionaryEntryU5BU5D_t2442*)((DictionaryEntryU5BU5D_t2442*)IsInst(L_6, DictionaryEntryU5BU5D_t2442_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t2442* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0051;
		}
	}
	{
		DictionaryEntryU5BU5D_t2442* L_8 = V_1;
		int32_t L_9 = ___index;
		Transform_1_t1902 * L_10 = ((Dictionary_2_t1901_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16)->static_fields)->___U3CU3Ef__amU24cacheB_15;
		G_B4_0 = L_9;
		G_B4_1 = L_8;
		G_B4_2 = ((Dictionary_2_t1901 *)(__this));
		if (L_10)
		{
			G_B5_0 = L_9;
			G_B5_1 = L_8;
			G_B5_2 = ((Dictionary_2_t1901 *)(__this));
			goto IL_0046;
		}
	}
	{
		IntPtr_t L_11 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17) };
		Transform_1_t1902 * L_12 = (Transform_1_t1902 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		(( void (*) (Transform_1_t1902 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)(L_12, (Object_t *)NULL, (IntPtr_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		((Dictionary_2_t1901_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16)->static_fields)->___U3CU3Ef__amU24cacheB_15 = L_12;
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = ((Dictionary_2_t1901 *)(G_B4_2));
	}

IL_0046:
	{
		Transform_1_t1902 * L_13 = ((Dictionary_2_t1901_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16)->static_fields)->___U3CU3Ef__amU24cacheB_15;
		NullCheck((Dictionary_2_t1901 *)G_B5_2);
		(( void (*) (Dictionary_2_t1901 *, DictionaryEntryU5BU5D_t2442*, int32_t, Transform_1_t1902 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)->method)((Dictionary_2_t1901 *)G_B5_2, (DictionaryEntryU5BU5D_t2442*)G_B5_1, (int32_t)G_B5_0, (Transform_1_t1902 *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20));
		return;
	}

IL_0051:
	{
		Array_t * L_14 = ___array;
		int32_t L_15 = ___index;
		IntPtr_t L_16 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21) };
		Transform_1_t1910 * L_17 = (Transform_1_t1910 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22));
		(( void (*) (Transform_1_t1910 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23)->method)(L_17, (Object_t *)NULL, (IntPtr_t)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23));
		NullCheck((Dictionary_2_t1901 *)__this);
		(( void (*) (Dictionary_2_t1901 *, Array_t *, int32_t, Transform_1_t1910 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)->method)((Dictionary_2_t1901 *)__this, (Array_t *)L_14, (int32_t)L_15, (Transform_1_t1910 *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12374_gshared (Dictionary_2_t1901 * __this, const MethodInfo* method)
{
	{
		Enumerator_t1908  L_0 = {0};
		(( void (*) (Enumerator_t1908 *, Dictionary_2_t1901 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)(&L_0, (Dictionary_2_t1901 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		Enumerator_t1908  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12375_gshared (Dictionary_2_t1901 * __this, const MethodInfo* method)
{
	{
		Enumerator_t1908  L_0 = {0};
		(( void (*) (Enumerator_t1908 *, Dictionary_2_t1901 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)(&L_0, (Dictionary_2_t1901 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		Enumerator_t1908  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12376_gshared (Dictionary_2_t1901 * __this, const MethodInfo* method)
{
	{
		ShimEnumerator_t1911 * L_0 = (ShimEnumerator_t1911 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
		(( void (*) (ShimEnumerator_t1911 *, Dictionary_2_t1901 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28)->method)(L_0, (Dictionary_2_t1901 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m12377_gshared (Dictionary_2_t1901 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->___count_10);
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t677_il2cpp_TypeInfo_var;
extern TypeInfo* KeyNotFoundException_t1175_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral711;
extern "C" int32_t Dictionary_2_get_Item_m12378_gshared (Dictionary_2_t1901 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t677_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		KeyNotFoundException_t1175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2659);
		_stringLiteral711 = il2cpp_codegen_string_literal_from_index(711);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t677 * L_1 = (ArgumentNullException_t677 *)il2cpp_codegen_object_new (ArgumentNullException_t677_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3666(L_1, (String_t*)_stringLiteral711, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		Object_t * L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), (Object_t*)L_2, (Object_t *)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t107* L_5 = (Int32U5BU5D_t107*)(__this->___table_4);
		int32_t L_6 = V_0;
		Int32U5BU5D_t107* L_7 = (Int32U5BU5D_t107*)(__this->___table_4);
		NullCheck(L_7);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))));
		int32_t L_8 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_8, sizeof(int32_t)))-(int32_t)1));
		goto IL_009b;
	}

IL_0048:
	{
		LinkU5BU5D_t1870* L_9 = (LinkU5BU5D_t1870*)(__this->___linkSlots_5);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = (int32_t)(((Link_t1174 *)(Link_t1174 *)SZArrayLdElema(L_9, L_10, sizeof(Link_t1174 )))->___HashCode_0);
		int32_t L_12 = V_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_0089;
		}
	}
	{
		Object_t* L_13 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t78* L_14 = (ObjectU5BU5D_t78*)(__this->___keySlots_6);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		Object_t * L_17 = ___key;
		NullCheck((Object_t*)L_13);
		bool L_18 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), (Object_t*)L_13, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_14, L_16, sizeof(Object_t *))), (Object_t *)L_17);
		if (!L_18)
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t107* L_19 = (Int32U5BU5D_t107*)(__this->___valueSlots_7);
		int32_t L_20 = V_1;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		int32_t L_21 = L_20;
		return (*(int32_t*)(int32_t*)SZArrayLdElema(L_19, L_21, sizeof(int32_t)));
	}

IL_0089:
	{
		LinkU5BU5D_t1870* L_22 = (LinkU5BU5D_t1870*)(__this->___linkSlots_5);
		int32_t L_23 = V_1;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = (int32_t)(((Link_t1174 *)(Link_t1174 *)SZArrayLdElema(L_22, L_23, sizeof(Link_t1174 )))->___Next_1);
		V_1 = (int32_t)L_24;
	}

IL_009b:
	{
		int32_t L_25 = V_1;
		if ((!(((uint32_t)L_25) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}
	{
		KeyNotFoundException_t1175 * L_26 = (KeyNotFoundException_t1175 *)il2cpp_codegen_object_new (KeyNotFoundException_t1175_il2cpp_TypeInfo_var);
		KeyNotFoundException__ctor_m7077(L_26, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_26);
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern TypeInfo* ArgumentNullException_t677_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral711;
extern "C" void Dictionary_2_set_Item_m12379_gshared (Dictionary_2_t1901 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t677_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		_stringLiteral711 = il2cpp_codegen_string_literal_from_index(711);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t677 * L_1 = (ArgumentNullException_t677 *)il2cpp_codegen_object_new (ArgumentNullException_t677_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3666(L_1, (String_t*)_stringLiteral711, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		Object_t * L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), (Object_t*)L_2, (Object_t *)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		int32_t L_5 = V_0;
		Int32U5BU5D_t107* L_6 = (Int32U5BU5D_t107*)(__this->___table_4);
		NullCheck(L_6);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))));
		Int32U5BU5D_t107* L_7 = (Int32U5BU5D_t107*)(__this->___table_4);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_9, sizeof(int32_t)))-(int32_t)1));
		V_3 = (int32_t)(-1);
		int32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)(-1))))
		{
			goto IL_00a2;
		}
	}

IL_004e:
	{
		LinkU5BU5D_t1870* L_11 = (LinkU5BU5D_t1870*)(__this->___linkSlots_5);
		int32_t L_12 = V_2;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (int32_t)(((Link_t1174 *)(Link_t1174 *)SZArrayLdElema(L_11, L_12, sizeof(Link_t1174 )))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0087;
		}
	}
	{
		Object_t* L_15 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t78* L_16 = (ObjectU5BU5D_t78*)(__this->___keySlots_6);
		int32_t L_17 = V_2;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		Object_t * L_19 = ___key;
		NullCheck((Object_t*)L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), (Object_t*)L_15, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_16, L_18, sizeof(Object_t *))), (Object_t *)L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		goto IL_00a2;
	}

IL_0087:
	{
		int32_t L_21 = V_2;
		V_3 = (int32_t)L_21;
		LinkU5BU5D_t1870* L_22 = (LinkU5BU5D_t1870*)(__this->___linkSlots_5);
		int32_t L_23 = V_2;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = (int32_t)(((Link_t1174 *)(Link_t1174 *)SZArrayLdElema(L_22, L_23, sizeof(Link_t1174 )))->___Next_1);
		V_2 = (int32_t)L_24;
		int32_t L_25 = V_2;
		if ((!(((uint32_t)L_25) == ((uint32_t)(-1)))))
		{
			goto IL_004e;
		}
	}

IL_00a2:
	{
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0166;
		}
	}
	{
		int32_t L_27 = (int32_t)(__this->___count_10);
		int32_t L_28 = (int32_t)((int32_t)((int32_t)L_27+(int32_t)1));
		V_4 = (int32_t)L_28;
		__this->___count_10 = L_28;
		int32_t L_29 = V_4;
		int32_t L_30 = (int32_t)(__this->___threshold_11);
		if ((((int32_t)L_29) <= ((int32_t)L_30)))
		{
			goto IL_00de;
		}
	}
	{
		NullCheck((Dictionary_2_t1901 *)__this);
		(( void (*) (Dictionary_2_t1901 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30)->method)((Dictionary_2_t1901 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		int32_t L_31 = V_0;
		Int32U5BU5D_t107* L_32 = (Int32U5BU5D_t107*)(__this->___table_4);
		NullCheck(L_32);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_31&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_32)->max_length)))));
	}

IL_00de:
	{
		int32_t L_33 = (int32_t)(__this->___emptySlot_9);
		V_2 = (int32_t)L_33;
		int32_t L_34 = V_2;
		if ((!(((uint32_t)L_34) == ((uint32_t)(-1)))))
		{
			goto IL_0105;
		}
	}
	{
		int32_t L_35 = (int32_t)(__this->___touchedSlots_8);
		int32_t L_36 = (int32_t)L_35;
		V_4 = (int32_t)L_36;
		__this->___touchedSlots_8 = ((int32_t)((int32_t)L_36+(int32_t)1));
		int32_t L_37 = V_4;
		V_2 = (int32_t)L_37;
		goto IL_011c;
	}

IL_0105:
	{
		LinkU5BU5D_t1870* L_38 = (LinkU5BU5D_t1870*)(__this->___linkSlots_5);
		int32_t L_39 = V_2;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, L_39);
		int32_t L_40 = (int32_t)(((Link_t1174 *)(Link_t1174 *)SZArrayLdElema(L_38, L_39, sizeof(Link_t1174 )))->___Next_1);
		__this->___emptySlot_9 = L_40;
	}

IL_011c:
	{
		LinkU5BU5D_t1870* L_41 = (LinkU5BU5D_t1870*)(__this->___linkSlots_5);
		int32_t L_42 = V_2;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, L_42);
		Int32U5BU5D_t107* L_43 = (Int32U5BU5D_t107*)(__this->___table_4);
		int32_t L_44 = V_1;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, L_44);
		int32_t L_45 = L_44;
		((Link_t1174 *)(Link_t1174 *)SZArrayLdElema(L_41, L_42, sizeof(Link_t1174 )))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_43, L_45, sizeof(int32_t)))-(int32_t)1));
		Int32U5BU5D_t107* L_46 = (Int32U5BU5D_t107*)(__this->___table_4);
		int32_t L_47 = V_1;
		int32_t L_48 = V_2;
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, L_47);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_46, L_47, sizeof(int32_t))) = (int32_t)((int32_t)((int32_t)L_48+(int32_t)1));
		LinkU5BU5D_t1870* L_49 = (LinkU5BU5D_t1870*)(__this->___linkSlots_5);
		int32_t L_50 = V_2;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, L_50);
		int32_t L_51 = V_0;
		((Link_t1174 *)(Link_t1174 *)SZArrayLdElema(L_49, L_50, sizeof(Link_t1174 )))->___HashCode_0 = L_51;
		ObjectU5BU5D_t78* L_52 = (ObjectU5BU5D_t78*)(__this->___keySlots_6);
		int32_t L_53 = V_2;
		Object_t * L_54 = ___key;
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, L_53);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_52, L_53, sizeof(Object_t *))) = (Object_t *)L_54;
		goto IL_01b5;
	}

IL_0166:
	{
		int32_t L_55 = V_3;
		if ((((int32_t)L_55) == ((int32_t)(-1))))
		{
			goto IL_01b5;
		}
	}
	{
		LinkU5BU5D_t1870* L_56 = (LinkU5BU5D_t1870*)(__this->___linkSlots_5);
		int32_t L_57 = V_3;
		NullCheck(L_56);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_56, L_57);
		LinkU5BU5D_t1870* L_58 = (LinkU5BU5D_t1870*)(__this->___linkSlots_5);
		int32_t L_59 = V_2;
		NullCheck(L_58);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_58, L_59);
		int32_t L_60 = (int32_t)(((Link_t1174 *)(Link_t1174 *)SZArrayLdElema(L_58, L_59, sizeof(Link_t1174 )))->___Next_1);
		((Link_t1174 *)(Link_t1174 *)SZArrayLdElema(L_56, L_57, sizeof(Link_t1174 )))->___Next_1 = L_60;
		LinkU5BU5D_t1870* L_61 = (LinkU5BU5D_t1870*)(__this->___linkSlots_5);
		int32_t L_62 = V_2;
		NullCheck(L_61);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_61, L_62);
		Int32U5BU5D_t107* L_63 = (Int32U5BU5D_t107*)(__this->___table_4);
		int32_t L_64 = V_1;
		NullCheck(L_63);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_63, L_64);
		int32_t L_65 = L_64;
		((Link_t1174 *)(Link_t1174 *)SZArrayLdElema(L_61, L_62, sizeof(Link_t1174 )))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_63, L_65, sizeof(int32_t)))-(int32_t)1));
		Int32U5BU5D_t107* L_66 = (Int32U5BU5D_t107*)(__this->___table_4);
		int32_t L_67 = V_1;
		int32_t L_68 = V_2;
		NullCheck(L_66);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_66, L_67);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_66, L_67, sizeof(int32_t))) = (int32_t)((int32_t)((int32_t)L_68+(int32_t)1));
	}

IL_01b5:
	{
		Int32U5BU5D_t107* L_69 = (Int32U5BU5D_t107*)(__this->___valueSlots_7);
		int32_t L_70 = V_2;
		int32_t L_71 = ___value;
		NullCheck(L_69);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_69, L_70);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_69, L_70, sizeof(int32_t))) = (int32_t)L_71;
		int32_t L_72 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_72+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentOutOfRangeException_t708_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1325;
extern "C" void Dictionary_2_Init_m12380_gshared (Dictionary_2_t1901 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(432);
		_stringLiteral1325 = il2cpp_codegen_string_literal_from_index(1325);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	Dictionary_2_t1901 * G_B4_0 = {0};
	Dictionary_2_t1901 * G_B3_0 = {0};
	Object_t* G_B5_0 = {0};
	Dictionary_2_t1901 * G_B5_1 = {0};
	{
		int32_t L_0 = ___capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ArgumentOutOfRangeException_t708 * L_1 = (ArgumentOutOfRangeException_t708 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t708_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m4630(L_1, (String_t*)_stringLiteral1325, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0012:
	{
		Object_t* L_2 = ___hcp;
		G_B3_0 = ((Dictionary_2_t1901 *)(__this));
		if (!L_2)
		{
			G_B4_0 = ((Dictionary_2_t1901 *)(__this));
			goto IL_0021;
		}
	}
	{
		Object_t* L_3 = ___hcp;
		V_0 = (Object_t*)L_3;
		Object_t* L_4 = V_0;
		G_B5_0 = L_4;
		G_B5_1 = ((Dictionary_2_t1901 *)(G_B3_0));
		goto IL_0026;
	}

IL_0021:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		EqualityComparer_1_t1777 * L_5 = (( EqualityComparer_1_t1777 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31));
		G_B5_0 = ((Object_t*)(L_5));
		G_B5_1 = ((Dictionary_2_t1901 *)(G_B4_0));
	}

IL_0026:
	{
		NullCheck(G_B5_1);
		G_B5_1->___hcp_12 = G_B5_0;
		int32_t L_6 = ___capacity;
		if (L_6)
		{
			goto IL_0035;
		}
	}
	{
		___capacity = (int32_t)((int32_t)10);
	}

IL_0035:
	{
		int32_t L_7 = ___capacity;
		___capacity = (int32_t)((int32_t)((int32_t)(((int32_t)((float)((float)(((float)L_7))/(float)(0.9f)))))+(int32_t)1));
		int32_t L_8 = ___capacity;
		NullCheck((Dictionary_2_t1901 *)__this);
		(( void (*) (Dictionary_2_t1901 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33)->method)((Dictionary_2_t1901 *)__this, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		__this->___generation_14 = 0;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern TypeInfo* Int32U5BU5D_t107_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t1870_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_InitArrays_m12381_gshared (Dictionary_2_t1901 * __this, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t107_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(55);
		LinkU5BU5D_t1870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2660);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___size;
		__this->___table_4 = ((Int32U5BU5D_t107*)SZArrayNew(Int32U5BU5D_t107_il2cpp_TypeInfo_var, L_0));
		int32_t L_1 = ___size;
		__this->___linkSlots_5 = ((LinkU5BU5D_t1870*)SZArrayNew(LinkU5BU5D_t1870_il2cpp_TypeInfo_var, L_1));
		__this->___emptySlot_9 = (-1);
		int32_t L_2 = ___size;
		__this->___keySlots_6 = ((ObjectU5BU5D_t78*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34), L_2));
		int32_t L_3 = ___size;
		__this->___valueSlots_7 = ((Int32U5BU5D_t107*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_3));
		__this->___touchedSlots_8 = 0;
		Int32U5BU5D_t107* L_4 = (Int32U5BU5D_t107*)(__this->___table_4);
		NullCheck(L_4);
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)(((int32_t)(((Array_t *)L_4)->max_length)))))*(float)(0.9f)))));
		int32_t L_5 = (int32_t)(__this->___threshold_11);
		if (L_5)
		{
			goto IL_0074;
		}
	}
	{
		Int32U5BU5D_t107* L_6 = (Int32U5BU5D_t107*)(__this->___table_4);
		NullCheck(L_6);
		if ((((int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		__this->___threshold_11 = 1;
	}

IL_0074:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t677_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t708_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t402_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral713;
extern Il2CppCodeGenString* _stringLiteral715;
extern Il2CppCodeGenString* _stringLiteral2802;
extern Il2CppCodeGenString* _stringLiteral2803;
extern "C" void Dictionary_2_CopyToCheck_m12382_gshared (Dictionary_2_t1901 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t677_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		ArgumentOutOfRangeException_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(432);
		ArgumentException_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(269);
		_stringLiteral713 = il2cpp_codegen_string_literal_from_index(713);
		_stringLiteral715 = il2cpp_codegen_string_literal_from_index(715);
		_stringLiteral2802 = il2cpp_codegen_string_literal_from_index(2802);
		_stringLiteral2803 = il2cpp_codegen_string_literal_from_index(2803);
		s_Il2CppMethodIntialized = true;
	}
	{
		Array_t * L_0 = ___array;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t677 * L_1 = (ArgumentNullException_t677 *)il2cpp_codegen_object_new (ArgumentNullException_t677_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3666(L_1, (String_t*)_stringLiteral713, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		int32_t L_2 = ___index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		ArgumentOutOfRangeException_t708 * L_3 = (ArgumentOutOfRangeException_t708 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t708_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m4630(L_3, (String_t*)_stringLiteral715, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_0023:
	{
		int32_t L_4 = ___index;
		Array_t * L_5 = ___array;
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m5638((Array_t *)L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)L_6)))
		{
			goto IL_003a;
		}
	}
	{
		ArgumentException_t402 * L_7 = (ArgumentException_t402 *)il2cpp_codegen_object_new (ArgumentException_t402_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2370(L_7, (String_t*)_stringLiteral2802, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_7);
	}

IL_003a:
	{
		Array_t * L_8 = ___array;
		NullCheck((Array_t *)L_8);
		int32_t L_9 = Array_get_Length_m5638((Array_t *)L_8, /*hidden argument*/NULL);
		int32_t L_10 = ___index;
		NullCheck((Dictionary_2_t1901 *)__this);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count() */, (Dictionary_2_t1901 *)__this);
		if ((((int32_t)((int32_t)((int32_t)L_9-(int32_t)L_10))) >= ((int32_t)L_11)))
		{
			goto IL_0058;
		}
	}
	{
		ArgumentException_t402 * L_12 = (ArgumentException_t402 *)il2cpp_codegen_object_new (ArgumentException_t402_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2370(L_12, (String_t*)_stringLiteral2803, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_12);
	}

IL_0058:
	{
		return;
	}
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1904  Dictionary_2_make_pair_m12383_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		int32_t L_1 = ___value;
		KeyValuePair_2_t1904  L_2 = {0};
		(( void (*) (KeyValuePair_2_t1904 *, Object_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)(&L_2, (Object_t *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		return L_2;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m12384_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		return L_0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m12385_gshared (Dictionary_2_t1901 * __this, KeyValuePair_2U5BU5D_t2364* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t2364* L_0 = ___array;
		int32_t L_1 = ___index;
		NullCheck((Dictionary_2_t1901 *)__this);
		(( void (*) (Dictionary_2_t1901 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((Dictionary_2_t1901 *)__this, (Array_t *)(Array_t *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		KeyValuePair_2U5BU5D_t2364* L_2 = ___array;
		int32_t L_3 = ___index;
		IntPtr_t L_4 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21) };
		Transform_1_t1910 * L_5 = (Transform_1_t1910 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22));
		(( void (*) (Transform_1_t1910 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23)->method)(L_5, (Object_t *)NULL, (IntPtr_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23));
		NullCheck((Dictionary_2_t1901 *)__this);
		(( void (*) (Dictionary_2_t1901 *, KeyValuePair_2U5BU5D_t2364*, int32_t, Transform_1_t1910 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39)->method)((Dictionary_2_t1901 *)__this, (KeyValuePair_2U5BU5D_t2364*)L_2, (int32_t)L_3, (Transform_1_t1910 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
extern TypeInfo* Hashtable_t789_il2cpp_TypeInfo_var;
extern TypeInfo* Int32U5BU5D_t107_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t1870_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Resize_m12386_gshared (Dictionary_2_t1901 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t789_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(524);
		Int32U5BU5D_t107_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(55);
		LinkU5BU5D_t1870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2660);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t107* V_1 = {0};
	LinkU5BU5D_t1870* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	ObjectU5BU5D_t78* V_7 = {0};
	Int32U5BU5D_t107* V_8 = {0};
	int32_t V_9 = 0;
	{
		Int32U5BU5D_t107* L_0 = (Int32U5BU5D_t107*)(__this->___table_4);
		NullCheck(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Hashtable_t789_il2cpp_TypeInfo_var);
		int32_t L_1 = Hashtable_ToPrime_m7311(NULL /*static, unused*/, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))<<(int32_t)1))|(int32_t)1)), /*hidden argument*/NULL);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		V_1 = (Int32U5BU5D_t107*)((Int32U5BU5D_t107*)SZArrayNew(Int32U5BU5D_t107_il2cpp_TypeInfo_var, L_2));
		int32_t L_3 = V_0;
		V_2 = (LinkU5BU5D_t1870*)((LinkU5BU5D_t1870*)SZArrayNew(LinkU5BU5D_t1870_il2cpp_TypeInfo_var, L_3));
		V_3 = (int32_t)0;
		goto IL_00b1;
	}

IL_0027:
	{
		Int32U5BU5D_t107* L_4 = (Int32U5BU5D_t107*)(__this->___table_4);
		int32_t L_5 = V_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		V_4 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6, sizeof(int32_t)))-(int32_t)1));
		goto IL_00a5;
	}

IL_0038:
	{
		LinkU5BU5D_t1870* L_7 = V_2;
		int32_t L_8 = V_4;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		Object_t* L_9 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t78* L_10 = (ObjectU5BU5D_t78*)(__this->___keySlots_6);
		int32_t L_11 = V_4;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((Object_t*)L_9);
		int32_t L_13 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), (Object_t*)L_9, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_10, L_12, sizeof(Object_t *))));
		int32_t L_14 = (int32_t)((int32_t)((int32_t)L_13|(int32_t)((int32_t)-2147483648)));
		V_9 = (int32_t)L_14;
		((Link_t1174 *)(Link_t1174 *)SZArrayLdElema(L_7, L_8, sizeof(Link_t1174 )))->___HashCode_0 = L_14;
		int32_t L_15 = V_9;
		V_5 = (int32_t)L_15;
		int32_t L_16 = V_5;
		int32_t L_17 = V_0;
		V_6 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_16&(int32_t)((int32_t)2147483647)))%(int32_t)L_17));
		LinkU5BU5D_t1870* L_18 = V_2;
		int32_t L_19 = V_4;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		Int32U5BU5D_t107* L_20 = V_1;
		int32_t L_21 = V_6;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		((Link_t1174 *)(Link_t1174 *)SZArrayLdElema(L_18, L_19, sizeof(Link_t1174 )))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_20, L_22, sizeof(int32_t)))-(int32_t)1));
		Int32U5BU5D_t107* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = V_4;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_23, L_24, sizeof(int32_t))) = (int32_t)((int32_t)((int32_t)L_25+(int32_t)1));
		LinkU5BU5D_t1870* L_26 = (LinkU5BU5D_t1870*)(__this->___linkSlots_5);
		int32_t L_27 = V_4;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_27);
		int32_t L_28 = (int32_t)(((Link_t1174 *)(Link_t1174 *)SZArrayLdElema(L_26, L_27, sizeof(Link_t1174 )))->___Next_1);
		V_4 = (int32_t)L_28;
	}

IL_00a5:
	{
		int32_t L_29 = V_4;
		if ((!(((uint32_t)L_29) == ((uint32_t)(-1)))))
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_30 = V_3;
		V_3 = (int32_t)((int32_t)((int32_t)L_30+(int32_t)1));
	}

IL_00b1:
	{
		int32_t L_31 = V_3;
		Int32U5BU5D_t107* L_32 = (Int32U5BU5D_t107*)(__this->___table_4);
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)(((Array_t *)L_32)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		Int32U5BU5D_t107* L_33 = V_1;
		__this->___table_4 = L_33;
		LinkU5BU5D_t1870* L_34 = V_2;
		__this->___linkSlots_5 = L_34;
		int32_t L_35 = V_0;
		V_7 = (ObjectU5BU5D_t78*)((ObjectU5BU5D_t78*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34), L_35));
		int32_t L_36 = V_0;
		V_8 = (Int32U5BU5D_t107*)((Int32U5BU5D_t107*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_36));
		ObjectU5BU5D_t78* L_37 = (ObjectU5BU5D_t78*)(__this->___keySlots_6);
		ObjectU5BU5D_t78* L_38 = V_7;
		int32_t L_39 = (int32_t)(__this->___touchedSlots_8);
		Array_Copy_m6432(NULL /*static, unused*/, (Array_t *)(Array_t *)L_37, (int32_t)0, (Array_t *)(Array_t *)L_38, (int32_t)0, (int32_t)L_39, /*hidden argument*/NULL);
		Int32U5BU5D_t107* L_40 = (Int32U5BU5D_t107*)(__this->___valueSlots_7);
		Int32U5BU5D_t107* L_41 = V_8;
		int32_t L_42 = (int32_t)(__this->___touchedSlots_8);
		Array_Copy_m6432(NULL /*static, unused*/, (Array_t *)(Array_t *)L_40, (int32_t)0, (Array_t *)(Array_t *)L_41, (int32_t)0, (int32_t)L_42, /*hidden argument*/NULL);
		ObjectU5BU5D_t78* L_43 = V_7;
		__this->___keySlots_6 = L_43;
		Int32U5BU5D_t107* L_44 = V_8;
		__this->___valueSlots_7 = L_44;
		int32_t L_45 = V_0;
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)L_45))*(float)(0.9f)))));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern TypeInfo* ArgumentNullException_t677_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t402_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral711;
extern Il2CppCodeGenString* _stringLiteral2804;
extern "C" void Dictionary_2_Add_m12387_gshared (Dictionary_2_t1901 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t677_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		ArgumentException_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(269);
		_stringLiteral711 = il2cpp_codegen_string_literal_from_index(711);
		_stringLiteral2804 = il2cpp_codegen_string_literal_from_index(2804);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t677 * L_1 = (ArgumentNullException_t677 *)il2cpp_codegen_object_new (ArgumentNullException_t677_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3666(L_1, (String_t*)_stringLiteral711, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		Object_t * L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), (Object_t*)L_2, (Object_t *)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		int32_t L_5 = V_0;
		Int32U5BU5D_t107* L_6 = (Int32U5BU5D_t107*)(__this->___table_4);
		NullCheck(L_6);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))));
		Int32U5BU5D_t107* L_7 = (Int32U5BU5D_t107*)(__this->___table_4);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_9, sizeof(int32_t)))-(int32_t)1));
		goto IL_009b;
	}

IL_004a:
	{
		LinkU5BU5D_t1870* L_10 = (LinkU5BU5D_t1870*)(__this->___linkSlots_5);
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (int32_t)(((Link_t1174 *)(Link_t1174 *)SZArrayLdElema(L_10, L_11, sizeof(Link_t1174 )))->___HashCode_0);
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0089;
		}
	}
	{
		Object_t* L_14 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t78* L_15 = (ObjectU5BU5D_t78*)(__this->___keySlots_6);
		int32_t L_16 = V_2;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		Object_t * L_18 = ___key;
		NullCheck((Object_t*)L_14);
		bool L_19 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), (Object_t*)L_14, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_15, L_17, sizeof(Object_t *))), (Object_t *)L_18);
		if (!L_19)
		{
			goto IL_0089;
		}
	}
	{
		ArgumentException_t402 * L_20 = (ArgumentException_t402 *)il2cpp_codegen_object_new (ArgumentException_t402_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2370(L_20, (String_t*)_stringLiteral2804, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_20);
	}

IL_0089:
	{
		LinkU5BU5D_t1870* L_21 = (LinkU5BU5D_t1870*)(__this->___linkSlots_5);
		int32_t L_22 = V_2;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = (int32_t)(((Link_t1174 *)(Link_t1174 *)SZArrayLdElema(L_21, L_22, sizeof(Link_t1174 )))->___Next_1);
		V_2 = (int32_t)L_23;
	}

IL_009b:
	{
		int32_t L_24 = V_2;
		if ((!(((uint32_t)L_24) == ((uint32_t)(-1)))))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_25 = (int32_t)(__this->___count_10);
		int32_t L_26 = (int32_t)((int32_t)((int32_t)L_25+(int32_t)1));
		V_3 = (int32_t)L_26;
		__this->___count_10 = L_26;
		int32_t L_27 = V_3;
		int32_t L_28 = (int32_t)(__this->___threshold_11);
		if ((((int32_t)L_27) <= ((int32_t)L_28)))
		{
			goto IL_00d5;
		}
	}
	{
		NullCheck((Dictionary_2_t1901 *)__this);
		(( void (*) (Dictionary_2_t1901 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30)->method)((Dictionary_2_t1901 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		int32_t L_29 = V_0;
		Int32U5BU5D_t107* L_30 = (Int32U5BU5D_t107*)(__this->___table_4);
		NullCheck(L_30);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_29&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_30)->max_length)))));
	}

IL_00d5:
	{
		int32_t L_31 = (int32_t)(__this->___emptySlot_9);
		V_2 = (int32_t)L_31;
		int32_t L_32 = V_2;
		if ((!(((uint32_t)L_32) == ((uint32_t)(-1)))))
		{
			goto IL_00fa;
		}
	}
	{
		int32_t L_33 = (int32_t)(__this->___touchedSlots_8);
		int32_t L_34 = (int32_t)L_33;
		V_3 = (int32_t)L_34;
		__this->___touchedSlots_8 = ((int32_t)((int32_t)L_34+(int32_t)1));
		int32_t L_35 = V_3;
		V_2 = (int32_t)L_35;
		goto IL_0111;
	}

IL_00fa:
	{
		LinkU5BU5D_t1870* L_36 = (LinkU5BU5D_t1870*)(__this->___linkSlots_5);
		int32_t L_37 = V_2;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, L_37);
		int32_t L_38 = (int32_t)(((Link_t1174 *)(Link_t1174 *)SZArrayLdElema(L_36, L_37, sizeof(Link_t1174 )))->___Next_1);
		__this->___emptySlot_9 = L_38;
	}

IL_0111:
	{
		LinkU5BU5D_t1870* L_39 = (LinkU5BU5D_t1870*)(__this->___linkSlots_5);
		int32_t L_40 = V_2;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, L_40);
		int32_t L_41 = V_0;
		((Link_t1174 *)(Link_t1174 *)SZArrayLdElema(L_39, L_40, sizeof(Link_t1174 )))->___HashCode_0 = L_41;
		LinkU5BU5D_t1870* L_42 = (LinkU5BU5D_t1870*)(__this->___linkSlots_5);
		int32_t L_43 = V_2;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, L_43);
		Int32U5BU5D_t107* L_44 = (Int32U5BU5D_t107*)(__this->___table_4);
		int32_t L_45 = V_1;
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, L_45);
		int32_t L_46 = L_45;
		((Link_t1174 *)(Link_t1174 *)SZArrayLdElema(L_42, L_43, sizeof(Link_t1174 )))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_44, L_46, sizeof(int32_t)))-(int32_t)1));
		Int32U5BU5D_t107* L_47 = (Int32U5BU5D_t107*)(__this->___table_4);
		int32_t L_48 = V_1;
		int32_t L_49 = V_2;
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, L_48);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_47, L_48, sizeof(int32_t))) = (int32_t)((int32_t)((int32_t)L_49+(int32_t)1));
		ObjectU5BU5D_t78* L_50 = (ObjectU5BU5D_t78*)(__this->___keySlots_6);
		int32_t L_51 = V_2;
		Object_t * L_52 = ___key;
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, L_51);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_50, L_51, sizeof(Object_t *))) = (Object_t *)L_52;
		Int32U5BU5D_t107* L_53 = (Int32U5BU5D_t107*)(__this->___valueSlots_7);
		int32_t L_54 = V_2;
		int32_t L_55 = ___value;
		NullCheck(L_53);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_53, L_54);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_53, L_54, sizeof(int32_t))) = (int32_t)L_55;
		int32_t L_56 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_56+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m12388_gshared (Dictionary_2_t1901 * __this, const MethodInfo* method)
{
	{
		__this->___count_10 = 0;
		Int32U5BU5D_t107* L_0 = (Int32U5BU5D_t107*)(__this->___table_4);
		Int32U5BU5D_t107* L_1 = (Int32U5BU5D_t107*)(__this->___table_4);
		NullCheck(L_1);
		Array_Clear_m3744(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/NULL);
		ObjectU5BU5D_t78* L_2 = (ObjectU5BU5D_t78*)(__this->___keySlots_6);
		ObjectU5BU5D_t78* L_3 = (ObjectU5BU5D_t78*)(__this->___keySlots_6);
		NullCheck(L_3);
		Array_Clear_m3744(NULL /*static, unused*/, (Array_t *)(Array_t *)L_2, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_3)->max_length))), /*hidden argument*/NULL);
		Int32U5BU5D_t107* L_4 = (Int32U5BU5D_t107*)(__this->___valueSlots_7);
		Int32U5BU5D_t107* L_5 = (Int32U5BU5D_t107*)(__this->___valueSlots_7);
		NullCheck(L_5);
		Array_Clear_m3744(NULL /*static, unused*/, (Array_t *)(Array_t *)L_4, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_5)->max_length))), /*hidden argument*/NULL);
		LinkU5BU5D_t1870* L_6 = (LinkU5BU5D_t1870*)(__this->___linkSlots_5);
		LinkU5BU5D_t1870* L_7 = (LinkU5BU5D_t1870*)(__this->___linkSlots_5);
		NullCheck(L_7);
		Array_Clear_m3744(NULL /*static, unused*/, (Array_t *)(Array_t *)L_6, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_7)->max_length))), /*hidden argument*/NULL);
		__this->___emptySlot_9 = (-1);
		__this->___touchedSlots_8 = 0;
		int32_t L_8 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_8+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern TypeInfo* ArgumentNullException_t677_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral711;
extern "C" bool Dictionary_2_ContainsKey_m12389_gshared (Dictionary_2_t1901 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t677_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		_stringLiteral711 = il2cpp_codegen_string_literal_from_index(711);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t677 * L_1 = (ArgumentNullException_t677 *)il2cpp_codegen_object_new (ArgumentNullException_t677_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3666(L_1, (String_t*)_stringLiteral711, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		Object_t * L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), (Object_t*)L_2, (Object_t *)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t107* L_5 = (Int32U5BU5D_t107*)(__this->___table_4);
		int32_t L_6 = V_0;
		Int32U5BU5D_t107* L_7 = (Int32U5BU5D_t107*)(__this->___table_4);
		NullCheck(L_7);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))));
		int32_t L_8 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_8, sizeof(int32_t)))-(int32_t)1));
		goto IL_0090;
	}

IL_0048:
	{
		LinkU5BU5D_t1870* L_9 = (LinkU5BU5D_t1870*)(__this->___linkSlots_5);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = (int32_t)(((Link_t1174 *)(Link_t1174 *)SZArrayLdElema(L_9, L_10, sizeof(Link_t1174 )))->___HashCode_0);
		int32_t L_12 = V_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_007e;
		}
	}
	{
		Object_t* L_13 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t78* L_14 = (ObjectU5BU5D_t78*)(__this->___keySlots_6);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		Object_t * L_17 = ___key;
		NullCheck((Object_t*)L_13);
		bool L_18 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), (Object_t*)L_13, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_14, L_16, sizeof(Object_t *))), (Object_t *)L_17);
		if (!L_18)
		{
			goto IL_007e;
		}
	}
	{
		return 1;
	}

IL_007e:
	{
		LinkU5BU5D_t1870* L_19 = (LinkU5BU5D_t1870*)(__this->___linkSlots_5);
		int32_t L_20 = V_1;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		int32_t L_21 = (int32_t)(((Link_t1174 *)(Link_t1174 *)SZArrayLdElema(L_19, L_20, sizeof(Link_t1174 )))->___Next_1);
		V_1 = (int32_t)L_21;
	}

IL_0090:
	{
		int32_t L_22 = V_1;
		if ((!(((uint32_t)L_22) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m12390_gshared (Dictionary_2_t1901 * __this, int32_t ___value, const MethodInfo* method)
{
	Object_t* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41));
		EqualityComparer_1_t1886 * L_0 = (( EqualityComparer_1_t1886 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40));
		V_0 = (Object_t*)L_0;
		V_1 = (int32_t)0;
		goto IL_0054;
	}

IL_000d:
	{
		Int32U5BU5D_t107* L_1 = (Int32U5BU5D_t107*)(__this->___table_4);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_3, sizeof(int32_t)))-(int32_t)1));
		goto IL_0049;
	}

IL_001d:
	{
		Object_t* L_4 = V_0;
		Int32U5BU5D_t107* L_5 = (Int32U5BU5D_t107*)(__this->___valueSlots_7);
		int32_t L_6 = V_2;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		int32_t L_8 = ___value;
		NullCheck((Object_t*)L_4);
		bool L_9 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int32>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 42), (Object_t*)L_4, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_7, sizeof(int32_t))), (int32_t)L_8);
		if (!L_9)
		{
			goto IL_0037;
		}
	}
	{
		return 1;
	}

IL_0037:
	{
		LinkU5BU5D_t1870* L_10 = (LinkU5BU5D_t1870*)(__this->___linkSlots_5);
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (int32_t)(((Link_t1174 *)(Link_t1174 *)SZArrayLdElema(L_10, L_11, sizeof(Link_t1174 )))->___Next_1);
		V_2 = (int32_t)L_12;
	}

IL_0049:
	{
		int32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)(-1)))))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_14 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0054:
	{
		int32_t L_15 = V_1;
		Int32U5BU5D_t107* L_16 = (Int32U5BU5D_t107*)(__this->___table_4);
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t677_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral724;
extern Il2CppCodeGenString* _stringLiteral726;
extern Il2CppCodeGenString* _stringLiteral728;
extern Il2CppCodeGenString* _stringLiteral1359;
extern Il2CppCodeGenString* _stringLiteral2805;
extern "C" void Dictionary_2_GetObjectData_m12391_gshared (Dictionary_2_t1901 * __this, SerializationInfo_t647 * ___info, StreamingContext_t648  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t677_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		_stringLiteral724 = il2cpp_codegen_string_literal_from_index(724);
		_stringLiteral726 = il2cpp_codegen_string_literal_from_index(726);
		_stringLiteral728 = il2cpp_codegen_string_literal_from_index(728);
		_stringLiteral1359 = il2cpp_codegen_string_literal_from_index(1359);
		_stringLiteral2805 = il2cpp_codegen_string_literal_from_index(2805);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2U5BU5D_t2364* V_0 = {0};
	{
		SerializationInfo_t647 * L_0 = ___info;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t677 * L_1 = (ArgumentNullException_t677 *)il2cpp_codegen_object_new (ArgumentNullException_t677_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3666(L_1, (String_t*)_stringLiteral724, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		SerializationInfo_t647 * L_2 = ___info;
		int32_t L_3 = (int32_t)(__this->___generation_14);
		NullCheck((SerializationInfo_t647 *)L_2);
		SerializationInfo_AddValue_m5645((SerializationInfo_t647 *)L_2, (String_t*)_stringLiteral726, (int32_t)L_3, /*hidden argument*/NULL);
		SerializationInfo_t647 * L_4 = ___info;
		Object_t* L_5 = (Object_t*)(__this->___hcp_12);
		NullCheck((SerializationInfo_t647 *)L_4);
		SerializationInfo_AddValue_m4684((SerializationInfo_t647 *)L_4, (String_t*)_stringLiteral728, (Object_t *)L_5, /*hidden argument*/NULL);
		V_0 = (KeyValuePair_2U5BU5D_t2364*)NULL;
		int32_t L_6 = (int32_t)(__this->___count_10);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_7 = (int32_t)(__this->___count_10);
		V_0 = (KeyValuePair_2U5BU5D_t2364*)((KeyValuePair_2U5BU5D_t2364*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 43), L_7));
		KeyValuePair_2U5BU5D_t2364* L_8 = V_0;
		NullCheck((Dictionary_2_t1901 *)__this);
		(( void (*) (Dictionary_2_t1901 *, KeyValuePair_2U5BU5D_t2364*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)((Dictionary_2_t1901 *)__this, (KeyValuePair_2U5BU5D_t2364*)L_8, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
	}

IL_0055:
	{
		SerializationInfo_t647 * L_9 = ___info;
		Int32U5BU5D_t107* L_10 = (Int32U5BU5D_t107*)(__this->___table_4);
		NullCheck(L_10);
		NullCheck((SerializationInfo_t647 *)L_9);
		SerializationInfo_AddValue_m5645((SerializationInfo_t647 *)L_9, (String_t*)_stringLiteral1359, (int32_t)(((int32_t)(((Array_t *)L_10)->max_length))), /*hidden argument*/NULL);
		SerializationInfo_t647 * L_11 = ___info;
		KeyValuePair_2U5BU5D_t2364* L_12 = V_0;
		NullCheck((SerializationInfo_t647 *)L_11);
		SerializationInfo_AddValue_m4684((SerializationInfo_t647 *)L_11, (String_t*)_stringLiteral2805, (Object_t *)(Object_t *)L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral726;
extern Il2CppCodeGenString* _stringLiteral728;
extern Il2CppCodeGenString* _stringLiteral1359;
extern Il2CppCodeGenString* _stringLiteral2805;
extern "C" void Dictionary_2_OnDeserialization_m12392_gshared (Dictionary_2_t1901 * __this, Object_t * ___sender, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(194);
		_stringLiteral726 = il2cpp_codegen_string_literal_from_index(726);
		_stringLiteral728 = il2cpp_codegen_string_literal_from_index(728);
		_stringLiteral1359 = il2cpp_codegen_string_literal_from_index(1359);
		_stringLiteral2805 = il2cpp_codegen_string_literal_from_index(2805);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2U5BU5D_t2364* V_1 = {0};
	int32_t V_2 = 0;
	{
		SerializationInfo_t647 * L_0 = (SerializationInfo_t647 *)(__this->___serialization_info_13);
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
		SerializationInfo_t647 * L_1 = (SerializationInfo_t647 *)(__this->___serialization_info_13);
		NullCheck((SerializationInfo_t647 *)L_1);
		int32_t L_2 = SerializationInfo_GetInt32_m5653((SerializationInfo_t647 *)L_1, (String_t*)_stringLiteral726, /*hidden argument*/NULL);
		__this->___generation_14 = L_2;
		SerializationInfo_t647 * L_3 = (SerializationInfo_t647 *)(__this->___serialization_info_13);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m2130(NULL /*static, unused*/, (RuntimeTypeHandle_t1077 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44)), /*hidden argument*/NULL);
		NullCheck((SerializationInfo_t647 *)L_3);
		Object_t * L_5 = SerializationInfo_GetValue_m5646((SerializationInfo_t647 *)L_3, (String_t*)_stringLiteral728, (Type_t *)L_4, /*hidden argument*/NULL);
		__this->___hcp_12 = ((Object_t*)Castclass(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)));
		SerializationInfo_t647 * L_6 = (SerializationInfo_t647 *)(__this->___serialization_info_13);
		NullCheck((SerializationInfo_t647 *)L_6);
		int32_t L_7 = SerializationInfo_GetInt32_m5653((SerializationInfo_t647 *)L_6, (String_t*)_stringLiteral1359, /*hidden argument*/NULL);
		V_0 = (int32_t)L_7;
		SerializationInfo_t647 * L_8 = (SerializationInfo_t647 *)(__this->___serialization_info_13);
		Type_t * L_9 = Type_GetTypeFromHandle_m2130(NULL /*static, unused*/, (RuntimeTypeHandle_t1077 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)), /*hidden argument*/NULL);
		NullCheck((SerializationInfo_t647 *)L_8);
		Object_t * L_10 = SerializationInfo_GetValue_m5646((SerializationInfo_t647 *)L_8, (String_t*)_stringLiteral2805, (Type_t *)L_9, /*hidden argument*/NULL);
		V_1 = (KeyValuePair_2U5BU5D_t2364*)((KeyValuePair_2U5BU5D_t2364*)Castclass(L_10, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)));
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) >= ((int32_t)((int32_t)10))))
		{
			goto IL_0083;
		}
	}
	{
		V_0 = (int32_t)((int32_t)10);
	}

IL_0083:
	{
		int32_t L_12 = V_0;
		NullCheck((Dictionary_2_t1901 *)__this);
		(( void (*) (Dictionary_2_t1901 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33)->method)((Dictionary_2_t1901 *)__this, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		__this->___count_10 = 0;
		KeyValuePair_2U5BU5D_t2364* L_13 = V_1;
		if (!L_13)
		{
			goto IL_00c9;
		}
	}
	{
		V_2 = (int32_t)0;
		goto IL_00c0;
	}

IL_009e:
	{
		KeyValuePair_2U5BU5D_t2364* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		Object_t * L_16 = (( Object_t * (*) (KeyValuePair_2_t1904 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((KeyValuePair_2_t1904 *)((KeyValuePair_2_t1904 *)(KeyValuePair_2_t1904 *)SZArrayLdElema(L_14, L_15, sizeof(KeyValuePair_2_t1904 ))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		KeyValuePair_2U5BU5D_t2364* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = (( int32_t (*) (KeyValuePair_2_t1904 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)((KeyValuePair_2_t1904 *)((KeyValuePair_2_t1904 *)(KeyValuePair_2_t1904 *)SZArrayLdElema(L_17, L_18, sizeof(KeyValuePair_2_t1904 ))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		NullCheck((Dictionary_2_t1901 *)__this);
		VirtActionInvoker2< Object_t *, int32_t >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue) */, (Dictionary_2_t1901 *)__this, (Object_t *)L_16, (int32_t)L_19);
		int32_t L_20 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_00c0:
	{
		int32_t L_21 = V_2;
		KeyValuePair_2U5BU5D_t2364* L_22 = V_1;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)(((int32_t)(((Array_t *)L_22)->max_length))))))
		{
			goto IL_009e;
		}
	}

IL_00c9:
	{
		int32_t L_23 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_23+(int32_t)1));
		__this->___serialization_info_13 = (SerializationInfo_t647 *)NULL;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern TypeInfo* ArgumentNullException_t677_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t106_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral711;
extern "C" bool Dictionary_2_Remove_m12393_gshared (Dictionary_2_t1901 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t677_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		Int32_t106_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		_stringLiteral711 = il2cpp_codegen_string_literal_from_index(711);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Object_t * V_4 = {0};
	int32_t V_5 = 0;
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t677 * L_1 = (ArgumentNullException_t677 *)il2cpp_codegen_object_new (ArgumentNullException_t677_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3666(L_1, (String_t*)_stringLiteral711, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		Object_t * L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), (Object_t*)L_2, (Object_t *)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		int32_t L_5 = V_0;
		Int32U5BU5D_t107* L_6 = (Int32U5BU5D_t107*)(__this->___table_4);
		NullCheck(L_6);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))));
		Int32U5BU5D_t107* L_7 = (Int32U5BU5D_t107*)(__this->___table_4);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_9, sizeof(int32_t)))-(int32_t)1));
		int32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)(-1)))))
		{
			goto IL_004e;
		}
	}
	{
		return 0;
	}

IL_004e:
	{
		V_3 = (int32_t)(-1);
	}

IL_0050:
	{
		LinkU5BU5D_t1870* L_11 = (LinkU5BU5D_t1870*)(__this->___linkSlots_5);
		int32_t L_12 = V_2;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (int32_t)(((Link_t1174 *)(Link_t1174 *)SZArrayLdElema(L_11, L_12, sizeof(Link_t1174 )))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0089;
		}
	}
	{
		Object_t* L_15 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t78* L_16 = (ObjectU5BU5D_t78*)(__this->___keySlots_6);
		int32_t L_17 = V_2;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		Object_t * L_19 = ___key;
		NullCheck((Object_t*)L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), (Object_t*)L_15, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_16, L_18, sizeof(Object_t *))), (Object_t *)L_19);
		if (!L_20)
		{
			goto IL_0089;
		}
	}
	{
		goto IL_00a4;
	}

IL_0089:
	{
		int32_t L_21 = V_2;
		V_3 = (int32_t)L_21;
		LinkU5BU5D_t1870* L_22 = (LinkU5BU5D_t1870*)(__this->___linkSlots_5);
		int32_t L_23 = V_2;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = (int32_t)(((Link_t1174 *)(Link_t1174 *)SZArrayLdElema(L_22, L_23, sizeof(Link_t1174 )))->___Next_1);
		V_2 = (int32_t)L_24;
		int32_t L_25 = V_2;
		if ((!(((uint32_t)L_25) == ((uint32_t)(-1)))))
		{
			goto IL_0050;
		}
	}

IL_00a4:
	{
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_00ad;
		}
	}
	{
		return 0;
	}

IL_00ad:
	{
		int32_t L_27 = (int32_t)(__this->___count_10);
		__this->___count_10 = ((int32_t)((int32_t)L_27-(int32_t)1));
		int32_t L_28 = V_3;
		if ((!(((uint32_t)L_28) == ((uint32_t)(-1)))))
		{
			goto IL_00e2;
		}
	}
	{
		Int32U5BU5D_t107* L_29 = (Int32U5BU5D_t107*)(__this->___table_4);
		int32_t L_30 = V_1;
		LinkU5BU5D_t1870* L_31 = (LinkU5BU5D_t1870*)(__this->___linkSlots_5);
		int32_t L_32 = V_2;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
		int32_t L_33 = (int32_t)(((Link_t1174 *)(Link_t1174 *)SZArrayLdElema(L_31, L_32, sizeof(Link_t1174 )))->___Next_1);
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, L_30);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_29, L_30, sizeof(int32_t))) = (int32_t)((int32_t)((int32_t)L_33+(int32_t)1));
		goto IL_0104;
	}

IL_00e2:
	{
		LinkU5BU5D_t1870* L_34 = (LinkU5BU5D_t1870*)(__this->___linkSlots_5);
		int32_t L_35 = V_3;
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, L_35);
		LinkU5BU5D_t1870* L_36 = (LinkU5BU5D_t1870*)(__this->___linkSlots_5);
		int32_t L_37 = V_2;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, L_37);
		int32_t L_38 = (int32_t)(((Link_t1174 *)(Link_t1174 *)SZArrayLdElema(L_36, L_37, sizeof(Link_t1174 )))->___Next_1);
		((Link_t1174 *)(Link_t1174 *)SZArrayLdElema(L_34, L_35, sizeof(Link_t1174 )))->___Next_1 = L_38;
	}

IL_0104:
	{
		LinkU5BU5D_t1870* L_39 = (LinkU5BU5D_t1870*)(__this->___linkSlots_5);
		int32_t L_40 = V_2;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, L_40);
		int32_t L_41 = (int32_t)(__this->___emptySlot_9);
		((Link_t1174 *)(Link_t1174 *)SZArrayLdElema(L_39, L_40, sizeof(Link_t1174 )))->___Next_1 = L_41;
		int32_t L_42 = V_2;
		__this->___emptySlot_9 = L_42;
		LinkU5BU5D_t1870* L_43 = (LinkU5BU5D_t1870*)(__this->___linkSlots_5);
		int32_t L_44 = V_2;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, L_44);
		((Link_t1174 *)(Link_t1174 *)SZArrayLdElema(L_43, L_44, sizeof(Link_t1174 )))->___HashCode_0 = 0;
		ObjectU5BU5D_t78* L_45 = (ObjectU5BU5D_t78*)(__this->___keySlots_6);
		int32_t L_46 = V_2;
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_4));
		Object_t * L_47 = V_4;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, L_46);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_45, L_46, sizeof(Object_t *))) = (Object_t *)L_47;
		Int32U5BU5D_t107* L_48 = (Int32U5BU5D_t107*)(__this->___valueSlots_7);
		int32_t L_49 = V_2;
		Initobj (Int32_t106_il2cpp_TypeInfo_var, (&V_5));
		int32_t L_50 = V_5;
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, L_49);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_48, L_49, sizeof(int32_t))) = (int32_t)L_50;
		int32_t L_51 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_51+(int32_t)1));
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern TypeInfo* ArgumentNullException_t677_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t106_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral711;
extern "C" bool Dictionary_2_TryGetValue_m12394_gshared (Dictionary_2_t1901 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t677_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		Int32_t106_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		_stringLiteral711 = il2cpp_codegen_string_literal_from_index(711);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t677 * L_1 = (ArgumentNullException_t677 *)il2cpp_codegen_object_new (ArgumentNullException_t677_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3666(L_1, (String_t*)_stringLiteral711, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		Object_t * L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), (Object_t*)L_2, (Object_t *)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t107* L_5 = (Int32U5BU5D_t107*)(__this->___table_4);
		int32_t L_6 = V_0;
		Int32U5BU5D_t107* L_7 = (Int32U5BU5D_t107*)(__this->___table_4);
		NullCheck(L_7);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))));
		int32_t L_8 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_8, sizeof(int32_t)))-(int32_t)1));
		goto IL_00a2;
	}

IL_0048:
	{
		LinkU5BU5D_t1870* L_9 = (LinkU5BU5D_t1870*)(__this->___linkSlots_5);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = (int32_t)(((Link_t1174 *)(Link_t1174 *)SZArrayLdElema(L_9, L_10, sizeof(Link_t1174 )))->___HashCode_0);
		int32_t L_12 = V_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_0090;
		}
	}
	{
		Object_t* L_13 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t78* L_14 = (ObjectU5BU5D_t78*)(__this->___keySlots_6);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		Object_t * L_17 = ___key;
		NullCheck((Object_t*)L_13);
		bool L_18 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), (Object_t*)L_13, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_14, L_16, sizeof(Object_t *))), (Object_t *)L_17);
		if (!L_18)
		{
			goto IL_0090;
		}
	}
	{
		int32_t* L_19 = ___value;
		Int32U5BU5D_t107* L_20 = (Int32U5BU5D_t107*)(__this->___valueSlots_7);
		int32_t L_21 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		*L_19 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_20, L_22, sizeof(int32_t)));
		return 1;
	}

IL_0090:
	{
		LinkU5BU5D_t1870* L_23 = (LinkU5BU5D_t1870*)(__this->___linkSlots_5);
		int32_t L_24 = V_1;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = (int32_t)(((Link_t1174 *)(Link_t1174 *)SZArrayLdElema(L_23, L_24, sizeof(Link_t1174 )))->___Next_1);
		V_1 = (int32_t)L_25;
	}

IL_00a2:
	{
		int32_t L_26 = V_1;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}
	{
		int32_t* L_27 = ___value;
		Initobj (Int32_t106_il2cpp_TypeInfo_var, (&V_2));
		int32_t L_28 = V_2;
		*L_27 = L_28;
		return 0;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t1906 * Dictionary_2_get_Values_m12395_gshared (Dictionary_2_t1901 * __this, const MethodInfo* method)
{
	{
		ValueCollection_t1906 * L_0 = (ValueCollection_t1906 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46));
		(( void (*) (ValueCollection_t1906 *, Dictionary_2_t1901 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 47)->method)(L_0, (Dictionary_2_t1901 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 47));
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t677_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t402_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral711;
extern Il2CppCodeGenString* _stringLiteral2806;
extern "C" Object_t * Dictionary_2_ToTKey_m12396_gshared (Dictionary_2_t1901 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t677_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(194);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		ArgumentException_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(269);
		_stringLiteral711 = il2cpp_codegen_string_literal_from_index(711);
		_stringLiteral2806 = il2cpp_codegen_string_literal_from_index(2806);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t677 * L_1 = (ArgumentNullException_t677 *)il2cpp_codegen_object_new (ArgumentNullException_t677_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3666(L_1, (String_t*)_stringLiteral711, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		Object_t * L_2 = ___key;
		if (((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))))
		{
			goto IL_0040;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m2130(NULL /*static, unused*/, (RuntimeTypeHandle_t1077 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 48)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, (Type_t *)L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m531(NULL /*static, unused*/, (String_t*)_stringLiteral2806, (String_t*)L_4, /*hidden argument*/NULL);
		ArgumentException_t402 * L_6 = (ArgumentException_t402 *)il2cpp_codegen_object_new (ArgumentException_t402_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3747(L_6, (String_t*)L_5, (String_t*)_stringLiteral711, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_6);
	}

IL_0040:
	{
		Object_t * L_7 = ___key;
		return ((Object_t *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t106_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t402_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2806;
extern Il2CppCodeGenString* _stringLiteral390;
extern "C" int32_t Dictionary_2_ToTValue_m12397_gshared (Dictionary_2_t1901 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(194);
		Int32_t106_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		ArgumentException_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(269);
		_stringLiteral2806 = il2cpp_codegen_string_literal_from_index(2806);
		_stringLiteral390 = il2cpp_codegen_string_literal_from_index(390);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m2130(NULL /*static, unused*/, (RuntimeTypeHandle_t1077 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 49)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Type::get_IsValueType() */, (Type_t *)L_1);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		Initobj (Int32_t106_il2cpp_TypeInfo_var, (&V_0));
		int32_t L_3 = V_0;
		return L_3;
	}

IL_0024:
	{
		Object_t * L_4 = ___value;
		if (((Object_t *)IsInst(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5))))
		{
			goto IL_0053;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m2130(NULL /*static, unused*/, (RuntimeTypeHandle_t1077 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 49)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, (Type_t *)L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m531(NULL /*static, unused*/, (String_t*)_stringLiteral2806, (String_t*)L_6, /*hidden argument*/NULL);
		ArgumentException_t402 * L_8 = (ArgumentException_t402 *)il2cpp_codegen_object_new (ArgumentException_t402_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3747(L_8, (String_t*)L_7, (String_t*)_stringLiteral390, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_8);
	}

IL_0053:
	{
		Object_t * L_9 = ___value;
		return ((*(int32_t*)((int32_t*)UnBox (L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)))));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m12398_gshared (Dictionary_2_t1901 * __this, KeyValuePair_2_t1904  ___pair, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t * L_0 = (( Object_t * (*) (KeyValuePair_2_t1904 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((KeyValuePair_2_t1904 *)(&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		NullCheck((Dictionary_2_t1901 *)__this);
		bool L_1 = (bool)VirtFuncInvoker2< bool, Object_t *, int32_t* >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&) */, (Dictionary_2_t1901 *)__this, (Object_t *)L_0, (int32_t*)(&V_0));
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		return 0;
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41));
		EqualityComparer_1_t1886 * L_2 = (( EqualityComparer_1_t1886 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40));
		int32_t L_3 = (( int32_t (*) (KeyValuePair_2_t1904 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)((KeyValuePair_2_t1904 *)(&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		int32_t L_4 = V_0;
		NullCheck((EqualityComparer_1_t1886 *)L_2);
		bool L_5 = (bool)VirtFuncInvoker2< bool, int32_t, int32_t >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32>::Equals(T,T) */, (EqualityComparer_1_t1886 *)L_2, (int32_t)L_3, (int32_t)L_4);
		return L_5;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t1908  Dictionary_2_GetEnumerator_m12399_gshared (Dictionary_2_t1901 * __this, const MethodInfo* method)
{
	{
		Enumerator_t1908  L_0 = {0};
		(( void (*) (Enumerator_t1908 *, Dictionary_2_t1901 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)(&L_0, (Dictionary_2_t1901 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return L_0;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
extern "C" DictionaryEntry_t1050  Dictionary_2_U3CCopyToU3Em__0_m12400_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		int32_t L_1 = ___value;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_2);
		DictionaryEntry_t1050  L_4 = {0};
		DictionaryEntry__ctor_m5636(&L_4, (Object_t *)L_0, (Object_t *)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_14.h"
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_14MethodDeclarations.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>(System.Int32)
extern "C" KeyValuePair_2_t1904  Array_InternalArray__get_Item_TisKeyValuePair_2_t1904_m17743_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t1904_m17743(__this, p0, method) (( KeyValuePair_2_t1904  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t1904_m17743_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m12401_gshared (InternalEnumerator_1_t1905 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12402_gshared (InternalEnumerator_1_t1905 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t1904  L_0 = (( KeyValuePair_2_t1904  (*) (InternalEnumerator_1_t1905 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t1905 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t1904  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12403_gshared (InternalEnumerator_1_t1905 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m12404_gshared (InternalEnumerator_1_t1905 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001e;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m5638((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001e:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B5_0 = 0;
	}

IL_0044:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t881_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2793;
extern Il2CppCodeGenString* _stringLiteral2794;
extern "C" KeyValuePair_2_t1904  InternalEnumerator_1_get_Current_m12405_gshared (InternalEnumerator_1_t1905 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t881_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(515);
		_stringLiteral2793 = il2cpp_codegen_string_literal_from_index(2793);
		_stringLiteral2794 = il2cpp_codegen_string_literal_from_index(2794);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t881 * L_1 = (InvalidOperationException_t881 *)il2cpp_codegen_object_new (InvalidOperationException_t881_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4709(L_1, (String_t*)_stringLiteral2793, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0018:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_002f;
		}
	}
	{
		InvalidOperationException_t881 * L_3 = (InvalidOperationException_t881 *)il2cpp_codegen_object_new (InvalidOperationException_t881_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4709(L_3, (String_t*)_stringLiteral2794, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_002f:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m5638((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		KeyValuePair_2_t1904  L_8 = (( KeyValuePair_2_t1904  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::.ctor(TKey,TValue)
// System.Object
#include "mscorlib_System_Object.h"
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void KeyValuePair_2__ctor_m12406_gshared (KeyValuePair_2_t1904 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		(( void (*) (KeyValuePair_2_t1904 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((KeyValuePair_2_t1904 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_1 = ___value;
		(( void (*) (KeyValuePair_2_t1904 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyValuePair_2_t1904 *)__this, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Key()
extern "C" Object_t * KeyValuePair_2_get_Key_m12407_gshared (KeyValuePair_2_t1904 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___key_0);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m12408_gshared (KeyValuePair_2_t1904 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___key_0 = L_0;
		return;
	}
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Value()
extern "C" int32_t KeyValuePair_2_get_Value_m12409_gshared (KeyValuePair_2_t1904 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->___value_1);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m12410_gshared (KeyValuePair_2_t1904 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___value_1 = L_0;
		return;
	}
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::ToString()
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* StringU5BU5D_t82_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral340;
extern Il2CppCodeGenString* _stringLiteral349;
extern Il2CppCodeGenString* _stringLiteral13;
extern "C" String_t* KeyValuePair_2_ToString_m12411_gshared (KeyValuePair_2_t1904 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(356);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		_stringLiteral340 = il2cpp_codegen_string_literal_from_index(340);
		_stringLiteral349 = il2cpp_codegen_string_literal_from_index(349);
		_stringLiteral13 = il2cpp_codegen_string_literal_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	int32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t82* G_B2_1 = {0};
	StringU5BU5D_t82* G_B2_2 = {0};
	int32_t G_B1_0 = 0;
	StringU5BU5D_t82* G_B1_1 = {0};
	StringU5BU5D_t82* G_B1_2 = {0};
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	StringU5BU5D_t82* G_B3_2 = {0};
	StringU5BU5D_t82* G_B3_3 = {0};
	int32_t G_B5_0 = 0;
	StringU5BU5D_t82* G_B5_1 = {0};
	StringU5BU5D_t82* G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	StringU5BU5D_t82* G_B4_1 = {0};
	StringU5BU5D_t82* G_B4_2 = {0};
	String_t* G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	StringU5BU5D_t82* G_B6_2 = {0};
	StringU5BU5D_t82* G_B6_3 = {0};
	{
		StringU5BU5D_t82* L_0 = (StringU5BU5D_t82*)((StringU5BU5D_t82*)SZArrayNew(StringU5BU5D_t82_il2cpp_TypeInfo_var, 5));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, _stringLiteral340);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0, sizeof(String_t*))) = (String_t*)_stringLiteral340;
		StringU5BU5D_t82* L_1 = (StringU5BU5D_t82*)L_0;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t1904 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t1904 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!L_2)
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0039;
		}
	}
	{
		Object_t * L_3 = (( Object_t * (*) (KeyValuePair_2_t1904 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t1904 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (Object_t *)L_3;
		NullCheck((Object_t *)(*(&V_0)));
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Object_t *)(*(&V_0)));
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((String_t**)(String_t**)SZArrayLdElema(G_B3_2, G_B3_1, sizeof(String_t*))) = (String_t*)G_B3_0;
		StringU5BU5D_t82* L_6 = (StringU5BU5D_t82*)G_B3_3;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, _stringLiteral349);
		*((String_t**)(String_t**)SZArrayLdElema(L_6, 2, sizeof(String_t*))) = (String_t*)_stringLiteral349;
		StringU5BU5D_t82* L_7 = (StringU5BU5D_t82*)L_6;
		int32_t L_8 = (( int32_t (*) (KeyValuePair_2_t1904 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t1904 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	}
	{
		int32_t L_9 = (( int32_t (*) (KeyValuePair_2_t1904 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t1904 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (int32_t)L_9;
		NullCheck((int32_t*)(&V_1));
		String_t* L_10 = Int32_ToString_m3659((int32_t*)(&V_1), NULL);
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		*((String_t**)(String_t**)SZArrayLdElema(G_B6_2, G_B6_1, sizeof(String_t*))) = (String_t*)G_B6_0;
		StringU5BU5D_t82* L_12 = (StringU5BU5D_t82*)G_B6_3;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 4);
		ArrayElementTypeCheck (L_12, _stringLiteral13);
		*((String_t**)(String_t**)SZArrayLdElema(L_12, 4, sizeof(String_t*))) = (String_t*)_stringLiteral13;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m5659(NULL /*static, unused*/, (StringU5BU5D_t82*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_6.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_3.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_3MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_6MethodDeclarations.h"
struct Array_t;
struct Transform_1_t1909;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisInt32_t106_m17754_gshared (Dictionary_2_t1901 * __this, Array_t * p0, int32_t p1, Transform_1_t1909 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisInt32_t106_m17754(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t1901 *, Array_t *, int32_t, Transform_1_t1909 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisInt32_t106_m17754_gshared)(__this, p0, p1, p2, method)
struct Int32U5BU5D_t107;
struct Transform_1_t1909;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_CopyTo<System.Int32,System.Int32>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_CopyTo<System.Int32,System.Int32>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisInt32_t106_TisInt32_t106_m17756_gshared (Dictionary_2_t1901 * __this, Int32U5BU5D_t107* p0, int32_t p1, Transform_1_t1909 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisInt32_t106_TisInt32_t106_m17756(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t1901 *, Int32U5BU5D_t107*, int32_t, Transform_1_t1909 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisInt32_t106_TisInt32_t106_m17756_gshared)(__this, p0, p1, p2, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_10.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t677_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1354;
extern "C" void ValueCollection__ctor_m12412_gshared (ValueCollection_t1906 * __this, Dictionary_2_t1901 * ___dictionary, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t677_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		_stringLiteral1354 = il2cpp_codegen_string_literal_from_index(1354);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m355((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t1901 * L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t677 * L_1 = (ArgumentNullException_t677 *)il2cpp_codegen_object_new (ArgumentNullException_t677_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3666(L_1, (String_t*)_stringLiteral1354, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0017:
	{
		Dictionary_2_t1901 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t81_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2807;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m12413_gshared (ValueCollection_t1906 * __this, int32_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t81_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		_stringLiteral2807 = il2cpp_codegen_string_literal_from_index(2807);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t81 * L_0 = (NotSupportedException_t81 *)il2cpp_codegen_object_new (NotSupportedException_t81_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m4631(L_0, (String_t*)_stringLiteral2807, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TValue>.Clear()
extern TypeInfo* NotSupportedException_t81_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2807;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m12414_gshared (ValueCollection_t1906 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t81_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		_stringLiteral2807 = il2cpp_codegen_string_literal_from_index(2807);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t81 * L_0 = (NotSupportedException_t81 *)il2cpp_codegen_object_new (NotSupportedException_t81_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m4631(L_0, (String_t*)_stringLiteral2807, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m12415_gshared (ValueCollection_t1906 * __this, int32_t ___item, const MethodInfo* method)
{
	{
		Dictionary_2_t1901 * L_0 = (Dictionary_2_t1901 *)(__this->___dictionary_0);
		int32_t L_1 = ___item;
		NullCheck((Dictionary_2_t1901 *)L_0);
		bool L_2 = (( bool (*) (Dictionary_2_t1901 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t1901 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern TypeInfo* NotSupportedException_t81_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2807;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m12416_gshared (ValueCollection_t1906 * __this, int32_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t81_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		_stringLiteral2807 = il2cpp_codegen_string_literal_from_index(2807);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t81 * L_0 = (NotSupportedException_t81 *)il2cpp_codegen_object_new (NotSupportedException_t81_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m4631(L_0, (String_t*)_stringLiteral2807, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m12417_gshared (ValueCollection_t1906 * __this, const MethodInfo* method)
{
	{
		NullCheck((ValueCollection_t1906 *)__this);
		Enumerator_t1907  L_0 = (( Enumerator_t1907  (*) (ValueCollection_t1906 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((ValueCollection_t1906 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t1907  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m12418_gshared (ValueCollection_t1906 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	Int32U5BU5D_t107* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (Int32U5BU5D_t107*)((Int32U5BU5D_t107*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		Int32U5BU5D_t107* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Int32U5BU5D_t107* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((ValueCollection_t1906 *)__this);
		(( void (*) (ValueCollection_t1906 *, Int32U5BU5D_t107*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((ValueCollection_t1906 *)__this, (Int32U5BU5D_t107*)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return;
	}

IL_0016:
	{
		Dictionary_2_t1901 * L_4 = (Dictionary_2_t1901 *)(__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck((Dictionary_2_t1901 *)L_4);
		(( void (*) (Dictionary_2_t1901 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t1901 *)L_4, (Array_t *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t1901 * L_7 = (Dictionary_2_t1901 *)(__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t1909 * L_11 = (Transform_1_t1909 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t1909 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, (Object_t *)NULL, (IntPtr_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t1901 *)L_7);
		(( void (*) (Dictionary_2_t1901 *, Array_t *, int32_t, Transform_1_t1909 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t1901 *)L_7, (Array_t *)L_8, (int32_t)L_9, (Transform_1_t1909 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m12419_gshared (ValueCollection_t1906 * __this, const MethodInfo* method)
{
	{
		NullCheck((ValueCollection_t1906 *)__this);
		Enumerator_t1907  L_0 = (( Enumerator_t1907  (*) (ValueCollection_t1906 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((ValueCollection_t1906 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t1907  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m12420_gshared (ValueCollection_t1906 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m12421_gshared (ValueCollection_t1906 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern TypeInfo* ICollection_t1051_il2cpp_TypeInfo_var;
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m12422_gshared (ValueCollection_t1906 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t1051_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(568);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t1901 * L_0 = (Dictionary_2_t1901 *)(__this->___dictionary_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t1051_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::CopyTo(TValue[],System.Int32)
#include "mscorlib_ArrayTypes.h"
extern "C" void ValueCollection_CopyTo_m12423_gshared (ValueCollection_t1906 * __this, Int32U5BU5D_t107* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Dictionary_2_t1901 * L_0 = (Dictionary_2_t1901 *)(__this->___dictionary_0);
		Int32U5BU5D_t107* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Dictionary_2_t1901 *)L_0);
		(( void (*) (Dictionary_2_t1901 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t1901 *)L_0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t1901 * L_3 = (Dictionary_2_t1901 *)(__this->___dictionary_0);
		Int32U5BU5D_t107* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t1909 * L_7 = (Transform_1_t1909 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t1909 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, (Object_t *)NULL, (IntPtr_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t1901 *)L_3);
		(( void (*) (Dictionary_2_t1901 *, Int32U5BU5D_t107*, int32_t, Transform_1_t1909 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((Dictionary_2_t1901 *)L_3, (Int32U5BU5D_t107*)L_4, (int32_t)L_5, (Transform_1_t1909 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t1907  ValueCollection_GetEnumerator_m12424_gshared (ValueCollection_t1906 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t1901 * L_0 = (Dictionary_2_t1901 *)(__this->___dictionary_0);
		Enumerator_t1907  L_1 = {0};
		(( void (*) (Enumerator_t1907 *, Dictionary_2_t1901 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, (Dictionary_2_t1901 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m12425_gshared (ValueCollection_t1906 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t1901 * L_0 = (Dictionary_2_t1901 *)(__this->___dictionary_0);
		NullCheck((Dictionary_2_t1901 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count() */, (Dictionary_2_t1901 *)L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_10.h"
extern "C" void Enumerator__ctor_m12426_gshared (Enumerator_t1907 * __this, Dictionary_2_t1901 * ___host, const MethodInfo* method)
{
	{
		Dictionary_2_t1901 * L_0 = ___host;
		NullCheck((Dictionary_2_t1901 *)L_0);
		Enumerator_t1908  L_1 = (( Enumerator_t1908  (*) (Dictionary_2_t1901 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t1901 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m12427_gshared (Enumerator_t1907 * __this, const MethodInfo* method)
{
	{
		Enumerator_t1908 * L_0 = (Enumerator_t1908 *)&(__this->___host_enumerator_0);
		int32_t L_1 = (( int32_t (*) (Enumerator_t1908 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t1908 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m12428_gshared (Enumerator_t1907 * __this, const MethodInfo* method)
{
	{
		Enumerator_t1908 * L_0 = (Enumerator_t1908 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t1908 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t1908 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m12429_gshared (Enumerator_t1907 * __this, const MethodInfo* method)
{
	{
		Enumerator_t1908 * L_0 = (Enumerator_t1908 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t1908 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((Enumerator_t1908 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" int32_t Enumerator_get_Current_m12430_gshared (Enumerator_t1907 * __this, const MethodInfo* method)
{
	{
		Enumerator_t1908 * L_0 = (Enumerator_t1908 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t1904 * L_1 = (KeyValuePair_2_t1904 *)&(L_0->___current_3);
		int32_t L_2 = (( int32_t (*) (KeyValuePair_2_t1904 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t1904 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_10.h"
extern "C" void Enumerator__ctor_m12431_gshared (Enumerator_t1908 * __this, Dictionary_2_t1901 * ___dictionary, const MethodInfo* method)
{
	{
		Dictionary_2_t1901 * L_0 = ___dictionary;
		__this->___dictionary_0 = L_0;
		Dictionary_2_t1901 * L_1 = ___dictionary;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)(L_1->___generation_14);
		__this->___stamp_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m12432_gshared (Enumerator_t1908 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t1908 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t1908 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t1904  L_0 = (KeyValuePair_2_t1904 )(__this->___current_3);
		KeyValuePair_2_t1904  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
extern "C" DictionaryEntry_t1050  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12433_gshared (Enumerator_t1908 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t1908 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t1908 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t1904 * L_0 = (KeyValuePair_2_t1904 *)&(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t1904 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t1904 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		KeyValuePair_2_t1904 * L_2 = (KeyValuePair_2_t1904 *)&(__this->___current_3);
		int32_t L_3 = (( int32_t (*) (KeyValuePair_2_t1904 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t1904 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_4);
		DictionaryEntry_t1050  L_6 = {0};
		DictionaryEntry__ctor_m5636(&L_6, (Object_t *)L_1, (Object_t *)L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12434_gshared (Enumerator_t1908 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (Enumerator_t1908 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((Enumerator_t1908 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return L_0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12435_gshared (Enumerator_t1908 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (( int32_t (*) (Enumerator_t1908 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((Enumerator_t1908 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m12436_gshared (Enumerator_t1908 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		(( void (*) (Enumerator_t1908 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Enumerator_t1908 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		return 0;
	}

IL_0014:
	{
		goto IL_007b;
	}

IL_0019:
	{
		int32_t L_1 = (int32_t)(__this->___next_1);
		int32_t L_2 = (int32_t)L_1;
		V_1 = (int32_t)L_2;
		__this->___next_1 = ((int32_t)((int32_t)L_2+(int32_t)1));
		int32_t L_3 = V_1;
		V_0 = (int32_t)L_3;
		Dictionary_2_t1901 * L_4 = (Dictionary_2_t1901 *)(__this->___dictionary_0);
		NullCheck(L_4);
		LinkU5BU5D_t1870* L_5 = (LinkU5BU5D_t1870*)(L_4->___linkSlots_5);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = (int32_t)(((Link_t1174 *)(Link_t1174 *)SZArrayLdElema(L_5, L_6, sizeof(Link_t1174 )))->___HashCode_0);
		if (!((int32_t)((int32_t)L_7&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_007b;
		}
	}
	{
		Dictionary_2_t1901 * L_8 = (Dictionary_2_t1901 *)(__this->___dictionary_0);
		NullCheck(L_8);
		ObjectU5BU5D_t78* L_9 = (ObjectU5BU5D_t78*)(L_8->___keySlots_6);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		Dictionary_2_t1901 * L_12 = (Dictionary_2_t1901 *)(__this->___dictionary_0);
		NullCheck(L_12);
		Int32U5BU5D_t107* L_13 = (Int32U5BU5D_t107*)(L_12->___valueSlots_7);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		KeyValuePair_2_t1904  L_16 = {0};
		(( void (*) (KeyValuePair_2_t1904 *, Object_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(&L_16, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11, sizeof(Object_t *))), (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_13, L_15, sizeof(int32_t))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		__this->___current_3 = L_16;
		return 1;
	}

IL_007b:
	{
		int32_t L_17 = (int32_t)(__this->___next_1);
		Dictionary_2_t1901 * L_18 = (Dictionary_2_t1901 *)(__this->___dictionary_0);
		NullCheck(L_18);
		int32_t L_19 = (int32_t)(L_18->___touchedSlots_8);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_0019;
		}
	}
	{
		__this->___next_1 = (-1);
		return 0;
	}
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t1904  Enumerator_get_Current_m12437_gshared (Enumerator_t1908 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t1904  L_0 = (KeyValuePair_2_t1904 )(__this->___current_3);
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m12438_gshared (Enumerator_t1908 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t1908 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t1908 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t1904 * L_0 = (KeyValuePair_2_t1904 *)&(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t1904 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t1904 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m12439_gshared (Enumerator_t1908 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t1908 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t1908 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t1904 * L_0 = (KeyValuePair_2_t1904 *)&(__this->___current_3);
		int32_t L_1 = (( int32_t (*) (KeyValuePair_2_t1904 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t1904 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* ObjectDisposedException_t709_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t881_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2808;
extern "C" void Enumerator_VerifyState_m12440_gshared (Enumerator_t1908 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(433);
		InvalidOperationException_t881_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(515);
		_stringLiteral2808 = il2cpp_codegen_string_literal_from_index(2808);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t1901 * L_0 = (Dictionary_2_t1901 *)(__this->___dictionary_0);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		ObjectDisposedException_t709 * L_1 = (ObjectDisposedException_t709 *)il2cpp_codegen_object_new (ObjectDisposedException_t709_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m3748(L_1, (String_t*)NULL, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0012:
	{
		Dictionary_2_t1901 * L_2 = (Dictionary_2_t1901 *)(__this->___dictionary_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)(L_2->___generation_14);
		int32_t L_4 = (int32_t)(__this->___stamp_2);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_0033;
		}
	}
	{
		InvalidOperationException_t881 * L_5 = (InvalidOperationException_t881 *)il2cpp_codegen_object_new (InvalidOperationException_t881_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4709(L_5, (String_t*)_stringLiteral2808, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_5);
	}

IL_0033:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern TypeInfo* InvalidOperationException_t881_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2809;
extern "C" void Enumerator_VerifyCurrent_m12441_gshared (Enumerator_t1908 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t881_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(515);
		_stringLiteral2809 = il2cpp_codegen_string_literal_from_index(2809);
		s_Il2CppMethodIntialized = true;
	}
	{
		(( void (*) (Enumerator_t1908 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Enumerator_t1908 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		InvalidOperationException_t881 * L_1 = (InvalidOperationException_t881 *)il2cpp_codegen_object_new (InvalidOperationException_t881_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4709(L_1, (String_t*)_stringLiteral2809, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_001d:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m12442_gshared (Enumerator_t1908 * __this, const MethodInfo* method)
{
	{
		__this->___dictionary_0 = (Dictionary_2_t1901 *)NULL;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Transform_1__ctor_m12443_gshared (Transform_1_t1909 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>::Invoke(TKey,TValue)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" int32_t Transform_1_Invoke_m12444_gshared (Transform_1_t1909 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m12444((Transform_1_t1909 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* Int32_t106_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m12445_gshared (Transform_1_t1909 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t9 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t106_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(Int32_t106_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Transform_1_EndInvoke_m12446_gshared (Transform_1_t1909 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Transform_1__ctor_m12447_gshared (Transform_1_t1902 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" DictionaryEntry_t1050  Transform_1_Invoke_m12448_gshared (Transform_1_t1902 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m12448((Transform_1_t1902 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef DictionaryEntry_t1050  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef DictionaryEntry_t1050  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef DictionaryEntry_t1050  (*FunctionPointerType) (Object_t * __this, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* Int32_t106_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m12449_gshared (Transform_1_t1902 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t9 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t106_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(Int32_t106_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t1050  Transform_1_EndInvoke_m12450_gshared (Transform_1_t1902 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(DictionaryEntry_t1050 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Transform_1__ctor_m12451_gshared (Transform_1_t1910 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Invoke(TKey,TValue)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" KeyValuePair_2_t1904  Transform_1_Invoke_m12452_gshared (Transform_1_t1910 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m12452((Transform_1_t1910 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t1904  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef KeyValuePair_2_t1904  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t1904  (*FunctionPointerType) (Object_t * __this, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* Int32_t106_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m12453_gshared (Transform_1_t1910 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t9 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t106_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(Int32_t106_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t1904  Transform_1_EndInvoke_m12454_gshared (Transform_1_t1910 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t1904 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_10.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void ShimEnumerator__ctor_m12455_gshared (ShimEnumerator_t1911 * __this, Dictionary_2_t1901 * ___host, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m355((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t1901 * L_0 = ___host;
		NullCheck((Dictionary_2_t1901 *)L_0);
		Enumerator_t1908  L_1 = (( Enumerator_t1908  (*) (Dictionary_2_t1901 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t1901 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m12456_gshared (ShimEnumerator_t1911 * __this, const MethodInfo* method)
{
	{
		Enumerator_t1908 * L_0 = (Enumerator_t1908 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t1908 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t1908 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern TypeInfo* IDictionaryEnumerator_t1049_il2cpp_TypeInfo_var;
extern "C" DictionaryEntry_t1050  ShimEnumerator_get_Entry_m12457_gshared (ShimEnumerator_t1911 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionaryEnumerator_t1049_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(601);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enumerator_t1908  L_0 = (Enumerator_t1908 )(__this->___host_enumerator_0);
		Enumerator_t1908  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck((Object_t *)L_2);
		DictionaryEntry_t1050  L_3 = (DictionaryEntry_t1050 )InterfaceFuncInvoker0< DictionaryEntry_t1050  >::Invoke(0 /* System.Collections.DictionaryEntry System.Collections.IDictionaryEnumerator::get_Entry() */, IDictionaryEnumerator_t1049_il2cpp_TypeInfo_var, (Object_t *)L_2);
		return L_3;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m12458_gshared (ShimEnumerator_t1911 * __this, const MethodInfo* method)
{
	KeyValuePair_2_t1904  V_0 = {0};
	{
		Enumerator_t1908 * L_0 = (Enumerator_t1908 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t1904  L_1 = (( KeyValuePair_2_t1904  (*) (Enumerator_t1908 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t1908 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (KeyValuePair_2_t1904 )L_1;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t1904 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t1904 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m12459_gshared (ShimEnumerator_t1911 * __this, const MethodInfo* method)
{
	KeyValuePair_2_t1904  V_0 = {0};
	{
		Enumerator_t1908 * L_0 = (Enumerator_t1908 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t1904  L_1 = (( KeyValuePair_2_t1904  (*) (Enumerator_t1908 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t1908 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (KeyValuePair_2_t1904 )L_1;
		int32_t L_2 = (( int32_t (*) (KeyValuePair_2_t1904 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t1904 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_3);
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern TypeInfo* DictionaryEntry_t1050_il2cpp_TypeInfo_var;
extern "C" Object_t * ShimEnumerator_get_Current_m12460_gshared (ShimEnumerator_t1911 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEntry_t1050_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((ShimEnumerator_t1911 *)__this);
		DictionaryEntry_t1050  L_0 = (DictionaryEntry_t1050 )VirtFuncInvoker0< DictionaryEntry_t1050  >::Invoke(6 /* System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry() */, (ShimEnumerator_t1911 *)__this);
		DictionaryEntry_t1050  L_1 = L_0;
		Object_t * L_2 = Box(DictionaryEntry_t1050_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// UnityEngine.Events.UnityEvent`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_2.h"
// UnityEngine.Events.UnityEvent`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_2MethodDeclarations.h"
// UnityEngine.Events.UnityAction`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_8.h"
// UnityEngine.Events.InvokableCall`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_2.h"
// UnityEngine.Events.InvokableCall`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_2MethodDeclarations.h"
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::.ctor()
// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBaseMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t78_il2cpp_TypeInfo_var;
extern "C" void UnityEvent_1__ctor_m2062_gshared (UnityEvent_1_t190 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t78_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(113);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_InvokeArray_4 = ((ObjectU5BU5D_t78*)SZArrayNew(ObjectU5BU5D_t78_il2cpp_TypeInfo_var, 1));
		NullCheck((UnityEventBase_t624 *)__this);
		UnityEventBase__ctor_m3555((UnityEventBase_t624 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
// UnityEngine.Events.UnityAction`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_8.h"
extern "C" void UnityEvent_1_AddListener_m12654_gshared (UnityEvent_1_t190 * __this, UnityAction_1_t1921 * ___call, const MethodInfo* method)
{
	{
		UnityAction_1_t1921 * L_0 = ___call;
		BaseInvokableCall_t616 * L_1 = (( BaseInvokableCall_t616 * (*) (Object_t * /* static, unused */, UnityAction_1_t1921 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(NULL /*static, unused*/, (UnityAction_1_t1921 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		NullCheck((UnityEventBase_t624 *)__this);
		UnityEventBase_AddCall_m3562((UnityEventBase_t624 *)__this, (BaseInvokableCall_t616 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// UnityEngineInternal.NetFxCoreExtensions
#include "UnityEngine_UnityEngineInternal_NetFxCoreExtensionsMethodDeclarations.h"
extern "C" void UnityEvent_1_RemoveListener_m12655_gshared (UnityEvent_1_t190 * __this, UnityAction_1_t1921 * ___call, const MethodInfo* method)
{
	{
		UnityAction_1_t1921 * L_0 = ___call;
		NullCheck((Delegate_t74 *)L_0);
		Object_t * L_1 = Delegate_get_Target_m3667((Delegate_t74 *)L_0, /*hidden argument*/NULL);
		UnityAction_1_t1921 * L_2 = ___call;
		MethodInfo_t * L_3 = NetFxCoreExtensions_GetMethodInfo_m3581(NULL /*static, unused*/, (Delegate_t74 *)L_2, /*hidden argument*/NULL);
		NullCheck((UnityEventBase_t624 *)__this);
		UnityEventBase_RemoveListener_m3563((UnityEventBase_t624 *)__this, (Object_t *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Int32>::FindMethod_Impl(System.String,System.Object)
// System.String
#include "mscorlib_System_String.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
extern TypeInfo* TypeU5BU5D_t645_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m12656_gshared (UnityEvent_1_t190 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeU5BU5D_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(393);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(194);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___targetObj;
		String_t* L_1 = ___name;
		TypeU5BU5D_t645* L_2 = (TypeU5BU5D_t645*)((TypeU5BU5D_t645*)SZArrayNew(TypeU5BU5D_t645_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m2130(NULL /*static, unused*/, (RuntimeTypeHandle_t1077 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_2, 0, sizeof(Type_t *))) = (Type_t *)L_3;
		MethodInfo_t * L_4 = UnityEventBase_GetValidMethodInfo_m3566(NULL /*static, unused*/, (Object_t *)L_0, (String_t*)L_1, (TypeU5BU5D_t645*)L_2, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Int32>::GetDelegate(System.Object,System.Reflection.MethodInfo)
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
extern "C" BaseInvokableCall_t616 * UnityEvent_1_GetDelegate_m12657_gshared (UnityEvent_1_t190 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		InvokableCall_1_t1922 * L_2 = (InvokableCall_1_t1922 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		(( void (*) (InvokableCall_1_t1922 *, Object_t *, MethodInfo_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_2, (Object_t *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_2;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Int32>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t616 * UnityEvent_1_GetDelegate_m12658_gshared (Object_t * __this /* static, unused */, UnityAction_1_t1921 * ___action, const MethodInfo* method)
{
	{
		UnityAction_1_t1921 * L_0 = ___action;
		InvokableCall_1_t1922 * L_1 = (InvokableCall_1_t1922 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		(( void (*) (InvokableCall_1_t1922 *, UnityAction_1_t1921 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_1, (UnityAction_1_t1921 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_1;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::Invoke(T0)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void UnityEvent_1_Invoke_m2066_gshared (UnityEvent_1_t190 * __this, int32_t ___arg0, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t78* L_0 = (ObjectU5BU5D_t78*)(__this->___m_InvokeArray_4);
		int32_t L_1 = ___arg0;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_3;
		ObjectU5BU5D_t78* L_4 = (ObjectU5BU5D_t78*)(__this->___m_InvokeArray_4);
		NullCheck((UnityEventBase_t624 *)__this);
		UnityEventBase_Invoke_m3564((UnityEventBase_t624 *)__this, (ObjectU5BU5D_t78*)L_4, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Events.UnityAction`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_8MethodDeclarations.h"
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void UnityAction_1__ctor_m12659_gshared (UnityAction_1_t1921 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::Invoke(T0)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void UnityAction_1_Invoke_m12660_gshared (UnityAction_1_t1921 * __this, int32_t ___arg0, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAction_1_Invoke_m12660((UnityAction_1_t1921 *)__this->___prev_9,___arg0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___arg0, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg0,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, int32_t ___arg0, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg0,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Int32>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* Int32_t106_il2cpp_TypeInfo_var;
extern "C" Object_t * UnityAction_1_BeginInvoke_m12661_gshared (UnityAction_1_t1921 * __this, int32_t ___arg0, AsyncCallback_t9 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t106_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t106_il2cpp_TypeInfo_var, &___arg0);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m12662_gshared (UnityAction_1_t1921 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
struct Object_t;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Int32>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Int32>(System.Object)
extern "C" void BaseInvokableCall_ThrowOnInvalidArg_TisInt32_t106_m17761_gshared (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method);
#define BaseInvokableCall_ThrowOnInvalidArg_TisInt32_t106_m17761(__this /* static, unused */, p0, method) (( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))BaseInvokableCall_ThrowOnInvalidArg_TisInt32_t106_m17761_gshared)(__this /* static, unused */, p0, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Object
#include "mscorlib_System_Object.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCallMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// UnityEngineInternal.NetFxCoreExtensions
#include "UnityEngine_UnityEngineInternal_NetFxCoreExtensionsMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void InvokableCall_1__ctor_m12663_gshared (InvokableCall_1_t1922 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(194);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		NullCheck((BaseInvokableCall_t616 *)__this);
		BaseInvokableCall__ctor_m3533((BaseInvokableCall_t616 *)__this, (Object_t *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		UnityAction_1_t1921 * L_2 = (UnityAction_1_t1921 *)(__this->___Delegate_0);
		MethodInfo_t * L_3 = ___theFunction;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m2130(NULL /*static, unused*/, (RuntimeTypeHandle_t1077 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Object_t * L_5 = ___target;
		Delegate_t74 * L_6 = NetFxCoreExtensions_CreateDelegate_m3580(NULL /*static, unused*/, (MethodInfo_t *)L_3, (Type_t *)L_4, (Object_t *)L_5, /*hidden argument*/NULL);
		Delegate_t74 * L_7 = Delegate_Combine_m303(NULL /*static, unused*/, (Delegate_t74 *)L_2, (Delegate_t74 *)((UnityAction_1_t1921 *)Castclass(L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))), /*hidden argument*/NULL);
		__this->___Delegate_0 = ((UnityAction_1_t1921 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// UnityEngine.Events.UnityAction`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_8.h"
extern "C" void InvokableCall_1__ctor_m12664_gshared (InvokableCall_1_t1922 * __this, UnityAction_1_t1921 * ___action, const MethodInfo* method)
{
	{
		NullCheck((BaseInvokableCall_t616 *)__this);
		BaseInvokableCall__ctor_m3532((BaseInvokableCall_t616 *)__this, /*hidden argument*/NULL);
		UnityAction_1_t1921 * L_0 = (UnityAction_1_t1921 *)(__this->___Delegate_0);
		UnityAction_1_t1921 * L_1 = ___action;
		Delegate_t74 * L_2 = Delegate_Combine_m303(NULL /*static, unused*/, (Delegate_t74 *)L_0, (Delegate_t74 *)L_1, /*hidden argument*/NULL);
		__this->___Delegate_0 = ((UnityAction_1_t1921 *)Castclass(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::Invoke(System.Object[])
#include "mscorlib_ArrayTypes.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentException_t402_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2801;
extern "C" void InvokableCall_1_Invoke_m12665_gshared (InvokableCall_1_t1922 * __this, ObjectU5BU5D_t78* ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(269);
		_stringLiteral2801 = il2cpp_codegen_string_literal_from_index(2801);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t78* L_0 = ___args;
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentException_t402 * L_1 = (ArgumentException_t402 *)il2cpp_codegen_object_new (ArgumentException_t402_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2370(L_1, (String_t*)_stringLiteral2801, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0014:
	{
		ObjectU5BU5D_t78* L_2 = ___args;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		int32_t L_3 = 0;
		(( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(NULL /*static, unused*/, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_2, L_3, sizeof(Object_t *))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		UnityAction_1_t1921 * L_4 = (UnityAction_1_t1921 *)(__this->___Delegate_0);
		bool L_5 = BaseInvokableCall_AllowInvoke_m3534(NULL /*static, unused*/, (Delegate_t74 *)L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		UnityAction_1_t1921 * L_6 = (UnityAction_1_t1921 *)(__this->___Delegate_0);
		ObjectU5BU5D_t78* L_7 = ___args;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		int32_t L_8 = 0;
		NullCheck((UnityAction_1_t1921 *)L_6);
		(( void (*) (UnityAction_1_t1921 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((UnityAction_1_t1921 *)L_6, (int32_t)((*(int32_t*)((int32_t*)UnBox ((*(Object_t **)(Object_t **)SZArrayLdElema(L_7, L_8, sizeof(Object_t *))), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	}

IL_003f:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Int32>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m12666_gshared (InvokableCall_1_t1922 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		UnityAction_1_t1921 * L_0 = (UnityAction_1_t1921 *)(__this->___Delegate_0);
		NullCheck((Delegate_t74 *)L_0);
		Object_t * L_1 = Delegate_get_Target_m3667((Delegate_t74 *)L_0, /*hidden argument*/NULL);
		Object_t * L_2 = ___targetObj;
		if ((!(((Object_t*)(Object_t *)L_1) == ((Object_t*)(Object_t *)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		UnityAction_1_t1921 * L_3 = (UnityAction_1_t1921 *)(__this->___Delegate_0);
		MethodInfo_t * L_4 = NetFxCoreExtensions_GetMethodInfo_m3581(NULL /*static, unused*/, (Delegate_t74 *)L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = ___method;
		G_B3_0 = ((((Object_t*)(MethodInfo_t *)L_4) == ((Object_t*)(MethodInfo_t *)L_5))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
#include "UnityEngine_UI_UnityEngine_UI_CoroutineTween_TweenRunner_1_g.h"
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
#include "UnityEngine_UI_UnityEngine_UI_CoroutineTween_TweenRunner_1_gMethodDeclarations.h"
// UnityEngine.UI.CoroutineTween.FloatTween
#include "UnityEngine_UI_UnityEngine_UI_CoroutineTween_FloatTween.h"
// UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.FloatTween>
#include "UnityEngine_UI_UnityEngine_UI_CoroutineTween_TweenRunner_1_U.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_Coroutine.h"
// UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.FloatTween>
#include "UnityEngine_UI_UnityEngine_UI_CoroutineTween_TweenRunner_1_UMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void TweenRunner_1__ctor_m2067_gshared (TweenRunner_1_t195 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m355((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>::Start(T)
// UnityEngine.UI.CoroutineTween.FloatTween
#include "UnityEngine_UI_UnityEngine_UI_CoroutineTween_FloatTween.h"
extern "C" Object_t * TweenRunner_1_Start_m12760_gshared (Object_t * __this /* static, unused */, FloatTween_t165  ___tweenInfo, const MethodInfo* method)
{
	U3CStartU3Ec__Iterator0_t1929 * V_0 = {0};
	{
		U3CStartU3Ec__Iterator0_t1929 * L_0 = (U3CStartU3Ec__Iterator0_t1929 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (U3CStartU3Ec__Iterator0_t1929 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = (U3CStartU3Ec__Iterator0_t1929 *)L_0;
		U3CStartU3Ec__Iterator0_t1929 * L_1 = V_0;
		FloatTween_t165  L_2 = ___tweenInfo;
		NullCheck(L_1);
		L_1->___tweenInfo_0 = L_2;
		U3CStartU3Ec__Iterator0_t1929 * L_3 = V_0;
		FloatTween_t165  L_4 = ___tweenInfo;
		NullCheck(L_3);
		L_3->___U3CU24U3EtweenInfo_5 = L_4;
		U3CStartU3Ec__Iterator0_t1929 * L_5 = V_0;
		return L_5;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>::Init(UnityEngine.MonoBehaviour)
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
extern "C" void TweenRunner_1_Init_m2068_gshared (TweenRunner_1_t195 * __this, MonoBehaviour_t2 * ___coroutineContainer, const MethodInfo* method)
{
	{
		MonoBehaviour_t2 * L_0 = ___coroutineContainer;
		__this->___m_CoroutineContainer_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>::StartTween(T)
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// UnityEngine.UI.CoroutineTween.FloatTween
#include "UnityEngine_UI_UnityEngine_UI_CoroutineTween_FloatTweenMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral2811;
extern "C" void TweenRunner_1_StartTween_m2110_gshared (TweenRunner_1_t195 * __this, FloatTween_t165  ___info, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral2811 = il2cpp_codegen_string_literal_from_index(2811);
		s_Il2CppMethodIntialized = true;
	}
	{
		MonoBehaviour_t2 * L_0 = (MonoBehaviour_t2 *)(__this->___m_CoroutineContainer_0);
		bool L_1 = Object_op_Equality_m305(NULL /*static, unused*/, (Object_t75 *)L_0, (Object_t75 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Debug_LogWarning_m310(NULL /*static, unused*/, (Object_t *)_stringLiteral2811, /*hidden argument*/NULL);
		return;
	}

IL_001c:
	{
		Object_t * L_2 = (Object_t *)(__this->___m_Tween_1);
		if (!L_2)
		{
			goto IL_003f;
		}
	}
	{
		MonoBehaviour_t2 * L_3 = (MonoBehaviour_t2 *)(__this->___m_CoroutineContainer_0);
		Object_t * L_4 = (Object_t *)(__this->___m_Tween_1);
		NullCheck((MonoBehaviour_t2 *)L_3);
		MonoBehaviour_StopCoroutine_m2869((MonoBehaviour_t2 *)L_3, (Object_t *)L_4, /*hidden argument*/NULL);
		__this->___m_Tween_1 = (Object_t *)NULL;
	}

IL_003f:
	{
		MonoBehaviour_t2 * L_5 = (MonoBehaviour_t2 *)(__this->___m_CoroutineContainer_0);
		NullCheck((Component_t70 *)L_5);
		GameObject_t47 * L_6 = Component_get_gameObject_m307((Component_t70 *)L_5, /*hidden argument*/NULL);
		NullCheck((GameObject_t47 *)L_6);
		bool L_7 = GameObject_get_activeInHierarchy_m308((GameObject_t47 *)L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0067;
		}
	}
	{
		NullCheck((FloatTween_t165 *)(&___info));
		FloatTween_TweenValue_m833((FloatTween_t165 *)(&___info), (float)(1.0f), NULL);
		return;
	}

IL_0067:
	{
		FloatTween_t165  L_8 = ___info;
		Object_t * L_9 = (( Object_t * (*) (Object_t * /* static, unused */, FloatTween_t165 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(NULL /*static, unused*/, (FloatTween_t165 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		__this->___m_Tween_1 = L_9;
		MonoBehaviour_t2 * L_10 = (MonoBehaviour_t2 *)(__this->___m_CoroutineContainer_0);
		Object_t * L_11 = (Object_t *)(__this->___m_Tween_1);
		NullCheck((MonoBehaviour_t2 *)L_10);
		MonoBehaviour_StartCoroutine_m2016((MonoBehaviour_t2 *)L_10, (Object_t *)L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.UInt32
#include "mscorlib_System_UInt32.h"
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.FloatTween>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void U3CStartU3Ec__Iterator0__ctor_m12761_gshared (U3CStartU3Ec__Iterator0_t1929 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m355((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.FloatTween>::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CStartU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m12762_gshared (U3CStartU3Ec__Iterator0_t1929 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_4);
		return L_0;
	}
}
// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.FloatTween>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CStartU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m12763_gshared (U3CStartU3Ec__Iterator0_t1929 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_4);
		return L_0;
	}
}
// System.Boolean UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.FloatTween>::MoveNext()
// UnityEngine.UI.CoroutineTween.FloatTween
#include "UnityEngine_UI_UnityEngine_UI_CoroutineTween_FloatTweenMethodDeclarations.h"
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
extern TypeInfo* Mathf_t69_il2cpp_TypeInfo_var;
extern "C" bool U3CStartU3Ec__Iterator0_MoveNext_m12764_gshared (U3CStartU3Ec__Iterator0_t1929 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t69_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	float G_B7_0 = 0.0f;
	U3CStartU3Ec__Iterator0_t1929 * G_B7_1 = {0};
	float G_B6_0 = 0.0f;
	U3CStartU3Ec__Iterator0_t1929 * G_B6_1 = {0};
	float G_B8_0 = 0.0f;
	float G_B8_1 = 0.0f;
	U3CStartU3Ec__Iterator0_t1929 * G_B8_2 = {0};
	{
		int32_t L_0 = (int32_t)(__this->___U24PC_3);
		V_0 = (uint32_t)L_0;
		__this->___U24PC_3 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_00cb;
		}
	}
	{
		goto IL_0104;
	}

IL_0021:
	{
		FloatTween_t165 * L_2 = (FloatTween_t165 *)&(__this->___tweenInfo_0);
		NullCheck((FloatTween_t165 *)L_2);
		bool L_3 = FloatTween_ValidTarget_m837((FloatTween_t165 *)L_2, NULL);
		if (L_3)
		{
			goto IL_003c;
		}
	}
	{
		goto IL_0104;
	}

IL_003c:
	{
		__this->___U3CelapsedTimeU3E__0_1 = (0.0f);
		goto IL_00cb;
	}

IL_004c:
	{
		float L_4 = (float)(__this->___U3CelapsedTimeU3E__0_1);
		FloatTween_t165 * L_5 = (FloatTween_t165 *)&(__this->___tweenInfo_0);
		NullCheck((FloatTween_t165 *)L_5);
		bool L_6 = FloatTween_get_ignoreTimeScale_m831((FloatTween_t165 *)L_5, NULL);
		G_B6_0 = L_4;
		G_B6_1 = ((U3CStartU3Ec__Iterator0_t1929 *)(__this));
		if (!L_6)
		{
			G_B7_0 = L_4;
			G_B7_1 = ((U3CStartU3Ec__Iterator0_t1929 *)(__this));
			goto IL_0073;
		}
	}
	{
		float L_7 = Time_get_unscaledDeltaTime_m2014(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B8_0 = L_7;
		G_B8_1 = G_B6_0;
		G_B8_2 = ((U3CStartU3Ec__Iterator0_t1929 *)(G_B6_1));
		goto IL_0078;
	}

IL_0073:
	{
		float L_8 = Time_get_deltaTime_m2925(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B8_0 = L_8;
		G_B8_1 = G_B7_0;
		G_B8_2 = ((U3CStartU3Ec__Iterator0_t1929 *)(G_B7_1));
	}

IL_0078:
	{
		NullCheck(G_B8_2);
		G_B8_2->___U3CelapsedTimeU3E__0_1 = ((float)((float)G_B8_1+(float)G_B8_0));
		float L_9 = (float)(__this->___U3CelapsedTimeU3E__0_1);
		FloatTween_t165 * L_10 = (FloatTween_t165 *)&(__this->___tweenInfo_0);
		NullCheck((FloatTween_t165 *)L_10);
		float L_11 = FloatTween_get_duration_m829((FloatTween_t165 *)L_10, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t69_il2cpp_TypeInfo_var);
		float L_12 = Mathf_Clamp01_m363(NULL /*static, unused*/, (float)((float)((float)L_9/(float)L_11)), /*hidden argument*/NULL);
		__this->___U3CpercentageU3E__1_2 = L_12;
		FloatTween_t165 * L_13 = (FloatTween_t165 *)&(__this->___tweenInfo_0);
		float L_14 = (float)(__this->___U3CpercentageU3E__1_2);
		NullCheck((FloatTween_t165 *)L_13);
		FloatTween_TweenValue_m833((FloatTween_t165 *)L_13, (float)L_14, NULL);
		__this->___U24current_4 = NULL;
		__this->___U24PC_3 = 1;
		goto IL_0106;
	}

IL_00cb:
	{
		float L_15 = (float)(__this->___U3CelapsedTimeU3E__0_1);
		FloatTween_t165 * L_16 = (FloatTween_t165 *)&(__this->___tweenInfo_0);
		NullCheck((FloatTween_t165 *)L_16);
		float L_17 = FloatTween_get_duration_m829((FloatTween_t165 *)L_16, NULL);
		if ((((float)L_15) < ((float)L_17)))
		{
			goto IL_004c;
		}
	}
	{
		FloatTween_t165 * L_18 = (FloatTween_t165 *)&(__this->___tweenInfo_0);
		NullCheck((FloatTween_t165 *)L_18);
		FloatTween_TweenValue_m833((FloatTween_t165 *)L_18, (float)(1.0f), NULL);
		__this->___U24PC_3 = (-1);
	}

IL_0104:
	{
		return 0;
	}

IL_0106:
	{
		return 1;
	}
	// Dead block : IL_0108: ldloc.1
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.FloatTween>::Dispose()
extern "C" void U3CStartU3Ec__Iterator0_Dispose_m12765_gshared (U3CStartU3Ec__Iterator0_t1929 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_3 = (-1);
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.FloatTween>::Reset()
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t81_il2cpp_TypeInfo_var;
extern "C" void U3CStartU3Ec__Iterator0_Reset_m12766_gshared (U3CStartU3Ec__Iterator0_t1929 * __this, const MethodInfo* method)
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
// System.Array/InternalEnumerator`1<UnityEngine.Vector3>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_15.h"
// System.Array/InternalEnumerator`1<UnityEngine.Vector3>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_15MethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Vector3>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Vector3>(System.Int32)
extern "C" Vector3_t3  Array_InternalArray__get_Item_TisVector3_t3_m17762_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisVector3_t3_m17762(__this, p0, method) (( Vector3_t3  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisVector3_t3_m17762_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Vector3>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m12861_gshared (InternalEnumerator_1_t1936 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Vector3>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12862_gshared (InternalEnumerator_1_t1936 * __this, const MethodInfo* method)
{
	{
		Vector3_t3  L_0 = (( Vector3_t3  (*) (InternalEnumerator_1_t1936 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t1936 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Vector3_t3  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Vector3>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12863_gshared (InternalEnumerator_1_t1936 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Vector3>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m12864_gshared (InternalEnumerator_1_t1936 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001e;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m5638((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001e:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B5_0 = 0;
	}

IL_0044:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<UnityEngine.Vector3>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t881_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2793;
extern Il2CppCodeGenString* _stringLiteral2794;
extern "C" Vector3_t3  InternalEnumerator_1_get_Current_m12865_gshared (InternalEnumerator_1_t1936 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t881_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(515);
		_stringLiteral2793 = il2cpp_codegen_string_literal_from_index(2793);
		_stringLiteral2794 = il2cpp_codegen_string_literal_from_index(2794);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t881 * L_1 = (InvalidOperationException_t881 *)il2cpp_codegen_object_new (InvalidOperationException_t881_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4709(L_1, (String_t*)_stringLiteral2793, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0018:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_002f;
		}
	}
	{
		InvalidOperationException_t881 * L_3 = (InvalidOperationException_t881 *)il2cpp_codegen_object_new (InvalidOperationException_t881_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4709(L_3, (String_t*)_stringLiteral2794, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_002f:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m5638((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		Vector3_t3  L_8 = (( Vector3_t3  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// UnityEngine.Events.UnityAction`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_2.h"
// UnityEngine.Events.UnityAction`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_2MethodDeclarations.h"
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void UnityAction_1__ctor_m2086_gshared (UnityAction_1_t373 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::Invoke(T0)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void UnityAction_1_Invoke_m12879_gshared (UnityAction_1_t373 * __this, bool ___arg0, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAction_1_Invoke_m12879((UnityAction_1_t373 *)__this->___prev_9,___arg0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, bool ___arg0, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg0,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, bool ___arg0, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg0,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Boolean>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* Boolean_t356_il2cpp_TypeInfo_var;
extern "C" Object_t * UnityAction_1_BeginInvoke_m12880_gshared (UnityAction_1_t373 * __this, bool ___arg0, AsyncCallback_t9 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t356_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(47);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_t356_il2cpp_TypeInfo_var, &___arg0);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m12881_gshared (UnityAction_1_t373 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Events.UnityEvent`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_4.h"
// UnityEngine.Events.UnityEvent`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_4MethodDeclarations.h"
// UnityEngine.Events.InvokableCall`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_3.h"
// UnityEngine.Events.InvokableCall`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_3MethodDeclarations.h"
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::.ctor()
// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBaseMethodDeclarations.h"
extern TypeInfo* ObjectU5BU5D_t78_il2cpp_TypeInfo_var;
extern "C" void UnityEvent_1__ctor_m2285_gshared (UnityEvent_1_t244 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t78_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(113);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_InvokeArray_4 = ((ObjectU5BU5D_t78*)SZArrayNew(ObjectU5BU5D_t78_il2cpp_TypeInfo_var, 1));
		NullCheck((UnityEventBase_t624 *)__this);
		UnityEventBase__ctor_m3555((UnityEventBase_t624 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
// UnityEngine.Events.UnityAction`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_2.h"
extern "C" void UnityEvent_1_AddListener_m2087_gshared (UnityEvent_1_t244 * __this, UnityAction_1_t373 * ___call, const MethodInfo* method)
{
	{
		UnityAction_1_t373 * L_0 = ___call;
		BaseInvokableCall_t616 * L_1 = (( BaseInvokableCall_t616 * (*) (Object_t * /* static, unused */, UnityAction_1_t373 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(NULL /*static, unused*/, (UnityAction_1_t373 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		NullCheck((UnityEventBase_t624 *)__this);
		UnityEventBase_AddCall_m3562((UnityEventBase_t624 *)__this, (BaseInvokableCall_t616 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// UnityEngineInternal.NetFxCoreExtensions
#include "UnityEngine_UnityEngineInternal_NetFxCoreExtensionsMethodDeclarations.h"
extern "C" void UnityEvent_1_RemoveListener_m12882_gshared (UnityEvent_1_t244 * __this, UnityAction_1_t373 * ___call, const MethodInfo* method)
{
	{
		UnityAction_1_t373 * L_0 = ___call;
		NullCheck((Delegate_t74 *)L_0);
		Object_t * L_1 = Delegate_get_Target_m3667((Delegate_t74 *)L_0, /*hidden argument*/NULL);
		UnityAction_1_t373 * L_2 = ___call;
		MethodInfo_t * L_3 = NetFxCoreExtensions_GetMethodInfo_m3581(NULL /*static, unused*/, (Delegate_t74 *)L_2, /*hidden argument*/NULL);
		NullCheck((UnityEventBase_t624 *)__this);
		UnityEventBase_RemoveListener_m3563((UnityEventBase_t624 *)__this, (Object_t *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Boolean>::FindMethod_Impl(System.String,System.Object)
// System.String
#include "mscorlib_System_String.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
extern TypeInfo* TypeU5BU5D_t645_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m12883_gshared (UnityEvent_1_t244 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeU5BU5D_t645_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(393);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(194);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___targetObj;
		String_t* L_1 = ___name;
		TypeU5BU5D_t645* L_2 = (TypeU5BU5D_t645*)((TypeU5BU5D_t645*)SZArrayNew(TypeU5BU5D_t645_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m2130(NULL /*static, unused*/, (RuntimeTypeHandle_t1077 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_2, 0, sizeof(Type_t *))) = (Type_t *)L_3;
		MethodInfo_t * L_4 = UnityEventBase_GetValidMethodInfo_m3566(NULL /*static, unused*/, (Object_t *)L_0, (String_t*)L_1, (TypeU5BU5D_t645*)L_2, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Boolean>::GetDelegate(System.Object,System.Reflection.MethodInfo)
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
extern "C" BaseInvokableCall_t616 * UnityEvent_1_GetDelegate_m12884_gshared (UnityEvent_1_t244 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		InvokableCall_1_t1941 * L_2 = (InvokableCall_1_t1941 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		(( void (*) (InvokableCall_1_t1941 *, Object_t *, MethodInfo_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_2, (Object_t *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_2;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Boolean>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t616 * UnityEvent_1_GetDelegate_m12885_gshared (Object_t * __this /* static, unused */, UnityAction_1_t373 * ___action, const MethodInfo* method)
{
	{
		UnityAction_1_t373 * L_0 = ___action;
		InvokableCall_1_t1941 * L_1 = (InvokableCall_1_t1941 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		(( void (*) (InvokableCall_1_t1941 *, UnityAction_1_t373 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_1, (UnityAction_1_t373 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_1;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(T0)
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern "C" void UnityEvent_1_Invoke_m2290_gshared (UnityEvent_1_t244 * __this, bool ___arg0, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t78* L_0 = (ObjectU5BU5D_t78*)(__this->___m_InvokeArray_4);
		bool L_1 = ___arg0;
		bool L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_3;
		ObjectU5BU5D_t78* L_4 = (ObjectU5BU5D_t78*)(__this->___m_InvokeArray_4);
		NullCheck((UnityEventBase_t624 *)__this);
		UnityEventBase_Invoke_m3564((UnityEventBase_t624 *)__this, (ObjectU5BU5D_t78*)L_4, /*hidden argument*/NULL);
		return;
	}
}
struct Object_t;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Boolean>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Boolean>(System.Object)
extern "C" void BaseInvokableCall_ThrowOnInvalidArg_TisBoolean_t356_m17773_gshared (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method);
#define BaseInvokableCall_ThrowOnInvalidArg_TisBoolean_t356_m17773(__this /* static, unused */, p0, method) (( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))BaseInvokableCall_ThrowOnInvalidArg_TisBoolean_t356_m17773_gshared)(__this /* static, unused */, p0, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Object
#include "mscorlib_System_Object.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCallMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// UnityEngineInternal.NetFxCoreExtensions
#include "UnityEngine_UnityEngineInternal_NetFxCoreExtensionsMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void InvokableCall_1__ctor_m12886_gshared (InvokableCall_1_t1941 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(194);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		NullCheck((BaseInvokableCall_t616 *)__this);
		BaseInvokableCall__ctor_m3533((BaseInvokableCall_t616 *)__this, (Object_t *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		UnityAction_1_t373 * L_2 = (UnityAction_1_t373 *)(__this->___Delegate_0);
		MethodInfo_t * L_3 = ___theFunction;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m2130(NULL /*static, unused*/, (RuntimeTypeHandle_t1077 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Object_t * L_5 = ___target;
		Delegate_t74 * L_6 = NetFxCoreExtensions_CreateDelegate_m3580(NULL /*static, unused*/, (MethodInfo_t *)L_3, (Type_t *)L_4, (Object_t *)L_5, /*hidden argument*/NULL);
		Delegate_t74 * L_7 = Delegate_Combine_m303(NULL /*static, unused*/, (Delegate_t74 *)L_2, (Delegate_t74 *)((UnityAction_1_t373 *)Castclass(L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))), /*hidden argument*/NULL);
		__this->___Delegate_0 = ((UnityAction_1_t373 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// UnityEngine.Events.UnityAction`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_2.h"
extern "C" void InvokableCall_1__ctor_m12887_gshared (InvokableCall_1_t1941 * __this, UnityAction_1_t373 * ___action, const MethodInfo* method)
{
	{
		NullCheck((BaseInvokableCall_t616 *)__this);
		BaseInvokableCall__ctor_m3532((BaseInvokableCall_t616 *)__this, /*hidden argument*/NULL);
		UnityAction_1_t373 * L_0 = (UnityAction_1_t373 *)(__this->___Delegate_0);
		UnityAction_1_t373 * L_1 = ___action;
		Delegate_t74 * L_2 = Delegate_Combine_m303(NULL /*static, unused*/, (Delegate_t74 *)L_0, (Delegate_t74 *)L_1, /*hidden argument*/NULL);
		__this->___Delegate_0 = ((UnityAction_1_t373 *)Castclass(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::Invoke(System.Object[])
#include "mscorlib_ArrayTypes.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentException_t402_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2801;
extern "C" void InvokableCall_1_Invoke_m12888_gshared (InvokableCall_1_t1941 * __this, ObjectU5BU5D_t78* ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(269);
		_stringLiteral2801 = il2cpp_codegen_string_literal_from_index(2801);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t78* L_0 = ___args;
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentException_t402 * L_1 = (ArgumentException_t402 *)il2cpp_codegen_object_new (ArgumentException_t402_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2370(L_1, (String_t*)_stringLiteral2801, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0014:
	{
		ObjectU5BU5D_t78* L_2 = ___args;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		int32_t L_3 = 0;
		(( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(NULL /*static, unused*/, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_2, L_3, sizeof(Object_t *))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		UnityAction_1_t373 * L_4 = (UnityAction_1_t373 *)(__this->___Delegate_0);
		bool L_5 = BaseInvokableCall_AllowInvoke_m3534(NULL /*static, unused*/, (Delegate_t74 *)L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		UnityAction_1_t373 * L_6 = (UnityAction_1_t373 *)(__this->___Delegate_0);
		ObjectU5BU5D_t78* L_7 = ___args;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		int32_t L_8 = 0;
		NullCheck((UnityAction_1_t373 *)L_6);
		(( void (*) (UnityAction_1_t373 *, bool, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((UnityAction_1_t373 *)L_6, (bool)((*(bool*)((bool*)UnBox ((*(Object_t **)(Object_t **)SZArrayLdElema(L_7, L_8, sizeof(Object_t *))), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	}

IL_003f:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Boolean>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m12889_gshared (InvokableCall_1_t1941 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		UnityAction_1_t373 * L_0 = (UnityAction_1_t373 *)(__this->___Delegate_0);
		NullCheck((Delegate_t74 *)L_0);
		Object_t * L_1 = Delegate_get_Target_m3667((Delegate_t74 *)L_0, /*hidden argument*/NULL);
		Object_t * L_2 = ___targetObj;
		if ((!(((Object_t*)(Object_t *)L_1) == ((Object_t*)(Object_t *)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		UnityAction_1_t373 * L_3 = (UnityAction_1_t373 *)(__this->___Delegate_0);
		MethodInfo_t * L_4 = NetFxCoreExtensions_GetMethodInfo_m3581(NULL /*static, unused*/, (Delegate_t74 *)L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = ___method;
		G_B3_0 = ((((Object_t*)(MethodInfo_t *)L_4) == ((Object_t*)(MethodInfo_t *)L_5))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_11.h"
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_11MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_8.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_9.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__2.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_1.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_7.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_8MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_9MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__2MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_1MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_7MethodDeclarations.h"
struct DictionaryEntryU5BU5D_t2442;
struct Transform_1_t1953;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1050_TisDictionaryEntry_t1050_m17787_gshared (Dictionary_2_t1952 * __this, DictionaryEntryU5BU5D_t2442* p0, int32_t p1, Transform_1_t1953 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1050_TisDictionaryEntry_t1050_m17787(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t1952 *, DictionaryEntryU5BU5D_t2442*, int32_t, Transform_1_t1953 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1050_TisDictionaryEntry_t1050_m17787_gshared)(__this, p0, p1, p2, method)
struct Array_t;
struct Transform_1_t1960;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t1954_m17788_gshared (Dictionary_2_t1952 * __this, Array_t * p0, int32_t p1, Transform_1_t1960 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t1954_m17788(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t1952 *, Array_t *, int32_t, Transform_1_t1960 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t1954_m17788_gshared)(__this, p0, p1, p2, method)
struct KeyValuePair_2U5BU5D_t2370;
struct Transform_1_t1960;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t1954_TisKeyValuePair_2_t1954_m17790_gshared (Dictionary_2_t1952 * __this, KeyValuePair_2U5BU5D_t2370* p0, int32_t p1, Transform_1_t1960 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t1954_TisKeyValuePair_2_t1954_m17790(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t1952 *, KeyValuePair_2U5BU5D_t2370*, int32_t, Transform_1_t1960 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t1954_TisKeyValuePair_2_t1954_m17790_gshared)(__this, p0, p1, p2, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void Dictionary_2__ctor_m12890_gshared (Dictionary_2_t1952 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m355((Object_t *)__this, /*hidden argument*/NULL);
		NullCheck((Dictionary_2_t1952 *)__this);
		(( void (*) (Dictionary_2_t1952 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t1952 *)__this, (int32_t)((int32_t)10), (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m12892_gshared (Dictionary_2_t1952 * __this, Object_t* ___comparer, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m355((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___comparer;
		NullCheck((Dictionary_2_t1952 *)__this);
		(( void (*) (Dictionary_2_t1952 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t1952 *)__this, (int32_t)((int32_t)10), (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void Dictionary_2__ctor_m12894_gshared (Dictionary_2_t1952 * __this, int32_t ___capacity, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m355((Object_t *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___capacity;
		NullCheck((Dictionary_2_t1952 *)__this);
		(( void (*) (Dictionary_2_t1952 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t1952 *)__this, (int32_t)L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
extern "C" void Dictionary_2__ctor_m12896_gshared (Dictionary_2_t1952 * __this, SerializationInfo_t647 * ___info, StreamingContext_t648  ___context, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m355((Object_t *)__this, /*hidden argument*/NULL);
		SerializationInfo_t647 * L_0 = ___info;
		__this->___serialization_info_13 = L_0;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m12898_gshared (Dictionary_2_t1952 * __this, Object_t * ___key, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		if (!((Object_t *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))))
		{
			goto IL_002f;
		}
	}
	{
		Object_t * L_1 = ___key;
		NullCheck((Dictionary_2_t1952 *)__this);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(28 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey) */, (Dictionary_2_t1952 *)__this, (Object_t *)((Object_t *)Castclass(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))));
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t1952 *)__this);
		Object_t * L_4 = (( Object_t * (*) (Dictionary_2_t1952 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Dictionary_2_t1952 *)__this, (Object_t *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		NullCheck((Dictionary_2_t1952 *)__this);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(25 /* TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey) */, (Dictionary_2_t1952 *)__this, (Object_t *)L_4);
		return L_5;
	}

IL_002f:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m12900_gshared (Dictionary_2_t1952 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck((Dictionary_2_t1952 *)__this);
		Object_t * L_1 = (( Object_t * (*) (Dictionary_2_t1952 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Dictionary_2_t1952 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Object_t * L_2 = ___value;
		NullCheck((Dictionary_2_t1952 *)__this);
		Object_t * L_3 = (( Object_t * (*) (Dictionary_2_t1952 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((Dictionary_2_t1952 *)__this, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		NullCheck((Dictionary_2_t1952 *)__this);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(26 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue) */, (Dictionary_2_t1952 *)__this, (Object_t *)L_1, (Object_t *)L_3);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m12902_gshared (Dictionary_2_t1952 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck((Dictionary_2_t1952 *)__this);
		Object_t * L_1 = (( Object_t * (*) (Dictionary_2_t1952 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Dictionary_2_t1952 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Object_t * L_2 = ___value;
		NullCheck((Dictionary_2_t1952 *)__this);
		Object_t * L_3 = (( Object_t * (*) (Dictionary_2_t1952 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((Dictionary_2_t1952 *)__this, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		NullCheck((Dictionary_2_t1952 *)__this);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue) */, (Dictionary_2_t1952 *)__this, (Object_t *)L_1, (Object_t *)L_3);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t677_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral711;
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m12904_gshared (Dictionary_2_t1952 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t677_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		_stringLiteral711 = il2cpp_codegen_string_literal_from_index(711);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t677 * L_1 = (ArgumentNullException_t677 *)il2cpp_codegen_object_new (ArgumentNullException_t677_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3666(L_1, (String_t*)_stringLiteral711, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		Object_t * L_2 = ___key;
		if (!((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))))
		{
			goto IL_0029;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t1952 *)__this);
		bool L_4 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(28 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey) */, (Dictionary_2_t1952 *)__this, (Object_t *)((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))));
		return L_4;
	}

IL_0029:
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern TypeInfo* ArgumentNullException_t677_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral711;
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m12906_gshared (Dictionary_2_t1952 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t677_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		_stringLiteral711 = il2cpp_codegen_string_literal_from_index(711);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t677 * L_1 = (ArgumentNullException_t677 *)il2cpp_codegen_object_new (ArgumentNullException_t677_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3666(L_1, (String_t*)_stringLiteral711, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		Object_t * L_2 = ___key;
		if (!((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))))
		{
			goto IL_0029;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t1952 *)__this);
		VirtFuncInvoker1< bool, Object_t * >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey) */, (Dictionary_2_t1952 *)__this, (Object_t *)((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))));
	}

IL_0029:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12908_gshared (Dictionary_2_t1952 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12910_gshared (Dictionary_2_t1952 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12912_gshared (Dictionary_2_t1952 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12914_gshared (Dictionary_2_t1952 * __this, KeyValuePair_2_t1954  ___keyValuePair, const MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (KeyValuePair_2_t1954 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((KeyValuePair_2_t1954 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t1954 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)((KeyValuePair_2_t1954 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		NullCheck((Dictionary_2_t1952 *)__this);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue) */, (Dictionary_2_t1952 *)__this, (Object_t *)L_0, (Object_t *)L_1);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12916_gshared (Dictionary_2_t1952 * __this, KeyValuePair_2_t1954  ___keyValuePair, const MethodInfo* method)
{
	{
		KeyValuePair_2_t1954  L_0 = ___keyValuePair;
		NullCheck((Dictionary_2_t1952 *)__this);
		bool L_1 = (( bool (*) (Dictionary_2_t1952 *, KeyValuePair_2_t1954 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t1952 *)__this, (KeyValuePair_2_t1954 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#include "mscorlib_ArrayTypes.h"
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12918_gshared (Dictionary_2_t1952 * __this, KeyValuePair_2U5BU5D_t2370* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t2370* L_0 = ___array;
		int32_t L_1 = ___index;
		NullCheck((Dictionary_2_t1952 *)__this);
		(( void (*) (Dictionary_2_t1952 *, KeyValuePair_2U5BU5D_t2370*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)((Dictionary_2_t1952 *)__this, (KeyValuePair_2U5BU5D_t2370*)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12920_gshared (Dictionary_2_t1952 * __this, KeyValuePair_2_t1954  ___keyValuePair, const MethodInfo* method)
{
	{
		KeyValuePair_2_t1954  L_0 = ___keyValuePair;
		NullCheck((Dictionary_2_t1952 *)__this);
		bool L_1 = (( bool (*) (Dictionary_2_t1952 *, KeyValuePair_2_t1954 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t1952 *)__this, (KeyValuePair_2_t1954 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		return 0;
	}

IL_000e:
	{
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t1954 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((KeyValuePair_2_t1954 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		NullCheck((Dictionary_2_t1952 *)__this);
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey) */, (Dictionary_2_t1952 *)__this, (Object_t *)L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
extern TypeInfo* DictionaryEntryU5BU5D_t2442_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m12922_gshared (Dictionary_2_t1952 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEntryU5BU5D_t2442_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2658);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2U5BU5D_t2370* V_0 = {0};
	DictionaryEntryU5BU5D_t2442* V_1 = {0};
	int32_t G_B5_0 = 0;
	DictionaryEntryU5BU5D_t2442* G_B5_1 = {0};
	Dictionary_2_t1952 * G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	DictionaryEntryU5BU5D_t2442* G_B4_1 = {0};
	Dictionary_2_t1952 * G_B4_2 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (KeyValuePair_2U5BU5D_t2370*)((KeyValuePair_2U5BU5D_t2370*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)));
		KeyValuePair_2U5BU5D_t2370* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		KeyValuePair_2U5BU5D_t2370* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((Dictionary_2_t1952 *)__this);
		(( void (*) (Dictionary_2_t1952 *, KeyValuePair_2U5BU5D_t2370*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)((Dictionary_2_t1952 *)__this, (KeyValuePair_2U5BU5D_t2370*)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		return;
	}

IL_0016:
	{
		Array_t * L_4 = ___array;
		int32_t L_5 = ___index;
		NullCheck((Dictionary_2_t1952 *)__this);
		(( void (*) (Dictionary_2_t1952 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((Dictionary_2_t1952 *)__this, (Array_t *)L_4, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		Array_t * L_6 = ___array;
		V_1 = (DictionaryEntryU5BU5D_t2442*)((DictionaryEntryU5BU5D_t2442*)IsInst(L_6, DictionaryEntryU5BU5D_t2442_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t2442* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0051;
		}
	}
	{
		DictionaryEntryU5BU5D_t2442* L_8 = V_1;
		int32_t L_9 = ___index;
		Transform_1_t1953 * L_10 = ((Dictionary_2_t1952_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16)->static_fields)->___U3CU3Ef__amU24cacheB_15;
		G_B4_0 = L_9;
		G_B4_1 = L_8;
		G_B4_2 = ((Dictionary_2_t1952 *)(__this));
		if (L_10)
		{
			G_B5_0 = L_9;
			G_B5_1 = L_8;
			G_B5_2 = ((Dictionary_2_t1952 *)(__this));
			goto IL_0046;
		}
	}
	{
		IntPtr_t L_11 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17) };
		Transform_1_t1953 * L_12 = (Transform_1_t1953 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		(( void (*) (Transform_1_t1953 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)(L_12, (Object_t *)NULL, (IntPtr_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		((Dictionary_2_t1952_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16)->static_fields)->___U3CU3Ef__amU24cacheB_15 = L_12;
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = ((Dictionary_2_t1952 *)(G_B4_2));
	}

IL_0046:
	{
		Transform_1_t1953 * L_13 = ((Dictionary_2_t1952_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16)->static_fields)->___U3CU3Ef__amU24cacheB_15;
		NullCheck((Dictionary_2_t1952 *)G_B5_2);
		(( void (*) (Dictionary_2_t1952 *, DictionaryEntryU5BU5D_t2442*, int32_t, Transform_1_t1953 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)->method)((Dictionary_2_t1952 *)G_B5_2, (DictionaryEntryU5BU5D_t2442*)G_B5_1, (int32_t)G_B5_0, (Transform_1_t1953 *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20));
		return;
	}

IL_0051:
	{
		Array_t * L_14 = ___array;
		int32_t L_15 = ___index;
		IntPtr_t L_16 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21) };
		Transform_1_t1960 * L_17 = (Transform_1_t1960 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22));
		(( void (*) (Transform_1_t1960 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23)->method)(L_17, (Object_t *)NULL, (IntPtr_t)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23));
		NullCheck((Dictionary_2_t1952 *)__this);
		(( void (*) (Dictionary_2_t1952 *, Array_t *, int32_t, Transform_1_t1960 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)->method)((Dictionary_2_t1952 *)__this, (Array_t *)L_14, (int32_t)L_15, (Transform_1_t1960 *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12924_gshared (Dictionary_2_t1952 * __this, const MethodInfo* method)
{
	{
		Enumerator_t1958  L_0 = {0};
		(( void (*) (Enumerator_t1958 *, Dictionary_2_t1952 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)(&L_0, (Dictionary_2_t1952 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		Enumerator_t1958  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12926_gshared (Dictionary_2_t1952 * __this, const MethodInfo* method)
{
	{
		Enumerator_t1958  L_0 = {0};
		(( void (*) (Enumerator_t1958 *, Dictionary_2_t1952 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)(&L_0, (Dictionary_2_t1952 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		Enumerator_t1958  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12928_gshared (Dictionary_2_t1952 * __this, const MethodInfo* method)
{
	{
		ShimEnumerator_t1961 * L_0 = (ShimEnumerator_t1961 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
		(( void (*) (ShimEnumerator_t1961 *, Dictionary_2_t1952 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28)->method)(L_0, (Dictionary_2_t1952 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m12930_gshared (Dictionary_2_t1952 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->___count_10);
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t677_il2cpp_TypeInfo_var;
extern TypeInfo* KeyNotFoundException_t1175_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral711;
extern "C" Object_t * Dictionary_2_get_Item_m12932_gshared (Dictionary_2_t1952 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t677_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		KeyNotFoundException_t1175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2659);
		_stringLiteral711 = il2cpp_codegen_string_literal_from_index(711);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t677 * L_1 = (ArgumentNullException_t677 *)il2cpp_codegen_object_new (ArgumentNullException_t677_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3666(L_1, (String_t*)_stringLiteral711, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		Object_t * L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), (Object_t*)L_2, (Object_t *)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t107* L_5 = (Int32U5BU5D_t107*)(__this->___table_4);
		int32_t L_6 = V_0;
		Int32U5BU5D_t107* L_7 = (Int32U5BU5D_t107*)(__this->___table_4);
		NullCheck(L_7);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))));
		int32_t L_8 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_8, sizeof(int32_t)))-(int32_t)1));
		goto IL_009b;
	}

IL_0048:
	{
		LinkU5BU5D_t1870* L_9 = (LinkU5BU5D_t1870*)(__this->___linkSlots_5);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = (int32_t)(((Link_t1174 *)(Link_t1174 *)SZArrayLdElema(L_9, L_10, sizeof(Link_t1174 )))->___HashCode_0);
		int32_t L_12 = V_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_0089;
		}
	}
	{
		Object_t* L_13 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t78* L_14 = (ObjectU5BU5D_t78*)(__this->___keySlots_6);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		Object_t * L_17 = ___key;
		NullCheck((Object_t*)L_13);
		bool L_18 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), (Object_t*)L_13, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_14, L_16, sizeof(Object_t *))), (Object_t *)L_17);
		if (!L_18)
		{
			goto IL_0089;
		}
	}
	{
		ObjectU5BU5D_t78* L_19 = (ObjectU5BU5D_t78*)(__this->___valueSlots_7);
		int32_t L_20 = V_1;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		int32_t L_21 = L_20;
		return (*(Object_t **)(Object_t **)SZArrayLdElema(L_19, L_21, sizeof(Object_t *)));
	}

IL_0089:
	{
		LinkU5BU5D_t1870* L_22 = (LinkU5BU5D_t1870*)(__this->___linkSlots_5);
		int32_t L_23 = V_1;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = (int32_t)(((Link_t1174 *)(Link_t1174 *)SZArrayLdElema(L_22, L_23, sizeof(Link_t1174 )))->___Next_1);
		V_1 = (int32_t)L_24;
	}

IL_009b:
	{
		int32_t L_25 = V_1;
		if ((!(((uint32_t)L_25) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}
	{
		KeyNotFoundException_t1175 * L_26 = (KeyNotFoundException_t1175 *)il2cpp_codegen_object_new (KeyNotFoundException_t1175_il2cpp_TypeInfo_var);
		KeyNotFoundException__ctor_m7077(L_26, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_26);
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern TypeInfo* ArgumentNullException_t677_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral711;
extern "C" void Dictionary_2_set_Item_m12934_gshared (Dictionary_2_t1952 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t677_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		_stringLiteral711 = il2cpp_codegen_string_literal_from_index(711);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t677 * L_1 = (ArgumentNullException_t677 *)il2cpp_codegen_object_new (ArgumentNullException_t677_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3666(L_1, (String_t*)_stringLiteral711, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		Object_t * L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), (Object_t*)L_2, (Object_t *)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		int32_t L_5 = V_0;
		Int32U5BU5D_t107* L_6 = (Int32U5BU5D_t107*)(__this->___table_4);
		NullCheck(L_6);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))));
		Int32U5BU5D_t107* L_7 = (Int32U5BU5D_t107*)(__this->___table_4);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_9, sizeof(int32_t)))-(int32_t)1));
		V_3 = (int32_t)(-1);
		int32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)(-1))))
		{
			goto IL_00a2;
		}
	}

IL_004e:
	{
		LinkU5BU5D_t1870* L_11 = (LinkU5BU5D_t1870*)(__this->___linkSlots_5);
		int32_t L_12 = V_2;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (int32_t)(((Link_t1174 *)(Link_t1174 *)SZArrayLdElema(L_11, L_12, sizeof(Link_t1174 )))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0087;
		}
	}
	{
		Object_t* L_15 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t78* L_16 = (ObjectU5BU5D_t78*)(__this->___keySlots_6);
		int32_t L_17 = V_2;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		Object_t * L_19 = ___key;
		NullCheck((Object_t*)L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), (Object_t*)L_15, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_16, L_18, sizeof(Object_t *))), (Object_t *)L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		goto IL_00a2;
	}

IL_0087:
	{
		int32_t L_21 = V_2;
		V_3 = (int32_t)L_21;
		LinkU5BU5D_t1870* L_22 = (LinkU5BU5D_t1870*)(__this->___linkSlots_5);
		int32_t L_23 = V_2;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = (int32_t)(((Link_t1174 *)(Link_t1174 *)SZArrayLdElema(L_22, L_23, sizeof(Link_t1174 )))->___Next_1);
		V_2 = (int32_t)L_24;
		int32_t L_25 = V_2;
		if ((!(((uint32_t)L_25) == ((uint32_t)(-1)))))
		{
			goto IL_004e;
		}
	}

IL_00a2:
	{
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0166;
		}
	}
	{
		int32_t L_27 = (int32_t)(__this->___count_10);
		int32_t L_28 = (int32_t)((int32_t)((int32_t)L_27+(int32_t)1));
		V_4 = (int32_t)L_28;
		__this->___count_10 = L_28;
		int32_t L_29 = V_4;
		int32_t L_30 = (int32_t)(__this->___threshold_11);
		if ((((int32_t)L_29) <= ((int32_t)L_30)))
		{
			goto IL_00de;
		}
	}
	{
		NullCheck((Dictionary_2_t1952 *)__this);
		(( void (*) (Dictionary_2_t1952 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30)->method)((Dictionary_2_t1952 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		int32_t L_31 = V_0;
		Int32U5BU5D_t107* L_32 = (Int32U5BU5D_t107*)(__this->___table_4);
		NullCheck(L_32);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_31&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_32)->max_length)))));
	}

IL_00de:
	{
		int32_t L_33 = (int32_t)(__this->___emptySlot_9);
		V_2 = (int32_t)L_33;
		int32_t L_34 = V_2;
		if ((!(((uint32_t)L_34) == ((uint32_t)(-1)))))
		{
			goto IL_0105;
		}
	}
	{
		int32_t L_35 = (int32_t)(__this->___touchedSlots_8);
		int32_t L_36 = (int32_t)L_35;
		V_4 = (int32_t)L_36;
		__this->___touchedSlots_8 = ((int32_t)((int32_t)L_36+(int32_t)1));
		int32_t L_37 = V_4;
		V_2 = (int32_t)L_37;
		goto IL_011c;
	}

IL_0105:
	{
		LinkU5BU5D_t1870* L_38 = (LinkU5BU5D_t1870*)(__this->___linkSlots_5);
		int32_t L_39 = V_2;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, L_39);
		int32_t L_40 = (int32_t)(((Link_t1174 *)(Link_t1174 *)SZArrayLdElema(L_38, L_39, sizeof(Link_t1174 )))->___Next_1);
		__this->___emptySlot_9 = L_40;
	}

IL_011c:
	{
		LinkU5BU5D_t1870* L_41 = (LinkU5BU5D_t1870*)(__this->___linkSlots_5);
		int32_t L_42 = V_2;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, L_42);
		Int32U5BU5D_t107* L_43 = (Int32U5BU5D_t107*)(__this->___table_4);
		int32_t L_44 = V_1;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, L_44);
		int32_t L_45 = L_44;
		((Link_t1174 *)(Link_t1174 *)SZArrayLdElema(L_41, L_42, sizeof(Link_t1174 )))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_43, L_45, sizeof(int32_t)))-(int32_t)1));
		Int32U5BU5D_t107* L_46 = (Int32U5BU5D_t107*)(__this->___table_4);
		int32_t L_47 = V_1;
		int32_t L_48 = V_2;
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, L_47);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_46, L_47, sizeof(int32_t))) = (int32_t)((int32_t)((int32_t)L_48+(int32_t)1));
		LinkU5BU5D_t1870* L_49 = (LinkU5BU5D_t1870*)(__this->___linkSlots_5);
		int32_t L_50 = V_2;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, L_50);
		int32_t L_51 = V_0;
		((Link_t1174 *)(Link_t1174 *)SZArrayLdElema(L_49, L_50, sizeof(Link_t1174 )))->___HashCode_0 = L_51;
		ObjectU5BU5D_t78* L_52 = (ObjectU5BU5D_t78*)(__this->___keySlots_6);
		int32_t L_53 = V_2;
		Object_t * L_54 = ___key;
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, L_53);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_52, L_53, sizeof(Object_t *))) = (Object_t *)L_54;
		goto IL_01b5;
	}

IL_0166:
	{
		int32_t L_55 = V_3;
		if ((((int32_t)L_55) == ((int32_t)(-1))))
		{
			goto IL_01b5;
		}
	}
	{
		LinkU5BU5D_t1870* L_56 = (LinkU5BU5D_t1870*)(__this->___linkSlots_5);
		int32_t L_57 = V_3;
		NullCheck(L_56);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_56, L_57);
		LinkU5BU5D_t1870* L_58 = (LinkU5BU5D_t1870*)(__this->___linkSlots_5);
		int32_t L_59 = V_2;
		NullCheck(L_58);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_58, L_59);
		int32_t L_60 = (int32_t)(((Link_t1174 *)(Link_t1174 *)SZArrayLdElema(L_58, L_59, sizeof(Link_t1174 )))->___Next_1);
		((Link_t1174 *)(Link_t1174 *)SZArrayLdElema(L_56, L_57, sizeof(Link_t1174 )))->___Next_1 = L_60;
		LinkU5BU5D_t1870* L_61 = (LinkU5BU5D_t1870*)(__this->___linkSlots_5);
		int32_t L_62 = V_2;
		NullCheck(L_61);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_61, L_62);
		Int32U5BU5D_t107* L_63 = (Int32U5BU5D_t107*)(__this->___table_4);
		int32_t L_64 = V_1;
		NullCheck(L_63);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_63, L_64);
		int32_t L_65 = L_64;
		((Link_t1174 *)(Link_t1174 *)SZArrayLdElema(L_61, L_62, sizeof(Link_t1174 )))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_63, L_65, sizeof(int32_t)))-(int32_t)1));
		Int32U5BU5D_t107* L_66 = (Int32U5BU5D_t107*)(__this->___table_4);
		int32_t L_67 = V_1;
		int32_t L_68 = V_2;
		NullCheck(L_66);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_66, L_67);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_66, L_67, sizeof(int32_t))) = (int32_t)((int32_t)((int32_t)L_68+(int32_t)1));
	}

IL_01b5:
	{
		ObjectU5BU5D_t78* L_69 = (ObjectU5BU5D_t78*)(__this->___valueSlots_7);
		int32_t L_70 = V_2;
		Object_t * L_71 = ___value;
		NullCheck(L_69);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_69, L_70);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_69, L_70, sizeof(Object_t *))) = (Object_t *)L_71;
		int32_t L_72 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_72+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentOutOfRangeException_t708_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1325;
extern "C" void Dictionary_2_Init_m12936_gshared (Dictionary_2_t1952 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(432);
		_stringLiteral1325 = il2cpp_codegen_string_literal_from_index(1325);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	Dictionary_2_t1952 * G_B4_0 = {0};
	Dictionary_2_t1952 * G_B3_0 = {0};
	Object_t* G_B5_0 = {0};
	Dictionary_2_t1952 * G_B5_1 = {0};
	{
		int32_t L_0 = ___capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ArgumentOutOfRangeException_t708 * L_1 = (ArgumentOutOfRangeException_t708 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t708_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m4630(L_1, (String_t*)_stringLiteral1325, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0012:
	{
		Object_t* L_2 = ___hcp;
		G_B3_0 = ((Dictionary_2_t1952 *)(__this));
		if (!L_2)
		{
			G_B4_0 = ((Dictionary_2_t1952 *)(__this));
			goto IL_0021;
		}
	}
	{
		Object_t* L_3 = ___hcp;
		V_0 = (Object_t*)L_3;
		Object_t* L_4 = V_0;
		G_B5_0 = L_4;
		G_B5_1 = ((Dictionary_2_t1952 *)(G_B3_0));
		goto IL_0026;
	}

IL_0021:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		EqualityComparer_1_t1777 * L_5 = (( EqualityComparer_1_t1777 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31));
		G_B5_0 = ((Object_t*)(L_5));
		G_B5_1 = ((Dictionary_2_t1952 *)(G_B4_0));
	}

IL_0026:
	{
		NullCheck(G_B5_1);
		G_B5_1->___hcp_12 = G_B5_0;
		int32_t L_6 = ___capacity;
		if (L_6)
		{
			goto IL_0035;
		}
	}
	{
		___capacity = (int32_t)((int32_t)10);
	}

IL_0035:
	{
		int32_t L_7 = ___capacity;
		___capacity = (int32_t)((int32_t)((int32_t)(((int32_t)((float)((float)(((float)L_7))/(float)(0.9f)))))+(int32_t)1));
		int32_t L_8 = ___capacity;
		NullCheck((Dictionary_2_t1952 *)__this);
		(( void (*) (Dictionary_2_t1952 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33)->method)((Dictionary_2_t1952 *)__this, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		__this->___generation_14 = 0;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern TypeInfo* Int32U5BU5D_t107_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t1870_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_InitArrays_m12938_gshared (Dictionary_2_t1952 * __this, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t107_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(55);
		LinkU5BU5D_t1870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2660);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___size;
		__this->___table_4 = ((Int32U5BU5D_t107*)SZArrayNew(Int32U5BU5D_t107_il2cpp_TypeInfo_var, L_0));
		int32_t L_1 = ___size;
		__this->___linkSlots_5 = ((LinkU5BU5D_t1870*)SZArrayNew(LinkU5BU5D_t1870_il2cpp_TypeInfo_var, L_1));
		__this->___emptySlot_9 = (-1);
		int32_t L_2 = ___size;
		__this->___keySlots_6 = ((ObjectU5BU5D_t78*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34), L_2));
		int32_t L_3 = ___size;
		__this->___valueSlots_7 = ((ObjectU5BU5D_t78*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_3));
		__this->___touchedSlots_8 = 0;
		Int32U5BU5D_t107* L_4 = (Int32U5BU5D_t107*)(__this->___table_4);
		NullCheck(L_4);
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)(((int32_t)(((Array_t *)L_4)->max_length)))))*(float)(0.9f)))));
		int32_t L_5 = (int32_t)(__this->___threshold_11);
		if (L_5)
		{
			goto IL_0074;
		}
	}
	{
		Int32U5BU5D_t107* L_6 = (Int32U5BU5D_t107*)(__this->___table_4);
		NullCheck(L_6);
		if ((((int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		__this->___threshold_11 = 1;
	}

IL_0074:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t677_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t708_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t402_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral713;
extern Il2CppCodeGenString* _stringLiteral715;
extern Il2CppCodeGenString* _stringLiteral2802;
extern Il2CppCodeGenString* _stringLiteral2803;
extern "C" void Dictionary_2_CopyToCheck_m12940_gshared (Dictionary_2_t1952 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t677_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		ArgumentOutOfRangeException_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(432);
		ArgumentException_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(269);
		_stringLiteral713 = il2cpp_codegen_string_literal_from_index(713);
		_stringLiteral715 = il2cpp_codegen_string_literal_from_index(715);
		_stringLiteral2802 = il2cpp_codegen_string_literal_from_index(2802);
		_stringLiteral2803 = il2cpp_codegen_string_literal_from_index(2803);
		s_Il2CppMethodIntialized = true;
	}
	{
		Array_t * L_0 = ___array;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t677 * L_1 = (ArgumentNullException_t677 *)il2cpp_codegen_object_new (ArgumentNullException_t677_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3666(L_1, (String_t*)_stringLiteral713, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		int32_t L_2 = ___index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		ArgumentOutOfRangeException_t708 * L_3 = (ArgumentOutOfRangeException_t708 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t708_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m4630(L_3, (String_t*)_stringLiteral715, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_0023:
	{
		int32_t L_4 = ___index;
		Array_t * L_5 = ___array;
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m5638((Array_t *)L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)L_6)))
		{
			goto IL_003a;
		}
	}
	{
		ArgumentException_t402 * L_7 = (ArgumentException_t402 *)il2cpp_codegen_object_new (ArgumentException_t402_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2370(L_7, (String_t*)_stringLiteral2802, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_7);
	}

IL_003a:
	{
		Array_t * L_8 = ___array;
		NullCheck((Array_t *)L_8);
		int32_t L_9 = Array_get_Length_m5638((Array_t *)L_8, /*hidden argument*/NULL);
		int32_t L_10 = ___index;
		NullCheck((Dictionary_2_t1952 *)__this);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count() */, (Dictionary_2_t1952 *)__this);
		if ((((int32_t)((int32_t)((int32_t)L_9-(int32_t)L_10))) >= ((int32_t)L_11)))
		{
			goto IL_0058;
		}
	}
	{
		ArgumentException_t402 * L_12 = (ArgumentException_t402 *)il2cpp_codegen_object_new (ArgumentException_t402_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2370(L_12, (String_t*)_stringLiteral2803, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_12);
	}

IL_0058:
	{
		return;
	}
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1954  Dictionary_2_make_pair_m12942_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = ___value;
		KeyValuePair_2_t1954  L_2 = {0};
		(( void (*) (KeyValuePair_2_t1954 *, Object_t *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)(&L_2, (Object_t *)L_0, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		return L_2;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m12944_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		return L_0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m12946_gshared (Dictionary_2_t1952 * __this, KeyValuePair_2U5BU5D_t2370* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t2370* L_0 = ___array;
		int32_t L_1 = ___index;
		NullCheck((Dictionary_2_t1952 *)__this);
		(( void (*) (Dictionary_2_t1952 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((Dictionary_2_t1952 *)__this, (Array_t *)(Array_t *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		KeyValuePair_2U5BU5D_t2370* L_2 = ___array;
		int32_t L_3 = ___index;
		IntPtr_t L_4 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21) };
		Transform_1_t1960 * L_5 = (Transform_1_t1960 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22));
		(( void (*) (Transform_1_t1960 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23)->method)(L_5, (Object_t *)NULL, (IntPtr_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23));
		NullCheck((Dictionary_2_t1952 *)__this);
		(( void (*) (Dictionary_2_t1952 *, KeyValuePair_2U5BU5D_t2370*, int32_t, Transform_1_t1960 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39)->method)((Dictionary_2_t1952 *)__this, (KeyValuePair_2U5BU5D_t2370*)L_2, (int32_t)L_3, (Transform_1_t1960 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
extern TypeInfo* Hashtable_t789_il2cpp_TypeInfo_var;
extern TypeInfo* Int32U5BU5D_t107_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t1870_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Resize_m12948_gshared (Dictionary_2_t1952 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t789_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(524);
		Int32U5BU5D_t107_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(55);
		LinkU5BU5D_t1870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2660);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t107* V_1 = {0};
	LinkU5BU5D_t1870* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	ObjectU5BU5D_t78* V_7 = {0};
	ObjectU5BU5D_t78* V_8 = {0};
	int32_t V_9 = 0;
	{
		Int32U5BU5D_t107* L_0 = (Int32U5BU5D_t107*)(__this->___table_4);
		NullCheck(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Hashtable_t789_il2cpp_TypeInfo_var);
		int32_t L_1 = Hashtable_ToPrime_m7311(NULL /*static, unused*/, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))<<(int32_t)1))|(int32_t)1)), /*hidden argument*/NULL);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		V_1 = (Int32U5BU5D_t107*)((Int32U5BU5D_t107*)SZArrayNew(Int32U5BU5D_t107_il2cpp_TypeInfo_var, L_2));
		int32_t L_3 = V_0;
		V_2 = (LinkU5BU5D_t1870*)((LinkU5BU5D_t1870*)SZArrayNew(LinkU5BU5D_t1870_il2cpp_TypeInfo_var, L_3));
		V_3 = (int32_t)0;
		goto IL_00b1;
	}

IL_0027:
	{
		Int32U5BU5D_t107* L_4 = (Int32U5BU5D_t107*)(__this->___table_4);
		int32_t L_5 = V_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		V_4 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6, sizeof(int32_t)))-(int32_t)1));
		goto IL_00a5;
	}

IL_0038:
	{
		LinkU5BU5D_t1870* L_7 = V_2;
		int32_t L_8 = V_4;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		Object_t* L_9 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t78* L_10 = (ObjectU5BU5D_t78*)(__this->___keySlots_6);
		int32_t L_11 = V_4;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((Object_t*)L_9);
		int32_t L_13 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), (Object_t*)L_9, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_10, L_12, sizeof(Object_t *))));
		int32_t L_14 = (int32_t)((int32_t)((int32_t)L_13|(int32_t)((int32_t)-2147483648)));
		V_9 = (int32_t)L_14;
		((Link_t1174 *)(Link_t1174 *)SZArrayLdElema(L_7, L_8, sizeof(Link_t1174 )))->___HashCode_0 = L_14;
		int32_t L_15 = V_9;
		V_5 = (int32_t)L_15;
		int32_t L_16 = V_5;
		int32_t L_17 = V_0;
		V_6 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_16&(int32_t)((int32_t)2147483647)))%(int32_t)L_17));
		LinkU5BU5D_t1870* L_18 = V_2;
		int32_t L_19 = V_4;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		Int32U5BU5D_t107* L_20 = V_1;
		int32_t L_21 = V_6;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		((Link_t1174 *)(Link_t1174 *)SZArrayLdElema(L_18, L_19, sizeof(Link_t1174 )))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_20, L_22, sizeof(int32_t)))-(int32_t)1));
		Int32U5BU5D_t107* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = V_4;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_23, L_24, sizeof(int32_t))) = (int32_t)((int32_t)((int32_t)L_25+(int32_t)1));
		LinkU5BU5D_t1870* L_26 = (LinkU5BU5D_t1870*)(__this->___linkSlots_5);
		int32_t L_27 = V_4;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_27);
		int32_t L_28 = (int32_t)(((Link_t1174 *)(Link_t1174 *)SZArrayLdElema(L_26, L_27, sizeof(Link_t1174 )))->___Next_1);
		V_4 = (int32_t)L_28;
	}

IL_00a5:
	{
		int32_t L_29 = V_4;
		if ((!(((uint32_t)L_29) == ((uint32_t)(-1)))))
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_30 = V_3;
		V_3 = (int32_t)((int32_t)((int32_t)L_30+(int32_t)1));
	}

IL_00b1:
	{
		int32_t L_31 = V_3;
		Int32U5BU5D_t107* L_32 = (Int32U5BU5D_t107*)(__this->___table_4);
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)(((Array_t *)L_32)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		Int32U5BU5D_t107* L_33 = V_1;
		__this->___table_4 = L_33;
		LinkU5BU5D_t1870* L_34 = V_2;
		__this->___linkSlots_5 = L_34;
		int32_t L_35 = V_0;
		V_7 = (ObjectU5BU5D_t78*)((ObjectU5BU5D_t78*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34), L_35));
		int32_t L_36 = V_0;
		V_8 = (ObjectU5BU5D_t78*)((ObjectU5BU5D_t78*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_36));
		ObjectU5BU5D_t78* L_37 = (ObjectU5BU5D_t78*)(__this->___keySlots_6);
		ObjectU5BU5D_t78* L_38 = V_7;
		int32_t L_39 = (int32_t)(__this->___touchedSlots_8);
		Array_Copy_m6432(NULL /*static, unused*/, (Array_t *)(Array_t *)L_37, (int32_t)0, (Array_t *)(Array_t *)L_38, (int32_t)0, (int32_t)L_39, /*hidden argument*/NULL);
		ObjectU5BU5D_t78* L_40 = (ObjectU5BU5D_t78*)(__this->___valueSlots_7);
		ObjectU5BU5D_t78* L_41 = V_8;
		int32_t L_42 = (int32_t)(__this->___touchedSlots_8);
		Array_Copy_m6432(NULL /*static, unused*/, (Array_t *)(Array_t *)L_40, (int32_t)0, (Array_t *)(Array_t *)L_41, (int32_t)0, (int32_t)L_42, /*hidden argument*/NULL);
		ObjectU5BU5D_t78* L_43 = V_7;
		__this->___keySlots_6 = L_43;
		ObjectU5BU5D_t78* L_44 = V_8;
		__this->___valueSlots_7 = L_44;
		int32_t L_45 = V_0;
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)L_45))*(float)(0.9f)))));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern TypeInfo* ArgumentNullException_t677_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t402_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral711;
extern Il2CppCodeGenString* _stringLiteral2804;
extern "C" void Dictionary_2_Add_m12950_gshared (Dictionary_2_t1952 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t677_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		ArgumentException_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(269);
		_stringLiteral711 = il2cpp_codegen_string_literal_from_index(711);
		_stringLiteral2804 = il2cpp_codegen_string_literal_from_index(2804);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t677 * L_1 = (ArgumentNullException_t677 *)il2cpp_codegen_object_new (ArgumentNullException_t677_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3666(L_1, (String_t*)_stringLiteral711, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		Object_t * L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), (Object_t*)L_2, (Object_t *)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		int32_t L_5 = V_0;
		Int32U5BU5D_t107* L_6 = (Int32U5BU5D_t107*)(__this->___table_4);
		NullCheck(L_6);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))));
		Int32U5BU5D_t107* L_7 = (Int32U5BU5D_t107*)(__this->___table_4);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_9, sizeof(int32_t)))-(int32_t)1));
		goto IL_009b;
	}

IL_004a:
	{
		LinkU5BU5D_t1870* L_10 = (LinkU5BU5D_t1870*)(__this->___linkSlots_5);
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (int32_t)(((Link_t1174 *)(Link_t1174 *)SZArrayLdElema(L_10, L_11, sizeof(Link_t1174 )))->___HashCode_0);
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0089;
		}
	}
	{
		Object_t* L_14 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t78* L_15 = (ObjectU5BU5D_t78*)(__this->___keySlots_6);
		int32_t L_16 = V_2;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		Object_t * L_18 = ___key;
		NullCheck((Object_t*)L_14);
		bool L_19 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), (Object_t*)L_14, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_15, L_17, sizeof(Object_t *))), (Object_t *)L_18);
		if (!L_19)
		{
			goto IL_0089;
		}
	}
	{
		ArgumentException_t402 * L_20 = (ArgumentException_t402 *)il2cpp_codegen_object_new (ArgumentException_t402_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2370(L_20, (String_t*)_stringLiteral2804, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_20);
	}

IL_0089:
	{
		LinkU5BU5D_t1870* L_21 = (LinkU5BU5D_t1870*)(__this->___linkSlots_5);
		int32_t L_22 = V_2;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = (int32_t)(((Link_t1174 *)(Link_t1174 *)SZArrayLdElema(L_21, L_22, sizeof(Link_t1174 )))->___Next_1);
		V_2 = (int32_t)L_23;
	}

IL_009b:
	{
		int32_t L_24 = V_2;
		if ((!(((uint32_t)L_24) == ((uint32_t)(-1)))))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_25 = (int32_t)(__this->___count_10);
		int32_t L_26 = (int32_t)((int32_t)((int32_t)L_25+(int32_t)1));
		V_3 = (int32_t)L_26;
		__this->___count_10 = L_26;
		int32_t L_27 = V_3;
		int32_t L_28 = (int32_t)(__this->___threshold_11);
		if ((((int32_t)L_27) <= ((int32_t)L_28)))
		{
			goto IL_00d5;
		}
	}
	{
		NullCheck((Dictionary_2_t1952 *)__this);
		(( void (*) (Dictionary_2_t1952 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30)->method)((Dictionary_2_t1952 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		int32_t L_29 = V_0;
		Int32U5BU5D_t107* L_30 = (Int32U5BU5D_t107*)(__this->___table_4);
		NullCheck(L_30);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_29&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_30)->max_length)))));
	}

IL_00d5:
	{
		int32_t L_31 = (int32_t)(__this->___emptySlot_9);
		V_2 = (int32_t)L_31;
		int32_t L_32 = V_2;
		if ((!(((uint32_t)L_32) == ((uint32_t)(-1)))))
		{
			goto IL_00fa;
		}
	}
	{
		int32_t L_33 = (int32_t)(__this->___touchedSlots_8);
		int32_t L_34 = (int32_t)L_33;
		V_3 = (int32_t)L_34;
		__this->___touchedSlots_8 = ((int32_t)((int32_t)L_34+(int32_t)1));
		int32_t L_35 = V_3;
		V_2 = (int32_t)L_35;
		goto IL_0111;
	}

IL_00fa:
	{
		LinkU5BU5D_t1870* L_36 = (LinkU5BU5D_t1870*)(__this->___linkSlots_5);
		int32_t L_37 = V_2;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, L_37);
		int32_t L_38 = (int32_t)(((Link_t1174 *)(Link_t1174 *)SZArrayLdElema(L_36, L_37, sizeof(Link_t1174 )))->___Next_1);
		__this->___emptySlot_9 = L_38;
	}

IL_0111:
	{
		LinkU5BU5D_t1870* L_39 = (LinkU5BU5D_t1870*)(__this->___linkSlots_5);
		int32_t L_40 = V_2;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, L_40);
		int32_t L_41 = V_0;
		((Link_t1174 *)(Link_t1174 *)SZArrayLdElema(L_39, L_40, sizeof(Link_t1174 )))->___HashCode_0 = L_41;
		LinkU5BU5D_t1870* L_42 = (LinkU5BU5D_t1870*)(__this->___linkSlots_5);
		int32_t L_43 = V_2;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, L_43);
		Int32U5BU5D_t107* L_44 = (Int32U5BU5D_t107*)(__this->___table_4);
		int32_t L_45 = V_1;
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, L_45);
		int32_t L_46 = L_45;
		((Link_t1174 *)(Link_t1174 *)SZArrayLdElema(L_42, L_43, sizeof(Link_t1174 )))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_44, L_46, sizeof(int32_t)))-(int32_t)1));
		Int32U5BU5D_t107* L_47 = (Int32U5BU5D_t107*)(__this->___table_4);
		int32_t L_48 = V_1;
		int32_t L_49 = V_2;
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, L_48);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_47, L_48, sizeof(int32_t))) = (int32_t)((int32_t)((int32_t)L_49+(int32_t)1));
		ObjectU5BU5D_t78* L_50 = (ObjectU5BU5D_t78*)(__this->___keySlots_6);
		int32_t L_51 = V_2;
		Object_t * L_52 = ___key;
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, L_51);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_50, L_51, sizeof(Object_t *))) = (Object_t *)L_52;
		ObjectU5BU5D_t78* L_53 = (ObjectU5BU5D_t78*)(__this->___valueSlots_7);
		int32_t L_54 = V_2;
		Object_t * L_55 = ___value;
		NullCheck(L_53);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_53, L_54);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_53, L_54, sizeof(Object_t *))) = (Object_t *)L_55;
		int32_t L_56 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_56+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m12952_gshared (Dictionary_2_t1952 * __this, const MethodInfo* method)
{
	{
		__this->___count_10 = 0;
		Int32U5BU5D_t107* L_0 = (Int32U5BU5D_t107*)(__this->___table_4);
		Int32U5BU5D_t107* L_1 = (Int32U5BU5D_t107*)(__this->___table_4);
		NullCheck(L_1);
		Array_Clear_m3744(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/NULL);
		ObjectU5BU5D_t78* L_2 = (ObjectU5BU5D_t78*)(__this->___keySlots_6);
		ObjectU5BU5D_t78* L_3 = (ObjectU5BU5D_t78*)(__this->___keySlots_6);
		NullCheck(L_3);
		Array_Clear_m3744(NULL /*static, unused*/, (Array_t *)(Array_t *)L_2, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_3)->max_length))), /*hidden argument*/NULL);
		ObjectU5BU5D_t78* L_4 = (ObjectU5BU5D_t78*)(__this->___valueSlots_7);
		ObjectU5BU5D_t78* L_5 = (ObjectU5BU5D_t78*)(__this->___valueSlots_7);
		NullCheck(L_5);
		Array_Clear_m3744(NULL /*static, unused*/, (Array_t *)(Array_t *)L_4, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_5)->max_length))), /*hidden argument*/NULL);
		LinkU5BU5D_t1870* L_6 = (LinkU5BU5D_t1870*)(__this->___linkSlots_5);
		LinkU5BU5D_t1870* L_7 = (LinkU5BU5D_t1870*)(__this->___linkSlots_5);
		NullCheck(L_7);
		Array_Clear_m3744(NULL /*static, unused*/, (Array_t *)(Array_t *)L_6, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_7)->max_length))), /*hidden argument*/NULL);
		__this->___emptySlot_9 = (-1);
		__this->___touchedSlots_8 = 0;
		int32_t L_8 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_8+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern TypeInfo* ArgumentNullException_t677_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral711;
extern "C" bool Dictionary_2_ContainsKey_m12954_gshared (Dictionary_2_t1952 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t677_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		_stringLiteral711 = il2cpp_codegen_string_literal_from_index(711);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t677 * L_1 = (ArgumentNullException_t677 *)il2cpp_codegen_object_new (ArgumentNullException_t677_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3666(L_1, (String_t*)_stringLiteral711, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		Object_t * L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), (Object_t*)L_2, (Object_t *)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t107* L_5 = (Int32U5BU5D_t107*)(__this->___table_4);
		int32_t L_6 = V_0;
		Int32U5BU5D_t107* L_7 = (Int32U5BU5D_t107*)(__this->___table_4);
		NullCheck(L_7);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))));
		int32_t L_8 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_8, sizeof(int32_t)))-(int32_t)1));
		goto IL_0090;
	}

IL_0048:
	{
		LinkU5BU5D_t1870* L_9 = (LinkU5BU5D_t1870*)(__this->___linkSlots_5);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = (int32_t)(((Link_t1174 *)(Link_t1174 *)SZArrayLdElema(L_9, L_10, sizeof(Link_t1174 )))->___HashCode_0);
		int32_t L_12 = V_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_007e;
		}
	}
	{
		Object_t* L_13 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t78* L_14 = (ObjectU5BU5D_t78*)(__this->___keySlots_6);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		Object_t * L_17 = ___key;
		NullCheck((Object_t*)L_13);
		bool L_18 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), (Object_t*)L_13, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_14, L_16, sizeof(Object_t *))), (Object_t *)L_17);
		if (!L_18)
		{
			goto IL_007e;
		}
	}
	{
		return 1;
	}

IL_007e:
	{
		LinkU5BU5D_t1870* L_19 = (LinkU5BU5D_t1870*)(__this->___linkSlots_5);
		int32_t L_20 = V_1;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		int32_t L_21 = (int32_t)(((Link_t1174 *)(Link_t1174 *)SZArrayLdElema(L_19, L_20, sizeof(Link_t1174 )))->___Next_1);
		V_1 = (int32_t)L_21;
	}

IL_0090:
	{
		int32_t L_22 = V_1;
		if ((!(((uint32_t)L_22) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m12956_gshared (Dictionary_2_t1952 * __this, Object_t * ___value, const MethodInfo* method)
{
	Object_t* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41));
		EqualityComparer_1_t1777 * L_0 = (( EqualityComparer_1_t1777 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40));
		V_0 = (Object_t*)L_0;
		V_1 = (int32_t)0;
		goto IL_0054;
	}

IL_000d:
	{
		Int32U5BU5D_t107* L_1 = (Int32U5BU5D_t107*)(__this->___table_4);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_3, sizeof(int32_t)))-(int32_t)1));
		goto IL_0049;
	}

IL_001d:
	{
		Object_t* L_4 = V_0;
		ObjectU5BU5D_t78* L_5 = (ObjectU5BU5D_t78*)(__this->___valueSlots_7);
		int32_t L_6 = V_2;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		Object_t * L_8 = ___value;
		NullCheck((Object_t*)L_4);
		bool L_9 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 42), (Object_t*)L_4, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_5, L_7, sizeof(Object_t *))), (Object_t *)L_8);
		if (!L_9)
		{
			goto IL_0037;
		}
	}
	{
		return 1;
	}

IL_0037:
	{
		LinkU5BU5D_t1870* L_10 = (LinkU5BU5D_t1870*)(__this->___linkSlots_5);
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (int32_t)(((Link_t1174 *)(Link_t1174 *)SZArrayLdElema(L_10, L_11, sizeof(Link_t1174 )))->___Next_1);
		V_2 = (int32_t)L_12;
	}

IL_0049:
	{
		int32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)(-1)))))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_14 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0054:
	{
		int32_t L_15 = V_1;
		Int32U5BU5D_t107* L_16 = (Int32U5BU5D_t107*)(__this->___table_4);
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t677_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral724;
extern Il2CppCodeGenString* _stringLiteral726;
extern Il2CppCodeGenString* _stringLiteral728;
extern Il2CppCodeGenString* _stringLiteral1359;
extern Il2CppCodeGenString* _stringLiteral2805;
extern "C" void Dictionary_2_GetObjectData_m12958_gshared (Dictionary_2_t1952 * __this, SerializationInfo_t647 * ___info, StreamingContext_t648  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t677_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		_stringLiteral724 = il2cpp_codegen_string_literal_from_index(724);
		_stringLiteral726 = il2cpp_codegen_string_literal_from_index(726);
		_stringLiteral728 = il2cpp_codegen_string_literal_from_index(728);
		_stringLiteral1359 = il2cpp_codegen_string_literal_from_index(1359);
		_stringLiteral2805 = il2cpp_codegen_string_literal_from_index(2805);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2U5BU5D_t2370* V_0 = {0};
	{
		SerializationInfo_t647 * L_0 = ___info;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t677 * L_1 = (ArgumentNullException_t677 *)il2cpp_codegen_object_new (ArgumentNullException_t677_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3666(L_1, (String_t*)_stringLiteral724, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		SerializationInfo_t647 * L_2 = ___info;
		int32_t L_3 = (int32_t)(__this->___generation_14);
		NullCheck((SerializationInfo_t647 *)L_2);
		SerializationInfo_AddValue_m5645((SerializationInfo_t647 *)L_2, (String_t*)_stringLiteral726, (int32_t)L_3, /*hidden argument*/NULL);
		SerializationInfo_t647 * L_4 = ___info;
		Object_t* L_5 = (Object_t*)(__this->___hcp_12);
		NullCheck((SerializationInfo_t647 *)L_4);
		SerializationInfo_AddValue_m4684((SerializationInfo_t647 *)L_4, (String_t*)_stringLiteral728, (Object_t *)L_5, /*hidden argument*/NULL);
		V_0 = (KeyValuePair_2U5BU5D_t2370*)NULL;
		int32_t L_6 = (int32_t)(__this->___count_10);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_7 = (int32_t)(__this->___count_10);
		V_0 = (KeyValuePair_2U5BU5D_t2370*)((KeyValuePair_2U5BU5D_t2370*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 43), L_7));
		KeyValuePair_2U5BU5D_t2370* L_8 = V_0;
		NullCheck((Dictionary_2_t1952 *)__this);
		(( void (*) (Dictionary_2_t1952 *, KeyValuePair_2U5BU5D_t2370*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)((Dictionary_2_t1952 *)__this, (KeyValuePair_2U5BU5D_t2370*)L_8, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
	}

IL_0055:
	{
		SerializationInfo_t647 * L_9 = ___info;
		Int32U5BU5D_t107* L_10 = (Int32U5BU5D_t107*)(__this->___table_4);
		NullCheck(L_10);
		NullCheck((SerializationInfo_t647 *)L_9);
		SerializationInfo_AddValue_m5645((SerializationInfo_t647 *)L_9, (String_t*)_stringLiteral1359, (int32_t)(((int32_t)(((Array_t *)L_10)->max_length))), /*hidden argument*/NULL);
		SerializationInfo_t647 * L_11 = ___info;
		KeyValuePair_2U5BU5D_t2370* L_12 = V_0;
		NullCheck((SerializationInfo_t647 *)L_11);
		SerializationInfo_AddValue_m4684((SerializationInfo_t647 *)L_11, (String_t*)_stringLiteral2805, (Object_t *)(Object_t *)L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral726;
extern Il2CppCodeGenString* _stringLiteral728;
extern Il2CppCodeGenString* _stringLiteral1359;
extern Il2CppCodeGenString* _stringLiteral2805;
extern "C" void Dictionary_2_OnDeserialization_m12960_gshared (Dictionary_2_t1952 * __this, Object_t * ___sender, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(194);
		_stringLiteral726 = il2cpp_codegen_string_literal_from_index(726);
		_stringLiteral728 = il2cpp_codegen_string_literal_from_index(728);
		_stringLiteral1359 = il2cpp_codegen_string_literal_from_index(1359);
		_stringLiteral2805 = il2cpp_codegen_string_literal_from_index(2805);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2U5BU5D_t2370* V_1 = {0};
	int32_t V_2 = 0;
	{
		SerializationInfo_t647 * L_0 = (SerializationInfo_t647 *)(__this->___serialization_info_13);
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
		SerializationInfo_t647 * L_1 = (SerializationInfo_t647 *)(__this->___serialization_info_13);
		NullCheck((SerializationInfo_t647 *)L_1);
		int32_t L_2 = SerializationInfo_GetInt32_m5653((SerializationInfo_t647 *)L_1, (String_t*)_stringLiteral726, /*hidden argument*/NULL);
		__this->___generation_14 = L_2;
		SerializationInfo_t647 * L_3 = (SerializationInfo_t647 *)(__this->___serialization_info_13);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m2130(NULL /*static, unused*/, (RuntimeTypeHandle_t1077 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44)), /*hidden argument*/NULL);
		NullCheck((SerializationInfo_t647 *)L_3);
		Object_t * L_5 = SerializationInfo_GetValue_m5646((SerializationInfo_t647 *)L_3, (String_t*)_stringLiteral728, (Type_t *)L_4, /*hidden argument*/NULL);
		__this->___hcp_12 = ((Object_t*)Castclass(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)));
		SerializationInfo_t647 * L_6 = (SerializationInfo_t647 *)(__this->___serialization_info_13);
		NullCheck((SerializationInfo_t647 *)L_6);
		int32_t L_7 = SerializationInfo_GetInt32_m5653((SerializationInfo_t647 *)L_6, (String_t*)_stringLiteral1359, /*hidden argument*/NULL);
		V_0 = (int32_t)L_7;
		SerializationInfo_t647 * L_8 = (SerializationInfo_t647 *)(__this->___serialization_info_13);
		Type_t * L_9 = Type_GetTypeFromHandle_m2130(NULL /*static, unused*/, (RuntimeTypeHandle_t1077 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)), /*hidden argument*/NULL);
		NullCheck((SerializationInfo_t647 *)L_8);
		Object_t * L_10 = SerializationInfo_GetValue_m5646((SerializationInfo_t647 *)L_8, (String_t*)_stringLiteral2805, (Type_t *)L_9, /*hidden argument*/NULL);
		V_1 = (KeyValuePair_2U5BU5D_t2370*)((KeyValuePair_2U5BU5D_t2370*)Castclass(L_10, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)));
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) >= ((int32_t)((int32_t)10))))
		{
			goto IL_0083;
		}
	}
	{
		V_0 = (int32_t)((int32_t)10);
	}

IL_0083:
	{
		int32_t L_12 = V_0;
		NullCheck((Dictionary_2_t1952 *)__this);
		(( void (*) (Dictionary_2_t1952 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33)->method)((Dictionary_2_t1952 *)__this, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		__this->___count_10 = 0;
		KeyValuePair_2U5BU5D_t2370* L_13 = V_1;
		if (!L_13)
		{
			goto IL_00c9;
		}
	}
	{
		V_2 = (int32_t)0;
		goto IL_00c0;
	}

IL_009e:
	{
		KeyValuePair_2U5BU5D_t2370* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		Object_t * L_16 = (( Object_t * (*) (KeyValuePair_2_t1954 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((KeyValuePair_2_t1954 *)((KeyValuePair_2_t1954 *)(KeyValuePair_2_t1954 *)SZArrayLdElema(L_14, L_15, sizeof(KeyValuePair_2_t1954 ))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		KeyValuePair_2U5BU5D_t2370* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		Object_t * L_19 = (( Object_t * (*) (KeyValuePair_2_t1954 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)((KeyValuePair_2_t1954 *)((KeyValuePair_2_t1954 *)(KeyValuePair_2_t1954 *)SZArrayLdElema(L_17, L_18, sizeof(KeyValuePair_2_t1954 ))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		NullCheck((Dictionary_2_t1952 *)__this);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(27 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue) */, (Dictionary_2_t1952 *)__this, (Object_t *)L_16, (Object_t *)L_19);
		int32_t L_20 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_00c0:
	{
		int32_t L_21 = V_2;
		KeyValuePair_2U5BU5D_t2370* L_22 = V_1;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)(((int32_t)(((Array_t *)L_22)->max_length))))))
		{
			goto IL_009e;
		}
	}

IL_00c9:
	{
		int32_t L_23 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_23+(int32_t)1));
		__this->___serialization_info_13 = (SerializationInfo_t647 *)NULL;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern TypeInfo* ArgumentNullException_t677_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral711;
extern "C" bool Dictionary_2_Remove_m12962_gshared (Dictionary_2_t1952 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t677_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		_stringLiteral711 = il2cpp_codegen_string_literal_from_index(711);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Object_t * V_4 = {0};
	Object_t * V_5 = {0};
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t677 * L_1 = (ArgumentNullException_t677 *)il2cpp_codegen_object_new (ArgumentNullException_t677_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3666(L_1, (String_t*)_stringLiteral711, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		Object_t * L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), (Object_t*)L_2, (Object_t *)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		int32_t L_5 = V_0;
		Int32U5BU5D_t107* L_6 = (Int32U5BU5D_t107*)(__this->___table_4);
		NullCheck(L_6);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))));
		Int32U5BU5D_t107* L_7 = (Int32U5BU5D_t107*)(__this->___table_4);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_9, sizeof(int32_t)))-(int32_t)1));
		int32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)(-1)))))
		{
			goto IL_004e;
		}
	}
	{
		return 0;
	}

IL_004e:
	{
		V_3 = (int32_t)(-1);
	}

IL_0050:
	{
		LinkU5BU5D_t1870* L_11 = (LinkU5BU5D_t1870*)(__this->___linkSlots_5);
		int32_t L_12 = V_2;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (int32_t)(((Link_t1174 *)(Link_t1174 *)SZArrayLdElema(L_11, L_12, sizeof(Link_t1174 )))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0089;
		}
	}
	{
		Object_t* L_15 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t78* L_16 = (ObjectU5BU5D_t78*)(__this->___keySlots_6);
		int32_t L_17 = V_2;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		Object_t * L_19 = ___key;
		NullCheck((Object_t*)L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), (Object_t*)L_15, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_16, L_18, sizeof(Object_t *))), (Object_t *)L_19);
		if (!L_20)
		{
			goto IL_0089;
		}
	}
	{
		goto IL_00a4;
	}

IL_0089:
	{
		int32_t L_21 = V_2;
		V_3 = (int32_t)L_21;
		LinkU5BU5D_t1870* L_22 = (LinkU5BU5D_t1870*)(__this->___linkSlots_5);
		int32_t L_23 = V_2;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = (int32_t)(((Link_t1174 *)(Link_t1174 *)SZArrayLdElema(L_22, L_23, sizeof(Link_t1174 )))->___Next_1);
		V_2 = (int32_t)L_24;
		int32_t L_25 = V_2;
		if ((!(((uint32_t)L_25) == ((uint32_t)(-1)))))
		{
			goto IL_0050;
		}
	}

IL_00a4:
	{
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_00ad;
		}
	}
	{
		return 0;
	}

IL_00ad:
	{
		int32_t L_27 = (int32_t)(__this->___count_10);
		__this->___count_10 = ((int32_t)((int32_t)L_27-(int32_t)1));
		int32_t L_28 = V_3;
		if ((!(((uint32_t)L_28) == ((uint32_t)(-1)))))
		{
			goto IL_00e2;
		}
	}
	{
		Int32U5BU5D_t107* L_29 = (Int32U5BU5D_t107*)(__this->___table_4);
		int32_t L_30 = V_1;
		LinkU5BU5D_t1870* L_31 = (LinkU5BU5D_t1870*)(__this->___linkSlots_5);
		int32_t L_32 = V_2;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
		int32_t L_33 = (int32_t)(((Link_t1174 *)(Link_t1174 *)SZArrayLdElema(L_31, L_32, sizeof(Link_t1174 )))->___Next_1);
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, L_30);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_29, L_30, sizeof(int32_t))) = (int32_t)((int32_t)((int32_t)L_33+(int32_t)1));
		goto IL_0104;
	}

IL_00e2:
	{
		LinkU5BU5D_t1870* L_34 = (LinkU5BU5D_t1870*)(__this->___linkSlots_5);
		int32_t L_35 = V_3;
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, L_35);
		LinkU5BU5D_t1870* L_36 = (LinkU5BU5D_t1870*)(__this->___linkSlots_5);
		int32_t L_37 = V_2;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, L_37);
		int32_t L_38 = (int32_t)(((Link_t1174 *)(Link_t1174 *)SZArrayLdElema(L_36, L_37, sizeof(Link_t1174 )))->___Next_1);
		((Link_t1174 *)(Link_t1174 *)SZArrayLdElema(L_34, L_35, sizeof(Link_t1174 )))->___Next_1 = L_38;
	}

IL_0104:
	{
		LinkU5BU5D_t1870* L_39 = (LinkU5BU5D_t1870*)(__this->___linkSlots_5);
		int32_t L_40 = V_2;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, L_40);
		int32_t L_41 = (int32_t)(__this->___emptySlot_9);
		((Link_t1174 *)(Link_t1174 *)SZArrayLdElema(L_39, L_40, sizeof(Link_t1174 )))->___Next_1 = L_41;
		int32_t L_42 = V_2;
		__this->___emptySlot_9 = L_42;
		LinkU5BU5D_t1870* L_43 = (LinkU5BU5D_t1870*)(__this->___linkSlots_5);
		int32_t L_44 = V_2;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, L_44);
		((Link_t1174 *)(Link_t1174 *)SZArrayLdElema(L_43, L_44, sizeof(Link_t1174 )))->___HashCode_0 = 0;
		ObjectU5BU5D_t78* L_45 = (ObjectU5BU5D_t78*)(__this->___keySlots_6);
		int32_t L_46 = V_2;
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_4));
		Object_t * L_47 = V_4;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, L_46);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_45, L_46, sizeof(Object_t *))) = (Object_t *)L_47;
		ObjectU5BU5D_t78* L_48 = (ObjectU5BU5D_t78*)(__this->___valueSlots_7);
		int32_t L_49 = V_2;
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_5));
		Object_t * L_50 = V_5;
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, L_49);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_48, L_49, sizeof(Object_t *))) = (Object_t *)L_50;
		int32_t L_51 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_51+(int32_t)1));
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern TypeInfo* ArgumentNullException_t677_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral711;
extern "C" bool Dictionary_2_TryGetValue_m12964_gshared (Dictionary_2_t1952 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t677_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		_stringLiteral711 = il2cpp_codegen_string_literal_from_index(711);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Object_t * V_2 = {0};
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t677 * L_1 = (ArgumentNullException_t677 *)il2cpp_codegen_object_new (ArgumentNullException_t677_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3666(L_1, (String_t*)_stringLiteral711, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		Object_t * L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), (Object_t*)L_2, (Object_t *)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t107* L_5 = (Int32U5BU5D_t107*)(__this->___table_4);
		int32_t L_6 = V_0;
		Int32U5BU5D_t107* L_7 = (Int32U5BU5D_t107*)(__this->___table_4);
		NullCheck(L_7);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))));
		int32_t L_8 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_8, sizeof(int32_t)))-(int32_t)1));
		goto IL_00a2;
	}

IL_0048:
	{
		LinkU5BU5D_t1870* L_9 = (LinkU5BU5D_t1870*)(__this->___linkSlots_5);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = (int32_t)(((Link_t1174 *)(Link_t1174 *)SZArrayLdElema(L_9, L_10, sizeof(Link_t1174 )))->___HashCode_0);
		int32_t L_12 = V_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_0090;
		}
	}
	{
		Object_t* L_13 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t78* L_14 = (ObjectU5BU5D_t78*)(__this->___keySlots_6);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		Object_t * L_17 = ___key;
		NullCheck((Object_t*)L_13);
		bool L_18 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), (Object_t*)L_13, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_14, L_16, sizeof(Object_t *))), (Object_t *)L_17);
		if (!L_18)
		{
			goto IL_0090;
		}
	}
	{
		Object_t ** L_19 = ___value;
		ObjectU5BU5D_t78* L_20 = (ObjectU5BU5D_t78*)(__this->___valueSlots_7);
		int32_t L_21 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		*L_19 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_20, L_22, sizeof(Object_t *)));
		return 1;
	}

IL_0090:
	{
		LinkU5BU5D_t1870* L_23 = (LinkU5BU5D_t1870*)(__this->___linkSlots_5);
		int32_t L_24 = V_1;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = (int32_t)(((Link_t1174 *)(Link_t1174 *)SZArrayLdElema(L_23, L_24, sizeof(Link_t1174 )))->___Next_1);
		V_1 = (int32_t)L_25;
	}

IL_00a2:
	{
		int32_t L_26 = V_1;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}
	{
		Object_t ** L_27 = ___value;
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_2));
		Object_t * L_28 = V_2;
		*L_27 = L_28;
		return 0;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t1956 * Dictionary_2_get_Values_m12966_gshared (Dictionary_2_t1952 * __this, const MethodInfo* method)
{
	{
		ValueCollection_t1956 * L_0 = (ValueCollection_t1956 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46));
		(( void (*) (ValueCollection_t1956 *, Dictionary_2_t1952 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 47)->method)(L_0, (Dictionary_2_t1952 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 47));
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t677_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t402_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral711;
extern Il2CppCodeGenString* _stringLiteral2806;
extern "C" Object_t * Dictionary_2_ToTKey_m12968_gshared (Dictionary_2_t1952 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t677_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(194);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		ArgumentException_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(269);
		_stringLiteral711 = il2cpp_codegen_string_literal_from_index(711);
		_stringLiteral2806 = il2cpp_codegen_string_literal_from_index(2806);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t677 * L_1 = (ArgumentNullException_t677 *)il2cpp_codegen_object_new (ArgumentNullException_t677_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3666(L_1, (String_t*)_stringLiteral711, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		Object_t * L_2 = ___key;
		if (((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))))
		{
			goto IL_0040;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m2130(NULL /*static, unused*/, (RuntimeTypeHandle_t1077 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 48)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, (Type_t *)L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m531(NULL /*static, unused*/, (String_t*)_stringLiteral2806, (String_t*)L_4, /*hidden argument*/NULL);
		ArgumentException_t402 * L_6 = (ArgumentException_t402 *)il2cpp_codegen_object_new (ArgumentException_t402_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3747(L_6, (String_t*)L_5, (String_t*)_stringLiteral711, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_6);
	}

IL_0040:
	{
		Object_t * L_7 = ___key;
		return ((Object_t *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t402_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2806;
extern Il2CppCodeGenString* _stringLiteral390;
extern "C" Object_t * Dictionary_2_ToTValue_m12970_gshared (Dictionary_2_t1952 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(194);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		ArgumentException_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(269);
		_stringLiteral2806 = il2cpp_codegen_string_literal_from_index(2806);
		_stringLiteral390 = il2cpp_codegen_string_literal_from_index(390);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m2130(NULL /*static, unused*/, (RuntimeTypeHandle_t1077 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 49)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Type::get_IsValueType() */, (Type_t *)L_1);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_0));
		Object_t * L_3 = V_0;
		return L_3;
	}

IL_0024:
	{
		Object_t * L_4 = ___value;
		if (((Object_t *)IsInst(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5))))
		{
			goto IL_0053;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m2130(NULL /*static, unused*/, (RuntimeTypeHandle_t1077 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 49)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, (Type_t *)L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m531(NULL /*static, unused*/, (String_t*)_stringLiteral2806, (String_t*)L_6, /*hidden argument*/NULL);
		ArgumentException_t402 * L_8 = (ArgumentException_t402 *)il2cpp_codegen_object_new (ArgumentException_t402_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3747(L_8, (String_t*)L_7, (String_t*)_stringLiteral390, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_8);
	}

IL_0053:
	{
		Object_t * L_9 = ___value;
		return ((Object_t *)Castclass(L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m12972_gshared (Dictionary_2_t1952 * __this, KeyValuePair_2_t1954  ___pair, const MethodInfo* method)
{
	Object_t * V_0 = {0};
	{
		Object_t * L_0 = (( Object_t * (*) (KeyValuePair_2_t1954 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((KeyValuePair_2_t1954 *)(&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		NullCheck((Dictionary_2_t1952 *)__this);
		bool L_1 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t ** >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&) */, (Dictionary_2_t1952 *)__this, (Object_t *)L_0, (Object_t **)(&V_0));
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		return 0;
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41));
		EqualityComparer_1_t1777 * L_2 = (( EqualityComparer_1_t1777 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40));
		Object_t * L_3 = (( Object_t * (*) (KeyValuePair_2_t1954 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)((KeyValuePair_2_t1954 *)(&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		Object_t * L_4 = V_0;
		NullCheck((EqualityComparer_1_t1777 *)L_2);
		bool L_5 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t1777 *)L_2, (Object_t *)L_3, (Object_t *)L_4);
		return L_5;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t1958  Dictionary_2_GetEnumerator_m12974_gshared (Dictionary_2_t1952 * __this, const MethodInfo* method)
{
	{
		Enumerator_t1958  L_0 = {0};
		(( void (*) (Enumerator_t1958 *, Dictionary_2_t1952 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)(&L_0, (Dictionary_2_t1952 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return L_0;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
extern "C" DictionaryEntry_t1050  Dictionary_2_U3CCopyToU3Em__0_m12976_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = ___value;
		DictionaryEntry_t1050  L_2 = {0};
		DictionaryEntry__ctor_m5636(&L_2, (Object_t *)L_0, (Object_t *)L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_16.h"
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_16MethodDeclarations.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Int32)
extern "C" KeyValuePair_2_t1954  Array_InternalArray__get_Item_TisKeyValuePair_2_t1954_m17774_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t1954_m17774(__this, p0, method) (( KeyValuePair_2_t1954  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t1954_m17774_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m13021_gshared (InternalEnumerator_1_t1955 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13022_gshared (InternalEnumerator_1_t1955 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t1954  L_0 = (( KeyValuePair_2_t1954  (*) (InternalEnumerator_1_t1955 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t1955 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t1954  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m13023_gshared (InternalEnumerator_1_t1955 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m13024_gshared (InternalEnumerator_1_t1955 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001e;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m5638((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001e:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B5_0 = 0;
	}

IL_0044:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t881_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2793;
extern Il2CppCodeGenString* _stringLiteral2794;
extern "C" KeyValuePair_2_t1954  InternalEnumerator_1_get_Current_m13025_gshared (InternalEnumerator_1_t1955 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t881_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(515);
		_stringLiteral2793 = il2cpp_codegen_string_literal_from_index(2793);
		_stringLiteral2794 = il2cpp_codegen_string_literal_from_index(2794);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t881 * L_1 = (InvalidOperationException_t881 *)il2cpp_codegen_object_new (InvalidOperationException_t881_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4709(L_1, (String_t*)_stringLiteral2793, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0018:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_002f;
		}
	}
	{
		InvalidOperationException_t881 * L_3 = (InvalidOperationException_t881 *)il2cpp_codegen_object_new (InvalidOperationException_t881_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4709(L_3, (String_t*)_stringLiteral2794, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_002f:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m5638((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		KeyValuePair_2_t1954  L_8 = (( KeyValuePair_2_t1954  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(TKey,TValue)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" void KeyValuePair_2__ctor_m13026_gshared (KeyValuePair_2_t1954 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		(( void (*) (KeyValuePair_2_t1954 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((KeyValuePair_2_t1954 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t * L_1 = ___value;
		(( void (*) (KeyValuePair_2_t1954 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyValuePair_2_t1954 *)__this, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
extern "C" Object_t * KeyValuePair_2_get_Key_m13027_gshared (KeyValuePair_2_t1954 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___key_0);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m13028_gshared (KeyValuePair_2_t1954 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___key_0 = L_0;
		return;
	}
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
extern "C" Object_t * KeyValuePair_2_get_Value_m13029_gshared (KeyValuePair_2_t1954 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___value_1);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m13030_gshared (KeyValuePair_2_t1954 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___value_1 = L_0;
		return;
	}
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::ToString()
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern TypeInfo* StringU5BU5D_t82_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral340;
extern Il2CppCodeGenString* _stringLiteral349;
extern Il2CppCodeGenString* _stringLiteral13;
extern "C" String_t* KeyValuePair_2_ToString_m13031_gshared (KeyValuePair_2_t1954 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(356);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		_stringLiteral340 = il2cpp_codegen_string_literal_from_index(340);
		_stringLiteral349 = il2cpp_codegen_string_literal_from_index(349);
		_stringLiteral13 = il2cpp_codegen_string_literal_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	int32_t G_B2_0 = 0;
	StringU5BU5D_t82* G_B2_1 = {0};
	StringU5BU5D_t82* G_B2_2 = {0};
	int32_t G_B1_0 = 0;
	StringU5BU5D_t82* G_B1_1 = {0};
	StringU5BU5D_t82* G_B1_2 = {0};
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	StringU5BU5D_t82* G_B3_2 = {0};
	StringU5BU5D_t82* G_B3_3 = {0};
	int32_t G_B5_0 = 0;
	StringU5BU5D_t82* G_B5_1 = {0};
	StringU5BU5D_t82* G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	StringU5BU5D_t82* G_B4_1 = {0};
	StringU5BU5D_t82* G_B4_2 = {0};
	String_t* G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	StringU5BU5D_t82* G_B6_2 = {0};
	StringU5BU5D_t82* G_B6_3 = {0};
	{
		StringU5BU5D_t82* L_0 = (StringU5BU5D_t82*)((StringU5BU5D_t82*)SZArrayNew(StringU5BU5D_t82_il2cpp_TypeInfo_var, 5));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, _stringLiteral340);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0, sizeof(String_t*))) = (String_t*)_stringLiteral340;
		StringU5BU5D_t82* L_1 = (StringU5BU5D_t82*)L_0;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t1954 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t1954 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!L_2)
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0039;
		}
	}
	{
		Object_t * L_3 = (( Object_t * (*) (KeyValuePair_2_t1954 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t1954 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (Object_t *)L_3;
		NullCheck((Object_t *)(*(&V_0)));
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Object_t *)(*(&V_0)));
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((String_t**)(String_t**)SZArrayLdElema(G_B3_2, G_B3_1, sizeof(String_t*))) = (String_t*)G_B3_0;
		StringU5BU5D_t82* L_6 = (StringU5BU5D_t82*)G_B3_3;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, _stringLiteral349);
		*((String_t**)(String_t**)SZArrayLdElema(L_6, 2, sizeof(String_t*))) = (String_t*)_stringLiteral349;
		StringU5BU5D_t82* L_7 = (StringU5BU5D_t82*)L_6;
		Object_t * L_8 = (( Object_t * (*) (KeyValuePair_2_t1954 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t1954 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
		if (!L_8)
		{
			G_B5_0 = 3;
			G_B5_1 = L_7;
			G_B5_2 = L_7;
			goto IL_0072;
		}
	}
	{
		Object_t * L_9 = (( Object_t * (*) (KeyValuePair_2_t1954 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t1954 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (Object_t *)L_9;
		NullCheck((Object_t *)(*(&V_1)));
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Object_t *)(*(&V_1)));
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		*((String_t**)(String_t**)SZArrayLdElema(G_B6_2, G_B6_1, sizeof(String_t*))) = (String_t*)G_B6_0;
		StringU5BU5D_t82* L_12 = (StringU5BU5D_t82*)G_B6_3;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 4);
		ArrayElementTypeCheck (L_12, _stringLiteral13);
		*((String_t**)(String_t**)SZArrayLdElema(L_12, 4, sizeof(String_t*))) = (String_t*)_stringLiteral13;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m5659(NULL /*static, unused*/, (StringU5BU5D_t82*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_8.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_7.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_7MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_8MethodDeclarations.h"
struct Array_t;
struct Transform_1_t1959;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m17785_gshared (Dictionary_2_t1952 * __this, Array_t * p0, int32_t p1, Transform_1_t1959 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m17785(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t1952 *, Array_t *, int32_t, Transform_1_t1959 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m17785_gshared)(__this, p0, p1, p2, method)
struct ObjectU5BU5D_t78;
struct Transform_1_t1959;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m17786_gshared (Dictionary_2_t1952 * __this, ObjectU5BU5D_t78* p0, int32_t p1, Transform_1_t1959 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m17786(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t1952 *, ObjectU5BU5D_t78*, int32_t, Transform_1_t1959 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m17786_gshared)(__this, p0, p1, p2, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_11.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t677_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1354;
extern "C" void ValueCollection__ctor_m13032_gshared (ValueCollection_t1956 * __this, Dictionary_2_t1952 * ___dictionary, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t677_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		_stringLiteral1354 = il2cpp_codegen_string_literal_from_index(1354);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m355((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t1952 * L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t677 * L_1 = (ArgumentNullException_t677 *)il2cpp_codegen_object_new (ArgumentNullException_t677_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3666(L_1, (String_t*)_stringLiteral1354, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0017:
	{
		Dictionary_2_t1952 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
// System.Object
#include "mscorlib_System_Object.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t81_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2807;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m13033_gshared (ValueCollection_t1956 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t81_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		_stringLiteral2807 = il2cpp_codegen_string_literal_from_index(2807);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t81 * L_0 = (NotSupportedException_t81 *)il2cpp_codegen_object_new (NotSupportedException_t81_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m4631(L_0, (String_t*)_stringLiteral2807, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Clear()
extern TypeInfo* NotSupportedException_t81_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2807;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m13034_gshared (ValueCollection_t1956 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t81_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		_stringLiteral2807 = il2cpp_codegen_string_literal_from_index(2807);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t81 * L_0 = (NotSupportedException_t81 *)il2cpp_codegen_object_new (NotSupportedException_t81_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m4631(L_0, (String_t*)_stringLiteral2807, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m13035_gshared (ValueCollection_t1956 * __this, Object_t * ___item, const MethodInfo* method)
{
	{
		Dictionary_2_t1952 * L_0 = (Dictionary_2_t1952 *)(__this->___dictionary_0);
		Object_t * L_1 = ___item;
		NullCheck((Dictionary_2_t1952 *)L_0);
		bool L_2 = (( bool (*) (Dictionary_2_t1952 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t1952 *)L_0, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern TypeInfo* NotSupportedException_t81_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2807;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m13036_gshared (ValueCollection_t1956 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t81_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		_stringLiteral2807 = il2cpp_codegen_string_literal_from_index(2807);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t81 * L_0 = (NotSupportedException_t81 *)il2cpp_codegen_object_new (NotSupportedException_t81_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m4631(L_0, (String_t*)_stringLiteral2807, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m13037_gshared (ValueCollection_t1956 * __this, const MethodInfo* method)
{
	{
		NullCheck((ValueCollection_t1956 *)__this);
		Enumerator_t1957  L_0 = (( Enumerator_t1957  (*) (ValueCollection_t1956 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((ValueCollection_t1956 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t1957  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
// System.Int32
#include "mscorlib_System_Int32.h"
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m13038_gshared (ValueCollection_t1956 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	ObjectU5BU5D_t78* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (ObjectU5BU5D_t78*)((ObjectU5BU5D_t78*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		ObjectU5BU5D_t78* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		ObjectU5BU5D_t78* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((ValueCollection_t1956 *)__this);
		(( void (*) (ValueCollection_t1956 *, ObjectU5BU5D_t78*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((ValueCollection_t1956 *)__this, (ObjectU5BU5D_t78*)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return;
	}

IL_0016:
	{
		Dictionary_2_t1952 * L_4 = (Dictionary_2_t1952 *)(__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck((Dictionary_2_t1952 *)L_4);
		(( void (*) (Dictionary_2_t1952 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t1952 *)L_4, (Array_t *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t1952 * L_7 = (Dictionary_2_t1952 *)(__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t1959 * L_11 = (Transform_1_t1959 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t1959 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, (Object_t *)NULL, (IntPtr_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t1952 *)L_7);
		(( void (*) (Dictionary_2_t1952 *, Array_t *, int32_t, Transform_1_t1959 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t1952 *)L_7, (Array_t *)L_8, (int32_t)L_9, (Transform_1_t1959 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m13039_gshared (ValueCollection_t1956 * __this, const MethodInfo* method)
{
	{
		NullCheck((ValueCollection_t1956 *)__this);
		Enumerator_t1957  L_0 = (( Enumerator_t1957  (*) (ValueCollection_t1956 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((ValueCollection_t1956 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t1957  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m13040_gshared (ValueCollection_t1956 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m13041_gshared (ValueCollection_t1956 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern TypeInfo* ICollection_t1051_il2cpp_TypeInfo_var;
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m13042_gshared (ValueCollection_t1956 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t1051_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(568);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t1952 * L_0 = (Dictionary_2_t1952 *)(__this->___dictionary_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t1051_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::CopyTo(TValue[],System.Int32)
#include "mscorlib_ArrayTypes.h"
extern "C" void ValueCollection_CopyTo_m13043_gshared (ValueCollection_t1956 * __this, ObjectU5BU5D_t78* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Dictionary_2_t1952 * L_0 = (Dictionary_2_t1952 *)(__this->___dictionary_0);
		ObjectU5BU5D_t78* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Dictionary_2_t1952 *)L_0);
		(( void (*) (Dictionary_2_t1952 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t1952 *)L_0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t1952 * L_3 = (Dictionary_2_t1952 *)(__this->___dictionary_0);
		ObjectU5BU5D_t78* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t1959 * L_7 = (Transform_1_t1959 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t1959 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, (Object_t *)NULL, (IntPtr_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t1952 *)L_3);
		(( void (*) (Dictionary_2_t1952 *, ObjectU5BU5D_t78*, int32_t, Transform_1_t1959 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((Dictionary_2_t1952 *)L_3, (ObjectU5BU5D_t78*)L_4, (int32_t)L_5, (Transform_1_t1959 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t1957  ValueCollection_GetEnumerator_m13044_gshared (ValueCollection_t1956 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t1952 * L_0 = (Dictionary_2_t1952 *)(__this->___dictionary_0);
		Enumerator_t1957  L_1 = {0};
		(( void (*) (Enumerator_t1957 *, Dictionary_2_t1952 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, (Dictionary_2_t1952 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m13045_gshared (ValueCollection_t1956 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t1952 * L_0 = (Dictionary_2_t1952 *)(__this->___dictionary_0);
		NullCheck((Dictionary_2_t1952 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count() */, (Dictionary_2_t1952 *)L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_11.h"
extern "C" void Enumerator__ctor_m13046_gshared (Enumerator_t1957 * __this, Dictionary_2_t1952 * ___host, const MethodInfo* method)
{
	{
		Dictionary_2_t1952 * L_0 = ___host;
		NullCheck((Dictionary_2_t1952 *)L_0);
		Enumerator_t1958  L_1 = (( Enumerator_t1958  (*) (Dictionary_2_t1952 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t1952 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m13047_gshared (Enumerator_t1957 * __this, const MethodInfo* method)
{
	{
		Enumerator_t1958 * L_0 = (Enumerator_t1958 *)&(__this->___host_enumerator_0);
		Object_t * L_1 = (( Object_t * (*) (Enumerator_t1958 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t1958 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m13048_gshared (Enumerator_t1957 * __this, const MethodInfo* method)
{
	{
		Enumerator_t1958 * L_0 = (Enumerator_t1958 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t1958 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t1958 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m13049_gshared (Enumerator_t1957 * __this, const MethodInfo* method)
{
	{
		Enumerator_t1958 * L_0 = (Enumerator_t1958 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t1958 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((Enumerator_t1958 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * Enumerator_get_Current_m13050_gshared (Enumerator_t1957 * __this, const MethodInfo* method)
{
	{
		Enumerator_t1958 * L_0 = (Enumerator_t1958 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t1954 * L_1 = (KeyValuePair_2_t1954 *)&(L_0->___current_3);
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t1954 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t1954 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_11.h"
extern "C" void Enumerator__ctor_m13051_gshared (Enumerator_t1958 * __this, Dictionary_2_t1952 * ___dictionary, const MethodInfo* method)
{
	{
		Dictionary_2_t1952 * L_0 = ___dictionary;
		__this->___dictionary_0 = L_0;
		Dictionary_2_t1952 * L_1 = ___dictionary;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)(L_1->___generation_14);
		__this->___stamp_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m13052_gshared (Enumerator_t1958 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t1958 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t1958 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t1954  L_0 = (KeyValuePair_2_t1954 )(__this->___current_3);
		KeyValuePair_2_t1954  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
extern "C" DictionaryEntry_t1050  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13053_gshared (Enumerator_t1958 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t1958 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t1958 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t1954 * L_0 = (KeyValuePair_2_t1954 *)&(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t1954 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t1954 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		KeyValuePair_2_t1954 * L_2 = (KeyValuePair_2_t1954 *)&(__this->___current_3);
		Object_t * L_3 = (( Object_t * (*) (KeyValuePair_2_t1954 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t1954 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		DictionaryEntry_t1050  L_4 = {0};
		DictionaryEntry__ctor_m5636(&L_4, (Object_t *)L_1, (Object_t *)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13054_gshared (Enumerator_t1958 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (Enumerator_t1958 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((Enumerator_t1958 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return L_0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13055_gshared (Enumerator_t1958 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (Enumerator_t1958 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((Enumerator_t1958 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		return L_0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m13056_gshared (Enumerator_t1958 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		(( void (*) (Enumerator_t1958 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Enumerator_t1958 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		return 0;
	}

IL_0014:
	{
		goto IL_007b;
	}

IL_0019:
	{
		int32_t L_1 = (int32_t)(__this->___next_1);
		int32_t L_2 = (int32_t)L_1;
		V_1 = (int32_t)L_2;
		__this->___next_1 = ((int32_t)((int32_t)L_2+(int32_t)1));
		int32_t L_3 = V_1;
		V_0 = (int32_t)L_3;
		Dictionary_2_t1952 * L_4 = (Dictionary_2_t1952 *)(__this->___dictionary_0);
		NullCheck(L_4);
		LinkU5BU5D_t1870* L_5 = (LinkU5BU5D_t1870*)(L_4->___linkSlots_5);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = (int32_t)(((Link_t1174 *)(Link_t1174 *)SZArrayLdElema(L_5, L_6, sizeof(Link_t1174 )))->___HashCode_0);
		if (!((int32_t)((int32_t)L_7&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_007b;
		}
	}
	{
		Dictionary_2_t1952 * L_8 = (Dictionary_2_t1952 *)(__this->___dictionary_0);
		NullCheck(L_8);
		ObjectU5BU5D_t78* L_9 = (ObjectU5BU5D_t78*)(L_8->___keySlots_6);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		Dictionary_2_t1952 * L_12 = (Dictionary_2_t1952 *)(__this->___dictionary_0);
		NullCheck(L_12);
		ObjectU5BU5D_t78* L_13 = (ObjectU5BU5D_t78*)(L_12->___valueSlots_7);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		KeyValuePair_2_t1954  L_16 = {0};
		(( void (*) (KeyValuePair_2_t1954 *, Object_t *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(&L_16, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11, sizeof(Object_t *))), (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_13, L_15, sizeof(Object_t *))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		__this->___current_3 = L_16;
		return 1;
	}

IL_007b:
	{
		int32_t L_17 = (int32_t)(__this->___next_1);
		Dictionary_2_t1952 * L_18 = (Dictionary_2_t1952 *)(__this->___dictionary_0);
		NullCheck(L_18);
		int32_t L_19 = (int32_t)(L_18->___touchedSlots_8);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_0019;
		}
	}
	{
		__this->___next_1 = (-1);
		return 0;
	}
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C" KeyValuePair_2_t1954  Enumerator_get_Current_m13057_gshared (Enumerator_t1958 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t1954  L_0 = (KeyValuePair_2_t1954 )(__this->___current_3);
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m13058_gshared (Enumerator_t1958 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t1958 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t1958 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t1954 * L_0 = (KeyValuePair_2_t1954 *)&(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t1954 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t1954 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m13059_gshared (Enumerator_t1958 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t1958 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t1958 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t1954 * L_0 = (KeyValuePair_2_t1954 *)&(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t1954 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t1954 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyState()
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* ObjectDisposedException_t709_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t881_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2808;
extern "C" void Enumerator_VerifyState_m13060_gshared (Enumerator_t1958 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(433);
		InvalidOperationException_t881_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(515);
		_stringLiteral2808 = il2cpp_codegen_string_literal_from_index(2808);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t1952 * L_0 = (Dictionary_2_t1952 *)(__this->___dictionary_0);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		ObjectDisposedException_t709 * L_1 = (ObjectDisposedException_t709 *)il2cpp_codegen_object_new (ObjectDisposedException_t709_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m3748(L_1, (String_t*)NULL, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0012:
	{
		Dictionary_2_t1952 * L_2 = (Dictionary_2_t1952 *)(__this->___dictionary_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)(L_2->___generation_14);
		int32_t L_4 = (int32_t)(__this->___stamp_2);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_0033;
		}
	}
	{
		InvalidOperationException_t881 * L_5 = (InvalidOperationException_t881 *)il2cpp_codegen_object_new (InvalidOperationException_t881_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4709(L_5, (String_t*)_stringLiteral2808, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_5);
	}

IL_0033:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyCurrent()
extern TypeInfo* InvalidOperationException_t881_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2809;
extern "C" void Enumerator_VerifyCurrent_m13061_gshared (Enumerator_t1958 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t881_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(515);
		_stringLiteral2809 = il2cpp_codegen_string_literal_from_index(2809);
		s_Il2CppMethodIntialized = true;
	}
	{
		(( void (*) (Enumerator_t1958 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Enumerator_t1958 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		InvalidOperationException_t881 * L_1 = (InvalidOperationException_t881 *)il2cpp_codegen_object_new (InvalidOperationException_t881_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4709(L_1, (String_t*)_stringLiteral2809, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_001d:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m13062_gshared (Enumerator_t1958 * __this, const MethodInfo* method)
{
	{
		__this->___dictionary_0 = (Dictionary_2_t1952 *)NULL;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Transform_1__ctor_m13063_gshared (Transform_1_t1959 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::Invoke(TKey,TValue)
extern "C" Object_t * Transform_1_Invoke_m13064_gshared (Transform_1_t1959 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m13064((Transform_1_t1959 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * Transform_1_BeginInvoke_m13065_gshared (Transform_1_t1959 * __this, Object_t * ___key, Object_t * ___value, AsyncCallback_t9 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m13066_gshared (Transform_1_t1959 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Transform_1__ctor_m13067_gshared (Transform_1_t1953 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t1050  Transform_1_Invoke_m13068_gshared (Transform_1_t1953 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m13068((Transform_1_t1953 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef DictionaryEntry_t1050  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef DictionaryEntry_t1050  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef DictionaryEntry_t1050  (*FunctionPointerType) (Object_t * __this, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * Transform_1_BeginInvoke_m13069_gshared (Transform_1_t1953 * __this, Object_t * ___key, Object_t * ___value, AsyncCallback_t9 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t1050  Transform_1_EndInvoke_m13070_gshared (Transform_1_t1953 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(DictionaryEntry_t1050 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Transform_1__ctor_m13071_gshared (Transform_1_t1960 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t1954  Transform_1_Invoke_m13072_gshared (Transform_1_t1960 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m13072((Transform_1_t1960 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t1954  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef KeyValuePair_2_t1954  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t1954  (*FunctionPointerType) (Object_t * __this, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * Transform_1_BeginInvoke_m13073_gshared (Transform_1_t1960 * __this, Object_t * ___key, Object_t * ___value, AsyncCallback_t9 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t1954  Transform_1_EndInvoke_m13074_gshared (Transform_1_t1960 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t1954 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_11.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void ShimEnumerator__ctor_m13075_gshared (ShimEnumerator_t1961 * __this, Dictionary_2_t1952 * ___host, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m355((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t1952 * L_0 = ___host;
		NullCheck((Dictionary_2_t1952 *)L_0);
		Enumerator_t1958  L_1 = (( Enumerator_t1958  (*) (Dictionary_2_t1952 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t1952 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m13076_gshared (ShimEnumerator_t1961 * __this, const MethodInfo* method)
{
	{
		Enumerator_t1958 * L_0 = (Enumerator_t1958 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t1958 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t1958 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern TypeInfo* IDictionaryEnumerator_t1049_il2cpp_TypeInfo_var;
extern "C" DictionaryEntry_t1050  ShimEnumerator_get_Entry_m13077_gshared (ShimEnumerator_t1961 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionaryEnumerator_t1049_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(601);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enumerator_t1958  L_0 = (Enumerator_t1958 )(__this->___host_enumerator_0);
		Enumerator_t1958  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck((Object_t *)L_2);
		DictionaryEntry_t1050  L_3 = (DictionaryEntry_t1050 )InterfaceFuncInvoker0< DictionaryEntry_t1050  >::Invoke(0 /* System.Collections.DictionaryEntry System.Collections.IDictionaryEnumerator::get_Entry() */, IDictionaryEnumerator_t1049_il2cpp_TypeInfo_var, (Object_t *)L_2);
		return L_3;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m13078_gshared (ShimEnumerator_t1961 * __this, const MethodInfo* method)
{
	KeyValuePair_2_t1954  V_0 = {0};
	{
		Enumerator_t1958 * L_0 = (Enumerator_t1958 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t1954  L_1 = (( KeyValuePair_2_t1954  (*) (Enumerator_t1958 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t1958 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (KeyValuePair_2_t1954 )L_1;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t1954 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t1954 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m13079_gshared (ShimEnumerator_t1961 * __this, const MethodInfo* method)
{
	KeyValuePair_2_t1954  V_0 = {0};
	{
		Enumerator_t1958 * L_0 = (Enumerator_t1958 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t1954  L_1 = (( KeyValuePair_2_t1954  (*) (Enumerator_t1958 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t1958 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (KeyValuePair_2_t1954 )L_1;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t1954 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t1954 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern TypeInfo* DictionaryEntry_t1050_il2cpp_TypeInfo_var;
extern "C" Object_t * ShimEnumerator_get_Current_m13080_gshared (ShimEnumerator_t1961 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEntry_t1050_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(570);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((ShimEnumerator_t1961 *)__this);
		DictionaryEntry_t1050  L_0 = (DictionaryEntry_t1050 )VirtFuncInvoker0< DictionaryEntry_t1050  >::Invoke(6 /* System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry() */, (ShimEnumerator_t1961 *)__this);
		DictionaryEntry_t1050  L_1 = L_0;
		Object_t * L_2 = Box(DictionaryEntry_t1050_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_5.h"
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_5MethodDeclarations.h"
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Action_1__ctor_m13166_gshared (Action_1_t1965 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.Action`1<System.Object>::Invoke(T)
extern "C" void Action_1_Invoke_m13167_gshared (Action_1_t1965 * __this, Object_t * ___obj, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Action_1_Invoke_m13167((Action_1_t1965 *)__this->___prev_9,___obj, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___obj, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___obj, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Action`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * Action_1_BeginInvoke_m13169_gshared (Action_1_t1965 * __this, Object_t * ___obj, AsyncCallback_t9 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___obj;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.Action`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void Action_1_EndInvoke_m13171_gshared (Action_1_t1965 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
#include "UnityEngine_UI_UnityEngine_UI_CoroutineTween_TweenRunner_1_g_0.h"
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
#include "UnityEngine_UI_UnityEngine_UI_CoroutineTween_TweenRunner_1_g_0MethodDeclarations.h"
// UnityEngine.UI.CoroutineTween.ColorTween
#include "UnityEngine_UI_UnityEngine_UI_CoroutineTween_ColorTween.h"
// UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.ColorTween>
#include "UnityEngine_UI_UnityEngine_UI_CoroutineTween_TweenRunner_1_U_0.h"
// UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.ColorTween>
#include "UnityEngine_UI_UnityEngine_UI_CoroutineTween_TweenRunner_1_U_0MethodDeclarations.h"
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void TweenRunner_1__ctor_m2122_gshared (TweenRunner_1_t204 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m355((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::Start(T)
// UnityEngine.UI.CoroutineTween.ColorTween
#include "UnityEngine_UI_UnityEngine_UI_CoroutineTween_ColorTween.h"
extern "C" Object_t * TweenRunner_1_Start_m13172_gshared (Object_t * __this /* static, unused */, ColorTween_t162  ___tweenInfo, const MethodInfo* method)
{
	U3CStartU3Ec__Iterator0_t1966 * V_0 = {0};
	{
		U3CStartU3Ec__Iterator0_t1966 * L_0 = (U3CStartU3Ec__Iterator0_t1966 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (U3CStartU3Ec__Iterator0_t1966 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = (U3CStartU3Ec__Iterator0_t1966 *)L_0;
		U3CStartU3Ec__Iterator0_t1966 * L_1 = V_0;
		ColorTween_t162  L_2 = ___tweenInfo;
		NullCheck(L_1);
		L_1->___tweenInfo_0 = L_2;
		U3CStartU3Ec__Iterator0_t1966 * L_3 = V_0;
		ColorTween_t162  L_4 = ___tweenInfo;
		NullCheck(L_3);
		L_3->___U3CU24U3EtweenInfo_5 = L_4;
		U3CStartU3Ec__Iterator0_t1966 * L_5 = V_0;
		return L_5;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::Init(UnityEngine.MonoBehaviour)
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
extern "C" void TweenRunner_1_Init_m2123_gshared (TweenRunner_1_t204 * __this, MonoBehaviour_t2 * ___coroutineContainer, const MethodInfo* method)
{
	{
		MonoBehaviour_t2 * L_0 = ___coroutineContainer;
		__this->___m_CoroutineContainer_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::StartTween(T)
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// UnityEngine.UI.CoroutineTween.ColorTween
#include "UnityEngine_UI_UnityEngine_UI_CoroutineTween_ColorTweenMethodDeclarations.h"
extern Il2CppCodeGenString* _stringLiteral2811;
extern "C" void TweenRunner_1_StartTween_m2153_gshared (TweenRunner_1_t204 * __this, ColorTween_t162  ___info, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral2811 = il2cpp_codegen_string_literal_from_index(2811);
		s_Il2CppMethodIntialized = true;
	}
	{
		MonoBehaviour_t2 * L_0 = (MonoBehaviour_t2 *)(__this->___m_CoroutineContainer_0);
		bool L_1 = Object_op_Equality_m305(NULL /*static, unused*/, (Object_t75 *)L_0, (Object_t75 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Debug_LogWarning_m310(NULL /*static, unused*/, (Object_t *)_stringLiteral2811, /*hidden argument*/NULL);
		return;
	}

IL_001c:
	{
		Object_t * L_2 = (Object_t *)(__this->___m_Tween_1);
		if (!L_2)
		{
			goto IL_003f;
		}
	}
	{
		MonoBehaviour_t2 * L_3 = (MonoBehaviour_t2 *)(__this->___m_CoroutineContainer_0);
		Object_t * L_4 = (Object_t *)(__this->___m_Tween_1);
		NullCheck((MonoBehaviour_t2 *)L_3);
		MonoBehaviour_StopCoroutine_m2869((MonoBehaviour_t2 *)L_3, (Object_t *)L_4, /*hidden argument*/NULL);
		__this->___m_Tween_1 = (Object_t *)NULL;
	}

IL_003f:
	{
		MonoBehaviour_t2 * L_5 = (MonoBehaviour_t2 *)(__this->___m_CoroutineContainer_0);
		NullCheck((Component_t70 *)L_5);
		GameObject_t47 * L_6 = Component_get_gameObject_m307((Component_t70 *)L_5, /*hidden argument*/NULL);
		NullCheck((GameObject_t47 *)L_6);
		bool L_7 = GameObject_get_activeInHierarchy_m308((GameObject_t47 *)L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0067;
		}
	}
	{
		NullCheck((ColorTween_t162 *)(&___info));
		ColorTween_TweenValue_m819((ColorTween_t162 *)(&___info), (float)(1.0f), NULL);
		return;
	}

IL_0067:
	{
		ColorTween_t162  L_8 = ___info;
		Object_t * L_9 = (( Object_t * (*) (Object_t * /* static, unused */, ColorTween_t162 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(NULL /*static, unused*/, (ColorTween_t162 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		__this->___m_Tween_1 = L_9;
		MonoBehaviour_t2 * L_10 = (MonoBehaviour_t2 *)(__this->___m_CoroutineContainer_0);
		Object_t * L_11 = (Object_t *)(__this->___m_Tween_1);
		NullCheck((MonoBehaviour_t2 *)L_10);
		MonoBehaviour_StartCoroutine_m2016((MonoBehaviour_t2 *)L_10, (Object_t *)L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.ColorTween>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void U3CStartU3Ec__Iterator0__ctor_m13173_gshared (U3CStartU3Ec__Iterator0_t1966 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m355((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.ColorTween>::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CStartU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m13174_gshared (U3CStartU3Ec__Iterator0_t1966 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_4);
		return L_0;
	}
}
// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.ColorTween>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CStartU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m13175_gshared (U3CStartU3Ec__Iterator0_t1966 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_4);
		return L_0;
	}
}
// System.Boolean UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.ColorTween>::MoveNext()
// UnityEngine.UI.CoroutineTween.ColorTween
#include "UnityEngine_UI_UnityEngine_UI_CoroutineTween_ColorTweenMethodDeclarations.h"
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
extern TypeInfo* Mathf_t69_il2cpp_TypeInfo_var;
extern "C" bool U3CStartU3Ec__Iterator0_MoveNext_m13176_gshared (U3CStartU3Ec__Iterator0_t1966 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t69_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	float G_B7_0 = 0.0f;
	U3CStartU3Ec__Iterator0_t1966 * G_B7_1 = {0};
	float G_B6_0 = 0.0f;
	U3CStartU3Ec__Iterator0_t1966 * G_B6_1 = {0};
	float G_B8_0 = 0.0f;
	float G_B8_1 = 0.0f;
	U3CStartU3Ec__Iterator0_t1966 * G_B8_2 = {0};
	{
		int32_t L_0 = (int32_t)(__this->___U24PC_3);
		V_0 = (uint32_t)L_0;
		__this->___U24PC_3 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_00cb;
		}
	}
	{
		goto IL_0104;
	}

IL_0021:
	{
		ColorTween_t162 * L_2 = (ColorTween_t162 *)&(__this->___tweenInfo_0);
		NullCheck((ColorTween_t162 *)L_2);
		bool L_3 = ColorTween_ValidTarget_m823((ColorTween_t162 *)L_2, NULL);
		if (L_3)
		{
			goto IL_003c;
		}
	}
	{
		goto IL_0104;
	}

IL_003c:
	{
		__this->___U3CelapsedTimeU3E__0_1 = (0.0f);
		goto IL_00cb;
	}

IL_004c:
	{
		float L_4 = (float)(__this->___U3CelapsedTimeU3E__0_1);
		ColorTween_t162 * L_5 = (ColorTween_t162 *)&(__this->___tweenInfo_0);
		NullCheck((ColorTween_t162 *)L_5);
		bool L_6 = ColorTween_get_ignoreTimeScale_m817((ColorTween_t162 *)L_5, NULL);
		G_B6_0 = L_4;
		G_B6_1 = ((U3CStartU3Ec__Iterator0_t1966 *)(__this));
		if (!L_6)
		{
			G_B7_0 = L_4;
			G_B7_1 = ((U3CStartU3Ec__Iterator0_t1966 *)(__this));
			goto IL_0073;
		}
	}
	{
		float L_7 = Time_get_unscaledDeltaTime_m2014(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B8_0 = L_7;
		G_B8_1 = G_B6_0;
		G_B8_2 = ((U3CStartU3Ec__Iterator0_t1966 *)(G_B6_1));
		goto IL_0078;
	}

IL_0073:
	{
		float L_8 = Time_get_deltaTime_m2925(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B8_0 = L_8;
		G_B8_1 = G_B7_0;
		G_B8_2 = ((U3CStartU3Ec__Iterator0_t1966 *)(G_B7_1));
	}

IL_0078:
	{
		NullCheck(G_B8_2);
		G_B8_2->___U3CelapsedTimeU3E__0_1 = ((float)((float)G_B8_1+(float)G_B8_0));
		float L_9 = (float)(__this->___U3CelapsedTimeU3E__0_1);
		ColorTween_t162 * L_10 = (ColorTween_t162 *)&(__this->___tweenInfo_0);
		NullCheck((ColorTween_t162 *)L_10);
		float L_11 = ColorTween_get_duration_m815((ColorTween_t162 *)L_10, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t69_il2cpp_TypeInfo_var);
		float L_12 = Mathf_Clamp01_m363(NULL /*static, unused*/, (float)((float)((float)L_9/(float)L_11)), /*hidden argument*/NULL);
		__this->___U3CpercentageU3E__1_2 = L_12;
		ColorTween_t162 * L_13 = (ColorTween_t162 *)&(__this->___tweenInfo_0);
		float L_14 = (float)(__this->___U3CpercentageU3E__1_2);
		NullCheck((ColorTween_t162 *)L_13);
		ColorTween_TweenValue_m819((ColorTween_t162 *)L_13, (float)L_14, NULL);
		__this->___U24current_4 = NULL;
		__this->___U24PC_3 = 1;
		goto IL_0106;
	}

IL_00cb:
	{
		float L_15 = (float)(__this->___U3CelapsedTimeU3E__0_1);
		ColorTween_t162 * L_16 = (ColorTween_t162 *)&(__this->___tweenInfo_0);
		NullCheck((ColorTween_t162 *)L_16);
		float L_17 = ColorTween_get_duration_m815((ColorTween_t162 *)L_16, NULL);
		if ((((float)L_15) < ((float)L_17)))
		{
			goto IL_004c;
		}
	}
	{
		ColorTween_t162 * L_18 = (ColorTween_t162 *)&(__this->___tweenInfo_0);
		NullCheck((ColorTween_t162 *)L_18);
		ColorTween_TweenValue_m819((ColorTween_t162 *)L_18, (float)(1.0f), NULL);
		__this->___U24PC_3 = (-1);
	}

IL_0104:
	{
		return 0;
	}

IL_0106:
	{
		return 1;
	}
	// Dead block : IL_0108: ldloc.1
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.ColorTween>::Dispose()
extern "C" void U3CStartU3Ec__Iterator0_Dispose_m13177_gshared (U3CStartU3Ec__Iterator0_t1966 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_3 = (-1);
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.ColorTween>::Reset()
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t81_il2cpp_TypeInfo_var;
extern "C" void U3CStartU3Ec__Iterator0_Reset_m13178_gshared (U3CStartU3Ec__Iterator0_t1966 * __this, const MethodInfo* method)
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
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_gen_12.h"
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_gen_12MethodDeclarations.h"
#include "UnityEngine_ArrayTypes.h"
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_17.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_14.h"
// System.Predicate`1<UnityEngine.UIVertex>
#include "mscorlib_System_Predicate_1_gen_17.h"
// System.Collections.Generic.Comparer`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_1.h"
// System.Comparison`1<UnityEngine.UIVertex>
#include "mscorlib_System_Comparison_1_gen_17.h"
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_14MethodDeclarations.h"
// System.Predicate`1<UnityEngine.UIVertex>
#include "mscorlib_System_Predicate_1_gen_17MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_17MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_1MethodDeclarations.h"
struct UIVertexU5BU5D_t235;
// Declaration System.Int32 System.Array::IndexOf<UnityEngine.UIVertex>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<UnityEngine.UIVertex>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisUIVertex_t241_m17804_gshared (Object_t * __this /* static, unused */, UIVertexU5BU5D_t235* p0, UIVertex_t241  p1, int32_t p2, int32_t p3, const MethodInfo* method);
#define Array_IndexOf_TisUIVertex_t241_m17804(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, UIVertexU5BU5D_t235*, UIVertex_t241 , int32_t, int32_t, const MethodInfo*))Array_IndexOf_TisUIVertex_t241_m17804_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct UIVertexU5BU5D_t235;
struct IComparer_1_t2499;
// Declaration System.Void System.Array::Sort<UnityEngine.UIVertex>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.UIVertex>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
extern "C" void Array_Sort_TisUIVertex_t241_m17805_gshared (Object_t * __this /* static, unused */, UIVertexU5BU5D_t235* p0, int32_t p1, int32_t p2, Object_t* p3, const MethodInfo* method);
#define Array_Sort_TisUIVertex_t241_m17805(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, UIVertexU5BU5D_t235*, int32_t, int32_t, Object_t*, const MethodInfo*))Array_Sort_TisUIVertex_t241_m17805_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct UIVertexU5BU5D_t235;
struct Comparison_1_t1976;
// Declaration System.Void System.Array::Sort<UnityEngine.UIVertex>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.UIVertex>(!!0[],System.Int32,System.Comparison`1<!!0>)
extern "C" void Array_Sort_TisUIVertex_t241_m17811_gshared (Object_t * __this /* static, unused */, UIVertexU5BU5D_t235* p0, int32_t p1, Comparison_1_t1976 * p2, const MethodInfo* method);
#define Array_Sort_TisUIVertex_t241_m17811(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, UIVertexU5BU5D_t235*, int32_t, Comparison_1_t1976 *, const MethodInfo*))Array_Sort_TisUIVertex_t241_m17811_gshared)(__this /* static, unused */, p0, p1, p2, method)
struct UIVertexU5BU5D_t235;
// Declaration System.Void System.Array::Resize<UnityEngine.UIVertex>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<UnityEngine.UIVertex>(!!0[]&,System.Int32)
extern "C" void Array_Resize_TisUIVertex_t241_m17802_gshared (Object_t * __this /* static, unused */, UIVertexU5BU5D_t235** p0, int32_t p1, const MethodInfo* method);
#define Array_Resize_TisUIVertex_t241_m17802(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, UIVertexU5BU5D_t235**, int32_t, const MethodInfo*))Array_Resize_TisUIVertex_t241_m17802_gshared)(__this /* static, unused */, p0, p1, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void List_1__ctor_m2444_gshared (List_1_t341 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m355((Object_t *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		UIVertexU5BU5D_t235* L_0 = ((List_1_t341_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4;
		__this->____items_1 = L_0;
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m13179_gshared (List_1_t341 * __this, Object_t* ___collection, const MethodInfo* method)
{
	Object_t* V_0 = {0};
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m355((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___collection;
		NullCheck((List_1_t341 *)__this);
		(( void (*) (List_1_t341 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((List_1_t341 *)__this, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Object_t* L_1 = ___collection;
		V_0 = (Object_t*)((Object_t*)IsInst(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		Object_t* L_2 = V_0;
		if (L_2)
		{
			goto IL_0031;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		UIVertexU5BU5D_t235* L_3 = ((List_1_t341_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4;
		__this->____items_1 = L_3;
		Object_t* L_4 = ___collection;
		NullCheck((List_1_t341 *)__this);
		(( void (*) (List_1_t341 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((List_1_t341 *)__this, (Object_t*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		goto IL_0049;
	}

IL_0031:
	{
		Object_t* L_5 = V_0;
		NullCheck((Object_t*)L_5);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_5);
		__this->____items_1 = ((UIVertexU5BU5D_t235*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_6));
		Object_t* L_7 = V_0;
		NullCheck((List_1_t341 *)__this);
		(( void (*) (List_1_t341 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((List_1_t341 *)__this, (Object_t*)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	}

IL_0049:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentOutOfRangeException_t708_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1325;
extern "C" void List_1__ctor_m3620_gshared (List_1_t341 * __this, int32_t ___capacity, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(432);
		_stringLiteral1325 = il2cpp_codegen_string_literal_from_index(1325);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m355((Object_t *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		ArgumentOutOfRangeException_t708 * L_1 = (ArgumentOutOfRangeException_t708 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t708_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m4630(L_1, (String_t*)_stringLiteral1325, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0018:
	{
		int32_t L_2 = ___capacity;
		__this->____items_1 = ((UIVertexU5BU5D_t235*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_2));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.cctor()
extern "C" void List_1__cctor_m13180_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		((List_1_t341_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4 = ((UIVertexU5BU5D_t235*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), 0));
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13181_gshared (List_1_t341 * __this, const MethodInfo* method)
{
	{
		NullCheck((List_1_t341 *)__this);
		Enumerator_t1968  L_0 = (( Enumerator_t1968  (*) (List_1_t341 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((List_1_t341 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Enumerator_t1968  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" void List_1_System_Collections_ICollection_CopyTo_m13182_gshared (List_1_t341 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	{
		UIVertexU5BU5D_t235* L_0 = (UIVertexU5BU5D_t235*)(__this->____items_1);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (int32_t)(__this->____size_2);
		Array_Copy_m6432(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (Array_t *)L_1, (int32_t)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m13183_gshared (List_1_t341 * __this, const MethodInfo* method)
{
	{
		NullCheck((List_1_t341 *)__this);
		Enumerator_t1968  L_0 = (( Enumerator_t1968  (*) (List_1_t341 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((List_1_t341 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Enumerator_t1968  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Add(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* NullReferenceException_t649_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1648_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t402_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2795;
extern "C" int32_t List_1_System_Collections_IList_Add_m13184_gshared (List_1_t341 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t649_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(303);
		InvalidCastException_t1648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(706);
		ArgumentException_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(269);
		_stringLiteral2795 = il2cpp_codegen_string_literal_from_index(2795);
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
			Object_t * L_0 = ___item;
			NullCheck((List_1_t341 *)__this);
			VirtActionInvoker1< UIVertex_t241  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T) */, (List_1_t341 *)__this, (UIVertex_t241 )((*(UIVertex_t241 *)((UIVertex_t241 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			int32_t L_1 = (int32_t)(__this->____size_2);
			V_0 = (int32_t)((int32_t)((int32_t)L_1-(int32_t)1));
			goto IL_0036;
		}

IL_001a:
		{
			; // IL_001a: leave IL_002b
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t108 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t649_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001f;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1648_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0025;
		throw e;
	}

CATCH_001f:
	{ // begin catch(System.NullReferenceException)
		goto IL_002b;
	} // end catch (depth: 1)

CATCH_0025:
	{ // begin catch(System.InvalidCastException)
		goto IL_002b;
	} // end catch (depth: 1)

IL_002b:
	{
		ArgumentException_t402 * L_2 = (ArgumentException_t402 *)il2cpp_codegen_object_new (ArgumentException_t402_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2370(L_2, (String_t*)_stringLiteral2795, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0036:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Contains(System.Object)
extern TypeInfo* NullReferenceException_t649_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1648_il2cpp_TypeInfo_var;
extern "C" bool List_1_System_Collections_IList_Contains_m13185_gshared (List_1_t341 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t649_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(303);
		InvalidCastException_t1648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(706);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
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
			Object_t * L_0 = ___item;
			NullCheck((List_1_t341 *)__this);
			bool L_1 = (bool)VirtFuncInvoker1< bool, UIVertex_t241  >::Invoke(24 /* System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Contains(T) */, (List_1_t341 *)__this, (UIVertex_t241 )((*(UIVertex_t241 *)((UIVertex_t241 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			V_0 = (bool)L_1;
			goto IL_0025;
		}

IL_0012:
		{
			; // IL_0012: leave IL_0023
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t108 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t649_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0017;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1648_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001d;
		throw e;
	}

CATCH_0017:
	{ // begin catch(System.NullReferenceException)
		goto IL_0023;
	} // end catch (depth: 1)

CATCH_001d:
	{ // begin catch(System.InvalidCastException)
		goto IL_0023;
	} // end catch (depth: 1)

IL_0023:
	{
		return 0;
	}

IL_0025:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.IndexOf(System.Object)
extern TypeInfo* NullReferenceException_t649_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1648_il2cpp_TypeInfo_var;
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m13186_gshared (List_1_t341 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t649_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(303);
		InvalidCastException_t1648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(706);
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
			Object_t * L_0 = ___item;
			NullCheck((List_1_t341 *)__this);
			int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, UIVertex_t241  >::Invoke(28 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::IndexOf(T) */, (List_1_t341 *)__this, (UIVertex_t241 )((*(UIVertex_t241 *)((UIVertex_t241 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			V_0 = (int32_t)L_1;
			goto IL_0025;
		}

IL_0012:
		{
			; // IL_0012: leave IL_0023
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t108 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t649_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0017;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1648_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001d;
		throw e;
	}

CATCH_0017:
	{ // begin catch(System.NullReferenceException)
		goto IL_0023;
	} // end catch (depth: 1)

CATCH_001d:
	{ // begin catch(System.InvalidCastException)
		goto IL_0023;
	} // end catch (depth: 1)

IL_0023:
	{
		return (-1);
	}

IL_0025:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Insert(System.Int32,System.Object)
extern TypeInfo* NullReferenceException_t649_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1648_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t402_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2795;
extern "C" void List_1_System_Collections_IList_Insert_m13187_gshared (List_1_t341 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t649_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(303);
		InvalidCastException_t1648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(706);
		ArgumentException_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(269);
		_stringLiteral2795 = il2cpp_codegen_string_literal_from_index(2795);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t108 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t108 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t341 *)__this);
		(( void (*) (List_1_t341 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t341 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = ___index;
			Object_t * L_2 = ___item;
			NullCheck((List_1_t341 *)__this);
			VirtActionInvoker2< int32_t, UIVertex_t241  >::Invoke(29 /* System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Insert(System.Int32,T) */, (List_1_t341 *)__this, (int32_t)L_1, (UIVertex_t241 )((*(UIVertex_t241 *)((UIVertex_t241 *)UnBox (L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			goto IL_0035;
		}

IL_0019:
		{
			; // IL_0019: leave IL_002a
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t108 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t649_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001e;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1648_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0024;
		throw e;
	}

CATCH_001e:
	{ // begin catch(System.NullReferenceException)
		goto IL_002a;
	} // end catch (depth: 1)

CATCH_0024:
	{ // begin catch(System.InvalidCastException)
		goto IL_002a;
	} // end catch (depth: 1)

IL_002a:
	{
		ArgumentException_t402 * L_3 = (ArgumentException_t402 *)il2cpp_codegen_object_new (ArgumentException_t402_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2370(L_3, (String_t*)_stringLiteral2795, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_0035:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Remove(System.Object)
extern TypeInfo* NullReferenceException_t649_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1648_il2cpp_TypeInfo_var;
extern "C" void List_1_System_Collections_IList_Remove_m13188_gshared (List_1_t341 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t649_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(303);
		InvalidCastException_t1648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(706);
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
		{
			Object_t * L_0 = ___item;
			NullCheck((List_1_t341 *)__this);
			VirtFuncInvoker1< bool, UIVertex_t241  >::Invoke(26 /* System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Remove(T) */, (List_1_t341 *)__this, (UIVertex_t241 )((*(UIVertex_t241 *)((UIVertex_t241 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			goto IL_0023;
		}

IL_0012:
		{
			; // IL_0012: leave IL_0023
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t108 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t649_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0017;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1648_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001d;
		throw e;
	}

CATCH_0017:
	{ // begin catch(System.NullReferenceException)
		goto IL_0023;
	} // end catch (depth: 1)

CATCH_001d:
	{ // begin catch(System.InvalidCastException)
		goto IL_0023;
	} // end catch (depth: 1)

IL_0023:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13189_gshared (List_1_t341 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m13190_gshared (List_1_t341 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m13191_gshared (List_1_t341 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m13192_gshared (List_1_t341 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m13193_gshared (List_1_t341 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m13194_gshared (List_1_t341 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t341 *)__this);
		UIVertex_t241  L_1 = (UIVertex_t241 )VirtFuncInvoker1< UIVertex_t241 , int32_t >::Invoke(31 /* T System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32) */, (List_1_t341 *)__this, (int32_t)L_0);
		UIVertex_t241  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern TypeInfo* NullReferenceException_t649_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1648_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t402_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral390;
extern "C" void List_1_System_Collections_IList_set_Item_m13195_gshared (List_1_t341 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t649_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(303);
		InvalidCastException_t1648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(706);
		ArgumentException_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(269);
		_stringLiteral390 = il2cpp_codegen_string_literal_from_index(390);
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
		{
			int32_t L_0 = ___index;
			Object_t * L_1 = ___value;
			NullCheck((List_1_t341 *)__this);
			VirtActionInvoker2< int32_t, UIVertex_t241  >::Invoke(32 /* System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Item(System.Int32,T) */, (List_1_t341 *)__this, (int32_t)L_0, (UIVertex_t241 )((*(UIVertex_t241 *)((UIVertex_t241 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			goto IL_002e;
		}

IL_0012:
		{
			; // IL_0012: leave IL_0023
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t108 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t649_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0017;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1648_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001d;
		throw e;
	}

CATCH_0017:
	{ // begin catch(System.NullReferenceException)
		goto IL_0023;
	} // end catch (depth: 1)

CATCH_001d:
	{ // begin catch(System.InvalidCastException)
		goto IL_0023;
	} // end catch (depth: 1)

IL_0023:
	{
		ArgumentException_t402 * L_2 = (ArgumentException_t402 *)il2cpp_codegen_object_new (ArgumentException_t402_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2370(L_2, (String_t*)_stringLiteral390, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_002e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T)
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
extern "C" void List_1_Add_m13196_gshared (List_1_t341 * __this, UIVertex_t241  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		UIVertexU5BU5D_t235* L_1 = (UIVertexU5BU5D_t235*)(__this->____items_1);
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)(((int32_t)(((Array_t *)L_1)->max_length)))))))
		{
			goto IL_001a;
		}
	}
	{
		NullCheck((List_1_t341 *)__this);
		(( void (*) (List_1_t341 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t341 *)__this, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
	}

IL_001a:
	{
		UIVertexU5BU5D_t235* L_2 = (UIVertexU5BU5D_t235*)(__this->____items_1);
		int32_t L_3 = (int32_t)(__this->____size_2);
		int32_t L_4 = (int32_t)L_3;
		V_0 = (int32_t)L_4;
		__this->____size_2 = ((int32_t)((int32_t)L_4+(int32_t)1));
		int32_t L_5 = V_0;
		UIVertex_t241  L_6 = ___item;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_5);
		*((UIVertex_t241 *)(UIVertex_t241 *)SZArrayLdElema(L_2, L_5, sizeof(UIVertex_t241 ))) = (UIVertex_t241 )L_6;
		int32_t L_7 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::GrowIfNeeded(System.Int32)
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
extern "C" void List_1_GrowIfNeeded_m13197_gshared (List_1_t341 * __this, int32_t ___newCount, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		int32_t L_1 = ___newCount;
		V_0 = (int32_t)((int32_t)((int32_t)L_0+(int32_t)L_1));
		int32_t L_2 = V_0;
		UIVertexU5BU5D_t235* L_3 = (UIVertexU5BU5D_t235*)(__this->____items_1);
		NullCheck(L_3);
		if ((((int32_t)L_2) <= ((int32_t)(((int32_t)(((Array_t *)L_3)->max_length))))))
		{
			goto IL_0031;
		}
	}
	{
		NullCheck((List_1_t341 *)__this);
		int32_t L_4 = (( int32_t (*) (List_1_t341 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((List_1_t341 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		int32_t L_5 = Math_Max_m3623(NULL /*static, unused*/, (int32_t)((int32_t)((int32_t)L_4*(int32_t)2)), (int32_t)4, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		int32_t L_7 = Math_Max_m3623(NULL /*static, unused*/, (int32_t)L_5, (int32_t)L_6, /*hidden argument*/NULL);
		NullCheck((List_1_t341 *)__this);
		(( void (*) (List_1_t341 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((List_1_t341 *)__this, (int32_t)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
	}

IL_0031:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m13198_gshared (List_1_t341 * __this, Object_t* ___collection, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = ___collection;
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_000e;
		}
	}
	{
		return;
	}

IL_000e:
	{
		int32_t L_3 = V_0;
		NullCheck((List_1_t341 *)__this);
		(( void (*) (List_1_t341 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t341 *)__this, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
		Object_t* L_4 = ___collection;
		UIVertexU5BU5D_t235* L_5 = (UIVertexU5BU5D_t235*)(__this->____items_1);
		int32_t L_6 = (int32_t)(__this->____size_2);
		NullCheck((Object_t*)L_4);
		InterfaceActionInvoker2< UIVertexU5BU5D_t235*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_4, (UIVertexU5BU5D_t235*)L_5, (int32_t)L_6);
		int32_t L_7 = (int32_t)(__this->____size_2);
		int32_t L_8 = V_0;
		__this->____size_2 = ((int32_t)((int32_t)L_7+(int32_t)L_8));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern TypeInfo* IEnumerator_t62_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t359_il2cpp_TypeInfo_var;
extern "C" void List_1_AddEnumerable_m13199_gshared (List_1_t341 * __this, Object_t* ___enumerable, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t62_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(347);
		IDisposable_t359_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(124);
		s_Il2CppMethodIntialized = true;
	}
	UIVertex_t241  V_0 = {0};
	Object_t* V_1 = {0};
	Exception_t108 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t108 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t* L_0 = ___enumerable;
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UIVertex>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20), (Object_t*)L_0);
		V_1 = (Object_t*)L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_001a;
		}

IL_000c:
		{
			Object_t* L_2 = V_1;
			NullCheck((Object_t*)L_2);
			UIVertex_t241  L_3 = (UIVertex_t241 )InterfaceFuncInvoker0< UIVertex_t241  >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.UIVertex>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21), (Object_t*)L_2);
			V_0 = (UIVertex_t241 )L_3;
			UIVertex_t241  L_4 = V_0;
			NullCheck((List_1_t341 *)__this);
			VirtActionInvoker1< UIVertex_t241  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T) */, (List_1_t341 *)__this, (UIVertex_t241 )L_4);
		}

IL_001a:
		{
			Object_t* L_5 = V_1;
			NullCheck((Object_t *)L_5);
			bool L_6 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t62_il2cpp_TypeInfo_var, (Object_t *)L_5);
			if (L_6)
			{
				goto IL_000c;
			}
		}

IL_0025:
		{
			IL2CPP_LEAVE(0x35, FINALLY_002a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t108 *)e.ex;
		goto FINALLY_002a;
	}

FINALLY_002a:
	{ // begin finally (depth: 1)
		{
			Object_t* L_7 = V_1;
			if (L_7)
			{
				goto IL_002e;
			}
		}

IL_002d:
		{
			IL2CPP_END_FINALLY(42)
		}

IL_002e:
		{
			Object_t* L_8 = V_1;
			NullCheck((Object_t *)L_8);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t359_il2cpp_TypeInfo_var, (Object_t *)L_8);
			IL2CPP_END_FINALLY(42)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_JUMP_TBL(0x35, IL_0035)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t108 *)
	}

IL_0035:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m13200_gshared (List_1_t341 * __this, Object_t* ___collection, const MethodInfo* method)
{
	Object_t* V_0 = {0};
	{
		Object_t* L_0 = ___collection;
		NullCheck((List_1_t341 *)__this);
		(( void (*) (List_1_t341 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((List_1_t341 *)__this, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Object_t* L_1 = ___collection;
		V_0 = (Object_t*)((Object_t*)IsInst(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		Object_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		Object_t* L_3 = V_0;
		NullCheck((List_1_t341 *)__this);
		(( void (*) (List_1_t341 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((List_1_t341 *)__this, (Object_t*)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		goto IL_0027;
	}

IL_0020:
	{
		Object_t* L_4 = ___collection;
		NullCheck((List_1_t341 *)__this);
		(( void (*) (List_1_t341 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((List_1_t341 *)__this, (Object_t*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
	}

IL_0027:
	{
		int32_t L_5 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_5+(int32_t)1));
		return;
	}
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1969 * List_1_AsReadOnly_m13201_gshared (List_1_t341 * __this, const MethodInfo* method)
{
	{
		ReadOnlyCollection_1_t1969 * L_0 = (ReadOnlyCollection_1_t1969 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22));
		(( void (*) (ReadOnlyCollection_1_t1969 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23)->method)(L_0, (Object_t*)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23));
		return L_0;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Clear()
extern "C" void List_1_Clear_m13202_gshared (List_1_t341 * __this, const MethodInfo* method)
{
	{
		UIVertexU5BU5D_t235* L_0 = (UIVertexU5BU5D_t235*)(__this->____items_1);
		UIVertexU5BU5D_t235* L_1 = (UIVertexU5BU5D_t235*)(__this->____items_1);
		NullCheck(L_1);
		Array_Clear_m3744(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/NULL);
		__this->____size_2 = 0;
		int32_t L_2 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Contains(T)
extern "C" bool List_1_Contains_m13203_gshared (List_1_t341 * __this, UIVertex_t241  ___item, const MethodInfo* method)
{
	{
		UIVertexU5BU5D_t235* L_0 = (UIVertexU5BU5D_t235*)(__this->____items_1);
		UIVertex_t241  L_1 = ___item;
		int32_t L_2 = (int32_t)(__this->____size_2);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, UIVertexU5BU5D_t235*, UIVertex_t241 , int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)->method)(NULL /*static, unused*/, (UIVertexU5BU5D_t235*)L_0, (UIVertex_t241 )L_1, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		return ((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32)
#include "UnityEngine_ArrayTypes.h"
extern "C" void List_1_CopyTo_m13204_gshared (List_1_t341 * __this, UIVertexU5BU5D_t235* ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	{
		UIVertexU5BU5D_t235* L_0 = (UIVertexU5BU5D_t235*)(__this->____items_1);
		UIVertexU5BU5D_t235* L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (int32_t)(__this->____size_2);
		Array_Copy_m6432(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		return;
	}
}
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::Find(System.Predicate`1<T>)
// System.Predicate`1<UnityEngine.UIVertex>
#include "mscorlib_System_Predicate_1_gen_17.h"
extern TypeInfo* UIVertex_t241_il2cpp_TypeInfo_var;
extern "C" UIVertex_t241  List_1_Find_m13205_gshared (List_1_t341 * __this, Predicate_1_t1973 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UIVertex_t241_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	UIVertex_t241  V_1 = {0};
	UIVertex_t241  G_B3_0 = {0};
	{
		Predicate_1_t1973 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t1973 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(NULL /*static, unused*/, (Predicate_1_t1973 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		int32_t L_1 = (int32_t)(__this->____size_2);
		Predicate_1_t1973 * L_2 = ___match;
		NullCheck((List_1_t341 *)__this);
		int32_t L_3 = (( int32_t (*) (List_1_t341 *, int32_t, int32_t, Predicate_1_t1973 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)((List_1_t341 *)__this, (int32_t)0, (int32_t)L_1, (Predicate_1_t1973 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_002d;
		}
	}
	{
		UIVertexU5BU5D_t235* L_5 = (UIVertexU5BU5D_t235*)(__this->____items_1);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		G_B3_0 = (*(UIVertex_t241 *)(UIVertex_t241 *)SZArrayLdElema(L_5, L_7, sizeof(UIVertex_t241 )));
		goto IL_0036;
	}

IL_002d:
	{
		Initobj (UIVertex_t241_il2cpp_TypeInfo_var, (&V_1));
		UIVertex_t241  L_8 = V_1;
		G_B3_0 = L_8;
	}

IL_0036:
	{
		return G_B3_0;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckMatch(System.Predicate`1<T>)
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t677_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1914;
extern "C" void List_1_CheckMatch_m13206_gshared (Object_t * __this /* static, unused */, Predicate_1_t1973 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t677_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		_stringLiteral1914 = il2cpp_codegen_string_literal_from_index(1914);
		s_Il2CppMethodIntialized = true;
	}
	{
		Predicate_1_t1973 * L_0 = ___match;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t677 * L_1 = (ArgumentNullException_t677 *)il2cpp_codegen_object_new (ArgumentNullException_t677_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3666(L_1, (String_t*)_stringLiteral1914, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m13207_gshared (List_1_t341 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1973 * ___match, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___startIndex;
		int32_t L_1 = ___count;
		V_0 = (int32_t)((int32_t)((int32_t)L_0+(int32_t)L_1));
		int32_t L_2 = ___startIndex;
		V_1 = (int32_t)L_2;
		goto IL_0028;
	}

IL_000b:
	{
		Predicate_1_t1973 * L_3 = ___match;
		UIVertexU5BU5D_t235* L_4 = (UIVertexU5BU5D_t235*)(__this->____items_1);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NullCheck((Predicate_1_t1973 *)L_3);
		bool L_7 = (( bool (*) (Predicate_1_t1973 *, UIVertex_t241 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27)->method)((Predicate_1_t1973 *)L_3, (UIVertex_t241 )(*(UIVertex_t241 *)(UIVertex_t241 *)SZArrayLdElema(L_4, L_6, sizeof(UIVertex_t241 ))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
		if (!L_7)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_8 = V_1;
		return L_8;
	}

IL_0024:
	{
		int32_t L_9 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_0028:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_000b;
		}
	}
	{
		return (-1);
	}
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetEnumerator()
extern "C" Enumerator_t1968  List_1_GetEnumerator_m13208_gshared (List_1_t341 * __this, const MethodInfo* method)
{
	{
		Enumerator_t1968  L_0 = {0};
		(( void (*) (Enumerator_t1968 *, List_1_t341 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28)->method)(&L_0, (List_1_t341 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m13209_gshared (List_1_t341 * __this, UIVertex_t241  ___item, const MethodInfo* method)
{
	{
		UIVertexU5BU5D_t235* L_0 = (UIVertexU5BU5D_t235*)(__this->____items_1);
		UIVertex_t241  L_1 = ___item;
		int32_t L_2 = (int32_t)(__this->____size_2);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, UIVertexU5BU5D_t235*, UIVertex_t241 , int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)->method)(NULL /*static, unused*/, (UIVertexU5BU5D_t235*)L_0, (UIVertex_t241 )L_1, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		return L_3;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m13210_gshared (List_1_t341 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method)
{
	{
		int32_t L_0 = ___delta;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_1 = ___start;
		int32_t L_2 = ___delta;
		___start = (int32_t)((int32_t)((int32_t)L_1-(int32_t)L_2));
	}

IL_000c:
	{
		int32_t L_3 = ___start;
		int32_t L_4 = (int32_t)(__this->____size_2);
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0035;
		}
	}
	{
		UIVertexU5BU5D_t235* L_5 = (UIVertexU5BU5D_t235*)(__this->____items_1);
		int32_t L_6 = ___start;
		UIVertexU5BU5D_t235* L_7 = (UIVertexU5BU5D_t235*)(__this->____items_1);
		int32_t L_8 = ___start;
		int32_t L_9 = ___delta;
		int32_t L_10 = (int32_t)(__this->____size_2);
		int32_t L_11 = ___start;
		Array_Copy_m6432(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, (int32_t)L_6, (Array_t *)(Array_t *)L_7, (int32_t)((int32_t)((int32_t)L_8+(int32_t)L_9)), (int32_t)((int32_t)((int32_t)L_10-(int32_t)L_11)), /*hidden argument*/NULL);
	}

IL_0035:
	{
		int32_t L_12 = (int32_t)(__this->____size_2);
		int32_t L_13 = ___delta;
		__this->____size_2 = ((int32_t)((int32_t)L_12+(int32_t)L_13));
		int32_t L_14 = ___delta;
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_005d;
		}
	}
	{
		UIVertexU5BU5D_t235* L_15 = (UIVertexU5BU5D_t235*)(__this->____items_1);
		int32_t L_16 = (int32_t)(__this->____size_2);
		int32_t L_17 = ___delta;
		Array_Clear_m3744(NULL /*static, unused*/, (Array_t *)(Array_t *)L_15, (int32_t)L_16, (int32_t)((-L_17)), /*hidden argument*/NULL);
	}

IL_005d:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckIndex(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t708_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral715;
extern "C" void List_1_CheckIndex_m13211_gshared (List_1_t341 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(432);
		_stringLiteral715 = il2cpp_codegen_string_literal_from_index(715);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_001e;
		}
	}

IL_0013:
	{
		ArgumentOutOfRangeException_t708 * L_3 = (ArgumentOutOfRangeException_t708 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t708_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m4630(L_3, (String_t*)_stringLiteral715, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_001e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m13212_gshared (List_1_t341 * __this, int32_t ___index, UIVertex_t241  ___item, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t341 *)__this);
		(( void (*) (List_1_t341 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t341 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		int32_t L_1 = (int32_t)(__this->____size_2);
		UIVertexU5BU5D_t235* L_2 = (UIVertexU5BU5D_t235*)(__this->____items_1);
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)(((int32_t)(((Array_t *)L_2)->max_length)))))))
		{
			goto IL_0021;
		}
	}
	{
		NullCheck((List_1_t341 *)__this);
		(( void (*) (List_1_t341 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t341 *)__this, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
	}

IL_0021:
	{
		int32_t L_3 = ___index;
		NullCheck((List_1_t341 *)__this);
		(( void (*) (List_1_t341 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)((List_1_t341 *)__this, (int32_t)L_3, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		UIVertexU5BU5D_t235* L_4 = (UIVertexU5BU5D_t235*)(__this->____items_1);
		int32_t L_5 = ___index;
		UIVertex_t241  L_6 = ___item;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((UIVertex_t241 *)(UIVertex_t241 *)SZArrayLdElema(L_4, L_5, sizeof(UIVertex_t241 ))) = (UIVertex_t241 )L_6;
		int32_t L_7 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern TypeInfo* ArgumentNullException_t677_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2796;
extern "C" void List_1_CheckCollection_m13213_gshared (List_1_t341 * __this, Object_t* ___collection, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t677_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		_stringLiteral2796 = il2cpp_codegen_string_literal_from_index(2796);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___collection;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t677 * L_1 = (ArgumentNullException_t677 *)il2cpp_codegen_object_new (ArgumentNullException_t677_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3666(L_1, (String_t*)_stringLiteral2796, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Remove(T)
extern "C" bool List_1_Remove_m13214_gshared (List_1_t341 * __this, UIVertex_t241  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		UIVertex_t241  L_0 = ___item;
		NullCheck((List_1_t341 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, UIVertex_t241  >::Invoke(28 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::IndexOf(T) */, (List_1_t341 *)__this, (UIVertex_t241 )L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = V_0;
		NullCheck((List_1_t341 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(30 /* System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAt(System.Int32) */, (List_1_t341 *)__this, (int32_t)L_3);
	}

IL_0016:
	{
		int32_t L_4 = V_0;
		return ((((int32_t)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m13215_gshared (List_1_t341 * __this, Predicate_1_t1973 * ___match, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t1973 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t1973 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(NULL /*static, unused*/, (Predicate_1_t1973 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		V_0 = (int32_t)0;
		V_1 = (int32_t)0;
		V_0 = (int32_t)0;
		goto IL_0031;
	}

IL_0011:
	{
		Predicate_1_t1973 * L_1 = ___match;
		UIVertexU5BU5D_t235* L_2 = (UIVertexU5BU5D_t235*)(__this->____items_1);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		NullCheck((Predicate_1_t1973 *)L_1);
		bool L_5 = (( bool (*) (Predicate_1_t1973 *, UIVertex_t241 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27)->method)((Predicate_1_t1973 *)L_1, (UIVertex_t241 )(*(UIVertex_t241 *)(UIVertex_t241 *)SZArrayLdElema(L_2, L_4, sizeof(UIVertex_t241 ))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		goto IL_003d;
	}

IL_002d:
	{
		int32_t L_6 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0031:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = (int32_t)(__this->____size_2);
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0011;
		}
	}

IL_003d:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_004b;
		}
	}
	{
		return 0;
	}

IL_004b:
	{
		int32_t L_11 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_11+(int32_t)1));
		int32_t L_12 = V_0;
		V_1 = (int32_t)((int32_t)((int32_t)L_12+(int32_t)1));
		goto IL_0099;
	}

IL_0062:
	{
		Predicate_1_t1973 * L_13 = ___match;
		UIVertexU5BU5D_t235* L_14 = (UIVertexU5BU5D_t235*)(__this->____items_1);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		NullCheck((Predicate_1_t1973 *)L_13);
		bool L_17 = (( bool (*) (Predicate_1_t1973 *, UIVertex_t241 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27)->method)((Predicate_1_t1973 *)L_13, (UIVertex_t241 )(*(UIVertex_t241 *)(UIVertex_t241 *)SZArrayLdElema(L_14, L_16, sizeof(UIVertex_t241 ))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
		if (L_17)
		{
			goto IL_0095;
		}
	}
	{
		UIVertexU5BU5D_t235* L_18 = (UIVertexU5BU5D_t235*)(__this->____items_1);
		int32_t L_19 = V_0;
		int32_t L_20 = (int32_t)L_19;
		V_0 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
		UIVertexU5BU5D_t235* L_21 = (UIVertexU5BU5D_t235*)(__this->____items_1);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_20);
		*((UIVertex_t241 *)(UIVertex_t241 *)SZArrayLdElema(L_18, L_20, sizeof(UIVertex_t241 ))) = (UIVertex_t241 )(*(UIVertex_t241 *)(UIVertex_t241 *)SZArrayLdElema(L_21, L_23, sizeof(UIVertex_t241 )));
	}

IL_0095:
	{
		int32_t L_24 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_0099:
	{
		int32_t L_25 = V_1;
		int32_t L_26 = (int32_t)(__this->____size_2);
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_27 = V_1;
		int32_t L_28 = V_0;
		if ((((int32_t)((int32_t)((int32_t)L_27-(int32_t)L_28))) <= ((int32_t)0)))
		{
			goto IL_00bd;
		}
	}
	{
		UIVertexU5BU5D_t235* L_29 = (UIVertexU5BU5D_t235*)(__this->____items_1);
		int32_t L_30 = V_0;
		int32_t L_31 = V_1;
		int32_t L_32 = V_0;
		Array_Clear_m3744(NULL /*static, unused*/, (Array_t *)(Array_t *)L_29, (int32_t)L_30, (int32_t)((int32_t)((int32_t)L_31-(int32_t)L_32)), /*hidden argument*/NULL);
	}

IL_00bd:
	{
		int32_t L_33 = V_0;
		__this->____size_2 = L_33;
		int32_t L_34 = V_1;
		int32_t L_35 = V_0;
		return ((int32_t)((int32_t)L_34-(int32_t)L_35));
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAt(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t708_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral715;
extern "C" void List_1_RemoveAt_m13216_gshared (List_1_t341 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(432);
		_stringLiteral715 = il2cpp_codegen_string_literal_from_index(715);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_1) >= ((uint32_t)L_2))))
		{
			goto IL_001e;
		}
	}

IL_0013:
	{
		ArgumentOutOfRangeException_t708 * L_3 = (ArgumentOutOfRangeException_t708 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t708_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m4630(L_3, (String_t*)_stringLiteral715, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_001e:
	{
		int32_t L_4 = ___index;
		NullCheck((List_1_t341 *)__this);
		(( void (*) (List_1_t341 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)((List_1_t341 *)__this, (int32_t)L_4, (int32_t)(-1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		UIVertexU5BU5D_t235* L_5 = (UIVertexU5BU5D_t235*)(__this->____items_1);
		int32_t L_6 = (int32_t)(__this->____size_2);
		Array_Clear_m3744(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, (int32_t)L_6, (int32_t)1, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Reverse()
extern "C" void List_1_Reverse_m13217_gshared (List_1_t341 * __this, const MethodInfo* method)
{
	{
		UIVertexU5BU5D_t235* L_0 = (UIVertexU5BU5D_t235*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		Array_Reverse_m4673(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)L_1, /*hidden argument*/NULL);
		int32_t L_2 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort()
extern "C" void List_1_Sort_m13218_gshared (List_1_t341 * __this, const MethodInfo* method)
{
	{
		UIVertexU5BU5D_t235* L_0 = (UIVertexU5BU5D_t235*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Comparer_1_t1974 * L_2 = (( Comparer_1_t1974 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31));
		(( void (*) (Object_t * /* static, unused */, UIVertexU5BU5D_t235*, int32_t, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33)->method)(NULL /*static, unused*/, (UIVertexU5BU5D_t235*)L_0, (int32_t)0, (int32_t)L_1, (Object_t*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		int32_t L_3 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort(System.Comparison`1<T>)
// System.Comparison`1<UnityEngine.UIVertex>
#include "mscorlib_System_Comparison_1_gen_17.h"
extern "C" void List_1_Sort_m13219_gshared (List_1_t341 * __this, Comparison_1_t1976 * ___comparison, const MethodInfo* method)
{
	{
		UIVertexU5BU5D_t235* L_0 = (UIVertexU5BU5D_t235*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		Comparison_1_t1976 * L_2 = ___comparison;
		(( void (*) (Object_t * /* static, unused */, UIVertexU5BU5D_t235*, int32_t, Comparison_1_t1976 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)(NULL /*static, unused*/, (UIVertexU5BU5D_t235*)L_0, (int32_t)L_1, (Comparison_1_t1976 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		int32_t L_3 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// T[] System.Collections.Generic.List`1<UnityEngine.UIVertex>::ToArray()
extern "C" UIVertexU5BU5D_t235* List_1_ToArray_m13220_gshared (List_1_t341 * __this, const MethodInfo* method)
{
	UIVertexU5BU5D_t235* V_0 = {0};
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		V_0 = (UIVertexU5BU5D_t235*)((UIVertexU5BU5D_t235*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0));
		UIVertexU5BU5D_t235* L_1 = (UIVertexU5BU5D_t235*)(__this->____items_1);
		UIVertexU5BU5D_t235* L_2 = V_0;
		int32_t L_3 = (int32_t)(__this->____size_2);
		Array_Copy_m5706(NULL /*static, unused*/, (Array_t *)(Array_t *)L_1, (Array_t *)(Array_t *)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		UIVertexU5BU5D_t235* L_4 = V_0;
		return L_4;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::TrimExcess()
extern "C" void List_1_TrimExcess_m13221_gshared (List_1_t341 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		NullCheck((List_1_t341 *)__this);
		(( void (*) (List_1_t341 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((List_1_t341 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m2445_gshared (List_1_t341 * __this, const MethodInfo* method)
{
	{
		UIVertexU5BU5D_t235* L_0 = (UIVertexU5BU5D_t235*)(__this->____items_1);
		NullCheck(L_0);
		return (((int32_t)(((Array_t *)L_0)->max_length)));
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Capacity(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t708_il2cpp_TypeInfo_var;
extern "C" void List_1_set_Capacity_m2446_gshared (List_1_t341 * __this, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(432);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___value;
		int32_t L_1 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_0) < ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ArgumentOutOfRangeException_t708 * L_2 = (ArgumentOutOfRangeException_t708 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t708_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m5694(L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0012:
	{
		UIVertexU5BU5D_t235** L_3 = (UIVertexU5BU5D_t235**)&(__this->____items_1);
		int32_t L_4 = ___value;
		(( void (*) (Object_t * /* static, unused */, UIVertexU5BU5D_t235**, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35)->method)(NULL /*static, unused*/, (UIVertexU5BU5D_t235**)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35));
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count()
extern "C" int32_t List_1_get_Count_m13222_gshared (List_1_t341 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		return L_0;
	}
}
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t708_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral715;
extern "C" UIVertex_t241  List_1_get_Item_m13223_gshared (List_1_t341 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(432);
		_stringLiteral715 = il2cpp_codegen_string_literal_from_index(715);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		int32_t L_1 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t708 * L_2 = (ArgumentOutOfRangeException_t708 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t708_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m4630(L_2, (String_t*)_stringLiteral715, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0017:
	{
		UIVertexU5BU5D_t235* L_3 = (UIVertexU5BU5D_t235*)(__this->____items_1);
		int32_t L_4 = ___index;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		return (*(UIVertex_t241 *)(UIVertex_t241 *)SZArrayLdElema(L_3, L_5, sizeof(UIVertex_t241 )));
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Item(System.Int32,T)
extern TypeInfo* ArgumentOutOfRangeException_t708_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral715;
extern "C" void List_1_set_Item_m13224_gshared (List_1_t341 * __this, int32_t ___index, UIVertex_t241  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(432);
		_stringLiteral715 = il2cpp_codegen_string_literal_from_index(715);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t341 *)__this);
		(( void (*) (List_1_t341 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t341 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_001e;
		}
	}
	{
		ArgumentOutOfRangeException_t708 * L_3 = (ArgumentOutOfRangeException_t708 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t708_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m4630(L_3, (String_t*)_stringLiteral715, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_001e:
	{
		UIVertexU5BU5D_t235* L_4 = (UIVertexU5BU5D_t235*)(__this->____items_1);
		int32_t L_5 = ___index;
		UIVertex_t241  L_6 = ___value;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((UIVertex_t241 *)(UIVertex_t241 *)SZArrayLdElema(L_4, L_5, sizeof(UIVertex_t241 ))) = (UIVertex_t241 )L_6;
		return;
	}
}
// System.Array/InternalEnumerator`1<UnityEngine.UIVertex>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_17.h"
// System.Array/InternalEnumerator`1<UnityEngine.UIVertex>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_17MethodDeclarations.h"
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.UIVertex>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.UIVertex>(System.Int32)
extern "C" UIVertex_t241  Array_InternalArray__get_Item_TisUIVertex_t241_m17791_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisUIVertex_t241_m17791(__this, p0, method) (( UIVertex_t241  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisUIVertex_t241_m17791_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UIVertex>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m13225_gshared (InternalEnumerator_1_t1967 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UIVertex>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13226_gshared (InternalEnumerator_1_t1967 * __this, const MethodInfo* method)
{
	{
		UIVertex_t241  L_0 = (( UIVertex_t241  (*) (InternalEnumerator_1_t1967 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t1967 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		UIVertex_t241  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UIVertex>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m13227_gshared (InternalEnumerator_1_t1967 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UIVertex>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m13228_gshared (InternalEnumerator_1_t1967 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001e;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m5638((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001e:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B5_0 = 0;
	}

IL_0044:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<UnityEngine.UIVertex>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t881_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2793;
extern Il2CppCodeGenString* _stringLiteral2794;
extern "C" UIVertex_t241  InternalEnumerator_1_get_Current_m13229_gshared (InternalEnumerator_1_t1967 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t881_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(515);
		_stringLiteral2793 = il2cpp_codegen_string_literal_from_index(2793);
		_stringLiteral2794 = il2cpp_codegen_string_literal_from_index(2794);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t881 * L_1 = (InvalidOperationException_t881 *)il2cpp_codegen_object_new (InvalidOperationException_t881_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4709(L_1, (String_t*)_stringLiteral2793, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0018:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_002f;
		}
	}
	{
		InvalidOperationException_t881 * L_3 = (InvalidOperationException_t881 *)il2cpp_codegen_object_new (InvalidOperationException_t881_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4709(L_3, (String_t*)_stringLiteral2794, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_002f:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m5638((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		UIVertex_t241  L_8 = (( UIVertex_t241  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>::.ctor(System.Collections.Generic.List`1<T>)
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_gen_12.h"
extern "C" void Enumerator__ctor_m13230_gshared (Enumerator_t1968 * __this, List_1_t341 * ___l, const MethodInfo* method)
{
	{
		List_1_t341 * L_0 = ___l;
		__this->___l_0 = L_0;
		List_1_t341 * L_1 = ___l;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)(L_1->____version_3);
		__this->___ver_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>::System.Collections.IEnumerator.get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t881_il2cpp_TypeInfo_var;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m13231_gshared (Enumerator_t1968 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t881_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(515);
		s_Il2CppMethodIntialized = true;
	}
	{
		(( void (*) (Enumerator_t1968 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t1968 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t881 * L_1 = (InvalidOperationException_t881 *)il2cpp_codegen_object_new (InvalidOperationException_t881_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5640(L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0018:
	{
		UIVertex_t241  L_2 = (UIVertex_t241 )(__this->___current_3);
		UIVertex_t241  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>::Dispose()
extern "C" void Enumerator_Dispose_m13232_gshared (Enumerator_t1968 * __this, const MethodInfo* method)
{
	{
		__this->___l_0 = (List_1_t341 *)NULL;
		return;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>::VerifyState()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
extern TypeInfo* ObjectDisposedException_t709_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t881_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2797;
extern "C" void Enumerator_VerifyState_m13233_gshared (Enumerator_t1968 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(433);
		InvalidOperationException_t881_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(515);
		_stringLiteral2797 = il2cpp_codegen_string_literal_from_index(2797);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t341 * L_0 = (List_1_t341 *)(__this->___l_0);
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		Enumerator_t1968  L_1 = (*(Enumerator_t1968 *)__this);
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck((Object_t *)L_2);
		Type_t * L_3 = Object_GetType_m1961((Object_t *)L_2, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, (Type_t *)L_3);
		ObjectDisposedException_t709 * L_5 = (ObjectDisposedException_t709 *)il2cpp_codegen_object_new (ObjectDisposedException_t709_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m3748(L_5, (String_t*)L_4, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_5);
	}

IL_0026:
	{
		int32_t L_6 = (int32_t)(__this->___ver_2);
		List_1_t341 * L_7 = (List_1_t341 *)(__this->___l_0);
		NullCheck(L_7);
		int32_t L_8 = (int32_t)(L_7->____version_3);
		if ((((int32_t)L_6) == ((int32_t)L_8)))
		{
			goto IL_0047;
		}
	}
	{
		InvalidOperationException_t881 * L_9 = (InvalidOperationException_t881 *)il2cpp_codegen_object_new (InvalidOperationException_t881_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4709(L_9, (String_t*)_stringLiteral2797, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_9);
	}

IL_0047:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>::MoveNext()
extern "C" bool Enumerator_MoveNext_m13234_gshared (Enumerator_t1968 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		(( void (*) (Enumerator_t1968 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t1968 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		return 0;
	}

IL_0014:
	{
		int32_t L_1 = (int32_t)(__this->___next_1);
		List_1_t341 * L_2 = (List_1_t341 *)(__this->___l_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)(L_2->____size_2);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_0053;
		}
	}
	{
		List_1_t341 * L_4 = (List_1_t341 *)(__this->___l_0);
		NullCheck(L_4);
		UIVertexU5BU5D_t235* L_5 = (UIVertexU5BU5D_t235*)(L_4->____items_1);
		int32_t L_6 = (int32_t)(__this->___next_1);
		int32_t L_7 = (int32_t)L_6;
		V_0 = (int32_t)L_7;
		__this->___next_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
		int32_t L_8 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_8);
		int32_t L_9 = L_8;
		__this->___current_3 = (*(UIVertex_t241 *)(UIVertex_t241 *)SZArrayLdElema(L_5, L_9, sizeof(UIVertex_t241 )));
		return 1;
	}

IL_0053:
	{
		__this->___next_1 = (-1);
		return 0;
	}
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>::get_Current()
extern "C" UIVertex_t241  Enumerator_get_Current_m13235_gshared (Enumerator_t1968 * __this, const MethodInfo* method)
{
	{
		UIVertex_t241  L_0 = (UIVertex_t241 )(__this->___current_3);
		return L_0;
	}
}
// System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_1MethodDeclarations.h"
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentNullException_t677_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1336;
extern "C" void ReadOnlyCollection_1__ctor_m13236_gshared (ReadOnlyCollection_1_t1969 * __this, Object_t* ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t677_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		_stringLiteral1336 = il2cpp_codegen_string_literal_from_index(1336);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m355((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___list;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t677 * L_1 = (ArgumentNullException_t677 *)il2cpp_codegen_object_new (ArgumentNullException_t677_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3666(L_1, (String_t*)_stringLiteral1336, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0017:
	{
		Object_t* L_2 = ___list;
		__this->___list_0 = L_2;
		return;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.Generic.ICollection<T>.Add(T)
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t81_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m13237_gshared (ReadOnlyCollection_1_t1969 * __this, UIVertex_t241  ___item, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.Generic.ICollection<T>.Clear()
extern TypeInfo* NotSupportedException_t81_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m13238_gshared (ReadOnlyCollection_1_t1969 * __this, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
// System.Int32
#include "mscorlib_System_Int32.h"
extern TypeInfo* NotSupportedException_t81_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m13239_gshared (ReadOnlyCollection_1_t1969 * __this, int32_t ___index, UIVertex_t241  ___item, const MethodInfo* method)
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
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.Generic.ICollection<T>.Remove(T)
extern TypeInfo* NotSupportedException_t81_il2cpp_TypeInfo_var;
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m13240_gshared (ReadOnlyCollection_1_t1969 * __this, UIVertex_t241  ___item, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
extern TypeInfo* NotSupportedException_t81_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m13241_gshared (ReadOnlyCollection_1_t1969 * __this, int32_t ___index, const MethodInfo* method)
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
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
extern "C" UIVertex_t241  ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m13242_gshared (ReadOnlyCollection_1_t1969 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((ReadOnlyCollection_1_t1969 *)__this);
		UIVertex_t241  L_1 = (UIVertex_t241 )VirtFuncInvoker1< UIVertex_t241 , int32_t >::Invoke(33 /* T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::get_Item(System.Int32) */, (ReadOnlyCollection_1_t1969 *)__this, (int32_t)L_0);
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
extern TypeInfo* NotSupportedException_t81_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m13243_gshared (ReadOnlyCollection_1_t1969 * __this, int32_t ___index, UIVertex_t241  ___value, const MethodInfo* method)
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
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13244_gshared (ReadOnlyCollection_1_t1969 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
extern TypeInfo* ICollection_t1051_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m13245_gshared (ReadOnlyCollection_1_t1969 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t1051_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(568);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t *)((Object_t *)Castclass(L_0, ICollection_t1051_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(3 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t1051_il2cpp_TypeInfo_var, (Object_t *)((Object_t *)Castclass(L_0, ICollection_t1051_il2cpp_TypeInfo_var)), (Array_t *)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.IEnumerable.GetEnumerator()
extern TypeInfo* IEnumerable_t870_il2cpp_TypeInfo_var;
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m13246_gshared (ReadOnlyCollection_1_t1969 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t870_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.IList.Add(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo* NotSupportedException_t81_il2cpp_TypeInfo_var;
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_Add_m13247_gshared (ReadOnlyCollection_1_t1969 * __this, Object_t * ___value, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.IList.Clear()
extern TypeInfo* NotSupportedException_t81_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Clear_m13248_gshared (ReadOnlyCollection_1_t1969 * __this, const MethodInfo* method)
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
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.IList.Contains(System.Object)
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_Contains_m13249_gshared (ReadOnlyCollection_1_t1969 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Object_t* L_2 = (Object_t*)(__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck((Object_t*)L_2);
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, UIVertex_t241  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_2, (UIVertex_t241 )((*(UIVertex_t241 *)((UIVertex_t241 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))));
		return L_4;
	}

IL_001d:
	{
		return 0;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m13250_gshared (ReadOnlyCollection_1_t1969 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Object_t* L_2 = (Object_t*)(__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, UIVertex_t241  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<UnityEngine.UIVertex>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_2, (UIVertex_t241 )((*(UIVertex_t241 *)((UIVertex_t241 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))));
		return L_4;
	}

IL_001d:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.IList.Insert(System.Int32,System.Object)
extern TypeInfo* NotSupportedException_t81_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Insert_m13251_gshared (ReadOnlyCollection_1_t1969 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.IList.Remove(System.Object)
extern TypeInfo* NotSupportedException_t81_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Remove_m13252_gshared (ReadOnlyCollection_1_t1969 * __this, Object_t * ___value, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.IList.RemoveAt(System.Int32)
extern TypeInfo* NotSupportedException_t81_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m13253_gshared (ReadOnlyCollection_1_t1969 * __this, int32_t ___index, const MethodInfo* method)
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
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m13254_gshared (ReadOnlyCollection_1_t1969 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m13255_gshared (ReadOnlyCollection_1_t1969 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsFixedSize()
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m13256_gshared (ReadOnlyCollection_1_t1969 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsReadOnly()
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m13257_gshared (ReadOnlyCollection_1_t1969 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IList_get_Item_m13258_gshared (ReadOnlyCollection_1_t1969 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		UIVertex_t241  L_2 = (UIVertex_t241 )InterfaceFuncInvoker1< UIVertex_t241 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<UnityEngine.UIVertex>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (int32_t)L_1);
		UIVertex_t241  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern TypeInfo* NotSupportedException_t81_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_set_Item_m13259_gshared (ReadOnlyCollection_1_t1969 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
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
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::Contains(T)
extern "C" bool ReadOnlyCollection_1_Contains_m13260_gshared (ReadOnlyCollection_1_t1969 * __this, UIVertex_t241  ___value, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		UIVertex_t241  L_1 = ___value;
		NullCheck((Object_t*)L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, UIVertex_t241  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_0, (UIVertex_t241 )L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32)
#include "UnityEngine_ArrayTypes.h"
extern "C" void ReadOnlyCollection_1_CopyTo_m13261_gshared (ReadOnlyCollection_1_t1969 * __this, UIVertexU5BU5D_t235* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		UIVertexU5BU5D_t235* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< UIVertexU5BU5D_t235*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_0, (UIVertexU5BU5D_t235*)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::GetEnumerator()
extern "C" Object_t* ReadOnlyCollection_1_GetEnumerator_m13262_gshared (ReadOnlyCollection_1_t1969 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UIVertex>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), (Object_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::IndexOf(T)
extern "C" int32_t ReadOnlyCollection_1_IndexOf_m13263_gshared (ReadOnlyCollection_1_t1969 * __this, UIVertex_t241  ___value, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		UIVertex_t241  L_1 = ___value;
		NullCheck((Object_t*)L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, UIVertex_t241  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<UnityEngine.UIVertex>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (UIVertex_t241 )L_1);
		return L_2;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::get_Count()
extern "C" int32_t ReadOnlyCollection_1_get_Count_m13264_gshared (ReadOnlyCollection_1_t1969 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::get_Item(System.Int32)
extern "C" UIVertex_t241  ReadOnlyCollection_1_get_Item_m13265_gshared (ReadOnlyCollection_1_t1969 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		UIVertex_t241  L_2 = (UIVertex_t241 )InterfaceFuncInvoker1< UIVertex_t241 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<UnityEngine.UIVertex>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_1.h"
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern TypeInfo* ICollection_t1051_il2cpp_TypeInfo_var;
extern "C" void Collection_1__ctor_m13266_gshared (Collection_1_t1970 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t1051_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(568);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t341 * V_0 = {0};
	Object_t * V_1 = {0};
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m355((Object_t *)__this, /*hidden argument*/NULL);
		List_1_t341 * L_0 = (List_1_t341 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (List_1_t341 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = (List_1_t341 *)L_0;
		List_1_t341 * L_1 = V_0;
		V_1 = (Object_t *)L_1;
		Object_t * L_2 = V_1;
		NullCheck((Object_t *)L_2);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t1051_il2cpp_TypeInfo_var, (Object_t *)L_2);
		__this->___syncRoot_1 = L_3;
		List_1_t341 * L_4 = V_0;
		__this->___list_0 = L_4;
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13267_gshared (Collection_1_t1970 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Array
#include "mscorlib_System_Array.h"
// System.Int32
#include "mscorlib_System_Int32.h"
extern TypeInfo* ICollection_t1051_il2cpp_TypeInfo_var;
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m13268_gshared (Collection_1_t1970 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t1051_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(568);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t *)((Object_t *)Castclass(L_0, ICollection_t1051_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(3 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t1051_il2cpp_TypeInfo_var, (Object_t *)((Object_t *)Castclass(L_0, ICollection_t1051_il2cpp_TypeInfo_var)), (Array_t *)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m13269_gshared (Collection_1_t1970 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UIVertex>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::System.Collections.IList.Add(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" int32_t Collection_1_System_Collections_IList_Add_m13270_gshared (Collection_1_t1970 * __this, Object_t * ___value, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		Object_t * L_3 = ___value;
		UIVertex_t241  L_4 = (( UIVertex_t241  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t1970 *)__this);
		VirtActionInvoker2< int32_t, UIVertex_t241  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::InsertItem(System.Int32,T) */, (Collection_1_t1970 *)__this, (int32_t)L_2, (UIVertex_t241 )L_4);
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m13271_gshared (Collection_1_t1970 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Object_t* L_2 = (Object_t*)(__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck((Object_t*)L_2);
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, UIVertex_t241  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_2, (UIVertex_t241 )((*(UIVertex_t241 *)((UIVertex_t241 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
		return L_4;
	}

IL_001d:
	{
		return 0;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m13272_gshared (Collection_1_t1970 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Object_t* L_2 = (Object_t*)(__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, UIVertex_t241  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<UnityEngine.UIVertex>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_2, (UIVertex_t241 )((*(UIVertex_t241 *)((UIVertex_t241 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
		return L_4;
	}

IL_001d:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m13273_gshared (Collection_1_t1970 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		UIVertex_t241  L_2 = (( UIVertex_t241  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t1970 *)__this);
		VirtActionInvoker2< int32_t, UIVertex_t241  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::InsertItem(System.Int32,T) */, (Collection_1_t1970 *)__this, (int32_t)L_0, (UIVertex_t241 )L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m13274_gshared (Collection_1_t1970 * __this, Object_t * ___value, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		(( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		Object_t * L_1 = ___value;
		UIVertex_t241  L_2 = (( UIVertex_t241  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t1970 *)__this);
		int32_t L_3 = (int32_t)VirtFuncInvoker1< int32_t, UIVertex_t241  >::Invoke(28 /* System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::IndexOf(T) */, (Collection_1_t1970 *)__this, (UIVertex_t241 )L_2);
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		NullCheck((Collection_1_t1970 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::RemoveItem(System.Int32) */, (Collection_1_t1970 *)__this, (int32_t)L_4);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m13275_gshared (Collection_1_t1970 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		return L_1;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m13276_gshared (Collection_1_t1970 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___syncRoot_1);
		return L_0;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m13277_gshared (Collection_1_t1970 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)->method)(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14));
		return L_1;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m13278_gshared (Collection_1_t1970 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return L_1;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m13279_gshared (Collection_1_t1970 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		UIVertex_t241  L_2 = (UIVertex_t241 )InterfaceFuncInvoker1< UIVertex_t241 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<UnityEngine.UIVertex>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int32_t)L_1);
		UIVertex_t241  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m13280_gshared (Collection_1_t1970 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		UIVertex_t241  L_2 = (( UIVertex_t241  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t1970 *)__this);
		VirtActionInvoker2< int32_t, UIVertex_t241  >::Invoke(36 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::SetItem(System.Int32,T) */, (Collection_1_t1970 *)__this, (int32_t)L_0, (UIVertex_t241 )L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::Add(T)
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
extern "C" void Collection_1_Add_m13281_gshared (Collection_1_t1970 * __this, UIVertex_t241  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		UIVertex_t241  L_3 = ___item;
		NullCheck((Collection_1_t1970 *)__this);
		VirtActionInvoker2< int32_t, UIVertex_t241  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::InsertItem(System.Int32,T) */, (Collection_1_t1970 *)__this, (int32_t)L_2, (UIVertex_t241 )L_3);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::Clear()
extern "C" void Collection_1_Clear_m13282_gshared (Collection_1_t1970 * __this, const MethodInfo* method)
{
	{
		NullCheck((Collection_1_t1970 *)__this);
		VirtActionInvoker0::Invoke(33 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::ClearItems() */, (Collection_1_t1970 *)__this);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::ClearItems()
extern "C" void Collection_1_ClearItems_m13283_gshared (Collection_1_t1970 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::Clear() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::Contains(T)
extern "C" bool Collection_1_Contains_m13284_gshared (Collection_1_t1970 * __this, UIVertex_t241  ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		UIVertex_t241  L_1 = ___item;
		NullCheck((Object_t*)L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, UIVertex_t241  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0, (UIVertex_t241 )L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32)
#include "UnityEngine_ArrayTypes.h"
extern "C" void Collection_1_CopyTo_m13285_gshared (Collection_1_t1970 * __this, UIVertexU5BU5D_t235* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		UIVertexU5BU5D_t235* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< UIVertexU5BU5D_t235*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0, (UIVertexU5BU5D_t235*)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m13286_gshared (Collection_1_t1970 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UIVertex>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m13287_gshared (Collection_1_t1970 * __this, UIVertex_t241  ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		UIVertex_t241  L_1 = ___item;
		NullCheck((Object_t*)L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, UIVertex_t241  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<UnityEngine.UIVertex>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (UIVertex_t241 )L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m13288_gshared (Collection_1_t1970 * __this, int32_t ___index, UIVertex_t241  ___item, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		UIVertex_t241  L_1 = ___item;
		NullCheck((Collection_1_t1970 *)__this);
		VirtActionInvoker2< int32_t, UIVertex_t241  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::InsertItem(System.Int32,T) */, (Collection_1_t1970 *)__this, (int32_t)L_0, (UIVertex_t241 )L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m13289_gshared (Collection_1_t1970 * __this, int32_t ___index, UIVertex_t241  ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		UIVertex_t241  L_2 = ___item;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int32_t, UIVertex_t241  >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<UnityEngine.UIVertex>::Insert(System.Int32,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int32_t)L_1, (UIVertex_t241 )L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::Remove(T)
extern "C" bool Collection_1_Remove_m13290_gshared (Collection_1_t1970 * __this, UIVertex_t241  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		UIVertex_t241  L_0 = ___item;
		NullCheck((Collection_1_t1970 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, UIVertex_t241  >::Invoke(28 /* System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::IndexOf(T) */, (Collection_1_t1970 *)__this, (UIVertex_t241 )L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		int32_t L_3 = V_0;
		NullCheck((Collection_1_t1970 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::RemoveItem(System.Int32) */, (Collection_1_t1970 *)__this, (int32_t)L_3);
		return 1;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m13291_gshared (Collection_1_t1970 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((Collection_1_t1970 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::RemoveItem(System.Int32) */, (Collection_1_t1970 *)__this, (int32_t)L_0);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m13292_gshared (Collection_1_t1970 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void System.Collections.Generic.IList`1<UnityEngine.UIVertex>::RemoveAt(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int32_t)L_1);
		return;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::get_Count()
extern "C" int32_t Collection_1_get_Count_m13293_gshared (Collection_1_t1970 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::get_Item(System.Int32)
extern "C" UIVertex_t241  Collection_1_get_Item_m13294_gshared (Collection_1_t1970 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		UIVertex_t241  L_2 = (UIVertex_t241 )InterfaceFuncInvoker1< UIVertex_t241 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<UnityEngine.UIVertex>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m13295_gshared (Collection_1_t1970 * __this, int32_t ___index, UIVertex_t241  ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		UIVertex_t241  L_1 = ___value;
		NullCheck((Collection_1_t1970 *)__this);
		VirtActionInvoker2< int32_t, UIVertex_t241  >::Invoke(36 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::SetItem(System.Int32,T) */, (Collection_1_t1970 *)__this, (int32_t)L_0, (UIVertex_t241 )L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m13296_gshared (Collection_1_t1970 * __this, int32_t ___index, UIVertex_t241  ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		UIVertex_t241  L_2 = ___item;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int32_t, UIVertex_t241  >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<UnityEngine.UIVertex>::set_Item(System.Int32,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int32_t)L_1, (UIVertex_t241 )L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::IsValidItem(System.Object)
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool Collection_1_IsValidItem_m13297_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(194);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Object_t * L_0 = ___item;
		if (((Object_t *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))
		{
			goto IL_0028;
		}
	}
	{
		Object_t * L_1 = ___item;
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m2130(NULL /*static, unused*/, (RuntimeTypeHandle_t1077 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Type::get_IsValueType() */, (Type_t *)L_2);
		G_B4_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0026;
	}

IL_0025:
	{
		G_B4_0 = 0;
	}

IL_0026:
	{
		G_B6_0 = G_B4_0;
		goto IL_0029;
	}

IL_0028:
	{
		G_B6_0 = 1;
	}

IL_0029:
	{
		return G_B6_0;
	}
}
// T System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::ConvertItem(System.Object)
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentException_t402_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2795;
extern "C" UIVertex_t241  Collection_1_ConvertItem_m13298_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(269);
		_stringLiteral2795 = il2cpp_codegen_string_literal_from_index(2795);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___item;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		Object_t * L_2 = ___item;
		return ((*(UIVertex_t241 *)((UIVertex_t241 *)UnBox (L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)))));
	}

IL_0012:
	{
		ArgumentException_t402 * L_3 = (ArgumentException_t402 *)il2cpp_codegen_object_new (ArgumentException_t402_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2370(L_3, (String_t*)_stringLiteral2795, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::CheckWritable(System.Collections.Generic.IList`1<T>)
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t81_il2cpp_TypeInfo_var;
extern "C" void Collection_1_CheckWritable_m13299_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t81_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___list;
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		NotSupportedException_t81 * L_2 = (NotSupportedException_t81 *)il2cpp_codegen_object_new (NotSupportedException_t81_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m357(L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0011:
	{
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern TypeInfo* ICollection_t1051_il2cpp_TypeInfo_var;
extern "C" bool Collection_1_IsSynchronized_m13300_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t1051_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(568);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		Object_t* L_0 = ___list;
		V_0 = (Object_t *)((Object_t *)IsInst(L_0, ICollection_t1051_il2cpp_TypeInfo_var));
		Object_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		Object_t * L_2 = V_0;
		NullCheck((Object_t *)L_2);
		bool L_3 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.ICollection::get_IsSynchronized() */, ICollection_t1051_il2cpp_TypeInfo_var, (Object_t *)L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 0;
	}

IL_0019:
	{
		return G_B3_0;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern TypeInfo* IList_t1010_il2cpp_TypeInfo_var;
extern "C" bool Collection_1_IsFixedSize_m13301_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IList_t1010_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(669);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		Object_t* L_0 = ___list;
		V_0 = (Object_t *)((Object_t *)IsInst(L_0, IList_t1010_il2cpp_TypeInfo_var));
		Object_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		Object_t * L_2 = V_0;
		NullCheck((Object_t *)L_2);
		bool L_3 = (bool)InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IList::get_IsFixedSize() */, IList_t1010_il2cpp_TypeInfo_var, (Object_t *)L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 0;
	}

IL_0019:
	{
		return G_B3_0;
	}
}
// System.Collections.Generic.EqualityComparer`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_2.h"
// System.Collections.Generic.EqualityComparer`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_2MethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_2.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_2MethodDeclarations.h"
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.UIVertex>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void EqualityComparer_1__ctor_m13302_gshared (EqualityComparer_1_t1971 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m355((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.UIVertex>::.cctor()
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
extern const Il2CppType* GenericEqualityComparer_1_t2537_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t645_il2cpp_TypeInfo_var;
extern "C" void EqualityComparer_1__cctor_m13303_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
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
		((EqualityComparer_1_t1971_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((EqualityComparer_1_t1971 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_005e;
	}

IL_0054:
	{
		DefaultComparer_t1972 * L_8 = (DefaultComparer_t1972 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t1972 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((EqualityComparer_1_t1971_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_005e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.UIVertex>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m13304_gshared (EqualityComparer_1_t1971 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		NullCheck((EqualityComparer_1_t1971 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, UIVertex_t241  >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.UIVertex>::GetHashCode(T) */, (EqualityComparer_1_t1971 *)__this, (UIVertex_t241 )((*(UIVertex_t241 *)((UIVertex_t241 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UIVertex>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m13305_gshared (EqualityComparer_1_t1971 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		NullCheck((EqualityComparer_1_t1971 *)__this);
		bool L_2 = (bool)VirtFuncInvoker2< bool, UIVertex_t241 , UIVertex_t241  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UIVertex>::Equals(T,T) */, (EqualityComparer_1_t1971 *)__this, (UIVertex_t241 )((*(UIVertex_t241 *)((UIVertex_t241 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (UIVertex_t241 )((*(UIVertex_t241 *)((UIVertex_t241 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.UIVertex>::get_Default()
extern "C" EqualityComparer_1_t1971 * EqualityComparer_1_get_Default_m13306_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t1971 * L_0 = ((EqualityComparer_1_t1971_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::.ctor()
extern "C" void DefaultComparer__ctor_m13307_gshared (DefaultComparer_t1972 * __this, const MethodInfo* method)
{
	{
		NullCheck((EqualityComparer_1_t1971 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (EqualityComparer_1_t1971 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t1971 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::GetHashCode(T)
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
extern "C" int32_t DefaultComparer_GetHashCode_m13308_gshared (DefaultComparer_t1972 * __this, UIVertex_t241  ___obj, const MethodInfo* method)
{
	{
		UIVertex_t241  L_0 = ___obj;
		goto IL_000d;
	}
	{
		return 0;
	}

IL_000d:
	{
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (&___obj)));
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (&___obj)));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m13309_gshared (DefaultComparer_t1972 * __this, UIVertex_t241  ___x, UIVertex_t241  ___y, const MethodInfo* method)
{
	{
		UIVertex_t241  L_0 = ___x;
		goto IL_0015;
	}
	{
		UIVertex_t241  L_1 = ___y;
		UIVertex_t241  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return ((((Object_t*)(Object_t *)L_3) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0015:
	{
		UIVertex_t241  L_4 = ___y;
		UIVertex_t241  L_5 = L_4;
		Object_t * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_5);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (&___x)));
		bool L_7 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (&___x)), (Object_t *)L_6);
		return L_7;
	}
}
// System.Void System.Predicate`1<UnityEngine.UIVertex>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Predicate_1__ctor_m13310_gshared (Predicate_1_t1973 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean System.Predicate`1<UnityEngine.UIVertex>::Invoke(T)
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
extern "C" bool Predicate_1_Invoke_m13311_gshared (Predicate_1_t1973 * __this, UIVertex_t241  ___obj, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Predicate_1_Invoke_m13311((Predicate_1_t1973 *)__this->___prev_9,___obj, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, UIVertex_t241  ___obj, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, UIVertex_t241  ___obj, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Predicate`1<UnityEngine.UIVertex>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* UIVertex_t241_il2cpp_TypeInfo_var;
extern "C" Object_t * Predicate_1_BeginInvoke_m13312_gshared (Predicate_1_t1973 * __this, UIVertex_t241  ___obj, AsyncCallback_t9 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UIVertex_t241_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(UIVertex_t241_il2cpp_TypeInfo_var, &___obj);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean System.Predicate`1<UnityEngine.UIVertex>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m13313_gshared (Predicate_1_t1973 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_1.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_1MethodDeclarations.h"
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.UIVertex>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void Comparer_1__ctor_m13314_gshared (Comparer_1_t1974 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m355((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.UIVertex>::.cctor()
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
extern const Il2CppType* GenericComparer_1_t2538_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t645_il2cpp_TypeInfo_var;
extern "C" void Comparer_1__cctor_m13315_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
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
		((Comparer_1_t1974_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((Comparer_1_t1974 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_005e;
	}

IL_0054:
	{
		DefaultComparer_t1975 * L_8 = (DefaultComparer_t1975 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t1975 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((Comparer_1_t1974_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_005e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.UIVertex>::System.Collections.IComparer.Compare(System.Object,System.Object)
// System.Object
#include "mscorlib_System_Object.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentException_t402_il2cpp_TypeInfo_var;
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m13316_gshared (Comparer_1_t1974 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
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
		NullCheck((Comparer_1_t1974 *)__this);
		int32_t L_7 = (int32_t)VirtFuncInvoker2< int32_t, UIVertex_t241 , UIVertex_t241  >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.UIVertex>::Compare(T,T) */, (Comparer_1_t1974 *)__this, (UIVertex_t241 )((*(UIVertex_t241 *)((UIVertex_t241 *)UnBox (L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (UIVertex_t241 )((*(UIVertex_t241 *)((UIVertex_t241 *)UnBox (L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_7;
	}

IL_0045:
	{
		ArgumentException_t402 * L_8 = (ArgumentException_t402 *)il2cpp_codegen_object_new (ArgumentException_t402_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9866(L_8, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_8);
	}
}
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<UnityEngine.UIVertex>::get_Default()
extern "C" Comparer_1_t1974 * Comparer_1_get_Default_m13317_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Comparer_1_t1974 * L_0 = ((Comparer_1_t1974_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UIVertex>::.ctor()
extern "C" void DefaultComparer__ctor_m13318_gshared (DefaultComparer_t1975 * __this, const MethodInfo* method)
{
	{
		NullCheck((Comparer_1_t1974 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (Comparer_1_t1974 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Comparer_1_t1974 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UIVertex>::Compare(T,T)
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* IComparable_t1734_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t402_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2798;
extern "C" int32_t DefaultComparer_Compare_m13319_gshared (DefaultComparer_t1975 * __this, UIVertex_t241  ___x, UIVertex_t241  ___y, const MethodInfo* method)
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
		UIVertex_t241  L_0 = ___x;
		goto IL_001e;
	}
	{
		UIVertex_t241  L_1 = ___y;
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
		UIVertex_t241  L_2 = ___y;
		goto IL_002b;
	}
	{
		return 1;
	}

IL_002b:
	{
		UIVertex_t241  L_3 = ___x;
		UIVertex_t241  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_4);
		if (!((Object_t*)IsInst(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))
		{
			goto IL_004d;
		}
	}
	{
		UIVertex_t241  L_6 = ___x;
		UIVertex_t241  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_7);
		UIVertex_t241  L_9 = ___y;
		NullCheck((Object_t*)((Object_t*)Castclass(L_8, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))));
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, UIVertex_t241  >::Invoke(0 /* System.Int32 System.IComparable`1<UnityEngine.UIVertex>::CompareTo(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)((Object_t*)Castclass(L_8, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))), (UIVertex_t241 )L_9);
		return L_10;
	}

IL_004d:
	{
		UIVertex_t241  L_11 = ___x;
		UIVertex_t241  L_12 = L_11;
		Object_t * L_13 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_12);
		if (!((Object_t *)IsInst(L_13, IComparable_t1734_il2cpp_TypeInfo_var)))
		{
			goto IL_0074;
		}
	}
	{
		UIVertex_t241  L_14 = ___x;
		UIVertex_t241  L_15 = L_14;
		Object_t * L_16 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_15);
		UIVertex_t241  L_17 = ___y;
		UIVertex_t241  L_18 = L_17;
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
// System.Comparison`1<UnityEngine.UIVertex>
#include "mscorlib_System_Comparison_1_gen_17MethodDeclarations.h"
// System.Void System.Comparison`1<UnityEngine.UIVertex>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Comparison_1__ctor_m13320_gshared (Comparison_1_t1976 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Int32 System.Comparison`1<UnityEngine.UIVertex>::Invoke(T,T)
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
extern "C" int32_t Comparison_1_Invoke_m13321_gshared (Comparison_1_t1976 * __this, UIVertex_t241  ___x, UIVertex_t241  ___y, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Comparison_1_Invoke_m13321((Comparison_1_t1976 *)__this->___prev_9,___x, ___y, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, UIVertex_t241  ___x, UIVertex_t241  ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, UIVertex_t241  ___x, UIVertex_t241  ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Comparison`1<UnityEngine.UIVertex>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern TypeInfo* UIVertex_t241_il2cpp_TypeInfo_var;
extern "C" Object_t * Comparison_1_BeginInvoke_m13322_gshared (Comparison_1_t1976 * __this, UIVertex_t241  ___x, UIVertex_t241  ___y, AsyncCallback_t9 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UIVertex_t241_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(UIVertex_t241_il2cpp_TypeInfo_var, &___x);
	__d_args[1] = Box(UIVertex_t241_il2cpp_TypeInfo_var, &___y);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Int32 System.Comparison`1<UnityEngine.UIVertex>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m13323_gshared (Comparison_1_t1976 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Array/InternalEnumerator`1<UnityEngine.Vector2>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_18.h"
// System.Array/InternalEnumerator`1<UnityEngine.Vector2>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_18MethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Vector2>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Vector2>(System.Int32)
extern "C" Vector2_t15  Array_InternalArray__get_Item_TisVector2_t15_m17814_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisVector2_t15_m17814(__this, p0, method) (( Vector2_t15  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisVector2_t15_m17814_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Vector2>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m13626_gshared (InternalEnumerator_1_t1995 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Vector2>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13627_gshared (InternalEnumerator_1_t1995 * __this, const MethodInfo* method)
{
	{
		Vector2_t15  L_0 = (( Vector2_t15  (*) (InternalEnumerator_1_t1995 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t1995 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Vector2_t15  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Vector2>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m13628_gshared (InternalEnumerator_1_t1995 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Vector2>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m13629_gshared (InternalEnumerator_1_t1995 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001e;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m5638((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001e:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B5_0 = 0;
	}

IL_0044:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<UnityEngine.Vector2>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t881_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2793;
extern Il2CppCodeGenString* _stringLiteral2794;
extern "C" Vector2_t15  InternalEnumerator_1_get_Current_m13630_gshared (InternalEnumerator_1_t1995 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t881_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(515);
		_stringLiteral2793 = il2cpp_codegen_string_literal_from_index(2793);
		_stringLiteral2794 = il2cpp_codegen_string_literal_from_index(2794);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t881 * L_1 = (InvalidOperationException_t881 *)il2cpp_codegen_object_new (InvalidOperationException_t881_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4709(L_1, (String_t*)_stringLiteral2793, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0018:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_002f;
		}
	}
	{
		InvalidOperationException_t881 * L_3 = (InvalidOperationException_t881 *)il2cpp_codegen_object_new (InvalidOperationException_t881_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4709(L_3, (String_t*)_stringLiteral2794, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_002f:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m5638((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		Vector2_t15  L_8 = (( Vector2_t15  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/ContentType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_19.h"
// System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/ContentType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_19MethodDeclarations.h"
// UnityEngine.UI.InputField/ContentType
#include "UnityEngine_UI_UnityEngine_UI_InputField_ContentType.h"
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.InputField/ContentType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.InputField/ContentType>(System.Int32)
extern "C" int32_t Array_InternalArray__get_Item_TisContentType_t223_m17825_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisContentType_t223_m17825(__this, p0, method) (( int32_t (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisContentType_t223_m17825_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/ContentType>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m13631_gshared (InternalEnumerator_1_t1996 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/ContentType>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13632_gshared (InternalEnumerator_1_t1996 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (( int32_t (*) (InternalEnumerator_1_t1996 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t1996 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/ContentType>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m13633_gshared (InternalEnumerator_1_t1996 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/ContentType>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m13634_gshared (InternalEnumerator_1_t1996 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001e;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m5638((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001e:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B5_0 = 0;
	}

IL_0044:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<UnityEngine.UI.InputField/ContentType>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t881_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2793;
extern Il2CppCodeGenString* _stringLiteral2794;
extern "C" int32_t InternalEnumerator_1_get_Current_m13635_gshared (InternalEnumerator_1_t1996 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t881_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(515);
		_stringLiteral2793 = il2cpp_codegen_string_literal_from_index(2793);
		_stringLiteral2794 = il2cpp_codegen_string_literal_from_index(2794);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t881 * L_1 = (InvalidOperationException_t881 *)il2cpp_codegen_object_new (InvalidOperationException_t881_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4709(L_1, (String_t*)_stringLiteral2793, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0018:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_002f;
		}
	}
	{
		InvalidOperationException_t881 * L_3 = (InvalidOperationException_t881 *)il2cpp_codegen_object_new (InvalidOperationException_t881_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4709(L_3, (String_t*)_stringLiteral2794, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_002f:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m5638((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		int32_t L_8 = (( int32_t (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
