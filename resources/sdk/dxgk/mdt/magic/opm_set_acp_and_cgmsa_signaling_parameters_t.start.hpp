#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKMDT_OPM_SET_ACP_AND_CGMSA_SIGNALING_PARAMETERS.ulNewTVProtectionStandard", ul_new_tv_protection_standard, 0x0, 0x20, true, 0x8e6db171081c511f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKMDT_OPM_SET_ACP_AND_CGMSA_SIGNALING_PARAMETERS.ulAspectRatioChangeMask1", ul_aspect_ratio_change_mask1, 0x20, 0x20, true, 0x63e1e1f0626afe06)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKMDT_OPM_SET_ACP_AND_CGMSA_SIGNALING_PARAMETERS.ulAspectRatioData1", ul_aspect_ratio_data1, 0x40, 0x20, true, 0x8607bd25e8fc5e81)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKMDT_OPM_SET_ACP_AND_CGMSA_SIGNALING_PARAMETERS.ulAspectRatioChangeMask2", ul_aspect_ratio_change_mask2, 0x60, 0x20, true, 0x6668a937684f501a)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKMDT_OPM_SET_ACP_AND_CGMSA_SIGNALING_PARAMETERS.ulAspectRatioData2", ul_aspect_ratio_data2, 0x80, 0x20, true, 0x42d10145c79273ad)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKMDT_OPM_SET_ACP_AND_CGMSA_SIGNALING_PARAMETERS.ulAspectRatioChangeMask3", ul_aspect_ratio_change_mask3, 0xa0, 0x20, true, 0xfa38b9f22db67bf0)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKMDT_OPM_SET_ACP_AND_CGMSA_SIGNALING_PARAMETERS.ulAspectRatioData3", ul_aspect_ratio_data3, 0xc0, 0x20, true, 0x69df0e9cef63a50d)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 4>), "_DXGKMDT_OPM_SET_ACP_AND_CGMSA_SIGNALING_PARAMETERS.ulReserved", ul_reserved, 0xe0, 0x80, true, 0x1ea42c3fe106481b)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 4>), "_DXGKMDT_OPM_SET_ACP_AND_CGMSA_SIGNALING_PARAMETERS.ulReserved2", ul_reserved2, 0x160, 0x80, true, 0xe444e6f2e71778aa)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKMDT_OPM_SET_ACP_AND_CGMSA_SIGNALING_PARAMETERS.ulReserved3", ul_reserved3, 0x1e0, 0x20, true, 0x5944d7c089b18994)
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
#endif