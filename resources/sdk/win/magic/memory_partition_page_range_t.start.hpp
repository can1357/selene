#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORY_PARTITION_PAGE_RANGE.StartPage", start_page, 0x0, 0x40, true, 0x5002cd701d5980db)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORY_PARTITION_PAGE_RANGE.NumberOfPages", number_of_pages, 0x40, 0x40, true, 0xd29d5d42d9b9d8dc)
#else
#define _m00
#define _m01
#endif