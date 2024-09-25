#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_PCI_ATTRIBUTE.PortNhiNum", port_nhi_num, 0x0, 0x0, false, 0xe07aa949b24cfe9b, 3, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_PCI_ATTRIBUTE.PortExpandability", port_expandability, 0x0, 0x0, false, 0x9baa67b633b8876f, 2, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_PCI_ATTRIBUTE.HostRouterIndication", host_router_indication, 0x0, 0x0, false, 0x30920937177b9cba, 2, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_PCI_ATTRIBUTE.D3CodeWakeSupport", d3_code_wake_support, 0x0, 0x0, false, 0xc73cacbdc8404021, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_PCI_ATTRIBUTE.BusNumReservationHint", bus_num_reservation_hint, 0x0, 0x0, false, 0x15b6cf7467fcbeac, 8, uint32_t)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_PCI_ATTRIBUTE.AsULONG", as_ulong, 0x0, 0x0, false, 0x5acafe9b941628a7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif