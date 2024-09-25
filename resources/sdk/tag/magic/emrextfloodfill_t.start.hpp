#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emr_t), "tagEMREXTFLOODFILL.emr", emr, 0x0, 0x40, true, 0x2990c27958880c11)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::pointl_t), "tagEMREXTFLOODFILL.ptlStart", ptl_start, 0x40, 0x40, true, 0x309711f4888b963d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMREXTFLOODFILL.crColor", cr_color, 0x80, 0x20, true, 0xd1979b509d3a10f0)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMREXTFLOODFILL.iMode", i_mode, 0xa0, 0x20, true, 0x5bc980bbde0114ef)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif