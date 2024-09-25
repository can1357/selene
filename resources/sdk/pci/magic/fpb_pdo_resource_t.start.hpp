#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::fpb_resource_descriptor_t), "_PCI_FPB_PDO_RESOURCE.BusNumbersDecoding", bus_numbers_decoding, 0x0, 0xc0, true, 0xb43c39de0bd79c92)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::fpb_resource_descriptor_t), "_PCI_FPB_PDO_RESOURCE.MemoryLowDecoding", memory_low_decoding, 0x1c0, 0xc0, true, 0x3f757bd4b78776c2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::fpb_resource_descriptor_t), "_PCI_FPB_PDO_RESOURCE.MemoryHighDecoding", memory_high_decoding, 0x380, 0xc0, true, 0xba2e72c99baa9ce2)
#else
#define _m00
#define _m01
#define _m02
#endif