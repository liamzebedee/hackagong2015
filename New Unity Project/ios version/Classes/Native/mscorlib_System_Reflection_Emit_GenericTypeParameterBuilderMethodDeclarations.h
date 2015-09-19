#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.GenericTypeParameterBuilder
struct GenericTypeParameterBuilder_t1267;
// System.Type
struct Type_t;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t682;
// System.Reflection.Binder
struct Binder_t667;
// System.Type[]
struct TypeU5BU5D_t645;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t668;
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t1717;
// System.Reflection.EventInfo
struct EventInfo_t;
// System.String
struct String_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t1718;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t1322;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t78;
// System.Globalization.CultureInfo
struct CultureInfo_t669;
// System.String[]
struct StringU5BU5D_t82;
// System.Reflection.Assembly
struct Assembly_t1059;
// System.Reflection.Module
struct Module_t1275;
// System.Exception
struct Exception_t108;
// System.Reflection.TypeAttributes
#include "mscorlib_System_Reflection_TypeAttributes.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"

// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsSubclassOf(System.Type)
extern "C" bool GenericTypeParameterBuilder_IsSubclassOf_m7960 (GenericTypeParameterBuilder_t1267 * __this, Type_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.TypeAttributes System.Reflection.Emit.GenericTypeParameterBuilder::GetAttributeFlagsImpl()
extern "C" int32_t GenericTypeParameterBuilder_GetAttributeFlagsImpl_m7961 (GenericTypeParameterBuilder_t1267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" ConstructorInfo_t682 * GenericTypeParameterBuilder_GetConstructorImpl_m7962 (GenericTypeParameterBuilder_t1267 * __this, int32_t ___bindingAttr, Binder_t667 * ___binder, int32_t ___callConvention, TypeU5BU5D_t645* ___types, ParameterModifierU5BU5D_t668* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetConstructors(System.Reflection.BindingFlags)
extern "C" ConstructorInfoU5BU5D_t1717* GenericTypeParameterBuilder_GetConstructors_m7963 (GenericTypeParameterBuilder_t1267 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetEvent(System.String,System.Reflection.BindingFlags)
extern "C" EventInfo_t * GenericTypeParameterBuilder_GetEvent_m7964 (GenericTypeParameterBuilder_t1267 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetField(System.String,System.Reflection.BindingFlags)
extern "C" FieldInfo_t * GenericTypeParameterBuilder_GetField_m7965 (GenericTypeParameterBuilder_t1267 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetFields(System.Reflection.BindingFlags)
extern "C" FieldInfoU5BU5D_t1718* GenericTypeParameterBuilder_GetFields_m7966 (GenericTypeParameterBuilder_t1267 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.GenericTypeParameterBuilder::GetInterfaces()
extern "C" TypeU5BU5D_t645* GenericTypeParameterBuilder_GetInterfaces_m7967 (GenericTypeParameterBuilder_t1267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetMethods(System.Reflection.BindingFlags)
extern "C" MethodInfoU5BU5D_t1322* GenericTypeParameterBuilder_GetMethods_m7968 (GenericTypeParameterBuilder_t1267 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" MethodInfo_t * GenericTypeParameterBuilder_GetMethodImpl_m7969 (GenericTypeParameterBuilder_t1267 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t667 * ___binder, int32_t ___callConvention, TypeU5BU5D_t645* ___types, ParameterModifierU5BU5D_t668* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C" PropertyInfo_t * GenericTypeParameterBuilder_GetPropertyImpl_m7970 (GenericTypeParameterBuilder_t1267 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t667 * ___binder, Type_t * ___returnType, TypeU5BU5D_t645* ___types, ParameterModifierU5BU5D_t668* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::HasElementTypeImpl()
extern "C" bool GenericTypeParameterBuilder_HasElementTypeImpl_m7971 (GenericTypeParameterBuilder_t1267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsAssignableFrom(System.Type)
extern "C" bool GenericTypeParameterBuilder_IsAssignableFrom_m7972 (GenericTypeParameterBuilder_t1267 * __this, Type_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsInstanceOfType(System.Object)
extern "C" bool GenericTypeParameterBuilder_IsInstanceOfType_m7973 (GenericTypeParameterBuilder_t1267 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsArrayImpl()
extern "C" bool GenericTypeParameterBuilder_IsArrayImpl_m7974 (GenericTypeParameterBuilder_t1267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsByRefImpl()
extern "C" bool GenericTypeParameterBuilder_IsByRefImpl_m7975 (GenericTypeParameterBuilder_t1267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsPointerImpl()
extern "C" bool GenericTypeParameterBuilder_IsPointerImpl_m7976 (GenericTypeParameterBuilder_t1267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsPrimitiveImpl()
extern "C" bool GenericTypeParameterBuilder_IsPrimitiveImpl_m7977 (GenericTypeParameterBuilder_t1267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsValueTypeImpl()
extern "C" bool GenericTypeParameterBuilder_IsValueTypeImpl_m7978 (GenericTypeParameterBuilder_t1267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.GenericTypeParameterBuilder::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
extern "C" Object_t * GenericTypeParameterBuilder_InvokeMember_m7979 (GenericTypeParameterBuilder_t1267 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t667 * ___binder, Object_t * ___target, ObjectU5BU5D_t78* ___args, ParameterModifierU5BU5D_t668* ___modifiers, CultureInfo_t669 * ___culture, StringU5BU5D_t82* ___namedParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::GetElementType()
extern "C" Type_t * GenericTypeParameterBuilder_GetElementType_m7980 (GenericTypeParameterBuilder_t1267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_UnderlyingSystemType()
extern "C" Type_t * GenericTypeParameterBuilder_get_UnderlyingSystemType_m7981 (GenericTypeParameterBuilder_t1267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Emit.GenericTypeParameterBuilder::get_Assembly()
extern "C" Assembly_t1059 * GenericTypeParameterBuilder_get_Assembly_m7982 (GenericTypeParameterBuilder_t1267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_AssemblyQualifiedName()
extern "C" String_t* GenericTypeParameterBuilder_get_AssemblyQualifiedName_m7983 (GenericTypeParameterBuilder_t1267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_BaseType()
extern "C" Type_t * GenericTypeParameterBuilder_get_BaseType_m7984 (GenericTypeParameterBuilder_t1267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_FullName()
extern "C" String_t* GenericTypeParameterBuilder_get_FullName_m7985 (GenericTypeParameterBuilder_t1267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsDefined(System.Type,System.Boolean)
extern "C" bool GenericTypeParameterBuilder_IsDefined_m7986 (GenericTypeParameterBuilder_t1267 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.GenericTypeParameterBuilder::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t78* GenericTypeParameterBuilder_GetCustomAttributes_m7987 (GenericTypeParameterBuilder_t1267 * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.GenericTypeParameterBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t78* GenericTypeParameterBuilder_GetCustomAttributes_m7988 (GenericTypeParameterBuilder_t1267 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_Name()
extern "C" String_t* GenericTypeParameterBuilder_get_Name_m7989 (GenericTypeParameterBuilder_t1267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_Namespace()
extern "C" String_t* GenericTypeParameterBuilder_get_Namespace_m7990 (GenericTypeParameterBuilder_t1267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.GenericTypeParameterBuilder::get_Module()
extern "C" Module_t1275 * GenericTypeParameterBuilder_get_Module_m7991 (GenericTypeParameterBuilder_t1267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_DeclaringType()
extern "C" Type_t * GenericTypeParameterBuilder_get_DeclaringType_m7992 (GenericTypeParameterBuilder_t1267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_ReflectedType()
extern "C" Type_t * GenericTypeParameterBuilder_get_ReflectedType_m7993 (GenericTypeParameterBuilder_t1267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Reflection.Emit.GenericTypeParameterBuilder::get_TypeHandle()
extern "C" RuntimeTypeHandle_t1077  GenericTypeParameterBuilder_get_TypeHandle_m7994 (GenericTypeParameterBuilder_t1267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.GenericTypeParameterBuilder::GetGenericArguments()
extern "C" TypeU5BU5D_t645* GenericTypeParameterBuilder_GetGenericArguments_m7995 (GenericTypeParameterBuilder_t1267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::GetGenericTypeDefinition()
extern "C" Type_t * GenericTypeParameterBuilder_GetGenericTypeDefinition_m7996 (GenericTypeParameterBuilder_t1267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_ContainsGenericParameters()
extern "C" bool GenericTypeParameterBuilder_get_ContainsGenericParameters_m7997 (GenericTypeParameterBuilder_t1267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_IsGenericParameter()
extern "C" bool GenericTypeParameterBuilder_get_IsGenericParameter_m7998 (GenericTypeParameterBuilder_t1267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_IsGenericType()
extern "C" bool GenericTypeParameterBuilder_get_IsGenericType_m7999 (GenericTypeParameterBuilder_t1267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_IsGenericTypeDefinition()
extern "C" bool GenericTypeParameterBuilder_get_IsGenericTypeDefinition_m8000 (GenericTypeParameterBuilder_t1267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.GenericTypeParameterBuilder::not_supported()
extern "C" Exception_t108 * GenericTypeParameterBuilder_not_supported_m8001 (GenericTypeParameterBuilder_t1267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::ToString()
extern "C" String_t* GenericTypeParameterBuilder_ToString_m8002 (GenericTypeParameterBuilder_t1267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::Equals(System.Object)
extern "C" bool GenericTypeParameterBuilder_Equals_m8003 (GenericTypeParameterBuilder_t1267 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.GenericTypeParameterBuilder::GetHashCode()
extern "C" int32_t GenericTypeParameterBuilder_GetHashCode_m8004 (GenericTypeParameterBuilder_t1267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::MakeGenericType(System.Type[])
extern "C" Type_t * GenericTypeParameterBuilder_MakeGenericType_m8005 (GenericTypeParameterBuilder_t1267 * __this, TypeU5BU5D_t645* ___typeArguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
