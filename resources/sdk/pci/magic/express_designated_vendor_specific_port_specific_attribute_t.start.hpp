#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union pci::express_designated_vendor_specific_nhi_attribute_t), "_PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_PORT_SPECIFIC_ATTRIBUTE.NhiAttribute", nhi_attribute, 0x0, 0x0, false, 0x66be76ba328bdf4b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union pci::express_designated_vendor_specific_pci_attribute_t), "_PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_PORT_SPECIFIC_ATTRIBUTE.PciAttribute", pci_attribute, 0x0, 0x0, false, 0xdcdeffb20488847b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union pci::express_designated_vendor_specific_usb_attribute_t), "_PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_PORT_SPECIFIC_ATTRIBUTE.UsbAttribute", usb_attribute, 0x0, 0x0, false, 0x917b8b165e43ec2)
#else
#define _m00
#define _m01
#define _m02
#endif