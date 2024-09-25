#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_STOR_LOG_DIAG_EVENT_ARGS.TraceContext", trace_context, 0x0, 0x40, true, 0xc532fe17160bc959)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_STOR_LOG_DIAG_EVENT_ARGS.ContextEvent", context_event, 0x40, 0x40, true, 0x5959c0aa0b898007)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_LOG_DIAG_EVENT_ARGS.result", result, 0x80, 0x20, true, 0xbf00412242b3d9ea)
#else
#define _m00
#define _m01
#define _m02
#endif