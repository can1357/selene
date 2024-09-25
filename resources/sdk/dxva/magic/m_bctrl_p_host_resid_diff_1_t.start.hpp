#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_MBctrl_P_HostResidDiff_1.wMBaddress", w_m_baddress, 0x0, 0x10, true, 0xd13b26a112bc061b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_MBctrl_P_HostResidDiff_1.wMBtype", w_m_btype, 0x10, 0x10, true, 0x4c6545b470ebac99)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_MBctrl_P_HostResidDiff_1.dwMB_SNL", dw_mb_snl, 0x20, 0x20, true, 0xaf4aaa4a0ea490ad)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_MBctrl_P_HostResidDiff_1.wPatternCode", w_pattern_code, 0x40, 0x10, true, 0x9204dffe2bf131c7)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_MBctrl_P_HostResidDiff_1.wPC_Overflow", w_pc_overflow, 0x50, 0x10, true, 0xfd955252053fef87)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_MBctrl_P_HostResidDiff_1.dwReservedBits2", dw_reserved_bits2, 0x60, 0x20, true, 0x2fe5e908b67d37d2)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct dxva::m_vvalue_t, 4>), "_DXVA_MBctrl_P_HostResidDiff_1.MVector", m_vector, 0x80, 0x80, true, 0x768325cbf3e57f14)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif