#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_CRYPTO_CAPABILITIES_DATA.Version", version, 0x0, 0x20, true, 0x8d513404f9aa959c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_CRYPTO_CAPABILITIES_DATA.Size", size, 0x20, 0x20, true, 0x8ea60825775e4ded)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_STOR_CRYPTO_CAPABILITIES_DATA.NumKeysSupported", num_keys_supported, 0x40, 0x10, true, 0x1bcb0370237857fc)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_STOR_CRYPTO_CAPABILITIES_DATA.NumCryptoCapabilities", num_crypto_capabilities, 0x50, 0x10, true, 0xf95002493383f083)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct stor::port::stor_crypto_capability_t, 1>), "_STOR_CRYPTO_CAPABILITIES_DATA.CryptoCapabilities", crypto_capabilities, 0x60, 0xa0, true, 0xdbdc41c170c9057c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif