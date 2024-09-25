#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::s_ole_tls_data_t const*), "ModernSTAState._pTls", p_tls, 0x40, 0x40, true, 0xd4c89313e7829c8f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint32_t), "ModernSTAState.dwThreadId", dw_thread_id, 0x180, 0x20, true, 0x5cec867a6f7e15c6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::srwlock_t), "ModernSTAState.lock", lock, 0x1c0, 0x40, true, 0x8a3eb19d47915456)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "ModernSTAState.bInWaitContext", b_in_wait_context, 0x200, 0x1, true, 0x788bc34d88589014, 1, uint8_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "ModernSTAState.bInKernelWait", b_in_kernel_wait, 0x201, 0x1, true, 0x57ae95ea36aeca0b, 1, uint8_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "ModernSTAState.bHandlingPriorityEvents", b_handling_priority_events, 0x202, 0x1, true, 0xb428b01a2a5ea0ce, 1, uint8_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "ModernSTAState.bWaitContextDispatchesAllCalls", b_wait_context_dispatches_all_calls, 0x203, 0x1, true, 0x8afd4f2adbe64d9f, 1, uint8_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "ModernSTAState.bSavedLogicalThreadIdForInDoubtCallInfo", b_saved_logical_thread_id_for_in_doubt_call_info, 0x204, 0x1, true, 0xa72ab3104918d6f9, 1, uint8_t)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::blocking_reason_t), "ModernSTAState.blockingReason", blocking_reason, 0x220, 0x20, true, 0x2f1933208c0b9c2a)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "ModernSTAState.outgoingCallLogicalThreadId", outgoing_call_logical_thread_id, 0x240, 0x80, true, 0x8b99c954914ed194)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "ModernSTAState.uCallTakeANumber", u_call_take_a_number, 0x2c0, 0x40, true, 0xf3918920e9855875)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::i_message_param_list_t), "ModernSTAState.priorityEvents", priority_events, 0x300, 0x80, true, 0x9287c07d320ec845)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::i_message_param_list_t), "ModernSTAState.deferredOutgoingRemReleaseCalls", deferred_outgoing_rem_release_calls, 0x380, 0x80, true, 0xc99d0bbf7c1e23b4)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::i_message_param_list_t), "ModernSTAState.winrtAsyncResponses", winrt_async_responses, 0x400, 0x80, true, 0x4166d96316b3b704)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::i_message_param_list_t), "ModernSTAState.winrtAsyncServerContinuationMessages", winrt_async_server_continuation_messages, 0x480, 0x80, true, 0x9feb3ee35b429e90)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::modern_sta_incoming_call_list_t), "ModernSTAState.dispatchableCalls", dispatchable_calls, 0x500, 0x80, true, 0xe90b5864e45ddf81)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::modern_sta_incoming_call_list_t), "ModernSTAState.queuedCalls", queued_calls, 0x580, 0x80, true, 0x2f9cc4994c142d68)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "ModernSTAState.uQueuedCallsSequence", u_queued_calls_sequence, 0x600, 0x40, true, 0x3489c74516bf48e2)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ModernSTAState.dwCachedNextQueuedCallTimeout", dw_cached_next_queued_call_timeout, 0x640, 0x20, true, 0x3a428a07339de93d)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "ModernSTAState.uCachedNextQueuedCallTimeoutSequence", u_cached_next_queued_call_timeout_sequence, 0x680, 0x40, true, 0x9c4ca1f2fc1be7e)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ModernSTAState.dwCurrentKernelWaitTimeout", dw_current_kernel_wait_timeout, 0x6c0, 0x20, true, 0x803c1e74e6b11cfa)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "ModernSTAState.currentKernelWaitStartTime", current_kernel_wait_start_time, 0x700, 0x40, true, 0x8e7b9fe61d9760da)
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
#define _m19
#define _m20
#define _m21
#endif