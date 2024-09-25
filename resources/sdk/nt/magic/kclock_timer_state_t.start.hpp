#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KCLOCK_TIMER_STATE.NextTickDueTime", next_tick_due_time, 0x0, 0x0, false, 0x2839f696872ad097)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KCLOCK_TIMER_STATE.TimeIncrement", time_increment, 0x0, 0x0, false, 0x3e4e134c1419d342)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KCLOCK_TIMER_STATE.LastRequestedTimeIncrement", last_requested_time_increment, 0x0, 0x0, false, 0x459425ad16219545)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::kclock_timer_one_shot_state_t), "_KCLOCK_TIMER_STATE.OneShotState", one_shot_state, 0x0, 0x0, false, 0xf36182e4ca4114c9)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::kclock_timer_deadline_type_t), "_KCLOCK_TIMER_STATE.ExpectedWakeReason", expected_wake_reason, 0x0, 0x0, false, 0x6bc846434e4a8982)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::kclock_timer_deadline_entry_t, 7>), "_KCLOCK_TIMER_STATE.ClockTimerEntries", clock_timer_entries, 0x0, 0x0, false, 0xf11ce5239beeb24e)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KCLOCK_TIMER_STATE.ClockActive", clock_active, 0x0, 0x0, false, 0x77b96ffba174296)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KCLOCK_TIMER_STATE.ClockTickTraceIndex", clock_tick_trace_index, 0x0, 0x0, false, 0xc4eed9e4a1c3fb9c)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KCLOCK_TIMER_STATE.ClockIncrementTraceIndex", clock_increment_trace_index, 0x0, 0x0, false, 0x79be991389602f58)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::kclock_tick_trace_t, 16>), "_KCLOCK_TIMER_STATE.ClockTickTraces", clock_tick_traces, 0x0, 0x0, false, 0x8a129d3237292252)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::kclock_increment_trace_t, 16>), "_KCLOCK_TIMER_STATE.ClockIncrementTraces", clock_increment_traces, 0x0, 0x0, false, 0x61a11346c22f2b)
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
#endif