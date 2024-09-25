#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_MBctrl_I_HostResidDiff_1.wMBaddress", w_m_baddress, 0x0, 0x10, true, 0x4140791736527446)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_MBctrl_I_HostResidDiff_1.wMBtype", w_m_btype, 0x10, 0x10, true, 0x680b4dc1dc4c165a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_MBctrl_I_HostResidDiff_1.dwMB_SNL", dw_mb_snl, 0x20, 0x20, true, 0x7bb6092e31f774e9)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_MBctrl_I_HostResidDiff_1.wPatternCode", w_pattern_code, 0x40, 0x10, true, 0xd89d382c1dc2fb12)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_MBctrl_I_HostResidDiff_1.wPC_Overflow", w_pc_overflow, 0x50, 0x10, true, 0x7f5b781c617b6fb)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_MBctrl_I_HostResidDiff_1.dwReservedBits2", dw_reserved_bits2, 0x60, 0x20, true, 0x50043f33d1d4ae6b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif