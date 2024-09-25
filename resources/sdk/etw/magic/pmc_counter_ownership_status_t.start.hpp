#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_PMC_COUNTER_OWNERSHIP_STATUS.ProcessorNumber", processor_number, 0x0, 0x0, false, 0xbb6aea6031cfe920)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_PMC_COUNTER_OWNERSHIP_STATUS.NumberOfCounters", number_of_counters, 0x0, 0x0, false, 0xf535f3538ea705f2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct etw::pmc_counter_owner_t, 1>), "_ETW_PMC_COUNTER_OWNERSHIP_STATUS.CounterOwners", counter_owners, 0x0, 0x0, false, 0x3c6a1ffc042b8b8a)
#else
#define _m00
#define _m01
#define _m02
#endif