#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_POWER_P_COMPONENT.StateCount", state_count, 0x0, 0x20, true, 0x718b11e13c36feb5)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct dxgk::power_p_state_t, 32>), "_DXGK_POWER_P_COMPONENT.States", states, 0x20, 0x0, true, 0xccd3614ed434b2b5)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::power_component_p_flags_t), "_DXGK_POWER_P_COMPONENT.Flags", flags, 0x420, 0x20, true, 0xbb423e913747ab2b)
#else
#define _m00
#define _m01
#define _m02
#endif