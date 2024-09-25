#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_WHEA_TIMESTAMP.Seconds", seconds, 0x0, 0x8, true, 0x9103c883c3a2024f, 8, uint64_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_WHEA_TIMESTAMP.Minutes", minutes, 0x8, 0x8, true, 0x9e9e9c07cb390865, 8, uint64_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_WHEA_TIMESTAMP.Hours", hours, 0x10, 0x8, true, 0xbad835f51361a235, 8, uint64_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_TIMESTAMP.Precise", precise, 0x18, 0x1, true, 0x16223806e14bf788, 1, uint64_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_WHEA_TIMESTAMP.Day", day, 0x20, 0x8, true, 0x2b54a8f2f397cbf3, 8, uint64_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_WHEA_TIMESTAMP.Month", month, 0x28, 0x8, true, 0x87a45f4e67bdc4a1, 8, uint64_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_WHEA_TIMESTAMP.Year", year, 0x30, 0x8, true, 0x4a02bafe83823a34, 8, uint64_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_WHEA_TIMESTAMP.Century", century, 0x38, 0x8, true, 0x2d1e49d3e14feb4e, 8, uint64_t)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_WHEA_TIMESTAMP.AsLARGE_INTEGER", as_large_integer, 0x0, 0x40, true, 0xacd993ceb0dfba3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif