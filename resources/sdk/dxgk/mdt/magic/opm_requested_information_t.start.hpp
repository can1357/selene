#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::mdt::opm_omac_t), "_DXGKMDT_OPM_REQUESTED_INFORMATION.omac", omac, 0x0, 0x80, true, 0xa0041114a05593f1)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKMDT_OPM_REQUESTED_INFORMATION.cbRequestedInformationSize", cb_requested_information_size, 0x80, 0x20, true, 0xf4da1c94a25b4770)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4076>), "_DXGKMDT_OPM_REQUESTED_INFORMATION.abRequestedInformation", ab_requested_information, 0xa0, 0x60, true, 0x22a2918e5f595751)
#else
#define _m00
#define _m01
#define _m02
#endif