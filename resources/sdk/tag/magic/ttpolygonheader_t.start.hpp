#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagTTPOLYGONHEADER.cb", cb, 0x0, 0x20, true, 0x77dd9027d15e5e3a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagTTPOLYGONHEADER.dwType", dw_type, 0x20, 0x20, true, 0x7d5927efb81e90e4)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::pointfx_t), "tagTTPOLYGONHEADER.pfxStart", pfx_start, 0x40, 0x40, true, 0x4d10232d354d4dca)
#else
#define _m00
#define _m01
#define _m02
#endif