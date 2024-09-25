#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(system_net_rate_control_context_header_t ), "_SYSTEM_NET_RATE_CONTROL_QUOTA_CONTEXT.Header", header, 0x0, 0x80, true, 0x31531a3e075283ac)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_NET_RATE_CONTROL_QUOTA_CONTEXT.OverQuotaHistory", over_quota_history, 0x80, 0x40, true, 0x80355dc088dd0f7a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_NET_RATE_CONTROL_QUOTA_CONTEXT.IntervalLength", interval_length, 0xc0, 0x20, true, 0x720fec566b0e42e1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_NET_RATE_CONTROL_QUOTA_CONTEXT.NumberOfIntervals", number_of_intervals, 0xe0, 0x20, true, 0xe8619acf3098ce6e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif