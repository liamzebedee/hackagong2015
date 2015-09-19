#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_11.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m12140_gshared (InternalEnumerator_1_t1883 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m12140(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1883 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m12140_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12141_gshared (InternalEnumerator_1_t1883 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12141(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1883 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12141_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12142_gshared (InternalEnumerator_1_t1883 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m12142(__this, method) (( void (*) (InternalEnumerator_1_t1883 *, const MethodInfo*))InternalEnumerator_1_Dispose_m12142_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m12143_gshared (InternalEnumerator_1_t1883 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m12143(__this, method) (( bool (*) (InternalEnumerator_1_t1883 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m12143_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::get_Current()
extern "C" DictionaryEntry_t1050  InternalEnumerator_1_get_Current_m12144_gshared (InternalEnumerator_1_t1883 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m12144(__this, method) (( DictionaryEntry_t1050  (*) (InternalEnumerator_1_t1883 *, const MethodInfo*))InternalEnumerator_1_get_Current_m12144_gshared)(__this, method)
