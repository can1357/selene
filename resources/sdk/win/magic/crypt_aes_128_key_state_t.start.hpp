#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_CRYPT_AES_128_KEY_STATE.Key", key, 0x0, 0x80, true, 0x79bbf0bbf3ee0136)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_CRYPT_AES_128_KEY_STATE.IV", iv, 0x80, 0x80, true, 0x2b7064977883e16f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::array<uint8_t, 16>, 11>), "_CRYPT_AES_128_KEY_STATE.EncryptionState", encryption_state, 0x100, 0x80, true, 0x220306ed5e7f8e48)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::array<uint8_t, 16>, 11>), "_CRYPT_AES_128_KEY_STATE.DecryptionState", decryption_state, 0x680, 0x80, true, 0xc6ee5cd623aab72e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_CRYPT_AES_128_KEY_STATE.Feedback", feedback, 0xc00, 0x80, true, 0x8e24f64ec64de016)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif