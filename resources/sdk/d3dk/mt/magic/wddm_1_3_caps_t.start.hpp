#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_WDDM_1_3_CAPS.SupportMiracast", support_miracast, 0x0, 0x1, true, 0xe0f6b70c57c6dfd4, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_WDDM_1_3_CAPS.IsHybridIntegratedGPU", is_hybrid_integrated_gpu, 0x1, 0x1, true, 0x92631a71f99ec8e6, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_WDDM_1_3_CAPS.IsHybridDiscreteGPU", is_hybrid_discrete_gpu, 0x2, 0x1, true, 0x73a55debb1127fcd, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_WDDM_1_3_CAPS.SupportPowerManagementPStates", support_power_management_p_states, 0x3, 0x1, true, 0x7a9a2e22ec814468, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_WDDM_1_3_CAPS.SupportVirtualModes", support_virtual_modes, 0x4, 0x1, true, 0xcab5c4d4802e8257, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_WDDM_1_3_CAPS.SupportCrossAdapterResource", support_cross_adapter_resource, 0x5, 0x1, true, 0x62c1c6499525fae5, 1, uint32_t)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_WDDM_1_3_CAPS.Value", value, 0x0, 0x20, true, 0xc52aa772190417b0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif