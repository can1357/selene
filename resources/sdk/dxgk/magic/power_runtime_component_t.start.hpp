#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_POWER_RUNTIME_COMPONENT.StateCount", state_count, 0x0, 0x20, true, 0xf9e5bae7ee5b75b5)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct dxgk::power_runtime_state_t, 8>), "_DXGK_POWER_RUNTIME_COMPONENT.States", states, 0x40, 0x0, true, 0x35eef2a48878dbbf)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::power_component_mapping_t), "_DXGK_POWER_RUNTIME_COMPONENT.ComponentMapping", component_mapping, 0x640, 0x40, true, 0x7779ebbea16b1039)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::power_component_flags_t), "_DXGK_POWER_RUNTIME_COMPONENT.Flags", flags, 0x680, 0x20, true, 0x6c7590463d71eb46)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_DXGK_POWER_RUNTIME_COMPONENT.ComponentGuid", component_guid, 0x6a0, 0x80, true, 0x5f22be26545203a6)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 40>), "_DXGK_POWER_RUNTIME_COMPONENT.ComponentName", component_name, 0x720, 0x40, true, 0x553b054e1b9196b)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_POWER_RUNTIME_COMPONENT.ProviderCount", provider_count, 0x860, 0x20, true, 0x6f7194f4c0edd826)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 16>), "_DXGK_POWER_RUNTIME_COMPONENT.Providers", providers, 0x880, 0x0, true, 0xf3e05132f5cb24c0)
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