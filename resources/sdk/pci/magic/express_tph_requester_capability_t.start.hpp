#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct pci::express_enhanced_capability_header_t), "_PCI_EXPRESS_TPH_REQUESTER_CAPABILITY.Header", header, 0x0, 0x20, true, 0xfb7c9d7e9d146fcc)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_tph_requester_capability_register_t), "_PCI_EXPRESS_TPH_REQUESTER_CAPABILITY.RequesterCapability", requester_capability, 0x20, 0x20, true, 0xae377a058099a850)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_tph_requester_control_register_t), "_PCI_EXPRESS_TPH_REQUESTER_CAPABILITY.RequesterControl", requester_control, 0x40, 0x20, true, 0x7e942d8eb0cfe086)
#else
#define _m00
#define _m01
#define _m02
#endif