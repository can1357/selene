#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 6>), "_DOT11_PEER_INFO.MacAddress", mac_address, 0x0, 0x30, true, 0x97122569b9f48d10)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_DOT11_PEER_INFO.usCapabilityInformation", us_capability_information, 0x30, 0x10, true, 0x31293a4b6c298ebe)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::dot11_auth_algorithm_t), "_DOT11_PEER_INFO.AuthAlgo", auth_algo, 0x40, 0x20, true, 0xfda8a4d58cc3efb5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::dot11_cipher_algorithm_t), "_DOT11_PEER_INFO.UnicastCipherAlgo", unicast_cipher_algo, 0x60, 0x20, true, 0xbb7fe29fc50cb9d6)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::dot11_cipher_algorithm_t), "_DOT11_PEER_INFO.MulticastCipherAlgo", multicast_cipher_algo, 0x80, 0x20, true, 0x6c556e4f1c301f19)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_DOT11_PEER_INFO.bWpsEnabled", b_wps_enabled, 0xa0, 0x8, true, 0x75b0922646ab51a0)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_DOT11_PEER_INFO.usListenInterval", us_listen_interval, 0xb0, 0x10, true, 0x275c07403ecb6625)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 255>), "_DOT11_PEER_INFO.ucSupportedRates", uc_supported_rates, 0xc0, 0xf8, true, 0xb282a8a99b916087)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_DOT11_PEER_INFO.usAssociationID", us_association_id, 0x8c0, 0x10, true, 0x84eae12f6fa3ea1)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::dot11_association_state_t), "_DOT11_PEER_INFO.AssociationState", association_state, 0x8e0, 0x20, true, 0x21021e2695d8c646)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::dot11_power_mode_t), "_DOT11_PEER_INFO.PowerMode", power_mode, 0x900, 0x20, true, 0x6549282e08e43854)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_DOT11_PEER_INFO.liAssociationUpTime", li_association_up_time, 0x940, 0x40, true, 0x98000948ee70a41f)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::dot11_peer_statistics_t), "_DOT11_PEER_INFO.Statistics", statistics, 0x980, 0x80, true, 0x280b28987cca1a0e)
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