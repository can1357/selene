#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_CRYPTO_CAPABILITY.Version", version, 0x0, 0x20, true, 0xd3272fb7ee9ea3c6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_CRYPTO_CAPABILITY.Size", size, 0x20, 0x20, true, 0xcf48d8824008961f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_STOR_CRYPTO_CAPABILITY.CryptoCapabilityIndex", crypto_capability_index, 0x40, 0x10, true, 0x6f0312f96c509af3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_STOR_CRYPTO_CAPABILITY.DataUnitSizeBitmask", data_unit_size_bitmask, 0x50, 0x10, true, 0x4ff97f5cb6467001)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum stor::port::stor_crypto_algorithm_id_t), "_STOR_CRYPTO_CAPABILITY.AlgorithmId", algorithm_id, 0x60, 0x20, true, 0x5fbb502c034906bd)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum stor::port::stor_crypto_key_size_t), "_STOR_CRYPTO_CAPABILITY.KeySize", key_size, 0x80, 0x20, true, 0x44e18587bd47e0f4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif