#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "__NCRYPT_PCP_HMAC_AUTH_SIGNATURE_INFO.dwVersion", dw_version, 0x0, 0x20, true, 0xfed38c9c16aac2e7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "__NCRYPT_PCP_HMAC_AUTH_SIGNATURE_INFO.iExpiration", i_expiration, 0x20, 0x20, true, 0xd7d4bf5b219cc336)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 32>), "__NCRYPT_PCP_HMAC_AUTH_SIGNATURE_INFO.pabNonce", pab_nonce, 0x40, 0x0, true, 0xce24eb7ef3fa91d2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 32>), "__NCRYPT_PCP_HMAC_AUTH_SIGNATURE_INFO.pabPolicyRef", pab_policy_ref, 0x140, 0x0, true, 0x8329ae48753af605)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 32>), "__NCRYPT_PCP_HMAC_AUTH_SIGNATURE_INFO.pabHMAC", pab_hmac, 0x240, 0x0, true, 0xbd3fd3ebca5462d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif