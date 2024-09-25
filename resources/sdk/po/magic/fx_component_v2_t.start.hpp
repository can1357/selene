#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_PO_FX_COMPONENT_V2.Id", id, 0x0, 0x80, true, 0x8409a8d63d804a57)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_FX_COMPONENT_V2.Flags", flags, 0x80, 0x40, true, 0xedd575ea77cbb366)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PO_FX_COMPONENT_V2.DeepestWakeableIdleState", deepest_wakeable_idle_state, 0xc0, 0x20, true, 0x2e32d10ec07002af)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PO_FX_COMPONENT_V2.IdleStateCount", idle_state_count, 0xe0, 0x20, true, 0x1a7b5bb7c6fd9c2)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct po::fx_component_idle_state_t*), "_PO_FX_COMPONENT_V2.IdleStates", idle_states, 0x100, 0x40, true, 0x9e44ffde3904f541)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PO_FX_COMPONENT_V2.ProviderCount", provider_count, 0x140, 0x20, true, 0x3f7c8bbcf15cd257)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t*), "_PO_FX_COMPONENT_V2.Providers", providers, 0x180, 0x40, true, 0x23eef59bbb01abf9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif