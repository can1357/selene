#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 6>), "_DOT11_ASSOCIATION_INFO_EX.PeerMacAddress", peer_mac_address, 0x0, 0x30, true, 0x8e7f6504b51ad4c0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 6>), "_DOT11_ASSOCIATION_INFO_EX.BSSID", bssid, 0x30, 0x30, true, 0x867bbc3d717db57b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_DOT11_ASSOCIATION_INFO_EX.usCapabilityInformation", us_capability_information, 0x60, 0x10, true, 0xb0311c206814a620)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_DOT11_ASSOCIATION_INFO_EX.usListenInterval", us_listen_interval, 0x70, 0x10, true, 0xbc440434272f8cb5)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 255>), "_DOT11_ASSOCIATION_INFO_EX.ucPeerSupportedRates", uc_peer_supported_rates, 0x80, 0xf8, true, 0xeaa05ca5d20e6375)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_DOT11_ASSOCIATION_INFO_EX.usAssociationID", us_association_id, 0x880, 0x10, true, 0x17c0be32c914c87a)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::dot11_association_state_t), "_DOT11_ASSOCIATION_INFO_EX.dot11AssociationState", dot11_association_state, 0x8a0, 0x20, true, 0xc34de943bbfa88ae)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::dot11_power_mode_t), "_DOT11_ASSOCIATION_INFO_EX.dot11PowerMode", dot11_power_mode, 0x8c0, 0x20, true, 0xa17f30ca19474102)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_DOT11_ASSOCIATION_INFO_EX.liAssociationUpTime", li_association_up_time, 0x900, 0x40, true, 0x15da35d3c542b5e2)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DOT11_ASSOCIATION_INFO_EX.ullNumOfTxPacketSuccesses", ull_num_of_tx_packet_successes, 0x940, 0x40, true, 0xad3439315f5955c1)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DOT11_ASSOCIATION_INFO_EX.ullNumOfTxPacketFailures", ull_num_of_tx_packet_failures, 0x980, 0x40, true, 0xf1afe979c34cea3f)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DOT11_ASSOCIATION_INFO_EX.ullNumOfRxPacketSuccesses", ull_num_of_rx_packet_successes, 0x9c0, 0x40, true, 0xd045bf6ad5e9bb62)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DOT11_ASSOCIATION_INFO_EX.ullNumOfRxPacketFailures", ull_num_of_rx_packet_failures, 0xa00, 0x40, true, 0x1e957c7dd93828a3)
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
#endif