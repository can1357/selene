#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::iommu_dma_logical_address_token_t*), "_IOMMU_DMA_LOGICAL_ADDRESS_TOKEN_MAPPED_SEGMENT.OwningToken", owning_token, 0x0, 0x0, false, 0x3eaf19363c48ccec)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_IOMMU_DMA_LOGICAL_ADDRESS_TOKEN_MAPPED_SEGMENT.Offset", offset, 0x0, 0x0, false, 0xcba78c9882d7375e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_IOMMU_DMA_LOGICAL_ADDRESS_TOKEN_MAPPED_SEGMENT.Size", size, 0x0, 0x0, false, 0x42aa3b392c4d504)
#else
#define _m00
#define _m01
#define _m02
#endif