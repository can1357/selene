#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMENUITEMINFOW.cbSize", cb_size, 0x0, 0x20, true, 0xb29876191939bbd8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMENUITEMINFOW.fMask", f_mask, 0x20, 0x20, true, 0x13f0682a3db6479c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMENUITEMINFOW.fType", f_type, 0x40, 0x20, true, 0xaad19fdd3ad5e5b9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMENUITEMINFOW.fState", f_state, 0x60, 0x20, true, 0x9348356b17be4731)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMENUITEMINFOW.wID", w_id, 0x80, 0x20, true, 0x48bacb060b5b4c90)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hmenu_t*), "tagMENUITEMINFOW.hSubMenu", h_sub_menu, 0xc0, 0x40, true, 0x59c4065891a18060)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hbitmap_t*), "tagMENUITEMINFOW.hbmpChecked", hbmp_checked, 0x100, 0x40, true, 0x7c682db14d0d1b53)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hbitmap_t*), "tagMENUITEMINFOW.hbmpUnchecked", hbmp_unchecked, 0x140, 0x40, true, 0xaf3a6170af9290e9)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "tagMENUITEMINFOW.dwItemData", dw_item_data, 0x180, 0x40, true, 0x24b219ea8fc034ae)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "tagMENUITEMINFOW.dwTypeData", dw_type_data, 0x1c0, 0x40, true, 0x1496850eff57bff4)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMENUITEMINFOW.cch", cch, 0x200, 0x20, true, 0xea3aa43b74739c86)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hbitmap_t*), "tagMENUITEMINFOW.hbmpItem", hbmp_item, 0x240, 0x40, true, 0x5069e7771c7ed9fb)
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
#endif