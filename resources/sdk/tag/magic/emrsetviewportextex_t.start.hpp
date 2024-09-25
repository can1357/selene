#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emr_t), "tagEMRSETVIEWPORTEXTEX.emr", emr, 0x0, 0x40, true, 0xfc7018d3ed1b57fb)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::size_t), "tagEMRSETVIEWPORTEXTEX.szlExtent", szl_extent, 0x40, 0x40, true, 0xc2c7028cda72d8e2)
#else
#define _m00
#define _m01
#endif