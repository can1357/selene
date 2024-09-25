#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IOMMU_RESERVED_DEVICE_LIST.Count", count, 0x0, 0x0, false, 0xa1244a48ec6522b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::iommu_reserved_device_t*, 1>), "_IOMMU_RESERVED_DEVICE_LIST.Devices", devices, 0x0, 0x0, false, 0xd5d546e20478d4ee)
#else
#define _m00
#define _m01
#endif