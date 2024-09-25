#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_KEY_SIGN_MESSAGE_PARA.cbSize", cb_size, 0x0, 0x20, true, 0x4480233d0bd753e9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_KEY_SIGN_MESSAGE_PARA.dwMsgAndCertEncodingType", dw_msg_and_cert_encoding_type, 0x20, 0x20, true, 0xaaf45171e0bb81a3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CRYPT_KEY_SIGN_MESSAGE_PARA.hCryptProv", h_crypt_prov, 0x40, 0x40, true, 0x21cd030290b791c7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CRYPT_KEY_SIGN_MESSAGE_PARA.hNCryptKey", h_n_crypt_key, 0x40, 0x40, true, 0xc043acfca57d68bf)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_KEY_SIGN_MESSAGE_PARA.dwKeySpec", dw_key_spec, 0x80, 0x20, true, 0x827df60b9d4b05a6)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_algorithm_identifier_t), "_CRYPT_KEY_SIGN_MESSAGE_PARA.HashAlgorithm", hash_algorithm, 0xc0, 0xc0, true, 0xb8849d17428cd7e1)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CRYPT_KEY_SIGN_MESSAGE_PARA.pvHashAuxInfo", pv_hash_aux_info, 0x180, 0x40, true, 0x8922ac1e4ece75a2)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_algorithm_identifier_t), "_CRYPT_KEY_SIGN_MESSAGE_PARA.PubKeyAlgorithm", pub_key_algorithm, 0x1c0, 0xc0, true, 0xaeb10db44d4e298b)
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