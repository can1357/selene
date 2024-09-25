#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_ENCRYPT_MESSAGE_PARA.cbSize", cb_size, 0x0, 0x20, true, 0x8fad99ff181694ed)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_ENCRYPT_MESSAGE_PARA.dwMsgEncodingType", dw_msg_encoding_type, 0x20, 0x20, true, 0x611cdddaa16cd4ca)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CRYPT_ENCRYPT_MESSAGE_PARA.hCryptProv", h_crypt_prov, 0x40, 0x40, true, 0x8fc1aaf218fb6c59)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_algorithm_identifier_t), "_CRYPT_ENCRYPT_MESSAGE_PARA.ContentEncryptionAlgorithm", content_encryption_algorithm, 0x80, 0xc0, true, 0xabb39c68e8ea185a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CRYPT_ENCRYPT_MESSAGE_PARA.pvEncryptionAuxInfo", pv_encryption_aux_info, 0x140, 0x40, true, 0x84e9b1140943ee55)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_ENCRYPT_MESSAGE_PARA.dwFlags", dw_flags, 0x180, 0x20, true, 0xa48227af3c585b68)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_ENCRYPT_MESSAGE_PARA.dwInnerContentType", dw_inner_content_type, 0x1a0, 0x20, true, 0x73aa056753872ef8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif