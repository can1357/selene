#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_CRYPTO_DESCRIPTOR.Version", version, 0x0, 0x20, true, 0xf747a592b020c173)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_CRYPTO_DESCRIPTOR.Size", size, 0x20, 0x20, true, 0x113af16943fcd0)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_CRYPTO_DESCRIPTOR.NumKeysSupported", num_keys_supported, 0x40, 0x20, true, 0x33730700fafdd5a3)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_CRYPTO_DESCRIPTOR.NumCryptoCapabilities", num_crypto_capabilities, 0x60, 0x20, true, 0xac269f98b130a922)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::storage_crypto_capability_t, 1>), "_STORAGE_CRYPTO_DESCRIPTOR.CryptoCapabilities", crypto_capabilities, 0x80, 0xc0, true, 0x90e570c464a54712)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif