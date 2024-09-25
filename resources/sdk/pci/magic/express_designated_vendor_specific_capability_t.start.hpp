#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct pci::express_enhanced_capability_header_t), "_PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_CAPABILITY.Header", header, 0x0, 0x20, true, 0x12c6bd2dfbfe95b1)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_designated_vendor_specific_header_1_t), "_PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_CAPABILITY.DvsecHeader1", dvsec_header1, 0x20, 0x20, true, 0xfafd73a11cda4e94)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_designated_vendor_specific_header_2_t), "_PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_CAPABILITY.DvsecHeader2", dvsec_header2, 0x40, 0x10, true, 0x835d5ece8e2d2036)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 1>), "_PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_CAPABILITY.DvsecRegisters", dvsec_registers, 0x50, 0x10, true, 0x1cab860b6a39f4b1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif