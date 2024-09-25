#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct hal::hv_dma_domain_info_t), "_HAL_HV_DMA_CREATE_DOMAIN_INFO.DomainInfo", domain_info, 0x0, 0x0, false, 0x86e82869382a4f0e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HAL_HV_DMA_CREATE_DOMAIN_INFO.InheritPassthroughDomain", inherit_passthrough_domain, 0x0, 0x0, false, 0x9b3611e4f8a0c261)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HAL_HV_DMA_CREATE_DOMAIN_INFO.ForwardProgressRequired", forward_progress_required, 0x0, 0x0, false, 0x2c47df2a28a8965c)
#else
#define _m00
#define _m01
#define _m02
#endif