#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::express_enhanced_capability_header_t), "_PCI_EXPRESS_EVENT_COLLECTOR_ENDPOINT_ASSOCIATION_CAPABILITY.Header", header, 0x0, 0x0, false, 0xac4f98b22b9fd6a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_EXPRESS_EVENT_COLLECTOR_ENDPOINT_ASSOCIATION_CAPABILITY.AssociationBitmap", association_bitmap, 0x0, 0x0, false, 0x6115ac4ae747c957)
#else
#define _m00
#define _m01
#endif