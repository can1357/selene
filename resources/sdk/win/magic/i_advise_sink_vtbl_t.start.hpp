#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_advise_sink_t*, const struct nt::guid_t*, void**)>*), "IAdviseSinkVtbl.QueryInterface", query_interface, 0x0, 0x40, true, 0xf1b1345349de0e44)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_advise_sink_t*)>*), "IAdviseSinkVtbl.AddRef", add_ref, 0x40, 0x40, true, 0x3ebb14e29f247879)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_advise_sink_t*)>*), "IAdviseSinkVtbl.Release", release, 0x80, 0x40, true, 0x765cd00679e9e9db)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct win::i_advise_sink_t*, struct tag::formatetc_t*, struct tag::stgmedium_t*)>*), "IAdviseSinkVtbl.OnDataChange", on_data_change, 0xc0, 0x40, true, 0xbe3eb6df4328c705)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct win::i_advise_sink_t*, uint32_t, int32_t)>*), "IAdviseSinkVtbl.OnViewChange", on_view_change, 0x100, 0x40, true, 0x3241a6e23b24b185)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct win::i_advise_sink_t*, struct win::i_moniker_t*)>*), "IAdviseSinkVtbl.OnRename", on_rename, 0x140, 0x40, true, 0x60b4bcdf38e05245)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct win::i_advise_sink_t*)>*), "IAdviseSinkVtbl.OnSave", on_save, 0x180, 0x40, true, 0x4567812ffbddfe10)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct win::i_advise_sink_t*)>*), "IAdviseSinkVtbl.OnClose", on_close, 0x1c0, 0x40, true, 0x4e1de700eabfdcd3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif