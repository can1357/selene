#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "__NCRYPT_PCP_RAW_POLICYDIGEST.dwVersion", dw_version, 0x0, 0x20, true, 0xf4a28cf977b7cb88)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "__NCRYPT_PCP_RAW_POLICYDIGEST.cbDigest", cb_digest, 0x20, 0x20, true, 0x1039cf5b445ffe71)
#else
#define _m00
#define _m01
#endif