﻿#pragma once

#include "../CommonDef.h"

namespace unityfusionclr
{
namespace metadata
{
	enum class OpcodeValue : uint8_t
	{
		//!!!{{OPCODE_VALUE
		NOP = 0,
		BREAK = 1,
		LDARG_0 = 2,
		LDARG_1 = 3,
		LDARG_2 = 4,
		LDARG_3 = 5,
		LDLOC_0 = 6,
		LDLOC_1 = 7,
		LDLOC_2 = 8,
		LDLOC_3 = 9,
		STLOC_0 = 10,
		STLOC_1 = 11,
		STLOC_2 = 12,
		STLOC_3 = 13,
		LDARG_S = 14,
		LDARGA_S = 15,
		STARG_S = 16,
		LDLOC_S = 17,
		LDLOCA_S = 18,
		STLOC_S = 19,
		LDNULL = 20,
		LDC_I4_M1 = 21,
		LDC_I4_0 = 22,
		LDC_I4_1 = 23,
		LDC_I4_2 = 24,
		LDC_I4_3 = 25,
		LDC_I4_4 = 26,
		LDC_I4_5 = 27,
		LDC_I4_6 = 28,
		LDC_I4_7 = 29,
		LDC_I4_8 = 30,
		LDC_I4_S = 31,
		LDC_I4 = 32,
		LDC_I8 = 33,
		LDC_R4 = 34,
		LDC_R8 = 35,
		UNUSED99 = 36,
		DUP = 37,
		POP = 38,
		JMP = 39,
		CALL = 40,
		CALLI = 41,
		RET = 42,
		BR_S = 43,
		BRFALSE_S = 44,
		BRTRUE_S = 45,
		BEQ_S = 46,
		BGE_S = 47,
		BGT_S = 48,
		BLE_S = 49,
		BLT_S = 50,
		BNE_UN_S = 51,
		BGE_UN_S = 52,
		BGT_UN_S = 53,
		BLE_UN_S = 54,
		BLT_UN_S = 55,
		BR = 56,
		BRFALSE = 57,
		BRTRUE = 58,
		BEQ = 59,
		BGE = 60,
		BGT = 61,
		BLE = 62,
		BLT = 63,
		BNE_UN = 64,
		BGE_UN = 65,
		BGT_UN = 66,
		BLE_UN = 67,
		BLT_UN = 68,
		SWITCH = 69,
		LDIND_I1 = 70,
		LDIND_U1 = 71,
		LDIND_I2 = 72,
		LDIND_U2 = 73,
		LDIND_I4 = 74,
		LDIND_U4 = 75,
		LDIND_I8 = 76,
		LDIND_I = 77,
		LDIND_R4 = 78,
		LDIND_R8 = 79,
		LDIND_REF = 80,
		STIND_REF = 81,
		STIND_I1 = 82,
		STIND_I2 = 83,
		STIND_I4 = 84,
		STIND_I8 = 85,
		STIND_R4 = 86,
		STIND_R8 = 87,
		ADD = 88,
		SUB = 89,
		MUL = 90,
		DIV = 91,
		DIV_UN = 92,
		REM = 93,
		REM_UN = 94,
		AND = 95,
		OR = 96,
		XOR = 97,
		SHL = 98,
		SHR = 99,
		SHR_UN = 100,
		NEG = 101,
		NOT = 102,
		CONV_I1 = 103,
		CONV_I2 = 104,
		CONV_I4 = 105,
		CONV_I8 = 106,
		CONV_R4 = 107,
		CONV_R8 = 108,
		CONV_U4 = 109,
		CONV_U8 = 110,
		CALLVIRT = 111,
		CPOBJ = 112,
		LDOBJ = 113,
		LDSTR = 114,
		NEWOBJ = 115,
		CASTCLASS = 116,
		ISINST = 117,
		CONV_R_UN = 118,
		UNUSED58 = 119,
		UNUSED1 = 120,
		UNBOX = 121,
		THROW = 122,
		LDFLD = 123,
		LDFLDA = 124,
		STFLD = 125,
		LDSFLD = 126,
		LDSFLDA = 127,
		STSFLD = 128,
		STOBJ = 129,
		CONV_OVF_I1_UN = 130,
		CONV_OVF_I2_UN = 131,
		CONV_OVF_I4_UN = 132,
		CONV_OVF_I8_UN = 133,
		CONV_OVF_U1_UN = 134,
		CONV_OVF_U2_UN = 135,
		CONV_OVF_U4_UN = 136,
		CONV_OVF_U8_UN = 137,
		CONV_OVF_I_UN = 138,
		CONV_OVF_U_UN = 139,
		BOX = 140,
		NEWARR = 141,
		LDLEN = 142,
		LDELEMA = 143,
		LDELEM_I1 = 144,
		LDELEM_U1 = 145,
		LDELEM_I2 = 146,
		LDELEM_U2 = 147,
		LDELEM_I4 = 148,
		LDELEM_U4 = 149,
		LDELEM_I8 = 150,
		LDELEM_I = 151,
		LDELEM_R4 = 152,
		LDELEM_R8 = 153,
		LDELEM_REF = 154,
		STELEM_I = 155,
		STELEM_I1 = 156,
		STELEM_I2 = 157,
		STELEM_I4 = 158,
		STELEM_I8 = 159,
		STELEM_R4 = 160,
		STELEM_R8 = 161,
		STELEM_REF = 162,
		LDELEM = 163,
		STELEM = 164,
		UNBOX_ANY = 165,
		UNUSED5 = 166,
		UNUSED6 = 167,
		UNUSED7 = 168,
		UNUSED8 = 169,
		UNUSED9 = 170,
		UNUSED10 = 171,
		UNUSED11 = 172,
		UNUSED12 = 173,
		UNUSED13 = 174,
		UNUSED14 = 175,
		UNUSED15 = 176,
		UNUSED16 = 177,
		UNUSED17 = 178,
		CONV_OVF_I1 = 179,
		CONV_OVF_U1 = 180,
		CONV_OVF_I2 = 181,
		CONV_OVF_U2 = 182,
		CONV_OVF_I4 = 183,
		CONV_OVF_U4 = 184,
		CONV_OVF_I8 = 185,
		CONV_OVF_U8 = 186,
		UNUSED50 = 187,
		UNUSED18 = 188,
		UNUSED19 = 189,
		UNUSED20 = 190,
		UNUSED21 = 191,
		UNUSED22 = 192,
		UNUSED23 = 193,
		REFANYVAL = 194,
		CKFINITE = 195,
		UNUSED24 = 196,
		UNUSED25 = 197,
		MKREFANY = 198,
		UNUSED59 = 199,
		UNUSED60 = 200,
		UNUSED61 = 201,
		UNUSED62 = 202,
		UNUSED63 = 203,
		UNUSED64 = 204,
		UNUSED65 = 205,
		UNUSED66 = 206,
		UNUSED67 = 207,
		LDTOKEN = 208,
		CONV_U2 = 209,
		CONV_U1 = 210,
		CONV_I = 211,
		CONV_OVF_I = 212,
		CONV_OVF_U = 213,
		ADD_OVF = 214,
		ADD_OVF_UN = 215,
		MUL_OVF = 216,
		MUL_OVF_UN = 217,
		SUB_OVF = 218,
		SUB_OVF_UN = 219,
		ENDFINALLY = 220,
		LEAVE = 221,
		LEAVE_S = 222,
		STIND_I = 223,
		CONV_U = 224,
		UNUSED26 = 225,
		UNUSED27 = 226,
		UNUSED28 = 227,
		UNUSED29 = 228,
		UNUSED30 = 229,
		UNUSED31 = 230,
		UNUSED32 = 231,
		UNUSED33 = 232,
		UNUSED34 = 233,
		UNUSED35 = 234,
		UNUSED36 = 235,
		UNUSED37 = 236,
		UNUSED38 = 237,
		UNUSED39 = 238,
		UNUSED40 = 239,
		UNUSED41 = 240,
		UNUSED42 = 241,
		UNUSED43 = 242,
		UNUSED44 = 243,
		UNUSED45 = 244,
		UNUSED46 = 245,
		UNUSED47 = 246,
		UNUSED48 = 247,
		PREFIX7 = 248,
		PREFIX6 = 249,
		PREFIX5 = 250,
		PREFIX4 = 251,
		PREFIX3 = 252,
		PREFIX2 = 253,
		PREFIX1 = 254,
		PREFIXREF = 255,
		ARGLIST = 0,
		CEQ = 1,
		CGT = 2,
		CGT_UN = 3,
		CLT = 4,
		CLT_UN = 5,
		LDFTN = 6,
		LDVIRTFTN = 7,
		UNUSED56 = 8,
		LDARG = 9,
		LDARGA = 10,
		STARG = 11,
		LDLOC = 12,
		LDLOCA = 13,
		STLOC = 14,
		LOCALLOC = 15,
		UNUSED57 = 16,
		ENDFILTER = 17,
		UNALIGNED_ = 18,
		VOLATILE_ = 19,
		TAIL_ = 20,
		INITOBJ = 21,
		CONSTRAINED_ = 22,
		CPBLK = 23,
		INITBLK = 24,
		NO_ = 25,
		RETHROW = 26,
		UNUSED = 27,
		SIZEOF = 28,
		REFANYTYPE = 29,
		READONLY_ = 30,
		UNUSED53 = 31,
		UNUSED54 = 32,
		UNUSED55 = 33,
		UNUSED70 = 34,
		ILLEGAL = 0,
		ENDMAC = 0,

		//!!!}}OPCODE_VALUE
	};

	enum class OpcodeEnum
	{
		//!!!{{OPCODE_ENUM
		NOP,
		BREAK,
		LDARG_0,
		LDARG_1,
		LDARG_2,
		LDARG_3,
		LDLOC_0,
		LDLOC_1,
		LDLOC_2,
		LDLOC_3,
		STLOC_0,
		STLOC_1,
		STLOC_2,
		STLOC_3,
		LDARG_S,
		LDARGA_S,
		STARG_S,
		LDLOC_S,
		LDLOCA_S,
		STLOC_S,
		LDNULL,
		LDC_I4_M1,
		LDC_I4_0,
		LDC_I4_1,
		LDC_I4_2,
		LDC_I4_3,
		LDC_I4_4,
		LDC_I4_5,
		LDC_I4_6,
		LDC_I4_7,
		LDC_I4_8,
		LDC_I4_S,
		LDC_I4,
		LDC_I8,
		LDC_R4,
		LDC_R8,
		UNUSED99,
		DUP,
		POP,
		JMP,
		CALL,
		CALLI,
		RET,
		BR_S,
		BRFALSE_S,
		BRTRUE_S,
		BEQ_S,
		BGE_S,
		BGT_S,
		BLE_S,
		BLT_S,
		BNE_UN_S,
		BGE_UN_S,
		BGT_UN_S,
		BLE_UN_S,
		BLT_UN_S,
		BR,
		BRFALSE,
		BRTRUE,
		BEQ,
		BGE,
		BGT,
		BLE,
		BLT,
		BNE_UN,
		BGE_UN,
		BGT_UN,
		BLE_UN,
		BLT_UN,
		SWITCH,
		LDIND_I1,
		LDIND_U1,
		LDIND_I2,
		LDIND_U2,
		LDIND_I4,
		LDIND_U4,
		LDIND_I8,
		LDIND_I,
		LDIND_R4,
		LDIND_R8,
		LDIND_REF,
		STIND_REF,
		STIND_I1,
		STIND_I2,
		STIND_I4,
		STIND_I8,
		STIND_R4,
		STIND_R8,
		ADD,
		SUB,
		MUL,
		DIV,
		DIV_UN,
		REM,
		REM_UN,
		AND,
		OR,
		XOR,
		SHL,
		SHR,
		SHR_UN,
		NEG,
		NOT,
		CONV_I1,
		CONV_I2,
		CONV_I4,
		CONV_I8,
		CONV_R4,
		CONV_R8,
		CONV_U4,
		CONV_U8,
		CALLVIRT,
		CPOBJ,
		LDOBJ,
		LDSTR,
		NEWOBJ,
		CASTCLASS,
		ISINST,
		CONV_R_UN,
		UNUSED58,
		UNUSED1,
		UNBOX,
		THROW,
		LDFLD,
		LDFLDA,
		STFLD,
		LDSFLD,
		LDSFLDA,
		STSFLD,
		STOBJ,
		CONV_OVF_I1_UN,
		CONV_OVF_I2_UN,
		CONV_OVF_I4_UN,
		CONV_OVF_I8_UN,
		CONV_OVF_U1_UN,
		CONV_OVF_U2_UN,
		CONV_OVF_U4_UN,
		CONV_OVF_U8_UN,
		CONV_OVF_I_UN,
		CONV_OVF_U_UN,
		BOX,
		NEWARR,
		LDLEN,
		LDELEMA,
		LDELEM_I1,
		LDELEM_U1,
		LDELEM_I2,
		LDELEM_U2,
		LDELEM_I4,
		LDELEM_U4,
		LDELEM_I8,
		LDELEM_I,
		LDELEM_R4,
		LDELEM_R8,
		LDELEM_REF,
		STELEM_I,
		STELEM_I1,
		STELEM_I2,
		STELEM_I4,
		STELEM_I8,
		STELEM_R4,
		STELEM_R8,
		STELEM_REF,
		LDELEM,
		STELEM,
		UNBOX_ANY,
		UNUSED5,
		UNUSED6,
		UNUSED7,
		UNUSED8,
		UNUSED9,
		UNUSED10,
		UNUSED11,
		UNUSED12,
		UNUSED13,
		UNUSED14,
		UNUSED15,
		UNUSED16,
		UNUSED17,
		CONV_OVF_I1,
		CONV_OVF_U1,
		CONV_OVF_I2,
		CONV_OVF_U2,
		CONV_OVF_I4,
		CONV_OVF_U4,
		CONV_OVF_I8,
		CONV_OVF_U8,
		UNUSED50,
		UNUSED18,
		UNUSED19,
		UNUSED20,
		UNUSED21,
		UNUSED22,
		UNUSED23,
		REFANYVAL,
		CKFINITE,
		UNUSED24,
		UNUSED25,
		MKREFANY,
		UNUSED59,
		UNUSED60,
		UNUSED61,
		UNUSED62,
		UNUSED63,
		UNUSED64,
		UNUSED65,
		UNUSED66,
		UNUSED67,
		LDTOKEN,
		CONV_U2,
		CONV_U1,
		CONV_I,
		CONV_OVF_I,
		CONV_OVF_U,
		ADD_OVF,
		ADD_OVF_UN,
		MUL_OVF,
		MUL_OVF_UN,
		SUB_OVF,
		SUB_OVF_UN,
		ENDFINALLY,
		LEAVE,
		LEAVE_S,
		STIND_I,
		CONV_U,
		UNUSED26,
		UNUSED27,
		UNUSED28,
		UNUSED29,
		UNUSED30,
		UNUSED31,
		UNUSED32,
		UNUSED33,
		UNUSED34,
		UNUSED35,
		UNUSED36,
		UNUSED37,
		UNUSED38,
		UNUSED39,
		UNUSED40,
		UNUSED41,
		UNUSED42,
		UNUSED43,
		UNUSED44,
		UNUSED45,
		UNUSED46,
		UNUSED47,
		UNUSED48,
		PREFIX7,
		PREFIX6,
		PREFIX5,
		PREFIX4,
		PREFIX3,
		PREFIX2,
		PREFIX1,
		PREFIXREF,
		ARGLIST,
		CEQ,
		CGT,
		CGT_UN,
		CLT,
		CLT_UN,
		LDFTN,
		LDVIRTFTN,
		UNUSED56,
		LDARG,
		LDARGA,
		STARG,
		LDLOC,
		LDLOCA,
		STLOC,
		LOCALLOC,
		UNUSED57,
		ENDFILTER,
		UNALIGNED_,
		VOLATILE_,
		TAIL_,
		INITOBJ,
		CONSTRAINED_,
		CPBLK,
		INITBLK,
		NO_,
		RETHROW,
		UNUSED,
		SIZEOF,
		REFANYTYPE,
		READONLY_,
		UNUSED53,
		UNUSED54,
		UNUSED55,
		UNUSED70,
		ILLEGAL,
		ENDMAC,

		//!!!}}OPCODE_ENUM
		__Count,
	};


	enum class FlowType
	{
		Next,
		Branch,
		CondBranch,
		Call,
		Return,
		Meta,
		Throw,
		Break,
	};

	enum class ArgType
	{
		None,
		Data,
		StaticBranch,
		BranchTarget,
		Switch,
	};

	enum class InputType
	{
		None,
	};

	enum class OutputType
	{
		None,
	};

	enum class OpCodeKind
	{
		Primitive,
		ObjModel,
		Macro,
		Prefix,
		Nternal,
	};

	struct OpCodeInfo
	{
		OpcodeEnum id;
		const char name[16];
		InputType intput[3];
		OutputType output;
		ArgType inlineType;
		int32_t inlineParam;
		uint8_t flag;
		OpcodeValue baseOpValue;
		FlowType flow;
		int32_t constValue;
	};

	extern OpCodeInfo g_opcodeInfos[(int)OpcodeEnum::__Count];

	const OpCodeInfo* DecodeOpCodeInfo(const byte*& ip, const byte* end);

	uint32_t GetOpCodeSize(const byte*& ip, const OpCodeInfo* opCodeInfo);
}
}

