#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_KEY_TRANS_RECIPIENT_INFO.dwVersion", dw_version, 0x0, 0x20, true, 0xcb5ff35b720822dd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_id_t), "_CMSG_KEY_TRANS_RECIPIENT_INFO.RecipientId", recipient_id, 0x40, 0x40, true, 0x392715ef17ea7a4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_algorithm_identifier_t), "_CMSG_KEY_TRANS_RECIPIENT_INFO.KeyEncryptionAlgorithm", key_encryption_algorithm, 0x180, 0xc0, true, 0x2f4dc709775aaa3b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CMSG_KEY_TRANS_RECIPIENT_INFO.EncryptedKey", encrypted_key, 0x240, 0x80, true, 0x22f20e3001929854)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif