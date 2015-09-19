#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FileWebRequestCreator
struct FileWebRequestCreator_t922;
// System.Net.WebRequest
struct WebRequest_t886;
// System.Uri
struct Uri_t25;

// System.Void System.Net.FileWebRequestCreator::.ctor()
extern "C" void FileWebRequestCreator__ctor_m4855 (FileWebRequestCreator_t922 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FileWebRequestCreator::Create(System.Uri)
extern "C" WebRequest_t886 * FileWebRequestCreator_Create_m4856 (FileWebRequestCreator_t922 * __this, Uri_t25 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
