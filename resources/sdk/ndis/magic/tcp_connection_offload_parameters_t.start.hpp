#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_TCP_CONNECTION_OFFLOAD_PARAMETERS.Header", header, 0x0, 0x20, true, 0xf86ad2876d44ee1c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::offload_encapsulation_t), "_NDIS_TCP_CONNECTION_OFFLOAD_PARAMETERS.Encapsulation", encapsulation, 0x20, 0xe0, true, 0x2646096d77a04b5c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_TCP_CONNECTION_OFFLOAD_PARAMETERS.TicksPerSecond", ticks_per_second, 0x100, 0x20, true, 0x142ba662192d5cdf)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_TCP_CONNECTION_OFFLOAD_PARAMETERS.TcpAckFrequency", tcp_ack_frequency, 0x120, 0x8, true, 0x44ade93b4644c8f5)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_TCP_CONNECTION_OFFLOAD_PARAMETERS.TcpDelayedAckTicks", tcp_delayed_ack_ticks, 0x128, 0x8, true, 0xa4b68dc1f67ebf84)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_TCP_CONNECTION_OFFLOAD_PARAMETERS.TcpMaximumRetransmissions", tcp_maximum_retransmissions, 0x130, 0x8, true, 0x19aed42cec66b781)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_TCP_CONNECTION_OFFLOAD_PARAMETERS.TcpDoubtReachabilityRetransmissions", tcp_doubt_reachability_retransmissions, 0x138, 0x8, true, 0x8a6b37f98c51a9a3)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_TCP_CONNECTION_OFFLOAD_PARAMETERS.TcpSwsPreventionTicks", tcp_sws_prevention_ticks, 0x140, 0x20, true, 0xebee02ebdd26a8fd)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_TCP_CONNECTION_OFFLOAD_PARAMETERS.TcpDuplicateAckThreshold", tcp_duplicate_ack_threshold, 0x160, 0x20, true, 0x133f0de623bc1edf)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_TCP_CONNECTION_OFFLOAD_PARAMETERS.TcpPushTicks", tcp_push_ticks, 0x180, 0x20, true, 0x5fee4d7dbaf9b5a1)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_TCP_CONNECTION_OFFLOAD_PARAMETERS.NceStaleTicks", nce_stale_ticks, 0x1a0, 0x20, true, 0xede26c17bf96486)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_TCP_CONNECTION_OFFLOAD_PARAMETERS.CongestionAlgorithm", congestion_algorithm, 0x1c0, 0x20, true, 0x6805934771d341be)
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
#define _m10
#define _m11
#endif