#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_NDK_PERFORMANCE_COUNTERS.Connect", connect, 0x0, 0x0, false, 0x9481296ad6a316b9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_NDK_PERFORMANCE_COUNTERS.Accept", accept, 0x0, 0x0, false, 0x2015473c3c25445)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_NDK_PERFORMANCE_COUNTERS.ConnectFailure", connect_failure, 0x0, 0x0, false, 0xad678f05837fe324)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_NDK_PERFORMANCE_COUNTERS.ConnectionError", connection_error, 0x0, 0x0, false, 0xddb2956b58da5327)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_NDK_PERFORMANCE_COUNTERS.ActiveConnection", active_connection, 0x0, 0x0, false, 0x7a5dd9f04db10abe)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_NDK_PERFORMANCE_COUNTERS.CQError", cq_error, 0x0, 0x0, false, 0x23b3e94aa86babfb)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_NDK_PERFORMANCE_COUNTERS.RDMAInOctets", rdma_in_octets, 0x0, 0x0, false, 0xec46300cb0e8f015)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_NDK_PERFORMANCE_COUNTERS.RDMAOutOctets", rdma_out_octets, 0x0, 0x0, false, 0x7a227dd4d8078da2)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_NDK_PERFORMANCE_COUNTERS.RDMAInFrames", rdma_in_frames, 0x0, 0x0, false, 0xc985b2a19b36a0b5)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_NDK_PERFORMANCE_COUNTERS.RDMAOutFrames", rdma_out_frames, 0x0, 0x0, false, 0x32f94a91d811f408)
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