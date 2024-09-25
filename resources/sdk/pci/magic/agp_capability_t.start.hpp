#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct pci::capabilities_header_t), "_PCI_AGP_CAPABILITY.Header", header, 0x0, 0x10, true, 0x132f557543f1860d)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_PCI_AGP_CAPABILITY.Minor", minor, 0x10, 0x4, true, 0x89e68f3ffd803c41, 4, uint16_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_PCI_AGP_CAPABILITY.Major", major, 0x14, 0x4, true, 0x1284a8ac69087805, 4, uint16_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_PCI_AGP_CAPABILITY.Rsvd1", rsvd1, 0x18, 0x8, true, 0xde91a9dd34afb6f, 8, uint16_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct pci::agp_status_t), "_PCI_AGP_CAPABILITY.AGPStatus", agp_status, 0x20, 0x20, true, 0xc11adeb91249b848)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct pci::agp_command_t), "_PCI_AGP_CAPABILITY.AGPCommand", agp_command, 0x40, 0x20, true, 0x8323fd6861c647b1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif