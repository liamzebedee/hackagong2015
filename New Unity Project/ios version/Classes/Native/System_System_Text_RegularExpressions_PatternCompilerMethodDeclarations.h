#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.PatternCompiler
struct PatternCompiler_t1000;
// System.Text.RegularExpressions.IMachineFactory
struct IMachineFactory_t984;
// System.Collections.BitArray
struct BitArray_t1033;
// System.String
struct String_t;
// System.Text.RegularExpressions.LinkRef
struct LinkRef_t995;
// System.Text.RegularExpressions.OpCode
#include "System_System_Text_RegularExpressions_OpCode.h"
// System.Text.RegularExpressions.OpFlags
#include "System_System_Text_RegularExpressions_OpFlags.h"
// System.Text.RegularExpressions.Category
#include "System_System_Text_RegularExpressions_Category.h"
// System.Text.RegularExpressions.Position
#include "System_System_Text_RegularExpressions_Position.h"

// System.Void System.Text.RegularExpressions.PatternCompiler::.ctor()
extern "C" void PatternCompiler__ctor_m5291 (PatternCompiler_t1000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Text.RegularExpressions.PatternCompiler::EncodeOp(System.Text.RegularExpressions.OpCode,System.Text.RegularExpressions.OpFlags)
extern "C" uint16_t PatternCompiler_EncodeOp_m5292 (Object_t * __this /* static, unused */, uint16_t ___op, uint16_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.IMachineFactory System.Text.RegularExpressions.PatternCompiler::GetMachineFactory()
extern "C" Object_t * PatternCompiler_GetMachineFactory_m5293 (PatternCompiler_t1000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitFalse()
extern "C" void PatternCompiler_EmitFalse_m5294 (PatternCompiler_t1000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitTrue()
extern "C" void PatternCompiler_EmitTrue_m5295 (PatternCompiler_t1000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitCount(System.Int32)
extern "C" void PatternCompiler_EmitCount_m5296 (PatternCompiler_t1000 * __this, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitCharacter(System.Char,System.Boolean,System.Boolean,System.Boolean)
extern "C" void PatternCompiler_EmitCharacter_m5297 (PatternCompiler_t1000 * __this, uint16_t ___c, bool ___negate, bool ___ignore, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitCategory(System.Text.RegularExpressions.Category,System.Boolean,System.Boolean)
extern "C" void PatternCompiler_EmitCategory_m5298 (PatternCompiler_t1000 * __this, uint16_t ___cat, bool ___negate, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitNotCategory(System.Text.RegularExpressions.Category,System.Boolean,System.Boolean)
extern "C" void PatternCompiler_EmitNotCategory_m5299 (PatternCompiler_t1000 * __this, uint16_t ___cat, bool ___negate, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean)
extern "C" void PatternCompiler_EmitRange_m5300 (PatternCompiler_t1000 * __this, uint16_t ___lo, uint16_t ___hi, bool ___negate, bool ___ignore, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitSet(System.Char,System.Collections.BitArray,System.Boolean,System.Boolean,System.Boolean)
extern "C" void PatternCompiler_EmitSet_m5301 (PatternCompiler_t1000 * __this, uint16_t ___lo, BitArray_t1033 * ___set, bool ___negate, bool ___ignore, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitString(System.String,System.Boolean,System.Boolean)
extern "C" void PatternCompiler_EmitString_m5302 (PatternCompiler_t1000 * __this, String_t* ___str, bool ___ignore, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitPosition(System.Text.RegularExpressions.Position)
extern "C" void PatternCompiler_EmitPosition_m5303 (PatternCompiler_t1000 * __this, uint16_t ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitOpen(System.Int32)
extern "C" void PatternCompiler_EmitOpen_m5304 (PatternCompiler_t1000 * __this, int32_t ___gid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitClose(System.Int32)
extern "C" void PatternCompiler_EmitClose_m5305 (PatternCompiler_t1000 * __this, int32_t ___gid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitBalanceStart(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
extern "C" void PatternCompiler_EmitBalanceStart_m5306 (PatternCompiler_t1000 * __this, int32_t ___gid, int32_t ___balance, bool ___capture, LinkRef_t995 * ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitBalance()
extern "C" void PatternCompiler_EmitBalance_m5307 (PatternCompiler_t1000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitReference(System.Int32,System.Boolean,System.Boolean)
extern "C" void PatternCompiler_EmitReference_m5308 (PatternCompiler_t1000 * __this, int32_t ___gid, bool ___ignore, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitIfDefined(System.Int32,System.Text.RegularExpressions.LinkRef)
extern "C" void PatternCompiler_EmitIfDefined_m5309 (PatternCompiler_t1000 * __this, int32_t ___gid, LinkRef_t995 * ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitSub(System.Text.RegularExpressions.LinkRef)
extern "C" void PatternCompiler_EmitSub_m5310 (PatternCompiler_t1000 * __this, LinkRef_t995 * ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitTest(System.Text.RegularExpressions.LinkRef,System.Text.RegularExpressions.LinkRef)
extern "C" void PatternCompiler_EmitTest_m5311 (PatternCompiler_t1000 * __this, LinkRef_t995 * ___yes, LinkRef_t995 * ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitBranch(System.Text.RegularExpressions.LinkRef)
extern "C" void PatternCompiler_EmitBranch_m5312 (PatternCompiler_t1000 * __this, LinkRef_t995 * ___next, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitJump(System.Text.RegularExpressions.LinkRef)
extern "C" void PatternCompiler_EmitJump_m5313 (PatternCompiler_t1000 * __this, LinkRef_t995 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitRepeat(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
extern "C" void PatternCompiler_EmitRepeat_m5314 (PatternCompiler_t1000 * __this, int32_t ___min, int32_t ___max, bool ___lazy, LinkRef_t995 * ___until, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitUntil(System.Text.RegularExpressions.LinkRef)
extern "C" void PatternCompiler_EmitUntil_m5315 (PatternCompiler_t1000 * __this, LinkRef_t995 * ___repeat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitFastRepeat(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
extern "C" void PatternCompiler_EmitFastRepeat_m5316 (PatternCompiler_t1000 * __this, int32_t ___min, int32_t ___max, bool ___lazy, LinkRef_t995 * ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitIn(System.Text.RegularExpressions.LinkRef)
extern "C" void PatternCompiler_EmitIn_m5317 (PatternCompiler_t1000 * __this, LinkRef_t995 * ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitAnchor(System.Boolean,System.Int32,System.Text.RegularExpressions.LinkRef)
extern "C" void PatternCompiler_EmitAnchor_m5318 (PatternCompiler_t1000 * __this, bool ___reverse, int32_t ___offset, LinkRef_t995 * ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitInfo(System.Int32,System.Int32,System.Int32)
extern "C" void PatternCompiler_EmitInfo_m5319 (PatternCompiler_t1000 * __this, int32_t ___count, int32_t ___min, int32_t ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.PatternCompiler::NewLink()
extern "C" LinkRef_t995 * PatternCompiler_NewLink_m5320 (PatternCompiler_t1000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::ResolveLink(System.Text.RegularExpressions.LinkRef)
extern "C" void PatternCompiler_ResolveLink_m5321 (PatternCompiler_t1000 * __this, LinkRef_t995 * ___lref, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitBranchEnd()
extern "C" void PatternCompiler_EmitBranchEnd_m5322 (PatternCompiler_t1000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitAlternationEnd()
extern "C" void PatternCompiler_EmitAlternationEnd_m5323 (PatternCompiler_t1000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.OpFlags System.Text.RegularExpressions.PatternCompiler::MakeFlags(System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C" uint16_t PatternCompiler_MakeFlags_m5324 (Object_t * __this /* static, unused */, bool ___negate, bool ___ignore, bool ___reverse, bool ___lazy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::Emit(System.Text.RegularExpressions.OpCode)
extern "C" void PatternCompiler_Emit_m5325 (PatternCompiler_t1000 * __this, uint16_t ___op, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::Emit(System.Text.RegularExpressions.OpCode,System.Text.RegularExpressions.OpFlags)
extern "C" void PatternCompiler_Emit_m5326 (PatternCompiler_t1000 * __this, uint16_t ___op, uint16_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::Emit(System.UInt16)
extern "C" void PatternCompiler_Emit_m5327 (PatternCompiler_t1000 * __this, uint16_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.PatternCompiler::get_CurrentAddress()
extern "C" int32_t PatternCompiler_get_CurrentAddress_m5328 (PatternCompiler_t1000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::BeginLink(System.Text.RegularExpressions.LinkRef)
extern "C" void PatternCompiler_BeginLink_m5329 (PatternCompiler_t1000 * __this, LinkRef_t995 * ___lref, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitLink(System.Text.RegularExpressions.LinkRef)
extern "C" void PatternCompiler_EmitLink_m5330 (PatternCompiler_t1000 * __this, LinkRef_t995 * ___lref, const MethodInfo* method) IL2CPP_METHOD_ATTR;
