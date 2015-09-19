#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2255;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1903;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t647;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t2418;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t62;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct IEnumerator_1_t2419;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1049;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>
struct ValueCollection_t2260;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__13.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
extern "C" void Dictionary_2__ctor_m16846_gshared (Dictionary_2_t2255 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m16846(__this, method) (( void (*) (Dictionary_2_t2255 *, const MethodInfo*))Dictionary_2__ctor_m16846_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m16847_gshared (Dictionary_2_t2255 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m16847(__this, ___comparer, method) (( void (*) (Dictionary_2_t2255 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m16847_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m16849_gshared (Dictionary_2_t2255 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m16849(__this, ___capacity, method) (( void (*) (Dictionary_2_t2255 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m16849_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m16851_gshared (Dictionary_2_t2255 * __this, SerializationInfo_t647 * ___info, StreamingContext_t648  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m16851(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2255 *, SerializationInfo_t647 *, StreamingContext_t648 , const MethodInfo*))Dictionary_2__ctor_m16851_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m16853_gshared (Dictionary_2_t2255 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m16853(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2255 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m16853_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m16855_gshared (Dictionary_2_t2255 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m16855(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2255 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m16855_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m16857_gshared (Dictionary_2_t2255 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m16857(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2255 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m16857_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m16859_gshared (Dictionary_2_t2255 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m16859(__this, ___key, method) (( bool (*) (Dictionary_2_t2255 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m16859_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m16861_gshared (Dictionary_2_t2255 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m16861(__this, ___key, method) (( void (*) (Dictionary_2_t2255 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m16861_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16863_gshared (Dictionary_2_t2255 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16863(__this, method) (( bool (*) (Dictionary_2_t2255 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16863_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16865_gshared (Dictionary_2_t2255 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16865(__this, method) (( Object_t * (*) (Dictionary_2_t2255 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16865_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16867_gshared (Dictionary_2_t2255 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16867(__this, method) (( bool (*) (Dictionary_2_t2255 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16867_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16869_gshared (Dictionary_2_t2255 * __this, KeyValuePair_2_t2257  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16869(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2255 *, KeyValuePair_2_t2257 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16869_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16871_gshared (Dictionary_2_t2255 * __this, KeyValuePair_2_t2257  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16871(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2255 *, KeyValuePair_2_t2257 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16871_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16873_gshared (Dictionary_2_t2255 * __this, KeyValuePair_2U5BU5D_t2418* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16873(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2255 *, KeyValuePair_2U5BU5D_t2418*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16873_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16875_gshared (Dictionary_2_t2255 * __this, KeyValuePair_2_t2257  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16875(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2255 *, KeyValuePair_2_t2257 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16875_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m16877_gshared (Dictionary_2_t2255 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m16877(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2255 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m16877_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16879_gshared (Dictionary_2_t2255 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16879(__this, method) (( Object_t * (*) (Dictionary_2_t2255 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16879_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16881_gshared (Dictionary_2_t2255 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16881(__this, method) (( Object_t* (*) (Dictionary_2_t2255 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16881_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16883_gshared (Dictionary_2_t2255 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16883(__this, method) (( Object_t * (*) (Dictionary_2_t2255 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16883_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m16885_gshared (Dictionary_2_t2255 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m16885(__this, method) (( int32_t (*) (Dictionary_2_t2255 *, const MethodInfo*))Dictionary_2_get_Count_m16885_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(TKey)
extern "C" bool Dictionary_2_get_Item_m16887_gshared (Dictionary_2_t2255 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m16887(__this, ___key, method) (( bool (*) (Dictionary_2_t2255 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m16887_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m16889_gshared (Dictionary_2_t2255 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m16889(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2255 *, Object_t *, bool, const MethodInfo*))Dictionary_2_set_Item_m16889_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m16891_gshared (Dictionary_2_t2255 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m16891(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2255 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m16891_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m16893_gshared (Dictionary_2_t2255 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m16893(__this, ___size, method) (( void (*) (Dictionary_2_t2255 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m16893_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m16895_gshared (Dictionary_2_t2255 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m16895(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2255 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m16895_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2257  Dictionary_2_make_pair_m16897_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m16897(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2257  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_make_pair_m16897_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_value(TKey,TValue)
extern "C" bool Dictionary_2_pick_value_m16899_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m16899(__this /* static, unused */, ___key, ___value, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_value_m16899_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m16901_gshared (Dictionary_2_t2255 * __this, KeyValuePair_2U5BU5D_t2418* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m16901(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2255 *, KeyValuePair_2U5BU5D_t2418*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m16901_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Resize()
extern "C" void Dictionary_2_Resize_m16903_gshared (Dictionary_2_t2255 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m16903(__this, method) (( void (*) (Dictionary_2_t2255 *, const MethodInfo*))Dictionary_2_Resize_m16903_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m16905_gshared (Dictionary_2_t2255 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_Add_m16905(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2255 *, Object_t *, bool, const MethodInfo*))Dictionary_2_Add_m16905_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Clear()
extern "C" void Dictionary_2_Clear_m16907_gshared (Dictionary_2_t2255 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m16907(__this, method) (( void (*) (Dictionary_2_t2255 *, const MethodInfo*))Dictionary_2_Clear_m16907_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m16909_gshared (Dictionary_2_t2255 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m16909(__this, ___key, method) (( bool (*) (Dictionary_2_t2255 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m16909_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m16911_gshared (Dictionary_2_t2255 * __this, bool ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m16911(__this, ___value, method) (( bool (*) (Dictionary_2_t2255 *, bool, const MethodInfo*))Dictionary_2_ContainsValue_m16911_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m16913_gshared (Dictionary_2_t2255 * __this, SerializationInfo_t647 * ___info, StreamingContext_t648  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m16913(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2255 *, SerializationInfo_t647 *, StreamingContext_t648 , const MethodInfo*))Dictionary_2_GetObjectData_m16913_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m16915_gshared (Dictionary_2_t2255 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m16915(__this, ___sender, method) (( void (*) (Dictionary_2_t2255 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m16915_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m16917_gshared (Dictionary_2_t2255 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m16917(__this, ___key, method) (( bool (*) (Dictionary_2_t2255 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m16917_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m16919_gshared (Dictionary_2_t2255 * __this, Object_t * ___key, bool* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m16919(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2255 *, Object_t *, bool*, const MethodInfo*))Dictionary_2_TryGetValue_m16919_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Values()
extern "C" ValueCollection_t2260 * Dictionary_2_get_Values_m16921_gshared (Dictionary_2_t2255 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m16921(__this, method) (( ValueCollection_t2260 * (*) (Dictionary_2_t2255 *, const MethodInfo*))Dictionary_2_get_Values_m16921_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m16923_gshared (Dictionary_2_t2255 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m16923(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2255 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m16923_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTValue(System.Object)
extern "C" bool Dictionary_2_ToTValue_m16925_gshared (Dictionary_2_t2255 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m16925(__this, ___value, method) (( bool (*) (Dictionary_2_t2255 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m16925_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m16927_gshared (Dictionary_2_t2255 * __this, KeyValuePair_2_t2257  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m16927(__this, ___pair, method) (( bool (*) (Dictionary_2_t2255 *, KeyValuePair_2_t2257 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m16927_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetEnumerator()
extern "C" Enumerator_t2262  Dictionary_2_GetEnumerator_m16929_gshared (Dictionary_2_t2255 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m16929(__this, method) (( Enumerator_t2262  (*) (Dictionary_2_t2255 *, const MethodInfo*))Dictionary_2_GetEnumerator_m16929_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1050  Dictionary_2_U3CCopyToU3Em__0_m16931_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m16931(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1050  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m16931_gshared)(__this /* static, unused */, ___key, ___value, method)
