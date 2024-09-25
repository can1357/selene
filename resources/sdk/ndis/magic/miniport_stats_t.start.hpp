#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_MINIPORT_STATS.ifHCInOctets", if_hc_in_octets, 0x0, 0x40, true, 0xa21616d2fc0c7767)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_MINIPORT_STATS.ifHCInUcastOctets", if_hc_in_ucast_octets, 0x40, 0x40, true, 0xb2cffc6ddffc4bd5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_MINIPORT_STATS.ifHCInBroadcastOctets", if_hc_in_broadcast_octets, 0x80, 0x40, true, 0x215c466dcd3711d3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_MINIPORT_STATS.ifHCInMulticastOctets", if_hc_in_multicast_octets, 0xc0, 0x40, true, 0xbcb6525ffe4ded49)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_MINIPORT_STATS.ifHCInUcastPkts", if_hc_in_ucast_pkts, 0x100, 0x40, true, 0x78a945e828411e00)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_MINIPORT_STATS.ifHCInMulticastPkts", if_hc_in_multicast_pkts, 0x140, 0x40, true, 0xd80e07ace99257e4)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_MINIPORT_STATS.ifHCInBroadcastPkts", if_hc_in_broadcast_pkts, 0x180, 0x40, true, 0x154a5eb5e16a20db)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_MINIPORT_STATS.ifHCOutOctets", if_hc_out_octets, 0x1c0, 0x40, true, 0x707a9c59143905ce)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_MINIPORT_STATS.ifHCOutUcastPkts", if_hc_out_ucast_pkts, 0x200, 0x40, true, 0x5ddeba5f529409d8)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_MINIPORT_STATS.ifHCOutMulticastPkts", if_hc_out_multicast_pkts, 0x240, 0x40, true, 0x2d18db1553cbc42b)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_MINIPORT_STATS.ifHCOutBroadcastPkts", if_hc_out_broadcast_pkts, 0x280, 0x40, true, 0x64ee13129bda01fb)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_MINIPORT_STATS.ifHCOutUcastOctets", if_hc_out_ucast_octets, 0x2c0, 0x40, true, 0x43b6993147661053)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_MINIPORT_STATS.ifHCOutMulticastOctets", if_hc_out_multicast_octets, 0x300, 0x40, true, 0xf450362cfe5f233d)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_MINIPORT_STATS.ifHCOutBroadcastOctets", if_hc_out_broadcast_octets, 0x340, 0x40, true, 0x79e9751226bcea81)
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
#define _m12
#define _m13
#endif