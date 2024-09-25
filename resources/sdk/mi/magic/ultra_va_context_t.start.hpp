#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_ULTRA_VA_CONTEXT.Lock", lock, 0x0, 0x40, true, 0x8f12e0e182cad26f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MI_ULTRA_VA_CONTEXT.ZeroMapping", zero_mapping, 0x40, 0x40, true, 0x355cff647ff8fba8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_ULTRA_VA_CONTEXT.AllocationHintBit", allocation_hint_bit, 0x80, 0x40, true, 0x4ebebc901a1b7622)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct rtl::bitmap_ex_t, 2>), "_MI_ULTRA_VA_CONTEXT.Bitmap", bitmap, 0xc0, 0x0, true, 0x754ca461799dc372)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MI_ULTRA_VA_CONTEXT.ConcurrencyMaximum", concurrency_maximum, 0x1c0, 0x20, true, 0xafb92f57e9d5b39)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MI_ULTRA_VA_CONTEXT.ConcurrencyCount", concurrency_count, 0x1e0, 0x20, true, 0x6cc41034a0c74439)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif