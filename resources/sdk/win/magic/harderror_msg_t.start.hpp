#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::port_message_t), "_HARDERROR_MSG.h", h, 0x0, 0x40, true, 0xf113fc39df0c6c49)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_HARDERROR_MSG.Status", status, 0x140, 0x20, true, 0x17d19ed1b6f4a1e0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_HARDERROR_MSG.ErrorTime", error_time, 0x180, 0x40, true, 0xf9b92b81d9de0f1b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HARDERROR_MSG.ValidResponseOptions", valid_response_options, 0x1c0, 0x20, true, 0x28929486b0e164e9)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HARDERROR_MSG.Response", response, 0x1e0, 0x20, true, 0x7965229e5be2a3e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HARDERROR_MSG.NumberOfParameters", number_of_parameters, 0x200, 0x20, true, 0xfe116a661e99f50)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HARDERROR_MSG.UnicodeStringParameterMask", unicode_string_parameter_mask, 0x220, 0x20, true, 0x25637dbc4a0a2604)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 5>), "_HARDERROR_MSG.Parameters", parameters, 0x240, 0x40, true, 0xd7679ae9bd3ce354)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif