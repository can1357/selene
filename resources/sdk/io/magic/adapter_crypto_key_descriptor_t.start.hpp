#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_ADAPTER_CRYPTO_KEY_DESCRIPTOR.Version", version, 0x0, 0x20, true, 0x8b10bb65ec48106f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_ADAPTER_CRYPTO_KEY_DESCRIPTOR.Size", size, 0x20, 0x20, true, 0x3229561b94f5cf50)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_ADAPTER_CRYPTO_KEY_DESCRIPTOR.CryptoIndex", crypto_index, 0x40, 0x20, true, 0x27bc5eaf641a7196)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_ADAPTER_CRYPTO_KEY_DESCRIPTOR.AlgorithmId", algorithm_id, 0x60, 0x20, true, 0xee7cfa429ed6975e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_ADAPTER_CRYPTO_KEY_DESCRIPTOR.DataUnitSize", data_unit_size, 0x80, 0x20, true, 0x7e3e64f5fa3ce965)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_ADAPTER_CRYPTO_KEY_DESCRIPTOR.KeySize", key_size, 0xa0, 0x20, true, 0x266fe39e9172fb3a)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 32>), "_IO_ADAPTER_CRYPTO_KEY_DESCRIPTOR.KeyHash", key_hash, 0xc0, 0x0, true, 0xdd2858ae1d2032b7)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_IO_ADAPTER_CRYPTO_KEY_DESCRIPTOR.KeyVirtualAddress", key_virtual_address, 0x1c0, 0x40, true, 0xb5f77e4462cce93d)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_IO_ADAPTER_CRYPTO_KEY_DESCRIPTOR.KeyPhysicalAddress", key_physical_address, 0x200, 0x40, true, 0x13d1dd3f2080d454)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif