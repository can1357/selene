#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::slist_entry_t), "_ETW_APC_ENTRY.SListEntry", s_list_entry, 0x0, 0x80, true, 0x9d87500d5d29123b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kapc_t), "_ETW_APC_ENTRY.Apc", apc, 0x0, 0xc0, true, 0x4a059030ab06823d)
#else
#define _m00
#define _m01
#endif