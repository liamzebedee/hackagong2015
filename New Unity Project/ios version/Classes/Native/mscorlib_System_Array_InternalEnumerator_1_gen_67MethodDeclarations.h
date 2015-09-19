#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.UInt64>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_67.h"

// System.Void System.Array/InternalEnumerator`1<System.UInt64>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m17178_gshared (InternalEnumerator_1_t2287 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m17178(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2287 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m17178_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.UInt64>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17179_gshared (InternalEnumerator_1_t2287 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17179(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2287 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17179_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.UInt64>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m17180_gshared (InternalEnumerator_1_t2287 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m17180(__this, method) (( void (*) (InternalEnumerator_1_t2287 *, const MethodInfo*))InternalEnumerator_1_Dispose_m17180_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.UInt64>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m17181_gshared (InternalEnumerator_1_t2287 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m17181(__this, method) (( bool (*) (InternalEnumerator_1_t2287 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m17181_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.UInt64>::get_Current()
extern "C" uint64_t InternalEnumerator_1_get_Current_m17182_gshared (InternalEnumerator_1_t2287 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m17182(__this, method) (( uint64_t (*) (InternalEnumerator_1_t2287 *, const MethodInfo*))InternalEnumerator_1_get_Current_m17182_gshared)(__this, method)
