#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct pci::express_enhanced_capability_header_t), "_PCI_EXPRESS_ARI_CAPABILITY.Header", header, 0x0, 0x20, true, 0x454b829793e52625)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct pci::express_ari_capability_register_t), "_PCI_EXPRESS_ARI_CAPABILITY.Capability", capability, 0x20, 0x10, true, 0x36c23414939589c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct pci::express_ari_control_register_t), "_PCI_EXPRESS_ARI_CAPABILITY.Control", control, 0x30, 0x10, true, 0x36510df3f35c2630)
#else
#define _m00
#define _m01
#define _m02
#endif