#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEXTLOGPEN.elpPenStyle", elp_pen_style, 0x0, 0x20, true, 0x956c03833b4ac31c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEXTLOGPEN.elpWidth", elp_width, 0x20, 0x20, true, 0xa69550bf46b8df0a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEXTLOGPEN.elpBrushStyle", elp_brush_style, 0x40, 0x20, true, 0x54d33155ae913a19)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEXTLOGPEN.elpColor", elp_color, 0x60, 0x20, true, 0xb2af79d1fd6dcb)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "tagEXTLOGPEN.elpHatch", elp_hatch, 0x80, 0x40, true, 0x7ea35ff5aa4355e8)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEXTLOGPEN.elpNumEntries", elp_num_entries, 0xc0, 0x20, true, 0x7beee6a6a46aada3)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 1>), "tagEXTLOGPEN.elpStyleEntry", elp_style_entry, 0xe0, 0x20, true, 0x6742593f4db55eae)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif