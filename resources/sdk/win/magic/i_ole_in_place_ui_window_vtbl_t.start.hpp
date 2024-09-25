#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_ole_in_place_ui_window_t*, const struct nt::guid_t*, void**)>*), "IOleInPlaceUIWindowVtbl.QueryInterface", query_interface, 0x0, 0x40, true, 0x94332950ea41a252)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_ole_in_place_ui_window_t*)>*), "IOleInPlaceUIWindowVtbl.AddRef", add_ref, 0x40, 0x40, true, 0x3489ad9ee9b353c5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_ole_in_place_ui_window_t*)>*), "IOleInPlaceUIWindowVtbl.Release", release, 0x80, 0x40, true, 0xecf0def0fcf2145b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_ole_in_place_ui_window_t*, struct win::hwnd_t**)>*), "IOleInPlaceUIWindowVtbl.GetWindow", get_window, 0xc0, 0x40, true, 0x550fd4ae78870d23)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_ole_in_place_ui_window_t*, int32_t)>*), "IOleInPlaceUIWindowVtbl.ContextSensitiveHelp", context_sensitive_help, 0x100, 0x40, true, 0x5e6c93ae99183af0)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_ole_in_place_ui_window_t*, struct tag::rect_t*)>*), "IOleInPlaceUIWindowVtbl.GetBorder", get_border, 0x140, 0x40, true, 0xffd4a5765ed0494c)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_ole_in_place_ui_window_t*, const struct tag::rect_t*)>*), "IOleInPlaceUIWindowVtbl.RequestBorderSpace", request_border_space, 0x180, 0x40, true, 0x1b70753f735db72b)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_ole_in_place_ui_window_t*, const struct tag::rect_t*)>*), "IOleInPlaceUIWindowVtbl.SetBorderSpace", set_border_space, 0x1c0, 0x40, true, 0x8df978f876239e73)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_ole_in_place_ui_window_t*, struct win::i_ole_in_place_active_object_t*, const wchar_t*)>*), "IOleInPlaceUIWindowVtbl.SetActiveObject", set_active_object, 0x200, 0x40, true, 0xcd58ee5b92550e23)
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