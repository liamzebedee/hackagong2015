#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>
struct ValueCollection_t2212;
// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
struct Dictionary_2_t2207;
// System.Collections.Generic.IEnumerator`1<UnityEngine.TextEditor/TextEditOp>
struct IEnumerator_1_t2415;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t62;
// System.Object
struct Object_t;
// UnityEngine.TextEditor/TextEditOp[]
struct TextEditOpU5BU5D_t2204;
// UnityEngine.TextEditor/TextEditOp
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_17.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m16476_gshared (ValueCollection_t2212 * __this, Dictionary_2_t2207 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m16476(__this, ___dictionary, method) (( void (*) (ValueCollection_t2212 *, Dictionary_2_t2207 *, const MethodInfo*))ValueCollection__ctor_m16476_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m16477_gshared (ValueCollection_t2212 * __this, int32_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m16477(__this, ___item, method) (( void (*) (ValueCollection_t2212 *, int32_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m16477_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m16478_gshared (ValueCollection_t2212 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m16478(__this, method) (( void (*) (ValueCollection_t2212 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m16478_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m16479_gshared (ValueCollection_t2212 * __this, int32_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m16479(__this, ___item, method) (( bool (*) (ValueCollection_t2212 *, int32_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m16479_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m16480_gshared (ValueCollection_t2212 * __this, int32_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m16480(__this, ___item, method) (( bool (*) (ValueCollection_t2212 *, int32_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m16480_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m16481_gshared (ValueCollection_t2212 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m16481(__this, method) (( Object_t* (*) (ValueCollection_t2212 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m16481_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m16482_gshared (ValueCollection_t2212 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m16482(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2212 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m16482_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m16483_gshared (ValueCollection_t2212 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m16483(__this, method) (( Object_t * (*) (ValueCollection_t2212 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m16483_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m16484_gshared (ValueCollection_t2212 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m16484(__this, method) (( bool (*) (ValueCollection_t2212 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m16484_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m16485_gshared (ValueCollection_t2212 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m16485(__this, method) (( bool (*) (ValueCollection_t2212 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m16485_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m16486_gshared (ValueCollection_t2212 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m16486(__this, method) (( Object_t * (*) (ValueCollection_t2212 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m16486_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m16487_gshared (ValueCollection_t2212 * __this, TextEditOpU5BU5D_t2204* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m16487(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2212 *, TextEditOpU5BU5D_t2204*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m16487_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::GetEnumerator()
extern "C" Enumerator_t2213  ValueCollection_GetEnumerator_m16488_gshared (ValueCollection_t2212 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m16488(__this, method) (( Enumerator_t2213  (*) (ValueCollection_t2212 *, const MethodInfo*))ValueCollection_GetEnumerator_m16488_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m16489_gshared (ValueCollection_t2212 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m16489(__this, method) (( int32_t (*) (ValueCollection_t2212 *, const MethodInfo*))ValueCollection_get_Count_m16489_gshared)(__this, method)
