#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_STOR_FREE_DIAG_EVENT_ARGS.TraceContext", trace_context, 0x0, 0x40, true, 0xaceefa99e7252058)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_STOR_FREE_DIAG_EVENT_ARGS.EventRecord", event_record, 0x40, 0x40, true, 0xf32d7d53ad8dfabf)
#else
#define _m00
#define _m01
#endif