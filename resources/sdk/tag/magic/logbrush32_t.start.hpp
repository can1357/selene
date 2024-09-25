#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagLOGBRUSH32.lbStyle", lb_style, 0x0, 0x20, true, 0x6197ab591458233b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagLOGBRUSH32.lbColor", lb_color, 0x20, 0x20, true, 0x176c18e31a3cfe8c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagLOGBRUSH32.lbHatch", lb_hatch, 0x40, 0x20, true, 0x35d608a171c87f0b)
#else
#define _m00
#define _m01
#define _m02
#endif