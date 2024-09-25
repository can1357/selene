#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_KEY_AGREE_RECIPIENT_INFO.dwVersion", dw_version, 0x0, 0x20, true, 0x3f78ac37c73ec591)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_KEY_AGREE_RECIPIENT_INFO.dwOriginatorChoice", dw_originator_choice, 0x20, 0x20, true, 0x4ae490d150dbdb9b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_id_t), "_CMSG_KEY_AGREE_RECIPIENT_INFO.OriginatorCertId", originator_cert_id, 0x40, 0x40, true, 0x511fbdffc98fd04a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_public_key_info_t), "_CMSG_KEY_AGREE_RECIPIENT_INFO.OriginatorPublicKeyInfo", originator_public_key_info, 0x40, 0x80, true, 0xf12e669fa8fcb6fb)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CMSG_KEY_AGREE_RECIPIENT_INFO.UserKeyingMaterial", user_keying_material, 0x1c0, 0x80, true, 0x4e3383a9a035070c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_algorithm_identifier_t), "_CMSG_KEY_AGREE_RECIPIENT_INFO.KeyEncryptionAlgorithm", key_encryption_algorithm, 0x240, 0xc0, true, 0x1244736c287ceb63)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_KEY_AGREE_RECIPIENT_INFO.cRecipientEncryptedKeys", c_recipient_encrypted_keys, 0x300, 0x20, true, 0xb375be58e9353e21)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cmsg_recipient_encrypted_key_info_t**), "_CMSG_KEY_AGREE_RECIPIENT_INFO.rgpRecipientEncryptedKeys", rgp_recipient_encrypted_keys, 0x340, 0x40, true, 0xceda204e2cac972)
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