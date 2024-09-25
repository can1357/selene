#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_POWER_COMPONENT_FLAGS.DriverCompletesFStateTransition", driver_completes_f_state_transition, 0x1, 0x1, true, 0x1664389774ea3240, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_POWER_COMPONENT_FLAGS.TransitionTo_F0_OnDx", transition_to_f0_on_dx, 0x2, 0x1, true, 0x54b1355738275525, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_POWER_COMPONENT_FLAGS.NoDebounce", no_debounce, 0x3, 0x1, true, 0x1d98764ecb162764, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_POWER_COMPONENT_FLAGS.ActiveInD3", active_in_d3, 0x4, 0x1, true, 0x99ed3a322b39b2b, 1, uint32_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_POWER_COMPONENT_FLAGS.Value", value, 0x0, 0x20, true, 0xa32e619ac7468eb0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif