#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_MBctrl_I_OffHostIDCT_1.wMBaddress", w_m_baddress, 0x0, 0x10, true, 0x55e7173b08647f21)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_MBctrl_I_OffHostIDCT_1.wMBtype", w_m_btype, 0x10, 0x10, true, 0x9f0892c046346937)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_MBctrl_I_OffHostIDCT_1.dwMB_SNL", dw_mb_snl, 0x20, 0x20, true, 0x2a493e3f221dee4b)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_MBctrl_I_OffHostIDCT_1.wPatternCode", w_pattern_code, 0x40, 0x10, true, 0x776f80baa7d81fcf)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 6>), "_DXVA_MBctrl_I_OffHostIDCT_1.bNumCoef", b_num_coef, 0x50, 0x30, true, 0x7f1bab2aec211e89)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif