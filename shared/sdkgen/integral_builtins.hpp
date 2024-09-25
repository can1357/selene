#pragma once
#include "common.hpp"

// CV boolean types.
//
using bool8_t        = uint8_t;
using bool16_t       = uint16_t;
using bool32_t       = uint32_t;
using bool64_t       = uint64_t;
using variant_bool8  = int8_t;
using variant_bool16 = int16_t;
using variant_bool32 = int32_t;
using variant_bool64 = int64_t;

// Variable-length integers.
//
#if IN_PARSER
	using varint_t =  int64_t;
	using varuint_t = uint64_t;
#else
	struct varint_t {};
	struct varuint_t {};
#endif

#if IN_PARSER || defined(IN_GENERATOR) || !defined(SDK_USE_BITINT)
	#define __EXT_INT8(n)   int8_t
	#define __EXT_INT16(n)  int16_t
	#define __EXT_INT32(n)  int32_t
	#define __EXT_INT64(n)  int64_t
	#define __EXT_UINT8(n)  uint8_t
	#define __EXT_UINT16(n) uint16_t
	#define __EXT_UINT32(n) uint32_t
	#define __EXT_UINT64(n) uint64_t
#else
	#define __EXT_INT8(n)   _BitInt(n)
	#define __EXT_INT16(n)  _BitInt(n)
	#define __EXT_INT32(n)  _BitInt(n)
	#define __EXT_INT64(n)  _BitInt(n)
	#define __EXT_UINT8(n)  unsigned _BitInt(n)
	#define __EXT_UINT16(n) unsigned _BitInt(n)
	#define __EXT_UINT32(n) unsigned _BitInt(n)
	#define __EXT_UINT64(n) unsigned _BitInt(n)
#endif

using uint1_t =  __EXT_UINT8( 1 );
using uint2_t =  __EXT_UINT8( 2 );
using uint3_t =  __EXT_UINT8( 3 );
using uint4_t =  __EXT_UINT8( 4 );
using uint5_t =  __EXT_UINT8( 5 );
using uint6_t =  __EXT_UINT8( 6 );
using uint7_t =  __EXT_UINT8( 7 );
using uint9_t =  __EXT_UINT16( 9 );
using uint10_t = __EXT_UINT16( 10 );
using uint11_t = __EXT_UINT16( 11 );
using uint12_t = __EXT_UINT16( 12 );
using uint13_t = __EXT_UINT16( 13 );
using uint14_t = __EXT_UINT16( 14 );
using uint15_t = __EXT_UINT16( 15 );
using uint17_t = __EXT_UINT32( 17 );
using uint18_t = __EXT_UINT32( 18 );
using uint19_t = __EXT_UINT32( 19 );
using uint20_t = __EXT_UINT32( 20 );
using uint21_t = __EXT_UINT32( 21 );
using uint22_t = __EXT_UINT32( 22 );
using uint23_t = __EXT_UINT32( 23 );
using uint24_t = __EXT_UINT32( 24 );
using uint25_t = __EXT_UINT32( 25 );
using uint26_t = __EXT_UINT32( 26 );
using uint27_t = __EXT_UINT32( 27 );
using uint28_t = __EXT_UINT32( 28 );
using uint29_t = __EXT_UINT32( 29 );
using uint30_t = __EXT_UINT32( 30 );
using uint31_t = __EXT_UINT32( 31 );
using uint33_t = __EXT_UINT64( 33 );
using uint34_t = __EXT_UINT64( 34 );
using uint35_t = __EXT_UINT64( 35 );
using uint36_t = __EXT_UINT64( 36 );
using uint37_t = __EXT_UINT64( 37 );
using uint38_t = __EXT_UINT64( 38 );
using uint39_t = __EXT_UINT64( 39 );
using uint40_t = __EXT_UINT64( 40 );
using uint41_t = __EXT_UINT64( 41 );
using uint42_t = __EXT_UINT64( 42 );
using uint43_t = __EXT_UINT64( 43 );
using uint44_t = __EXT_UINT64( 44 );
using uint45_t = __EXT_UINT64( 45 );
using uint46_t = __EXT_UINT64( 46 );
using uint47_t = __EXT_UINT64( 47 );
using uint48_t = __EXT_UINT64( 48 );
using uint49_t = __EXT_UINT64( 49 );
using uint50_t = __EXT_UINT64( 50 );
using uint51_t = __EXT_UINT64( 51 );
using uint52_t = __EXT_UINT64( 52 );
using uint53_t = __EXT_UINT64( 53 );
using uint54_t = __EXT_UINT64( 54 );
using uint55_t = __EXT_UINT64( 55 );
using uint56_t = __EXT_UINT64( 56 );
using uint57_t = __EXT_UINT64( 57 );
using uint58_t = __EXT_UINT64( 58 );
using uint59_t = __EXT_UINT64( 59 );
using uint60_t = __EXT_UINT64( 60 );
using uint61_t = __EXT_UINT64( 61 );
using uint62_t = __EXT_UINT64( 62 );
using uint63_t = __EXT_UINT64( 63 );
using int1_t =   __EXT_UINT8( 1 );
using int2_t =   __EXT_INT8( 2 );
using int3_t =   __EXT_INT8( 3 );
using int4_t =   __EXT_INT8( 4 );
using int5_t =   __EXT_INT8( 5 );
using int6_t =   __EXT_INT8( 6 );
using int7_t =   __EXT_INT8( 7 );
using int9_t =   __EXT_INT16( 9 );
using int10_t =  __EXT_INT16( 10 );
using int11_t =  __EXT_INT16( 11 );
using int12_t =  __EXT_INT16( 12 );
using int13_t =  __EXT_INT16( 13 );
using int14_t =  __EXT_INT16( 14 );
using int15_t =  __EXT_INT16( 15 );
using int17_t =  __EXT_INT32( 17 );
using int18_t =  __EXT_INT32( 18 );
using int19_t =  __EXT_INT32( 19 );
using int20_t =  __EXT_INT32( 20 );
using int21_t =  __EXT_INT32( 21 );
using int22_t =  __EXT_INT32( 22 );
using int23_t =  __EXT_INT32( 23 );
using int24_t =  __EXT_INT32( 24 );
using int25_t =  __EXT_INT32( 25 );
using int26_t =  __EXT_INT32( 26 );
using int27_t =  __EXT_INT32( 27 );
using int28_t =  __EXT_INT32( 28 );
using int29_t =  __EXT_INT32( 29 );
using int30_t =  __EXT_INT32( 30 );
using int31_t =  __EXT_INT32( 31 );
using int33_t =  __EXT_INT64( 33 );
using int34_t =  __EXT_INT64( 34 );
using int35_t =  __EXT_INT64( 35 );
using int36_t =  __EXT_INT64( 36 );
using int37_t =  __EXT_INT64( 37 );
using int38_t =  __EXT_INT64( 38 );
using int39_t =  __EXT_INT64( 39 );
using int40_t =  __EXT_INT64( 40 );
using int41_t =  __EXT_INT64( 41 );
using int42_t =  __EXT_INT64( 42 );
using int43_t =  __EXT_INT64( 43 );
using int44_t =  __EXT_INT64( 44 );
using int45_t =  __EXT_INT64( 45 );
using int46_t =  __EXT_INT64( 46 );
using int47_t =  __EXT_INT64( 47 );
using int48_t =  __EXT_INT64( 48 );
using int49_t =  __EXT_INT64( 49 );
using int50_t =  __EXT_INT64( 50 );
using int51_t =  __EXT_INT64( 51 );
using int52_t =  __EXT_INT64( 52 );
using int53_t =  __EXT_INT64( 53 );
using int54_t =  __EXT_INT64( 54 );
using int55_t =  __EXT_INT64( 55 );
using int56_t =  __EXT_INT64( 56 );
using int57_t =  __EXT_INT64( 57 );
using int58_t =  __EXT_INT64( 58 );
using int59_t =  __EXT_INT64( 59 );
using int60_t =  __EXT_INT64( 60 );
using int61_t =  __EXT_INT64( 61 );
using int62_t =  __EXT_INT64( 62 );
using int63_t =  __EXT_INT64( 63 );

#undef __EXT_INT8
#undef __EXT_INT16
#undef __EXT_INT32
#undef __EXT_INT64
#undef __EXT_UINT8
#undef __EXT_UINT16
#undef __EXT_UINT32
#undef __EXT_UINT64