#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Int32>
struct Collection_1_t2103;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t62;
// System.Object
struct Object_t;
// System.Int32[]
struct Int32U5BU5D_t107;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t2360;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t2102;

// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::.ctor()
extern "C" void Collection_1__ctor_m15228_gshared (Collection_1_t2103 * __this, const MethodInfo* method);
#define Collection_1__ctor_m15228(__this, method) (( void (*) (Collection_1_t2103 *, const MethodInfo*))Collection_1__ctor_m15228_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15229_gshared (Collection_1_t2103 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15229(__this, method) (( bool (*) (Collection_1_t2103 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15229_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m15230_gshared (Collection_1_t2103 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m15230(__this, ___array, ___index, method) (( void (*) (Collection_1_t2103 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m15230_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m15231_gshared (Collection_1_t2103 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m15231(__this, method) (( Object_t * (*) (Collection_1_t2103 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m15231_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m15232_gshared (Collection_1_t2103 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m15232(__this, ___value, method) (( int32_t (*) (Collection_1_t2103 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m15232_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m15233_gshared (Collection_1_t2103 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m15233(__this, ___value, method) (( bool (*) (Collection_1_t2103 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m15233_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m15234_gshared (Collection_1_t2103 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m15234(__this, ___value, method) (( int32_t (*) (Collection_1_t2103 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m15234_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m15235_gshared (Collection_1_t2103 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m15235(__this, ___index, ___value, method) (( void (*) (Collection_1_t2103 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m15235_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m15236_gshared (Collection_1_t2103 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m15236(__this, ___value, method) (( void (*) (Collection_1_t2103 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m15236_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m15237_gshared (Collection_1_t2103 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m15237(__this, method) (( bool (*) (Collection_1_t2103 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m15237_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m15238_gshared (Collection_1_t2103 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m15238(__this, method) (( Object_t * (*) (Collection_1_t2103 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m15238_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m15239_gshared (Collection_1_t2103 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m15239(__this, method) (( bool (*) (Collection_1_t2103 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m15239_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m15240_gshared (Collection_1_t2103 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m15240(__this, method) (( bool (*) (Collection_1_t2103 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m15240_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m15241_gshared (Collection_1_t2103 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m15241(__this, ___index, method) (( Object_t * (*) (Collection_1_t2103 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m15241_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m15242_gshared (Collection_1_t2103 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m15242(__this, ___index, ___value, method) (( void (*) (Collection_1_t2103 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m15242_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::Add(T)
extern "C" void Collection_1_Add_m15243_gshared (Collection_1_t2103 * __this, int32_t ___item, const MethodInfo* method);
#define Collection_1_Add_m15243(__this, ___item, method) (( void (*) (Collection_1_t2103 *, int32_t, const MethodInfo*))Collection_1_Add_m15243_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::Clear()
extern "C" void Collection_1_Clear_m15244_gshared (Collection_1_t2103 * __this, const MethodInfo* method);
#define Collection_1_Clear_m15244(__this, method) (( void (*) (Collection_1_t2103 *, const MethodInfo*))Collection_1_Clear_m15244_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::ClearItems()
extern "C" void Collection_1_ClearItems_m15245_gshared (Collection_1_t2103 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m15245(__this, method) (( void (*) (Collection_1_t2103 *, const MethodInfo*))Collection_1_ClearItems_m15245_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::Contains(T)
extern "C" bool Collection_1_Contains_m15246_gshared (Collection_1_t2103 * __this, int32_t ___item, const MethodInfo* method);
#define Collection_1_Contains_m15246(__this, ___item, method) (( bool (*) (Collection_1_t2103 *, int32_t, const MethodInfo*))Collection_1_Contains_m15246_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m15247_gshared (Collection_1_t2103 * __this, Int32U5BU5D_t107* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m15247(__this, ___array, ___index, method) (( void (*) (Collection_1_t2103 *, Int32U5BU5D_t107*, int32_t, const MethodInfo*))Collection_1_CopyTo_m15247_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Int32>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m15248_gshared (Collection_1_t2103 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m15248(__this, method) (( Object_t* (*) (Collection_1_t2103 *, const MethodInfo*))Collection_1_GetEnumerator_m15248_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int32>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m15249_gshared (Collection_1_t2103 * __this, int32_t ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m15249(__this, ___item, method) (( int32_t (*) (Collection_1_t2103 *, int32_t, const MethodInfo*))Collection_1_IndexOf_m15249_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m15250_gshared (Collection_1_t2103 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define Collection_1_Insert_m15250(__this, ___index, ___item, method) (( void (*) (Collection_1_t2103 *, int32_t, int32_t, const MethodInfo*))Collection_1_Insert_m15250_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m15251_gshared (Collection_1_t2103 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m15251(__this, ___index, ___item, method) (( void (*) (Collection_1_t2103 *, int32_t, int32_t, const MethodInfo*))Collection_1_InsertItem_m15251_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::Remove(T)
extern "C" bool Collection_1_Remove_m15252_gshared (Collection_1_t2103 * __this, int32_t ___item, const MethodInfo* method);
#define Collection_1_Remove_m15252(__this, ___item, method) (( bool (*) (Collection_1_t2103 *, int32_t, const MethodInfo*))Collection_1_Remove_m15252_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m15253_gshared (Collection_1_t2103 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m15253(__this, ___index, method) (( void (*) (Collection_1_t2103 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m15253_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m15254_gshared (Collection_1_t2103 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m15254(__this, ___index, method) (( void (*) (Collection_1_t2103 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m15254_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int32>::get_Count()
extern "C" int32_t Collection_1_get_Count_m15255_gshared (Collection_1_t2103 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m15255(__this, method) (( int32_t (*) (Collection_1_t2103 *, const MethodInfo*))Collection_1_get_Count_m15255_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t Collection_1_get_Item_m15256_gshared (Collection_1_t2103 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m15256(__this, ___index, method) (( int32_t (*) (Collection_1_t2103 *, int32_t, const MethodInfo*))Collection_1_get_Item_m15256_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m15257_gshared (Collection_1_t2103 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method);
#define Collection_1_set_Item_m15257(__this, ___index, ___value, method) (( void (*) (Collection_1_t2103 *, int32_t, int32_t, const MethodInfo*))Collection_1_set_Item_m15257_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m15258_gshared (Collection_1_t2103 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define Collection_1_SetItem_m15258(__this, ___index, ___item, method) (( void (*) (Collection_1_t2103 *, int32_t, int32_t, const MethodInfo*))Collection_1_SetItem_m15258_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m15259_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m15259(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m15259_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Int32>::ConvertItem(System.Object)
extern "C" int32_t Collection_1_ConvertItem_m15260_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m15260(__this /* static, unused */, ___item, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m15260_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m15261_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m15261(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m15261_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m15262_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m15262(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m15262_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m15263_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m15263(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m15263_gshared)(__this /* static, unused */, ___list, method)
