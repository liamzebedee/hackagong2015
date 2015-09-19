#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t1911;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1901;
// System.Object
struct Object_t;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m12455_gshared (ShimEnumerator_t1911 * __this, Dictionary_2_t1901 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m12455(__this, ___host, method) (( void (*) (ShimEnumerator_t1911 *, Dictionary_2_t1901 *, const MethodInfo*))ShimEnumerator__ctor_m12455_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m12456_gshared (ShimEnumerator_t1911 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m12456(__this, method) (( bool (*) (ShimEnumerator_t1911 *, const MethodInfo*))ShimEnumerator_MoveNext_m12456_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t1050  ShimEnumerator_get_Entry_m12457_gshared (ShimEnumerator_t1911 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m12457(__this, method) (( DictionaryEntry_t1050  (*) (ShimEnumerator_t1911 *, const MethodInfo*))ShimEnumerator_get_Entry_m12457_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m12458_gshared (ShimEnumerator_t1911 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m12458(__this, method) (( Object_t * (*) (ShimEnumerator_t1911 *, const MethodInfo*))ShimEnumerator_get_Key_m12458_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m12459_gshared (ShimEnumerator_t1911 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m12459(__this, method) (( Object_t * (*) (ShimEnumerator_t1911 *, const MethodInfo*))ShimEnumerator_get_Value_m12459_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m12460_gshared (ShimEnumerator_t1911 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m12460(__this, method) (( Object_t * (*) (ShimEnumerator_t1911 *, const MethodInfo*))ShimEnumerator_get_Current_m12460_gshared)(__this, method)
