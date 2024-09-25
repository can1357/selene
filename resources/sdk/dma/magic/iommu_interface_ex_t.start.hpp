#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DMA_IOMMU_INTERFACE_EX.Size", size, 0x0, 0x0, false, 0x25875f80a75f8394)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DMA_IOMMU_INTERFACE_EX.Version", version, 0x0, 0x0, false, 0x99e490bb20ffdd9b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dma::iommu_interface_v1_t), "_DMA_IOMMU_INTERFACE_EX.V1", v1, 0x0, 0x0, false, 0x736d53133dcefdaf)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dma::iommu_interface_v2_t), "_DMA_IOMMU_INTERFACE_EX.V2", v2, 0x0, 0x0, false, 0xe3d4a3fd6eb6156b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif