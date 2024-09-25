#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_GAMMA_1DLUT_CAP.NumberOfLUTEntries", number_of_lut_entries, 0x0, 0x20, true, 0x3746159395f13d8d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::dkgk_gamma_data_cap_t), "_DXGK_GAMMA_1DLUT_CAP.GammaDataCap", gamma_data_cap, 0x20, 0x80, true, 0x3c2c60d7f441183)
#else
#define _m00
#define _m01
#endif