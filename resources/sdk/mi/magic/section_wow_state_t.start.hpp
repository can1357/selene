#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::bitmap_ex_t), "_MI_SECTION_WOW_STATE.ImageBitMap", image_bit_map, 0x0, 0x80, true, 0x26c286f68cdcef75)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::dll_overflow_area_t), "_MI_SECTION_WOW_STATE.OverflowArea", overflow_area, 0x80, 0x0, true, 0xc4de12bcc1fe0105)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::section_t*), "_MI_SECTION_WOW_STATE.CfgBitMapSection", cfg_bit_map_section, 0x180, 0x40, true, 0x9c161fab039543d7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::control_area_t*), "_MI_SECTION_WOW_STATE.CfgBitMapControlArea", cfg_bit_map_control_area, 0x1c0, 0x40, true, 0x17b348fb7030d7f3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif