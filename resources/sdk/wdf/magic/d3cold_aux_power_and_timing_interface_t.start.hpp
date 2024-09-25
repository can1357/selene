#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_D3COLD_AUX_POWER_AND_TIMING_INTERFACE.Size", size, 0x0, 0x10, true, 0xd73f45b51be5fdbe)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_D3COLD_AUX_POWER_AND_TIMING_INTERFACE.Version", version, 0x10, 0x10, true, 0xc5c1e2d3aa22837)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3COLD_AUX_POWER_AND_TIMING_INTERFACE.Context", context, 0x40, 0x40, true, 0x9f15aac487e8183f)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_D3COLD_AUX_POWER_AND_TIMING_INTERFACE.InterfaceReference", interface_reference, 0x80, 0x40, true, 0xa139b8aa56680fc)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_D3COLD_AUX_POWER_AND_TIMING_INTERFACE.InterfaceDereference", interface_dereference, 0xc0, 0x40, true, 0x2d4947460cc1f2f8)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint8_t)>*), "_D3COLD_AUX_POWER_AND_TIMING_INTERFACE.RequestCorePowerRail", request_core_power_rail, 0x100, 0x40, true, 0x6fc054d37a4f5b5e)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pd3cold_request_aux_power_t ), "_D3COLD_AUX_POWER_AND_TIMING_INTERFACE.RequestAuxPower", request_aux_power, 0x140, 0x40, true, 0xcd9be3db6bcae72f)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t)>*), "_D3COLD_AUX_POWER_AND_TIMING_INTERFACE.RequestPerstDelay", request_perst_delay, 0x180, 0x40, true, 0x8a08549edad15c37)
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