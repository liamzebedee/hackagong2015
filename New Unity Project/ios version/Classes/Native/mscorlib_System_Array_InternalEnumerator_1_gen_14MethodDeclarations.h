#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_14.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m12401_gshared (InternalEnumerator_1_t1905 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m12401(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1905 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m12401_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12402_gshared (InternalEnumerator_1_t1905 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12402(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1905 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12402_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12403_gshared (InternalEnumerator_1_t1905 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m12403(__this, method) (( void (*) (InternalEnumerator_1_t1905 *, const MethodInfo*))InternalEnumerator_1_Dispose_m12403_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m12404_gshared (InternalEnumerator_1_t1905 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m12404(__this, method) (( bool (*) (InternalEnumerator_1_t1905 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m12404_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::get_Current()
extern "C" KeyValuePair_2_t1904  InternalEnumerator_1_get_Current_m12405_gshared (InternalEnumerator_1_t1905 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m12405(__this, method) (( KeyValuePair_2_t1904  (*) (InternalEnumerator_1_t1905 *, const MethodInfo*))InternalEnumerator_1_get_Current_m12405_gshared)(__this, method)
