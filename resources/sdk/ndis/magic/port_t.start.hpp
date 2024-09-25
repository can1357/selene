#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::port_t*), "_NDIS_PORT.Next", next, 0x0, 0x40, true, 0x22b16ce5082c87bc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_PORT.NdisReserved", ndis_reserved, 0x40, 0x40, true, 0xe06a201ea35c0c29)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_PORT.MiniportReserved", miniport_reserved, 0x80, 0x40, true, 0xd1b65076fa82fd6d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_PORT.ProtocolReserved", protocol_reserved, 0xc0, 0x40, true, 0xe56acd6be33f947c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::port_characteristics_t), "_NDIS_PORT.PortCharacteristics", port_characteristics, 0x100, 0x0, true, 0x8e60a0d32a221510)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif