#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::async_i_advise_sink_t*, const struct nt::guid_t*, void**)>*), "AsyncIAdviseSinkVtbl.QueryInterface", query_interface, 0x0, 0x40, true, 0x3f779aef52a9e5ef)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::async_i_advise_sink_t*)>*), "AsyncIAdviseSinkVtbl.AddRef", add_ref, 0x40, 0x40, true, 0xcb320776aecc007b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::async_i_advise_sink_t*)>*), "AsyncIAdviseSinkVtbl.Release", release, 0x80, 0x40, true, 0x24698cc6fd0c30f8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct win::async_i_advise_sink_t*, struct tag::formatetc_t*, struct tag::stgmedium_t*)>*), "AsyncIAdviseSinkVtbl.Begin_OnDataChange", begin_on_data_change, 0xc0, 0x40, true, 0xba401d13d8343c3e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct win::async_i_advise_sink_t*)>*), "AsyncIAdviseSinkVtbl.Finish_OnDataChange", finish_on_data_change, 0x100, 0x40, true, 0x201671449328dd22)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct win::async_i_advise_sink_t*, uint32_t, int32_t)>*), "AsyncIAdviseSinkVtbl.Begin_OnViewChange", begin_on_view_change, 0x140, 0x40, true, 0xaeff79127d8cc3cb)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct win::async_i_advise_sink_t*)>*), "AsyncIAdviseSinkVtbl.Finish_OnViewChange", finish_on_view_change, 0x180, 0x40, true, 0xe48914b59226e684)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct win::async_i_advise_sink_t*, struct win::i_moniker_t*)>*), "AsyncIAdviseSinkVtbl.Begin_OnRename", begin_on_rename, 0x1c0, 0x40, true, 0xb4c6e54c0bb3fc97)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct win::async_i_advise_sink_t*)>*), "AsyncIAdviseSinkVtbl.Finish_OnRename", finish_on_rename, 0x200, 0x40, true, 0x57f0e4fcaa063e0d)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct win::async_i_advise_sink_t*)>*), "AsyncIAdviseSinkVtbl.Begin_OnSave", begin_on_save, 0x240, 0x40, true, 0xac5d95d1c4488922)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct win::async_i_advise_sink_t*)>*), "AsyncIAdviseSinkVtbl.Finish_OnSave", finish_on_save, 0x280, 0x40, true, 0xcbcb27c1ee883a6d)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct win::async_i_advise_sink_t*)>*), "AsyncIAdviseSinkVtbl.Begin_OnClose", begin_on_close, 0x2c0, 0x40, true, 0x474c4b900b708cf4)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct win::async_i_advise_sink_t*)>*), "AsyncIAdviseSinkVtbl.Finish_OnClose", finish_on_close, 0x300, 0x40, true, 0x6bb216e8b7dd651d)
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
#endif