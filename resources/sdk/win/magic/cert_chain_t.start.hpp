#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_CHAIN.cCerts", c_certs, 0x0, 0x20, true, 0x23a422e87a83362)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t*), "_CERT_CHAIN.certs", certs, 0x40, 0x40, true, 0xc9d457585eea68c1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_key_prov_info_t), "_CERT_CHAIN.keyLocatorInfo", key_locator_info, 0x80, 0x80, true, 0x3a0c8ff9fbdb7d85)
#else
#define _m00
#define _m01
#define _m02
#endif