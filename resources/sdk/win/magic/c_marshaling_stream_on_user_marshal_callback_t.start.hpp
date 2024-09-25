#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "CMarshalingStreamOnUserMarshalCallback._cRefs", c_refs, 0x40, 0x20, true, 0x3286ea44b997ea3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t const*), "CMarshalingStreamOnUserMarshalCallback._pBuffer", p_buffer, 0x80, 0x40, true, 0xb80451d931118185)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint64_t), "CMarshalingStreamOnUserMarshalCallback._cbBufferMax", cb_buffer_max, 0xc0, 0x40, true, 0xe5fc89cfb4f8e040)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "CMarshalingStreamOnUserMarshalCallback._cbBuffer", cb_buffer, 0x100, 0x40, true, 0xd378c0c4a8381f13)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "CMarshalingStreamOnUserMarshalCallback._pPosition", p_position, 0x140, 0x40, true, 0x95e2ba67f182f262)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::user_marshal_cb_t const*), "CMarshalingStreamOnUserMarshalCallback._pContext", p_context, 0x180, 0x40, true, 0x42220440dc6e610b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif