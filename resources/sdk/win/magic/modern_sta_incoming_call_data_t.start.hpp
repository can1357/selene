#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "ModernSTAIncomingCallData.uCallNumber", u_call_number, 0x0, 0x40, true, 0xd421c940071c2aa4)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "ModernSTAIncomingCallData.bQueuedInCurrentKernelWait", b_queued_in_current_kernel_wait, 0x40, 0x1, true, 0xdbce803d47e737de, 1, uint8_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "ModernSTAIncomingCallData.bWouldHaveTimedOutIfNotExtended", b_would_have_timed_out_if_not_extended, 0x41, 0x1, true, 0x62a86e8e2dc62657, 1, uint8_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "ModernSTAIncomingCallData.bMarkedForTimeoutHandling", b_marked_for_timeout_handling, 0x42, 0x1, true, 0x4cd7b7c8e84ef564, 1, uint8_t)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ModernSTAIncomingCallData.dwAccumulatedWaitTime", dw_accumulated_wait_time, 0x60, 0x20, true, 0x314f8395431be645)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "ModernSTAIncomingCallData.queuedTime", queued_time, 0x80, 0x40, true, 0xf16e75c62aaf2f03)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "ModernSTAIncomingCallData.queuedTickCount", queued_tick_count, 0xc0, 0x40, true, 0x977acea1b8b3bea7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif