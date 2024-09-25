#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tagRemBINDINFO.cbSize", cb_size, 0x0, 0x20, true, 0x4abb184282e4c119)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_tagRemBINDINFO.szExtraInfo", sz_extra_info, 0x40, 0x40, true, 0x988a972ea777b957)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tagRemBINDINFO.grfBindInfoF", grf_bind_info_f, 0x80, 0x20, true, 0x5634c38f57a1b461)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tagRemBINDINFO.dwBindVerb", dw_bind_verb, 0xa0, 0x20, true, 0x52ce82450391bb7e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_tagRemBINDINFO.szCustomVerb", sz_custom_verb, 0xc0, 0x40, true, 0x34719ad13c8f0ed)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tagRemBINDINFO.cbstgmedData", cbstgmed_data, 0x100, 0x20, true, 0xe1f4b0dcb294c4b5)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tagRemBINDINFO.dwOptions", dw_options, 0x120, 0x20, true, 0xde7b440f9c0eb547)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tagRemBINDINFO.dwOptionsFlags", dw_options_flags, 0x140, 0x20, true, 0xbf8dd0fe0c422234)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tagRemBINDINFO.dwCodePage", dw_code_page, 0x160, 0x20, true, 0x516873ba483d1eb0)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::remsecurity_attributes_t), "_tagRemBINDINFO.securityAttributes", security_attributes, 0x180, 0x60, true, 0xfe7e32ddac29da5c)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_tagRemBINDINFO.iid", iid, 0x1e0, 0x80, true, 0x11fca57cdf6852a2)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t*), "_tagRemBINDINFO.pUnk", p_unk, 0x280, 0x40, true, 0x6115e327483074ba)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tagRemBINDINFO.dwReserved", dw_reserved, 0x2c0, 0x20, true, 0x87bc9b92188f0bdf)
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
#define _m10
#define _m11
#define _m12
#endif