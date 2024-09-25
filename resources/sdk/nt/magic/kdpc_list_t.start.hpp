#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "_KDPC_LIST.ListHead", list_head, 0x0, 0x40, true, 0x4c8b400475915986)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t*), "_KDPC_LIST.LastEntry", last_entry, 0x40, 0x40, true, 0x5568dad6f96d84eb)
#else
#define _m00
#define _m01
#endif