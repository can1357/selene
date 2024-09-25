#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfqueue_t*), "_WDF_QUEUE_FATAL_ERROR_DATA_V1_9.Queue", queue, 0x0, 0x0, false, 0x7fbec92dd433eb35)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfrequest_t*), "_WDF_QUEUE_FATAL_ERROR_DATA_V1_9.Request", request, 0x0, 0x0, false, 0x8e17fcecd1e47bf9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WDF_QUEUE_FATAL_ERROR_DATA_V1_9.Status", status, 0x0, 0x0, false, 0xf3fc870a432f1c25)
#else
#define _m00
#define _m01
#define _m02
#endif