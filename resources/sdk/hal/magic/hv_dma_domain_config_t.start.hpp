#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum hal::hv_dma_domain_config_arch_t), "_HAL_HV_DMA_DOMAIN_CONFIG.Type", type, 0x0, 0x0, false, 0xf30d3344c7ae18b1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct hal::hv_dma_domain_config_arm64_t), "_HAL_HV_DMA_DOMAIN_CONFIG.Arm64", arm64, 0x0, 0x0, false, 0x1d9462449ec1285a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct hal::hv_dma_domain_config_x64_t), "_HAL_HV_DMA_DOMAIN_CONFIG.X64", x64, 0x0, 0x0, false, 0x718b5ce4e460d69a)
#else
#define _m00
#define _m01
#define _m02
#endif