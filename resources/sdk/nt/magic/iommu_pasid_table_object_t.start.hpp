#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_IOMMU_PASID_TABLE_OBJECT.ListEntry", list_entry, 0x0, 0x0, false, 0x6d03861baf342019)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IOMMU_PASID_TABLE_OBJECT.Domain", domain, 0x0, 0x0, false, 0xbc81b57ed2649136)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_IOMMU_PASID_TABLE_OBJECT.DeviceListHead", device_list_head, 0x0, 0x0, false, 0x69f61a16963e0621)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_IOMMU_PASID_TABLE_OBJECT.Table", table, 0x0, 0x0, false, 0xbb441380f451a9f5)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IOMMU_PASID_TABLE_OBJECT.PasidCount", pasid_count, 0x0, 0x0, false, 0x34bffa4bdc1ffd69)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_IOMMU_PASID_TABLE_OBJECT.OldTable", old_table, 0x0, 0x0, false, 0x33821f18957033ba)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif