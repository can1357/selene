#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_STATISTICS_INFO.Header", header, 0x0, 0x20, true, 0x5b70c6a31e1d2fc1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_STATISTICS_INFO.SupportedStatistics", supported_statistics, 0x20, 0x20, true, 0x45129c4c3542af3a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_STATISTICS_INFO.ifInDiscards", if_in_discards, 0x40, 0x40, true, 0xccb14654b303438)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_STATISTICS_INFO.ifInErrors", if_in_errors, 0x80, 0x40, true, 0x7e9d7d38767ebc30)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_STATISTICS_INFO.ifHCInOctets", if_hc_in_octets, 0xc0, 0x40, true, 0xc8ddb2d40e8ef409)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_STATISTICS_INFO.ifHCInUcastPkts", if_hc_in_ucast_pkts, 0x100, 0x40, true, 0x7d6ea292910238cd)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_STATISTICS_INFO.ifHCInMulticastPkts", if_hc_in_multicast_pkts, 0x140, 0x40, true, 0xe66e5cf24201f63c)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_STATISTICS_INFO.ifHCInBroadcastPkts", if_hc_in_broadcast_pkts, 0x180, 0x40, true, 0x49ed2f8a4bcc89ba)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_STATISTICS_INFO.ifHCOutOctets", if_hc_out_octets, 0x1c0, 0x40, true, 0x4781ee952530c97c)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_STATISTICS_INFO.ifHCOutUcastPkts", if_hc_out_ucast_pkts, 0x200, 0x40, true, 0xcd0a3566dc8f878c)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_STATISTICS_INFO.ifHCOutMulticastPkts", if_hc_out_multicast_pkts, 0x240, 0x40, true, 0x66cc4bdf86ad8fc8)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_STATISTICS_INFO.ifHCOutBroadcastPkts", if_hc_out_broadcast_pkts, 0x280, 0x40, true, 0x335b0841c607da7e)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_STATISTICS_INFO.ifOutErrors", if_out_errors, 0x2c0, 0x40, true, 0x4d6be962b45bf604)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_STATISTICS_INFO.ifOutDiscards", if_out_discards, 0x300, 0x40, true, 0xecee140c847f2615)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_STATISTICS_INFO.ifHCInUcastOctets", if_hc_in_ucast_octets, 0x340, 0x40, true, 0x6b06575dd686a6a9)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_STATISTICS_INFO.ifHCInMulticastOctets", if_hc_in_multicast_octets, 0x380, 0x40, true, 0x9754fc8cab4513b1)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_STATISTICS_INFO.ifHCInBroadcastOctets", if_hc_in_broadcast_octets, 0x3c0, 0x40, true, 0xb98b2ae51c9be47d)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_STATISTICS_INFO.ifHCOutUcastOctets", if_hc_out_ucast_octets, 0x400, 0x40, true, 0x148ada9bf7780eda)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_STATISTICS_INFO.ifHCOutMulticastOctets", if_hc_out_multicast_octets, 0x440, 0x40, true, 0x2f18a001532b3a7e)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_STATISTICS_INFO.ifHCOutBroadcastOctets", if_hc_out_broadcast_octets, 0x480, 0x40, true, 0x1edc9f01149b4942)
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
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#endif