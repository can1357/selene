#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct win::midl_stub_message_t*, void*)>*), "_SYNTAX_DISPATCH_TABLE.pfnInit", pfn_init, 0x0, 0x40, true, 0x4784b3b29b51bef1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfnsizing_t ), "_SYNTAX_DISPATCH_TABLE.pfnSizing", pfn_sizing, 0x40, 0x40, true, 0xa94555dc27b5751a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct win::midl_stub_message_t*)>*), "_SYNTAX_DISPATCH_TABLE.pfnMarshal", pfn_marshal, 0x80, 0x40, true, 0x7e49d8ca994eccb7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct win::midl_stub_message_t*, void*)>*), "_SYNTAX_DISPATCH_TABLE.pfnUnMarshal", pfn_un_marshal, 0xc0, 0x40, true, 0x6c31a344cb38de86)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfnclient_exception_handling_t ), "_SYNTAX_DISPATCH_TABLE.pfnExceptionHandling", pfn_exception_handling, 0x100, 0x40, true, 0xa583271f6cb5f4a2)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct win::midl_stub_message_t*, void*)>*), "_SYNTAX_DISPATCH_TABLE.pfnClientFinally", pfn_client_finally, 0x140, 0x40, true, 0x8b520616b02e5d11)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfngetbuffer_t ), "_SYNTAX_DISPATCH_TABLE.pfnGetBuffer", pfn_get_buffer, 0x180, 0x40, true, 0x2436b8a3236173f0)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct win::midl_stub_message_t*)>*), "_SYNTAX_DISPATCH_TABLE.pfnSendReceive", pfn_send_receive, 0x1c0, 0x40, true, 0x4e7b7427e6a02c2e)
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