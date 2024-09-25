#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PROCESSOR_PERFORMANCE_DISTRIBUTION.ProcessorCount", processor_count, 0x0, 0x20, true, 0xf1dfa69a3a4fbd50)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 1>), "_SYSTEM_PROCESSOR_PERFORMANCE_DISTRIBUTION.Offsets", offsets, 0x20, 0x20, true, 0xdf79bda333e4840e)
#else
#define _m00
#define _m01
#endif