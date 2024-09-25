#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_IP_OFFLOAD_STATS.InReceives", in_receives, 0x0, 0x40, true, 0xcea72dea4d5df756)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_IP_OFFLOAD_STATS.InOctets", in_octets, 0x40, 0x40, true, 0x73951355177c4910)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_IP_OFFLOAD_STATS.InDelivers", in_delivers, 0x80, 0x40, true, 0x8515398d49c4594e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_IP_OFFLOAD_STATS.OutRequests", out_requests, 0xc0, 0x40, true, 0x316c55d9e6f7bb4c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_IP_OFFLOAD_STATS.OutOctets", out_octets, 0x100, 0x40, true, 0xc4f6ee46773b777a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IP_OFFLOAD_STATS.InHeaderErrors", in_header_errors, 0x140, 0x20, true, 0xc994df808823680)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IP_OFFLOAD_STATS.InTruncatedPackets", in_truncated_packets, 0x160, 0x20, true, 0x8ed42183fb7d106f)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IP_OFFLOAD_STATS.InDiscards", in_discards, 0x180, 0x20, true, 0x6cabedb82e5c27b0)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IP_OFFLOAD_STATS.OutDiscards", out_discards, 0x1a0, 0x20, true, 0x349e2810ecf5328c)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IP_OFFLOAD_STATS.OutNoRoutes", out_no_routes, 0x1c0, 0x20, true, 0xf9e51b78d7996f9b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#endif