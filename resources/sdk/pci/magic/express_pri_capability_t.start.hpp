#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct pci::express_enhanced_capability_header_t), "_PCI_EXPRESS_PRI_CAPABILITY.Header", header, 0x0, 0x20, true, 0x4d5137ad2d6cd64a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_pri_control_register_t), "_PCI_EXPRESS_PRI_CAPABILITY.Control", control, 0x20, 0x10, true, 0x7a716c00b8c5f889)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_pri_status_register_t), "_PCI_EXPRESS_PRI_CAPABILITY.Status", status, 0x30, 0x10, true, 0xe7ffb47e5dd4e237)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_EXPRESS_PRI_CAPABILITY.PRCapacity", pr_capacity, 0x40, 0x20, true, 0x459cfa60216714ed)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_EXPRESS_PRI_CAPABILITY.PRAllocation", pr_allocation, 0x60, 0x20, true, 0xc8e0813e3fac9a91)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif