#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_PCI_D3COLD_AUX_POWER_AND_TIMING_AGGREGATION_INFO.Lock", lock, 0x0, 0xc0, true, 0xb1e73737155694e2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_D3COLD_AUX_POWER_AND_TIMING_AGGREGATION_INFO.CorePowerRailOnRequestCount", core_power_rail_on_request_count, 0xc0, 0x20, true, 0x2890b51dd81e8d4e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_D3COLD_AUX_POWER_AND_TIMING_AGGREGATION_INFO.AggregatedAuxiliaryPowerRequest", aggregated_auxiliary_power_request, 0xe0, 0x20, true, 0xfd184bb957281643)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_D3COLD_AUX_POWER_AND_TIMING_AGGREGATION_INFO.AggregatedPerstDelay", aggregated_perst_delay, 0x100, 0x20, true, 0x7e8f7753d77f1643)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PCI_D3COLD_AUX_POWER_AND_TIMING_AGGREGATION_INFO.FunctionListHead", function_list_head, 0x140, 0x80, true, 0x9d5373b1099c8215)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_PCI_D3COLD_AUX_POWER_AND_TIMING_AGGREGATION_INFO.DeviceObject", device_object, 0x0, 0x0, false, 0xf18f497be39e3301)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif