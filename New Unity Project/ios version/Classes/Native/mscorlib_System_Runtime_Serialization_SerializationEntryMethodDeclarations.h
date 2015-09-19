#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.Runtime.Serialization.SerializationEntry
#include "mscorlib_System_Runtime_Serialization_SerializationEntry.h"

// System.Void System.Runtime.Serialization.SerializationEntry::.ctor(System.String,System.Type,System.Object)
extern "C" void SerializationEntry__ctor_m9021 (SerializationEntry_t1497 * __this, String_t* ___name, Type_t * ___type, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Serialization.SerializationEntry::get_Name()
extern "C" String_t* SerializationEntry_get_Name_m9022 (SerializationEntry_t1497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.SerializationEntry::get_Value()
extern "C" Object_t * SerializationEntry_get_Value_m9023 (SerializationEntry_t1497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
