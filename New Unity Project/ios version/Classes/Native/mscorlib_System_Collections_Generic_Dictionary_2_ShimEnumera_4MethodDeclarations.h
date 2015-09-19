#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>
struct ShimEnumerator_t2283;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t982;
// System.Object
struct Object_t;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m17157_gshared (ShimEnumerator_t2283 * __this, Dictionary_2_t982 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m17157(__this, ___host, method) (( void (*) (ShimEnumerator_t2283 *, Dictionary_2_t982 *, const MethodInfo*))ShimEnumerator__ctor_m17157_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m17158_gshared (ShimEnumerator_t2283 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m17158(__this, method) (( bool (*) (ShimEnumerator_t2283 *, const MethodInfo*))ShimEnumerator_MoveNext_m17158_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t1050  ShimEnumerator_get_Entry_m17159_gshared (ShimEnumerator_t2283 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m17159(__this, method) (( DictionaryEntry_t1050  (*) (ShimEnumerator_t2283 *, const MethodInfo*))ShimEnumerator_get_Entry_m17159_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m17160_gshared (ShimEnumerator_t2283 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m17160(__this, method) (( Object_t * (*) (ShimEnumerator_t2283 *, const MethodInfo*))ShimEnumerator_get_Key_m17160_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m17161_gshared (ShimEnumerator_t2283 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m17161(__this, method) (( Object_t * (*) (ShimEnumerator_t2283 *, const MethodInfo*))ShimEnumerator_get_Value_m17161_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m17162_gshared (ShimEnumerator_t2283 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m17162(__this, method) (( Object_t * (*) (ShimEnumerator_t2283 *, const MethodInfo*))ShimEnumerator_get_Current_m17162_gshared)(__this, method)
