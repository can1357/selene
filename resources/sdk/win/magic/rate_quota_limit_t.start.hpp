#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RATE_QUOTA_LIMIT.RateData", rate_data, 0x0, 0x20, true, 0xa58e8aecf4162716)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint7_t), "_RATE_QUOTA_LIMIT.RatePercent", rate_percent, 0x0, 0x7, true, 0xfe769ffe48f0aced, 7, uint32_t)
#else
#define _m00
#define _m01
#endif