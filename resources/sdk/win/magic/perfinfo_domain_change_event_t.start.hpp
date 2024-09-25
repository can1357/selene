#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_DOMAIN_CHANGE_EVENT.NewDomain", new_domain, 0x0, 0x40, true, 0xa7f9dd27dadc1947)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::perfinfo_domain_change_event_reason_t), "_PERFINFO_DOMAIN_CHANGE_EVENT.Reason", reason, 0x40, 0x20, true, 0x8d5024c8a6889d8b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_DOMAIN_CHANGE_EVENT.ThreadId", thread_id, 0x60, 0x20, true, 0x607cb30dd8d00b17)
#else
#define _m00
#define _m01
#define _m02
#endif