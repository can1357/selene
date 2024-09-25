#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_DECRYPT_MESSAGE_PARA.cbSize", cb_size, 0x0, 0x20, true, 0x761026775918e184)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_DECRYPT_MESSAGE_PARA.dwMsgAndCertEncodingType", dw_msg_and_cert_encoding_type, 0x20, 0x20, true, 0xf95492398b98d930)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_DECRYPT_MESSAGE_PARA.cCertStore", c_cert_store, 0x40, 0x20, true, 0xcb54a26dacaf085b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void**), "_CRYPT_DECRYPT_MESSAGE_PARA.rghCertStore", rgh_cert_store, 0x80, 0x40, true, 0x5ccc77f60594086c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif