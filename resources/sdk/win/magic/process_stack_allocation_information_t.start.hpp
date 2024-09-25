#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESS_STACK_ALLOCATION_INFORMATION.ReserveSize", reserve_size, 0x0, 0x40, true, 0x115420eac2d0d964)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESS_STACK_ALLOCATION_INFORMATION.ZeroBits", zero_bits, 0x40, 0x40, true, 0x728b903bcdb63f21)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PROCESS_STACK_ALLOCATION_INFORMATION.StackBase", stack_base, 0x80, 0x40, true, 0x946dfc5dd3e9170a)
#else
#define _m00
#define _m01
#define _m02
#endif