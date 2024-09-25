#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_activation_properties_in_t*), "ServerContextWorkData.pInActProps", p_in_act_props, 0x0, 0x40, true, 0x8b27d1eb207b03e4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::generic_stream_t), "ServerContextWorkData.xrpcOutProps", xrpc_out_props, 0x40, 0x80, true, 0xc9499e3114ae4546)
#else
#define _m00
#define _m01
#endif