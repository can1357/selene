#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_COPPSetSignalingCmdData.ActiveTVProtectionStandard", active_tv_protection_standard, 0x0, 0x20, true, 0xd13d107a04de1361)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_COPPSetSignalingCmdData.AspectRatioChangeMask1", aspect_ratio_change_mask1, 0x20, 0x20, true, 0xf64dd6e25db45779)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_COPPSetSignalingCmdData.AspectRatioData1", aspect_ratio_data1, 0x40, 0x20, true, 0x357b9b876a24ce51)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_COPPSetSignalingCmdData.AspectRatioChangeMask2", aspect_ratio_change_mask2, 0x60, 0x20, true, 0x425b398ce30a4ebf)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_COPPSetSignalingCmdData.AspectRatioData2", aspect_ratio_data2, 0x80, 0x20, true, 0x9f47e366b9f0c2fb)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_COPPSetSignalingCmdData.AspectRatioChangeMask3", aspect_ratio_change_mask3, 0xa0, 0x20, true, 0x7391dd2ef8048c01)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_COPPSetSignalingCmdData.AspectRatioData3", aspect_ratio_data3, 0xc0, 0x20, true, 0x711ac2d0d4b3ff69)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 4>), "_DXVA_COPPSetSignalingCmdData.ExtendedInfoChangeMask", extended_info_change_mask, 0xe0, 0x80, true, 0xc35cbdd6bd8e2928)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 4>), "_DXVA_COPPSetSignalingCmdData.ExtendedInfoData", extended_info_data, 0x160, 0x80, true, 0xa19a925ff3062ee2)
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