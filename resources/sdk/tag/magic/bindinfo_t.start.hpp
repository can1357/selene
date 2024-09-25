#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tagBINDINFO.cbSize", cb_size, 0x0, 0x20, true, 0x3d8d2df26d31875f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_tagBINDINFO.szExtraInfo", sz_extra_info, 0x40, 0x40, true, 0x90340235051daab9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::stgmedium_t), "_tagBINDINFO.stgmedData", stgmed_data, 0x80, 0xc0, true, 0x9581283564ed9896)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tagBINDINFO.grfBindInfoF", grf_bind_info_f, 0x140, 0x20, true, 0xaf8142bd160369ea)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tagBINDINFO.dwBindVerb", dw_bind_verb, 0x160, 0x20, true, 0xd961faa95145df40)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_tagBINDINFO.szCustomVerb", sz_custom_verb, 0x180, 0x40, true, 0x3c3165bc121c90c0)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tagBINDINFO.cbstgmedData", cbstgmed_data, 0x1c0, 0x20, true, 0xe74b4ebb3dc8e520)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tagBINDINFO.dwOptions", dw_options, 0x1e0, 0x20, true, 0x68c4f3d8e54900a4)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tagBINDINFO.dwOptionsFlags", dw_options_flags, 0x200, 0x20, true, 0x5a7303b684958177)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tagBINDINFO.dwCodePage", dw_code_page, 0x220, 0x20, true, 0x9b482a8e16f29b98)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct sec::attributes_t), "_tagBINDINFO.securityAttributes", security_attributes, 0x240, 0xc0, true, 0xa45c2f6e5f3f9dd4)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_tagBINDINFO.iid", iid, 0x300, 0x80, true, 0x66ed07bdb1f9b30d)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t*), "_tagBINDINFO.pUnk", p_unk, 0x380, 0x40, true, 0x446cb7039c23b9c5)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tagBINDINFO.dwReserved", dw_reserved, 0x3c0, 0x20, true, 0xa632494d6ea00d8c)
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
#define _m13
#endif