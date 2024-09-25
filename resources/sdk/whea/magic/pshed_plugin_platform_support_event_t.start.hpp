#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::event_log_entry_t), "_WHEA_PSHED_PLUGIN_PLATFORM_SUPPORT_EVENT.WheaEventLogEntry", whea_event_log_entry, 0x0, 0x0, true, 0x39e2d938d2a59d81)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 32>), "_WHEA_PSHED_PLUGIN_PLATFORM_SUPPORT_EVENT.PluginName", plugin_name, 0x100, 0x0, true, 0xff6c2345b727fdf1)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_PSHED_PLUGIN_PLATFORM_SUPPORT_EVENT.Supported", supported, 0x300, 0x8, true, 0x9535360cdb231f9a)
#else
#define _m00
#define _m01
#define _m02
#endif