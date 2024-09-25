#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::event_log_entry_t), "_WHEAP_PSHED_PLUGIN_REGISTER.WheaEventLogEntry", whea_event_log_entry, 0x0, 0x0, true, 0xe3ee53ba65eba84c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_PSHED_PLUGIN_REGISTER.Version", version, 0x100, 0x20, true, 0x434501ef5fcdd033)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_PSHED_PLUGIN_REGISTER.Length", length, 0x120, 0x20, true, 0x89ec7e293aba538a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_PSHED_PLUGIN_REGISTER.FunctionalAreaMask", functional_area_mask, 0x140, 0x20, true, 0x816be3990e8360f2)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_WHEAP_PSHED_PLUGIN_REGISTER.Status", status, 0x160, 0x20, true, 0x16de85a7f3886e09)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif