#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::array<enum nt::kprofile_source_t, 4>, enum nt::kprofile_source_t*>), "_ETW_PMC_SUPPORT.Source", source, 0x0, 0x40, true, 0x1b74d371d9cb92d2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_ETW_PMC_SUPPORT.HookIdCount", hook_id_count, 0x40, 0x20, true, 0xa4377520dad64af0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 4>), "_ETW_PMC_SUPPORT.HookId", hook_id, 0x60, 0x40, true, 0x5c3eb9c6951ad75b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_ETW_PMC_SUPPORT.CountersCount", counters_count, 0xa0, 0x20, true, 0x23b337b9e4318a94)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct hal::pmc_counters_t*, 1>), "_ETW_PMC_SUPPORT.ProcessorCtrs", processor_ctrs, 0xc0, 0x40, true, 0x1d099df7819080dd)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif