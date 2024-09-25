#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_rpc_stub_buffer_t*), "tagIFaceSvrRefs.pRpcStub", p_rpc_stub, 0x0, 0x40, true, 0xc192621bcb575e86)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_rpc_proxy_buffer_t*), "tagIFaceSvrRefs.pRpcProxy", p_rpc_proxy, 0x40, 0x40, true, 0x79b5dca4c44fb2dc)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "tagIFaceSvrRefs.pServer", p_server, 0x80, 0x40, true, 0x75892dd4ef3a93dc)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_ctx_chnl_t*), "tagIFaceSvrRefs.pCtxChnl", p_ctx_chnl, 0xc0, 0x40, true, 0x6eb4bf1222c9de22)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif