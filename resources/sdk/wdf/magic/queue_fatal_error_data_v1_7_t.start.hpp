#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfqueue_t*), "_WDF_QUEUE_FATAL_ERROR_DATA_V1_7.Queue", queue, 0x0, 0x0, false, 0xd1fb656e908014c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfrequest_t*), "_WDF_QUEUE_FATAL_ERROR_DATA_V1_7.Request", request, 0x0, 0x0, false, 0xfe0f38e41b54400f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WDF_QUEUE_FATAL_ERROR_DATA_V1_7.Status", status, 0x0, 0x0, false, 0x4dd40345f64db51c)
#else
#define _m00
#define _m01
#define _m02
#endif