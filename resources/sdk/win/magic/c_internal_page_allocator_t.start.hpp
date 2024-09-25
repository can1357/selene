#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "CInternalPageAllocator._cPages", c_pages, 0x0, 0x40, true, 0xc4b37d374eb39eb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::page_entry_t**), "CInternalPageAllocator._pPageListStart", p_page_list_start, 0x40, 0x40, true, 0x2d4ef10cf41927e0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::page_entry_t**), "CInternalPageAllocator._pPageListEnd", p_page_list_end, 0x80, 0x40, true, 0xdb1ac0dea88dfbc1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CInternalPageAllocator._dwFlags", dw_flags, 0xc0, 0x20, true, 0xae9d9aaa1e562bac)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::page_entry_t), "CInternalPageAllocator._ListHead", list_head, 0x100, 0x80, true, 0x7a72311f49abfbdb)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CInternalPageAllocator._cEntries", c_entries, 0x180, 0x20, true, 0x770ecd75f204d6b0)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "CInternalPageAllocator._cbPerEntry", cb_per_entry, 0x1c0, 0x40, true, 0xfed47c2df3f2d8f2)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "CInternalPageAllocator._cEntriesPerPage", c_entries_per_page, 0x200, 0x10, true, 0xa47eaf66e1bcec80)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_ole_static_mutex_sem_t*), "CInternalPageAllocator._pLock", p_lock, 0x240, 0x40, true, 0x9752a30d54f747bc)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif