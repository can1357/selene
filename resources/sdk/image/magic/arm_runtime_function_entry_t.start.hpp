#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_ARM_RUNTIME_FUNCTION_ENTRY.BeginAddress", begin_address, 0x0, 0x20, true, 0x5abcf40301082984)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_ARM_RUNTIME_FUNCTION_ENTRY.UnwindData", unwind_data, 0x20, 0x20, true, 0x7b4cbdc8accc17ca)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_IMAGE_ARM_RUNTIME_FUNCTION_ENTRY.Flag", flag, 0x20, 0x2, true, 0xe07fc1014d3def55, 2, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint11_t), "_IMAGE_ARM_RUNTIME_FUNCTION_ENTRY.FunctionLength", function_length, 0x22, 0xb, true, 0x4aee2366ddfa598, 11, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_IMAGE_ARM_RUNTIME_FUNCTION_ENTRY.Ret", ret, 0x2d, 0x2, true, 0x5d09aefc8711ea5d, 2, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_IMAGE_ARM_RUNTIME_FUNCTION_ENTRY.H", h, 0x2f, 0x1, true, 0x530c1bd373ced7f9, 1, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_IMAGE_ARM_RUNTIME_FUNCTION_ENTRY.Reg", reg, 0x30, 0x3, true, 0x3d3d2e3b250ea5b8, 3, uint32_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_IMAGE_ARM_RUNTIME_FUNCTION_ENTRY.R", r, 0x33, 0x1, true, 0x405094e070979568, 1, uint32_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_IMAGE_ARM_RUNTIME_FUNCTION_ENTRY.L", l, 0x34, 0x1, true, 0x674b61f05de021ed, 1, uint32_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_IMAGE_ARM_RUNTIME_FUNCTION_ENTRY.C", c, 0x35, 0x1, true, 0x8def39bf165479b6, 1, uint32_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint10_t), "_IMAGE_ARM_RUNTIME_FUNCTION_ENTRY.StackAdjust", stack_adjust, 0x36, 0xa, true, 0x365553e07cf6967e, 10, uint32_t)
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
#define _m09
#define _m10
#endif