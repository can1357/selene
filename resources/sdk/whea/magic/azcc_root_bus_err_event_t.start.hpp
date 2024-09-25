#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::event_log_entry_t), "_WHEA_AZCC_ROOT_BUS_ERR_EVENT.WheaEventLogEntry", whea_event_log_entry, 0x0, 0x0, true, 0xea2413d70ae07a7d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_AZCC_ROOT_BUS_ERR_EVENT.MaxBusCountPassed", max_bus_count_passed, 0x100, 0x8, true, 0x52a7236683fc4c5c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_AZCC_ROOT_BUS_ERR_EVENT.InvalidBusMSR", invalid_bus_msr, 0x108, 0x8, true, 0xaf8b19c1bf261d25)
#else
#define _m00
#define _m01
#define _m02
#endif