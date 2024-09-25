#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfqueue_t*), "_WDF_QUEUE_FATAL_ERROR_DATA_V1_15.Queue", queue, 0x0, 0x0, false, 0x3c637555e6312c29)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfrequest_t*), "_WDF_QUEUE_FATAL_ERROR_DATA_V1_15.Request", request, 0x0, 0x0, false, 0x87e423885d2c7eb3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WDF_QUEUE_FATAL_ERROR_DATA_V1_15.Status", status, 0x0, 0x0, false, 0xd76038e0bdb76f3f)
#else
#define _m00
#define _m01
#define _m02
#endif