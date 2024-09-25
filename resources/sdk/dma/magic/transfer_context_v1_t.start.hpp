#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_DMA_TRANSFER_CONTEXT_V1.DmaState", dma_state, 0x0, 0x20, true, 0x2755e5edbfffe313)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DMA_TRANSFER_CONTEXT_V1.TransferState", transfer_state, 0x20, 0x20, true, 0x4dd343fc9d07d509)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::wait_context_block_t), "_DMA_TRANSFER_CONTEXT_V1.Wcb", wcb, 0x40, 0x40, true, 0x5073c9a1e959972c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_DMA_TRANSFER_CONTEXT_V1.HalWcb", hal_wcb, 0x280, 0x40, true, 0x1ca0535607d9f8a4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif