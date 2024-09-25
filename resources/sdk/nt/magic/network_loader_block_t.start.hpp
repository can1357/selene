#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_NETWORK_LOADER_BLOCK.DHCPServerACK", dhcp_server_ack, 0x0, 0x40, true, 0x6fa1665eb4aecf46)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NETWORK_LOADER_BLOCK.DHCPServerACKLength", dhcp_server_ack_length, 0x40, 0x20, true, 0x3b56cacfd81f63ac)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_NETWORK_LOADER_BLOCK.BootServerReplyPacket", boot_server_reply_packet, 0x80, 0x40, true, 0x89d7d7a79a95e951)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NETWORK_LOADER_BLOCK.BootServerReplyPacketLength", boot_server_reply_packet_length, 0xc0, 0x20, true, 0x34b0678e66b44c64)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif