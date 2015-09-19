#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1952;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__2.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m13051_gshared (Enumerator_t1958 * __this, Dictionary_2_t1952 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m13051(__this, ___dictionary, method) (( void (*) (Enumerator_t1958 *, Dictionary_2_t1952 *, const MethodInfo*))Enumerator__ctor_m13051_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m13052_gshared (Enumerator_t1958 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m13052(__this, method) (( Object_t * (*) (Enumerator_t1958 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m13052_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1050  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13053_gshared (Enumerator_t1958 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13053(__this, method) (( DictionaryEntry_t1050  (*) (Enumerator_t1958 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13053_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13054_gshared (Enumerator_t1958 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13054(__this, method) (( Object_t * (*) (Enumerator_t1958 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13054_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13055_gshared (Enumerator_t1958 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13055(__this, method) (( Object_t * (*) (Enumerator_t1958 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13055_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m13056_gshared (Enumerator_t1958 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m13056(__this, method) (( bool (*) (Enumerator_t1958 *, const MethodInfo*))Enumerator_MoveNext_m13056_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C" KeyValuePair_2_t1954  Enumerator_get_Current_m13057_gshared (Enumerator_t1958 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m13057(__this, method) (( KeyValuePair_2_t1954  (*) (Enumerator_t1958 *, const MethodInfo*))Enumerator_get_Current_m13057_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m13058_gshared (Enumerator_t1958 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m13058(__this, method) (( Object_t * (*) (Enumerator_t1958 *, const MethodInfo*))Enumerator_get_CurrentKey_m13058_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m13059_gshared (Enumerator_t1958 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m13059(__this, method) (( Object_t * (*) (Enumerator_t1958 *, const MethodInfo*))Enumerator_get_CurrentValue_m13059_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m13060_gshared (Enumerator_t1958 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m13060(__this, method) (( void (*) (Enumerator_t1958 *, const MethodInfo*))Enumerator_VerifyState_m13060_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m13061_gshared (Enumerator_t1958 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m13061(__this, method) (( void (*) (Enumerator_t1958 *, const MethodInfo*))Enumerator_VerifyCurrent_m13061_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m13062_gshared (Enumerator_t1958 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m13062(__this, method) (( void (*) (Enumerator_t1958 *, const MethodInfo*))Enumerator_Dispose_m13062_gshared)(__this, method)
