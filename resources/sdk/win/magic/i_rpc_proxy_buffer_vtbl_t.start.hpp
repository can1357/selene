#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_rpc_proxy_buffer_t*, const struct nt::guid_t*, void**)>*), "IRpcProxyBufferVtbl.QueryInterface", query_interface, 0x0, 0x40, true, 0xa928d9b8e531cb1f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_rpc_proxy_buffer_t*)>*), "IRpcProxyBufferVtbl.AddRef", add_ref, 0x40, 0x40, true, 0xe7220ec394677f87)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_rpc_proxy_buffer_t*)>*), "IRpcProxyBufferVtbl.Release", release, 0x80, 0x40, true, 0x94ef6fba47a237e7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_rpc_proxy_buffer_t*, struct win::i_rpc_channel_buffer_t*)>*), "IRpcProxyBufferVtbl.Connect", connect, 0xc0, 0x40, true, 0xf8bc31df4818e7ad)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct win::i_rpc_proxy_buffer_t*)>*), "IRpcProxyBufferVtbl.Disconnect", disconnect, 0x100, 0x40, true, 0x343381153427382)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif