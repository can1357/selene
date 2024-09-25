#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_DOT11_PEER_INFO_LIST.Header", header, 0x0, 0x20, true, 0x71b6439de3a0d2d8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DOT11_PEER_INFO_LIST.uNumOfEntries", u_num_of_entries, 0x20, 0x20, true, 0x5c13551797b0b0cc)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DOT11_PEER_INFO_LIST.uTotalNumOfEntries", u_total_num_of_entries, 0x40, 0x20, true, 0x27a1c3a6ab582cf5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct ndis::dot11_peer_info_t, 1>), "_DOT11_PEER_INFO_LIST.PeerInfo", peer_info, 0x80, 0x0, true, 0x5d882813fa5055d6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif