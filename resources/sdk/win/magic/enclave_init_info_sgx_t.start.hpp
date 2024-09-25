#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1808>), "_ENCLAVE_INIT_INFO_SGX.SigStruct", sig_struct, 0x0, 0x80, true, 0xbe0409d893550beb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 304>), "_ENCLAVE_INIT_INFO_SGX.EInitToken", e_init_token, 0x4000, 0x80, true, 0x723e1c8381d91926)
#else
#define _m00
#define _m01
#endif