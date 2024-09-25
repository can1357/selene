#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct whea::event_log_entry_t), "_WHEA_THROTTLE_REG_DATA_IGNORED_EVENT.WheaEventLogEntry", whea_event_log_entry, 0x0, 0x0, false, 0x65778c1e11e7d926)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum whea::throttle_type_t), "_WHEA_THROTTLE_REG_DATA_IGNORED_EVENT.ThrottleType", throttle_type, 0x0, 0x0, false, 0x80d977477cd5b09b)
#else
#define _m00
#define _m01
#endif