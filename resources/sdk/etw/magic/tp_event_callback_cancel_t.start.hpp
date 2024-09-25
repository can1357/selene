#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::system_trace_header_t), "_ETW_TP_EVENT_CALLBACK_CANCEL.Header", header, 0x0, 0x0, true, 0xe1d987b7d62b4847)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_TP_EVENT_CALLBACK_CANCEL.PoolId", pool_id, 0x100, 0x40, true, 0xed4d363b41b383c8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_TP_EVENT_CALLBACK_CANCEL.TaskId", task_id, 0x140, 0x40, true, 0x132ac411a794f988)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_TP_EVENT_CALLBACK_CANCEL.Callback", callback, 0x180, 0x40, true, 0x1a2bea6aa2d5df3c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_TP_EVENT_CALLBACK_CANCEL.Context", context, 0x1c0, 0x40, true, 0xb7879a27960a3cf5)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_TP_EVENT_CALLBACK_CANCEL.SubProcessTag", sub_process_tag, 0x200, 0x40, true, 0xe1e3a2aac95e9df4)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_TP_EVENT_CALLBACK_CANCEL.CancelCount", cancel_count, 0x240, 0x20, true, 0x6fe8d6ba2e649735)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif