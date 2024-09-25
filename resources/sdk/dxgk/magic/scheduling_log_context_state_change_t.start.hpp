#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGK_SCHEDULING_LOG_CONTEXT_STATE_CHANGE.hKmdContext", h_kmd_context, 0x0, 0x40, true, 0x963bb0511cc6d03)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgk::scheduling_log_context_state_t), "_DXGK_SCHEDULING_LOG_CONTEXT_STATE_CHANGE.newContextState", new_context_state, 0x40, 0x20, true, 0x94a7d7c480cd7c2a)
#else
#define _m00
#define _m01
#endif