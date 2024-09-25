#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etwi::coverage_sampler_information_t), "_ETW_COVERAGE_SAMPLER_STATUS_INFO.Common", common, 0x0, 0x80, true, 0x75c43ec74dac324d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etw::coverage_sampler_status_t), "_ETW_COVERAGE_SAMPLER_STATUS_INFO.Status", status, 0x80, 0x8, true, 0xfd80a189b9407de7)
#else
#define _m00
#define _m01
#endif