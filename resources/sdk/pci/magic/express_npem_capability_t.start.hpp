#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct pci::express_enhanced_capability_header_t), "_PCI_EXPRESS_NPEM_CAPABILITY.Header", header, 0x0, 0x20, true, 0x5c71688ec3869b1c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_npem_capability_register_t), "_PCI_EXPRESS_NPEM_CAPABILITY.Capability", capability, 0x20, 0x20, true, 0x23db4ba5337c0103)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_npem_control_register_t), "_PCI_EXPRESS_NPEM_CAPABILITY.Control", control, 0x40, 0x20, true, 0xea7530a73590252c)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_npem_status_register_t), "_PCI_EXPRESS_NPEM_CAPABILITY.Status", status, 0x60, 0x20, true, 0xfdbbc4a4c48b9a5a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif