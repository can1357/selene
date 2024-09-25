#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct pci::capabilities_header_t), "_PCI_FPB_CAPABILITY_HEADER.Header", header, 0x0, 0x10, true, 0xa40391dc0cd1f909)
#else
#define _m00
#endif