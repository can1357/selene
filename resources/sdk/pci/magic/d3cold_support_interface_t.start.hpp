#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_D3COLD_SUPPORT_INTERFACE.Size", size, 0x0, 0x10, true, 0x8d1804a3db0e5d5f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_D3COLD_SUPPORT_INTERFACE.Version", version, 0x10, 0x10, true, 0x3ce6e5b9cecb983)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3COLD_SUPPORT_INTERFACE.Context", context, 0x40, 0x40, true, 0x5ddb2490924371d8)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_D3COLD_SUPPORT_INTERFACE.InterfaceReference", interface_reference, 0x80, 0x40, true, 0xa2cecb74c7be55)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_D3COLD_SUPPORT_INTERFACE.InterfaceDereference", interface_dereference, 0xc0, 0x40, true, 0x15d167c1c0d961d5)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint8_t)>*), "_D3COLD_SUPPORT_INTERFACE.SetD3ColdSupport", set_d3_cold_support, 0x100, 0x40, true, 0x6f7126fc6a51dad0)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pget_idle_wake_info_t ), "_D3COLD_SUPPORT_INTERFACE.GetIdleWakeInfo", get_idle_wake_info, 0x140, 0x40, true, 0x29fa9c540b2194da)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint8_t*)>*), "_D3COLD_SUPPORT_INTERFACE.GetD3ColdCapability", get_d3_cold_capability, 0x180, 0x40, true, 0x56446a814047d24a)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint8_t*)>*), "_D3COLD_SUPPORT_INTERFACE.GetBusDriverD3ColdSupport", get_bus_driver_d3_cold_support, 0x1c0, 0x40, true, 0xc3a1c20d6b1adbdc)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pget_d3cold_last_transition_status_t ), "_D3COLD_SUPPORT_INTERFACE.GetLastTransitionStatus", get_last_transition_status, 0x200, 0x40, true, 0xa5261b303e139b1a)
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