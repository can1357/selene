#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::array<uint8_t, 16>, 6>), "_DXVA_Qmatrix_H264.bScalingLists4x4", b_scaling_lists4x4, 0x0, 0x0, true, 0x11d17a0d9f939ba7)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::array<uint8_t, 64>, 2>), "_DXVA_Qmatrix_H264.bScalingLists8x8", b_scaling_lists8x8, 0x300, 0x0, true, 0x20b21247d5606b0)
#else
#define _m00
#define _m01
#endif