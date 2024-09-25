#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HAL_HV_DMA_DOMAIN_INFO.DomainId", domain_id, 0x0, 0x20, true, 0x4f2c467969d0e7ff)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HAL_HV_DMA_DOMAIN_INFO.IsStage1", is_stage1, 0x20, 0x8, true, 0xe5c6f15a9a20f2f4)
#else
#define _m00
#define _m01
#endif