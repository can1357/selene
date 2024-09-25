#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct whea::event_log_entry_t), "_WHEA_MEMORY_THROTTLE_SUMMARY_FAILED_EVENT.WheaEventLogEntry", whea_event_log_entry, 0x0, 0x0, false, 0x75bd5a54b92fd7a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WHEA_MEMORY_THROTTLE_SUMMARY_FAILED_EVENT.Status", status, 0x0, 0x0, false, 0xbbdc75511f8d6264)
#else
#define _m00
#define _m01
#endif