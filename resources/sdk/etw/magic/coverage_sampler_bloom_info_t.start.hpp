#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etwi::coverage_sampler_information_t), "_ETW_COVERAGE_SAMPLER_BLOOM_INFO.Common", common, 0x0, 0x80, true, 0xfff567cd671ef562)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etw::coverage_sampler_bloom_filter_t), "_ETW_COVERAGE_SAMPLER_BLOOM_INFO.Bloom", bloom, 0x80, 0xc0, true, 0xcefa2496610ea0a0)
#else
#define _m00
#define _m01
#endif