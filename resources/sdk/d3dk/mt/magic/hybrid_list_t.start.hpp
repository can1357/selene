#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mt::gpu_preference_query_state_t), "_D3DKMT_HYBRID_LIST.State", state, 0x0, 0x20, true, 0xb5d8e145f397ee91)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_D3DKMT_HYBRID_LIST.AdapterLuid", adapter_luid, 0x20, 0x40, true, 0x1177f225f3e6cc34)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_D3DKMT_HYBRID_LIST.bUserPreferenceQuery", b_user_preference_query, 0x60, 0x20, true, 0x43a2b3faafa46a0e)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mt::gpu_preference_query_type_t), "_D3DKMT_HYBRID_LIST.QueryType", query_type, 0x80, 0x20, true, 0x90fbc3f917c233cd)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif