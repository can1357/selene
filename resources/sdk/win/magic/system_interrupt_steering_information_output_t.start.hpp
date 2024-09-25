#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_INTERRUPT_STEERING_INFORMATION_OUTPUT.Enabled", enabled, 0x0, 0x1, true, 0x307c44303d0a8194, 1, uint32_t)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_INTERRUPT_STEERING_INFORMATION_OUTPUT.AsULONG", as_ulong, 0x0, 0x20, true, 0x96ef3101fc7f5a12)
#else
#define _m00
#define _m01
#endif