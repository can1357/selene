#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_PD_FILTER_COUNTER.PacketsMatched", packets_matched, 0x0, 0x40, true, 0x4ae8392ddb14b450)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_PD_FILTER_COUNTER.BytesMatched", bytes_matched, 0x40, 0x40, true, 0x8e301e3999f46bb1)
#else
#define _m00
#define _m01
#endif