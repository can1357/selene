#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_rpc_channel_buffer2_t*, const struct nt::guid_t&, void**)>*), "IRpcChannelBuffer2Vtbl.QueryInterface", query_interface, 0x0, 0x40, true, 0xa6de64fedaa27ae)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_rpc_channel_buffer2_t*)>*), "IRpcChannelBuffer2Vtbl.AddRef", add_ref, 0x40, 0x40, true, 0xde9ddd54e2f130c2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_rpc_channel_buffer2_t*)>*), "IRpcChannelBuffer2Vtbl.Release", release, 0x80, 0x40, true, 0xce48efe25adad608)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_rpc_channel_buffer2_t*, struct tag::rpcolemessage_t*, const struct nt::guid_t&)>*), "IRpcChannelBuffer2Vtbl.GetBuffer", get_buffer, 0xc0, 0x40, true, 0x123177b14e423949)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_rpc_channel_buffer2_t*, struct tag::rpcolemessage_t*, uint32_t*)>*), "IRpcChannelBuffer2Vtbl.SendReceive", send_receive, 0x100, 0x40, true, 0x81adc8d9a7eb17ad)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_rpc_channel_buffer2_t*, struct tag::rpcolemessage_t*)>*), "IRpcChannelBuffer2Vtbl.FreeBuffer", free_buffer, 0x140, 0x40, true, 0xea0edc05edd52479)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_rpc_channel_buffer2_t*, uint32_t*, void**)>*), "IRpcChannelBuffer2Vtbl.GetDestCtx", get_dest_ctx, 0x180, 0x40, true, 0x42d8c068db339596)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_rpc_channel_buffer2_t*)>*), "IRpcChannelBuffer2Vtbl.IsConnected", is_connected, 0x1c0, 0x40, true, 0x4260f6b4eb1b0bad)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_rpc_channel_buffer2_t*, uint32_t*)>*), "IRpcChannelBuffer2Vtbl.GetProtocolVersion", get_protocol_version, 0x200, 0x40, true, 0xe4e62a3c5f8904e4)
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