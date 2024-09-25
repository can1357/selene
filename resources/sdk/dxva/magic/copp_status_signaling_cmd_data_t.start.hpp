#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_DXVA_COPPStatusSignalingCmdData.rApp", r_app, 0x0, 0x80, true, 0xedc8b104ad959d02)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_COPPStatusSignalingCmdData.dwFlags", dw_flags, 0x80, 0x20, true, 0xa44ea429eb2dbc2c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_COPPStatusSignalingCmdData.AvailableTVProtectionStandards", available_tv_protection_standards, 0xa0, 0x20, true, 0xcc019b9e96903486)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_COPPStatusSignalingCmdData.ActiveTVProtectionStandard", active_tv_protection_standard, 0xc0, 0x20, true, 0x85de0bf4bd9c62a4)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_COPPStatusSignalingCmdData.TVType", tv_type, 0xe0, 0x20, true, 0x9d9b36b12f046fed)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_COPPStatusSignalingCmdData.AspectRatioValidMask1", aspect_ratio_valid_mask1, 0x100, 0x20, true, 0x8bbf25f6c1a3669e)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_COPPStatusSignalingCmdData.AspectRatioData1", aspect_ratio_data1, 0x120, 0x20, true, 0xe33c46fa9d91d90f)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_COPPStatusSignalingCmdData.AspectRatioValidMask2", aspect_ratio_valid_mask2, 0x140, 0x20, true, 0xf9c009c62c41ae74)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_COPPStatusSignalingCmdData.AspectRatioData2", aspect_ratio_data2, 0x160, 0x20, true, 0x9123601ef21336d1)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_COPPStatusSignalingCmdData.AspectRatioValidMask3", aspect_ratio_valid_mask3, 0x180, 0x20, true, 0xb28f7035c4876a3b)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_COPPStatusSignalingCmdData.AspectRatioData3", aspect_ratio_data3, 0x1a0, 0x20, true, 0xa4d74b46f2fd3814)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 4>), "_DXVA_COPPStatusSignalingCmdData.ExtendedInfoValidMask", extended_info_valid_mask, 0x1c0, 0x80, true, 0xaade4713214282da)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 4>), "_DXVA_COPPStatusSignalingCmdData.ExtendedInfoData", extended_info_data, 0x240, 0x80, true, 0x9482c33ff37fa01f)
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