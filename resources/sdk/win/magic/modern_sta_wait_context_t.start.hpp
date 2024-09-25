#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::s_ole_tls_data_t const*), "ModernSTAWaitContext._pTls", p_tls, 0x0, 0x40, true, 0x4e960cf6a0a04be1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::modern_sta_wait_context_t const*), "ModernSTAWaitContext._pPreviousWaitContext", p_previous_wait_context, 0x40, 0x40, true, 0xbf6902336d9e978)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "ModernSTAWaitContext._blockingReason", blocking_reason, 0x80, 0x2, true, 0x11fa3c769df55df9, 2, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "ModernSTAWaitContext._windowMessageDispatchBehavior", window_message_dispatch_behavior, 0x82, 0x2, true, 0x42c9c9d00ee9ba74, 2, uint32_t)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint32_t), "ModernSTAWaitContext._dwThreadIdWaitingFor", dw_thread_id_waiting_for, 0xa0, 0x20, true, 0x64965ae5658321e6)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint64_t), "ModernSTAWaitContext._startTime", start_time, 0xc0, 0x40, true, 0x40266c1f9ac09190)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile const uint64_t), "ModernSTAWaitContext._startTimeTickCount", start_time_tick_count, 0x100, 0x40, true, 0xb654c37485c3ff82)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "ModernSTAWaitContext._bAllWaitsAreAlertable", b_all_waits_are_alertable, 0x140, 0x1, true, 0x53cf997078d7b5fd, 1, uint8_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "ModernSTAWaitContext._bDispatchesAllCalls", b_dispatches_all_calls, 0x141, 0x1, true, 0xd866e0a5eaf6e2c, 1, uint8_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "ModernSTAWaitContext._bWaitedAtLeastOnce", b_waited_at_least_once, 0x142, 0x1, true, 0xee37931c3627d9e9, 1, uint8_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "ModernSTAWaitContext._bSawInputOrPaintMessageInThisLimitedDispatchContext", b_saw_input_or_paint_message_in_this_limited_dispatch_context, 0x143, 0x1, true, 0xd943819260d9861f, 1, uint8_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "ModernSTAWaitContext._bDroppedInputMessage", b_dropped_input_message, 0x144, 0x1, true, 0xee118643d0a1ef19, 1, uint8_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "ModernSTAWaitContext._bReportedDroppedKeyboard", b_reported_dropped_keyboard, 0x145, 0x1, true, 0xe8492761ff5eeb14, 1, uint8_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "ModernSTAWaitContext._bReportedDroppedMouse", b_reported_dropped_mouse, 0x146, 0x1, true, 0xbdfe6b94c5d978d6, 1, uint8_t)
#define _m14 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "ModernSTAWaitContext._bReportedDroppedQueueSync", b_reported_dropped_queue_sync, 0x147, 0x1, true, 0xb02a6dc08ef84c7e, 1, uint8_t)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t), "ModernSTAWaitContext._logicalThreadId", logical_thread_id, 0x160, 0x80, true, 0x7fb0f5cd9aa1316e)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_com_apartment_t&), "ModernSTAWaitContext._apartment", apartment, 0x200, 0x40, true, 0x948f4fcd570193d6)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::modern_sta_state_t&), "ModernSTAWaitContext._state", state, 0x240, 0x40, true, 0xd1531bd95adeaf1b)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ModernSTAWaitContext._dwAccumulatedWaitTime", dw_accumulated_wait_time, 0x280, 0x20, true, 0x40eb3e65c9e267b7)
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
#define _m17
#define _m18
#endif