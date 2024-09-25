#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_serializable_parent_t*), "ContextInfo._parent", parent, 0x80, 0x40, true, 0xcda5a6db6fe10734)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "ContextInfo._unSerialized", un_serialized, 0xc0, 0x20, true, 0x26af2cc2c9b43301)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "ContextInfo._added", added, 0xe0, 0x20, true, 0xdabe9f0d439988f5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::activation_context_info_data_t), "ContextInfo._contextInfoData", context_info_data, 0x140, 0x0, true, 0xd7dafb29e8291183)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "ContextInfo._ctxOverride", ctx_override, 0x240, 0x80, true, 0xa59fe29f20447ad6)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_object_context_t*), "ContextInfo._pClientCtx", p_client_ctx, 0x2c0, 0x40, true, 0xeeeb35291ef40da3)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_object_context_t*), "ContextInfo._pPrototypeCtx", p_prototype_ctx, 0x300, 0x40, true, 0x5aa7d0f5da43c9ef)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "ContextInfo._toReleaseIFD", to_release_ifd, 0x340, 0x20, true, 0xee84dac878192bd1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif