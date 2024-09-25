#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 32>), "_CRYPT_AES_256_KEY_STATE.Key", key, 0x0, 0x0, true, 0x483895c1e1b88ff5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_CRYPT_AES_256_KEY_STATE.IV", iv, 0x100, 0x80, true, 0xbf3dbf6fa666d2b2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::array<uint8_t, 16>, 15>), "_CRYPT_AES_256_KEY_STATE.EncryptionState", encryption_state, 0x180, 0x80, true, 0x5f64753a81e56e3d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::array<uint8_t, 16>, 15>), "_CRYPT_AES_256_KEY_STATE.DecryptionState", decryption_state, 0x900, 0x80, true, 0x35bbd727d835875b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_CRYPT_AES_256_KEY_STATE.Feedback", feedback, 0x1080, 0x80, true, 0xfbe65f834c2c9823)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif