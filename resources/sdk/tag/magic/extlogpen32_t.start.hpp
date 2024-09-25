#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEXTLOGPEN32.elpPenStyle", elp_pen_style, 0x0, 0x20, true, 0xc1587752ccfac2e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEXTLOGPEN32.elpWidth", elp_width, 0x20, 0x20, true, 0x5599655b63f5736)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEXTLOGPEN32.elpBrushStyle", elp_brush_style, 0x40, 0x20, true, 0xb302c68611df62d9)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEXTLOGPEN32.elpColor", elp_color, 0x60, 0x20, true, 0x69fd994dce5b8850)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEXTLOGPEN32.elpHatch", elp_hatch, 0x80, 0x20, true, 0x8cd696ee08481034)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEXTLOGPEN32.elpNumEntries", elp_num_entries, 0xa0, 0x20, true, 0xb3aaab0ebf7f1df1)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 1>), "tagEXTLOGPEN32.elpStyleEntry", elp_style_entry, 0xc0, 0x20, true, 0x42a60c1ec71eb29a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif