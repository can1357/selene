#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_rpc_channel_buffer_t*, const struct nt::guid_t const*, void**)>*), "IRpcChannelBufferVtbl.QueryInterface", query_interface, 0x0, 0x40, true, 0x9a863f01228eb770)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_rpc_channel_buffer_t*)>*), "IRpcChannelBufferVtbl.AddRef", add_ref, 0x40, 0x40, true, 0x35617acd2286c2cf)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_rpc_channel_buffer_t*)>*), "IRpcChannelBufferVtbl.Release", release, 0x80, 0x40, true, 0x8779946e01383f69)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_rpc_channel_buffer_t*, struct tag::rpcolemessage_t*, const struct nt::guid_t const*)>*), "IRpcChannelBufferVtbl.GetBuffer", get_buffer, 0xc0, 0x40, true, 0x50c454cd96d7527e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_rpc_channel_buffer_t*, struct tag::rpcolemessage_t*, uint32_t*)>*), "IRpcChannelBufferVtbl.SendReceive", send_receive, 0x100, 0x40, true, 0x2796ad591edba9af)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_rpc_channel_buffer_t*, struct tag::rpcolemessage_t*)>*), "IRpcChannelBufferVtbl.FreeBuffer", free_buffer, 0x140, 0x40, true, 0xd987c54234337bb6)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_rpc_channel_buffer_t*, uint32_t*, void**)>*), "IRpcChannelBufferVtbl.GetDestCtx", get_dest_ctx, 0x180, 0x40, true, 0xdb836e156767949)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_rpc_channel_buffer_t*)>*), "IRpcChannelBufferVtbl.IsConnected", is_connected, 0x1c0, 0x40, true, 0xfe1dd3232546d5a9)
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