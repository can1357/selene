#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_KEY_AGREE_ENCRYPT_INFO.cbSize", cb_size, 0x0, 0x20, true, 0xa59ef4448ece650f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_KEY_AGREE_ENCRYPT_INFO.dwRecipientIndex", dw_recipient_index, 0x20, 0x20, true, 0xfeac2a9df2625ce9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_algorithm_identifier_t), "_CMSG_KEY_AGREE_ENCRYPT_INFO.KeyEncryptionAlgorithm", key_encryption_algorithm, 0x40, 0xc0, true, 0x8338ce5ad3376369)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CMSG_KEY_AGREE_ENCRYPT_INFO.UserKeyingMaterial", user_keying_material, 0x100, 0x80, true, 0xf4cb6dde8fdb4a71)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_KEY_AGREE_ENCRYPT_INFO.dwOriginatorChoice", dw_originator_choice, 0x180, 0x20, true, 0xc999beff38147b43)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_id_t), "_CMSG_KEY_AGREE_ENCRYPT_INFO.OriginatorCertId", originator_cert_id, 0x1c0, 0x40, true, 0x13f27a32c52a9a20)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_public_key_info_t), "_CMSG_KEY_AGREE_ENCRYPT_INFO.OriginatorPublicKeyInfo", originator_public_key_info, 0x1c0, 0x80, true, 0x561a77a3e0bcca84)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_KEY_AGREE_ENCRYPT_INFO.cKeyAgreeKeyEncryptInfo", c_key_agree_key_encrypt_info, 0x340, 0x20, true, 0x62a89602b8e5276b)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cmsg_key_agree_key_encrypt_info_t**), "_CMSG_KEY_AGREE_ENCRYPT_INFO.rgpKeyAgreeKeyEncryptInfo", rgp_key_agree_key_encrypt_info, 0x380, 0x40, true, 0x64fd3c8648413190)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_KEY_AGREE_ENCRYPT_INFO.dwFlags", dw_flags, 0x3c0, 0x20, true, 0x66d46d5a7a3ef840)
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