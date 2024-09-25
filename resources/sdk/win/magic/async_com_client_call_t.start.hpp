#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::async_client_call_retry_context_t), "AsyncComClientCall._retryContext", retry_context, 0x780, 0x80, true, 0x5c046434c39f0537)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::hresult), "AsyncComClientCall._hrSend", hr_send, 0xa00, 0x20, true, 0xe6fa377f2480d3ca)
#else
#define _m00
#define _m01
#endif