#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_rpc_stub_buffer_t*, const struct nt::guid_t*, void**)>*), "IRpcStubBufferVtbl.QueryInterface", query_interface, 0x0, 0x40, true, 0xd5cb88df5c10eedd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_rpc_stub_buffer_t*)>*), "IRpcStubBufferVtbl.AddRef", add_ref, 0x40, 0x40, true, 0x44db2c8693fb5c80)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_rpc_stub_buffer_t*)>*), "IRpcStubBufferVtbl.Release", release, 0x80, 0x40, true, 0x6af2c2607ded03e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(ndr_fwd_c_std_stub_buffer_connect_t ), "IRpcStubBufferVtbl.Connect", connect, 0xc0, 0x40, true, 0xaefe729cd5a28611)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(ndr_fwd_c_std_stub_buffer_disconnect_t ), "IRpcStubBufferVtbl.Disconnect", disconnect, 0x100, 0x40, true, 0x7b672d8101a380f6)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(ndr_fwd_c_std_stub_buffer_invoke_t ), "IRpcStubBufferVtbl.Invoke", invoke, 0x140, 0x40, true, 0x94fc1a31cd2c1d37)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<struct win::i_rpc_stub_buffer_t*(struct win::i_rpc_stub_buffer_t*, const struct nt::guid_t*)>*), "IRpcStubBufferVtbl.IsIIDSupported", is_iid_supported, 0x180, 0x40, true, 0x6ba94412377d4938)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_rpc_stub_buffer_t*)>*), "IRpcStubBufferVtbl.CountRefs", count_refs, 0x1c0, 0x40, true, 0xe8583d270c55b976)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(ndr_fwd_c_std_stub_buffer_debug_server_query_interface_t ), "IRpcStubBufferVtbl.DebugServerQueryInterface", debug_server_query_interface, 0x200, 0x40, true, 0x445e8f2e0ff07aa2)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(ndr_fwd_c_std_stub_buffer_debug_server_release_t ), "IRpcStubBufferVtbl.DebugServerRelease", debug_server_release, 0x240, 0x40, true, 0x64b4d187c75b8bf8)
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