#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct pci::express_enhanced_capability_header_t), "_PCI_EXPRESS_PTM_CAPABILITY.Header", header, 0x0, 0x20, true, 0x7b12c0ff5389ad9d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_ptm_capability_register_t), "_PCI_EXPRESS_PTM_CAPABILITY.PtmCapability", ptm_capability, 0x20, 0x20, true, 0x5797407320753ae4)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_ptm_control_register_t), "_PCI_EXPRESS_PTM_CAPABILITY.PtmControl", ptm_control, 0x40, 0x20, true, 0x14065e4273f31dc0)
#else
#define _m00
#define _m01
#define _m02
#endif