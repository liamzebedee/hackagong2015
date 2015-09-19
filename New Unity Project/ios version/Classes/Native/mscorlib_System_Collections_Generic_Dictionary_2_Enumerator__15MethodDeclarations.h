#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t982;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__15.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_15.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m17133_gshared (Enumerator_t2280 * __this, Dictionary_2_t982 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m17133(__this, ___dictionary, method) (( void (*) (Enumerator_t2280 *, Dictionary_2_t982 *, const MethodInfo*))Enumerator__ctor_m17133_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m17134_gshared (Enumerator_t2280 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m17134(__this, method) (( Object_t * (*) (Enumerator_t2280 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m17134_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1050  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17135_gshared (Enumerator_t2280 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17135(__this, method) (( DictionaryEntry_t1050  (*) (Enumerator_t2280 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17135_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17136_gshared (Enumerator_t2280 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17136(__this, method) (( Object_t * (*) (Enumerator_t2280 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17136_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17137_gshared (Enumerator_t2280 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17137(__this, method) (( Object_t * (*) (Enumerator_t2280 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17137_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m17138_gshared (Enumerator_t2280 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m17138(__this, method) (( bool (*) (Enumerator_t2280 *, const MethodInfo*))Enumerator_MoveNext_m17138_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t2276  Enumerator_get_Current_m17139_gshared (Enumerator_t2280 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m17139(__this, method) (( KeyValuePair_2_t2276  (*) (Enumerator_t2280 *, const MethodInfo*))Enumerator_get_Current_m17139_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m17140_gshared (Enumerator_t2280 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m17140(__this, method) (( int32_t (*) (Enumerator_t2280 *, const MethodInfo*))Enumerator_get_CurrentKey_m17140_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m17141_gshared (Enumerator_t2280 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m17141(__this, method) (( int32_t (*) (Enumerator_t2280 *, const MethodInfo*))Enumerator_get_CurrentValue_m17141_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m17142_gshared (Enumerator_t2280 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m17142(__this, method) (( void (*) (Enumerator_t2280 *, const MethodInfo*))Enumerator_VerifyState_m17142_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m17143_gshared (Enumerator_t2280 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m17143(__this, method) (( void (*) (Enumerator_t2280 *, const MethodInfo*))Enumerator_VerifyCurrent_m17143_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m17144_gshared (Enumerator_t2280 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m17144(__this, method) (( void (*) (Enumerator_t2280 *, const MethodInfo*))Enumerator_Dispose_m17144_gshared)(__this, method)
