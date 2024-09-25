#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagLOGBRUSH.lbStyle", lb_style, 0x0, 0x20, true, 0x756f4455fdc6f888)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagLOGBRUSH.lbColor", lb_color, 0x20, 0x20, true, 0x3abe3055da8b1a39)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "tagLOGBRUSH.lbHatch", lb_hatch, 0x40, 0x40, true, 0xff0b62cb84a204ef)
#else
#define _m00
#define _m01
#define _m02
#endif