#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_KEY_AGREE_RECIPIENT_ENCODE_INFO.cbSize", cb_size, 0x0, 0x20, true, 0x66179389b747004f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_algorithm_identifier_t), "_CMSG_KEY_AGREE_RECIPIENT_ENCODE_INFO.KeyEncryptionAlgorithm", key_encryption_algorithm, 0x40, 0xc0, true, 0x620c639f2fe85149)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CMSG_KEY_AGREE_RECIPIENT_ENCODE_INFO.pvKeyEncryptionAuxInfo", pv_key_encryption_aux_info, 0x100, 0x40, true, 0xfc563141811f22)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_algorithm_identifier_t), "_CMSG_KEY_AGREE_RECIPIENT_ENCODE_INFO.KeyWrapAlgorithm", key_wrap_algorithm, 0x140, 0xc0, true, 0x47c8379725f8da4f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CMSG_KEY_AGREE_RECIPIENT_ENCODE_INFO.pvKeyWrapAuxInfo", pv_key_wrap_aux_info, 0x200, 0x40, true, 0xddfeaeb37717c3fd)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CMSG_KEY_AGREE_RECIPIENT_ENCODE_INFO.hCryptProv", h_crypt_prov, 0x240, 0x40, true, 0x55485d0ab63c9dfe)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_KEY_AGREE_RECIPIENT_ENCODE_INFO.dwKeySpec", dw_key_spec, 0x280, 0x20, true, 0xa398ea396e8ca01a)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_KEY_AGREE_RECIPIENT_ENCODE_INFO.dwKeyChoice", dw_key_choice, 0x2a0, 0x20, true, 0xae806fb7df2fbfcd)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_algorithm_identifier_t*), "_CMSG_KEY_AGREE_RECIPIENT_ENCODE_INFO.pEphemeralAlgorithm", p_ephemeral_algorithm, 0x2c0, 0x40, true, 0x5a319ecb3a6d6c94)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_id_t*), "_CMSG_KEY_AGREE_RECIPIENT_ENCODE_INFO.pSenderId", p_sender_id, 0x2c0, 0x40, true, 0x30cbd1e010f02721)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CMSG_KEY_AGREE_RECIPIENT_ENCODE_INFO.UserKeyingMaterial", user_keying_material, 0x300, 0x80, true, 0x35e25265166eea48)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_KEY_AGREE_RECIPIENT_ENCODE_INFO.cRecipientEncryptedKeys", c_recipient_encrypted_keys, 0x380, 0x20, true, 0xfd862a9e5f7c0f7d)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cmsg_recipient_encrypted_key_encode_info_t**), "_CMSG_KEY_AGREE_RECIPIENT_ENCODE_INFO.rgpRecipientEncryptedKeys", rgp_recipient_encrypted_keys, 0x3c0, 0x40, true, 0x62d25ebca330f50d)
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
#define _m10
#define _m11
#define _m12
#endif