#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_POWER_FRAMEWORK_SETTINGS_V1_13.Size", size, 0x0, 0x0, false, 0x8f84abe9fd0540bf)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdevice_wdm_post_po_fx_register_device_t ), "_WDF_POWER_FRAMEWORK_SETTINGS_V1_13.EvtDeviceWdmPostPoFxRegisterDevice", evt_device_wdm_post_po_fx_register_device, 0x0, 0x0, false, 0xb88619225dda898f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdevice_wdm_pre_po_fx_unregister_device_t ), "_WDF_POWER_FRAMEWORK_SETTINGS_V1_13.EvtDeviceWdmPrePoFxUnregisterDevice", evt_device_wdm_pre_po_fx_unregister_device, 0x0, 0x0, false, 0xff257660ddcf0fed)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct po::fx_component_v1_t*), "_WDF_POWER_FRAMEWORK_SETTINGS_V1_13.Component", component, 0x0, 0x0, false, 0x6e0a3969433ecbe5)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t)>*), "_WDF_POWER_FRAMEWORK_SETTINGS_V1_13.ComponentActiveConditionCallback", component_active_condition_callback, 0x0, 0x0, false, 0x59225f9a7e13cca7)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t)>*), "_WDF_POWER_FRAMEWORK_SETTINGS_V1_13.ComponentIdleConditionCallback", component_idle_condition_callback, 0x0, 0x0, false, 0x4af46dcdab335542)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t, uint32_t)>*), "_WDF_POWER_FRAMEWORK_SETTINGS_V1_13.ComponentIdleStateCallback", component_idle_state_callback, 0x0, 0x0, false, 0x596ffe9a8bd6ce5e)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(ppo_fx_power_control_callback_t ), "_WDF_POWER_FRAMEWORK_SETTINGS_V1_13.PowerControlCallback", power_control_callback, 0x0, 0x0, false, 0xaf533bcfff6e449b)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_POWER_FRAMEWORK_SETTINGS_V1_13.PoFxDeviceContext", po_fx_device_context, 0x0, 0x0, false, 0x974a80ddd0062cbe)
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