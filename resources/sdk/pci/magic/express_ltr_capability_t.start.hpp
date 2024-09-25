#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct pci::express_enhanced_capability_header_t), "_PCI_EXPRESS_LTR_CAPABILITY.Header", header, 0x0, 0x20, true, 0x355c8eb217370004)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_ltr_max_latency_register_t), "_PCI_EXPRESS_LTR_CAPABILITY.Latency", latency, 0x20, 0x20, true, 0xfd578bd73542ea73)
#else
#define _m00
#define _m01
#endif