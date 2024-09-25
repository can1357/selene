#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct pci::express_enhanced_capability_header_t), "_PCI_EXPRESS_ATS_CAPABILITY.Header", header, 0x0, 0x20, true, 0x571efd3bde8b2825)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct pci::express_ats_capability_register_t), "_PCI_EXPRESS_ATS_CAPABILITY.Capability", capability, 0x20, 0x10, true, 0x314341dabe71836f)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct pci::express_ats_control_register_t), "_PCI_EXPRESS_ATS_CAPABILITY.Control", control, 0x30, 0x10, true, 0xb5e8fa237753404a)
#else
#define _m00
#define _m01
#define _m02
#endif