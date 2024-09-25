#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::event_log_entry_t), "_WHEA_ETW_OVERFLOW_EVENT.WheaEventLogEntry", whea_event_log_entry, 0x0, 0x0, true, 0x8484a0ab3d97ee7)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_ETW_OVERFLOW_EVENT.RecordId", record_id, 0x100, 0x40, true, 0xb0990e5bb13b4c23)
#else
#define _m00
#define _m01
#endif