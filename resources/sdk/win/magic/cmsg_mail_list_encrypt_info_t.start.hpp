#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_MAIL_LIST_ENCRYPT_INFO.cbSize", cb_size, 0x0, 0x20, true, 0x474c62b02e1f3913)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_MAIL_LIST_ENCRYPT_INFO.dwRecipientIndex", dw_recipient_index, 0x20, 0x20, true, 0xb0359672b8e2f670)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_algorithm_identifier_t), "_CMSG_MAIL_LIST_ENCRYPT_INFO.KeyEncryptionAlgorithm", key_encryption_algorithm, 0x40, 0xc0, true, 0xd15c834c3edaf99a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CMSG_MAIL_LIST_ENCRYPT_INFO.EncryptedKey", encrypted_key, 0x100, 0x80, true, 0xe0a841187fa19fb2)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_MAIL_LIST_ENCRYPT_INFO.dwFlags", dw_flags, 0x180, 0x20, true, 0xa402b478185dfc2c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif