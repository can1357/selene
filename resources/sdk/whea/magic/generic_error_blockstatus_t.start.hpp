#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_GENERIC_ERROR_BLOCKSTATUS.UncorrectableError", uncorrectable_error, 0x0, 0x1, true, 0xe2314fb8a48e1ad5, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_GENERIC_ERROR_BLOCKSTATUS.CorrectableError", correctable_error, 0x1, 0x1, true, 0xc830ff8b2edeb256, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_GENERIC_ERROR_BLOCKSTATUS.MultipleUncorrectableErrors", multiple_uncorrectable_errors, 0x2, 0x1, true, 0xdeb941f2048fc576, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_GENERIC_ERROR_BLOCKSTATUS.MultipleCorrectableErrors", multiple_correctable_errors, 0x3, 0x1, true, 0x59728e860d3ef4ff, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint10_t), "_WHEA_GENERIC_ERROR_BLOCKSTATUS.ErrorDataEntryCount", error_data_entry_count, 0x4, 0xa, true, 0x1cb419f377d210eb, 10, uint32_t)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_GENERIC_ERROR_BLOCKSTATUS.AsULONG", as_ulong, 0x0, 0x20, true, 0xebce54a2d4a9e262)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif