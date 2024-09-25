#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PROVIDER_BINARY_ENTRY.ListEntry", list_entry, 0x0, 0x0, false, 0x8513a16053708ef4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROVIDER_BINARY_ENTRY.ConsumersNotified", consumers_notified, 0x0, 0x0, false, 0x6134424f45a0c876)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROVIDER_BINARY_ENTRY.DebugIdSize", debug_id_size, 0x0, 0x0, false, 0xf7b12d40fc5a1edf)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::cvdd_t), "_PROVIDER_BINARY_ENTRY.DebugId", debug_id, 0x0, 0x0, false, 0x675d620227a5395a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif