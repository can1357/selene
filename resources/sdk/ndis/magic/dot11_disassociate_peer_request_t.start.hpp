#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_DOT11_DISASSOCIATE_PEER_REQUEST.Header", header, 0x0, 0x20, true, 0x8eae1e4912173228)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 6>), "_DOT11_DISASSOCIATE_PEER_REQUEST.PeerMacAddr", peer_mac_addr, 0x20, 0x30, true, 0x9186d14fa645ea42)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_DOT11_DISASSOCIATE_PEER_REQUEST.usReason", us_reason, 0x50, 0x10, true, 0xf8a5752691b38a1b)
#else
#define _m00
#define _m01
#define _m02
#endif