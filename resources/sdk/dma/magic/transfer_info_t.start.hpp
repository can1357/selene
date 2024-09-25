#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DMA_TRANSFER_INFO.Version", version, 0x0, 0x20, true, 0xfc36dbed7992abe0)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dma::transfer_info_v1_t), "_DMA_TRANSFER_INFO.V1", v1, 0x20, 0x60, true, 0x1cf20d565bb11097)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dma::transfer_info_v2_t), "_DMA_TRANSFER_INFO.V2", v2, 0x20, 0x80, true, 0x779f5102fd016bdb)
#else
#define _m00
#define _m01
#define _m02
#endif