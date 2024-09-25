#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagATTRINFO.tAttrID", t_attr_id, 0x0, 0x10, true, 0x5cd8ffe68ea76c52)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagATTRINFO.dwFlags", dw_flags, 0x20, 0x20, true, 0x910c3920fe48c351)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "tagATTRINFO.ullAttr", ull_attr, 0x40, 0x40, true, 0x3be33a81e342e02a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagATTRINFO.dwAttr", dw_attr, 0x40, 0x20, true, 0x39568d563add4360)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "tagATTRINFO.lpAttr", lp_attr, 0x40, 0x40, true, 0x29729f27a02d0afb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif