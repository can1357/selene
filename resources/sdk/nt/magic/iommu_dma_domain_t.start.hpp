#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct halp::dma_domain_object_t*), "_IOMMU_DMA_DOMAIN.DmaDomainOwner", dma_domain_owner, 0x0, 0x0, false, 0x662c3139445f119e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::iommu_dma_domain_type_t), "_IOMMU_DMA_DOMAIN.DomainType", domain_type, 0x0, 0x0, false, 0x777573874171f75c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ext::iommu_translation_type_t), "_IOMMU_DMA_DOMAIN.TranslationType", translation_type, 0x0, 0x0, false, 0xf623f3a2b8a3975b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_IOMMU_DMA_DOMAIN.HardwareDomainListHead", hardware_domain_list_head, 0x0, 0x0, false, 0x6c5dde4173e1eddc)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_IOMMU_DMA_DOMAIN.HardwareDomainListLock", hardware_domain_list_lock, 0x0, 0x0, false, 0x1169e79f900cae15)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dmar::page_table_state_t*), "_IOMMU_DMA_DOMAIN.DmarptState", dmarpt_state, 0x0, 0x0, false, 0x3df123c528c793d3)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IOMMU_DMA_DOMAIN.DomainId", domain_id, 0x0, 0x0, false, 0xb5aa5d8af2386acc)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_IOMMU_DMA_DOMAIN.IsStage1", is_stage1, 0x0, 0x0, false, 0xda165306b553f5c2)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IOMMU_DMA_DOMAIN.Asid", asid, 0x0, 0x0, false, 0xb20cd015424680f6)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::iommu_dma_logical_allocator_t*), "_IOMMU_DMA_DOMAIN.LogicalAllocator", logical_allocator, 0x0, 0x0, false, 0xef885e124e60b42d)
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