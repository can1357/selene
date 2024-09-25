#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::event_log_entry_t), "_WHEAP_PLUGIN_PFA_EVENT.WheaEventLogEntry", whea_event_log_entry, 0x0, 0x0, true, 0xb40d2e885507055d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEAP_PLUGIN_PFA_EVENT.NoFurtherPfa", no_further_pfa, 0x100, 0x8, true, 0xcf3b481fc3bc425b)
#else
#define _m00
#define _m01
#endif