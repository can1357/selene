#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_HAL_HV_DMA_DOMAIN_CONFIG_X64.FirstLevelPageTableRoot", first_level_page_table_root, 0x0, 0x0, false, 0x94f07292f4f265f7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HAL_HV_DMA_DOMAIN_CONFIG_X64.TranslationEnabled", translation_enabled, 0x0, 0x0, false, 0xc0984cf53ee7c612)
#else
#define _m00
#define _m01
#endif