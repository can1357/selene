#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_MINIPORT_CS_TRAFFIC_STATS.IfInUnicastPackets", if_in_unicast_packets, 0x0, 0x0, false, 0x42e0632da7eaf474)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_MINIPORT_CS_TRAFFIC_STATS.IfOutUnicastPackets", if_out_unicast_packets, 0x0, 0x0, false, 0x7e34ff226fc9454)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_MINIPORT_CS_TRAFFIC_STATS.IfInMulticastPackets", if_in_multicast_packets, 0x0, 0x0, false, 0x5d16d8513d247c55)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_MINIPORT_CS_TRAFFIC_STATS.IfOutMulticastPackets", if_out_multicast_packets, 0x0, 0x0, false, 0x2a933bb14e022a07)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_MINIPORT_CS_TRAFFIC_STATS.IfInBroadcastPackets", if_in_broadcast_packets, 0x0, 0x0, false, 0xc78a4a355717e95b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_MINIPORT_CS_TRAFFIC_STATS.IfOutBroadcastPackets", if_out_broadcast_packets, 0x0, 0x0, false, 0x6a81c1ff998eaf06)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif