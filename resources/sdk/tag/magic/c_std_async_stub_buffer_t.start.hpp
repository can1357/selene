#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "tagCStdAsyncStubBuffer.lpForwardingVtbl", lp_forwarding_vtbl, 0x0, 0x40, true, 0x44548d60e816d703)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_rpc_stub_buffer_t*), "tagCStdAsyncStubBuffer.pBaseStubBuffer", p_base_stub_buffer, 0x40, 0x40, true, 0x2d16ee86688b8af)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::i_rpc_stub_buffer_vtbl_t*), "tagCStdAsyncStubBuffer.lpVtbl", lp_vtbl, 0x80, 0x40, true, 0xedb692c9ae4d7242)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagCStdAsyncStubBuffer.RefCount", ref_count, 0xc0, 0x20, true, 0xaf836dd32c39e047)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t*), "tagCStdAsyncStubBuffer.pvServerObject", pv_server_object, 0x100, 0x40, true, 0x3d5bc20931e9242a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::i_call_factory_vtbl_t*), "tagCStdAsyncStubBuffer.pCallFactoryVtbl", p_call_factory_vtbl, 0x140, 0x40, true, 0xab3bccc74c41d33c)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t*), "tagCStdAsyncStubBuffer.pAsyncIID", p_async_iid, 0x180, 0x40, true, 0xe2df90d912103cce)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ips_factory_buffer_t*), "tagCStdAsyncStubBuffer.pPSFactory", p_ps_factory, 0x1c0, 0x40, true, 0x83c8fdd80c17247e)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::i_release_marshal_buffers_vtbl_t*), "tagCStdAsyncStubBuffer.pRMBVtbl", p_rmb_vtbl, 0x200, 0x40, true, 0x453aa68cc3be6810)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::i_synchronize_vtbl_t*), "tagCStdAsyncStubBuffer.pSynchronizeVtbl", p_synchronize_vtbl, 0x240, 0x40, true, 0xb77a9c4bab84b87b)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ndr_dcom_async_call_state_t), "tagCStdAsyncStubBuffer.CallState", call_state, 0x280, 0xc0, true, 0x3c8173e57c929581)
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
#endif