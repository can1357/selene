#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGK_GRAPHICSPOWER_REGISTER_OUTPUT.DeviceHandle", device_handle, 0x0, 0x40, true, 0x8fd0b26b0a4a8025)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::device_power_state_t), "_DXGK_GRAPHICSPOWER_REGISTER_OUTPUT.InitialGrfxPowerState", initial_grfx_power_state, 0x40, 0x20, true, 0xf13624298a35e3cf)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgk_set_shared_power_component_state_t ), "_DXGK_GRAPHICSPOWER_REGISTER_OUTPUT.SetSharedPowerComponentStateCb", set_shared_power_component_state_cb, 0x80, 0x40, true, 0xe377e2dfa0a394e9)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*)>*), "_DXGK_GRAPHICSPOWER_REGISTER_OUTPUT.UnregisterCb", unregister_cb, 0xc0, 0x40, true, 0xc939de23e052d812)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif