#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct pci::capabilities_header_t), "_PCI_SUBSYSTEM_IDS_CAPABILITY.Header", header, 0x0, 0x10, true, 0xd54efaab9c1b2909)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_SUBSYSTEM_IDS_CAPABILITY.SubVendorID", sub_vendor_id, 0x20, 0x10, true, 0xf35f6604ed6afc9b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_SUBSYSTEM_IDS_CAPABILITY.SubSystemID", sub_system_id, 0x30, 0x10, true, 0x8f85326435cb9024)
#else
#define _m00
#define _m01
#define _m02
#endif