#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_CRYPTO_CAPABILITY.Version", version, 0x0, 0x20, true, 0xcac05fc1aca9688e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_CRYPTO_CAPABILITY.Size", size, 0x20, 0x20, true, 0xc4d0b150daf16ce9)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_CRYPTO_CAPABILITY.CryptoCapabilityIndex", crypto_capability_index, 0x40, 0x20, true, 0x4a83b26dca7fe949)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::storage_crypto_algorithm_id_t), "_STORAGE_CRYPTO_CAPABILITY.AlgorithmId", algorithm_id, 0x60, 0x20, true, 0x5a74a61ea5ffde97)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::storage_crypto_key_size_t), "_STORAGE_CRYPTO_CAPABILITY.KeySize", key_size, 0x80, 0x20, true, 0x532da7a1db1e7ddc)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_CRYPTO_CAPABILITY.DataUnitSizeBitmask", data_unit_size_bitmask, 0xa0, 0x20, true, 0x6a470e409aed0269)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif