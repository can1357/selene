#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KSTACK_CONTROL.StackBase", stack_base, 0x0, 0x40, true, 0x187df5db7f8fc321)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KSTACK_CONTROL.ActualLimit", actual_limit, 0x40, 0x40, true, 0x5b0f667aab593f71)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KSTACK_CONTROL.StackExpansion", stack_expansion, 0x40, 0x1, true, 0x9c29728053fd48ec, 1, uint64_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kernel_stack_segment_t), "_KSTACK_CONTROL.Previous", previous, 0x80, 0x0, true, 0xd4e079a8b66fddb7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif