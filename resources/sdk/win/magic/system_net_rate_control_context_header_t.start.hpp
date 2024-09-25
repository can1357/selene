#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_NET_RATE_CONTROL_CONTEXT_HEADER.PolicyCookie", policy_cookie, 0x0, 0x40, true, 0x5eed423dbfdfc1ba)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::system_net_rate_control_type_t), "_SYSTEM_NET_RATE_CONTROL_CONTEXT_HEADER.Type", type, 0x40, 0x20, true, 0x93ddeb194b3ddf9f)
#else
#define _m00
#define _m01
#endif