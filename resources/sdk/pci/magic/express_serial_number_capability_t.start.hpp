#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct pci::express_enhanced_capability_header_t), "_PCI_EXPRESS_SERIAL_NUMBER_CAPABILITY.Header", header, 0x0, 0x20, true, 0x30f6e27b7d0a637c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_EXPRESS_SERIAL_NUMBER_CAPABILITY.LowSerialNumber", low_serial_number, 0x20, 0x20, true, 0x383a1ffb838b158f)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_EXPRESS_SERIAL_NUMBER_CAPABILITY.HighSerialNumber", high_serial_number, 0x40, 0x20, true, 0x1217848fea31b309)
#else
#define _m00
#define _m01
#define _m02
#endif