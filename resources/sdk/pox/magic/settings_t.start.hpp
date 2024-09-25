#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdevice_wdm_post_po_fx_register_device_t ), "_POX_SETTINGS.EvtDeviceWdmPostPoFxRegisterDevice", evt_device_wdm_post_po_fx_register_device, 0x0, 0x40, true, 0x84651374b9125444)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfdevice_wdm_pre_po_fx_unregister_device_t ), "_POX_SETTINGS.EvtDeviceWdmPrePoFxUnregisterDevice", evt_device_wdm_pre_po_fx_unregister_device, 0x40, 0x40, true, 0x433150632608d82e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct po::fx_component_v1_t*), "_POX_SETTINGS.Component", component, 0x80, 0x40, true, 0x461abe94c15d88ec)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t)>*), "_POX_SETTINGS.ComponentActiveConditionCallback", component_active_condition_callback, 0xc0, 0x40, true, 0xf7bf395bb1eda11a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t)>*), "_POX_SETTINGS.ComponentIdleConditionCallback", component_idle_condition_callback, 0x100, 0x40, true, 0x841a8542fda390bf)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t, uint32_t)>*), "_POX_SETTINGS.ComponentIdleStateCallback", component_idle_state_callback, 0x140, 0x40, true, 0xe670f7130992984d)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(ppo_fx_power_control_callback_t ), "_POX_SETTINGS.PowerControlCallback", power_control_callback, 0x180, 0x40, true, 0xa8d8e75eae938615)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_POX_SETTINGS.PoFxDeviceContext", po_fx_device_context, 0x1c0, 0x40, true, 0x6ad8a70c18fe006d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif