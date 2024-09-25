#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::packet_private_t), "_NDIS_PACKET.Private", _private, 0x0, 0x80, true, 0xbced76309a18232f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_NDIS_PACKET.MiniportReserved", miniport_reserved, 0x180, 0x80, true, 0x6864957de694e2a4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_NDIS_PACKET.WrapperReserved", wrapper_reserved, 0x200, 0x80, true, 0x88d28a9eb4d039e0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 24>), "_NDIS_PACKET.MiniportReservedEx", miniport_reserved_ex, 0x180, 0xc0, true, 0xa8d10bf73ee4c35)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_NDIS_PACKET.WrapperReservedEx", wrapper_reserved_ex, 0x240, 0x40, true, 0x74ceac3139836038)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 32>), "_NDIS_PACKET.MacReserved", mac_reserved, 0x180, 0x0, true, 0x543da9ef862e20c)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_NDIS_PACKET.ProtocolReserved", protocol_reserved, 0x300, 0x8, true, 0x3d8ac88f0eee4c9a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif