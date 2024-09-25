#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagDRAWITEMSTRUCT.CtlType", ctl_type, 0x0, 0x20, true, 0xd1716ba521e02d7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagDRAWITEMSTRUCT.CtlID", ctl_id, 0x20, 0x20, true, 0x5d7659edb2cd49aa)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagDRAWITEMSTRUCT.itemID", item_id, 0x40, 0x20, true, 0xb203f2d5cb7658e8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagDRAWITEMSTRUCT.itemAction", item_action, 0x60, 0x20, true, 0xe1ac1d1cf4e539d8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagDRAWITEMSTRUCT.itemState", item_state, 0x80, 0x20, true, 0x15ac09a60009b0c5)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hwnd_t*), "tagDRAWITEMSTRUCT.hwndItem", hwnd_item, 0xc0, 0x40, true, 0x4061801e2a7d4d54)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hdc_t*), "tagDRAWITEMSTRUCT.hDC", h_dc, 0x100, 0x40, true, 0x5a9b6aad6a45cf5)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "tagDRAWITEMSTRUCT.rcItem", rc_item, 0x140, 0x80, true, 0xa2617a345b93ccfb)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "tagDRAWITEMSTRUCT.itemData", item_data, 0x1c0, 0x40, true, 0x13030b2a4632af86)
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