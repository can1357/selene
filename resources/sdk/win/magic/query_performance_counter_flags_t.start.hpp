#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_QUERY_PERFORMANCE_COUNTER_FLAGS.KernelTransition", kernel_transition, 0x0, 0x1, true, 0x5ba45512452812a4, 1, uint32_t)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_QUERY_PERFORMANCE_COUNTER_FLAGS.ul", ul, 0x0, 0x20, true, 0x268858dffa7b7352)
#else
#define _m00
#define _m01
#endif