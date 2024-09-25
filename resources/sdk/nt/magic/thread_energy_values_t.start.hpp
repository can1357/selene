#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::array<uint64_t, 2>, 4>), "_THREAD_ENERGY_VALUES.Cycles", cycles, 0x0, 0x0, true, 0xf70d589cbc9fd12a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::array<uint64_t, 2>, 4>), "_THREAD_ENERGY_VALUES.AttributedCycles", attributed_cycles, 0x200, 0x0, true, 0x5d115a73ff34403d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::array<uint64_t, 2>, 4>), "_THREAD_ENERGY_VALUES.WorkOnBehalfCycles", work_on_behalf_cycles, 0x400, 0x0, true, 0xd72d1c3bcbc5fff7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::timeline_bitmap_t), "_THREAD_ENERGY_VALUES.CpuTimeline", cpu_timeline, 0x600, 0x40, true, 0xde719195c34aa6a7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif