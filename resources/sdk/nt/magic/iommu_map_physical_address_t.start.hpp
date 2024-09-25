#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::iommu_map_physical_address_type_t), "_IOMMU_MAP_PHYSICAL_ADDRESS.MapType", map_type, 0x0, 0x0, false, 0x4e828e835bea105e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_IOMMU_MAP_PHYSICAL_ADDRESS.Mdl.Mdl", mdl, 0x0, 0x0, false, 0x6f360d20e881cd00)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_mdl_t), "_IOMMU_MAP_PHYSICAL_ADDRESS.Mdl", mdl, 0x0, 0x0, false, 0xc5858d215c092b78)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_IOMMU_MAP_PHYSICAL_ADDRESS.ContiguousRange.Base", base, 0x0, 0x0, false, 0xbb51d758a0bd9eb4)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_IOMMU_MAP_PHYSICAL_ADDRESS.ContiguousRange.Size", size, 0x0, 0x0, false, 0x14d646f2085c4194)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_contiguous_range_t), "_IOMMU_MAP_PHYSICAL_ADDRESS.ContiguousRange", contiguous_range, 0x0, 0x0, false, 0xf6c76e07a0c66547)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t*), "_IOMMU_MAP_PHYSICAL_ADDRESS.PfnArray.PageFrame", page_frame, 0x0, 0x0, false, 0x16894339f982bf47)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_IOMMU_MAP_PHYSICAL_ADDRESS.PfnArray.NumberOfPages", number_of_pages, 0x0, 0x0, false, 0x67caedb74fdc71ce)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_pfn_array_t), "_IOMMU_MAP_PHYSICAL_ADDRESS.PfnArray", pfn_array, 0x0, 0x0, false, 0xf76f377d0ad63fa4)
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
#endif