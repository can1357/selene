#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::iommu_dma_logical_allocator_t*, uint64_t*, uint64_t, uint64_t*, uint64_t*, uint64_t*)>*), "_IOMMU_DMA_LOGICAL_ALLOCATOR_OPERATIONS_V1.AllocateLogicalAddress", allocate_logical_address, 0x0, 0x0, false, 0xe0c990b8cf0fd5ea)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::iommu_dma_logical_allocator_t*, uint64_t)>*), "_IOMMU_DMA_LOGICAL_ALLOCATOR_OPERATIONS_V1.FreeLogicalAddress", free_logical_address, 0x0, 0x0, false, 0x97f2da49996964a8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::iommu_dma_logical_allocator_t*, uint64_t, uint64_t)>*), "_IOMMU_DMA_LOGICAL_ALLOCATOR_OPERATIONS_V1.ReserveLogicalAddress", reserve_logical_address, 0x0, 0x0, false, 0x2694439ed2a46d1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<struct nt::iommu_dma_logical_allocator_capabilities_t(struct nt::iommu_dma_logical_allocator_t*)>*), "_IOMMU_DMA_LOGICAL_ALLOCATOR_OPERATIONS_V1.QueryCapabilities", query_capabilities, 0x0, 0x0, false, 0xdbda56e195690041)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct nt::iommu_dma_logical_allocator_t*)>*), "_IOMMU_DMA_LOGICAL_ALLOCATOR_OPERATIONS_V1.CleanUp", clean_up, 0x0, 0x0, false, 0x35f1241095c30d7c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif