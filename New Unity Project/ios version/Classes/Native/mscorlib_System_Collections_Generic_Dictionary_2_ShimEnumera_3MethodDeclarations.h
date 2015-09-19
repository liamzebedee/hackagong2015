#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>
struct ShimEnumerator_t2265;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2255;
// System.Object
struct Object_t;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m16991_gshared (ShimEnumerator_t2265 * __this, Dictionary_2_t2255 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m16991(__this, ___host, method) (( void (*) (ShimEnumerator_t2265 *, Dictionary_2_t2255 *, const MethodInfo*))ShimEnumerator__ctor_m16991_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m16992_gshared (ShimEnumerator_t2265 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m16992(__this, method) (( bool (*) (ShimEnumerator_t2265 *, const MethodInfo*))ShimEnumerator_MoveNext_m16992_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Entry()
extern "C" DictionaryEntry_t1050  ShimEnumerator_get_Entry_m16993_gshared (ShimEnumerator_t2265 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m16993(__this, method) (( DictionaryEntry_t1050  (*) (ShimEnumerator_t2265 *, const MethodInfo*))ShimEnumerator_get_Entry_m16993_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m16994_gshared (ShimEnumerator_t2265 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m16994(__this, method) (( Object_t * (*) (ShimEnumerator_t2265 *, const MethodInfo*))ShimEnumerator_get_Key_m16994_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m16995_gshared (ShimEnumerator_t2265 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m16995(__this, method) (( Object_t * (*) (ShimEnumerator_t2265 *, const MethodInfo*))ShimEnumerator_get_Value_m16995_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m16996_gshared (ShimEnumerator_t2265 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m16996(__this, method) (( Object_t * (*) (ShimEnumerator_t2265 *, const MethodInfo*))ShimEnumerator_get_Current_m16996_gshared)(__this, method)
