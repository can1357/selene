#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_KEY_VERIFY_MESSAGE_PARA.cbSize", cb_size, 0x0, 0x20, true, 0x963b2b1f9761f7ff)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_KEY_VERIFY_MESSAGE_PARA.dwMsgEncodingType", dw_msg_encoding_type, 0x20, 0x20, true, 0x8a2c229d50040c2e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CRYPT_KEY_VERIFY_MESSAGE_PARA.hCryptProv", h_crypt_prov, 0x40, 0x40, true, 0x1550218ffe885085)
#else
#define _m00
#define _m01
#define _m02
#endif