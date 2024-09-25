#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_HALP_EMERGENCY_LA_QUEUE_ENTRY.ListEntry", list_entry, 0x0, 0x80, true, 0xe6d3dbd857a59978)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum halp::emergency_la_queue_type_t), "_HALP_EMERGENCY_LA_QUEUE_ENTRY.EntryType", entry_type, 0x80, 0x20, true, 0x369d97f162b363ba)
#else
#define _m00
#define _m01
#endif