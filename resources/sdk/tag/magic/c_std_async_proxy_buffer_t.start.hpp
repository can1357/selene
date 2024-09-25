#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::i_rpc_proxy_buffer_vtbl_t*), "tagCStdAsyncProxyBuffer.lpVtbl", lp_vtbl, 0x0, 0x40, true, 0x3baa29bdf355afab)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const void*), "tagCStdAsyncProxyBuffer.pProxyVtbl", p_proxy_vtbl, 0x40, 0x40, true, 0x903f4741a3efcefc)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagCStdAsyncProxyBuffer.RefCount", ref_count, 0x80, 0x20, true, 0xd7d788ffc5101c0c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t*), "tagCStdAsyncProxyBuffer.punkOuter", punk_outer, 0xc0, 0x40, true, 0xe581dcc2a20a5855)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_rpc_channel_buffer_t*), "tagCStdAsyncProxyBuffer.pChannel", p_channel, 0x100, 0x40, true, 0xe98f9ac79f976e1a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::c_std_proxy_buffer_map_t), "tagCStdAsyncProxyBuffer.map", map, 0x140, 0x40, true, 0x7c35304f500fcf41)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_rpc_proxy_buffer_t*), "tagCStdAsyncProxyBuffer.pBaseProxyBuffer", p_base_proxy_buffer, 0x180, 0x40, true, 0xb9acab7ce8f92b10)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ips_factory_buffer_t*), "tagCStdAsyncProxyBuffer.pPSFactory", p_ps_factory, 0x1c0, 0x40, true, 0xb79aef263cfd4606)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "tagCStdAsyncProxyBuffer.iidBase", iid_base, 0x200, 0x80, true, 0x4c39064ada8510d7)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::i_call_factory_vtbl_t*), "tagCStdAsyncProxyBuffer.pCallFactoryVtbl", p_call_factory_vtbl, 0x280, 0x40, true, 0xa82549f3efc777a6)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t*), "tagCStdAsyncProxyBuffer.pSyncIID", p_sync_iid, 0x2c0, 0x40, true, 0x27039c38e7c60765)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::i_release_marshal_buffers_vtbl_t*), "tagCStdAsyncProxyBuffer.pRMBVtbl", p_rmb_vtbl, 0x300, 0x40, true, 0x23a8aa7b8fd0e3c8)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ndr_dcom_async_call_state_t), "tagCStdAsyncProxyBuffer.CallState", call_state, 0x340, 0xc0, true, 0xa4eea91823cb178e)
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