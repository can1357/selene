#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "SyncServerCall._bWinrtAsyncMethod", b_winrt_async_method, 0x740, 0x1, true, 0x562e8788e9a79a90, 1, uint8_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "SyncServerCall._bUsesThreadLocalDispatch", b_uses_thread_local_dispatch, 0x741, 0x1, true, 0x9d9e18a9d4b0a6c8, 1, uint8_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::sync_stub_call_t), "SyncServerCall._stubCall", stub_call, 0x0, 0x0, false, 0xc4be48feb9b3a9d)
#else
#define _m00
#define _m01
#define _m02
#endif