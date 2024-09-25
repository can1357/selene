#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::system_trace_header_t), "_ETW_TP_EVENT_CALLBACK_ENQUEUE.Header", header, 0x0, 0x0, true, 0x19c686f07d49b2bf)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_TP_EVENT_CALLBACK_ENQUEUE.PoolId", pool_id, 0x100, 0x40, true, 0x3c4c2831e44001e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_TP_EVENT_CALLBACK_ENQUEUE.TaskId", task_id, 0x140, 0x40, true, 0xfc3a0c445a9f7b8a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_TP_EVENT_CALLBACK_ENQUEUE.Callback", callback, 0x180, 0x40, true, 0x904f4b0371e7a7fa)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_TP_EVENT_CALLBACK_ENQUEUE.Context", context, 0x1c0, 0x40, true, 0xcc06d007848cc86f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_TP_EVENT_CALLBACK_ENQUEUE.SubProcessTag", sub_process_tag, 0x200, 0x40, true, 0xa70b4ec5b280b0d8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif