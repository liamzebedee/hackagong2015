#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t1885;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1874;
// System.Object
struct Object_t;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m12149_gshared (ShimEnumerator_t1885 * __this, Dictionary_2_t1874 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m12149(__this, ___host, method) (( void (*) (ShimEnumerator_t1885 *, Dictionary_2_t1874 *, const MethodInfo*))ShimEnumerator__ctor_m12149_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m12150_gshared (ShimEnumerator_t1885 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m12150(__this, method) (( bool (*) (ShimEnumerator_t1885 *, const MethodInfo*))ShimEnumerator_MoveNext_m12150_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1050  ShimEnumerator_get_Entry_m12151_gshared (ShimEnumerator_t1885 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m12151(__this, method) (( DictionaryEntry_t1050  (*) (ShimEnumerator_t1885 *, const MethodInfo*))ShimEnumerator_get_Entry_m12151_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m12152_gshared (ShimEnumerator_t1885 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m12152(__this, method) (( Object_t * (*) (ShimEnumerator_t1885 *, const MethodInfo*))ShimEnumerator_get_Key_m12152_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m12153_gshared (ShimEnumerator_t1885 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m12153(__this, method) (( Object_t * (*) (ShimEnumerator_t1885 *, const MethodInfo*))ShimEnumerator_get_Value_m12153_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m12154_gshared (ShimEnumerator_t1885 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m12154(__this, method) (( Object_t * (*) (ShimEnumerator_t1885 *, const MethodInfo*))ShimEnumerator_get_Current_m12154_gshared)(__this, method)
