#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_PHYSICAL_MEMORY_RUN.BasePage", base_page, 0x0, 0x40, true, 0x1a1dfe7768466e52)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_PHYSICAL_MEMORY_RUN.PageCount", page_count, 0x40, 0x40, true, 0x159d3e1a18ad2838)
#else
#define _m00
#define _m01
#endif