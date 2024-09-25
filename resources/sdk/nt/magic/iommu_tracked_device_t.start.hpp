#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_IOMMU_TRACKED_DEVICE.ListEntry", list_entry, 0x0, 0x0, false, 0xf4195bccd370d0e8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_IOMMU_TRACKED_DEVICE.Lock", lock, 0x0, 0x0, false, 0x5cf2e4812bf17ab7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_IOMMU_TRACKED_DEVICE.Iommu", iommu, 0x0, 0x0, false, 0xab5184a195e750d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IOMMU_TRACKED_DEVICE.IommuCapabilities", iommu_capabilities, 0x0, 0x0, false, 0x5f5888bfed91a860)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IOMMU_TRACKED_DEVICE.ReferenceCount", reference_count, 0x0, 0x0, false, 0xd6e010e71c1c6b4f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_IOMMU_TRACKED_DEVICE.SourceId", source_id, 0x0, 0x0, false, 0x179b155325d4b3f9)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::iommu_svm_capabilities_t), "_IOMMU_TRACKED_DEVICE.Capabilities", capabilities, 0x0, 0x0, false, 0x5e054a482be64bbe)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IOMMU_TRACKED_DEVICE.Flags", flags, 0x0, 0x0, false, 0x71f33654327642b9)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::iommu_pasid_table_object_t*), "_IOMMU_TRACKED_DEVICE.CurrentPasidTable", current_pasid_table, 0x0, 0x0, false, 0xa513d9d57d31b1e0)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_IOMMU_TRACKED_DEVICE.PasidTableDeviceList", pasid_table_device_list, 0x0, 0x0, false, 0xd1376b657b2c1fcd)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_IOMMU_TRACKED_DEVICE.ActiveDeviceListHead", active_device_list_head, 0x0, 0x0, false, 0xf3f24069f1aeb8a1)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::iommu_dma_device_t*), "_IOMMU_TRACKED_DEVICE.DmaDevice", dma_device, 0x0, 0x0, false, 0x446fd3d182815d14)
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
#endif