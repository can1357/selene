#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_PO_FX_COMPONENT_V1.Id", id, 0x0, 0x80, true, 0xb26d0fe3a651388f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PO_FX_COMPONENT_V1.IdleStateCount", idle_state_count, 0x80, 0x20, true, 0xdb6609b2528cd3e0)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PO_FX_COMPONENT_V1.DeepestWakeableIdleState", deepest_wakeable_idle_state, 0xa0, 0x20, true, 0x217ad123a0a6d65)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct po::fx_component_idle_state_t*), "_PO_FX_COMPONENT_V1.IdleStates", idle_states, 0xc0, 0x40, true, 0x8d7fe400b326f906)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif