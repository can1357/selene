#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::point_t), "_DRAWPATRECT.ptPosition", pt_position, 0x0, 0x40, true, 0xfea5b906adc8abb4)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::point_t), "_DRAWPATRECT.ptSize", pt_size, 0x40, 0x40, true, 0x3dcb923f10d52d94)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DRAWPATRECT.wStyle", w_style, 0x80, 0x10, true, 0x2f996d322ba8e092)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DRAWPATRECT.wPattern", w_pattern, 0x90, 0x10, true, 0x4215787bd07a2f0b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif