#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::mdt::opm_random_number_t), "_DXGKMDT_OPM_ACP_AND_CGMSA_SIGNALING.rnRandomNumber", rn_random_number, 0x0, 0x80, true, 0xe3eaff504a435250)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKMDT_OPM_ACP_AND_CGMSA_SIGNALING.ulStatusFlags", ul_status_flags, 0x80, 0x20, true, 0x10b824af43a616f1)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKMDT_OPM_ACP_AND_CGMSA_SIGNALING.ulAvailableTVProtectionStandards", ul_available_tv_protection_standards, 0xa0, 0x20, true, 0x164a4b0a4faba1d0)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKMDT_OPM_ACP_AND_CGMSA_SIGNALING.ulActiveTVProtectionStandard", ul_active_tv_protection_standard, 0xc0, 0x20, true, 0x174c47721f98641f)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKMDT_OPM_ACP_AND_CGMSA_SIGNALING.ulReserved", ul_reserved, 0xe0, 0x20, true, 0x7e9ceffa5b379eb1)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKMDT_OPM_ACP_AND_CGMSA_SIGNALING.ulAspectRatioValidMask1", ul_aspect_ratio_valid_mask1, 0x100, 0x20, true, 0x81b3749102daf54e)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKMDT_OPM_ACP_AND_CGMSA_SIGNALING.ulAspectRatioData1", ul_aspect_ratio_data1, 0x120, 0x20, true, 0x212892f9aa7a5987)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKMDT_OPM_ACP_AND_CGMSA_SIGNALING.ulAspectRatioValidMask2", ul_aspect_ratio_valid_mask2, 0x140, 0x20, true, 0x20ae1deb147e45ea)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKMDT_OPM_ACP_AND_CGMSA_SIGNALING.ulAspectRatioData2", ul_aspect_ratio_data2, 0x160, 0x20, true, 0xefbb6be47116ae5f)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKMDT_OPM_ACP_AND_CGMSA_SIGNALING.ulAspectRatioValidMask3", ul_aspect_ratio_valid_mask3, 0x180, 0x20, true, 0xebd7a7a94636a8d)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKMDT_OPM_ACP_AND_CGMSA_SIGNALING.ulAspectRatioData3", ul_aspect_ratio_data3, 0x1a0, 0x20, true, 0xa0f2bd9ce6c88575)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 4>), "_DXGKMDT_OPM_ACP_AND_CGMSA_SIGNALING.ulReserved2", ul_reserved2, 0x1c0, 0x80, true, 0xa6fd360f38edf868)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 4>), "_DXGKMDT_OPM_ACP_AND_CGMSA_SIGNALING.ulReserved3", ul_reserved3, 0x240, 0x80, true, 0xab912c4d8470644)
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