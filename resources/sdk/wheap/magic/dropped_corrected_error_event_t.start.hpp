#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::event_log_entry_t), "_WHEAP_DROPPED_CORRECTED_ERROR_EVENT.WheaEventLogEntry", whea_event_log_entry, 0x0, 0x0, true, 0xdf9723b0b3340b72)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum whea::error_source_type_t), "_WHEAP_DROPPED_CORRECTED_ERROR_EVENT.ErrorSourceType", error_source_type, 0x100, 0x20, true, 0xf05c0cecf8e8c07a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_DROPPED_CORRECTED_ERROR_EVENT.ErrorSourceId", error_source_id, 0x120, 0x20, true, 0xaeb73026f60a738e)
#else
#define _m00
#define _m01
#define _m02
#endif