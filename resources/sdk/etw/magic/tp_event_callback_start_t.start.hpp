#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::system_trace_header_t), "_ETW_TP_EVENT_CALLBACK_START.Header", header, 0x0, 0x0, true, 0x4d58567ad4d1c673)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_TP_EVENT_CALLBACK_START.PoolId", pool_id, 0x100, 0x40, true, 0xe671816eb0c4f39)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_TP_EVENT_CALLBACK_START.TaskId", task_id, 0x140, 0x40, true, 0x5a2eb02272c78ffa)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_TP_EVENT_CALLBACK_START.Callback", callback, 0x180, 0x40, true, 0x37ca654246e59206)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_TP_EVENT_CALLBACK_START.Context", context, 0x1c0, 0x40, true, 0x68941735d4fb2d80)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_TP_EVENT_CALLBACK_START.SubProcessTag", sub_process_tag, 0x200, 0x40, true, 0x32959806c266fca7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif