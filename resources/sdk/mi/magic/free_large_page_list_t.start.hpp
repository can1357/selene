#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_MI_FREE_LARGE_PAGE_LIST.ListHead", list_head, 0x0, 0x80, true, 0xe4b5e9246ee021a9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_FREE_LARGE_PAGE_LIST.EntryCount", entry_count, 0x80, 0x40, true, 0x3909ba207d989855)
#else
#define _m00
#define _m01
#endif