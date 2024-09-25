#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_rpc_channel_buffer3_t*, const struct nt::guid_t&, void**)>*), "IRpcChannelBuffer3Vtbl.QueryInterface", query_interface, 0x0, 0x40, true, 0xab56b24a6d0a4d23)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_rpc_channel_buffer3_t*)>*), "IRpcChannelBuffer3Vtbl.AddRef", add_ref, 0x40, 0x40, true, 0x1f9d30aa12c1f4e1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_rpc_channel_buffer3_t*)>*), "IRpcChannelBuffer3Vtbl.Release", release, 0x80, 0x40, true, 0x9c4e3090e2d7a061)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_rpc_channel_buffer3_t*, struct tag::rpcolemessage_t*, const struct nt::guid_t&)>*), "IRpcChannelBuffer3Vtbl.GetBuffer", get_buffer, 0xc0, 0x40, true, 0x61020381b9541fad)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_rpc_channel_buffer3_t*, struct tag::rpcolemessage_t*, uint32_t*)>*), "IRpcChannelBuffer3Vtbl.SendReceive", send_receive, 0x100, 0x40, true, 0xb9204f2563058d86)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_rpc_channel_buffer3_t*, struct tag::rpcolemessage_t*)>*), "IRpcChannelBuffer3Vtbl.FreeBuffer", free_buffer, 0x140, 0x40, true, 0x36faa14d51185891)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_rpc_channel_buffer3_t*, uint32_t*, void**)>*), "IRpcChannelBuffer3Vtbl.GetDestCtx", get_dest_ctx, 0x180, 0x40, true, 0x54d5911b7be5ac86)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_rpc_channel_buffer3_t*)>*), "IRpcChannelBuffer3Vtbl.IsConnected", is_connected, 0x1c0, 0x40, true, 0xfa3c4c99281db3ea)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_rpc_channel_buffer3_t*, uint32_t*)>*), "IRpcChannelBuffer3Vtbl.GetProtocolVersion", get_protocol_version, 0x200, 0x40, true, 0x939595835d11b600)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_rpc_channel_buffer3_t*, struct tag::rpcolemessage_t*, uint32_t*)>*), "IRpcChannelBuffer3Vtbl.Send", send, 0x240, 0x40, true, 0xed71cbaefdc1ec34)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_rpc_channel_buffer3_t*, struct tag::rpcolemessage_t*, uint32_t, uint32_t*)>*), "IRpcChannelBuffer3Vtbl.Receive", receive, 0x280, 0x40, true, 0x861c6917439395b9)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_rpc_channel_buffer3_t*, struct tag::rpcolemessage_t*)>*), "IRpcChannelBuffer3Vtbl.Cancel", cancel, 0x2c0, 0x40, true, 0xd6b52abd56b862e4)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_rpc_channel_buffer3_t*, struct tag::rpcolemessage_t*, const struct nt::guid_t&, void**)>*), "IRpcChannelBuffer3Vtbl.GetCallContext", get_call_context, 0x300, 0x40, true, 0x4a13806dd55c94fa)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_rpc_channel_buffer3_t*, struct tag::rpcolemessage_t*, uint32_t*, void**)>*), "IRpcChannelBuffer3Vtbl.GetDestCtxEx", get_dest_ctx_ex, 0x340, 0x40, true, 0x4851af754d908639)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_rpc_channel_buffer3_t*, struct tag::rpcolemessage_t*, uint32_t*)>*), "IRpcChannelBuffer3Vtbl.GetState", get_state, 0x380, 0x40, true, 0xae8f496d6cb34f3f)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_rpc_channel_buffer3_t*, struct tag::rpcolemessage_t*, struct win::i_async_manager_t*)>*), "IRpcChannelBuffer3Vtbl.RegisterAsync", register_async, 0x3c0, 0x40, true, 0x953599adc14081d7)
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
#define _m15
#endif