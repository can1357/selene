#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_PORT_ARRAY.Header", header, 0x0, 0x20, true, 0xc9cb0e40f5abf002)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PORT_ARRAY.NumberOfPorts", number_of_ports, 0x20, 0x20, true, 0x6920fb4415346cc6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PORT_ARRAY.OffsetFirstPort", offset_first_port, 0x40, 0x20, true, 0xd2c7b6feeee8faec)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PORT_ARRAY.ElementSize", element_size, 0x60, 0x20, true, 0x9e3efbf8804d8dcb)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct ndis::port_characteristics_t, 1>), "_NDIS_PORT_ARRAY.Ports", ports, 0x80, 0x0, true, 0x673841cdc5d1c908)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif