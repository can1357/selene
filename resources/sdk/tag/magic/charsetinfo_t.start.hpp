#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCHARSETINFO.ciCharset", ci_charset, 0x0, 0x20, true, 0x7e494b3503a2c7c6)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCHARSETINFO.ciACP", ci_acp, 0x20, 0x20, true, 0x4727f177401b8af2)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::fontsignature_t), "tagCHARSETINFO.fs", fs, 0x40, 0xc0, true, 0xfc2a2db91a35bbf)
#else
#define _m00
#define _m01
#define _m02
#endif