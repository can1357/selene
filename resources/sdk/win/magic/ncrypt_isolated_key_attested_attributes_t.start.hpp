#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NCRYPT_ISOLATED_KEY_ATTESTED_ATTRIBUTES.Version", version, 0x0, 0x20, true, 0xb4bf7567f25b4f56)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NCRYPT_ISOLATED_KEY_ATTESTED_ATTRIBUTES.Flags", flags, 0x20, 0x20, true, 0xcb451ee6b7cda60c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NCRYPT_ISOLATED_KEY_ATTESTED_ATTRIBUTES.cbPublicKeyBlob", cb_public_key_blob, 0x40, 0x20, true, 0x717adbe814800c90)
#else
#define _m00
#define _m01
#define _m02
#endif