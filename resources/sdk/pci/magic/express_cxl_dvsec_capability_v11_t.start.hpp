#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::express_enhanced_capability_header_t), "_PCI_EXPRESS_CXL_DVSEC_CAPABILITY_V11.Header", header, 0x0, 0x0, false, 0xabafb89fea7af21d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union pci::express_designated_vendor_specific_header_1_t), "_PCI_EXPRESS_CXL_DVSEC_CAPABILITY_V11.DvsecHeader1", dvsec_header1, 0x0, 0x0, false, 0x210bdc8d938fcee)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union pci::express_designated_vendor_specific_header_2_t), "_PCI_EXPRESS_CXL_DVSEC_CAPABILITY_V11.DvsecHeader2", dvsec_header2, 0x0, 0x0, false, 0x98d2522923bff10f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pci_express_cxl_dvsec_capability_register_v11_t ), "_PCI_EXPRESS_CXL_DVSEC_CAPABILITY_V11.Capability", capability, 0x0, 0x0, false, 0x418e3fdff0865059)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union pci::express_cxl_dvsec_control_register_t), "_PCI_EXPRESS_CXL_DVSEC_CAPABILITY_V11.Control", control, 0x0, 0x0, false, 0x7c4b13eb174008a5)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union pci::express_cxl_dvsec_status_register_t), "_PCI_EXPRESS_CXL_DVSEC_CAPABILITY_V11.Status", status, 0x0, 0x0, false, 0x788608cc128055a3)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_EXPRESS_CXL_DVSEC_CAPABILITY_V11.Control2", control2, 0x0, 0x0, false, 0x2ea786cea100d9f5)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_EXPRESS_CXL_DVSEC_CAPABILITY_V11.Status2", status2, 0x0, 0x0, false, 0xee7644c76f772efe)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union pci::express_cxl_dvsec_lock_register_t), "_PCI_EXPRESS_CXL_DVSEC_CAPABILITY_V11.Lock", lock, 0x0, 0x0, false, 0xa8a7184af5660dd9)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pci_express_cxl_dvsec_range_size_high_register_t ), "_PCI_EXPRESS_CXL_DVSEC_CAPABILITY_V11.Range1SizeHigh", range1_size_high, 0x0, 0x0, false, 0xd17ca8ed2b29947f)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pci_express_cxl_dvsec_range_size_low_register_v11_t ), "_PCI_EXPRESS_CXL_DVSEC_CAPABILITY_V11.Range1SizeLow", range1_size_low, 0x0, 0x0, false, 0xa6c0631872ab2561)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pci_express_cxl_dvsec_range_base_high_register_t ), "_PCI_EXPRESS_CXL_DVSEC_CAPABILITY_V11.Range1BaseHigh", range1_base_high, 0x0, 0x0, false, 0x972aa02f303112a8)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pci_express_cxl_dvsec_range_base_low_register_t ), "_PCI_EXPRESS_CXL_DVSEC_CAPABILITY_V11.Range1BaseLow", range1_base_low, 0x0, 0x0, false, 0x17a2a8f8a1606ce6)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pci_express_cxl_dvsec_range_size_high_register_t ), "_PCI_EXPRESS_CXL_DVSEC_CAPABILITY_V11.Range2SizeHigh", range2_size_high, 0x0, 0x0, false, 0x55450cea7a12f3a1)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pci_express_cxl_dvsec_range_size_low_register_v11_t ), "_PCI_EXPRESS_CXL_DVSEC_CAPABILITY_V11.Range2SizeLow", range2_size_low, 0x0, 0x0, false, 0x2a28a5ab8e53e240)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pci_express_cxl_dvsec_range_base_high_register_t ), "_PCI_EXPRESS_CXL_DVSEC_CAPABILITY_V11.Range2BaseHigh", range2_base_high, 0x0, 0x0, false, 0x57804c6d2ce0f8b2)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pci_express_cxl_dvsec_range_base_low_register_t ), "_PCI_EXPRESS_CXL_DVSEC_CAPABILITY_V11.Range2BaseLow", range2_base_low, 0x0, 0x0, false, 0x585be28347ed14f5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#endif