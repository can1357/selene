#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "__NCRYPT_PCP_TPM_FW_VERSION_INFO.major1", major1, 0x0, 0x10, true, 0x63fa958b2260474c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "__NCRYPT_PCP_TPM_FW_VERSION_INFO.major2", major2, 0x10, 0x10, true, 0x29bf44ab30a730b9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "__NCRYPT_PCP_TPM_FW_VERSION_INFO.minor1", minor1, 0x20, 0x10, true, 0x9a76f48252a65776)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "__NCRYPT_PCP_TPM_FW_VERSION_INFO.minor2", minor2, 0x30, 0x10, true, 0x10d1f6af70918eb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif