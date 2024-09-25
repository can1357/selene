#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EXT_IOMMU_DEVICE_ID_PCI.AsUINT64", as_uint64, 0x0, 0x40, true, 0xe7d01bd27cdec97d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EXT_IOMMU_DEVICE_ID_PCI.PciSegmentNumber", pci_segment_number, 0x0, 0x10, true, 0xc6bf5ea07baa4584)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_EXT_IOMMU_DEVICE_ID_PCI.PhantomFunctionBits", phantom_function_bits, 0x10, 0x2, true, 0x634414a17864010, 2, uint16_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_EXT_IOMMU_DEVICE_ID_PCI.StartBusNumber", start_bus_number, 0x18, 0x8, true, 0x107f356a00201803, 8, uint16_t)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EXT_IOMMU_DEVICE_ID_PCI.Bdf", bdf, 0x20, 0x10, true, 0x484c2ad71a47d264)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EXT_IOMMU_DEVICE_ID_PCI.DevicePathLength", device_path_length, 0x30, 0x10, true, 0xf281927a4fff1130)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_EXT_IOMMU_DEVICE_ID_PCI.DevicePath", device_path, 0x40, 0x40, true, 0x42fa98e46de977d7)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EXT_IOMMU_DEVICE_ID_PCI.BusRange", bus_range, 0x12, 0x1, true, 0x232a3ff5d21f91a0, 1, uint16_t)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EXT_IOMMU_DEVICE_ID_PCI.SubordinateBus", subordinate_bus, 0x20, 0x8, true, 0xe9310cb2d0b8cb9b)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EXT_IOMMU_DEVICE_ID_PCI.SecondaryBus", secondary_bus, 0x28, 0x8, true, 0x2047ae219d6174c7)
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
#endif