#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_TIMER_SET_COALESCABLE_TIMER_INFO.DueTime", due_time, 0x0, 0x40, true, 0xa1f0fccc05860201)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t, int32_t)>*), "_TIMER_SET_COALESCABLE_TIMER_INFO.TimerApcRoutine", timer_apc_routine, 0x40, 0x40, true, 0x698b18eb34bb2d07)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_TIMER_SET_COALESCABLE_TIMER_INFO.TimerContext", timer_context, 0x80, 0x40, true, 0xe3b20a2c1de29868)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::counted_reason_context_t*), "_TIMER_SET_COALESCABLE_TIMER_INFO.WakeContext", wake_context, 0xc0, 0x40, true, 0x92b1bd21d1ea5ae5)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TIMER_SET_COALESCABLE_TIMER_INFO.Period", period, 0x100, 0x20, true, 0xa190fbbbfa3bbfe0)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TIMER_SET_COALESCABLE_TIMER_INFO.TolerableDelay", tolerable_delay, 0x120, 0x20, true, 0xb8ad49577ed68cf6)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t*), "_TIMER_SET_COALESCABLE_TIMER_INFO.PreviousState", previous_state, 0x140, 0x40, true, 0xdd990c526d8a38ef)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif