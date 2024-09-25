#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::iommu_dma_reserved_region_t*), "_IOMMU_DMA_RESERVED_REGION.RegionNext", region_next, 0x0, 0x0, false, 0xd8cc6b91f2689bf2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_IOMMU_DMA_RESERVED_REGION.Base", base, 0x0, 0x0, false, 0xf54a38dabbe47d3c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_IOMMU_DMA_RESERVED_REGION.NumberOfPages", number_of_pages, 0x0, 0x0, false, 0x8f44ffd69fa8b380)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_IOMMU_DMA_RESERVED_REGION.ShouldMap", should_map, 0x0, 0x0, false, 0x424b639e68e3e797)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif