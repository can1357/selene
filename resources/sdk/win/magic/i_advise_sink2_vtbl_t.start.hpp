#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_advise_sink2_t*, const struct nt::guid_t*, void**)>*), "IAdviseSink2Vtbl.QueryInterface", query_interface, 0x0, 0x40, true, 0x9deab461730678fd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_advise_sink2_t*)>*), "IAdviseSink2Vtbl.AddRef", add_ref, 0x40, 0x40, true, 0xbc8c05031a97ce7e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_advise_sink2_t*)>*), "IAdviseSink2Vtbl.Release", release, 0x80, 0x40, true, 0x2ec7f97764b46c6b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct win::i_advise_sink2_t*, struct tag::formatetc_t*, struct tag::stgmedium_t*)>*), "IAdviseSink2Vtbl.OnDataChange", on_data_change, 0xc0, 0x40, true, 0xd59c406c3ffed9d5)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct win::i_advise_sink2_t*, uint32_t, int32_t)>*), "IAdviseSink2Vtbl.OnViewChange", on_view_change, 0x100, 0x40, true, 0x29df848df9ec23f5)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct win::i_advise_sink2_t*, struct win::i_moniker_t*)>*), "IAdviseSink2Vtbl.OnRename", on_rename, 0x140, 0x40, true, 0x57dc79bc2cf73485)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct win::i_advise_sink2_t*)>*), "IAdviseSink2Vtbl.OnSave", on_save, 0x180, 0x40, true, 0x442e62e91c4f08c8)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct win::i_advise_sink2_t*)>*), "IAdviseSink2Vtbl.OnClose", on_close, 0x1c0, 0x40, true, 0xee85c51d57229c23)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct win::i_advise_sink2_t*, struct win::i_moniker_t*)>*), "IAdviseSink2Vtbl.OnLinkSrcChange", on_link_src_change, 0x200, 0x40, true, 0x6ca09c64029c1d9b)
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