#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ICONINFOEXW.cbSize", cb_size, 0x0, 0x20, true, 0xf739360a31465e1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ICONINFOEXW.fIcon", f_icon, 0x20, 0x20, true, 0x9b815a41746078c0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ICONINFOEXW.xHotspot", x_hotspot, 0x40, 0x20, true, 0xee1ab6346e842700)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ICONINFOEXW.yHotspot", y_hotspot, 0x60, 0x20, true, 0x41fa834abd74d0e1)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hbitmap_t*), "_ICONINFOEXW.hbmMask", hbm_mask, 0x80, 0x40, true, 0x77c446770f894348)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hbitmap_t*), "_ICONINFOEXW.hbmColor", hbm_color, 0xc0, 0x40, true, 0x8ef9c8c595e2c939)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_ICONINFOEXW.wResID", w_res_id, 0x100, 0x10, true, 0x25894b887f09bbb7)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 260>), "_ICONINFOEXW.szModName", sz_mod_name, 0x110, 0x40, true, 0x53df343b3e4304f3)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 260>), "_ICONINFOEXW.szResName", sz_res_name, 0x1150, 0x40, true, 0x993683c7576ad346)
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