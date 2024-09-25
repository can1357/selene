#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_PHYSICAL_MEMORY_RUN64.BasePage", base_page, 0x0, 0x40, true, 0xf847fe866034ea6e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_PHYSICAL_MEMORY_RUN64.PageCount", page_count, 0x40, 0x40, true, 0x748a2b54855837ea)
#else
#define _m00
#define _m01
#endif