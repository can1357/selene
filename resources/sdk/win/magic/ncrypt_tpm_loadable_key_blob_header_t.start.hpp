#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NCRYPT_TPM_LOADABLE_KEY_BLOB_HEADER.magic", magic, 0x0, 0x20, true, 0xe1ef42034975d93d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NCRYPT_TPM_LOADABLE_KEY_BLOB_HEADER.cbHeader", cb_header, 0x20, 0x20, true, 0x67efe34b94440cea)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NCRYPT_TPM_LOADABLE_KEY_BLOB_HEADER.cbPublic", cb_public, 0x40, 0x20, true, 0x42b06d36129295a8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NCRYPT_TPM_LOADABLE_KEY_BLOB_HEADER.cbPrivate", cb_private, 0x60, 0x20, true, 0xec18bc1a2728153b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NCRYPT_TPM_LOADABLE_KEY_BLOB_HEADER.cbName", cb_name, 0x80, 0x20, true, 0x497b14ce00c335ca)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif