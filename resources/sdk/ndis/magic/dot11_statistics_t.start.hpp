#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "DOT11_STATISTICS.Header", header, 0x0, 0x20, true, 0x72c11b1c992bac6a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "DOT11_STATISTICS.ullFourWayHandshakeFailures", ull_four_way_handshake_failures, 0x40, 0x40, true, 0xc12ed9df8cba79b0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "DOT11_STATISTICS.ullTKIPCounterMeasuresInvoked", ull_tkip_counter_measures_invoked, 0x80, 0x40, true, 0xeb3ea05300762228)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "DOT11_STATISTICS.ullReserved", ull_reserved, 0xc0, 0x40, true, 0xc2c0a7aff6d167f8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::dot11_mac_frame_statistics_t), "DOT11_STATISTICS.MacUcastCounters", mac_ucast_counters, 0x100, 0x80, true, 0x72e0bdc2d45a14df)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::dot11_mac_frame_statistics_t), "DOT11_STATISTICS.MacMcastCounters", mac_mcast_counters, 0x480, 0x80, true, 0xeff2a18a45cb0b1b)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct ndis::dot11_phy_frame_statistics_t, 1>), "DOT11_STATISTICS.PhyCounters", phy_counters, 0x800, 0x80, true, 0xd113e743e59cbb33)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif