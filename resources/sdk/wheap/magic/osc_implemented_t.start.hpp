#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::event_log_entry_t), "_WHEAP_OSC_IMPLEMENTED.WheaEventLogEntry", whea_event_log_entry, 0x0, 0x0, true, 0x54003985c445ec0c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEAP_OSC_IMPLEMENTED.OscImplemented", osc_implemented, 0x100, 0x8, true, 0xe2d625521dba1dc0)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEAP_OSC_IMPLEMENTED.DebugChecked", debug_checked, 0x108, 0x8, true, 0x48462ccdeda0720)
#else
#define _m00
#define _m01
#define _m02
#endif