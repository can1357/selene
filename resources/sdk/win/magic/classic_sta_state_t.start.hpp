#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<class win::i_message_param_list_t, 8>), "ClassicSTAState.aMessageParamLists", a_message_param_lists, 0xc0, 0x0, true, 0x1be4fdeb8d182062)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "ClassicSTAState._astaCallReentrancyGuardExplicitlyEnabled", asta_call_reentrancy_guard_explicitly_enabled, 0x0, 0x8, true, 0x9f6593a50a1a2ca4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ClassicSTAState._incomingWinrtAsyncCallCount", incoming_winrt_async_call_count, 0x20, 0x20, true, 0x8b99b3d7045d2bda)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "ClassicSTAState.bASTACallReentrancyGuardExplicit", b_asta_call_reentrancy_guard_explicit, 0x0, 0x0, false, 0x4f1f9c6229121995)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "ClassicSTAState.bHasMessageFilter", b_has_message_filter, 0x0, 0x0, false, 0x7deec7f15199d158)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ClassicSTAState.cIncomingWinrtAsyncCalls", c_incoming_winrt_async_calls, 0x0, 0x0, false, 0x1cf11aa38f76e15)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif