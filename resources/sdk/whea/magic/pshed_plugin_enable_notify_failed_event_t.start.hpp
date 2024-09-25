#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct whea::event_log_entry_t), "_WHEA_PSHED_PLUGIN_ENABLE_NOTIFY_FAILED_EVENT.WheaEventLogEntry", whea_event_log_entry, 0x0, 0x0, false, 0x84a5cfbeeb844992)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum whea::pshed_plugin_enable_notify_errors_t), "_WHEA_PSHED_PLUGIN_ENABLE_NOTIFY_FAILED_EVENT.EnableError", enable_error, 0x0, 0x0, false, 0xa065eb6ac8c4cf36)
#else
#define _m00
#define _m01
#endif