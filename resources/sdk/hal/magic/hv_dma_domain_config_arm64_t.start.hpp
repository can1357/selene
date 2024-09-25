#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_HAL_HV_DMA_DOMAIN_CONFIG_ARM64.Ttbr0", ttbr0, 0x0, 0x0, false, 0x470f7138dd168e42)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_HAL_HV_DMA_DOMAIN_CONFIG_ARM64.Ttbr1", ttbr1, 0x0, 0x0, false, 0x33696e7be26e9e9d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HAL_HV_DMA_DOMAIN_CONFIG_ARM64.Mair0", mair0, 0x0, 0x0, false, 0xdaf0d95fa2b36b11)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HAL_HV_DMA_DOMAIN_CONFIG_ARM64.Mair1", mair1, 0x0, 0x0, false, 0x54f28fe6e3055399)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HAL_HV_DMA_DOMAIN_CONFIG_ARM64.InputSize0", input_size0, 0x0, 0x0, false, 0x3f62f1554bde33b0)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HAL_HV_DMA_DOMAIN_CONFIG_ARM64.InputSize1", input_size1, 0x0, 0x0, false, 0xcf8b391d306028ac)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HAL_HV_DMA_DOMAIN_CONFIG_ARM64.Asid", asid, 0x0, 0x0, false, 0xbf63d1b53cb38a13)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HAL_HV_DMA_DOMAIN_CONFIG_ARM64.CoherentTableWalks", coherent_table_walks, 0x0, 0x0, false, 0x399cff76b3168da7)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HAL_HV_DMA_DOMAIN_CONFIG_ARM64.TranslationEnabled", translation_enabled, 0x0, 0x0, false, 0x67d5573d381a6747)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif