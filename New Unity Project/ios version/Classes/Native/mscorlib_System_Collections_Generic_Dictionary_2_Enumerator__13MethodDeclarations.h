#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2255;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__13.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m16967_gshared (Enumerator_t2262 * __this, Dictionary_2_t2255 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m16967(__this, ___dictionary, method) (( void (*) (Enumerator_t2262 *, Dictionary_2_t2255 *, const MethodInfo*))Enumerator__ctor_m16967_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m16968_gshared (Enumerator_t2262 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m16968(__this, method) (( Object_t * (*) (Enumerator_t2262 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m16968_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1050  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m16969_gshared (Enumerator_t2262 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m16969(__this, method) (( DictionaryEntry_t1050  (*) (Enumerator_t2262 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m16969_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m16970_gshared (Enumerator_t2262 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m16970(__this, method) (( Object_t * (*) (Enumerator_t2262 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m16970_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m16971_gshared (Enumerator_t2262 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m16971(__this, method) (( Object_t * (*) (Enumerator_t2262 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m16971_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::MoveNext()
extern "C" bool Enumerator_MoveNext_m16972_gshared (Enumerator_t2262 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m16972(__this, method) (( bool (*) (Enumerator_t2262 *, const MethodInfo*))Enumerator_MoveNext_m16972_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_Current()
extern "C" KeyValuePair_2_t2257  Enumerator_get_Current_m16973_gshared (Enumerator_t2262 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m16973(__this, method) (( KeyValuePair_2_t2257  (*) (Enumerator_t2262 *, const MethodInfo*))Enumerator_get_Current_m16973_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m16974_gshared (Enumerator_t2262 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m16974(__this, method) (( Object_t * (*) (Enumerator_t2262 *, const MethodInfo*))Enumerator_get_CurrentKey_m16974_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_CurrentValue()
extern "C" bool Enumerator_get_CurrentValue_m16975_gshared (Enumerator_t2262 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m16975(__this, method) (( bool (*) (Enumerator_t2262 *, const MethodInfo*))Enumerator_get_CurrentValue_m16975_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::VerifyState()
extern "C" void Enumerator_VerifyState_m16976_gshared (Enumerator_t2262 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m16976(__this, method) (( void (*) (Enumerator_t2262 *, const MethodInfo*))Enumerator_VerifyState_m16976_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m16977_gshared (Enumerator_t2262 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m16977(__this, method) (( void (*) (Enumerator_t2262 *, const MethodInfo*))Enumerator_VerifyCurrent_m16977_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::Dispose()
extern "C" void Enumerator_Dispose_m16978_gshared (Enumerator_t2262 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m16978(__this, method) (( void (*) (Enumerator_t2262 *, const MethodInfo*))Enumerator_Dispose_m16978_gshared)(__this, method)
