#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_WDDM_2_7_CAPS.HwSchSupported", hw_sch_supported, 0x0, 0x1, true, 0x3d6bc7fc4da08d6f, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_WDDM_2_7_CAPS.HwSchEnabled", hw_sch_enabled, 0x1, 0x1, true, 0x1a1256ba7af86d82, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_WDDM_2_7_CAPS.HwSchEnabledByDefault", hw_sch_enabled_by_default, 0x2, 0x1, true, 0x4d7b73c7838e86e1, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_WDDM_2_7_CAPS.IndependentVidPnVSyncControl", independent_vid_pn_v_sync_control, 0x3, 0x1, true, 0x1c94085519740e7d, 1, uint32_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_WDDM_2_7_CAPS.Value", value, 0x0, 0x20, true, 0x773fc502222aa76d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif