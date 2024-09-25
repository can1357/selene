#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etwi::coverage_sampler_information_t), "_ETW_COVERAGE_SAMPLER_CREATE_INFO.Common", common, 0x0, 0x80, true, 0xd214b3a68a7d3faa)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etw::coverage_sampler_options_t), "_ETW_COVERAGE_SAMPLER_CREATE_INFO.Options", options, 0x80, 0x80, true, 0x11abc97af1510148)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etw::coverage_sampler_bloom_filter_t), "_ETW_COVERAGE_SAMPLER_CREATE_INFO.Bloom", bloom, 0x1300, 0xc0, true, 0x43aa05bd9da7c87a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_COVERAGE_SAMPLER_CREATE_INFO.SamplesReadyEvent", samples_ready_event, 0x13c0, 0x40, true, 0xd949eb415dd617cd)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif