#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_MEMORY_INFORMATION.ZeroPageCount", zero_page_count, 0x0, 0x40, true, 0xbd788c339e7d0697)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_MEMORY_INFORMATION.FreePageCount", free_page_count, 0x40, 0x40, true, 0x4bd9fa3226822c7c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_MEMORY_INFORMATION.ModifiedPageCount", modified_page_count, 0x80, 0x40, true, 0x4d3cb547409bbd0a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_MEMORY_INFORMATION.ModifiedNoWritePageCount", modified_no_write_page_count, 0xc0, 0x40, true, 0x73f034c053648ae6)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_MEMORY_INFORMATION.BadPageCount", bad_page_count, 0x100, 0x40, true, 0x852f0a331f61e797)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 8>), "_PERFINFO_MEMORY_INFORMATION.PageCountByPriority", page_count_by_priority, 0x140, 0x0, true, 0xb54b6a3147aff14a)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 8>), "_PERFINFO_MEMORY_INFORMATION.RepurposedPagesByPriority", repurposed_pages_by_priority, 0x340, 0x0, true, 0x206f5ea34dc64a64)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_MEMORY_INFORMATION.ModifiedPageCountPageFile", modified_page_count_page_file, 0x540, 0x40, true, 0xe58b7bb34d885410)
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