#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfqueue_t*), "_WDF_QUEUE_FATAL_ERROR_DATA_V1_11.Queue", queue, 0x0, 0x0, false, 0x2ac4491699327b4a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfrequest_t*), "_WDF_QUEUE_FATAL_ERROR_DATA_V1_11.Request", request, 0x0, 0x0, false, 0x5cfe12261e65e50)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WDF_QUEUE_FATAL_ERROR_DATA_V1_11.Status", status, 0x0, 0x0, false, 0xa958fca7b015c572)
#else
#define _m00
#define _m01
#define _m02
#endif