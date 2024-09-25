#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NdrDcomAsyncCallState.Signature", signature, 0x0, 0x20, true, 0x7f9c59cc30b1df88)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NdrDcomAsyncCallState.Lock", lock, 0x20, 0x20, true, 0xb31d2e9ba8d40316)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NdrDcomAsyncCallState.pAsyncMsg", p_async_msg, 0x40, 0x40, true, 0x89acc8d91559a6ae)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ndr_dcom_async_flags_t), "_NdrDcomAsyncCallState.Flags", flags, 0x80, 0x20, true, 0xa6d523d55affc3e2)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::hresult), "_NdrDcomAsyncCallState.Hr", hr, 0xa0, 0x20, true, 0x9aea76a066dc9669)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif