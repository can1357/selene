#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NdrDcomAsyncFlags.AsyncMsgSet", async_msg_set, 0x0, 0x1, true, 0x98b8e5fe2c66ed32, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NdrDcomAsyncFlags.BeginStarted", begin_started, 0x1, 0x1, true, 0x68de41370e1e0635, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NdrDcomAsyncFlags.BeginDone", begin_done, 0x2, 0x1, true, 0xbf02952a6b536558, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NdrDcomAsyncFlags.FinishStarted", finish_started, 0x3, 0x1, true, 0x6d22583d0336a591, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NdrDcomAsyncFlags.FinishDone", finish_done, 0x4, 0x1, true, 0x6b8a39d2d409b4b, 1, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NdrDcomAsyncFlags.BeginError", begin_error, 0x5, 0x1, true, 0xb04a599878abf947, 1, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NdrDcomAsyncFlags.FinishError", finish_error, 0x6, 0x1, true, 0xa44e0527825ec9b3, 1, uint32_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NdrDcomAsyncFlags.InvokeForwarded", invoke_forwarded, 0x7, 0x1, true, 0x7ff7a2d6291e6064, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif