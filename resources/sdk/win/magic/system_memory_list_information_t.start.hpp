#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_MEMORY_LIST_INFORMATION.ZeroPageCount", zero_page_count, 0x0, 0x40, true, 0x54f65704f2e39554)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_MEMORY_LIST_INFORMATION.FreePageCount", free_page_count, 0x40, 0x40, true, 0xfb433b480e83530e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_MEMORY_LIST_INFORMATION.ModifiedPageCount", modified_page_count, 0x80, 0x40, true, 0x17067effcbdd1c58)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_MEMORY_LIST_INFORMATION.ModifiedNoWritePageCount", modified_no_write_page_count, 0xc0, 0x40, true, 0x6597ef4721f73b6)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_MEMORY_LIST_INFORMATION.BadPageCount", bad_page_count, 0x100, 0x40, true, 0x9da6afc7012cf13f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 8>), "_SYSTEM_MEMORY_LIST_INFORMATION.PageCountByPriority", page_count_by_priority, 0x140, 0x0, true, 0x3c50ff8e580b8763)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 8>), "_SYSTEM_MEMORY_LIST_INFORMATION.RepurposedPagesByPriority", repurposed_pages_by_priority, 0x340, 0x0, true, 0x7daf57ec0619f9e2)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_MEMORY_LIST_INFORMATION.ModifiedPageCountPageFile", modified_page_count_page_file, 0x540, 0x40, true, 0x3f0fe2f50febb732)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif