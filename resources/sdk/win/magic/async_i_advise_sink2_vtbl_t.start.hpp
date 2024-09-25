#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::async_i_advise_sink2_t*, const struct nt::guid_t*, void**)>*), "AsyncIAdviseSink2Vtbl.QueryInterface", query_interface, 0x0, 0x40, true, 0x471ed13ce721b5b8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::async_i_advise_sink2_t*)>*), "AsyncIAdviseSink2Vtbl.AddRef", add_ref, 0x40, 0x40, true, 0xf7ba77cfb1c30b14)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::async_i_advise_sink2_t*)>*), "AsyncIAdviseSink2Vtbl.Release", release, 0x80, 0x40, true, 0x5656ab10dea919ab)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct win::async_i_advise_sink2_t*, struct tag::formatetc_t*, struct tag::stgmedium_t*)>*), "AsyncIAdviseSink2Vtbl.Begin_OnDataChange", begin_on_data_change, 0xc0, 0x40, true, 0xefb5264c9b1ceb7b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct win::async_i_advise_sink2_t*)>*), "AsyncIAdviseSink2Vtbl.Finish_OnDataChange", finish_on_data_change, 0x100, 0x40, true, 0x7e65d01b8831c69e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct win::async_i_advise_sink2_t*, uint32_t, int32_t)>*), "AsyncIAdviseSink2Vtbl.Begin_OnViewChange", begin_on_view_change, 0x140, 0x40, true, 0x66190fd257174941)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct win::async_i_advise_sink2_t*)>*), "AsyncIAdviseSink2Vtbl.Finish_OnViewChange", finish_on_view_change, 0x180, 0x40, true, 0xebae28197f7ecc7e)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct win::async_i_advise_sink2_t*, struct win::i_moniker_t*)>*), "AsyncIAdviseSink2Vtbl.Begin_OnRename", begin_on_rename, 0x1c0, 0x40, true, 0xd339d0ccb249f070)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct win::async_i_advise_sink2_t*)>*), "AsyncIAdviseSink2Vtbl.Finish_OnRename", finish_on_rename, 0x200, 0x40, true, 0x30936eca0c61cced)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct win::async_i_advise_sink2_t*)>*), "AsyncIAdviseSink2Vtbl.Begin_OnSave", begin_on_save, 0x240, 0x40, true, 0xb30f6b754c570f12)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct win::async_i_advise_sink2_t*)>*), "AsyncIAdviseSink2Vtbl.Finish_OnSave", finish_on_save, 0x280, 0x40, true, 0xca411dd43e4a4205)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct win::async_i_advise_sink2_t*)>*), "AsyncIAdviseSink2Vtbl.Begin_OnClose", begin_on_close, 0x2c0, 0x40, true, 0xec21e82a90f77b31)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct win::async_i_advise_sink2_t*)>*), "AsyncIAdviseSink2Vtbl.Finish_OnClose", finish_on_close, 0x300, 0x40, true, 0x275ef1b72b9490be)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct win::async_i_advise_sink2_t*, struct win::i_moniker_t*)>*), "AsyncIAdviseSink2Vtbl.Begin_OnLinkSrcChange", begin_on_link_src_change, 0x340, 0x40, true, 0x6a7430b02c1fef5d)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct win::async_i_advise_sink2_t*)>*), "AsyncIAdviseSink2Vtbl.Finish_OnLinkSrcChange", finish_on_link_src_change, 0x380, 0x40, true, 0xdd4e9ca44f3a8373)
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
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#endif