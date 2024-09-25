#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_CPU_SET_TAG_INFORMATION.Tag", tag, 0x0, 0x40, true, 0xb9e6d218a609807d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 1>), "_SYSTEM_CPU_SET_TAG_INFORMATION.CpuSets", cpu_sets, 0x40, 0x40, true, 0xfdf77844c6893ae6)
#else
#define _m00
#define _m01
#endif