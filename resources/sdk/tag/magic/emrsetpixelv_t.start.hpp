#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emr_t), "tagEMRSETPIXELV.emr", emr, 0x0, 0x40, true, 0x38834b760a201f66)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::pointl_t), "tagEMRSETPIXELV.ptlPixel", ptl_pixel, 0x40, 0x40, true, 0x193fb542b9d2ca6)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRSETPIXELV.crColor", cr_color, 0x80, 0x20, true, 0x4cbf4eb341656474)
#else
#define _m00
#define _m01
#define _m02
#endif