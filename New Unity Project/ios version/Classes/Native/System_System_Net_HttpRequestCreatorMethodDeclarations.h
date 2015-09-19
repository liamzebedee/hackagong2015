#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpRequestCreator
struct HttpRequestCreator_t926;
// System.Net.WebRequest
struct WebRequest_t886;
// System.Uri
struct Uri_t25;

// System.Void System.Net.HttpRequestCreator::.ctor()
extern "C" void HttpRequestCreator__ctor_m4863 (HttpRequestCreator_t926 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t886 * HttpRequestCreator_Create_m4864 (HttpRequestCreator_t926 * __this, Uri_t25 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
