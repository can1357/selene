#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::event_log_entry_t), "_WHEAP_CLEARED_POISON_EVENT.WheaEventLogEntry", whea_event_log_entry, 0x0, 0x0, true, 0xf334c8fedbe4e124)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEAP_CLEARED_POISON_EVENT.PhysicalAddress", physical_address, 0x100, 0x40, true, 0xbab880401a09c091)
#else
#define _m00
#define _m01
#endif