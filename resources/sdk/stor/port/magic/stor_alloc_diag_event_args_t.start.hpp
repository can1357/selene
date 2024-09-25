#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_STOR_ALLOC_DIAG_EVENT_ARGS.TraceContext", trace_context, 0x0, 0x40, true, 0x3db67aa344f9d5de)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_ALLOC_DIAG_EVENT_ARGS.UserDataSize", user_data_size, 0x40, 0x20, true, 0xd1149fd54434425d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_STOR_ALLOC_DIAG_EVENT_ARGS.Allocate", allocate, 0x60, 0x8, true, 0x1c0de30d1c522c42)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_STOR_ALLOC_DIAG_EVENT_ARGS.result", result, 0x80, 0x40, true, 0x51f07b5d23679a5a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif