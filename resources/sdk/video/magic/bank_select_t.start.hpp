#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_BANK_SELECT.Length", length, 0x0, 0x20, true, 0xbed08a4113bf80a9)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_BANK_SELECT.Size", size, 0x20, 0x20, true, 0x27d47dff7a916d06)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_BANK_SELECT.BankingFlags", banking_flags, 0x40, 0x20, true, 0x94e295d7b7cdeeba)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_BANK_SELECT.BankingType", banking_type, 0x60, 0x20, true, 0x429d740358c6739c)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_BANK_SELECT.PlanarHCBankingType", planar_hc_banking_type, 0x80, 0x20, true, 0x889d687a06c7598d)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_BANK_SELECT.BitmapWidthInBytes", bitmap_width_in_bytes, 0xa0, 0x20, true, 0xf79bbab2b2a59150)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_BANK_SELECT.BitmapSize", bitmap_size, 0xc0, 0x20, true, 0x76cbc52e6b4d9c31)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_BANK_SELECT.Granularity", granularity, 0xe0, 0x20, true, 0xefc90d6419626b84)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_BANK_SELECT.PlanarHCGranularity", planar_hc_granularity, 0x100, 0x20, true, 0x7cb021a1e970a2c6)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_BANK_SELECT.CodeOffset", code_offset, 0x120, 0x20, true, 0x96d40ab309397c5a)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_BANK_SELECT.PlanarHCBankCodeOffset", planar_hc_bank_code_offset, 0x140, 0x20, true, 0xca5211975e0fe822)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_BANK_SELECT.PlanarHCEnableCodeOffset", planar_hc_enable_code_offset, 0x160, 0x20, true, 0xa0b9cc450ce56eb8)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_BANK_SELECT.PlanarHCDisableCodeOffset", planar_hc_disable_code_offset, 0x180, 0x20, true, 0x77040f4f4353c8df)
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
#define _m09
#define _m10
#define _m11
#define _m12
#endif