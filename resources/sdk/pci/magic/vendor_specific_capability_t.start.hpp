#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::capabilities_header_t), "_PCI_VENDOR_SPECIFIC_CAPABILITY.Header", header, 0x0, 0x0, false, 0x1002b78823f58aa7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_VENDOR_SPECIFIC_CAPABILITY.VscLength", vsc_length, 0x0, 0x0, false, 0x35eb7d47b2ee7f22)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_VENDOR_SPECIFIC_CAPABILITY.VendorSpecific", vendor_specific, 0x0, 0x0, false, 0x7a36a6c76825aa90)
#else
#define _m00
#define _m01
#define _m02
#endif