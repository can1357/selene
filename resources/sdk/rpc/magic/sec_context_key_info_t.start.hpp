#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_SEC_CONTEXT_KEY_INFO.EncryptAlgorithm", encrypt_algorithm, 0x0, 0x20, true, 0xdec64307290e4582)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_SEC_CONTEXT_KEY_INFO.KeySize", key_size, 0x20, 0x20, true, 0x16eb52068aa3c7f7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_SEC_CONTEXT_KEY_INFO.SignatureAlgorithm", signature_algorithm, 0x40, 0x20, true, 0x6beb26c8a25ee7a5)
#else
#define _m00
#define _m01
#define _m02
#endif