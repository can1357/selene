#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FIND_INFO.tiIndex", ti_index, 0x0, 0x20, true, 0x62352aecd465d47a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FIND_INFO.tiCurrent", ti_current, 0x20, 0x20, true, 0x880e0075a6ece7a0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FIND_INFO.tiEndIndex", ti_end_index, 0x40, 0x20, true, 0x136a05c439445702)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_FIND_INFO.tName", t_name, 0x60, 0x10, true, 0xf3cdd9c2f69b34)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FIND_INFO.dwIndexRec", dw_index_rec, 0x80, 0x20, true, 0x8e4ada932429509d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FIND_INFO.dwFlags", dw_flags, 0xa0, 0x20, true, 0x9251e362206d689)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_FIND_INFO.ullKey", ull_key, 0xc0, 0x40, true, 0x813b5e9f19f21d37)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "_FIND_INFO.szName", sz_name, 0x100, 0x40, true, 0x9b78663dff922463)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FIND_INFO.dwName", dw_name, 0x100, 0x20, true, 0x72eaaa351297befe)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t*), "_FIND_INFO.pguidName", pguid_name, 0x100, 0x40, true, 0xcfbdc3fb760459ab)
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