#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PO_FX_DEVICE_V3.Version", version, 0x0, 0x20, true, 0x7df980e7cdc44352)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_FX_DEVICE_V3.Flags", flags, 0x40, 0x40, true, 0x646dad297553e506)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t)>*), "_PO_FX_DEVICE_V3.ComponentActiveConditionCallback", component_active_condition_callback, 0x80, 0x40, true, 0xc7ed0b85be41cf2b)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t)>*), "_PO_FX_DEVICE_V3.ComponentIdleConditionCallback", component_idle_condition_callback, 0xc0, 0x40, true, 0x770c7fd400a7636a)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t, uint32_t)>*), "_PO_FX_DEVICE_V3.ComponentIdleStateCallback", component_idle_state_callback, 0x100, 0x40, true, 0xc1b8138e32557c4d)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_PO_FX_DEVICE_V3.DevicePowerRequiredCallback", device_power_required_callback, 0x140, 0x40, true, 0x7f782fabee20400c)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_PO_FX_DEVICE_V3.DevicePowerNotRequiredCallback", device_power_not_required_callback, 0x180, 0x40, true, 0x1532c7d1039f4290)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(ppo_fx_power_control_callback_t ), "_PO_FX_DEVICE_V3.PowerControlCallback", power_control_callback, 0x1c0, 0x40, true, 0x9ef881ff66a2c1f)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t)>*), "_PO_FX_DEVICE_V3.DirectedPowerUpCallback", directed_power_up_callback, 0x200, 0x40, true, 0x13f653188e806c86)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t)>*), "_PO_FX_DEVICE_V3.DirectedPowerDownCallback", directed_power_down_callback, 0x240, 0x40, true, 0xc64f8ec115b1c532)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PO_FX_DEVICE_V3.DirectedFxTimeoutInSeconds", directed_fx_timeout_in_seconds, 0x280, 0x20, true, 0x636e006c84de9121)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_PO_FX_DEVICE_V3.DeviceContext", device_context, 0x2c0, 0x40, true, 0xe071289f8c1df2a)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PO_FX_DEVICE_V3.ComponentCount", component_count, 0x300, 0x20, true, 0x9358316085ffb90c)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct po::fx_component_v2_t, 1>), "_PO_FX_DEVICE_V3.Components", components, 0x340, 0xc0, true, 0x9e6a89d737eac1a3)
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
#define _m13
#endif