#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_DXVA_COPPStatusData.rApp", r_app, 0x0, 0x80, true, 0x80f9bdd6d3b4dedb)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_COPPStatusData.dwFlags", dw_flags, 0x80, 0x20, true, 0xd6c1a14c53793a7a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_COPPStatusData.dwData", dw_data, 0xa0, 0x20, true, 0xf46f6329ba16e961)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_COPPStatusData.ExtendedInfoValidMask", extended_info_valid_mask, 0xc0, 0x20, true, 0xfb988518e625c21f)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_COPPStatusData.ExtendedInfoData", extended_info_data, 0xe0, 0x20, true, 0x6b7cf440671cf968)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif