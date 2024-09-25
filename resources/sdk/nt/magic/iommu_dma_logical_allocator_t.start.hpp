#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::iommu_dma_logical_allocator_operations_v1_t*), "_IOMMU_DMA_LOGICAL_ALLOCATOR.Operations", operations, 0x0, 0x0, false, 0xb46520dc9ffae865)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IOMMU_DMA_LOGICAL_ALLOCATOR.Version", version, 0x0, 0x0, false, 0x4af3ffc955c4c3a2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IOMMU_DMA_LOGICAL_ALLOCATOR.Size", size, 0x0, 0x0, false, 0x4c4973a70c974dbb)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::iommu_dma_logical_allocator_type_t), "_IOMMU_DMA_LOGICAL_ALLOCATOR.AllocatorType", allocator_type, 0x0, 0x0, false, 0x64b494655a409e15)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif