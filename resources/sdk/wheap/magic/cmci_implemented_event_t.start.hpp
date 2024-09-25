#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::event_log_entry_t), "_WHEAP_CMCI_IMPLEMENTED_EVENT.WheaEventLogEntry", whea_event_log_entry, 0x0, 0x0, true, 0xbf3fd0f7c18208e6)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEAP_CMCI_IMPLEMENTED_EVENT.CmciAvailable", cmci_available, 0x100, 0x8, true, 0x66119928e0b35931)
#else
#define _m00
#define _m01
#endif