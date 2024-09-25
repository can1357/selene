#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 20>), "_IOP_IRP_STACK_PROFILER.Profile", profile, 0x0, 0x80, true, 0xb5e5c9d2332d0bd0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IOP_IRP_STACK_PROFILER.TotalIrps", total_irps, 0x280, 0x20, true, 0x2415a92b093bcad5)
#else
#define _m00
#define _m01
#endif