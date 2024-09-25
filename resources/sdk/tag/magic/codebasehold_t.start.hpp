#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tagCODEBASEHOLD.cbSize", cb_size, 0x0, 0x20, true, 0x9a4d8b7e68ec61d8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_tagCODEBASEHOLD.szDistUnit", sz_dist_unit, 0x40, 0x40, true, 0x5f3a76b29bd6bab7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_tagCODEBASEHOLD.szCodeBase", sz_code_base, 0x80, 0x40, true, 0x9a03c8e170015887)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tagCODEBASEHOLD.dwVersionMS", dw_version_ms, 0xc0, 0x20, true, 0x39ed3e7f2c02a5fb)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tagCODEBASEHOLD.dwVersionLS", dw_version_ls, 0xe0, 0x20, true, 0x9a7e310dc99ff836)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tagCODEBASEHOLD.dwStyle", dw_style, 0x100, 0x20, true, 0x2daf4f6073f0e0e6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif