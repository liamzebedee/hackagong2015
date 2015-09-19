#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t1256;
// System.String
struct String_t;
// System.Reflection.Module[]
struct ModuleU5BU5D_t1258;
// System.Type[]
struct TypeU5BU5D_t645;
// System.Exception
struct Exception_t108;
// System.Reflection.AssemblyName
struct AssemblyName_t1303;

// System.String System.Reflection.Emit.AssemblyBuilder::get_Location()
extern "C" String_t* AssemblyBuilder_get_Location_m7880 (AssemblyBuilder_t1256 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Emit.AssemblyBuilder::GetModulesInternal()
extern "C" ModuleU5BU5D_t1258* AssemblyBuilder_GetModulesInternal_m7881 (AssemblyBuilder_t1256 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.AssemblyBuilder::GetTypes(System.Boolean)
extern "C" TypeU5BU5D_t645* AssemblyBuilder_GetTypes_m7882 (AssemblyBuilder_t1256 * __this, bool ___exportedOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsCompilerContext()
extern "C" bool AssemblyBuilder_get_IsCompilerContext_m7883 (AssemblyBuilder_t1256 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.AssemblyBuilder::not_supported()
extern "C" Exception_t108 * AssemblyBuilder_not_supported_m7884 (AssemblyBuilder_t1256 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Emit.AssemblyBuilder::UnprotectedGetName()
extern "C" AssemblyName_t1303 * AssemblyBuilder_UnprotectedGetName_m7885 (AssemblyBuilder_t1256 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
