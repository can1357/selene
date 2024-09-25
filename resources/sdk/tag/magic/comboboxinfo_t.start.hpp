#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCOMBOBOXINFO.cbSize", cb_size, 0x0, 0x20, true, 0xa5e022df3f60f49e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "tagCOMBOBOXINFO.rcItem", rc_item, 0x20, 0x80, true, 0xdbd3211d068d8e28)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "tagCOMBOBOXINFO.rcButton", rc_button, 0xa0, 0x80, true, 0xe44530097abd00d0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCOMBOBOXINFO.stateButton", state_button, 0x120, 0x20, true, 0x3397cc8a2523a544)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hwnd_t*), "tagCOMBOBOXINFO.hwndCombo", hwnd_combo, 0x140, 0x40, true, 0x89e733516031dbaf)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hwnd_t*), "tagCOMBOBOXINFO.hwndItem", hwnd_item, 0x180, 0x40, true, 0x476c1dad7675aa72)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hwnd_t*), "tagCOMBOBOXINFO.hwndList", hwnd_list, 0x1c0, 0x40, true, 0x2803fda71791aab5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif