#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_DEBUG_IOMMU_EFI_DATA.PciIoProtocolHandle", pci_io_protocol_handle, 0x0, 0x0, false, 0xf4d8a226bcb3f720)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_DEBUG_IOMMU_EFI_DATA.Mapping", mapping, 0x0, 0x0, false, 0xa8dca12d0fe1087e)
#else
#define _m00
#define _m01
#endif