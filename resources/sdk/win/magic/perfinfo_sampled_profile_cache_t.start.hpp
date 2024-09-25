#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_SAMPLED_PROFILE_CACHE.Entries", entries, 0x0, 0x20, true, 0x236cbad20ddf95e4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::perfinfo_sampled_profile_information_t, 20>), "_PERFINFO_SAMPLED_PROFILE_CACHE.Sample", sample, 0x40, 0x0, true, 0x97a8074dc30450ef)
#else
#define _m00
#define _m01
#endif