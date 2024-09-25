#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfqueue_t*), "_WDF_QUEUE_FATAL_ERROR_DATA_V1_1.Queue", queue, 0x0, 0x0, false, 0xb32fc3b6316f7c90)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfrequest_t*), "_WDF_QUEUE_FATAL_ERROR_DATA_V1_1.Request", request, 0x0, 0x0, false, 0x76abb5e2b7f795c0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WDF_QUEUE_FATAL_ERROR_DATA_V1_1.Status", status, 0x0, 0x0, false, 0x684f02ce468a1223)
#else
#define _m00
#define _m01
#define _m02
#endif