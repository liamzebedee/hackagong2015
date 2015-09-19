#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>
struct ShimEnumerator_t2217;
// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
struct Dictionary_2_t2207;
// System.Object
struct Object_t;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m16519_gshared (ShimEnumerator_t2217 * __this, Dictionary_2_t2207 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m16519(__this, ___host, method) (( void (*) (ShimEnumerator_t2217 *, Dictionary_2_t2207 *, const MethodInfo*))ShimEnumerator__ctor_m16519_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m16520_gshared (ShimEnumerator_t2217 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m16520(__this, method) (( bool (*) (ShimEnumerator_t2217 *, const MethodInfo*))ShimEnumerator_MoveNext_m16520_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Entry()
extern "C" DictionaryEntry_t1050  ShimEnumerator_get_Entry_m16521_gshared (ShimEnumerator_t2217 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m16521(__this, method) (( DictionaryEntry_t1050  (*) (ShimEnumerator_t2217 *, const MethodInfo*))ShimEnumerator_get_Entry_m16521_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m16522_gshared (ShimEnumerator_t2217 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m16522(__this, method) (( Object_t * (*) (ShimEnumerator_t2217 *, const MethodInfo*))ShimEnumerator_get_Key_m16522_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m16523_gshared (ShimEnumerator_t2217 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m16523(__this, method) (( Object_t * (*) (ShimEnumerator_t2217 *, const MethodInfo*))ShimEnumerator_get_Value_m16523_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m16524_gshared (ShimEnumerator_t2217 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m16524(__this, method) (( Object_t * (*) (ShimEnumerator_t2217 *, const MethodInfo*))ShimEnumerator_get_Current_m16524_gshared)(__this, method)
