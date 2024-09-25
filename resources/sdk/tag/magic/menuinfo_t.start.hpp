#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMENUINFO.cbSize", cb_size, 0x0, 0x20, true, 0x6dd60b74472a789c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMENUINFO.fMask", f_mask, 0x20, 0x20, true, 0xe4b1df9d7a67bc0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMENUINFO.dwStyle", dw_style, 0x40, 0x20, true, 0x1734460e07421df6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMENUINFO.cyMax", cy_max, 0x60, 0x20, true, 0xcb8440ba5b9a2711)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hbrush_t*), "tagMENUINFO.hbrBack", hbr_back, 0x80, 0x40, true, 0xb94ab35375e2e7a0)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMENUINFO.dwContextHelpID", dw_context_help_id, 0xc0, 0x20, true, 0x7295bf56cc01a224)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "tagMENUINFO.dwMenuData", dw_menu_data, 0x100, 0x40, true, 0xb194b8f45d7bd785)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif