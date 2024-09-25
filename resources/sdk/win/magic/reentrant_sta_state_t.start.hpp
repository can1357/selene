#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "ReentrantSTAState._astaCallReentrancyGuardExplicitlyEnabled", asta_call_reentrancy_guard_explicitly_enabled, 0x0, 0x8, true, 0xf2ef8871a5809b0e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ReentrantSTAState._incomingWinrtAsyncCallCount", incoming_winrt_async_call_count, 0x20, 0x20, true, 0xea25dc4c9f3e9ea1)
#else
#define _m00
#define _m01
#endif