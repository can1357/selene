#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct pci::express_enhanced_capability_header_t), "_PCI_EXPRESS_PASID_CAPABILITY.Header", header, 0x0, 0x20, true, 0xd350ea434effb124)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_pasid_capability_register_t), "_PCI_EXPRESS_PASID_CAPABILITY.Capability", capability, 0x20, 0x10, true, 0xfa696735879f91e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_pasid_control_register_t), "_PCI_EXPRESS_PASID_CAPABILITY.Control", control, 0x30, 0x10, true, 0x968b43235f35be0d)
#else
#define _m00
#define _m01
#define _m02
#endif