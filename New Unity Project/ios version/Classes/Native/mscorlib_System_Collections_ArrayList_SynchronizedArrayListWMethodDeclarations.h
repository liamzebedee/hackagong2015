#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ArrayList/SynchronizedArrayListWrapper
struct SynchronizedArrayListWrapper_t1178;
// System.Collections.ArrayList
struct ArrayList_t724;
// System.Object
struct Object_t;
// System.Collections.ICollection
struct ICollection_t1051;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t62;
// System.Collections.IComparer
struct IComparer_t903;
// System.Object[]
struct ObjectU5BU5D_t78;
// System.Type
struct Type_t;

// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::.ctor(System.Collections.ArrayList)
extern "C" void SynchronizedArrayListWrapper__ctor_m7113 (SynchronizedArrayListWrapper_t1178 * __this, ArrayList_t724 * ___innerArrayList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/SynchronizedArrayListWrapper::get_Item(System.Int32)
extern "C" Object_t * SynchronizedArrayListWrapper_get_Item_m7114 (SynchronizedArrayListWrapper_t1178 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::set_Item(System.Int32,System.Object)
extern "C" void SynchronizedArrayListWrapper_set_Item_m7115 (SynchronizedArrayListWrapper_t1178 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/SynchronizedArrayListWrapper::get_Count()
extern "C" int32_t SynchronizedArrayListWrapper_get_Count_m7116 (SynchronizedArrayListWrapper_t1178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/SynchronizedArrayListWrapper::get_Capacity()
extern "C" int32_t SynchronizedArrayListWrapper_get_Capacity_m7117 (SynchronizedArrayListWrapper_t1178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::set_Capacity(System.Int32)
extern "C" void SynchronizedArrayListWrapper_set_Capacity_m7118 (SynchronizedArrayListWrapper_t1178 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/SynchronizedArrayListWrapper::get_IsFixedSize()
extern "C" bool SynchronizedArrayListWrapper_get_IsFixedSize_m7119 (SynchronizedArrayListWrapper_t1178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/SynchronizedArrayListWrapper::get_IsReadOnly()
extern "C" bool SynchronizedArrayListWrapper_get_IsReadOnly_m7120 (SynchronizedArrayListWrapper_t1178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/SynchronizedArrayListWrapper::get_IsSynchronized()
extern "C" bool SynchronizedArrayListWrapper_get_IsSynchronized_m7121 (SynchronizedArrayListWrapper_t1178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/SynchronizedArrayListWrapper::get_SyncRoot()
extern "C" Object_t * SynchronizedArrayListWrapper_get_SyncRoot_m7122 (SynchronizedArrayListWrapper_t1178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/SynchronizedArrayListWrapper::Add(System.Object)
extern "C" int32_t SynchronizedArrayListWrapper_Add_m7123 (SynchronizedArrayListWrapper_t1178 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::Clear()
extern "C" void SynchronizedArrayListWrapper_Clear_m7124 (SynchronizedArrayListWrapper_t1178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/SynchronizedArrayListWrapper::Contains(System.Object)
extern "C" bool SynchronizedArrayListWrapper_Contains_m7125 (SynchronizedArrayListWrapper_t1178 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/SynchronizedArrayListWrapper::IndexOf(System.Object)
extern "C" int32_t SynchronizedArrayListWrapper_IndexOf_m7126 (SynchronizedArrayListWrapper_t1178 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/SynchronizedArrayListWrapper::IndexOf(System.Object,System.Int32)
extern "C" int32_t SynchronizedArrayListWrapper_IndexOf_m7127 (SynchronizedArrayListWrapper_t1178 * __this, Object_t * ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/SynchronizedArrayListWrapper::IndexOf(System.Object,System.Int32,System.Int32)
extern "C" int32_t SynchronizedArrayListWrapper_IndexOf_m7128 (SynchronizedArrayListWrapper_t1178 * __this, Object_t * ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::Insert(System.Int32,System.Object)
extern "C" void SynchronizedArrayListWrapper_Insert_m7129 (SynchronizedArrayListWrapper_t1178 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::InsertRange(System.Int32,System.Collections.ICollection)
extern "C" void SynchronizedArrayListWrapper_InsertRange_m7130 (SynchronizedArrayListWrapper_t1178 * __this, int32_t ___index, Object_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::Remove(System.Object)
extern "C" void SynchronizedArrayListWrapper_Remove_m7131 (SynchronizedArrayListWrapper_t1178 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::RemoveAt(System.Int32)
extern "C" void SynchronizedArrayListWrapper_RemoveAt_m7132 (SynchronizedArrayListWrapper_t1178 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::CopyTo(System.Array)
extern "C" void SynchronizedArrayListWrapper_CopyTo_m7133 (SynchronizedArrayListWrapper_t1178 * __this, Array_t * ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::CopyTo(System.Array,System.Int32)
extern "C" void SynchronizedArrayListWrapper_CopyTo_m7134 (SynchronizedArrayListWrapper_t1178 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::CopyTo(System.Int32,System.Array,System.Int32,System.Int32)
extern "C" void SynchronizedArrayListWrapper_CopyTo_m7135 (SynchronizedArrayListWrapper_t1178 * __this, int32_t ___index, Array_t * ___array, int32_t ___arrayIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.ArrayList/SynchronizedArrayListWrapper::GetEnumerator()
extern "C" Object_t * SynchronizedArrayListWrapper_GetEnumerator_m7136 (SynchronizedArrayListWrapper_t1178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::AddRange(System.Collections.ICollection)
extern "C" void SynchronizedArrayListWrapper_AddRange_m7137 (SynchronizedArrayListWrapper_t1178 * __this, Object_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/SynchronizedArrayListWrapper::Clone()
extern "C" Object_t * SynchronizedArrayListWrapper_Clone_m7138 (SynchronizedArrayListWrapper_t1178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::Sort()
extern "C" void SynchronizedArrayListWrapper_Sort_m7139 (SynchronizedArrayListWrapper_t1178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::Sort(System.Collections.IComparer)
extern "C" void SynchronizedArrayListWrapper_Sort_m7140 (SynchronizedArrayListWrapper_t1178 * __this, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Collections.ArrayList/SynchronizedArrayListWrapper::ToArray()
extern "C" ObjectU5BU5D_t78* SynchronizedArrayListWrapper_ToArray_m7141 (SynchronizedArrayListWrapper_t1178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Collections.ArrayList/SynchronizedArrayListWrapper::ToArray(System.Type)
extern "C" Array_t * SynchronizedArrayListWrapper_ToArray_m7142 (SynchronizedArrayListWrapper_t1178 * __this, Type_t * ___elementType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
