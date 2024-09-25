#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t*), "tagXCtxWrapperData.pIID", p_iid, 0x0, 0x40, true, 0xb21e622ddd43cfd3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t*), "tagXCtxWrapperData.pServer", p_server, 0x40, 0x40, true, 0xe0a201ce38a3023e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagXCtxWrapperData.dwState", dw_state, 0x80, 0x20, true, 0x1b765bcdebf29e6a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_object_context_t*), "tagXCtxWrapperData.pServerCtx", p_server_ctx, 0xc0, 0x40, true, 0x614a62736dc749f6)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_object_context_t*), "tagXCtxWrapperData.pClientCtx", p_client_ctx, 0x100, 0x40, true, 0xfd241bea5eeaeb34)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "tagXCtxWrapperData.pv", pv, 0x140, 0x40, true, 0xa4a9677f9568a12f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif