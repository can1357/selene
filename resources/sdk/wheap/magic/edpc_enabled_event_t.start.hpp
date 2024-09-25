#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::event_log_entry_t), "_WHEAP_EDPC_ENABLED_EVENT.WheaEventLogEntry", whea_event_log_entry, 0x0, 0x0, true, 0xf353ad391cc07c0f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEAP_EDPC_ENABLED_EVENT.eDPCEnabled", e_dpc_enabled, 0x100, 0x8, true, 0x4005fafa0a5537e5)
#else
#define _m00
#define _m01
#endif