#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_view_object_t*, const struct nt::guid_t*, void**)>*), "IViewObjectVtbl.QueryInterface", query_interface, 0x0, 0x40, true, 0xcdc5567dcc9f9857)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_view_object_t*)>*), "IViewObjectVtbl.AddRef", add_ref, 0x40, 0x40, true, 0x3217e9ccd3b92b1d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_view_object_t*)>*), "IViewObjectVtbl.Release", release, 0x80, 0x40, true, 0x26ebc0c6f907e8df)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_view_object_t*, uint32_t, int32_t, void*, struct tag::dvtargetdevice_t*, struct win::hdc_t*, struct win::hdc_t*, const struct win::rectl_t*, const struct win::rectl_t*, sdk::function<int32_t(uint64_t)>*, uint64_t)>*), "IViewObjectVtbl.Draw", draw, 0xc0, 0x40, true, 0xacf25331fba994c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_view_object_t*, uint32_t, int32_t, void*, struct tag::dvtargetdevice_t*, struct win::hdc_t*, struct tag::logpalette_t**)>*), "IViewObjectVtbl.GetColorSet", get_color_set, 0x100, 0x40, true, 0x7bd13a7ced03c9ee)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_view_object_t*, uint32_t, int32_t, void*, uint32_t*)>*), "IViewObjectVtbl.Freeze", freeze, 0x140, 0x40, true, 0x8ce3a9b7020a744b)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_view_object_t*, uint32_t)>*), "IViewObjectVtbl.Unfreeze", unfreeze, 0x180, 0x40, true, 0x72056bd551eda10)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_view_object_t*, uint32_t, uint32_t, struct win::i_advise_sink_t*)>*), "IViewObjectVtbl.SetAdvise", set_advise, 0x1c0, 0x40, true, 0x42f2d99991375ddc)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_view_object_t*, uint32_t*, uint32_t*, struct win::i_advise_sink_t**)>*), "IViewObjectVtbl.GetAdvise", get_advise, 0x200, 0x40, true, 0xff588db646a868d6)
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