#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ICONINFOEXA.cbSize", cb_size, 0x0, 0x20, true, 0xbe53602ca635c7b2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ICONINFOEXA.fIcon", f_icon, 0x20, 0x20, true, 0xcb24123e006bca13)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ICONINFOEXA.xHotspot", x_hotspot, 0x40, 0x20, true, 0x1942551d2f116e56)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ICONINFOEXA.yHotspot", y_hotspot, 0x60, 0x20, true, 0xcc73cb5418080894)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hbitmap_t*), "_ICONINFOEXA.hbmMask", hbm_mask, 0x80, 0x40, true, 0x146e3692c78642b2)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hbitmap_t*), "_ICONINFOEXA.hbmColor", hbm_color, 0xc0, 0x40, true, 0x7d112ae541932b32)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_ICONINFOEXA.wResID", w_res_id, 0x100, 0x10, true, 0xab791c23ac575929)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<char, 260>), "_ICONINFOEXA.szModName", sz_mod_name, 0x110, 0x20, true, 0xdfb67cba40b40b32)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<char, 260>), "_ICONINFOEXA.szResName", sz_res_name, 0x930, 0x20, true, 0xe08e80c5e7c0f0d8)
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
#endif