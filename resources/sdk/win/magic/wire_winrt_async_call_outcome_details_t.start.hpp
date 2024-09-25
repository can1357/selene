#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::midl_xmit_defs_0004_t), "WireWinrtAsyncCallOutcomeDetails.outcome", outcome, 0x0, 0x20, true, 0x1fcd833ee32e1bc0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::midl_xmit_defs_0004_t), "WireWinrtAsyncCallOutcomeDetails.switchIs", switch_is, 0x20, 0x20, true, 0x87c63ecbde50df6c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::wire_winrt_async_call_success_details_part1_t), "WireWinrtAsyncCallOutcomeDetails.successDetails", success_details, 0x40, 0x80, true, 0xde3c74477d0189ec)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::wire_winrt_async_call_failure_details_part1_t), "WireWinrtAsyncCallOutcomeDetails.failureDetails", failure_details, 0x40, 0xc0, true, 0xcadd5f194bafd3db)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif