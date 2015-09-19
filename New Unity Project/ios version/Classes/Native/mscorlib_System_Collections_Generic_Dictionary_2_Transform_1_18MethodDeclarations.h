#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>
struct Transform_1_t2208;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t8;
// System.AsyncCallback
struct AsyncCallback_t9;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// UnityEngine.TextEditor/TextEditOp
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m16511_gshared (Transform_1_t2208 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m16511(__this, ___object, ___method, method) (( void (*) (Transform_1_t2208 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m16511_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t1050  Transform_1_Invoke_m16512_gshared (Transform_1_t2208 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m16512(__this, ___key, ___value, method) (( DictionaryEntry_t1050  (*) (Transform_1_t2208 *, Object_t *, int32_t, const MethodInfo*))Transform_1_Invoke_m16512_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m16513_gshared (Transform_1_t2208 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t9 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m16513(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2208 *, Object_t *, int32_t, AsyncCallback_t9 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m16513_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t1050  Transform_1_EndInvoke_m16514_gshared (Transform_1_t2208 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m16514(__this, ___result, method) (( DictionaryEntry_t1050  (*) (Transform_1_t2208 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m16514_gshared)(__this, ___result, method)
