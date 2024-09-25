#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_POWER_FRAMEWORK_SETTINGS_V1_11.Size", size, 0x0, 0x0, false, 0xdaebf718967851e5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdevice_wdm_post_po_fx_register_device_t ), "_WDF_POWER_FRAMEWORK_SETTINGS_V1_11.EvtDeviceWdmPostPoFxRegisterDevice", evt_device_wdm_post_po_fx_register_device, 0x0, 0x0, false, 0x720cae2cd43e6234)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdevice_wdm_pre_po_fx_unregister_device_t ), "_WDF_POWER_FRAMEWORK_SETTINGS_V1_11.EvtDeviceWdmPrePoFxUnregisterDevice", evt_device_wdm_pre_po_fx_unregister_device, 0x0, 0x0, false, 0x2a54a042e04fa4b4)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct po::fx_component_v1_t*), "_WDF_POWER_FRAMEWORK_SETTINGS_V1_11.Component", component, 0x0, 0x0, false, 0xca7d80bc7382a2f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t)>*), "_WDF_POWER_FRAMEWORK_SETTINGS_V1_11.ComponentActiveConditionCallback", component_active_condition_callback, 0x0, 0x0, false, 0xb56a167db7c40479)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t)>*), "_WDF_POWER_FRAMEWORK_SETTINGS_V1_11.ComponentIdleConditionCallback", component_idle_condition_callback, 0x0, 0x0, false, 0xafa47fadf99c5907)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t, uint32_t)>*), "_WDF_POWER_FRAMEWORK_SETTINGS_V1_11.ComponentIdleStateCallback", component_idle_state_callback, 0x0, 0x0, false, 0x75c9665b79d349a9)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(ppo_fx_power_control_callback_t ), "_WDF_POWER_FRAMEWORK_SETTINGS_V1_11.PowerControlCallback", power_control_callback, 0x0, 0x0, false, 0x9bbf2c56bee4b14b)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_POWER_FRAMEWORK_SETTINGS_V1_11.PoFxDeviceContext", po_fx_device_context, 0x0, 0x0, false, 0x25f493a8402b41e9)
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