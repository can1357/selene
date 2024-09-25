#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_ARM64_RUNTIME_FUNCTION_ENTRY.BeginAddress", begin_address, 0x0, 0x20, true, 0xb0c18f7cfb86edd8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_ARM64_RUNTIME_FUNCTION_ENTRY.UnwindData", unwind_data, 0x20, 0x20, true, 0x2b493d7510641425)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_IMAGE_ARM64_RUNTIME_FUNCTION_ENTRY.Flag", flag, 0x20, 0x2, true, 0x3c0fe17066984350, 2, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint11_t), "_IMAGE_ARM64_RUNTIME_FUNCTION_ENTRY.FunctionLength", function_length, 0x22, 0xb, true, 0x7e6070c12d71820e, 11, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_IMAGE_ARM64_RUNTIME_FUNCTION_ENTRY.RegF", reg_f, 0x2d, 0x3, true, 0x3912634373bebe9c, 3, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_IMAGE_ARM64_RUNTIME_FUNCTION_ENTRY.RegI", reg_i, 0x30, 0x4, true, 0x35431358ef60a993, 4, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_IMAGE_ARM64_RUNTIME_FUNCTION_ENTRY.H", h, 0x34, 0x1, true, 0xfe782dd034000f, 1, uint32_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_IMAGE_ARM64_RUNTIME_FUNCTION_ENTRY.CR", cr, 0x35, 0x2, true, 0x89d7ec7ab224b4a9, 2, uint32_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint9_t), "_IMAGE_ARM64_RUNTIME_FUNCTION_ENTRY.FrameSize", frame_size, 0x37, 0x9, true, 0x921add3b2b1eb98b, 9, uint32_t)
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