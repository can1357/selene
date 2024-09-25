#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DMA_ADAPTER.Version", version, 0x0, 0x10, true, 0x13354850bf2b7157)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DMA_ADAPTER.Size", size, 0x10, 0x10, true, 0x66b1b25b7548808a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dma::operations_t*), "_DMA_ADAPTER.DmaOperations", dma_operations, 0x40, 0x40, true, 0x7ccce6c2b2f7b1ed)
#else
#define _m00
#define _m01
#define _m02
#endif