#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::s_ole_tls_data_t const*), "BridgeSTAState._pTls", p_tls, 0x40, 0x40, true, 0x3c205469ea66904d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint32_t), "BridgeSTAState.dwThreadId", dw_thread_id, 0x180, 0x20, true, 0x8443018316520340)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::srwlock_t), "BridgeSTAState.lock", lock, 0x1c0, 0x40, true, 0xce4a1e992fd33a17)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "BridgeSTAState.bInWaitContext", b_in_wait_context, 0x200, 0x1, true, 0xed39567ff0f6be48, 1, uint8_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "BridgeSTAState.bInKernelWait", b_in_kernel_wait, 0x201, 0x1, true, 0x9e925936d24c65d, 1, uint8_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "BridgeSTAState.bHandlingPriorityEvents", b_handling_priority_events, 0x202, 0x1, true, 0xd8593ac4bf729755, 1, uint8_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "BridgeSTAState.bWaitContextDispatchesAllCalls", b_wait_context_dispatches_all_calls, 0x203, 0x1, true, 0x8210bfbf6cf41768, 1, uint8_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "BridgeSTAState.bSavedLogicalThreadIdForInDoubtCallInfo", b_saved_logical_thread_id_for_in_doubt_call_info, 0x204, 0x1, true, 0x905bc6d1c17f324f, 1, uint8_t)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::blocking_reason_t), "BridgeSTAState.blockingReason", blocking_reason, 0x220, 0x20, true, 0x6668f30c3d51739d)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "BridgeSTAState.outgoingCallLogicalThreadId", outgoing_call_logical_thread_id, 0x240, 0x80, true, 0x7d6e9c79f2396cda)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "BridgeSTAState.uCallTakeANumber", u_call_take_a_number, 0x2c0, 0x40, true, 0xa303dcad9d182bb4)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::i_message_param_list_t), "BridgeSTAState.priorityEvents", priority_events, 0x300, 0x80, true, 0xa33982186d4f0c5f)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::i_message_param_list_t), "BridgeSTAState.deferredOutgoingRemReleaseCalls", deferred_outgoing_rem_release_calls, 0x380, 0x80, true, 0x14ff49d739152158)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::i_message_param_list_t), "BridgeSTAState.winrtAsyncResponses", winrt_async_responses, 0x400, 0x80, true, 0x36459d5d599e8932)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::i_message_param_list_t), "BridgeSTAState.winrtAsyncServerContinuationMessages", winrt_async_server_continuation_messages, 0x480, 0x80, true, 0x213dfe22fb562674)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::modern_sta_incoming_call_list_t), "BridgeSTAState.dispatchableCalls", dispatchable_calls, 0x500, 0x80, true, 0x7928fb00e5874748)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::modern_sta_incoming_call_list_t), "BridgeSTAState.queuedCalls", queued_calls, 0x580, 0x80, true, 0x91888b04935e7b34)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "BridgeSTAState.uQueuedCallsSequence", u_queued_calls_sequence, 0x600, 0x40, true, 0xe8212bc274996727)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "BridgeSTAState.dwCachedNextQueuedCallTimeout", dw_cached_next_queued_call_timeout, 0x640, 0x20, true, 0xf93ff23a3e7e5bf5)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "BridgeSTAState.uCachedNextQueuedCallTimeoutSequence", u_cached_next_queued_call_timeout_sequence, 0x680, 0x40, true, 0xd52c70b7ca2e135a)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "BridgeSTAState.dwCurrentKernelWaitTimeout", dw_current_kernel_wait_timeout, 0x6c0, 0x20, true, 0x64096c5d944dfb56)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "BridgeSTAState.currentKernelWaitStartTime", current_kernel_wait_start_time, 0x700, 0x40, true, 0x4cc5d98a2549c0d2)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "BridgeSTAState._astaCallReentrancyGuardExplicitlyEnabled", asta_call_reentrancy_guard_explicitly_enabled, 0x740, 0x8, true, 0x39cb4e872643cbee)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "BridgeSTAState._incomingWinrtAsyncCallCount", incoming_winrt_async_call_count, 0x760, 0x20, true, 0xd48e0aad98847dfb)
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
#define _m22
#define _m23
#endif