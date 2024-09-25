#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_KEY_TRANS_RECIPIENT_ENCODE_INFO.cbSize", cb_size, 0x0, 0x20, true, 0x37d6c8adfc61b0df)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_algorithm_identifier_t), "_CMSG_KEY_TRANS_RECIPIENT_ENCODE_INFO.KeyEncryptionAlgorithm", key_encryption_algorithm, 0x40, 0xc0, true, 0xdeab4bd0d04c5ee3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CMSG_KEY_TRANS_RECIPIENT_ENCODE_INFO.pvKeyEncryptionAuxInfo", pv_key_encryption_aux_info, 0x100, 0x40, true, 0x8f781e78e0a000f4)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CMSG_KEY_TRANS_RECIPIENT_ENCODE_INFO.hCryptProv", h_crypt_prov, 0x140, 0x40, true, 0xf2538c7088b6b5c4)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_bit_blob_t), "_CMSG_KEY_TRANS_RECIPIENT_ENCODE_INFO.RecipientPublicKey", recipient_public_key, 0x180, 0xc0, true, 0xc41a2a877d526085)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_id_t), "_CMSG_KEY_TRANS_RECIPIENT_ENCODE_INFO.RecipientId", recipient_id, 0x240, 0x40, true, 0x37ba3e861a941847)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif