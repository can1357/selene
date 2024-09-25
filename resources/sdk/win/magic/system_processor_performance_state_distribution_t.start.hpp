#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PROCESSOR_PERFORMANCE_STATE_DISTRIBUTION.ProcessorNumber", processor_number, 0x0, 0x20, true, 0x6821aee5100f19a3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PROCESSOR_PERFORMANCE_STATE_DISTRIBUTION.StateCount", state_count, 0x20, 0x20, true, 0x639bcb834723e149)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::system_processor_performance_hitcount_t, 1>), "_SYSTEM_PROCESSOR_PERFORMANCE_STATE_DISTRIBUTION.States", states, 0x40, 0x80, true, 0x2e7d22ea9e80a56d)
#else
#define _m00
#define _m01
#define _m02
#endif