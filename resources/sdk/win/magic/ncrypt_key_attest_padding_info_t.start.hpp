#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NCRYPT_KEY_ATTEST_PADDING_INFO.magic", magic, 0x0, 0x20, true, 0xd9e1abeb11a33409)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_NCRYPT_KEY_ATTEST_PADDING_INFO.pbKeyBlob", pb_key_blob, 0x40, 0x40, true, 0x448fb1ae1459f4a4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NCRYPT_KEY_ATTEST_PADDING_INFO.cbKeyBlob", cb_key_blob, 0x80, 0x20, true, 0xc927dfd1c1aae4e0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_NCRYPT_KEY_ATTEST_PADDING_INFO.pbKeyAuth", pb_key_auth, 0xc0, 0x40, true, 0xa9deebba13de5ebc)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NCRYPT_KEY_ATTEST_PADDING_INFO.cbKeyAuth", cb_key_auth, 0x100, 0x20, true, 0x898877d868300a2a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif