#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_COVERAGE_SAMPLER_DATA.HeaderSize", header_size, 0x0, 0x20, true, 0x52ed08446ef3071d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_COVERAGE_SAMPLER_DATA.TotalSize", total_size, 0x20, 0x20, true, 0x580987344f5c8aa5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_COVERAGE_SAMPLER_DATA.QuerySequence", query_sequence, 0x40, 0x20, true, 0xb0c1da7c7195c0da)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_COVERAGE_SAMPLER_DATA.OptionsOffset", options_offset, 0x60, 0x20, true, 0xf42af91f2df4e846)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_COVERAGE_SAMPLER_DATA.OptionsSize", options_size, 0x80, 0x20, true, 0x84edd5325bc7715c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_COVERAGE_SAMPLER_DATA.StatsOffset", stats_offset, 0xa0, 0x20, true, 0x1b6b49bdc6a6faac)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_COVERAGE_SAMPLER_DATA.StatsSize", stats_size, 0xc0, 0x20, true, 0x1e18978a81513c6c)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_COVERAGE_SAMPLER_DATA.SamplesOffset", samples_offset, 0xe0, 0x20, true, 0xdbc197a47bf99179)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_COVERAGE_SAMPLER_DATA.SampleCount", sample_count, 0x100, 0x20, true, 0xba1a35bd069bc63d)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_COVERAGE_SAMPLER_DATA.ModulesOffset", modules_offset, 0x120, 0x20, true, 0x5d6c7c864b50b37e)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_COVERAGE_SAMPLER_DATA.ModuleCount", module_count, 0x140, 0x20, true, 0x94d544709de1b55b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#endif