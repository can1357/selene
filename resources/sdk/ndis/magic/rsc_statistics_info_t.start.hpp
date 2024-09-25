#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_RSC_STATISTICS_INFO.Header", header, 0x0, 0x20, true, 0xf84a31b6a7b2d997)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_RSC_STATISTICS_INFO.CoalescedPkts", coalesced_pkts, 0x40, 0x40, true, 0x7cbf0a710ab1f57e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_RSC_STATISTICS_INFO.CoalescedOctets", coalesced_octets, 0x80, 0x40, true, 0xbba90a8e4b59c2b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_RSC_STATISTICS_INFO.CoalesceEvents", coalesce_events, 0xc0, 0x40, true, 0x590f16ebcfe45336)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_RSC_STATISTICS_INFO.Aborts", aborts, 0x100, 0x40, true, 0x538fccaac7dcb140)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif