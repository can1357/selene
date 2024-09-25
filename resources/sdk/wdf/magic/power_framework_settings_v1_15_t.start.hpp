#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_POWER_FRAMEWORK_SETTINGS_V1_15.Size", size, 0x0, 0x0, false, 0x7a1db1cd7937fd23)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdevice_wdm_post_po_fx_register_device_t ), "_WDF_POWER_FRAMEWORK_SETTINGS_V1_15.EvtDeviceWdmPostPoFxRegisterDevice", evt_device_wdm_post_po_fx_register_device, 0x0, 0x0, false, 0xbe3915680e3ce8f4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdevice_wdm_pre_po_fx_unregister_device_t ), "_WDF_POWER_FRAMEWORK_SETTINGS_V1_15.EvtDeviceWdmPrePoFxUnregisterDevice", evt_device_wdm_pre_po_fx_unregister_device, 0x0, 0x0, false, 0x3c02980538ce632e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct po::fx_component_v1_t*), "_WDF_POWER_FRAMEWORK_SETTINGS_V1_15.Component", component, 0x0, 0x0, false, 0xfc3e1f965d95d2a9)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t)>*), "_WDF_POWER_FRAMEWORK_SETTINGS_V1_15.ComponentActiveConditionCallback", component_active_condition_callback, 0x0, 0x0, false, 0x75301b2816fde374)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t)>*), "_WDF_POWER_FRAMEWORK_SETTINGS_V1_15.ComponentIdleConditionCallback", component_idle_condition_callback, 0x0, 0x0, false, 0x2d309326ca0c20d1)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t, uint32_t)>*), "_WDF_POWER_FRAMEWORK_SETTINGS_V1_15.ComponentIdleStateCallback", component_idle_state_callback, 0x0, 0x0, false, 0xdfa60531e956f2c3)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(ppo_fx_power_control_callback_t ), "_WDF_POWER_FRAMEWORK_SETTINGS_V1_15.PowerControlCallback", power_control_callback, 0x0, 0x0, false, 0x2030fafb045e73d)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_POWER_FRAMEWORK_SETTINGS_V1_15.PoFxDeviceContext", po_fx_device_context, 0x0, 0x0, false, 0x3d1ef83246bf157e)
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