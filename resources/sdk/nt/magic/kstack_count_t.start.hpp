#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_KSTACK_COUNT.Value", value, 0x0, 0x20, true, 0xf249650d7803b46f)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_KSTACK_COUNT.State", state, 0x0, 0x3, true, 0xeecdc36c309c1b8d, 3, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint29_t), "_KSTACK_COUNT.StackCount", stack_count, 0x3, 0x1d, true, 0x9ec8b84f1af3ecb0, 29, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#endif