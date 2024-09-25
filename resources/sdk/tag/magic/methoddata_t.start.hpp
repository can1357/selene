#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "tagMETHODDATA.szName", sz_name, 0x0, 0x40, true, 0xed168bcdb528ea86)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::paramdata_t*), "tagMETHODDATA.ppdata", ppdata, 0x40, 0x40, true, 0x7a672d0152385380)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagMETHODDATA.dispid", dispid, 0x80, 0x20, true, 0xab1fb760a672eded)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMETHODDATA.iMeth", i_meth, 0xa0, 0x20, true, 0xa28fd0ef333de04)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum tag::callconv_t), "tagMETHODDATA.cc", cc, 0xc0, 0x20, true, 0xa21aedb29abbf2db)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMETHODDATA.cArgs", c_args, 0xe0, 0x20, true, 0x122443717cd96f8a)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagMETHODDATA.wFlags", w_flags, 0x100, 0x10, true, 0xd168254aafda88b0)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagMETHODDATA.vtReturn", vt_return, 0x110, 0x10, true, 0x257daf69d36188c6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif