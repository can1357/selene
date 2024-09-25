#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::i_face_entry_t*), "IFaceEntry._pNext", p_next, 0x0, 0x40, true, 0x491379045689d673)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "IFaceEntry._pProxy", p_proxy, 0x40, 0x40, true, 0x84479dbcbe7ff932)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_rpc_proxy_buffer_t*), "IFaceEntry._pRpcProxy", p_rpc_proxy, 0x80, 0x40, true, 0x802adab331c2d2e8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_rpc_stub_buffer_t*), "IFaceEntry._pRpcStub", p_rpc_stub, 0xc0, 0x40, true, 0xe7232f33c4d3ddc4)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "IFaceEntry._pServer", p_server, 0x100, 0x40, true, 0xc470f1224ff7b7e8)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "IFaceEntry._iid", iid, 0x140, 0x80, true, 0x3dce3a503fe1aa8b)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_ctx_chnl_t*), "IFaceEntry._pCtxChnl", p_ctx_chnl, 0x1c0, 0x40, true, 0x73cf349f9aa1ab4b)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::ctx_entry_t*), "IFaceEntry._pHead", p_head, 0x200, 0x40, true, 0xcc20f0e35e58302d)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::ctx_entry_t*), "IFaceEntry._pFreeList", p_free_list, 0x240, 0x40, true, 0x50c4feecc0a98cbb)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_call_interceptor_t*), "IFaceEntry._pInterceptor", p_interceptor, 0x280, 0x40, true, 0x993f9473031f3e3b)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t*), "IFaceEntry._pUnkInner", p_unk_inner, 0x2c0, 0x40, true, 0xc196bd31fda806dd)
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