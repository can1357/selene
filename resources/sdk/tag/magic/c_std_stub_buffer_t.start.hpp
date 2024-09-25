#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::i_rpc_stub_buffer_vtbl_t*), "tagCStdStubBuffer.lpVtbl", lp_vtbl, 0x0, 0x40, true, 0x4457d8f2d3e0f2f2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagCStdStubBuffer.RefCount", ref_count, 0x40, 0x20, true, 0xd0268ae7f5e8ac4a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t*), "tagCStdStubBuffer.pvServerObject", pv_server_object, 0x80, 0x40, true, 0x832a873a9c1edf87)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::i_call_factory_vtbl_t*), "tagCStdStubBuffer.pCallFactoryVtbl", p_call_factory_vtbl, 0xc0, 0x40, true, 0x5a625541eaba3e98)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t*), "tagCStdStubBuffer.pAsyncIID", p_async_iid, 0x100, 0x40, true, 0x6854e25d5428a9ce)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ips_factory_buffer_t*), "tagCStdStubBuffer.pPSFactory", p_ps_factory, 0x140, 0x40, true, 0x4e2d80741989a181)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::i_release_marshal_buffers_vtbl_t*), "tagCStdStubBuffer.pRMBVtbl", p_rmb_vtbl, 0x180, 0x40, true, 0xee1b4f7802b10907)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif