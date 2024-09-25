#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_TASK_TCP_LARGE_SEND.Version", version, 0x0, 0x20, true, 0xd19f791a8ada6062)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_TASK_TCP_LARGE_SEND.MaxOffLoadSize", max_off_load_size, 0x20, 0x20, true, 0x385be1e73cfa6b31)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_TASK_TCP_LARGE_SEND.MinSegmentCount", min_segment_count, 0x40, 0x20, true, 0x9070666550683820)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_TASK_TCP_LARGE_SEND.TcpOptions", tcp_options, 0x60, 0x8, true, 0x39c58d13f6306015)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_TASK_TCP_LARGE_SEND.IpOptions", ip_options, 0x68, 0x8, true, 0xd8a9736846a112c3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif