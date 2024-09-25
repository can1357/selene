#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagIMEMENUITEMINFOA.cbSize", cb_size, 0x0, 0x20, true, 0x6c41d66264b25167)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagIMEMENUITEMINFOA.fType", f_type, 0x20, 0x20, true, 0x40baa6b4ecb66438)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagIMEMENUITEMINFOA.fState", f_state, 0x40, 0x20, true, 0xceba8d164528a89b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagIMEMENUITEMINFOA.wID", w_id, 0x60, 0x20, true, 0x78290a16d1c125fe)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hbitmap_t*), "tagIMEMENUITEMINFOA.hbmpChecked", hbmp_checked, 0x80, 0x40, true, 0x277a6037a25bbf72)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hbitmap_t*), "tagIMEMENUITEMINFOA.hbmpUnchecked", hbmp_unchecked, 0xc0, 0x40, true, 0xba3a60c947c2d39b)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagIMEMENUITEMINFOA.dwItemData", dw_item_data, 0x100, 0x20, true, 0xbd2d1ee82f90788d)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<char, 80>), "tagIMEMENUITEMINFOA.szString", sz_string, 0x120, 0x80, true, 0x148979ad5f4458a9)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hbitmap_t*), "tagIMEMENUITEMINFOA.hbmpItem", hbmp_item, 0x3c0, 0x40, true, 0x1d5dfb2fac066a1c)
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