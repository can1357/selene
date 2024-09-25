#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_SHARED_CACHE_MAP_LIST_CURSOR.SharedCacheMapLinks", shared_cache_map_links, 0x0, 0x80, true, 0xbc68f1b8d5046105)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SHARED_CACHE_MAP_LIST_CURSOR.Flags", flags, 0x80, 0x20, true, 0x9f3ff4b4bea9a802)
#else
#define _m00
#define _m01
#endif