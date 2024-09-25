#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct whea::event_log_entry_t), "_WHEA_THROTTLE_REGISTRY_CORRUPT_EVENT.WheaEventLogEntry", whea_event_log_entry, 0x0, 0x0, false, 0x5d6061f8ff386483)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum whea::throttle_type_t), "_WHEA_THROTTLE_REGISTRY_CORRUPT_EVENT.ThrottleType", throttle_type, 0x0, 0x0, false, 0xadb7e341f92a62c4)
#else
#define _m00
#define _m01
#endif