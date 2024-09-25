#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PO_FX_DEVICE_V1.Version", version, 0x0, 0x20, true, 0xe830196856217a98)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PO_FX_DEVICE_V1.ComponentCount", component_count, 0x20, 0x20, true, 0x603f1843926ea80d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t)>*), "_PO_FX_DEVICE_V1.ComponentActiveConditionCallback", component_active_condition_callback, 0x40, 0x40, true, 0xf8eac989707af5f7)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t)>*), "_PO_FX_DEVICE_V1.ComponentIdleConditionCallback", component_idle_condition_callback, 0x80, 0x40, true, 0x9ace5db812ae9f4a)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t, uint32_t)>*), "_PO_FX_DEVICE_V1.ComponentIdleStateCallback", component_idle_state_callback, 0xc0, 0x40, true, 0xb29442cdd9b55e26)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_PO_FX_DEVICE_V1.DevicePowerRequiredCallback", device_power_required_callback, 0x100, 0x40, true, 0xd4766dd221a28722)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_PO_FX_DEVICE_V1.DevicePowerNotRequiredCallback", device_power_not_required_callback, 0x140, 0x40, true, 0x2d2c9940dbdf408e)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(ppo_fx_power_control_callback_t ), "_PO_FX_DEVICE_V1.PowerControlCallback", power_control_callback, 0x180, 0x40, true, 0x7cc7a1f13c5692df)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_PO_FX_DEVICE_V1.DeviceContext", device_context, 0x1c0, 0x40, true, 0x4197dbf62aa278bf)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct po::fx_component_v1_t, 1>), "_PO_FX_DEVICE_V1.Components", components, 0x200, 0x0, true, 0x9f9b44e83288fcac)
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
#endif