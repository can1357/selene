#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mdt::preemption_caps_t), "_D3DKMT_WDDM_1_2_CAPS.PreemptionCaps", preemption_caps, 0x0, 0x40, true, 0x4010ea3627fcdd58)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_WDDM_1_2_CAPS.SupportNonVGA", support_non_vga, 0x40, 0x1, true, 0xe3cac8229b0324d3, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_WDDM_1_2_CAPS.SupportSmoothRotation", support_smooth_rotation, 0x41, 0x1, true, 0xce26f19ef3616e7c, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_WDDM_1_2_CAPS.SupportPerEngineTDR", support_per_engine_tdr, 0x42, 0x1, true, 0x6d791fbdda19bc41, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_WDDM_1_2_CAPS.SupportKernelModeCommandBuffer", support_kernel_mode_command_buffer, 0x43, 0x1, true, 0xeb9f3f0577da8402, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_WDDM_1_2_CAPS.SupportCCD", support_ccd, 0x44, 0x1, true, 0x6394ad08b7408ad4, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_WDDM_1_2_CAPS.SupportSoftwareDeviceBitmaps", support_software_device_bitmaps, 0x45, 0x1, true, 0xa265d40cfc4764de, 1, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_WDDM_1_2_CAPS.SupportGammaRamp", support_gamma_ramp, 0x46, 0x1, true, 0x2765b69359156986, 1, uint32_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_WDDM_1_2_CAPS.SupportHWCursor", support_hw_cursor, 0x47, 0x1, true, 0x102375978f7f5566, 1, uint32_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_WDDM_1_2_CAPS.SupportHWVSync", support_hwv_sync, 0x48, 0x1, true, 0x958dca68c0d38672, 1, uint32_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_WDDM_1_2_CAPS.SupportSurpriseRemovalInHibernation", support_surprise_removal_in_hibernation, 0x49, 0x1, true, 0x695c283af5ba7e95, 1, uint32_t)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_WDDM_1_2_CAPS.Value", value, 0x40, 0x20, true, 0x5d8a39c9b5d39214)
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
#endif