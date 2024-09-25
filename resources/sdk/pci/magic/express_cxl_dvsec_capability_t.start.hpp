#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::express_enhanced_capability_header_t), "_PCI_EXPRESS_CXL_DVSEC_CAPABILITY.Header", header, 0x0, 0x0, false, 0x29a1c4bb75faa7d6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union pci::express_designated_vendor_specific_header_1_t), "_PCI_EXPRESS_CXL_DVSEC_CAPABILITY.DvsecHeader1", dvsec_header1, 0x0, 0x0, false, 0x40144f91662febdd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union pci::express_designated_vendor_specific_header_2_t), "_PCI_EXPRESS_CXL_DVSEC_CAPABILITY.DvsecHeader2", dvsec_header2, 0x0, 0x0, false, 0xfd44c78b11c2664f)
#else
#define _m00
#define _m01
#define _m02
#endif