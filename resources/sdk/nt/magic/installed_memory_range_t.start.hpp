#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_INSTALLED_MEMORY_RANGE.BasePage", base_page, 0x0, 0x0, false, 0x5314862577c61e00)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_INSTALLED_MEMORY_RANGE.PageCount", page_count, 0x0, 0x0, false, 0xff45e4b4f3bd9943)
#else
#define _m00
#define _m01
#endif