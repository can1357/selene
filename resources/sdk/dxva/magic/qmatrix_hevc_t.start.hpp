#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::array<uint8_t, 16>, 6>), "_DXVA_Qmatrix_HEVC.ucScalingLists0", uc_scaling_lists0, 0x0, 0x0, true, 0x43809219ecb82a57)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::array<uint8_t, 64>, 6>), "_DXVA_Qmatrix_HEVC.ucScalingLists1", uc_scaling_lists1, 0x300, 0x0, true, 0x3ba46b986d70bd1f)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::array<uint8_t, 64>, 6>), "_DXVA_Qmatrix_HEVC.ucScalingLists2", uc_scaling_lists2, 0xf00, 0x0, true, 0x3574464ce61a1115)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::array<uint8_t, 64>, 2>), "_DXVA_Qmatrix_HEVC.ucScalingLists3", uc_scaling_lists3, 0x1b00, 0x0, true, 0x8de6bc34ed755ef0)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 6>), "_DXVA_Qmatrix_HEVC.ucScalingListDCCoefSizeID2", uc_scaling_list_dc_coef_size_id2, 0x1f00, 0x30, true, 0x11f02e6fa467a795)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_DXVA_Qmatrix_HEVC.ucScalingListDCCoefSizeID3", uc_scaling_list_dc_coef_size_id3, 0x1f30, 0x10, true, 0xb615d59d0ac6f323)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif