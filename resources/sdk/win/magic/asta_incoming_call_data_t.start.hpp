#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "ASTAIncomingCallData.uCallNumber", u_call_number, 0x0, 0x0, false, 0xb10069bc2470f4b6)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "ASTAIncomingCallData.bQueuedInCurrentKernelWait", b_queued_in_current_kernel_wait, 0x0, 0x0, false, 0xbace77962f2d573e, 1, uint8_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "ASTAIncomingCallData.bMarkedForTimeoutHandling", b_marked_for_timeout_handling, 0x0, 0x0, false, 0x114ff39335c06b13, 1, uint8_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "ASTAIncomingCallData.uQueuedTickCount", u_queued_tick_count, 0x0, 0x0, false, 0x1a71e863ddb019e4)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ASTAIncomingCallData.dwAccumulatedWaitTime", dw_accumulated_wait_time, 0x0, 0x0, false, 0xa8eac480a94c7917)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif