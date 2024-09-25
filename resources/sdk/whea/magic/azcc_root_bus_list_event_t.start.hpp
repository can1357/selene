#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::event_log_entry_t), "_WHEA_AZCC_ROOT_BUS_LIST_EVENT.WheaEventLogEntry", whea_event_log_entry, 0x0, 0x0, true, 0x3caac3f6713d2f73)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_AZCC_ROOT_BUS_LIST_EVENT.RootBusCount", root_bus_count, 0x100, 0x20, true, 0xcfaa37cb68ead32f)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 8>), "_WHEA_AZCC_ROOT_BUS_LIST_EVENT.RootBuses", root_buses, 0x120, 0x0, true, 0x2cc94ce80eaac74b)
#else
#define _m00
#define _m01
#define _m02
#endif