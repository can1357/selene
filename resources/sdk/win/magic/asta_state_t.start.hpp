#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::srwlock_t), "ASTAState.lock", lock, 0x1c0, 0x40, true, 0x705aed1a3dbbcd28)
#define _m001 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "ASTAState.bInWaitContext", b_in_wait_context, 0x200, 0x1, true, 0x45cea339832af90f, 1, uint8_t)
#define _m002 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "ASTAState.bInKernelWait", b_in_kernel_wait, 0x201, 0x1, true, 0xa52eebba613f4528, 1, uint8_t)
#define _m003 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "ASTAState.bHandlingPriorityEvents", b_handling_priority_events, 0x202, 0x1, true, 0xe326512c74a25431, 1, uint8_t)
#define _m004 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "ASTAState.bWaitContextDispatchesAllCalls", b_wait_context_dispatches_all_calls, 0x203, 0x1, true, 0x33e10ea206569ac2, 1, uint8_t)
#define _m005 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "ASTAState.bSavedLogicalThreadIdForInDoubtCallInfo", b_saved_logical_thread_id_for_in_doubt_call_info, 0x204, 0x1, true, 0xf80820f2f7a09b97, 1, uint8_t)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::blocking_reason_t), "ASTAState.blockingReason", blocking_reason, 0x220, 0x20, true, 0xaca7b3359d192dd0)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "ASTAState.outgoingCallLogicalThreadId", outgoing_call_logical_thread_id, 0x240, 0x80, true, 0x26634f7c00a1a58d)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "ASTAState.uCallTakeANumber", u_call_take_a_number, 0x2c0, 0x40, true, 0x4cbef76b09af2abe)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::i_message_param_list_t), "ASTAState.priorityEvents", priority_events, 0x300, 0x80, true, 0x3e50cf5da6ca19ad)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::i_message_param_list_t), "ASTAState.deferredOutgoingRemReleaseCalls", deferred_outgoing_rem_release_calls, 0x380, 0x80, true, 0xc810e4a757aa9a08)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::i_message_param_list_t), "ASTAState.winrtAsyncResponses", winrt_async_responses, 0x400, 0x80, true, 0x6b1d7126f2c2e50e)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::i_message_param_list_t), "ASTAState.winrtAsyncServerContinuationMessages", winrt_async_server_continuation_messages, 0x480, 0x80, true, 0x8aafbd5068c5af52)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<class win::asta_incoming_call_list_t, class win::modern_sta_incoming_call_list_t>), "ASTAState.dispatchableCalls", dispatchable_calls, 0x500, 0x80, true, 0xb337aa11d4c1d215)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<class win::asta_incoming_call_list_t, class win::modern_sta_incoming_call_list_t>), "ASTAState.queuedCalls", queued_calls, 0x580, 0x80, true, 0x2fb61c0bf6f07ecf)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "ASTAState.uQueuedCallsSequence", u_queued_calls_sequence, 0x600, 0x40, true, 0xf3fcdcce3c5c1fb3)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ASTAState.dwCachedNextQueuedCallTimeout", dw_cached_next_queued_call_timeout, 0x640, 0x20, true, 0x43d82a1550797260)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "ASTAState.uCachedNextQueuedCallTimeoutSequence", u_cached_next_queued_call_timeout_sequence, 0x680, 0x40, true, 0x5664f73734e17293)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ASTAState.dwCurrentKernelWaitTimeout", dw_current_kernel_wait_timeout, 0x6c0, 0x20, true, 0x38b103bd56e1aef5)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "ASTAState.guidSavedLogicalThreadIdForInDoubtCallInfo", guid_saved_logical_thread_id_for_in_doubt_call_info, 0x800, 0x80, true, 0xbaae524f73125cf8)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::s_ole_tls_data_t const*), "ASTAState._pTls", p_tls, 0x40, 0x40, true, 0x92e7ba4e850a02bb)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint32_t), "ASTAState.dwThreadId", dw_thread_id, 0x180, 0x20, true, 0x956cda208afeaf2)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "ASTAState.currentKernelWaitStartTime", current_kernel_wait_start_time, 0x700, 0x40, true, 0x4e617bddb375922d)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ASTAState._pendingGitRegistrationCount", pending_git_registration_count, 0x7c0, 0x20, true, 0xbc179a9ac31ad96a)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "ASTAState._waitingForPendingGitRegistrations", waiting_for_pending_git_registrations, 0x7e0, 0x8, true, 0x528e4e112b07c267)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "ASTAState.uCurrentKernelWaitInitialTickCount", u_current_kernel_wait_initial_tick_count, 0x0, 0x0, false, 0x4d155f4873a7a2f9)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#endif