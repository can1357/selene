#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DMA_ADAPTER_INFO.Version", version, 0x0, 0x20, true, 0x85997f91e7020038)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dma::adapter_info_v1_t), "_DMA_ADAPTER_INFO.V1", v1, 0x20, 0xa0, true, 0x93364de87edb7a86)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dma::adapter_info_crashdump_t), "_DMA_ADAPTER_INFO.Crashdump", crashdump, 0x0, 0x0, false, 0x70f0a777710b462c)
#else
#define _m00
#define _m01
#define _m02
#endif