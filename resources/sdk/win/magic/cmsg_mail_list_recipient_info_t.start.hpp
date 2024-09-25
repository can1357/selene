#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_MAIL_LIST_RECIPIENT_INFO.dwVersion", dw_version, 0x0, 0x20, true, 0x6524b459a16b42e1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CMSG_MAIL_LIST_RECIPIENT_INFO.KeyId", key_id, 0x40, 0x80, true, 0xc24135ccf6fe7436)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_algorithm_identifier_t), "_CMSG_MAIL_LIST_RECIPIENT_INFO.KeyEncryptionAlgorithm", key_encryption_algorithm, 0xc0, 0xc0, true, 0x1fe96a8639546b91)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CMSG_MAIL_LIST_RECIPIENT_INFO.EncryptedKey", encrypted_key, 0x180, 0x80, true, 0x403bb39d2e9f01bb)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_CMSG_MAIL_LIST_RECIPIENT_INFO.Date", date, 0x200, 0x40, true, 0x694558747aada62b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_attribute_type_value_t*), "_CMSG_MAIL_LIST_RECIPIENT_INFO.pOtherAttr", p_other_attr, 0x240, 0x40, true, 0xd1f87a2f8f69bcb7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif