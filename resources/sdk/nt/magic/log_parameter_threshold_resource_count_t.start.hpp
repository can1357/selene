#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::log_parameter_header_t), "_LOG_PARAMETER_THRESHOLD_RESOURCE_COUNT.Header", header, 0x0, 0x20, true, 0x1658a9f881b73366)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_LOG_PARAMETER_THRESHOLD_RESOURCE_COUNT.ResourceCount", resource_count, 0x20, 0x20, true, 0xcffbe6a282e6aae6)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_LOG_PARAMETER_THRESHOLD_RESOURCE_COUNT.Scope", scope, 0x40, 0x2, true, 0xa2ebf5b2fe74d16c, 2, uint8_t)
#else
#define _m00
#define _m01
#define _m02
#endif