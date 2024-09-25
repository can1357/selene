#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::event_log_entry_t), "_WHEAP_ERROR_RECORD_EVENT.WheaEventLogEntry", whea_event_log_entry, 0x0, 0x0, true, 0x96e483ed0b437c8d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::error_record_t*), "_WHEAP_ERROR_RECORD_EVENT.Record", record, 0x100, 0x40, true, 0xa163e81123e18498)
#else
#define _m00
#define _m01
#endif