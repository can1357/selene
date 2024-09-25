#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::event_log_entry_t), "_WHEAP_DEVICE_DRV_EVENT.WheaEventLogEntry", whea_event_log_entry, 0x0, 0x0, true, 0xb075c12118906584)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<char, 32>), "_WHEAP_DEVICE_DRV_EVENT.Function", function, 0x100, 0x0, true, 0x79ea26638745b3b9)
#else
#define _m00
#define _m01
#endif