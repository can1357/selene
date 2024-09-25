#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::segment_t*), "_PCI_SEGMENT.Next", next, 0x0, 0x40, true, 0x5c650c685b50afae)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_SEGMENT.SegmentNumber", segment_number, 0x40, 0x10, true, 0x9ce5612b01a7b543)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::bus_t*), "_PCI_SEGMENT.PciRootBusList", pci_root_bus_list, 0x80, 0x40, true, 0x1fc1c26a46a6d6d7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::bus_t*), "_PCI_SEGMENT.PciRootBusTail", pci_root_bus_tail, 0xc0, 0x40, true, 0x70f8854558391db6)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_SEGMENT.GuessedRootBusNumber", guessed_root_bus_number, 0x100, 0x8, true, 0xeacc08174e57aae5)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::bitmap_t), "_PCI_SEGMENT.BusNumberMap", bus_number_map, 0x140, 0x80, true, 0xc0d5f394fa5e8512)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 8>), "_PCI_SEGMENT.BusNumberMapBuffer", bus_number_map_buffer, 0x1c0, 0x0, true, 0xb5af448a7340d0e3)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct pci::bridge_requirements_t*, 256>), "_PCI_SEGMENT.BridgeRequirementOverride", bridge_requirement_override, 0x0, 0x0, false, 0xbe7047138ec0e7f2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif