#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::s_ole_tls_data_t const*), "ASTAWaitContext._pTls", p_tls, 0x0, 0x0, false, 0x2bad321c51b9d8c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::asta_wait_context_t const*), "ASTAWaitContext._pPreviousWaitContext", p_previous_wait_context, 0x0, 0x0, false, 0x865d16abe7689c16)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "ASTAWaitContext._blockingReason", blocking_reason, 0x0, 0x0, false, 0x59987f95886e36d9, 2, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "ASTAWaitContext._windowMessageDispatchBehavior", window_message_dispatch_behavior, 0x0, 0x0, false, 0xab04b2b4af5d83b6, 2, uint32_t)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint32_t), "ASTAWaitContext._dwThreadIdWaitingFor", dw_thread_id_waiting_for, 0x0, 0x0, false, 0x821273386b684fbe)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint64_t), "ASTAWaitContext._uStartTickCount", u_start_tick_count, 0x0, 0x0, false, 0xa4923b5b95e1cb69)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "ASTAWaitContext._bAllWaitsAreAlertable", b_all_waits_are_alertable, 0x0, 0x0, false, 0x42fb74e62d0c9e89, 1, uint8_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "ASTAWaitContext._bDispatchesAllCalls", b_dispatches_all_calls, 0x0, 0x0, false, 0xf028d9636f80cbd7, 1, uint8_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "ASTAWaitContext._bWaitedAtLeastOnce", b_waited_at_least_once, 0x0, 0x0, false, 0x738bc32ca722e7cb, 1, uint8_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "ASTAWaitContext._bSawInputOrPaintMessageInThisLimitedDispatchContext", b_saw_input_or_paint_message_in_this_limited_dispatch_context, 0x0, 0x0, false, 0x63cc28e8efab0634, 1, uint8_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "ASTAWaitContext._bDroppedInputMessage", b_dropped_input_message, 0x0, 0x0, false, 0x19ce213354bbe71d, 1, uint8_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "ASTAWaitContext._bReportedDroppedKeyboard", b_reported_dropped_keyboard, 0x0, 0x0, false, 0x8fb9b8df4436f1cc, 1, uint8_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "ASTAWaitContext._bReportedDroppedMouse", b_reported_dropped_mouse, 0x0, 0x0, false, 0x8a669c5b2d9bdb5e, 1, uint8_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "ASTAWaitContext._bReportedDroppedQueueSync", b_reported_dropped_queue_sync, 0x0, 0x0, false, 0x803114cde220e783, 1, uint8_t)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t), "ASTAWaitContext._logicalThreadId", logical_thread_id, 0x0, 0x0, false, 0x631a0fa002421f86)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_com_apartment_t&), "ASTAWaitContext._apartment", apartment, 0x0, 0x0, false, 0x896fb2645c677d9)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::asta_state_t&), "ASTAWaitContext._state", state, 0x0, 0x0, false, 0xd3beae3e78f88ff3)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ASTAWaitContext._dwAccumulatedWaitTime", dw_accumulated_wait_time, 0x0, 0x0, false, 0xc1ff520bccdd7c2a)
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
#endif