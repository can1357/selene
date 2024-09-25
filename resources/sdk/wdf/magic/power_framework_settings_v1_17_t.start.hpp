#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_POWER_FRAMEWORK_SETTINGS_V1_17.Size", size, 0x0, 0x0, false, 0x5435750d087730cb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdevice_wdm_post_po_fx_register_device_t ), "_WDF_POWER_FRAMEWORK_SETTINGS_V1_17.EvtDeviceWdmPostPoFxRegisterDevice", evt_device_wdm_post_po_fx_register_device, 0x0, 0x0, false, 0x1435c2e4b0597394)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdevice_wdm_pre_po_fx_unregister_device_t ), "_WDF_POWER_FRAMEWORK_SETTINGS_V1_17.EvtDeviceWdmPrePoFxUnregisterDevice", evt_device_wdm_pre_po_fx_unregister_device, 0x0, 0x0, false, 0x6e39d2041bba6180)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct po::fx_component_v1_t*), "_WDF_POWER_FRAMEWORK_SETTINGS_V1_17.Component", component, 0x0, 0x0, false, 0x6dfc04c6cfdef481)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t)>*), "_WDF_POWER_FRAMEWORK_SETTINGS_V1_17.ComponentActiveConditionCallback", component_active_condition_callback, 0x0, 0x0, false, 0x5757cdfee284d108)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t)>*), "_WDF_POWER_FRAMEWORK_SETTINGS_V1_17.ComponentIdleConditionCallback", component_idle_condition_callback, 0x0, 0x0, false, 0xcf18e40319bf8e5f)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t, uint32_t)>*), "_WDF_POWER_FRAMEWORK_SETTINGS_V1_17.ComponentIdleStateCallback", component_idle_state_callback, 0x0, 0x0, false, 0xcdbb8505408e679a)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(ppo_fx_power_control_callback_t ), "_WDF_POWER_FRAMEWORK_SETTINGS_V1_17.PowerControlCallback", power_control_callback, 0x0, 0x0, false, 0xd8251e5814a7b121)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_POWER_FRAMEWORK_SETTINGS_V1_17.PoFxDeviceContext", po_fx_device_context, 0x0, 0x0, false, 0xb739b85d308f14e0)
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