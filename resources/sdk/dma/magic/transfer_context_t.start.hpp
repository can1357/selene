#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DMA_TRANSFER_CONTEXT.Version", version, 0x0, 0x20, true, 0x7872032f167ca892)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dma::transfer_context_v1_t), "_DMA_TRANSFER_CONTEXT.V1", v1, 0x40, 0xc0, true, 0x1522461e38ce5e5f)
#else
#define _m00
#define _m01
#endif