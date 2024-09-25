#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_WAN_PACKET.WanPacketQueue", wan_packet_queue, 0x0, 0x80, true, 0x3ae3d11acfbd5e6e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_NDIS_WAN_PACKET.CurrentBuffer", current_buffer, 0x80, 0x40, true, 0xea6843409ce99d02)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_PACKET.CurrentLength", current_length, 0xc0, 0x20, true, 0x18fee0b5a51f018c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_NDIS_WAN_PACKET.StartBuffer", start_buffer, 0x100, 0x40, true, 0xf3878b8556dd73d8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_NDIS_WAN_PACKET.EndBuffer", end_buffer, 0x140, 0x40, true, 0xcf4025b88f7ea99c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_WAN_PACKET.ProtocolReserved1", protocol_reserved1, 0x180, 0x40, true, 0x758b9344c7237b4)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_WAN_PACKET.ProtocolReserved2", protocol_reserved2, 0x1c0, 0x40, true, 0x17dc94589f526eb8)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_WAN_PACKET.ProtocolReserved3", protocol_reserved3, 0x200, 0x40, true, 0xd32cb2d5dc196be0)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_WAN_PACKET.ProtocolReserved4", protocol_reserved4, 0x240, 0x40, true, 0x41ab3ed0a53ccae7)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_WAN_PACKET.MacReserved1", mac_reserved1, 0x280, 0x40, true, 0x8faa80b4917b7764)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_WAN_PACKET.MacReserved2", mac_reserved2, 0x2c0, 0x40, true, 0xbb21de4ad9b85cf5)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_WAN_PACKET.MacReserved3", mac_reserved3, 0x300, 0x40, true, 0x7b8e78f1e6e86ae5)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_WAN_PACKET.MacReserved4", mac_reserved4, 0x340, 0x40, true, 0x8e8dc1cc7f5b787c)
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