#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct hid::state_log_t, 64>), "_SM_CONTEXT.StateHistory", state_history, 0x0, 0x0, true, 0xc1f7b127f2ef1d99)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<union hid::event_t, 16>), "_SM_CONTEXT.EventHistory", event_history, 0x1800, 0x0, true, 0xb90eaf1b4677736a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SM_CONTEXT.StateHistoryIndex", state_history_index, 0x1a00, 0x8, true, 0xa2be4712159cd4ae)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SM_CONTEXT.EventHistoryIndex", event_history_index, 0x1a08, 0x8, true, 0xfe0077ce28328b85)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SM_CONTEXT.StateMachineLock", state_machine_lock, 0x1a40, 0x40, true, 0x1d8e5daefd735f96)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SM_CONTEXT.StateMachineRunning", state_machine_running, 0x1a80, 0x8, true, 0x518ffd6d666a94a6)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<union hid::state_t, 7>), "_SM_CONTEXT.CurrentState", current_state, 0x1aa0, 0xe0, true, 0xfa59f98dd5ad6d48)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SM_CONTEXT.CurrentStateDepth", current_state_depth, 0x1b80, 0x20, true, 0x54b8d15c1a68a601)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct hid::event_queue_t), "_SM_CONTEXT.EventQueue", event_queue, 0x1ba0, 0x20, true, 0x2f8247450e600316)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SM_CONTEXT.SubSmFlags", sub_sm_flags, 0x1dc0, 0x20, true, 0x85847d6261f652fe)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SM_CONTEXT.ParentContext", parent_context, 0x1e00, 0x40, true, 0x7508047c23e76955)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct hid::state_entry_t**), "_SM_CONTEXT.StateTable", state_table, 0x1e40, 0x40, true, 0x252f44093678d512)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SM_CONTEXT.StartIndex", start_index, 0x1e80, 0x20, true, 0x942679f393a7de8d)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::workitem_t*), "_SM_CONTEXT.WorkItem", work_item, 0x1ec0, 0x40, true, 0x8eecd1b4b14ed78c)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_SM_CONTEXT.CurrentActivityId", current_activity_id, 0x1f00, 0x80, true, 0x847fea56236a939b)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SM_CONTEXT.DebugBreakOnStateTransition", debug_break_on_state_transition, 0x1f80, 0x8, true, 0xd89e25521e8ddd77)
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
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#endif