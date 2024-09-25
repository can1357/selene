#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRL_INFO.dwVersion", dw_version, 0x0, 0x20, true, 0x7da40572c945e219)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_algorithm_identifier_t), "_CRL_INFO.SignatureAlgorithm", signature_algorithm, 0x40, 0xc0, true, 0xb2ac1296b1360b96)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CRL_INFO.Issuer", issuer, 0x100, 0x80, true, 0x2ce7435a3cc26bf9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_CRL_INFO.ThisUpdate", this_update, 0x180, 0x40, true, 0xa3d7da669d89325)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_CRL_INFO.NextUpdate", next_update, 0x1c0, 0x40, true, 0xdd7e39858db28822)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRL_INFO.cCRLEntry", c_crl_entry, 0x200, 0x20, true, 0xdde8bd915abaf6f7)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crl_entry_t*), "_CRL_INFO.rgCRLEntry", rg_crl_entry, 0x240, 0x40, true, 0xb9cf0d08af67bf70)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRL_INFO.cExtension", c_extension, 0x280, 0x20, true, 0x450881f558e1e542)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_extension_t*), "_CRL_INFO.rgExtension", rg_extension, 0x2c0, 0x40, true, 0x4ca20799d042c08d)
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