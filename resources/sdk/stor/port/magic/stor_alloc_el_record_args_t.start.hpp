#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_STOR_ALLOC_EL_RECORD_ARGS.TraceContext", trace_context, 0x0, 0x40, true, 0x89fa0ba208c9057b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_ALLOC_EL_RECORD_ARGS.Size", size, 0x40, 0x20, true, 0x8fdfb3bf3c959e32)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::storage_errorlog_packet_t*), "_STOR_ALLOC_EL_RECORD_ARGS.Result", result, 0x80, 0x40, true, 0xcd1a5d3e739530da)
#else
#define _m00
#define _m01
#define _m02
#endif