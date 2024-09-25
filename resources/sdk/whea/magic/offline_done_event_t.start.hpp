#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct whea::event_log_entry_t), "_WHEA_OFFLINE_DONE_EVENT.WheaEventLogEntry", whea_event_log_entry, 0x0, 0x0, false, 0xd627b74b807f066e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_OFFLINE_DONE_EVENT.Address", address, 0x0, 0x0, false, 0x6b533ff3793220fb)
#else
#define _m00
#define _m01
#endif