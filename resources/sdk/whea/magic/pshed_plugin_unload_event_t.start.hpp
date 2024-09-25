#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::event_log_entry_t), "_WHEA_PSHED_PLUGIN_UNLOAD_EVENT.WheaEventLogEntry", whea_event_log_entry, 0x0, 0x0, true, 0x3ca0a5f1598a913d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 32>), "_WHEA_PSHED_PLUGIN_UNLOAD_EVENT.PluginName", plugin_name, 0x100, 0x0, true, 0x316ceb81f68929d7)
#else
#define _m00
#define _m01
#endif