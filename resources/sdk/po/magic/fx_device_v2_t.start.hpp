#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PO_FX_DEVICE_V2.Version", version, 0x0, 0x20, true, 0x6d2ebf6a2c3fe6e7)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_FX_DEVICE_V2.Flags", flags, 0x40, 0x40, true, 0x6c9a48f93dc331a2)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t)>*), "_PO_FX_DEVICE_V2.ComponentActiveConditionCallback", component_active_condition_callback, 0x80, 0x40, true, 0x506d33070e3b0521)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t)>*), "_PO_FX_DEVICE_V2.ComponentIdleConditionCallback", component_idle_condition_callback, 0xc0, 0x40, true, 0xfb2fd6cffeb20fa8)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t, uint32_t)>*), "_PO_FX_DEVICE_V2.ComponentIdleStateCallback", component_idle_state_callback, 0x100, 0x40, true, 0xb4377d27511f58d8)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_PO_FX_DEVICE_V2.DevicePowerRequiredCallback", device_power_required_callback, 0x140, 0x40, true, 0x7487a119f1484209)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_PO_FX_DEVICE_V2.DevicePowerNotRequiredCallback", device_power_not_required_callback, 0x180, 0x40, true, 0x511647e26faff25c)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(ppo_fx_power_control_callback_t ), "_PO_FX_DEVICE_V2.PowerControlCallback", power_control_callback, 0x1c0, 0x40, true, 0x753fb6acbcc160a3)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_PO_FX_DEVICE_V2.DeviceContext", device_context, 0x200, 0x40, true, 0xf283deaddcdefcd)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PO_FX_DEVICE_V2.ComponentCount", component_count, 0x240, 0x20, true, 0x5718da118aad76d5)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct po::fx_component_v2_t, 1>), "_PO_FX_DEVICE_V2.Components", components, 0x280, 0xc0, true, 0xc1c24272af24d28b)
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
#endif