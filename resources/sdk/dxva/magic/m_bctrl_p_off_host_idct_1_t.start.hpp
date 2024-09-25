#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_MBctrl_P_OffHostIDCT_1.wMBaddress", w_m_baddress, 0x0, 0x10, true, 0x7694ba28b98607a4)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_MBctrl_P_OffHostIDCT_1.wMBtype", w_m_btype, 0x10, 0x10, true, 0xd8ed6d5fc68139ad)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_MBctrl_P_OffHostIDCT_1.dwMB_SNL", dw_mb_snl, 0x20, 0x20, true, 0xf446bf22b9c875dc)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_MBctrl_P_OffHostIDCT_1.wPatternCode", w_pattern_code, 0x40, 0x10, true, 0x93bda04b291c67a0)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 6>), "_DXVA_MBctrl_P_OffHostIDCT_1.bNumCoef", b_num_coef, 0x50, 0x30, true, 0x9342df0291d33567)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct dxva::m_vvalue_t, 4>), "_DXVA_MBctrl_P_OffHostIDCT_1.MVector", m_vector, 0x80, 0x80, true, 0x4c24e2515bd01500)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif