#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Object>
struct List_1_t353;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t102;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1838;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t62;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t2354;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t1774;
// System.Object[]
struct ObjectU5BU5D_t78;
// System.Predicate`1<System.Object>
struct Predicate_1_t1780;
// System.Comparison`1<System.Object>
struct Comparison_1_t1786;
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_2.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m10728_gshared (List_1_t353 * __this, const MethodInfo* method);
#define List_1__ctor_m10728(__this, method) (( void (*) (List_1_t353 *, const MethodInfo*))List_1__ctor_m10728_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m10730_gshared (List_1_t353 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m10730(__this, ___collection, method) (( void (*) (List_1_t353 *, Object_t*, const MethodInfo*))List_1__ctor_m10730_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m10732_gshared (List_1_t353 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m10732(__this, ___capacity, method) (( void (*) (List_1_t353 *, int32_t, const MethodInfo*))List_1__ctor_m10732_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m10734_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m10734(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m10734_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10736_gshared (List_1_t353 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10736(__this, method) (( Object_t* (*) (List_1_t353 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10736_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m10738_gshared (List_1_t353 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m10738(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t353 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10738_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m10740_gshared (List_1_t353 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m10740(__this, method) (( Object_t * (*) (List_1_t353 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10740_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m10742_gshared (List_1_t353 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m10742(__this, ___item, method) (( int32_t (*) (List_1_t353 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10742_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m10744_gshared (List_1_t353 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m10744(__this, ___item, method) (( bool (*) (List_1_t353 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10744_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m10746_gshared (List_1_t353 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m10746(__this, ___item, method) (( int32_t (*) (List_1_t353 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10746_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m10748_gshared (List_1_t353 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m10748(__this, ___index, ___item, method) (( void (*) (List_1_t353 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10748_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m10750_gshared (List_1_t353 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m10750(__this, ___item, method) (( void (*) (List_1_t353 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10750_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10752_gshared (List_1_t353 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10752(__this, method) (( bool (*) (List_1_t353 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10752_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m10754_gshared (List_1_t353 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m10754(__this, method) (( bool (*) (List_1_t353 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10754_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m10756_gshared (List_1_t353 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m10756(__this, method) (( Object_t * (*) (List_1_t353 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10756_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m10758_gshared (List_1_t353 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m10758(__this, method) (( bool (*) (List_1_t353 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10758_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m10760_gshared (List_1_t353 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m10760(__this, method) (( bool (*) (List_1_t353 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10760_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m10762_gshared (List_1_t353 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m10762(__this, ___index, method) (( Object_t * (*) (List_1_t353 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10762_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m10764_gshared (List_1_t353 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m10764(__this, ___index, ___value, method) (( void (*) (List_1_t353 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10764_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m10766_gshared (List_1_t353 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m10766(__this, ___item, method) (( void (*) (List_1_t353 *, Object_t *, const MethodInfo*))List_1_Add_m10766_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m10768_gshared (List_1_t353 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m10768(__this, ___newCount, method) (( void (*) (List_1_t353 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m10768_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m10770_gshared (List_1_t353 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m10770(__this, ___collection, method) (( void (*) (List_1_t353 *, Object_t*, const MethodInfo*))List_1_AddCollection_m10770_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m10772_gshared (List_1_t353 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m10772(__this, ___enumerable, method) (( void (*) (List_1_t353 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m10772_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m10774_gshared (List_1_t353 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m10774(__this, ___collection, method) (( void (*) (List_1_t353 *, Object_t*, const MethodInfo*))List_1_AddRange_m10774_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1774 * List_1_AsReadOnly_m10776_gshared (List_1_t353 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m10776(__this, method) (( ReadOnlyCollection_1_t1774 * (*) (List_1_t353 *, const MethodInfo*))List_1_AsReadOnly_m10776_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m10778_gshared (List_1_t353 * __this, const MethodInfo* method);
#define List_1_Clear_m10778(__this, method) (( void (*) (List_1_t353 *, const MethodInfo*))List_1_Clear_m10778_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m10780_gshared (List_1_t353 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m10780(__this, ___item, method) (( bool (*) (List_1_t353 *, Object_t *, const MethodInfo*))List_1_Contains_m10780_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m10782_gshared (List_1_t353 * __this, ObjectU5BU5D_t78* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m10782(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t353 *, ObjectU5BU5D_t78*, int32_t, const MethodInfo*))List_1_CopyTo_m10782_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern "C" Object_t * List_1_Find_m10784_gshared (List_1_t353 * __this, Predicate_1_t1780 * ___match, const MethodInfo* method);
#define List_1_Find_m10784(__this, ___match, method) (( Object_t * (*) (List_1_t353 *, Predicate_1_t1780 *, const MethodInfo*))List_1_Find_m10784_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m10786_gshared (Object_t * __this /* static, unused */, Predicate_1_t1780 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m10786(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1780 *, const MethodInfo*))List_1_CheckMatch_m10786_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m10788_gshared (List_1_t353 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1780 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m10788(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t353 *, int32_t, int32_t, Predicate_1_t1780 *, const MethodInfo*))List_1_GetIndex_m10788_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t1773  List_1_GetEnumerator_m10790_gshared (List_1_t353 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m10790(__this, method) (( Enumerator_t1773  (*) (List_1_t353 *, const MethodInfo*))List_1_GetEnumerator_m10790_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m10792_gshared (List_1_t353 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m10792(__this, ___item, method) (( int32_t (*) (List_1_t353 *, Object_t *, const MethodInfo*))List_1_IndexOf_m10792_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m10794_gshared (List_1_t353 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m10794(__this, ___start, ___delta, method) (( void (*) (List_1_t353 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m10794_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m10796_gshared (List_1_t353 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m10796(__this, ___index, method) (( void (*) (List_1_t353 *, int32_t, const MethodInfo*))List_1_CheckIndex_m10796_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m10798_gshared (List_1_t353 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m10798(__this, ___index, ___item, method) (( void (*) (List_1_t353 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m10798_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m10800_gshared (List_1_t353 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m10800(__this, ___collection, method) (( void (*) (List_1_t353 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m10800_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m10802_gshared (List_1_t353 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m10802(__this, ___item, method) (( bool (*) (List_1_t353 *, Object_t *, const MethodInfo*))List_1_Remove_m10802_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m10804_gshared (List_1_t353 * __this, Predicate_1_t1780 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m10804(__this, ___match, method) (( int32_t (*) (List_1_t353 *, Predicate_1_t1780 *, const MethodInfo*))List_1_RemoveAll_m10804_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m10806_gshared (List_1_t353 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m10806(__this, ___index, method) (( void (*) (List_1_t353 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10806_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m10808_gshared (List_1_t353 * __this, const MethodInfo* method);
#define List_1_Reverse_m10808(__this, method) (( void (*) (List_1_t353 *, const MethodInfo*))List_1_Reverse_m10808_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m10810_gshared (List_1_t353 * __this, const MethodInfo* method);
#define List_1_Sort_m10810(__this, method) (( void (*) (List_1_t353 *, const MethodInfo*))List_1_Sort_m10810_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m10812_gshared (List_1_t353 * __this, Comparison_1_t1786 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m10812(__this, ___comparison, method) (( void (*) (List_1_t353 *, Comparison_1_t1786 *, const MethodInfo*))List_1_Sort_m10812_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t78* List_1_ToArray_m10813_gshared (List_1_t353 * __this, const MethodInfo* method);
#define List_1_ToArray_m10813(__this, method) (( ObjectU5BU5D_t78* (*) (List_1_t353 *, const MethodInfo*))List_1_ToArray_m10813_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m10815_gshared (List_1_t353 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m10815(__this, method) (( void (*) (List_1_t353 *, const MethodInfo*))List_1_TrimExcess_m10815_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m10817_gshared (List_1_t353 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m10817(__this, method) (( int32_t (*) (List_1_t353 *, const MethodInfo*))List_1_get_Capacity_m10817_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m10819_gshared (List_1_t353 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m10819(__this, ___value, method) (( void (*) (List_1_t353 *, int32_t, const MethodInfo*))List_1_set_Capacity_m10819_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m10821_gshared (List_1_t353 * __this, const MethodInfo* method);
#define List_1_get_Count_m10821(__this, method) (( int32_t (*) (List_1_t353 *, const MethodInfo*))List_1_get_Count_m10821_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m10823_gshared (List_1_t353 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m10823(__this, ___index, method) (( Object_t * (*) (List_1_t353 *, int32_t, const MethodInfo*))List_1_get_Item_m10823_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m10825_gshared (List_1_t353 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m10825(__this, ___index, ___value, method) (( void (*) (List_1_t353 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m10825_gshared)(__this, ___index, ___value, method)
