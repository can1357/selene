#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WireWinrtAsyncCallResponseBlockPart1.asyncStatus", async_status, 0x0, 0x20, true, 0xce9405293c2581d5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "WireWinrtAsyncCallResponseBlockPart1.uServerCausalityTraceId", u_server_causality_trace_id, 0x40, 0x40, true, 0xec97684a5c24b5ed)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WireWinrtAsyncCallResponseBlockPart1.unique", unique, 0x120, 0x20, true, 0x33c69248d5f31509)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "WireWinrtAsyncCallResponseBlockPart1.completionTraceActivity", completion_trace_activity, 0x80, 0x80, true, 0xa49936dea377419b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif