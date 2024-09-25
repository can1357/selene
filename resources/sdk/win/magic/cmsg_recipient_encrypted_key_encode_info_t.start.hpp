#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_RECIPIENT_ENCRYPTED_KEY_ENCODE_INFO.cbSize", cb_size, 0x0, 0x20, true, 0xb0788da3c820a7c0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_bit_blob_t), "_CMSG_RECIPIENT_ENCRYPTED_KEY_ENCODE_INFO.RecipientPublicKey", recipient_public_key, 0x40, 0xc0, true, 0xa6dd5e98259e1a67)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_id_t), "_CMSG_RECIPIENT_ENCRYPTED_KEY_ENCODE_INFO.RecipientId", recipient_id, 0x100, 0x40, true, 0x2cfaa7b07764f9c0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_CMSG_RECIPIENT_ENCRYPTED_KEY_ENCODE_INFO.Date", date, 0x240, 0x40, true, 0x85ec66f4faa2a0d9)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_attribute_type_value_t*), "_CMSG_RECIPIENT_ENCRYPTED_KEY_ENCODE_INFO.pOtherAttr", p_other_attr, 0x280, 0x40, true, 0x9202a0e16fd0bea7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif