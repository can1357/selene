#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etwi::coverage_sampler_information_t), "_ETW_COVERAGE_SAMPLER_QUERY_INFO.Common", common, 0x0, 0x80, true, 0x3d603a04e8e7f050)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETW_COVERAGE_SAMPLER_QUERY_INFO.EmptyStackCache", empty_stack_cache, 0x80, 0x1, true, 0x5fff1af5a055846b, 1, uint32_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etw::coverage_sampler_data_t), "_ETW_COVERAGE_SAMPLER_QUERY_INFO.Header", header, 0xa0, 0x60, true, 0xf829ac1046c364a9)
#else
#define _m00
#define _m01
#define _m02
#endif