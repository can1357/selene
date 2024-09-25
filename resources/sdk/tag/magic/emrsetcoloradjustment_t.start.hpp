#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emr_t), "tagEMRSETCOLORADJUSTMENT.emr", emr, 0x0, 0x40, true, 0xb446b7d86df8d4f0)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::coloradjustment_t), "tagEMRSETCOLORADJUSTMENT.ColorAdjustment", color_adjustment, 0x40, 0xc0, true, 0x10a00fb841c40bc3)
#else
#define _m00
#define _m01
#endif