#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::i_rpc_proxy_buffer_vtbl_t*), "tagCStdProxyBuffer.lpVtbl", lp_vtbl, 0x0, 0x40, true, 0x516cb4996b4d0183)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const void*), "tagCStdProxyBuffer.pProxyVtbl", p_proxy_vtbl, 0x40, 0x40, true, 0xb748f9f5c88300b6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagCStdProxyBuffer.RefCount", ref_count, 0x80, 0x20, true, 0x74dbc91378af8a1a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t*), "tagCStdProxyBuffer.punkOuter", punk_outer, 0xc0, 0x40, true, 0x57389e4fc2ab47a0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_rpc_channel_buffer_t*), "tagCStdProxyBuffer.pChannel", p_channel, 0x100, 0x40, true, 0x734ec5d5457cff4e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ips_factory_buffer_t*), "tagCStdProxyBuffer.pPSFactory", p_ps_factory, 0x140, 0x40, true, 0x459b16810bc2d3de)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_rpc_proxy_buffer_t*), "tagCStdProxyBuffer.Pad_pBaseProxyBuffer", pad_p_base_proxy_buffer, 0x180, 0x40, true, 0xeb9811617a1c58e)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ips_factory_buffer_t*), "tagCStdProxyBuffer.Pad_pPSFactory", pad_p_ps_factory, 0x1c0, 0x40, true, 0x507d3b44af6014e3)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "tagCStdProxyBuffer.Pad_iidBase", pad_iid_base, 0x200, 0x80, true, 0x58595338c48ef290)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::i_call_factory_vtbl_t*), "tagCStdProxyBuffer.pCallFactoryVtbl", p_call_factory_vtbl, 0x280, 0x40, true, 0x9a8f1d5b65776933)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t*), "tagCStdProxyBuffer.pAsyncIID", p_async_iid, 0x2c0, 0x40, true, 0x4f07b0ec792991c0)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::i_release_marshal_buffers_vtbl_t*), "tagCStdProxyBuffer.pRMBVtbl", p_rmb_vtbl, 0x300, 0x40, true, 0xa32eb8b46063ebee)
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