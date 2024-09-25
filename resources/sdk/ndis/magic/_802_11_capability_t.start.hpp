#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_802_11_CAPABILITY.Length", length, 0x0, 0x20, true, 0x1400a0d90b8d26f0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_802_11_CAPABILITY.Version", version, 0x20, 0x20, true, 0xfd60f154094d753f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_802_11_CAPABILITY.NoOfPMKIDs", no_of_pmki_ds, 0x40, 0x20, true, 0xb55fd2756a1f92a1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_802_11_CAPABILITY.NoOfAuthEncryptPairsSupported", no_of_auth_encrypt_pairs_supported, 0x60, 0x20, true, 0x90fcf161560f2411)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct ndis::_802_11_authentication_encryption_t, 1>), "_NDIS_802_11_CAPABILITY.AuthenticationEncryptionSupported", authentication_encryption_supported, 0x80, 0x40, true, 0x8277605b1ee3dc9d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif