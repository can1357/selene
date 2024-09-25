#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::ctx_entry_t*), "CtxEntry._pNext", p_next, 0x0, 0x40, true, 0x1d34f63909702e37)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::ctx_entry_t*), "CtxEntry._pFree", p_free, 0x40, 0x40, true, 0xd68bda2aaf30f647)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CtxEntry._cRefs", c_refs, 0x80, 0x20, true, 0xf8fe9ea1e5d3b5d6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_context_life_t*), "CtxEntry._pLife", p_life, 0xc0, 0x40, true, 0x32b2d061ad9832d0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_policy_set_t*), "CtxEntry._pPS", p_ps, 0x100, 0x40, true, 0x1c97836f4cce740f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_object_context_t*), "CtxEntry._pServerCtx", p_server_ctx, 0x140, 0x40, true, 0xa9a57aea80fc354)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif