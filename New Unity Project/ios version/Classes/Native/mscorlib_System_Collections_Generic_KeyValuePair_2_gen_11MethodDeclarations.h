#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"
// UnityEngine.TextEditor/TextEditOp
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"

// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(TKey,TValue)
extern "C" void KeyValuePair_2__ctor_m16465_gshared (KeyValuePair_2_t2209 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define KeyValuePair_2__ctor_m16465(__this, ___key, ___value, method) (( void (*) (KeyValuePair_2_t2209 *, Object_t *, int32_t, const MethodInfo*))KeyValuePair_2__ctor_m16465_gshared)(__this, ___key, ___value, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Key()
extern "C" Object_t * KeyValuePair_2_get_Key_m16466_gshared (KeyValuePair_2_t2209 * __this, const MethodInfo* method);
#define KeyValuePair_2_get_Key_m16466(__this, method) (( Object_t * (*) (KeyValuePair_2_t2209 *, const MethodInfo*))KeyValuePair_2_get_Key_m16466_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m16467_gshared (KeyValuePair_2_t2209 * __this, Object_t * ___value, const MethodInfo* method);
#define KeyValuePair_2_set_Key_m16467(__this, ___value, method) (( void (*) (KeyValuePair_2_t2209 *, Object_t *, const MethodInfo*))KeyValuePair_2_set_Key_m16467_gshared)(__this, ___value, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Value()
extern "C" int32_t KeyValuePair_2_get_Value_m16468_gshared (KeyValuePair_2_t2209 * __this, const MethodInfo* method);
#define KeyValuePair_2_get_Value_m16468(__this, method) (( int32_t (*) (KeyValuePair_2_t2209 *, const MethodInfo*))KeyValuePair_2_get_Value_m16468_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m16469_gshared (KeyValuePair_2_t2209 * __this, int32_t ___value, const MethodInfo* method);
#define KeyValuePair_2_set_Value_m16469(__this, ___value, method) (( void (*) (KeyValuePair_2_t2209 *, int32_t, const MethodInfo*))KeyValuePair_2_set_Value_m16469_gshared)(__this, ___value, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ToString()
extern "C" String_t* KeyValuePair_2_ToString_m16470_gshared (KeyValuePair_2_t2209 * __this, const MethodInfo* method);
#define KeyValuePair_2_ToString_m16470(__this, method) (( String_t* (*) (KeyValuePair_2_t2209 *, const MethodInfo*))KeyValuePair_2_ToString_m16470_gshared)(__this, method)
