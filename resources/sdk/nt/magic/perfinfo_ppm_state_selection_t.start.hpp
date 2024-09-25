#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_PPM_STATE_SELECTION.SelectedState", selected_state, 0x0, 0x20, true, 0x80489c381fdd4feb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_PPM_STATE_SELECTION.VetoedStates", vetoed_states, 0x20, 0x20, true, 0xd802c5de2de3f3ab)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 1>), "_PERFINFO_PPM_STATE_SELECTION.VetoReason", veto_reason, 0x40, 0x20, true, 0x5f9d1882478b9323)
#else
#define _m00
#define _m01
#define _m02
#endif