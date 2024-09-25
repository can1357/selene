#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_SecPkgContext_KeyInfoA.sSignatureAlgorithmName", s_signature_algorithm_name, 0x0, 0x40, true, 0xafef500f12b28cf7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_SecPkgContext_KeyInfoA.sEncryptAlgorithmName", s_encrypt_algorithm_name, 0x40, 0x40, true, 0xeca4b8a4079eef1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SecPkgContext_KeyInfoA.KeySize", key_size, 0x80, 0x20, true, 0x3724fb69bc7ed720)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SecPkgContext_KeyInfoA.SignatureAlgorithm", signature_algorithm, 0xa0, 0x20, true, 0xe91240106da5758c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SecPkgContext_KeyInfoA.EncryptAlgorithm", encrypt_algorithm, 0xc0, 0x20, true, 0xdcf423a82a3d0a7f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif