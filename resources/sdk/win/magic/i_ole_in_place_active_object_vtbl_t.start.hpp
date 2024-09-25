#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_ole_in_place_active_object_t*, const struct nt::guid_t*, void**)>*), "IOleInPlaceActiveObjectVtbl.QueryInterface", query_interface, 0x0, 0x40, true, 0x8efa5d7d7db0bafc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_ole_in_place_active_object_t*)>*), "IOleInPlaceActiveObjectVtbl.AddRef", add_ref, 0x40, 0x40, true, 0x8b740d8347c1f522)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_ole_in_place_active_object_t*)>*), "IOleInPlaceActiveObjectVtbl.Release", release, 0x80, 0x40, true, 0xbb88327a89767afd)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_ole_in_place_active_object_t*, struct win::hwnd_t**)>*), "IOleInPlaceActiveObjectVtbl.GetWindow", get_window, 0xc0, 0x40, true, 0x14ceff71bc7e6bb8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_ole_in_place_active_object_t*, int32_t)>*), "IOleInPlaceActiveObjectVtbl.ContextSensitiveHelp", context_sensitive_help, 0x100, 0x40, true, 0xc4ac41ce7bc2236d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_ole_in_place_active_object_t*, struct tag::msg_t*)>*), "IOleInPlaceActiveObjectVtbl.TranslateAcceleratorW", translate_accelerator_w, 0x140, 0x40, true, 0xccd5e7ea1bee1dfb)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_ole_in_place_active_object_t*, int32_t)>*), "IOleInPlaceActiveObjectVtbl.OnFrameWindowActivate", on_frame_window_activate, 0x180, 0x40, true, 0x19b02f0ac3743a81)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_ole_in_place_active_object_t*, int32_t)>*), "IOleInPlaceActiveObjectVtbl.OnDocWindowActivate", on_doc_window_activate, 0x1c0, 0x40, true, 0x6791784f23d333e9)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_ole_in_place_active_object_t*, const struct tag::rect_t*, struct win::i_ole_in_place_ui_window_t*, int32_t)>*), "IOleInPlaceActiveObjectVtbl.ResizeBorder", resize_border, 0x200, 0x40, true, 0x41196ba429e98e24)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_ole_in_place_active_object_t*, int32_t)>*), "IOleInPlaceActiveObjectVtbl.EnableModeless", enable_modeless, 0x240, 0x40, true, 0xad4ecf8ab63967e)
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