#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.UInt32>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_52.h"

// System.Void System.Array/InternalEnumerator`1<System.UInt32>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m16798_gshared (InternalEnumerator_1_t2246 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m16798(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2246 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m16798_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.UInt32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16799_gshared (InternalEnumerator_1_t2246 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16799(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2246 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16799_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.UInt32>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m16800_gshared (InternalEnumerator_1_t2246 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m16800(__this, method) (( void (*) (InternalEnumerator_1_t2246 *, const MethodInfo*))InternalEnumerator_1_Dispose_m16800_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.UInt32>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m16801_gshared (InternalEnumerator_1_t2246 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m16801(__this, method) (( bool (*) (InternalEnumerator_1_t2246 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m16801_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.UInt32>::get_Current()
extern "C" uint32_t InternalEnumerator_1_get_Current_m16802_gshared (InternalEnumerator_1_t2246 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m16802(__this, method) (( uint32_t (*) (InternalEnumerator_1_t2246 *, const MethodInfo*))InternalEnumerator_1_get_Current_m16802_gshared)(__this, method)
