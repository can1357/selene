#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::iommu_dma_logical_allocator_type_t), "_IOMMU_DMA_LOGICAL_ALLOCATOR_CONFIG.LogicalAllocatorType", logical_allocator_type, 0x0, 0x0, false, 0x26c90bab371577db)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IOMMU_DMA_LOGICAL_ALLOCATOR_CONFIG.BuddyAllocatorConfig.AddressWidth", address_width, 0x0, 0x0, false, 0x3935a75537c0ba4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_buddy_allocator_config_t), "_IOMMU_DMA_LOGICAL_ALLOCATOR_CONFIG.BuddyAllocatorConfig", buddy_allocator_config, 0x0, 0x0, false, 0x604029c27cc50d6d)
#else
#define _m00
#define _m01
#define _m02
#endif