#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "DOT11_PORT_STATE_NOTIFICATION.Header", header, 0x0, 0x20, true, 0xb1cef17a4760d15a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 6>), "DOT11_PORT_STATE_NOTIFICATION.PeerMac", peer_mac, 0x20, 0x30, true, 0xdf864b1966112fd5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "DOT11_PORT_STATE_NOTIFICATION.bOpen", b_open, 0x50, 0x8, true, 0x8c1a74c58dbefafa)
#else
#define _m00
#define _m01
#define _m02
#endif