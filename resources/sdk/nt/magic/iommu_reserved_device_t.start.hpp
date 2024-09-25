#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ext::iommu_device_id_t*), "_IOMMU_RESERVED_DEVICE.DeviceId", device_id, 0x0, 0x0, false, 0x15afde460806aeaf)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_IOMMU_RESERVED_DEVICE.PageTable", page_table, 0x0, 0x0, false, 0x22396fafe8ea88c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_IOMMU_RESERVED_DEVICE.PageTablePhysical", page_table_physical, 0x0, 0x0, false, 0xb922c25797258b94)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IOMMU_RESERVED_DEVICE.RegionCount", region_count, 0x0, 0x0, false, 0xfe166c4633799ab4)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct ext::iommu_reserved_memory_region_t, 1>), "_IOMMU_RESERVED_DEVICE.Regions", regions, 0x0, 0x0, false, 0x953ab85951853cf3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif