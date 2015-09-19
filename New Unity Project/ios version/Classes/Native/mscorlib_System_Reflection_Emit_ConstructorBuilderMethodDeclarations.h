#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.ConstructorBuilder
struct ConstructorBuilder_t1259;
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t1261;
// System.Type[]
struct TypeU5BU5D_t645;
// System.Type[][]
struct TypeU5BU5DU5BU5D_t1263;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t675;
// System.Object
struct Object_t;
// System.Reflection.Binder
struct Binder_t667;
// System.Object[]
struct ObjectU5BU5D_t78;
// System.Globalization.CultureInfo
struct CultureInfo_t669;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t1260;
// System.Reflection.Module
struct Module_t1275;
// System.Exception
struct Exception_t108;
// System.Reflection.MethodAttributes
#include "mscorlib_System_Reflection_MethodAttributes.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.RuntimeMethodHandle
#include "mscorlib_System_RuntimeMethodHandle.h"
// System.Reflection.Emit.MethodToken
#include "mscorlib_System_Reflection_Emit_MethodToken.h"

// System.Void System.Reflection.Emit.ConstructorBuilder::.ctor(System.Reflection.Emit.TypeBuilder,System.Reflection.MethodAttributes,System.Reflection.CallingConventions,System.Type[],System.Type[][],System.Type[][])
extern "C" void ConstructorBuilder__ctor_m7886 (ConstructorBuilder_t1259 * __this, TypeBuilder_t1261 * ___tb, int32_t ___attributes, int32_t ___callingConvention, TypeU5BU5D_t645* ___parameterTypes, TypeU5BU5DU5BU5D_t1263* ___paramModReq, TypeU5BU5DU5BU5D_t1263* ___paramModOpt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CallingConventions System.Reflection.Emit.ConstructorBuilder::get_CallingConvention()
extern "C" int32_t ConstructorBuilder_get_CallingConvention_m7887 (ConstructorBuilder_t1259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ConstructorBuilder::get_TypeBuilder()
extern "C" TypeBuilder_t1261 * ConstructorBuilder_get_TypeBuilder_m7888 (ConstructorBuilder_t1259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.Emit.ConstructorBuilder::GetParameters()
extern "C" ParameterInfoU5BU5D_t675* ConstructorBuilder_GetParameters_m7889 (ConstructorBuilder_t1259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.Emit.ConstructorBuilder::GetParametersInternal()
extern "C" ParameterInfoU5BU5D_t675* ConstructorBuilder_GetParametersInternal_m7890 (ConstructorBuilder_t1259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ConstructorBuilder::GetParameterCount()
extern "C" int32_t ConstructorBuilder_GetParameterCount_m7891 (ConstructorBuilder_t1259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.ConstructorBuilder::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C" Object_t * ConstructorBuilder_Invoke_m7892 (ConstructorBuilder_t1259 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t667 * ___binder, ObjectU5BU5D_t78* ___parameters, CultureInfo_t669 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.ConstructorBuilder::Invoke(System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C" Object_t * ConstructorBuilder_Invoke_m7893 (ConstructorBuilder_t1259 * __this, int32_t ___invokeAttr, Binder_t667 * ___binder, ObjectU5BU5D_t78* ___parameters, CultureInfo_t669 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeMethodHandle System.Reflection.Emit.ConstructorBuilder::get_MethodHandle()
extern "C" RuntimeMethodHandle_t1670  ConstructorBuilder_get_MethodHandle_m7894 (ConstructorBuilder_t1259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes System.Reflection.Emit.ConstructorBuilder::get_Attributes()
extern "C" int32_t ConstructorBuilder_get_Attributes_m7895 (ConstructorBuilder_t1259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.ConstructorBuilder::get_ReflectedType()
extern "C" Type_t * ConstructorBuilder_get_ReflectedType_m7896 (ConstructorBuilder_t1259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.ConstructorBuilder::get_DeclaringType()
extern "C" Type_t * ConstructorBuilder_get_DeclaringType_m7897 (ConstructorBuilder_t1259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.ConstructorBuilder::get_Name()
extern "C" String_t* ConstructorBuilder_get_Name_m7898 (ConstructorBuilder_t1259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.ConstructorBuilder::IsDefined(System.Type,System.Boolean)
extern "C" bool ConstructorBuilder_IsDefined_m7899 (ConstructorBuilder_t1259 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.ConstructorBuilder::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t78* ConstructorBuilder_GetCustomAttributes_m7900 (ConstructorBuilder_t1259 * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.ConstructorBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t78* ConstructorBuilder_GetCustomAttributes_m7901 (ConstructorBuilder_t1259 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ILGenerator System.Reflection.Emit.ConstructorBuilder::GetILGenerator()
extern "C" ILGenerator_t1260 * ConstructorBuilder_GetILGenerator_m7902 (ConstructorBuilder_t1259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ILGenerator System.Reflection.Emit.ConstructorBuilder::GetILGenerator(System.Int32)
extern "C" ILGenerator_t1260 * ConstructorBuilder_GetILGenerator_m7903 (ConstructorBuilder_t1259 * __this, int32_t ___streamSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.MethodToken System.Reflection.Emit.ConstructorBuilder::GetToken()
extern "C" MethodToken_t1278  ConstructorBuilder_GetToken_m7904 (ConstructorBuilder_t1259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.ConstructorBuilder::get_Module()
extern "C" Module_t1275 * ConstructorBuilder_get_Module_m7905 (ConstructorBuilder_t1259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.ConstructorBuilder::ToString()
extern "C" String_t* ConstructorBuilder_ToString_m7906 (ConstructorBuilder_t1259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ConstructorBuilder::fixup()
extern "C" void ConstructorBuilder_fixup_m7907 (ConstructorBuilder_t1259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ConstructorBuilder::get_next_table_index(System.Object,System.Int32,System.Boolean)
extern "C" int32_t ConstructorBuilder_get_next_table_index_m7908 (ConstructorBuilder_t1259 * __this, Object_t * ___obj, int32_t ___table, bool ___inc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.ConstructorBuilder::get_IsCompilerContext()
extern "C" bool ConstructorBuilder_get_IsCompilerContext_m7909 (ConstructorBuilder_t1259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.ConstructorBuilder::not_supported()
extern "C" Exception_t108 * ConstructorBuilder_not_supported_m7910 (ConstructorBuilder_t1259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.ConstructorBuilder::not_created()
extern "C" Exception_t108 * ConstructorBuilder_not_created_m7911 (ConstructorBuilder_t1259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
