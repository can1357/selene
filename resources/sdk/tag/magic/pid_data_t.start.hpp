#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t*), "tagPIDData.pServer", p_server, 0x0, 0x40, true, 0xd74278efb342901a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_object_context_t*), "tagPIDData.pServerCtx", p_server_ctx, 0x40, 0x40, true, 0xde976f8159e38819)
#else
#define _m00
#define _m01
#endif