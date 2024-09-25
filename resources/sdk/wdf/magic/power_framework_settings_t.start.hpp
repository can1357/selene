#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_POWER_FRAMEWORK_SETTINGS.Size", size, 0x0, 0x20, true, 0xbe5c2c8c43317c44)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfn_wdfdevice_wdm_post_po_fx_register_device_t ), "_WDF_POWER_FRAMEWORK_SETTINGS.EvtDeviceWdmPostPoFxRegisterDevice", evt_device_wdm_post_po_fx_register_device, 0x40, 0x40, true, 0x32dbe3d6856fa274)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfn_wdfdevice_wdm_pre_po_fx_unregister_device_t ), "_WDF_POWER_FRAMEWORK_SETTINGS.EvtDeviceWdmPrePoFxUnregisterDevice", evt_device_wdm_pre_po_fx_unregister_device, 0x80, 0x40, true, 0xb385d159626ff72a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct po::fx_component_v1_t*), "_WDF_POWER_FRAMEWORK_SETTINGS.Component", component, 0xc0, 0x40, true, 0x56b986e1dcac82)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t)>*), "_WDF_POWER_FRAMEWORK_SETTINGS.ComponentActiveConditionCallback", component_active_condition_callback, 0x100, 0x40, true, 0xb65ac28286e7b958)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t)>*), "_WDF_POWER_FRAMEWORK_SETTINGS.ComponentIdleConditionCallback", component_idle_condition_callback, 0x140, 0x40, true, 0x117234fce7863c9f)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t, uint32_t)>*), "_WDF_POWER_FRAMEWORK_SETTINGS.ComponentIdleStateCallback", component_idle_state_callback, 0x180, 0x40, true, 0x420a72f42beb76be)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(ppo_fx_power_control_callback_t ), "_WDF_POWER_FRAMEWORK_SETTINGS.PowerControlCallback", power_control_callback, 0x1c0, 0x40, true, 0x1dd5360b0d7b9fb3)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_WDF_POWER_FRAMEWORK_SETTINGS.PoFxDeviceContext", po_fx_device_context, 0x200, 0x40, true, 0xc3e11c2ee29df64d)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_POWER_FRAMEWORK_SETTINGS.PoFxDeviceFlags", po_fx_device_flags, 0x240, 0x40, true, 0xa0cf65ebb2be359a)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_POWER_FRAMEWORK_SETTINGS.DirectedPoFxEnabled", directed_po_fx_enabled, 0x280, 0x20, true, 0x490144856c1d0e91)
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