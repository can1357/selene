#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint32_t), "_MM_SYSTEM_PAGE_COUNTS.SystemCodePage", system_code_page, 0x0, 0x20, true, 0x5cb10b8fd8c904b8, 32, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint32_t), "_MM_SYSTEM_PAGE_COUNTS.SystemDriverPage", system_driver_page, 0x20, 0x20, true, 0xf986849aefbf9f4f, 32, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile int32_t), "_MM_SYSTEM_PAGE_COUNTS.TotalSystemCodePages", total_system_code_pages, 0x40, 0x20, true, 0x1db27ae4bb9c4589, 32, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile int32_t), "_MM_SYSTEM_PAGE_COUNTS.TotalSystemDriverPages", total_system_driver_pages, 0x60, 0x20, true, 0x84c9b02f2e756c9f, 32, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif