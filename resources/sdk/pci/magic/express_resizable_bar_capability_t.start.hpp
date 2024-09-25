#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct pci::express_enhanced_capability_header_t), "_PCI_EXPRESS_RESIZABLE_BAR_CAPABILITY.Header", header, 0x0, 0x20, true, 0x44e45edbe93f92fc)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct pci::express_resizable_bar_entry_t, 6>), "_PCI_EXPRESS_RESIZABLE_BAR_CAPABILITY.Entry", entry, 0x20, 0x80, true, 0x34d0ac52349b2855)
#else
#define _m00
#define _m01
#endif