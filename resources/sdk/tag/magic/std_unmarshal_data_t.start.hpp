#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_std_identity_t*), "tagStdUnmarshalData.pStdID", p_std_id, 0x0, 0x40, true, 0xe970421ce943b4d7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::objref_t*), "tagStdUnmarshalData.pobjref", pobjref, 0x40, 0x40, true, 0x4f3b32b91c603ffc)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_object_context_t*), "tagStdUnmarshalData.pClientCtx", p_client_ctx, 0x80, 0x40, true, 0x26f7a9368fd1892d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagStdUnmarshalData.fCreateWrapper", f_create_wrapper, 0xc0, 0x20, true, 0x4cab0a19be4e8e85)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void**), "tagStdUnmarshalData.ppv", ppv, 0x100, 0x40, true, 0x40935bd6ca415054)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagStdUnmarshalData.fLightNA", f_light_na, 0x140, 0x20, true, 0xae30e306b91d9371)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif