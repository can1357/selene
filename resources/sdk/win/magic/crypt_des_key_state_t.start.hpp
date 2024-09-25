#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_CRYPT_DES_KEY_STATE.Key", key, 0x0, 0x40, true, 0x11ae7f55137e0488)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_CRYPT_DES_KEY_STATE.IV", iv, 0x40, 0x40, true, 0x99f8fd78e3e0f8c4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_CRYPT_DES_KEY_STATE.Feedback", feedback, 0x80, 0x40, true, 0xbb33517aa1b3d18)
#else
#define _m00
#define _m01
#define _m02
#endif