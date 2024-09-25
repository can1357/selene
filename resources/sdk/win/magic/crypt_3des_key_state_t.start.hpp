#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 24>), "_CRYPT_3DES_KEY_STATE.Key", key, 0x0, 0xc0, true, 0x890881077d22ea55)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_CRYPT_3DES_KEY_STATE.IV", iv, 0xc0, 0x40, true, 0x1c6084ae5f870c2a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_CRYPT_3DES_KEY_STATE.Feedback", feedback, 0x100, 0x40, true, 0xd07764e6a8516232)
#else
#define _m00
#define _m01
#define _m02
#endif