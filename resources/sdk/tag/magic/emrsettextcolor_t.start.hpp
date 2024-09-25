#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emr_t), "tagEMRSETTEXTCOLOR.emr", emr, 0x0, 0x40, true, 0xd9551b9a03156725)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRSETTEXTCOLOR.crColor", cr_color, 0x40, 0x20, true, 0xab188e9dab289224)
#else
#define _m00
#define _m01
#endif