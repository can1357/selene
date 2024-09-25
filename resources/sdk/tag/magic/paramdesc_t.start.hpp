#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::paramdescex_t*), "tagPARAMDESC.pparamdescex", pparamdescex, 0x0, 0x40, true, 0x9a0a95cb93ee65a2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagPARAMDESC.wParamFlags", w_param_flags, 0x40, 0x10, true, 0xcb453c001798450b)
#else
#define _m00
#define _m01
#endif