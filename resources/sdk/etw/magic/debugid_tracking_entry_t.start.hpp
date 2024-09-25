#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_ETW_DEBUGID_TRACKING_ENTRY.ListEntry", list_entry, 0x0, 0x80, true, 0xeb42194434076237)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ETW_DEBUGID_TRACKING_ENTRY.ConsumersNotified", consumers_notified, 0x80, 0x8, true, 0x6a115945eeea3604)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_DEBUGID_TRACKING_ENTRY.DebugIdSize", debug_id_size, 0xa0, 0x20, true, 0x45c8e7bca44a7156)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::cvdd_t), "_ETW_DEBUGID_TRACKING_ENTRY.DebugId", debug_id, 0xc0, 0x20, true, 0x77c05a94ee4aebe0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif