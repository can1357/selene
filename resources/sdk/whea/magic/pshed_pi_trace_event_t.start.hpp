#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct whea::event_log_entry_t), "_WHEA_PSHED_PI_TRACE_EVENT.WheaEventLogEntry", whea_event_log_entry, 0x0, 0x0, false, 0x4e153f3b13e656f4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<char, 256>), "_WHEA_PSHED_PI_TRACE_EVENT.Buffer", buffer, 0x0, 0x0, false, 0xe33e13ad0dfe1652)
#else
#define _m00
#define _m01
#endif