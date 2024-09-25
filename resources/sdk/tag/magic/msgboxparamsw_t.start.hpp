#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMSGBOXPARAMSW.cbSize", cb_size, 0x0, 0x20, true, 0x5f3f6d2caff27501)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hwnd_t*), "tagMSGBOXPARAMSW.hwndOwner", hwnd_owner, 0x40, 0x40, true, 0x3e435631698996d2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hinstance_t*), "tagMSGBOXPARAMSW.hInstance", h_instance, 0x80, 0x40, true, 0x5bd7d3d10a71910c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "tagMSGBOXPARAMSW.lpszText", lpsz_text, 0xc0, 0x40, true, 0x52f2311e090214b7)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "tagMSGBOXPARAMSW.lpszCaption", lpsz_caption, 0x100, 0x40, true, 0xd3cfc90654eff574)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMSGBOXPARAMSW.dwStyle", dw_style, 0x140, 0x20, true, 0xa7d5839f2ea1d301)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "tagMSGBOXPARAMSW.lpszIcon", lpsz_icon, 0x180, 0x40, true, 0xd8e83253fd355b5a)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "tagMSGBOXPARAMSW.dwContextHelpId", dw_context_help_id, 0x1c0, 0x40, true, 0x4334786cb339b4ac)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct tag::helpinfo_t*)>*), "tagMSGBOXPARAMSW.lpfnMsgBoxCallback", lpfn_msg_box_callback, 0x200, 0x40, true, 0x10fe2ed691995ee5)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMSGBOXPARAMSW.dwLanguageId", dw_language_id, 0x240, 0x20, true, 0x4151ddc84b8fd8b0)
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
#endif