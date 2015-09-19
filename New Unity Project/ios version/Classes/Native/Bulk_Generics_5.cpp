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

// System.Array/InternalEnumerator`1<System.UInt64>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_67.h"
// System.Array/InternalEnumerator`1<System.UInt64>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_67MethodDeclarations.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.UInt64
#include "mscorlib_System_UInt64.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.String
#include "mscorlib_System_String.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.UInt64>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.UInt64>(System.Int32)
extern "C" uint64_t Array_InternalArray__get_Item_TisUInt64_t1069_m18211_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisUInt64_t1069_m18211(__this, p0, method) (( uint64_t (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisUInt64_t1069_m18211_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<System.UInt64>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m17178_gshared (InternalEnumerator_1_t2287 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.UInt64>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17179_gshared (InternalEnumerator_1_t2287 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (( uint64_t (*) (InternalEnumerator_1_t2287 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2287 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		uint64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.UInt64>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m17180_gshared (InternalEnumerator_1_t2287 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.UInt64>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m17181_gshared (InternalEnumerator_1_t2287 * __this, const MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.UInt64>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t881_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2793;
extern Il2CppCodeGenString* _stringLiteral2794;
extern "C" uint64_t InternalEnumerator_1_get_Current_m17182_gshared (InternalEnumerator_1_t2287 * __this, const MethodInfo* method)
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
		uint64_t L_8 = (( uint64_t (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Array/InternalEnumerator`1<System.Int16>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_68.h"
// System.Array/InternalEnumerator`1<System.Int16>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_68MethodDeclarations.h"
// System.Int16
#include "mscorlib_System_Int16.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.Int16>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Int16>(System.Int32)
extern "C" int16_t Array_InternalArray__get_Item_TisInt16_t1071_m18222_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisInt16_t1071_m18222(__this, p0, method) (( int16_t (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisInt16_t1071_m18222_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<System.Int16>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m17183_gshared (InternalEnumerator_1_t2288 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Int16>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17184_gshared (InternalEnumerator_1_t2288 * __this, const MethodInfo* method)
{
	{
		int16_t L_0 = (( int16_t (*) (InternalEnumerator_1_t2288 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2288 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int16_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Int16>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m17185_gshared (InternalEnumerator_1_t2288 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Int16>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m17186_gshared (InternalEnumerator_1_t2288 * __this, const MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.Int16>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t881_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2793;
extern Il2CppCodeGenString* _stringLiteral2794;
extern "C" int16_t InternalEnumerator_1_get_Current_m17187_gshared (InternalEnumerator_1_t2288 * __this, const MethodInfo* method)
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
		int16_t L_8 = (( int16_t (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Array/InternalEnumerator`1<System.SByte>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_69.h"
// System.Array/InternalEnumerator`1<System.SByte>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_69MethodDeclarations.h"
// System.SByte
#include "mscorlib_System_SByte.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.SByte>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.SByte>(System.Int32)
extern "C" int8_t Array_InternalArray__get_Item_TisSByte_t1070_m18233_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisSByte_t1070_m18233(__this, p0, method) (( int8_t (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisSByte_t1070_m18233_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<System.SByte>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m17188_gshared (InternalEnumerator_1_t2289 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.SByte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17189_gshared (InternalEnumerator_1_t2289 * __this, const MethodInfo* method)
{
	{
		int8_t L_0 = (( int8_t (*) (InternalEnumerator_1_t2289 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2289 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int8_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.SByte>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m17190_gshared (InternalEnumerator_1_t2289 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.SByte>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m17191_gshared (InternalEnumerator_1_t2289 * __this, const MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.SByte>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t881_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2793;
extern Il2CppCodeGenString* _stringLiteral2794;
extern "C" int8_t InternalEnumerator_1_get_Current_m17192_gshared (InternalEnumerator_1_t2289 * __this, const MethodInfo* method)
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
		int8_t L_8 = (( int8_t (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Array/InternalEnumerator`1<System.Int64>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_70.h"
// System.Array/InternalEnumerator`1<System.Int64>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_70MethodDeclarations.h"
// System.Int64
#include "mscorlib_System_Int64.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.Int64>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Int64>(System.Int32)
extern "C" int64_t Array_InternalArray__get_Item_TisInt64_t671_m18244_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisInt64_t671_m18244(__this, p0, method) (( int64_t (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisInt64_t671_m18244_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<System.Int64>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m17193_gshared (InternalEnumerator_1_t2290 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Int64>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17194_gshared (InternalEnumerator_1_t2290 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = (( int64_t (*) (InternalEnumerator_1_t2290 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2290 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Int64>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m17195_gshared (InternalEnumerator_1_t2290 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Int64>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m17196_gshared (InternalEnumerator_1_t2290 * __this, const MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.Int64>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t881_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2793;
extern Il2CppCodeGenString* _stringLiteral2794;
extern "C" int64_t InternalEnumerator_1_get_Current_m17197_gshared (InternalEnumerator_1_t2290 * __this, const MethodInfo* method)
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
		int64_t L_8 = (( int64_t (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Converter`2<System.Object,System.Object>
#include "mscorlib_System_Converter_2_gen.h"
// System.Converter`2<System.Object,System.Object>
#include "mscorlib_System_Converter_2_genMethodDeclarations.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
// System.Void System.Converter`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Converter_2__ctor_m17198_gshared (Converter_2_t2291 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TOutput System.Converter`2<System.Object,System.Object>::Invoke(TInput)
extern "C" Object_t * Converter_2_Invoke_m17199_gshared (Converter_2_t2291 * __this, Object_t * ___input, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Converter_2_Invoke_m17199((Converter_2_t2291 *)__this->___prev_9,___input, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___input, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___input,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___input, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___input,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___input,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Converter`2<System.Object,System.Object>::BeginInvoke(TInput,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * Converter_2_BeginInvoke_m17200_gshared (Converter_2_t2291 * __this, Object_t * ___input, AsyncCallback_t9 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___input;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TOutput System.Converter`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Converter_2_EndInvoke_m17201_gshared (Converter_2_t2291 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// System.Array/ArrayReadOnlyList`1<System.Object>
#include "mscorlib_System_Array_ArrayReadOnlyList_1_gen.h"
// System.Array/ArrayReadOnlyList`1<System.Object>
#include "mscorlib_System_Array_ArrayReadOnlyList_1_genMethodDeclarations.h"
#include "mscorlib_ArrayTypes.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>
#include "mscorlib_System_Array_ArrayReadOnlyList_1_U3CGetEnumeratorU3.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>
#include "mscorlib_System_Array_ArrayReadOnlyList_1_U3CGetEnumeratorU3MethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
struct ObjectU5BU5D_t78;
struct Object_t;
// Declaration System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0)
// System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0)
extern "C" int32_t Array_IndexOf_TisObject_t_m10705_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t78* p0, Object_t * p1, const MethodInfo* method);
#define Array_IndexOf_TisObject_t_m10705(__this /* static, unused */, p0, p1, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t78*, Object_t *, const MethodInfo*))Array_IndexOf_TisObject_t_m10705_gshared)(__this /* static, unused */, p0, p1, method)
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::.ctor(T[])
#include "mscorlib_ArrayTypes.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void ArrayReadOnlyList_1__ctor_m17202_gshared (ArrayReadOnlyList_1_t2292 * __this, ObjectU5BU5D_t78* ___array, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m355((Object_t *)__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t78* L_0 = ___array;
		__this->___array_0 = L_0;
		return;
	}
}
// System.Collections.IEnumerator System.Array/ArrayReadOnlyList`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ArrayReadOnlyList_1_System_Collections_IEnumerable_GetEnumerator_m17203_gshared (ArrayReadOnlyList_1_t2292 * __this, const MethodInfo* method)
{
	{
		NullCheck((ArrayReadOnlyList_1_t2292 *)__this);
		Object_t* L_0 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(17 /* System.Collections.Generic.IEnumerator`1<T> System.Array/ArrayReadOnlyList`1<System.Object>::GetEnumerator() */, (ArrayReadOnlyList_1_t2292 *)__this);
		return L_0;
	}
}
// T System.Array/ArrayReadOnlyList`1<System.Object>::get_Item(System.Int32)
// System.Int32
#include "mscorlib_System_Int32.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentOutOfRangeException_t708_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral715;
extern "C" Object_t * ArrayReadOnlyList_1_get_Item_m17204_gshared (ArrayReadOnlyList_1_t2292 * __this, int32_t ___index, const MethodInfo* method)
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
		ObjectU5BU5D_t78* L_1 = (ObjectU5BU5D_t78*)(__this->___array_0);
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) >= ((uint32_t)(((int32_t)(((Array_t *)L_1)->max_length)))))))
		{
			goto IL_0019;
		}
	}
	{
		ArgumentOutOfRangeException_t708 * L_2 = (ArgumentOutOfRangeException_t708 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t708_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m4630(L_2, (String_t*)_stringLiteral715, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0019:
	{
		ObjectU5BU5D_t78* L_3 = (ObjectU5BU5D_t78*)(__this->___array_0);
		int32_t L_4 = ___index;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		return (*(Object_t **)(Object_t **)SZArrayLdElema(L_3, L_5, sizeof(Object_t *)));
	}
}
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::set_Item(System.Int32,T)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" void ArrayReadOnlyList_1_set_Item_m17205_gshared (ArrayReadOnlyList_1_t2292 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	{
		Exception_t108 * L_0 = (( Exception_t108 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Int32 System.Array/ArrayReadOnlyList`1<System.Object>::get_Count()
extern "C" int32_t ArrayReadOnlyList_1_get_Count_m17206_gshared (ArrayReadOnlyList_1_t2292 * __this, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t78* L_0 = (ObjectU5BU5D_t78*)(__this->___array_0);
		NullCheck(L_0);
		return (((int32_t)(((Array_t *)L_0)->max_length)));
	}
}
// System.Boolean System.Array/ArrayReadOnlyList`1<System.Object>::get_IsReadOnly()
extern "C" bool ArrayReadOnlyList_1_get_IsReadOnly_m17207_gshared (ArrayReadOnlyList_1_t2292 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::Add(T)
extern "C" void ArrayReadOnlyList_1_Add_m17208_gshared (ArrayReadOnlyList_1_t2292 * __this, Object_t * ___item, const MethodInfo* method)
{
	{
		Exception_t108 * L_0 = (( Exception_t108 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::Clear()
extern "C" void ArrayReadOnlyList_1_Clear_m17209_gshared (ArrayReadOnlyList_1_t2292 * __this, const MethodInfo* method)
{
	{
		Exception_t108 * L_0 = (( Exception_t108 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Boolean System.Array/ArrayReadOnlyList`1<System.Object>::Contains(T)
extern "C" bool ArrayReadOnlyList_1_Contains_m17210_gshared (ArrayReadOnlyList_1_t2292 * __this, Object_t * ___item, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t78* L_0 = (ObjectU5BU5D_t78*)(__this->___array_0);
		Object_t * L_1 = ___item;
		int32_t L_2 = (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t78*, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(NULL /*static, unused*/, (ObjectU5BU5D_t78*)L_0, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return ((((int32_t)((((int32_t)L_2) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void ArrayReadOnlyList_1_CopyTo_m17211_gshared (ArrayReadOnlyList_1_t2292 * __this, ObjectU5BU5D_t78* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t78* L_0 = (ObjectU5BU5D_t78*)(__this->___array_0);
		ObjectU5BU5D_t78* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Array_t *)L_0);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(8 /* System.Void System.Array::CopyTo(System.Array,System.Int32) */, (Array_t *)L_0, (Array_t *)(Array_t *)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Array/ArrayReadOnlyList`1<System.Object>::GetEnumerator()
extern "C" Object_t* ArrayReadOnlyList_1_GetEnumerator_m17212_gshared (ArrayReadOnlyList_1_t2292 * __this, const MethodInfo* method)
{
	U3CGetEnumeratorU3Ec__Iterator0_t2293 * V_0 = {0};
	{
		U3CGetEnumeratorU3Ec__Iterator0_t2293 * L_0 = (U3CGetEnumeratorU3Ec__Iterator0_t2293 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (U3CGetEnumeratorU3Ec__Iterator0_t2293 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		V_0 = (U3CGetEnumeratorU3Ec__Iterator0_t2293 *)L_0;
		U3CGetEnumeratorU3Ec__Iterator0_t2293 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_3 = __this;
		U3CGetEnumeratorU3Ec__Iterator0_t2293 * L_2 = V_0;
		return L_2;
	}
}
// System.Int32 System.Array/ArrayReadOnlyList`1<System.Object>::IndexOf(T)
extern "C" int32_t ArrayReadOnlyList_1_IndexOf_m17213_gshared (ArrayReadOnlyList_1_t2292 * __this, Object_t * ___item, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t78* L_0 = (ObjectU5BU5D_t78*)(__this->___array_0);
		Object_t * L_1 = ___item;
		int32_t L_2 = (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t78*, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(NULL /*static, unused*/, (ObjectU5BU5D_t78*)L_0, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return L_2;
	}
}
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::Insert(System.Int32,T)
extern "C" void ArrayReadOnlyList_1_Insert_m17214_gshared (ArrayReadOnlyList_1_t2292 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method)
{
	{
		Exception_t108 * L_0 = (( Exception_t108 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Boolean System.Array/ArrayReadOnlyList`1<System.Object>::Remove(T)
extern "C" bool ArrayReadOnlyList_1_Remove_m17215_gshared (ArrayReadOnlyList_1_t2292 * __this, Object_t * ___item, const MethodInfo* method)
{
	{
		Exception_t108 * L_0 = (( Exception_t108 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::RemoveAt(System.Int32)
extern "C" void ArrayReadOnlyList_1_RemoveAt_m17216_gshared (ArrayReadOnlyList_1_t2292 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Exception_t108 * L_0 = (( Exception_t108 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Exception System.Array/ArrayReadOnlyList`1<System.Object>::ReadOnlyError()
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern TypeInfo* NotSupportedException_t81_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2812;
extern "C" Exception_t108 * ArrayReadOnlyList_1_ReadOnlyError_m17217_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t81_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		_stringLiteral2812 = il2cpp_codegen_string_literal_from_index(2812);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t81 * L_0 = (NotSupportedException_t81 *)il2cpp_codegen_object_new (NotSupportedException_t81_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m4631(L_0, (String_t*)_stringLiteral2812, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.UInt32
#include "mscorlib_System_UInt32.h"
// System.Void System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void U3CGetEnumeratorU3Ec__Iterator0__ctor_m17218_gshared (U3CGetEnumeratorU3Ec__Iterator0_t2293 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m355((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// T System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::System.Collections.Generic.IEnumerator<T>.get_Current()
extern "C" Object_t * U3CGetEnumeratorU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m17219_gshared (U3CGetEnumeratorU3Ec__Iterator0_t2293 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_2);
		return L_0;
	}
}
// System.Object System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CGetEnumeratorU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m17220_gshared (U3CGetEnumeratorU3Ec__Iterator0_t2293 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_2);
		return L_0;
	}
}
// System.Boolean System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::MoveNext()
extern "C" bool U3CGetEnumeratorU3Ec__Iterator0_MoveNext_m17221_gshared (U3CGetEnumeratorU3Ec__Iterator0_t2293 * __this, const MethodInfo* method)
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (int32_t)(__this->___U24PC_1);
		V_0 = (uint32_t)L_0;
		__this->___U24PC_1 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0055;
		}
	}
	{
		goto IL_0082;
	}

IL_0021:
	{
		__this->___U3CiU3E__0_0 = 0;
		goto IL_0063;
	}

IL_002d:
	{
		ArrayReadOnlyList_1_t2292 * L_2 = (ArrayReadOnlyList_1_t2292 *)(__this->___U3CU3Ef__this_3);
		NullCheck(L_2);
		ObjectU5BU5D_t78* L_3 = (ObjectU5BU5D_t78*)(L_2->___array_0);
		int32_t L_4 = (int32_t)(__this->___U3CiU3E__0_0);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		__this->___U24current_2 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_3, L_5, sizeof(Object_t *)));
		__this->___U24PC_1 = 1;
		goto IL_0084;
	}

IL_0055:
	{
		int32_t L_6 = (int32_t)(__this->___U3CiU3E__0_0);
		__this->___U3CiU3E__0_0 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0063:
	{
		int32_t L_7 = (int32_t)(__this->___U3CiU3E__0_0);
		ArrayReadOnlyList_1_t2292 * L_8 = (ArrayReadOnlyList_1_t2292 *)(__this->___U3CU3Ef__this_3);
		NullCheck(L_8);
		ObjectU5BU5D_t78* L_9 = (ObjectU5BU5D_t78*)(L_8->___array_0);
		NullCheck(L_9);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_002d;
		}
	}
	{
		__this->___U24PC_1 = (-1);
	}

IL_0082:
	{
		return 0;
	}

IL_0084:
	{
		return 1;
	}
	// Dead block : IL_0086: ldloc.1
}
// System.Void System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::Dispose()
extern "C" void U3CGetEnumeratorU3Ec__Iterator0_Dispose_m17222_gshared (U3CGetEnumeratorU3Ec__Iterator0_t2293 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_1 = (-1);
		return;
	}
}
// System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_74.h"
// System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_74MethodDeclarations.h"
// Mono.Globalization.Unicode.CodePointIndexer/TableRange
#include "mscorlib_Mono_Globalization_Unicode_CodePointIndexer_TableRa.h"
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(System.Int32)
extern "C" TableRange_t1107  Array_InternalArray__get_Item_TisTableRange_t1107_m18283_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisTableRange_t1107_m18283(__this, p0, method) (( TableRange_t1107  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisTableRange_t1107_m18283_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m17238_gshared (InternalEnumerator_1_t2297 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17239_gshared (InternalEnumerator_1_t2297 * __this, const MethodInfo* method)
{
	{
		TableRange_t1107  L_0 = (( TableRange_t1107  (*) (InternalEnumerator_1_t2297 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2297 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		TableRange_t1107  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m17240_gshared (InternalEnumerator_1_t2297 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m17241_gshared (InternalEnumerator_1_t2297 * __this, const MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t881_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2793;
extern Il2CppCodeGenString* _stringLiteral2794;
extern "C" TableRange_t1107  InternalEnumerator_1_get_Current_m17242_gshared (InternalEnumerator_1_t2297 * __this, const MethodInfo* method)
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
		TableRange_t1107  L_8 = (( TableRange_t1107  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Collections.Generic.CollectionDebuggerView`1<System.Object>
#include "mscorlib_System_Collections_Generic_CollectionDebuggerView_1.h"
// System.Collections.Generic.CollectionDebuggerView`1<System.Object>
#include "mscorlib_System_Collections_Generic_CollectionDebuggerView_1MethodDeclarations.h"
// System.Collections.Generic.CollectionDebuggerView`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_CollectionDebuggerView_2.h"
// System.Collections.Generic.CollectionDebuggerView`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_CollectionDebuggerView_2MethodDeclarations.h"
// System.Collections.Generic.GenericComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_gen_4.h"
// System.Collections.Generic.GenericComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_gen_4MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_Comparer_1_genMethodDeclarations.h"
// System.Void System.Collections.Generic.GenericComparer`1<System.Object>::.ctor()
extern "C" void GenericComparer_1__ctor_m17263_gshared (GenericComparer_1_t2304 * __this, const MethodInfo* method)
{
	{
		NullCheck((Comparer_1_t1781 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (Comparer_1_t1781 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Comparer_1_t1781 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericComparer`1<System.Object>::Compare(T,T)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" int32_t GenericComparer_1_Compare_m17264_gshared (GenericComparer_1_t2304 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		Object_t * L_0 = ___x;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		Object_t * L_1 = ___y;
		if (L_1)
		{
			goto IL_001c;
		}
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
		Object_t * L_2 = ___y;
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		return 1;
	}

IL_002b:
	{
		Object_t * L_3 = ___y;
		NullCheck((Object_t*)(*(&___x)));
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(0 /* System.Int32 System.IComparable`1<System.Object>::CompareTo(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)(*(&___x)), (Object_t *)L_3);
		return L_4;
	}
}
// System.Collections.Generic.GenericEqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__5.h"
// System.Collections.Generic.GenericEqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__5MethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_genMethodDeclarations.h"
// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.Object>::.ctor()
extern "C" void GenericEqualityComparer_1__ctor_m17265_gshared (GenericEqualityComparer_1_t2305 * __this, const MethodInfo* method)
{
	{
		NullCheck((EqualityComparer_1_t1777 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (EqualityComparer_1_t1777 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t1777 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.Object>::GetHashCode(T)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m17266_gshared (GenericEqualityComparer_1_t2305 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
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
		NullCheck((Object_t *)(*(&___obj)));
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (Object_t *)(*(&___obj)));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.Object>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m17267_gshared (GenericEqualityComparer_1_t2305 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Object_t * L_1 = ___y;
		return ((((Object_t*)(Object_t *)L_1) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0015:
	{
		Object_t * L_2 = ___y;
		NullCheck((Object_t*)(*(&___x)));
		bool L_3 = (bool)InterfaceFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.IEquatable`1<System.Object>::Equals(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)(*(&___x)), (Object_t *)L_2);
		return L_3;
	}
}
// System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_79.h"
// System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_79MethodDeclarations.h"
// System.Collections.Hashtable/Slot
#include "mscorlib_System_Collections_Hashtable_Slot.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Hashtable/Slot>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Hashtable/Slot>(System.Int32)
extern "C" Slot_t1184  Array_InternalArray__get_Item_TisSlot_t1184_m18294_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisSlot_t1184_m18294(__this, p0, method) (( Slot_t1184  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisSlot_t1184_m18294_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m17268_gshared (InternalEnumerator_1_t2306 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17269_gshared (InternalEnumerator_1_t2306 * __this, const MethodInfo* method)
{
	{
		Slot_t1184  L_0 = (( Slot_t1184  (*) (InternalEnumerator_1_t2306 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2306 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Slot_t1184  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m17270_gshared (InternalEnumerator_1_t2306 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m17271_gshared (InternalEnumerator_1_t2306 * __this, const MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t881_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2793;
extern Il2CppCodeGenString* _stringLiteral2794;
extern "C" Slot_t1184  InternalEnumerator_1_get_Current_m17272_gshared (InternalEnumerator_1_t2306 * __this, const MethodInfo* method)
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
		Slot_t1184  L_8 = (( Slot_t1184  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_80.h"
// System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_80MethodDeclarations.h"
// System.Collections.SortedList/Slot
#include "mscorlib_System_Collections_SortedList_Slot.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.SortedList/Slot>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.SortedList/Slot>(System.Int32)
extern "C" Slot_t1191  Array_InternalArray__get_Item_TisSlot_t1191_m18305_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisSlot_t1191_m18305(__this, p0, method) (( Slot_t1191  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisSlot_t1191_m18305_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m17273_gshared (InternalEnumerator_1_t2307 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17274_gshared (InternalEnumerator_1_t2307 * __this, const MethodInfo* method)
{
	{
		Slot_t1191  L_0 = (( Slot_t1191  (*) (InternalEnumerator_1_t2307 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2307 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Slot_t1191  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m17275_gshared (InternalEnumerator_1_t2307 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m17276_gshared (InternalEnumerator_1_t2307 * __this, const MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t881_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2793;
extern Il2CppCodeGenString* _stringLiteral2794;
extern "C" Slot_t1191  InternalEnumerator_1_get_Current_m17277_gshared (InternalEnumerator_1_t2307 * __this, const MethodInfo* method)
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
		Slot_t1191  L_8 = (( Slot_t1191  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Array/InternalEnumerator`1<System.Reflection.Emit.ILTokenInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_86.h"
// System.Array/InternalEnumerator`1<System.Reflection.Emit.ILTokenInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_86MethodDeclarations.h"
// System.Reflection.Emit.ILTokenInfo
#include "mscorlib_System_Reflection_Emit_ILTokenInfo.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.Emit.ILTokenInfo>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.Emit.ILTokenInfo>(System.Int32)
extern "C" ILTokenInfo_t1269  Array_InternalArray__get_Item_TisILTokenInfo_t1269_m18316_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisILTokenInfo_t1269_m18316(__this, p0, method) (( ILTokenInfo_t1269  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisILTokenInfo_t1269_m18316_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ILTokenInfo>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m17303_gshared (InternalEnumerator_1_t2313 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Reflection.Emit.ILTokenInfo>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17304_gshared (InternalEnumerator_1_t2313 * __this, const MethodInfo* method)
{
	{
		ILTokenInfo_t1269  L_0 = (( ILTokenInfo_t1269  (*) (InternalEnumerator_1_t2313 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2313 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ILTokenInfo_t1269  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ILTokenInfo>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m17305_gshared (InternalEnumerator_1_t2313 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.Emit.ILTokenInfo>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m17306_gshared (InternalEnumerator_1_t2313 * __this, const MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.Reflection.Emit.ILTokenInfo>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t881_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2793;
extern Il2CppCodeGenString* _stringLiteral2794;
extern "C" ILTokenInfo_t1269  InternalEnumerator_1_get_Current_m17307_gshared (InternalEnumerator_1_t2313 * __this, const MethodInfo* method)
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
		ILTokenInfo_t1269  L_8 = (( ILTokenInfo_t1269  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelData>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_87.h"
// System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelData>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_87MethodDeclarations.h"
// System.Reflection.Emit.ILGenerator/LabelData
#include "mscorlib_System_Reflection_Emit_ILGenerator_LabelData.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.Emit.ILGenerator/LabelData>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.Emit.ILGenerator/LabelData>(System.Int32)
extern "C" LabelData_t1271  Array_InternalArray__get_Item_TisLabelData_t1271_m18327_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisLabelData_t1271_m18327(__this, p0, method) (( LabelData_t1271  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisLabelData_t1271_m18327_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelData>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m17308_gshared (InternalEnumerator_1_t2314 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelData>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17309_gshared (InternalEnumerator_1_t2314 * __this, const MethodInfo* method)
{
	{
		LabelData_t1271  L_0 = (( LabelData_t1271  (*) (InternalEnumerator_1_t2314 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2314 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		LabelData_t1271  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelData>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m17310_gshared (InternalEnumerator_1_t2314 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelData>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m17311_gshared (InternalEnumerator_1_t2314 * __this, const MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelData>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t881_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2793;
extern Il2CppCodeGenString* _stringLiteral2794;
extern "C" LabelData_t1271  InternalEnumerator_1_get_Current_m17312_gshared (InternalEnumerator_1_t2314 * __this, const MethodInfo* method)
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
		LabelData_t1271  L_8 = (( LabelData_t1271  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelFixup>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_88.h"
// System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelFixup>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_88MethodDeclarations.h"
// System.Reflection.Emit.ILGenerator/LabelFixup
#include "mscorlib_System_Reflection_Emit_ILGenerator_LabelFixup.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.Emit.ILGenerator/LabelFixup>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.Emit.ILGenerator/LabelFixup>(System.Int32)
extern "C" LabelFixup_t1270  Array_InternalArray__get_Item_TisLabelFixup_t1270_m18338_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisLabelFixup_t1270_m18338(__this, p0, method) (( LabelFixup_t1270  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisLabelFixup_t1270_m18338_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelFixup>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m17313_gshared (InternalEnumerator_1_t2315 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelFixup>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17314_gshared (InternalEnumerator_1_t2315 * __this, const MethodInfo* method)
{
	{
		LabelFixup_t1270  L_0 = (( LabelFixup_t1270  (*) (InternalEnumerator_1_t2315 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2315 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		LabelFixup_t1270  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelFixup>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m17315_gshared (InternalEnumerator_1_t2315 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelFixup>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m17316_gshared (InternalEnumerator_1_t2315 * __this, const MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelFixup>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t881_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2793;
extern Il2CppCodeGenString* _stringLiteral2794;
extern "C" LabelFixup_t1270  InternalEnumerator_1_get_Current_m17317_gshared (InternalEnumerator_1_t2315 * __this, const MethodInfo* method)
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
		LabelFixup_t1270  L_8 = (( LabelFixup_t1270  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>
#include "mscorlib_System_Reflection_MonoProperty_Getter_2_gen.h"
// System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>
#include "mscorlib_System_Reflection_MonoProperty_Getter_2_genMethodDeclarations.h"
// System.Void System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void Getter_2__ctor_m17348_gshared (Getter_2_t2322 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// R System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::Invoke(T)
extern "C" Object_t * Getter_2_Invoke_m17349_gshared (Getter_2_t2322 * __this, Object_t * ____this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Getter_2_Invoke_m17349((Getter_2_t2322 *)__this->___prev_9,____this, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ____this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,____this,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ____this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,____this,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(____this,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * Getter_2_BeginInvoke_m17350_gshared (Getter_2_t2322 * __this, Object_t * ____this, AsyncCallback_t9 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ____this;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// R System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Getter_2_EndInvoke_m17351_gshared (Getter_2_t2322 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// System.Reflection.MonoProperty/StaticGetter`1<System.Object>
#include "mscorlib_System_Reflection_MonoProperty_StaticGetter_1_gen.h"
// System.Reflection.MonoProperty/StaticGetter`1<System.Object>
#include "mscorlib_System_Reflection_MonoProperty_StaticGetter_1_genMethodDeclarations.h"
// System.Void System.Reflection.MonoProperty/StaticGetter`1<System.Object>::.ctor(System.Object,System.IntPtr)
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern "C" void StaticGetter_1__ctor_m17352_gshared (StaticGetter_1_t2323 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::Invoke()
extern "C" Object_t * StaticGetter_1_Invoke_m17353_gshared (StaticGetter_1_t2323 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		StaticGetter_1_Invoke_m17353((StaticGetter_1_t2323 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if ((__this->___m_target_2 != NULL || MethodHasParameters((MethodInfo*)(__this->___method_3.___m_value_0))) && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Reflection.MonoProperty/StaticGetter`1<System.Object>::BeginInvoke(System.AsyncCallback,System.Object)
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
extern "C" Object_t * StaticGetter_1_BeginInvoke_m17354_gshared (StaticGetter_1_t2323 * __this, AsyncCallback_t9 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * StaticGetter_1_EndInvoke_m17355_gshared (StaticGetter_1_t2323 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// System.Array/InternalEnumerator`1<System.DateTime>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_99.h"
// System.Array/InternalEnumerator`1<System.DateTime>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_99MethodDeclarations.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.DateTime>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.DateTime>(System.Int32)
extern "C" DateTime_t538  Array_InternalArray__get_Item_TisDateTime_t538_m18351_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisDateTime_t538_m18351(__this, p0, method) (( DateTime_t538  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisDateTime_t538_m18351_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<System.DateTime>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m17376_gshared (InternalEnumerator_1_t2328 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.DateTime>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17377_gshared (InternalEnumerator_1_t2328 * __this, const MethodInfo* method)
{
	{
		DateTime_t538  L_0 = (( DateTime_t538  (*) (InternalEnumerator_1_t2328 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2328 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		DateTime_t538  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.DateTime>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m17378_gshared (InternalEnumerator_1_t2328 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.DateTime>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m17379_gshared (InternalEnumerator_1_t2328 * __this, const MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.DateTime>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t881_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2793;
extern Il2CppCodeGenString* _stringLiteral2794;
extern "C" DateTime_t538  InternalEnumerator_1_get_Current_m17380_gshared (InternalEnumerator_1_t2328 * __this, const MethodInfo* method)
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
		DateTime_t538  L_8 = (( DateTime_t538  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Array/InternalEnumerator`1<System.Decimal>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_100.h"
// System.Array/InternalEnumerator`1<System.Decimal>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_100MethodDeclarations.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.Decimal>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Decimal>(System.Int32)
extern "C" Decimal_t1072  Array_InternalArray__get_Item_TisDecimal_t1072_m18362_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisDecimal_t1072_m18362(__this, p0, method) (( Decimal_t1072  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisDecimal_t1072_m18362_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<System.Decimal>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m17381_gshared (InternalEnumerator_1_t2329 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Decimal>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17382_gshared (InternalEnumerator_1_t2329 * __this, const MethodInfo* method)
{
	{
		Decimal_t1072  L_0 = (( Decimal_t1072  (*) (InternalEnumerator_1_t2329 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2329 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Decimal_t1072  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Decimal>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m17383_gshared (InternalEnumerator_1_t2329 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Decimal>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m17384_gshared (InternalEnumerator_1_t2329 * __this, const MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.Decimal>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t881_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2793;
extern Il2CppCodeGenString* _stringLiteral2794;
extern "C" Decimal_t1072  InternalEnumerator_1_get_Current_m17385_gshared (InternalEnumerator_1_t2329 * __this, const MethodInfo* method)
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
		Decimal_t1072  L_8 = (( Decimal_t1072  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Array/InternalEnumerator`1<System.TimeSpan>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_101.h"
// System.Array/InternalEnumerator`1<System.TimeSpan>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_101MethodDeclarations.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.TimeSpan>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.TimeSpan>(System.Int32)
extern "C" TimeSpan_t959  Array_InternalArray__get_Item_TisTimeSpan_t959_m18373_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisTimeSpan_t959_m18373(__this, p0, method) (( TimeSpan_t959  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisTimeSpan_t959_m18373_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<System.TimeSpan>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m17386_gshared (InternalEnumerator_1_t2330 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.TimeSpan>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17387_gshared (InternalEnumerator_1_t2330 * __this, const MethodInfo* method)
{
	{
		TimeSpan_t959  L_0 = (( TimeSpan_t959  (*) (InternalEnumerator_1_t2330 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2330 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		TimeSpan_t959  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.TimeSpan>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m17388_gshared (InternalEnumerator_1_t2330 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.TimeSpan>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m17389_gshared (InternalEnumerator_1_t2330 * __this, const MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.TimeSpan>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t881_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2793;
extern Il2CppCodeGenString* _stringLiteral2794;
extern "C" TimeSpan_t959  InternalEnumerator_1_get_Current_m17390_gshared (InternalEnumerator_1_t2330 * __this, const MethodInfo* method)
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
		TimeSpan_t959  L_8 = (( TimeSpan_t959  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_102.h"
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_102MethodDeclarations.h"
// System.Runtime.Serialization.Formatters.Binary.TypeTag
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Type.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.Serialization.Formatters.Binary.TypeTag>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.Serialization.Formatters.Binary.TypeTag>(System.Int32)
extern "C" uint8_t Array_InternalArray__get_Item_TisTypeTag_t1468_m18384_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisTypeTag_t1468_m18384(__this, p0, method) (( uint8_t (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisTypeTag_t1468_m18384_gshared)(__this, p0, method)
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::.ctor(System.Array)
// System.Array
#include "mscorlib_System_Array.h"
extern "C" void InternalEnumerator_1__ctor_m17391_gshared (InternalEnumerator_1_t2331 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17392_gshared (InternalEnumerator_1_t2331 * __this, const MethodInfo* method)
{
	{
		uint8_t L_0 = (( uint8_t (*) (InternalEnumerator_1_t2331 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2331 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		uint8_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m17393_gshared (InternalEnumerator_1_t2331 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::MoveNext()
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern "C" bool InternalEnumerator_1_MoveNext_m17394_gshared (InternalEnumerator_1_t2331 * __this, const MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::get_Current()
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern TypeInfo* InvalidOperationException_t881_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2793;
extern Il2CppCodeGenString* _stringLiteral2794;
extern "C" uint8_t InternalEnumerator_1_get_Current_m17395_gshared (InternalEnumerator_1_t2331 * __this, const MethodInfo* method)
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
		uint8_t L_8 = (( uint8_t (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// System.Collections.Generic.GenericComparer`1<System.DateTime>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_gen.h"
// System.Collections.Generic.GenericComparer`1<System.DateTime>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_genMethodDeclarations.h"
// System.Collections.Generic.Comparer`1<System.DateTime>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_9MethodDeclarations.h"
// System.Void System.Collections.Generic.GenericComparer`1<System.DateTime>::.ctor()
extern "C" void GenericComparer_1__ctor_m10707_gshared (GenericComparer_1_t1762 * __this, const MethodInfo* method)
{
	{
		NullCheck((Comparer_1_t2338 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (Comparer_1_t2338 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Comparer_1_t2338 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericComparer`1<System.DateTime>::Compare(T,T)
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.DateTime
#include "mscorlib_System_DateTimeMethodDeclarations.h"
extern "C" int32_t GenericComparer_1_Compare_m17494_gshared (GenericComparer_1_t1762 * __this, DateTime_t538  ___x, DateTime_t538  ___y, const MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		DateTime_t538  L_0 = ___x;
		goto IL_001e;
	}
	{
		DateTime_t538  L_1 = ___y;
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
		DateTime_t538  L_2 = ___y;
		goto IL_002b;
	}
	{
		return 1;
	}

IL_002b:
	{
		DateTime_t538  L_3 = ___y;
		NullCheck((DateTime_t538 *)(&___x));
		int32_t L_4 = DateTime_CompareTo_m10164((DateTime_t538 *)(&___x), (DateTime_t538 )L_3, NULL);
		return L_4;
	}
}
// System.Collections.Generic.Comparer`1<System.DateTime>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_9.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_9.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_9MethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.Void System.Collections.Generic.Comparer`1<System.DateTime>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void Comparer_1__ctor_m17495_gshared (Comparer_1_t2338 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m355((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<System.DateTime>::.cctor()
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
extern const Il2CppType* GenericComparer_1_t2538_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t645_il2cpp_TypeInfo_var;
extern "C" void Comparer_1__cctor_m17496_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
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
		((Comparer_1_t2338_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((Comparer_1_t2338 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_005e;
	}

IL_0054:
	{
		DefaultComparer_t2339 * L_8 = (DefaultComparer_t2339 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t2339 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((Comparer_1_t2338_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_005e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<System.DateTime>::System.Collections.IComparer.Compare(System.Object,System.Object)
// System.Object
#include "mscorlib_System_Object.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentException_t402_il2cpp_TypeInfo_var;
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m17497_gshared (Comparer_1_t2338 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
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
		NullCheck((Comparer_1_t2338 *)__this);
		int32_t L_7 = (int32_t)VirtFuncInvoker2< int32_t, DateTime_t538 , DateTime_t538  >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.DateTime>::Compare(T,T) */, (Comparer_1_t2338 *)__this, (DateTime_t538 )((*(DateTime_t538 *)((DateTime_t538 *)UnBox (L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (DateTime_t538 )((*(DateTime_t538 *)((DateTime_t538 *)UnBox (L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_7;
	}

IL_0045:
	{
		ArgumentException_t402 * L_8 = (ArgumentException_t402 *)il2cpp_codegen_object_new (ArgumentException_t402_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9866(L_8, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_8);
	}
}
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.DateTime>::get_Default()
extern "C" Comparer_1_t2338 * Comparer_1_get_Default_m17498_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Comparer_1_t2338 * L_0 = ((Comparer_1_t2338_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>::.ctor()
extern "C" void DefaultComparer__ctor_m17499_gshared (DefaultComparer_t2339 * __this, const MethodInfo* method)
{
	{
		NullCheck((Comparer_1_t2338 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (Comparer_1_t2338 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Comparer_1_t2338 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>::Compare(T,T)
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* IComparable_t1734_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t402_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2798;
extern "C" int32_t DefaultComparer_Compare_m17500_gshared (DefaultComparer_t2339 * __this, DateTime_t538  ___x, DateTime_t538  ___y, const MethodInfo* method)
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
		DateTime_t538  L_0 = ___x;
		goto IL_001e;
	}
	{
		DateTime_t538  L_1 = ___y;
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
		DateTime_t538  L_2 = ___y;
		goto IL_002b;
	}
	{
		return 1;
	}

IL_002b:
	{
		DateTime_t538  L_3 = ___x;
		DateTime_t538  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_4);
		if (!((Object_t*)IsInst(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))
		{
			goto IL_004d;
		}
	}
	{
		DateTime_t538  L_6 = ___x;
		DateTime_t538  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_7);
		DateTime_t538  L_9 = ___y;
		NullCheck((Object_t*)((Object_t*)Castclass(L_8, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))));
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, DateTime_t538  >::Invoke(0 /* System.Int32 System.IComparable`1<System.DateTime>::CompareTo(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)((Object_t*)Castclass(L_8, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))), (DateTime_t538 )L_9);
		return L_10;
	}

IL_004d:
	{
		DateTime_t538  L_11 = ___x;
		DateTime_t538  L_12 = L_11;
		Object_t * L_13 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_12);
		if (!((Object_t *)IsInst(L_13, IComparable_t1734_il2cpp_TypeInfo_var)))
		{
			goto IL_0074;
		}
	}
	{
		DateTime_t538  L_14 = ___x;
		DateTime_t538  L_15 = L_14;
		Object_t * L_16 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_15);
		DateTime_t538  L_17 = ___y;
		DateTime_t538  L_18 = L_17;
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
// System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer_.h"
// System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer_MethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.DateTime>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_11MethodDeclarations.h"
// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>::.ctor()
extern "C" void GenericEqualityComparer_1__ctor_m10708_gshared (GenericEqualityComparer_1_t1763 * __this, const MethodInfo* method)
{
	{
		NullCheck((EqualityComparer_1_t2340 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (EqualityComparer_1_t2340 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t2340 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>::GetHashCode(T)
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.DateTime
#include "mscorlib_System_DateTimeMethodDeclarations.h"
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m17501_gshared (GenericEqualityComparer_1_t1763 * __this, DateTime_t538  ___obj, const MethodInfo* method)
{
	{
		DateTime_t538  L_0 = ___obj;
		goto IL_000d;
	}
	{
		return 0;
	}

IL_000d:
	{
		NullCheck((DateTime_t538 *)(&___obj));
		int32_t L_1 = DateTime_GetHashCode_m10171((DateTime_t538 *)(&___obj), NULL);
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m17502_gshared (GenericEqualityComparer_1_t1763 * __this, DateTime_t538  ___x, DateTime_t538  ___y, const MethodInfo* method)
{
	{
		DateTime_t538  L_0 = ___x;
		goto IL_0015;
	}
	{
		DateTime_t538  L_1 = ___y;
		DateTime_t538  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return ((((Object_t*)(Object_t *)L_3) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0015:
	{
		DateTime_t538  L_4 = ___y;
		NullCheck((DateTime_t538 *)(&___x));
		bool L_5 = DateTime_Equals_m10165((DateTime_t538 *)(&___x), (DateTime_t538 )L_4, NULL);
		return L_5;
	}
}
// System.Collections.Generic.EqualityComparer`1<System.DateTime>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_11.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_11.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_11MethodDeclarations.h"
// System.Void System.Collections.Generic.EqualityComparer`1<System.DateTime>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void EqualityComparer_1__ctor_m17503_gshared (EqualityComparer_1_t2340 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m355((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.DateTime>::.cctor()
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
extern const Il2CppType* GenericEqualityComparer_1_t2537_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t645_il2cpp_TypeInfo_var;
extern "C" void EqualityComparer_1__cctor_m17504_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
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
		((EqualityComparer_1_t2340_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((EqualityComparer_1_t2340 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_005e;
	}

IL_0054:
	{
		DefaultComparer_t2341 * L_8 = (DefaultComparer_t2341 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t2341 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((EqualityComparer_1_t2340_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_005e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.DateTime>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Object
#include "mscorlib_System_Object.h"
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m17505_gshared (EqualityComparer_1_t2340 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		NullCheck((EqualityComparer_1_t2340 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, DateTime_t538  >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.DateTime>::GetHashCode(T) */, (EqualityComparer_1_t2340 *)__this, (DateTime_t538 )((*(DateTime_t538 *)((DateTime_t538 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.DateTime>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m17506_gshared (EqualityComparer_1_t2340 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		NullCheck((EqualityComparer_1_t2340 *)__this);
		bool L_2 = (bool)VirtFuncInvoker2< bool, DateTime_t538 , DateTime_t538  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.DateTime>::Equals(T,T) */, (EqualityComparer_1_t2340 *)__this, (DateTime_t538 )((*(DateTime_t538 *)((DateTime_t538 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (DateTime_t538 )((*(DateTime_t538 *)((DateTime_t538 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.DateTime>::get_Default()
extern "C" EqualityComparer_1_t2340 * EqualityComparer_1_get_Default_m17507_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t2340 * L_0 = ((EqualityComparer_1_t2340_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::.ctor()
extern "C" void DefaultComparer__ctor_m17508_gshared (DefaultComparer_t2341 * __this, const MethodInfo* method)
{
	{
		NullCheck((EqualityComparer_1_t2340 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (EqualityComparer_1_t2340 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t2340 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::GetHashCode(T)
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.DateTime
#include "mscorlib_System_DateTimeMethodDeclarations.h"
extern "C" int32_t DefaultComparer_GetHashCode_m17509_gshared (DefaultComparer_t2341 * __this, DateTime_t538  ___obj, const MethodInfo* method)
{
	{
		DateTime_t538  L_0 = ___obj;
		goto IL_000d;
	}
	{
		return 0;
	}

IL_000d:
	{
		NullCheck((DateTime_t538 *)(&___obj));
		int32_t L_1 = DateTime_GetHashCode_m10171((DateTime_t538 *)(&___obj), NULL);
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m17510_gshared (DefaultComparer_t2341 * __this, DateTime_t538  ___x, DateTime_t538  ___y, const MethodInfo* method)
{
	{
		DateTime_t538  L_0 = ___x;
		goto IL_0015;
	}
	{
		DateTime_t538  L_1 = ___y;
		DateTime_t538  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return ((((Object_t*)(Object_t *)L_3) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0015:
	{
		DateTime_t538  L_4 = ___y;
		DateTime_t538  L_5 = L_4;
		Object_t * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_5);
		NullCheck((DateTime_t538 *)(&___x));
		bool L_7 = DateTime_Equals_m10169((DateTime_t538 *)(&___x), (Object_t *)L_6, NULL);
		return L_7;
	}
}
// System.Collections.Generic.GenericComparer`1<System.DateTimeOffset>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_gen_0.h"
// System.Collections.Generic.GenericComparer`1<System.DateTimeOffset>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_gen_0MethodDeclarations.h"
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"
// System.Collections.Generic.Comparer`1<System.DateTimeOffset>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_10MethodDeclarations.h"
// System.Void System.Collections.Generic.GenericComparer`1<System.DateTimeOffset>::.ctor()
extern "C" void GenericComparer_1__ctor_m10709_gshared (GenericComparer_1_t1764 * __this, const MethodInfo* method)
{
	{
		NullCheck((Comparer_1_t2342 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (Comparer_1_t2342 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Comparer_1_t2342 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericComparer`1<System.DateTimeOffset>::Compare(T,T)
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffsetMethodDeclarations.h"
extern "C" int32_t GenericComparer_1_Compare_m17511_gshared (GenericComparer_1_t1764 * __this, DateTimeOffset_t1625  ___x, DateTimeOffset_t1625  ___y, const MethodInfo* method)
{
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
		DateTimeOffset_t1625  L_3 = ___y;
		NullCheck((DateTimeOffset_t1625 *)(&___x));
		int32_t L_4 = DateTimeOffset_CompareTo_m10205((DateTimeOffset_t1625 *)(&___x), (DateTimeOffset_t1625 )L_3, NULL);
		return L_4;
	}
}
// System.Collections.Generic.Comparer`1<System.DateTimeOffset>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_10.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_10.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_10MethodDeclarations.h"
// System.Void System.Collections.Generic.Comparer`1<System.DateTimeOffset>::.ctor()
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern "C" void Comparer_1__ctor_m17512_gshared (Comparer_1_t2342 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m355((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<System.DateTimeOffset>::.cctor()
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
extern const Il2CppType* GenericComparer_1_t2538_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t645_il2cpp_TypeInfo_var;
extern "C" void Comparer_1__cctor_m17513_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
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
		((Comparer_1_t2342_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((Comparer_1_t2342 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_005e;
	}

IL_0054:
	{
		DefaultComparer_t2343 * L_8 = (DefaultComparer_t2343 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t2343 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((Comparer_1_t2342_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_005e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<System.DateTimeOffset>::System.Collections.IComparer.Compare(System.Object,System.Object)
// System.Object
#include "mscorlib_System_Object.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern TypeInfo* ArgumentException_t402_il2cpp_TypeInfo_var;
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m17514_gshared (Comparer_1_t2342 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
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
		NullCheck((Comparer_1_t2342 *)__this);
		int32_t L_7 = (int32_t)VirtFuncInvoker2< int32_t, DateTimeOffset_t1625 , DateTimeOffset_t1625  >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.DateTimeOffset>::Compare(T,T) */, (Comparer_1_t2342 *)__this, (DateTimeOffset_t1625 )((*(DateTimeOffset_t1625 *)((DateTimeOffset_t1625 *)UnBox (L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (DateTimeOffset_t1625 )((*(DateTimeOffset_t1625 *)((DateTimeOffset_t1625 *)UnBox (L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_7;
	}

IL_0045:
	{
		ArgumentException_t402 * L_8 = (ArgumentException_t402 *)il2cpp_codegen_object_new (ArgumentException_t402_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9866(L_8, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_8);
	}
}
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.DateTimeOffset>::get_Default()
extern "C" Comparer_1_t2342 * Comparer_1_get_Default_m17515_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Comparer_1_t2342 * L_0 = ((Comparer_1_t2342_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
