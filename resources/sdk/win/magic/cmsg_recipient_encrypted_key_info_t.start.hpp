#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_id_t), "_CMSG_RECIPIENT_ENCRYPTED_KEY_INFO.RecipientId", recipient_id, 0x0, 0x40, true, 0xac90fe9db8b57b85)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CMSG_RECIPIENT_ENCRYPTED_KEY_INFO.EncryptedKey", encrypted_key, 0x140, 0x80, true, 0x34ef16d3131f01e7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_CMSG_RECIPIENT_ENCRYPTED_KEY_INFO.Date", date, 0x1c0, 0x40, true, 0xd7a1f91fbeea6c3c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_attribute_type_value_t*), "_CMSG_RECIPIENT_ENCRYPTED_KEY_INFO.pOtherAttr", p_other_attr, 0x200, 0x40, true, 0x65d9d47df604bc00)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif