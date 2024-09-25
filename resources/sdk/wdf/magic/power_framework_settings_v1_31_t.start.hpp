#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_POWER_FRAMEWORK_SETTINGS_V1_31.Size", size, 0x0, 0x0, false, 0x928d78fb5ca9b70)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdevice_wdm_post_po_fx_register_device_t ), "_WDF_POWER_FRAMEWORK_SETTINGS_V1_31.EvtDeviceWdmPostPoFxRegisterDevice", evt_device_wdm_post_po_fx_register_device, 0x0, 0x0, false, 0xad3188bfcfa8b4f7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdevice_wdm_pre_po_fx_unregister_device_t ), "_WDF_POWER_FRAMEWORK_SETTINGS_V1_31.EvtDeviceWdmPrePoFxUnregisterDevice", evt_device_wdm_pre_po_fx_unregister_device, 0x0, 0x0, false, 0x2c722a5a528e69bb)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct po::fx_component_v1_t*), "_WDF_POWER_FRAMEWORK_SETTINGS_V1_31.Component", component, 0x0, 0x0, false, 0x85ae502d1ca7ae04)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t)>*), "_WDF_POWER_FRAMEWORK_SETTINGS_V1_31.ComponentActiveConditionCallback", component_active_condition_callback, 0x0, 0x0, false, 0x8da2a7600ddab67d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t)>*), "_WDF_POWER_FRAMEWORK_SETTINGS_V1_31.ComponentIdleConditionCallback", component_idle_condition_callback, 0x0, 0x0, false, 0x189e0f883446712a)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t, uint32_t)>*), "_WDF_POWER_FRAMEWORK_SETTINGS_V1_31.ComponentIdleStateCallback", component_idle_state_callback, 0x0, 0x0, false, 0x1df3abe386fdc79e)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(ppo_fx_power_control_callback_t ), "_WDF_POWER_FRAMEWORK_SETTINGS_V1_31.PowerControlCallback", power_control_callback, 0x0, 0x0, false, 0xdcd5db8af40275ec)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_POWER_FRAMEWORK_SETTINGS_V1_31.PoFxDeviceContext", po_fx_device_context, 0x0, 0x0, false, 0xab85f62363a02c74)
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
#endif