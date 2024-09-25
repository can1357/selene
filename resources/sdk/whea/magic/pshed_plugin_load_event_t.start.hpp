#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::event_log_entry_t), "_WHEA_PSHED_PLUGIN_LOAD_EVENT.WheaEventLogEntry", whea_event_log_entry, 0x0, 0x0, true, 0x79aa6fb5bdb4279a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 32>), "_WHEA_PSHED_PLUGIN_LOAD_EVENT.PluginName", plugin_name, 0x100, 0x0, true, 0xaa1c1b102619642c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_PSHED_PLUGIN_LOAD_EVENT.MajorVersion", major_version, 0x300, 0x20, true, 0xd0307a3f42591f15)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_PSHED_PLUGIN_LOAD_EVENT.MinorVersion", minor_version, 0x320, 0x20, true, 0x752326cf07618083)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif