#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ktimer_t), "_ETIMER.KeTimer", ke_timer, 0x0, 0x0, true, 0xd995105c6cdf8c70)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETIMER.Lock", lock, 0x200, 0x40, true, 0x4118fc93ebd6ca5c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kapc_t), "_ETIMER.TimerApc", timer_apc, 0x240, 0xc0, true, 0x8808b8f3cbcca590)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t), "_ETIMER.TimerDpc", timer_dpc, 0x500, 0x0, true, 0x651eff091d27f39e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_ETIMER.ActiveTimerListEntry", active_timer_list_entry, 0x700, 0x80, true, 0x662318b6504985c2)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETIMER.Period", period, 0x780, 0x20, true, 0x79b7edbdb431b481)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "_ETIMER.TimerFlags", timer_flags, 0x7a0, 0x8, true, 0xa0d0c4f1629b0743)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETIMER.ApcAssociated", apc_associated, 0x7a0, 0x1, true, 0x681b589bd052d375, 1, uint8_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETIMER.FlushDpcs", flush_dpcs, 0x7a1, 0x1, true, 0xb82e9930c76cae25, 1, uint8_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETIMER.Paused", paused, 0x7a2, 0x1, true, 0x41751eba7162cd6b, 1, uint8_t)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ETIMER.DueTimeType", due_time_type, 0x7a8, 0x8, true, 0x7a46af202fb0c23b)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::diagnostic_context_t volatile*), "_ETIMER.WakeReason", wake_reason, 0x7c0, 0x40, true, 0x5d3ab1c7a7ecf332)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_ETIMER.WakeTimerListEntry", wake_timer_list_entry, 0x800, 0x80, true, 0xa5ecdc8fcf92bd59)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETIMER.VirtualizedTimerCookie", virtualized_timer_cookie, 0x880, 0x40, true, 0x581ee6bd8c172ad6)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_ETIMER.VirtualizedTimerLinks", virtualized_timer_links, 0x8c0, 0x80, true, 0x4acfd509777c1345)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETIMER.DueTime", due_time, 0x940, 0x40, true, 0xc910f708978d0d4a)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETIMER.CoalescingWindow", coalescing_window, 0x980, 0x20, true, 0x8a0b302d045f1202)
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
#define _m16
#endif