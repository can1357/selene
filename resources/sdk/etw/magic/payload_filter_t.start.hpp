#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_PAYLOAD_FILTER.RefCount", ref_count, 0x0, 0x20, true, 0x9c62f0ff46c699c8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::aggregated_payload_filter_t), "_ETW_PAYLOAD_FILTER.PayloadFilter", payload_filter, 0x40, 0x80, true, 0x71fafedb0f122570)
#else
#define _m00
#define _m01
#endif