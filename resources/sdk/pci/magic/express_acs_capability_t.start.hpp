#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct pci::express_enhanced_capability_header_t), "_PCI_EXPRESS_ACS_CAPABILITY.Header", header, 0x0, 0x20, true, 0xb9c363fdc9371d32)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_acs_capability_register_t), "_PCI_EXPRESS_ACS_CAPABILITY.Capability", capability, 0x20, 0x10, true, 0xed1f2662d907a780)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_acs_control_t), "_PCI_EXPRESS_ACS_CAPABILITY.Control", control, 0x30, 0x10, true, 0x382275d41ba4e1d8)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 1>), "_PCI_EXPRESS_ACS_CAPABILITY.EgressControl", egress_control, 0x40, 0x20, true, 0x8b6c46c65e76c90a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif