#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CTL_USAGE.cUsageIdentifier", c_usage_identifier, 0x0, 0x20, true, 0x2b78b31c7655b29a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char**), "_CTL_USAGE.rgpszUsageIdentifier", rgpsz_usage_identifier, 0x40, 0x40, true, 0x67a45453e01db749)
#else
#define _m00
#define _m01
#endif