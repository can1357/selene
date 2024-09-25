#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfqueue_t*), "_WDF_QUEUE_FATAL_ERROR_DATA_V1_0.Queue", queue, 0x0, 0x0, false, 0xa179a5afb22117f1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfrequest_t*), "_WDF_QUEUE_FATAL_ERROR_DATA_V1_0.Request", request, 0x0, 0x0, false, 0xa83799efe6833a4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WDF_QUEUE_FATAL_ERROR_DATA_V1_0.Status", status, 0x0, 0x0, false, 0x89d90a51a2b85ec9)
#else
#define _m00
#define _m01
#define _m02
#endif