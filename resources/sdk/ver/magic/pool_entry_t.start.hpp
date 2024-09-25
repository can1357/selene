#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ver::pool_page_header_t), "_VI_POOL_ENTRY.PageHeader", page_header, 0x0, 0xc0, true, 0x904b9fbd92e3afac)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ver::pool_entry_inuse_t), "_VI_POOL_ENTRY.InUse", in_use, 0x0, 0x0, true, 0x3554d5567dc2dbd8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::slist_entry_t*), "_VI_POOL_ENTRY.NextFree", next_free, 0x0, 0x40, true, 0x713a0876479dfd85)
#else
#define _m00
#define _m01
#define _m02
#endif