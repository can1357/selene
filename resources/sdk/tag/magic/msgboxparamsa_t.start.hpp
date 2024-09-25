#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMSGBOXPARAMSA.cbSize", cb_size, 0x0, 0x20, true, 0x634471935e39aaad)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hwnd_t*), "tagMSGBOXPARAMSA.hwndOwner", hwnd_owner, 0x40, 0x40, true, 0xf648c1159ba73713)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hinstance_t*), "tagMSGBOXPARAMSA.hInstance", h_instance, 0x80, 0x40, true, 0x724f9f6db0c45a9b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const char*), "tagMSGBOXPARAMSA.lpszText", lpsz_text, 0xc0, 0x40, true, 0x45224825facaaa23)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const char*), "tagMSGBOXPARAMSA.lpszCaption", lpsz_caption, 0x100, 0x40, true, 0xe7adce52d53bf768)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMSGBOXPARAMSA.dwStyle", dw_style, 0x140, 0x20, true, 0x2101c506b1620341)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const char*), "tagMSGBOXPARAMSA.lpszIcon", lpsz_icon, 0x180, 0x40, true, 0xdc5c84260b393214)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "tagMSGBOXPARAMSA.dwContextHelpId", dw_context_help_id, 0x1c0, 0x40, true, 0xc4bd633292073802)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct tag::helpinfo_t*)>*), "tagMSGBOXPARAMSA.lpfnMsgBoxCallback", lpfn_msg_box_callback, 0x200, 0x40, true, 0x78c028f5f6a468bf)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMSGBOXPARAMSA.dwLanguageId", dw_language_id, 0x240, 0x20, true, 0xa3370d8f699b9461)
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