#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_MAIL_LIST_RECIPIENT_ENCODE_INFO.cbSize", cb_size, 0x0, 0x20, true, 0xdd844b7824e7988d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_algorithm_identifier_t), "_CMSG_MAIL_LIST_RECIPIENT_ENCODE_INFO.KeyEncryptionAlgorithm", key_encryption_algorithm, 0x40, 0xc0, true, 0x15cd0270d22be647)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CMSG_MAIL_LIST_RECIPIENT_ENCODE_INFO.pvKeyEncryptionAuxInfo", pv_key_encryption_aux_info, 0x100, 0x40, true, 0x9099652e0e32c71e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CMSG_MAIL_LIST_RECIPIENT_ENCODE_INFO.hCryptProv", h_crypt_prov, 0x140, 0x40, true, 0x2a50fad1de5b17d8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_MAIL_LIST_RECIPIENT_ENCODE_INFO.dwKeyChoice", dw_key_choice, 0x180, 0x20, true, 0x9348289f3ab99775)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CMSG_MAIL_LIST_RECIPIENT_ENCODE_INFO.hKeyEncryptionKey", h_key_encryption_key, 0x1c0, 0x40, true, 0x80d7d3da3a0c5fef)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CMSG_MAIL_LIST_RECIPIENT_ENCODE_INFO.pvKeyEncryptionKey", pv_key_encryption_key, 0x1c0, 0x40, true, 0x7843543f0bd8d68)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CMSG_MAIL_LIST_RECIPIENT_ENCODE_INFO.KeyId", key_id, 0x200, 0x80, true, 0x28694d6858a1de86)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_CMSG_MAIL_LIST_RECIPIENT_ENCODE_INFO.Date", date, 0x280, 0x40, true, 0xe40972754d37a284)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_attribute_type_value_t*), "_CMSG_MAIL_LIST_RECIPIENT_ENCODE_INFO.pOtherAttr", p_other_attr, 0x2c0, 0x40, true, 0x6ec25453cf3c946)
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
#define _m09
#endif