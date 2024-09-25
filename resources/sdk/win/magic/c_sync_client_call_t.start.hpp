#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const class win::cached_call_event_t), "CSyncClientCall._eventClientSignal", event_client_signal, 0x780, 0x80, true, 0x9c20183ee90ff51c)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "CSyncClientCall._bWinrtAsyncMethod", b_winrt_async_method, 0x800, 0x1, true, 0xb21062569346be7c, 1, uint8_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "CSyncClientCall._bUsesThreadLocalDispatch", b_uses_thread_local_dispatch, 0x801, 0x1, true, 0x4e8a3034762e6901, 1, uint8_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "CSyncClientCall._bPushedInCallTable", b_pushed_in_call_table, 0x803, 0x1, true, 0x55c9dec6e1e0c3c0, 1, uint8_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "CSyncClientCall._bDontSupportCoGetCancelObject", b_dont_support_co_get_cancel_object, 0x804, 0x1, true, 0x3f0e4dccb43fa3bb, 1, uint8_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "CSyncClientCall._targetIsRundownObjectOfInterest", target_is_rundown_object_of_interest, 0x802, 0x1, true, 0xc33f320afca0b687, 1, uint8_t)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CSyncClientCall._retryCount", retry_count, 0x820, 0x20, true, 0x3a442ced37dd23aa)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif