#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Object>
struct Collection_1_t1776;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t62;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t78;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1838;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1775;

// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::.ctor()
extern "C" void Collection_1__ctor_m10862_gshared (Collection_1_t1776 * __this, const MethodInfo* method);
#define Collection_1__ctor_m10862(__this, method) (( void (*) (Collection_1_t1776 *, const MethodInfo*))Collection_1__ctor_m10862_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10863_gshared (Collection_1_t1776 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10863(__this, method) (( bool (*) (Collection_1_t1776 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10863_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m10864_gshared (Collection_1_t1776 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m10864(__this, ___array, ___index, method) (( void (*) (Collection_1_t1776 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m10864_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m10865_gshared (Collection_1_t1776 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m10865(__this, method) (( Object_t * (*) (Collection_1_t1776 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m10865_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m10866_gshared (Collection_1_t1776 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m10866(__this, ___value, method) (( int32_t (*) (Collection_1_t1776 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m10866_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m10867_gshared (Collection_1_t1776 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m10867(__this, ___value, method) (( bool (*) (Collection_1_t1776 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m10867_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m10868_gshared (Collection_1_t1776 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m10868(__this, ___value, method) (( int32_t (*) (Collection_1_t1776 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m10868_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m10869_gshared (Collection_1_t1776 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m10869(__this, ___index, ___value, method) (( void (*) (Collection_1_t1776 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m10869_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m10870_gshared (Collection_1_t1776 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m10870(__this, ___value, method) (( void (*) (Collection_1_t1776 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m10870_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m10871_gshared (Collection_1_t1776 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m10871(__this, method) (( bool (*) (Collection_1_t1776 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m10871_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m10872_gshared (Collection_1_t1776 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m10872(__this, method) (( Object_t * (*) (Collection_1_t1776 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m10872_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m10873_gshared (Collection_1_t1776 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m10873(__this, method) (( bool (*) (Collection_1_t1776 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m10873_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m10874_gshared (Collection_1_t1776 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m10874(__this, method) (( bool (*) (Collection_1_t1776 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m10874_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m10875_gshared (Collection_1_t1776 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m10875(__this, ___index, method) (( Object_t * (*) (Collection_1_t1776 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m10875_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m10876_gshared (Collection_1_t1776 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m10876(__this, ___index, ___value, method) (( void (*) (Collection_1_t1776 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m10876_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Add(T)
extern "C" void Collection_1_Add_m10877_gshared (Collection_1_t1776 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Add_m10877(__this, ___item, method) (( void (*) (Collection_1_t1776 *, Object_t *, const MethodInfo*))Collection_1_Add_m10877_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Clear()
extern "C" void Collection_1_Clear_m10878_gshared (Collection_1_t1776 * __this, const MethodInfo* method);
#define Collection_1_Clear_m10878(__this, method) (( void (*) (Collection_1_t1776 *, const MethodInfo*))Collection_1_Clear_m10878_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::ClearItems()
extern "C" void Collection_1_ClearItems_m10879_gshared (Collection_1_t1776 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m10879(__this, method) (( void (*) (Collection_1_t1776 *, const MethodInfo*))Collection_1_ClearItems_m10879_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Contains(T)
extern "C" bool Collection_1_Contains_m10880_gshared (Collection_1_t1776 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Contains_m10880(__this, ___item, method) (( bool (*) (Collection_1_t1776 *, Object_t *, const MethodInfo*))Collection_1_Contains_m10880_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m10881_gshared (Collection_1_t1776 * __this, ObjectU5BU5D_t78* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m10881(__this, ___array, ___index, method) (( void (*) (Collection_1_t1776 *, ObjectU5BU5D_t78*, int32_t, const MethodInfo*))Collection_1_CopyTo_m10881_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Object>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m10882_gshared (Collection_1_t1776 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m10882(__this, method) (( Object_t* (*) (Collection_1_t1776 *, const MethodInfo*))Collection_1_GetEnumerator_m10882_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m10883_gshared (Collection_1_t1776 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m10883(__this, ___item, method) (( int32_t (*) (Collection_1_t1776 *, Object_t *, const MethodInfo*))Collection_1_IndexOf_m10883_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m10884_gshared (Collection_1_t1776 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Insert_m10884(__this, ___index, ___item, method) (( void (*) (Collection_1_t1776 *, int32_t, Object_t *, const MethodInfo*))Collection_1_Insert_m10884_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m10885_gshared (Collection_1_t1776 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m10885(__this, ___index, ___item, method) (( void (*) (Collection_1_t1776 *, int32_t, Object_t *, const MethodInfo*))Collection_1_InsertItem_m10885_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Remove(T)
extern "C" bool Collection_1_Remove_m10886_gshared (Collection_1_t1776 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Remove_m10886(__this, ___item, method) (( bool (*) (Collection_1_t1776 *, Object_t *, const MethodInfo*))Collection_1_Remove_m10886_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m10887_gshared (Collection_1_t1776 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m10887(__this, ___index, method) (( void (*) (Collection_1_t1776 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m10887_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m10888_gshared (Collection_1_t1776 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m10888(__this, ___index, method) (( void (*) (Collection_1_t1776 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m10888_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::get_Count()
extern "C" int32_t Collection_1_get_Count_m10889_gshared (Collection_1_t1776 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m10889(__this, method) (( int32_t (*) (Collection_1_t1776 *, const MethodInfo*))Collection_1_get_Count_m10889_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * Collection_1_get_Item_m10890_gshared (Collection_1_t1776 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m10890(__this, ___index, method) (( Object_t * (*) (Collection_1_t1776 *, int32_t, const MethodInfo*))Collection_1_get_Item_m10890_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m10891_gshared (Collection_1_t1776 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_set_Item_m10891(__this, ___index, ___value, method) (( void (*) (Collection_1_t1776 *, int32_t, Object_t *, const MethodInfo*))Collection_1_set_Item_m10891_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m10892_gshared (Collection_1_t1776 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_SetItem_m10892(__this, ___index, ___item, method) (( void (*) (Collection_1_t1776 *, int32_t, Object_t *, const MethodInfo*))Collection_1_SetItem_m10892_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m10893_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m10893(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m10893_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::ConvertItem(System.Object)
extern "C" Object_t * Collection_1_ConvertItem_m10894_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m10894(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m10894_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m10895_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m10895(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m10895_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m10896_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m10896(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m10896_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m10897_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m10897(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m10897_gshared)(__this /* static, unused */, ___list, method)
