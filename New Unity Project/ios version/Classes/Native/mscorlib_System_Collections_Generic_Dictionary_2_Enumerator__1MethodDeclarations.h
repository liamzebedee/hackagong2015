#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1901;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__1.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m12431_gshared (Enumerator_t1908 * __this, Dictionary_2_t1901 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m12431(__this, ___dictionary, method) (( void (*) (Enumerator_t1908 *, Dictionary_2_t1901 *, const MethodInfo*))Enumerator__ctor_m12431_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m12432_gshared (Enumerator_t1908 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m12432(__this, method) (( Object_t * (*) (Enumerator_t1908 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m12432_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1050  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12433_gshared (Enumerator_t1908 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12433(__this, method) (( DictionaryEntry_t1050  (*) (Enumerator_t1908 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12433_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12434_gshared (Enumerator_t1908 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12434(__this, method) (( Object_t * (*) (Enumerator_t1908 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12434_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12435_gshared (Enumerator_t1908 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12435(__this, method) (( Object_t * (*) (Enumerator_t1908 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12435_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m12436_gshared (Enumerator_t1908 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m12436(__this, method) (( bool (*) (Enumerator_t1908 *, const MethodInfo*))Enumerator_MoveNext_m12436_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t1904  Enumerator_get_Current_m12437_gshared (Enumerator_t1908 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m12437(__this, method) (( KeyValuePair_2_t1904  (*) (Enumerator_t1908 *, const MethodInfo*))Enumerator_get_Current_m12437_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m12438_gshared (Enumerator_t1908 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m12438(__this, method) (( Object_t * (*) (Enumerator_t1908 *, const MethodInfo*))Enumerator_get_CurrentKey_m12438_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m12439_gshared (Enumerator_t1908 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m12439(__this, method) (( int32_t (*) (Enumerator_t1908 *, const MethodInfo*))Enumerator_get_CurrentValue_m12439_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m12440_gshared (Enumerator_t1908 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m12440(__this, method) (( void (*) (Enumerator_t1908 *, const MethodInfo*))Enumerator_VerifyState_m12440_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m12441_gshared (Enumerator_t1908 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m12441(__this, method) (( void (*) (Enumerator_t1908 *, const MethodInfo*))Enumerator_VerifyCurrent_m12441_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m12442_gshared (Enumerator_t1908 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m12442(__this, method) (( void (*) (Enumerator_t1908 *, const MethodInfo*))Enumerator_Dispose_m12442_gshared)(__this, method)
