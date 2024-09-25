#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_HEADER_TYPE_2.SocketRegistersBaseAddress", socket_registers_base_address, 0x0, 0x20, true, 0x89dd3d83d66580c1)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_HEADER_TYPE_2.CapabilitiesPtr", capabilities_ptr, 0x20, 0x8, true, 0xe2fad1c821f35172)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_HEADER_TYPE_2.SecondaryStatus", secondary_status, 0x30, 0x10, true, 0x4c31ebfcca327e64)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_HEADER_TYPE_2.PrimaryBus", primary_bus, 0x40, 0x8, true, 0xf5688644535e5f20)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_HEADER_TYPE_2.SecondaryBus", secondary_bus, 0x48, 0x8, true, 0x9d69874391bf4251)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_HEADER_TYPE_2.SubordinateBus", subordinate_bus, 0x50, 0x8, true, 0x578483416e7389bc)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_HEADER_TYPE_2.SecondaryLatency", secondary_latency, 0x58, 0x8, true, 0x97aa789fd2c9142d)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_HEADER_TYPE_2.Range.Base", base, 0x0, 0x20, true, 0xa6193e1d6053c722)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_HEADER_TYPE_2.Range.Limit", limit, 0x20, 0x20, true, 0xd9c491e416689699)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<u0_range_t, 4>), "_PCI_HEADER_TYPE_2.Range", range, 0x60, 0x0, true, 0xee154f5c9229f30a)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_HEADER_TYPE_2.InterruptLine", interrupt_line, 0x160, 0x8, true, 0x7c3d22843adc55a5)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_HEADER_TYPE_2.InterruptPin", interrupt_pin, 0x168, 0x8, true, 0xa86a9d3426b9d5f2)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_HEADER_TYPE_2.BridgeControl", bridge_control, 0x170, 0x10, true, 0x28e351c7688da7fc)
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