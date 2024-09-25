#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_WHEAP_DEFERRED_EVENT.ListEntry", list_entry, 0x0, 0x80, true, 0x90975607bdacf3db)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::event_log_entry_t), "_WHEAP_DEFERRED_EVENT.WheaEventLogEntry", whea_event_log_entry, 0x80, 0x0, true, 0xe36cf3e4ae3caaaf)
#else
#define _m00
#define _m01
#endif