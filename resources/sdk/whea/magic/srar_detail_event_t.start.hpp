#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct whea::event_log_entry_t), "_WHEA_SRAR_DETAIL_EVENT.WheaEventLogEntry", whea_event_log_entry, 0x0, 0x0, false, 0xbda0eb7497406526)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_SRAR_DETAIL_EVENT.RecoveryContextFlags", recovery_context_flags, 0x0, 0x0, false, 0xfc4691e035e866f1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_SRAR_DETAIL_EVENT.RecoveryContextPa", recovery_context_pa, 0x0, 0x0, false, 0xd88c8ec2a81b9001)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WHEA_SRAR_DETAIL_EVENT.PageOfflineStatus", page_offline_status, 0x0, 0x0, false, 0x4379055d8b608671)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_SRAR_DETAIL_EVENT.KernelConsumerError", kernel_consumer_error, 0x0, 0x0, false, 0x996b3eab7c291c51)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif