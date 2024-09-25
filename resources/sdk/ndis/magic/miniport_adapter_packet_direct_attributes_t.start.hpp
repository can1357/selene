#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_MINIPORT_ADAPTER_PACKET_DIRECT_ATTRIBUTES.Header", header, 0x0, 0x20, true, 0xd2532e34e2f8a0e4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_ADAPTER_PACKET_DIRECT_ATTRIBUTES.Flags", flags, 0x20, 0x20, true, 0xdf18e2713e69cf21)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_MINIPORT_ADAPTER_PACKET_DIRECT_ATTRIBUTES.DmaAddressWidth", dma_address_width, 0x40, 0x8, true, 0x8233e0340c5b7074)
#else
#define _m00
#define _m01
#define _m02
#endif