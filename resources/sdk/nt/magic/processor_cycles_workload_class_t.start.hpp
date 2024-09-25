#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESSOR_CYCLES_WORKLOAD_CLASS.Count", count, 0x0, 0x0, false, 0xc4cd9e7d1c1484b9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 1>), "_PROCESSOR_CYCLES_WORKLOAD_CLASS.ProcessorCyclesClass", processor_cycles_class, 0x0, 0x0, false, 0xc46adb47de73d474)
#else
#define _m00
#define _m01
#endif