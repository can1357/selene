#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t*), "tagCONNECTDATA.pUnk", p_unk, 0x0, 0x40, true, 0x1f6ee3397ec5859b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCONNECTDATA.dwCookie", dw_cookie, 0x40, 0x20, true, 0x272b13b618fa8b27)
#else
#define _m00
#define _m01
#endif