#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagIMEMENUITEMINFOW.cbSize", cb_size, 0x0, 0x20, true, 0xa6bc2bbc7f0e6676)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagIMEMENUITEMINFOW.fType", f_type, 0x20, 0x20, true, 0x17d36261f09915d9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagIMEMENUITEMINFOW.fState", f_state, 0x40, 0x20, true, 0x3781337bf7a74fcb)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagIMEMENUITEMINFOW.wID", w_id, 0x60, 0x20, true, 0x42adee5d0a6247af)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hbitmap_t*), "tagIMEMENUITEMINFOW.hbmpChecked", hbmp_checked, 0x80, 0x40, true, 0xe2f735e4a28ff4d4)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hbitmap_t*), "tagIMEMENUITEMINFOW.hbmpUnchecked", hbmp_unchecked, 0xc0, 0x40, true, 0x2a0c9880f0150d6f)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagIMEMENUITEMINFOW.dwItemData", dw_item_data, 0x100, 0x20, true, 0x291daacaae7c88a1)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 80>), "tagIMEMENUITEMINFOW.szString", sz_string, 0x120, 0x0, true, 0x78fea73ec93f1015)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hbitmap_t*), "tagIMEMENUITEMINFOW.hbmpItem", hbmp_item, 0x640, 0x40, true, 0x626ddf133843f8d3)
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