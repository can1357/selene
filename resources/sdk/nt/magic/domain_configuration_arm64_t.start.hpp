#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DOMAIN_CONFIGURATION_ARM64.Ttbr0", ttbr0, 0x0, 0x40, true, 0xda35cd0b49a7d80f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DOMAIN_CONFIGURATION_ARM64.Ttbr1", ttbr1, 0x40, 0x40, true, 0xa849dca65ee3d577)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DOMAIN_CONFIGURATION_ARM64.Mair0", mair0, 0x80, 0x20, true, 0xf311fadeaa74df46)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DOMAIN_CONFIGURATION_ARM64.Mair1", mair1, 0xa0, 0x20, true, 0x582c69792119635)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DOMAIN_CONFIGURATION_ARM64.InputSize0", input_size0, 0xc0, 0x8, true, 0x958e5cba8fbd4032)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DOMAIN_CONFIGURATION_ARM64.InputSize1", input_size1, 0xc8, 0x8, true, 0xd203e8002135abec)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DOMAIN_CONFIGURATION_ARM64.CoherentTableWalks", coherent_table_walks, 0xd0, 0x8, true, 0x667cd5e5ee639d32)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DOMAIN_CONFIGURATION_ARM64.TranslationEnabled", translation_enabled, 0xd8, 0x8, true, 0xfe6ec32809e13835)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif