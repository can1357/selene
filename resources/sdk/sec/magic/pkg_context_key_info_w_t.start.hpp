#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(wchar_t*), "_SecPkgContext_KeyInfoW.sSignatureAlgorithmName", s_signature_algorithm_name, 0x0, 0x40, true, 0x28cf3d305dfdac19)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(wchar_t*), "_SecPkgContext_KeyInfoW.sEncryptAlgorithmName", s_encrypt_algorithm_name, 0x40, 0x40, true, 0x5855ff1c8347c8d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SecPkgContext_KeyInfoW.KeySize", key_size, 0x80, 0x20, true, 0xec2c5c7b3a0945f8)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SecPkgContext_KeyInfoW.SignatureAlgorithm", signature_algorithm, 0xa0, 0x20, true, 0x75e6cf7d0b2f3741)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SecPkgContext_KeyInfoW.EncryptAlgorithm", encrypt_algorithm, 0xc0, 0x20, true, 0xb2492d0e6afec1bd)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif