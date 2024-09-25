#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NAME_CACHE_LIST_CTRL_STATS.Searches", searches, 0x0, 0x20, true, 0xf51cd0062d87bb7c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NAME_CACHE_LIST_CTRL_STATS.Hits", hits, 0x20, 0x20, true, 0xf193a4dcceb7a2ec)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NAME_CACHE_LIST_CTRL_STATS.Created", created, 0x40, 0x20, true, 0x56e10ae4cc219816)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NAME_CACHE_LIST_CTRL_STATS.Temporary", temporary, 0x60, 0x20, true, 0x291c8123683ccb03)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NAME_CACHE_LIST_CTRL_STATS.Duplicate", duplicate, 0x80, 0x20, true, 0x3a8321b543e47ef2)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NAME_CACHE_LIST_CTRL_STATS.Removed", removed, 0xa0, 0x20, true, 0xa6488746b53a3abf)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NAME_CACHE_LIST_CTRL_STATS.RemovedDueToCase", removed_due_to_case, 0xc0, 0x20, true, 0x37e5fef783f39b7b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif