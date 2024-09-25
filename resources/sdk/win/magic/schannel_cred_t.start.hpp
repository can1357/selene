#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCHANNEL_CRED.dwVersion", dw_version, 0x0, 0x20, true, 0x4e182c3775941ed1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCHANNEL_CRED.cCreds", c_creds, 0x20, 0x20, true, 0xa7526bb9d9066ddb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::cert_context_t**), "_SCHANNEL_CRED.paCred", pa_cred, 0x40, 0x40, true, 0xb888457236ebb711)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SCHANNEL_CRED.hRootStore", h_root_store, 0x80, 0x40, true, 0x3674fd1346cd24ce)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCHANNEL_CRED.cMappers", c_mappers, 0xc0, 0x20, true, 0x9c54bd02bb7795f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hmapper_t**), "_SCHANNEL_CRED.aphMappers", aph_mappers, 0x100, 0x40, true, 0xc2eefdb48da2a70b)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCHANNEL_CRED.cSupportedAlgs", c_supported_algs, 0x140, 0x20, true, 0x4ca747c9226d8b8a)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_SCHANNEL_CRED.palgSupportedAlgs", palg_supported_algs, 0x180, 0x40, true, 0x3b4e21d75422cdcf)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCHANNEL_CRED.grbitEnabledProtocols", grbit_enabled_protocols, 0x1c0, 0x20, true, 0x1b86e557b2f76415)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCHANNEL_CRED.dwMinimumCipherStrength", dw_minimum_cipher_strength, 0x1e0, 0x20, true, 0x83909a0b0fc28075)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCHANNEL_CRED.dwMaximumCipherStrength", dw_maximum_cipher_strength, 0x200, 0x20, true, 0xe60ced6ee1758922)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCHANNEL_CRED.dwSessionLifespan", dw_session_lifespan, 0x220, 0x20, true, 0x9a9581196ae96f20)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCHANNEL_CRED.dwFlags", dw_flags, 0x240, 0x20, true, 0xc6cf1debbe7d56b8)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCHANNEL_CRED.dwCredFormat", dw_cred_format, 0x260, 0x20, true, 0x53c6f9ba589f5384)
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
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#endif