#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_async_rpc_channel_buffer_t*, const struct nt::guid_t&, void**)>*), "IAsyncRpcChannelBufferVtbl.QueryInterface", query_interface, 0x0, 0x40, true, 0x85270b11630410ae)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_async_rpc_channel_buffer_t*)>*), "IAsyncRpcChannelBufferVtbl.AddRef", add_ref, 0x40, 0x40, true, 0x490c25735f636be8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_async_rpc_channel_buffer_t*)>*), "IAsyncRpcChannelBufferVtbl.Release", release, 0x80, 0x40, true, 0xee5b2f5c31464b85)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_async_rpc_channel_buffer_t*, struct tag::rpcolemessage_t*, const struct nt::guid_t&)>*), "IAsyncRpcChannelBufferVtbl.GetBuffer", get_buffer, 0xc0, 0x40, true, 0x8e3144f78fdf63a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_async_rpc_channel_buffer_t*, struct tag::rpcolemessage_t*, uint32_t*)>*), "IAsyncRpcChannelBufferVtbl.SendReceive", send_receive, 0x100, 0x40, true, 0x459ad9a7242355cc)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_async_rpc_channel_buffer_t*, struct tag::rpcolemessage_t*)>*), "IAsyncRpcChannelBufferVtbl.FreeBuffer", free_buffer, 0x140, 0x40, true, 0xbcc23fda2db0cce2)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_async_rpc_channel_buffer_t*, uint32_t*, void**)>*), "IAsyncRpcChannelBufferVtbl.GetDestCtx", get_dest_ctx, 0x180, 0x40, true, 0x2f853e9f46514742)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_async_rpc_channel_buffer_t*)>*), "IAsyncRpcChannelBufferVtbl.IsConnected", is_connected, 0x1c0, 0x40, true, 0x5581a5a21d4b2d66)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_async_rpc_channel_buffer_t*, uint32_t*)>*), "IAsyncRpcChannelBufferVtbl.GetProtocolVersion", get_protocol_version, 0x200, 0x40, true, 0xce4e2aa253e8ba71)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_async_rpc_channel_buffer_t*, struct tag::rpcolemessage_t*, struct win::i_synchronize_t*, uint32_t*)>*), "IAsyncRpcChannelBufferVtbl.Send", send, 0x240, 0x40, true, 0x3cdd8d4ae1914167)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_async_rpc_channel_buffer_t*, struct tag::rpcolemessage_t*, uint32_t*)>*), "IAsyncRpcChannelBufferVtbl.Receive", receive, 0x280, 0x40, true, 0xaa221da6d87c8c5d)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_async_rpc_channel_buffer_t*, struct tag::rpcolemessage_t*, uint32_t*, void**)>*), "IAsyncRpcChannelBufferVtbl.GetDestCtxEx", get_dest_ctx_ex, 0x2c0, 0x40, true, 0x15b1349a2a751d5a)
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
#endif