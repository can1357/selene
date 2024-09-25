#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USER_MARSHAL_CB.Flags", flags, 0x0, 0x20, true, 0x27375f4bbefa64eb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::midl_stub_message_t*), "_USER_MARSHAL_CB.pStubMsg", p_stub_msg, 0x40, 0x40, true, 0x63ff4fff45649920)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint8_t*), "_USER_MARSHAL_CB.pReserve", p_reserve, 0x80, 0x40, true, 0xff4f203a107a46b7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USER_MARSHAL_CB.Signature", signature, 0xc0, 0x20, true, 0x1bea58f83cfeedb4)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::user_marshal_cb_type_t), "_USER_MARSHAL_CB.CBType", cb_type, 0xe0, 0x20, true, 0x16dd8ba766031754)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint8_t*), "_USER_MARSHAL_CB.pFormat", p_format, 0x100, 0x40, true, 0x3665ebe27118c120)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint8_t*), "_USER_MARSHAL_CB.pTypeFormat", p_type_format, 0x140, 0x40, true, 0xaf4dd57860cc4779)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif