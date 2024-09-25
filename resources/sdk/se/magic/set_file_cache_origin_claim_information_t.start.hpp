#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SE_SET_FILE_CACHE_ORIGIN_CLAIM_INFORMATION.OriginClaimSize", origin_claim_size, 0x0, 0x0, false, 0x36afc7e847e5fa86)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SE_SET_FILE_CACHE_ORIGIN_CLAIM_INFORMATION.OriginClaim", origin_claim, 0x0, 0x0, false, 0x73604622219a6066)
#else
#define _m00
#define _m01
#endif