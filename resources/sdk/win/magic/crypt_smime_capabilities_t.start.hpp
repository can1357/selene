#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_SMIME_CAPABILITIES.cCapability", c_capability, 0x0, 0x20, true, 0x6d5de3a1f16ebdab)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_smime_capability_t*), "_CRYPT_SMIME_CAPABILITIES.rgCapability", rg_capability, 0x40, 0x40, true, 0xa974e152fb509588)
#else
#define _m00
#define _m01
#endif