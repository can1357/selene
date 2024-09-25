#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_object_context_t*), "tagContexts.pClientCtx", p_client_ctx, 0x0, 0x40, true, 0xddc67807851ffab)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_object_context_t*), "tagContexts.pServerCtx", p_server_ctx, 0x40, 0x40, true, 0x6b5e82d5f160d55f)
#else
#define _m00
#define _m01
#endif