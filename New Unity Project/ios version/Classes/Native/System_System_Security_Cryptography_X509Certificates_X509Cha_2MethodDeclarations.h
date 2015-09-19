#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509ChainElementCollection
struct X509ChainElementCollection_t951;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t62;
// System.Security.Cryptography.X509Certificates.X509ChainElement
struct X509ChainElement_t954;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator
struct X509ChainElementEnumerator_t957;
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t884;

// System.Void System.Security.Cryptography.X509Certificates.X509ChainElementCollection::.ctor()
extern "C" void X509ChainElementCollection__ctor_m5067 (X509ChainElementCollection_t951 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainElementCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void X509ChainElementCollection_System_Collections_ICollection_CopyTo_m5068 (X509ChainElementCollection_t951 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Security.Cryptography.X509Certificates.X509ChainElementCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * X509ChainElementCollection_System_Collections_IEnumerable_GetEnumerator_m5069 (X509ChainElementCollection_t951 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509ChainElementCollection::get_Count()
extern "C" int32_t X509ChainElementCollection_get_Count_m5070 (X509ChainElementCollection_t951 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509ChainElementCollection::get_IsSynchronized()
extern "C" bool X509ChainElementCollection_get_IsSynchronized_m5071 (X509ChainElementCollection_t951 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainElement System.Security.Cryptography.X509Certificates.X509ChainElementCollection::get_Item(System.Int32)
extern "C" X509ChainElement_t954 * X509ChainElementCollection_get_Item_m5072 (X509ChainElementCollection_t951 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Cryptography.X509Certificates.X509ChainElementCollection::get_SyncRoot()
extern "C" Object_t * X509ChainElementCollection_get_SyncRoot_m5073 (X509ChainElementCollection_t951 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator System.Security.Cryptography.X509Certificates.X509ChainElementCollection::GetEnumerator()
extern "C" X509ChainElementEnumerator_t957 * X509ChainElementCollection_GetEnumerator_m5074 (X509ChainElementCollection_t951 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainElementCollection::Add(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C" void X509ChainElementCollection_Add_m5075 (X509ChainElementCollection_t951 * __this, X509Certificate2_t884 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainElementCollection::Clear()
extern "C" void X509ChainElementCollection_Clear_m5076 (X509ChainElementCollection_t951 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509ChainElementCollection::Contains(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C" bool X509ChainElementCollection_Contains_m5077 (X509ChainElementCollection_t951 * __this, X509Certificate2_t884 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
