#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_9.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m12085_gshared (InternalEnumerator_1_t1877 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m12085(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1877 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m12085_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12086_gshared (InternalEnumerator_1_t1877 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12086(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1877 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12086_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12087_gshared (InternalEnumerator_1_t1877 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m12087(__this, method) (( void (*) (InternalEnumerator_1_t1877 *, const MethodInfo*))InternalEnumerator_1_Dispose_m12087_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m12088_gshared (InternalEnumerator_1_t1877 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m12088(__this, method) (( bool (*) (InternalEnumerator_1_t1877 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m12088_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t1876  InternalEnumerator_1_get_Current_m12089_gshared (InternalEnumerator_1_t1877 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m12089(__this, method) (( KeyValuePair_2_t1876  (*) (InternalEnumerator_1_t1877 *, const MethodInfo*))InternalEnumerator_1_get_Current_m12089_gshared)(__this, method)
