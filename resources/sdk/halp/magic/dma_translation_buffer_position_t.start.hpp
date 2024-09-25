#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct halp::dma_translation_buffer_t*), "_HALP_DMA_TRANSLATION_BUFFER_POSITION.Buffer", buffer, 0x0, 0x40, true, 0x367c72e5c07be7c1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HALP_DMA_TRANSLATION_BUFFER_POSITION.Offset", offset, 0x40, 0x20, true, 0xc1d598c0cc4d2b5f)
#else
#define _m00
#define _m01
#endif