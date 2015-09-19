#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
struct Dictionary_2_t2207;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__11.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"
// UnityEngine.TextEditor/TextEditOp
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m16495_gshared (Enumerator_t2214 * __this, Dictionary_2_t2207 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m16495(__this, ___dictionary, method) (( void (*) (Enumerator_t2214 *, Dictionary_2_t2207 *, const MethodInfo*))Enumerator__ctor_m16495_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m16496_gshared (Enumerator_t2214 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m16496(__this, method) (( Object_t * (*) (Enumerator_t2214 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m16496_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1050  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m16497_gshared (Enumerator_t2214 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m16497(__this, method) (( DictionaryEntry_t1050  (*) (Enumerator_t2214 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m16497_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m16498_gshared (Enumerator_t2214 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m16498(__this, method) (( Object_t * (*) (Enumerator_t2214 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m16498_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m16499_gshared (Enumerator_t2214 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m16499(__this, method) (( Object_t * (*) (Enumerator_t2214 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m16499_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::MoveNext()
extern "C" bool Enumerator_MoveNext_m16500_gshared (Enumerator_t2214 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m16500(__this, method) (( bool (*) (Enumerator_t2214 *, const MethodInfo*))Enumerator_MoveNext_m16500_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Current()
extern "C" KeyValuePair_2_t2209  Enumerator_get_Current_m16501_gshared (Enumerator_t2214 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m16501(__this, method) (( KeyValuePair_2_t2209  (*) (Enumerator_t2214 *, const MethodInfo*))Enumerator_get_Current_m16501_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m16502_gshared (Enumerator_t2214 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m16502(__this, method) (( Object_t * (*) (Enumerator_t2214 *, const MethodInfo*))Enumerator_get_CurrentKey_m16502_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m16503_gshared (Enumerator_t2214 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m16503(__this, method) (( int32_t (*) (Enumerator_t2214 *, const MethodInfo*))Enumerator_get_CurrentValue_m16503_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::VerifyState()
extern "C" void Enumerator_VerifyState_m16504_gshared (Enumerator_t2214 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m16504(__this, method) (( void (*) (Enumerator_t2214 *, const MethodInfo*))Enumerator_VerifyState_m16504_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m16505_gshared (Enumerator_t2214 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m16505(__this, method) (( void (*) (Enumerator_t2214 *, const MethodInfo*))Enumerator_VerifyCurrent_m16505_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::Dispose()
extern "C" void Enumerator_Dispose_m16506_gshared (Enumerator_t2214 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m16506(__this, method) (( void (*) (Enumerator_t2214 *, const MethodInfo*))Enumerator_Dispose_m16506_gshared)(__this, method)
