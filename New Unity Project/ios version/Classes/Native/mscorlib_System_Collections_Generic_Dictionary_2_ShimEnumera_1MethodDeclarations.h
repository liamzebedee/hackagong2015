#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t1961;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1952;
// System.Object
struct Object_t;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m13075_gshared (ShimEnumerator_t1961 * __this, Dictionary_2_t1952 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m13075(__this, ___host, method) (( void (*) (ShimEnumerator_t1961 *, Dictionary_2_t1952 *, const MethodInfo*))ShimEnumerator__ctor_m13075_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m13076_gshared (ShimEnumerator_t1961 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m13076(__this, method) (( bool (*) (ShimEnumerator_t1961 *, const MethodInfo*))ShimEnumerator_MoveNext_m13076_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1050  ShimEnumerator_get_Entry_m13077_gshared (ShimEnumerator_t1961 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m13077(__this, method) (( DictionaryEntry_t1050  (*) (ShimEnumerator_t1961 *, const MethodInfo*))ShimEnumerator_get_Entry_m13077_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m13078_gshared (ShimEnumerator_t1961 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m13078(__this, method) (( Object_t * (*) (ShimEnumerator_t1961 *, const MethodInfo*))ShimEnumerator_get_Key_m13078_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m13079_gshared (ShimEnumerator_t1961 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m13079(__this, method) (( Object_t * (*) (ShimEnumerator_t1961 *, const MethodInfo*))ShimEnumerator_get_Value_m13079_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m13080_gshared (ShimEnumerator_t1961 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m13080(__this, method) (( Object_t * (*) (ShimEnumerator_t1961 *, const MethodInfo*))ShimEnumerator_get_Current_m13080_gshared)(__this, method)
