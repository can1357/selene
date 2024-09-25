#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_resizable_bar_capability_register_t), "_PCI_EXPRESS_RESIZABLE_BAR_ENTRY.Capability", capability, 0x0, 0x20, true, 0x584cc1a475b1738a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_resizable_bar_control_register_t), "_PCI_EXPRESS_RESIZABLE_BAR_ENTRY.Control", control, 0x20, 0x20, true, 0xfc4fdbced3e0b487)
#else
#define _m00
#define _m01
#endif