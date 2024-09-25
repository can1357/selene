#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_HYPERVISOR_PROCESSOR_COUNT_INFORMATION.NumberOfLogicalProcessors", number_of_logical_processors, 0x0, 0x20, true, 0x81e5486f51547715)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_HYPERVISOR_PROCESSOR_COUNT_INFORMATION.NumberOfCores", number_of_cores, 0x20, 0x20, true, 0xb35e8295b262a6d)
#else
#define _m00
#define _m01
#endif