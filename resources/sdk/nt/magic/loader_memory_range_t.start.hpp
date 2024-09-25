#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LOADER_MEMORY_RANGE.StartPage", start_page, 0x0, 0x0, false, 0xbfab252fbebe7b0b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LOADER_MEMORY_RANGE.NumberOfPages", number_of_pages, 0x0, 0x0, false, 0xc2c0e5b04961d043)
#else
#define _m00
#define _m01
#endif