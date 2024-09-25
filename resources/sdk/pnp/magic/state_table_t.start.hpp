#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_pnp_state_entry_function_t ), "PNP_STATE_TABLE.StateFunc", state_func, 0x0, 0x40, true, 0x95f765a1102f9797)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pnp::event_target_state_t), "PNP_STATE_TABLE.FirstTargetState", first_target_state, 0x40, 0x40, true, 0xe86599856d4dbe48)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct pnp::event_target_state_t*), "PNP_STATE_TABLE.OtherTargetStates", other_target_states, 0x80, 0x40, true, 0xd74ea9bf43eb5340)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union fx::pnp_state_info_t), "PNP_STATE_TABLE.StateInfo", state_info, 0xc0, 0x20, true, 0xc0f3ca23b15eb132)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif