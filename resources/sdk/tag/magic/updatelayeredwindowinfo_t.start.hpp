#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagUPDATELAYEREDWINDOWINFO.cbSize", cb_size, 0x0, 0x20, true, 0x1aeeaa0318e5fd27)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hdc_t*), "tagUPDATELAYEREDWINDOWINFO.hdcDst", hdc_dst, 0x40, 0x40, true, 0x1abf22f2e045e609)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct tag::point_t*), "tagUPDATELAYEREDWINDOWINFO.pptDst", ppt_dst, 0x80, 0x40, true, 0xb5af7027ca0075a0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct tag::size_t*), "tagUPDATELAYEREDWINDOWINFO.psize", psize, 0xc0, 0x40, true, 0x547abe473c5668bd)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hdc_t*), "tagUPDATELAYEREDWINDOWINFO.hdcSrc", hdc_src, 0x100, 0x40, true, 0xd5d4faba25d6c3c1)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct tag::point_t*), "tagUPDATELAYEREDWINDOWINFO.pptSrc", ppt_src, 0x140, 0x40, true, 0xf4905d52880177aa)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagUPDATELAYEREDWINDOWINFO.crKey", cr_key, 0x180, 0x20, true, 0xe43574fcab310ae)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::blendfunction_t*), "tagUPDATELAYEREDWINDOWINFO.pblend", pblend, 0x1c0, 0x40, true, 0x3b9fe616afbe8a5)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagUPDATELAYEREDWINDOWINFO.dwFlags", dw_flags, 0x200, 0x20, true, 0x26396f1bc9ca4075)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct tag::rect_t*), "tagUPDATELAYEREDWINDOWINFO.prcDirty", prc_dirty, 0x240, 0x40, true, 0x48a2a7750999cd52)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#endif