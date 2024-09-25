#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint30_t), "_PS_INTERLOCKED_TIMER_DELAY_VALUES.DelayMs", delay_ms, 0x0, 0x1e, true, 0x3856935f6ebbc17, 30, uint64_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint30_t), "_PS_INTERLOCKED_TIMER_DELAY_VALUES.CoalescingWindowMs", coalescing_window_ms, 0x1e, 0x1e, true, 0xb12006d5031f7a7c, 30, uint64_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PS_INTERLOCKED_TIMER_DELAY_VALUES.NewTimerWheel", new_timer_wheel, 0x3d, 0x1, true, 0x857f171c09713148, 1, uint64_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PS_INTERLOCKED_TIMER_DELAY_VALUES.Retry", retry, 0x3e, 0x1, true, 0x341cf7ebe09f68c1, 1, uint64_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PS_INTERLOCKED_TIMER_DELAY_VALUES.Locked", locked, 0x3f, 0x1, true, 0x5426ac4452c88273, 1, uint64_t)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PS_INTERLOCKED_TIMER_DELAY_VALUES.All", all, 0x0, 0x40, true, 0x1bb21a2ac03f322a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif