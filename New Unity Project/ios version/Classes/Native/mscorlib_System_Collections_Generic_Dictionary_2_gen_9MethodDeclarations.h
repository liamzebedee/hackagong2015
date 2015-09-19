#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1874;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t1873;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t647;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t2362;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t62;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t2363;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1049;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t1879;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m12000_gshared (Dictionary_2_t1874 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m12000(__this, method) (( void (*) (Dictionary_2_t1874 *, const MethodInfo*))Dictionary_2__ctor_m12000_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m12002_gshared (Dictionary_2_t1874 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m12002(__this, ___comparer, method) (( void (*) (Dictionary_2_t1874 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m12002_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m12004_gshared (Dictionary_2_t1874 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m12004(__this, ___capacity, method) (( void (*) (Dictionary_2_t1874 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m12004_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m12006_gshared (Dictionary_2_t1874 * __this, SerializationInfo_t647 * ___info, StreamingContext_t648  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m12006(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1874 *, SerializationInfo_t647 *, StreamingContext_t648 , const MethodInfo*))Dictionary_2__ctor_m12006_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m12008_gshared (Dictionary_2_t1874 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m12008(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1874 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m12008_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m12010_gshared (Dictionary_2_t1874 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m12010(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1874 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m12010_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m12012_gshared (Dictionary_2_t1874 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m12012(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1874 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m12012_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m12014_gshared (Dictionary_2_t1874 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m12014(__this, ___key, method) (( bool (*) (Dictionary_2_t1874 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m12014_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m12016_gshared (Dictionary_2_t1874 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m12016(__this, ___key, method) (( void (*) (Dictionary_2_t1874 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m12016_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12018_gshared (Dictionary_2_t1874 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12018(__this, method) (( bool (*) (Dictionary_2_t1874 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12018_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12020_gshared (Dictionary_2_t1874 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12020(__this, method) (( Object_t * (*) (Dictionary_2_t1874 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12020_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12022_gshared (Dictionary_2_t1874 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12022(__this, method) (( bool (*) (Dictionary_2_t1874 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12022_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12024_gshared (Dictionary_2_t1874 * __this, KeyValuePair_2_t1876  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12024(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1874 *, KeyValuePair_2_t1876 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12024_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12026_gshared (Dictionary_2_t1874 * __this, KeyValuePair_2_t1876  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12026(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1874 *, KeyValuePair_2_t1876 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12026_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12028_gshared (Dictionary_2_t1874 * __this, KeyValuePair_2U5BU5D_t2362* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12028(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1874 *, KeyValuePair_2U5BU5D_t2362*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12028_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12030_gshared (Dictionary_2_t1874 * __this, KeyValuePair_2_t1876  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12030(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1874 *, KeyValuePair_2_t1876 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12030_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m12032_gshared (Dictionary_2_t1874 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m12032(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1874 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m12032_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12034_gshared (Dictionary_2_t1874 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12034(__this, method) (( Object_t * (*) (Dictionary_2_t1874 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12034_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12036_gshared (Dictionary_2_t1874 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12036(__this, method) (( Object_t* (*) (Dictionary_2_t1874 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12036_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12038_gshared (Dictionary_2_t1874 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12038(__this, method) (( Object_t * (*) (Dictionary_2_t1874 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12038_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m12040_gshared (Dictionary_2_t1874 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m12040(__this, method) (( int32_t (*) (Dictionary_2_t1874 *, const MethodInfo*))Dictionary_2_get_Count_m12040_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m12042_gshared (Dictionary_2_t1874 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m12042(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1874 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m12042_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m12044_gshared (Dictionary_2_t1874 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m12044(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1874 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m12044_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m12046_gshared (Dictionary_2_t1874 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m12046(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1874 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m12046_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m12048_gshared (Dictionary_2_t1874 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m12048(__this, ___size, method) (( void (*) (Dictionary_2_t1874 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m12048_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m12050_gshared (Dictionary_2_t1874 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m12050(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1874 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m12050_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1876  Dictionary_2_make_pair_m12052_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m12052(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1876  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m12052_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m12054_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m12054(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m12054_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m12056_gshared (Dictionary_2_t1874 * __this, KeyValuePair_2U5BU5D_t2362* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m12056(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1874 *, KeyValuePair_2U5BU5D_t2362*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m12056_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m12058_gshared (Dictionary_2_t1874 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m12058(__this, method) (( void (*) (Dictionary_2_t1874 *, const MethodInfo*))Dictionary_2_Resize_m12058_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m12060_gshared (Dictionary_2_t1874 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m12060(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1874 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m12060_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m12062_gshared (Dictionary_2_t1874 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m12062(__this, method) (( void (*) (Dictionary_2_t1874 *, const MethodInfo*))Dictionary_2_Clear_m12062_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m12064_gshared (Dictionary_2_t1874 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m12064(__this, ___key, method) (( bool (*) (Dictionary_2_t1874 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m12064_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m12066_gshared (Dictionary_2_t1874 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m12066(__this, ___value, method) (( bool (*) (Dictionary_2_t1874 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m12066_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m12068_gshared (Dictionary_2_t1874 * __this, SerializationInfo_t647 * ___info, StreamingContext_t648  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m12068(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1874 *, SerializationInfo_t647 *, StreamingContext_t648 , const MethodInfo*))Dictionary_2_GetObjectData_m12068_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m12070_gshared (Dictionary_2_t1874 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m12070(__this, ___sender, method) (( void (*) (Dictionary_2_t1874 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m12070_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m12072_gshared (Dictionary_2_t1874 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m12072(__this, ___key, method) (( bool (*) (Dictionary_2_t1874 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m12072_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m12074_gshared (Dictionary_2_t1874 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m12074(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1874 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m12074_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t1879 * Dictionary_2_get_Values_m12075_gshared (Dictionary_2_t1874 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m12075(__this, method) (( ValueCollection_t1879 * (*) (Dictionary_2_t1874 *, const MethodInfo*))Dictionary_2_get_Values_m12075_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m12077_gshared (Dictionary_2_t1874 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m12077(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1874 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m12077_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m12079_gshared (Dictionary_2_t1874 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m12079(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1874 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m12079_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m12081_gshared (Dictionary_2_t1874 * __this, KeyValuePair_2_t1876  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m12081(__this, ___pair, method) (( bool (*) (Dictionary_2_t1874 *, KeyValuePair_2_t1876 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m12081_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t1881  Dictionary_2_GetEnumerator_m12082_gshared (Dictionary_2_t1874 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m12082(__this, method) (( Enumerator_t1881  (*) (Dictionary_2_t1874 *, const MethodInfo*))Dictionary_2_GetEnumerator_m12082_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1050  Dictionary_2_U3CCopyToU3Em__0_m12084_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m12084(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1050  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m12084_gshared)(__this /* static, unused */, ___key, ___value, method)
