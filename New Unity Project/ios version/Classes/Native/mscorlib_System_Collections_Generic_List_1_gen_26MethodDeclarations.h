#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t317;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t2397;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t2360;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t62;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t2398;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>
struct ReadOnlyCollection_1_t2101;
// System.Int32[]
struct Int32U5BU5D_t107;
// System.Predicate`1<System.Int32>
struct Predicate_1_t2104;
// System.Comparison`1<System.Int32>
struct Comparison_1_t2108;
// System.Collections.Generic.List`1/Enumerator<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_30.h"

// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C" void List_1__ctor_m15143_gshared (List_1_t317 * __this, const MethodInfo* method);
#define List_1__ctor_m15143(__this, method) (( void (*) (List_1_t317 *, const MethodInfo*))List_1__ctor_m15143_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m15144_gshared (List_1_t317 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m15144(__this, ___collection, method) (( void (*) (List_1_t317 *, Object_t*, const MethodInfo*))List_1__ctor_m15144_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
extern "C" void List_1__ctor_m15145_gshared (List_1_t317 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m15145(__this, ___capacity, method) (( void (*) (List_1_t317 *, int32_t, const MethodInfo*))List_1__ctor_m15145_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.cctor()
extern "C" void List_1__cctor_m15146_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m15146(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m15146_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15147_gshared (List_1_t317 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15147(__this, method) (( Object_t* (*) (List_1_t317 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15147_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m15148_gshared (List_1_t317 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m15148(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t317 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m15148_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m15149_gshared (List_1_t317 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m15149(__this, method) (( Object_t * (*) (List_1_t317 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m15149_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m15150_gshared (List_1_t317 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m15150(__this, ___item, method) (( int32_t (*) (List_1_t317 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m15150_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m15151_gshared (List_1_t317 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m15151(__this, ___item, method) (( bool (*) (List_1_t317 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m15151_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m15152_gshared (List_1_t317 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m15152(__this, ___item, method) (( int32_t (*) (List_1_t317 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m15152_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m15153_gshared (List_1_t317 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m15153(__this, ___index, ___item, method) (( void (*) (List_1_t317 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m15153_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m15154_gshared (List_1_t317 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m15154(__this, ___item, method) (( void (*) (List_1_t317 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m15154_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15155_gshared (List_1_t317 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15155(__this, method) (( bool (*) (List_1_t317 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15155_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m15156_gshared (List_1_t317 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m15156(__this, method) (( bool (*) (List_1_t317 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m15156_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m15157_gshared (List_1_t317 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m15157(__this, method) (( Object_t * (*) (List_1_t317 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m15157_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m15158_gshared (List_1_t317 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m15158(__this, method) (( bool (*) (List_1_t317 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m15158_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m15159_gshared (List_1_t317 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m15159(__this, method) (( bool (*) (List_1_t317 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m15159_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m15160_gshared (List_1_t317 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m15160(__this, ___index, method) (( Object_t * (*) (List_1_t317 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m15160_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m15161_gshared (List_1_t317 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m15161(__this, ___index, ___value, method) (( void (*) (List_1_t317 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m15161_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
extern "C" void List_1_Add_m15162_gshared (List_1_t317 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Add_m15162(__this, ___item, method) (( void (*) (List_1_t317 *, int32_t, const MethodInfo*))List_1_Add_m15162_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m15163_gshared (List_1_t317 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m15163(__this, ___newCount, method) (( void (*) (List_1_t317 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m15163_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m15164_gshared (List_1_t317 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m15164(__this, ___collection, method) (( void (*) (List_1_t317 *, Object_t*, const MethodInfo*))List_1_AddCollection_m15164_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m15165_gshared (List_1_t317 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m15165(__this, ___enumerable, method) (( void (*) (List_1_t317 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m15165_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m2429_gshared (List_1_t317 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m2429(__this, ___collection, method) (( void (*) (List_1_t317 *, Object_t*, const MethodInfo*))List_1_AddRange_m2429_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Int32>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2101 * List_1_AsReadOnly_m15166_gshared (List_1_t317 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m15166(__this, method) (( ReadOnlyCollection_1_t2101 * (*) (List_1_t317 *, const MethodInfo*))List_1_AsReadOnly_m15166_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
extern "C" void List_1_Clear_m15167_gshared (List_1_t317 * __this, const MethodInfo* method);
#define List_1_Clear_m15167(__this, method) (( void (*) (List_1_t317 *, const MethodInfo*))List_1_Clear_m15167_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(T)
extern "C" bool List_1_Contains_m15168_gshared (List_1_t317 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Contains_m15168(__this, ___item, method) (( bool (*) (List_1_t317 *, int32_t, const MethodInfo*))List_1_Contains_m15168_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m15169_gshared (List_1_t317 * __this, Int32U5BU5D_t107* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m15169(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t317 *, Int32U5BU5D_t107*, int32_t, const MethodInfo*))List_1_CopyTo_m15169_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Int32>::Find(System.Predicate`1<T>)
extern "C" int32_t List_1_Find_m15170_gshared (List_1_t317 * __this, Predicate_1_t2104 * ___match, const MethodInfo* method);
#define List_1_Find_m15170(__this, ___match, method) (( int32_t (*) (List_1_t317 *, Predicate_1_t2104 *, const MethodInfo*))List_1_Find_m15170_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m15171_gshared (Object_t * __this /* static, unused */, Predicate_1_t2104 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m15171(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2104 *, const MethodInfo*))List_1_CheckMatch_m15171_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m15172_gshared (List_1_t317 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2104 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m15172(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t317 *, int32_t, int32_t, Predicate_1_t2104 *, const MethodInfo*))List_1_GetIndex_m15172_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t2100  List_1_GetEnumerator_m15173_gshared (List_1_t317 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m15173(__this, method) (( Enumerator_t2100  (*) (List_1_t317 *, const MethodInfo*))List_1_GetEnumerator_m15173_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m15174_gshared (List_1_t317 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m15174(__this, ___item, method) (( int32_t (*) (List_1_t317 *, int32_t, const MethodInfo*))List_1_IndexOf_m15174_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m15175_gshared (List_1_t317 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m15175(__this, ___start, ___delta, method) (( void (*) (List_1_t317 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m15175_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m15176_gshared (List_1_t317 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m15176(__this, ___index, method) (( void (*) (List_1_t317 *, int32_t, const MethodInfo*))List_1_CheckIndex_m15176_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m15177_gshared (List_1_t317 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define List_1_Insert_m15177(__this, ___index, ___item, method) (( void (*) (List_1_t317 *, int32_t, int32_t, const MethodInfo*))List_1_Insert_m15177_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m15178_gshared (List_1_t317 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m15178(__this, ___collection, method) (( void (*) (List_1_t317 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m15178_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(T)
extern "C" bool List_1_Remove_m15179_gshared (List_1_t317 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Remove_m15179(__this, ___item, method) (( bool (*) (List_1_t317 *, int32_t, const MethodInfo*))List_1_Remove_m15179_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m15180_gshared (List_1_t317 * __this, Predicate_1_t2104 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m15180(__this, ___match, method) (( int32_t (*) (List_1_t317 *, Predicate_1_t2104 *, const MethodInfo*))List_1_RemoveAll_m15180_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m15181_gshared (List_1_t317 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m15181(__this, ___index, method) (( void (*) (List_1_t317 *, int32_t, const MethodInfo*))List_1_RemoveAt_m15181_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Reverse()
extern "C" void List_1_Reverse_m15182_gshared (List_1_t317 * __this, const MethodInfo* method);
#define List_1_Reverse_m15182(__this, method) (( void (*) (List_1_t317 *, const MethodInfo*))List_1_Reverse_m15182_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort()
extern "C" void List_1_Sort_m15183_gshared (List_1_t317 * __this, const MethodInfo* method);
#define List_1_Sort_m15183(__this, method) (( void (*) (List_1_t317 *, const MethodInfo*))List_1_Sort_m15183_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m15184_gshared (List_1_t317 * __this, Comparison_1_t2108 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m15184(__this, ___comparison, method) (( void (*) (List_1_t317 *, Comparison_1_t2108 *, const MethodInfo*))List_1_Sort_m15184_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
extern "C" Int32U5BU5D_t107* List_1_ToArray_m15185_gshared (List_1_t317 * __this, const MethodInfo* method);
#define List_1_ToArray_m15185(__this, method) (( Int32U5BU5D_t107* (*) (List_1_t317 *, const MethodInfo*))List_1_ToArray_m15185_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::TrimExcess()
extern "C" void List_1_TrimExcess_m15186_gshared (List_1_t317 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m15186(__this, method) (( void (*) (List_1_t317 *, const MethodInfo*))List_1_TrimExcess_m15186_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m15187_gshared (List_1_t317 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m15187(__this, method) (( int32_t (*) (List_1_t317 *, const MethodInfo*))List_1_get_Capacity_m15187_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m15188_gshared (List_1_t317 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m15188(__this, ___value, method) (( void (*) (List_1_t317 *, int32_t, const MethodInfo*))List_1_set_Capacity_m15188_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
extern "C" int32_t List_1_get_Count_m15189_gshared (List_1_t317 * __this, const MethodInfo* method);
#define List_1_get_Count_m15189(__this, method) (( int32_t (*) (List_1_t317 *, const MethodInfo*))List_1_get_Count_m15189_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t List_1_get_Item_m15190_gshared (List_1_t317 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m15190(__this, ___index, method) (( int32_t (*) (List_1_t317 *, int32_t, const MethodInfo*))List_1_get_Item_m15190_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m15191_gshared (List_1_t317 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method);
#define List_1_set_Item_m15191(__this, ___index, ___value, method) (( void (*) (List_1_t317 *, int32_t, int32_t, const MethodInfo*))List_1_set_Item_m15191_gshared)(__this, ___index, ___value, method)
