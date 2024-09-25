#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_KEY_TRANS_ENCRYPT_INFO.cbSize", cb_size, 0x0, 0x20, true, 0x7bf74a2815231d6a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_KEY_TRANS_ENCRYPT_INFO.dwRecipientIndex", dw_recipient_index, 0x20, 0x20, true, 0xe2e13b96efc75857)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_algorithm_identifier_t), "_CMSG_KEY_TRANS_ENCRYPT_INFO.KeyEncryptionAlgorithm", key_encryption_algorithm, 0x40, 0xc0, true, 0xa29e142df25e4d37)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CMSG_KEY_TRANS_ENCRYPT_INFO.EncryptedKey", encrypted_key, 0x100, 0x80, true, 0x680dbf874288319)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_KEY_TRANS_ENCRYPT_INFO.dwFlags", dw_flags, 0x180, 0x20, true, 0xc005f8e1d1162612)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif