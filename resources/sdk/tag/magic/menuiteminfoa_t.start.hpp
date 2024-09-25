#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMENUITEMINFOA.cbSize", cb_size, 0x0, 0x20, true, 0x2fb3d5e5a8f8c49e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMENUITEMINFOA.fMask", f_mask, 0x20, 0x20, true, 0xfc9888542935644f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMENUITEMINFOA.fType", f_type, 0x40, 0x20, true, 0xfb25b81ad06bc8de)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMENUITEMINFOA.fState", f_state, 0x60, 0x20, true, 0x7037c048049cd649)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMENUITEMINFOA.wID", w_id, 0x80, 0x20, true, 0x47bb28bce065853c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hmenu_t*), "tagMENUITEMINFOA.hSubMenu", h_sub_menu, 0xc0, 0x40, true, 0x925ef9a88f79e283)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hbitmap_t*), "tagMENUITEMINFOA.hbmpChecked", hbmp_checked, 0x100, 0x40, true, 0x6a2189bcf43ba112)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hbitmap_t*), "tagMENUITEMINFOA.hbmpUnchecked", hbmp_unchecked, 0x140, 0x40, true, 0xbcf89010f354f489)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "tagMENUITEMINFOA.dwItemData", dw_item_data, 0x180, 0x40, true, 0x57b1faf1f5419007)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "tagMENUITEMINFOA.dwTypeData", dw_type_data, 0x1c0, 0x40, true, 0x26ad9eff5c1c92fd)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMENUITEMINFOA.cch", cch, 0x200, 0x20, true, 0x3163719edb6c184)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hbitmap_t*), "tagMENUITEMINFOA.hbmpItem", hbmp_item, 0x240, 0x40, true, 0x6d1d2580f6a258ba)
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