#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagXCtxMarshalData.dwSignature", dw_signature, 0x0, 0x20, true, 0xc19f57fde293166b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "tagXCtxMarshalData.guidDataSecret", guid_data_secret, 0x20, 0x80, true, 0x57f3f7bb5ffbdd3f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "tagXCtxMarshalData.iid", iid, 0xa0, 0x80, true, 0xcbab8255fe1fb928)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "tagXCtxMarshalData.moxid", moxid, 0x120, 0x80, true, 0x890193d21c936d7f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_std_wrapper_t*), "tagXCtxMarshalData.pWrapper", p_wrapper, 0x1c0, 0x40, true, 0x276cec97e5d5d189)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::i_face_entry_t*), "tagXCtxMarshalData.pEntry", p_entry, 0x200, 0x40, true, 0xf9c5695b2629de95)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t*), "tagXCtxMarshalData.pServer", p_server, 0x240, 0x40, true, 0xbfb4b625889037a)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_object_context_t*), "tagXCtxMarshalData.pServerCtx", p_server_ctx, 0x280, 0x40, true, 0x775acde385c87811)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagXCtxMarshalData.dwMarshalFlags", dw_marshal_flags, 0x2c0, 0x20, true, 0x878aa4dc3d262161)
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
#endif