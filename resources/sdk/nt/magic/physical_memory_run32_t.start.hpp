#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PHYSICAL_MEMORY_RUN32.BasePage", base_page, 0x0, 0x20, true, 0x5e689a4bdd66d207)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PHYSICAL_MEMORY_RUN32.PageCount", page_count, 0x20, 0x20, true, 0xa6869da09fbe2757)
#else
#define _m00
#define _m01
#endif