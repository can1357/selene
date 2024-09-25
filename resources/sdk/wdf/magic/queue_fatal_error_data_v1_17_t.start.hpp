#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfqueue_t*), "_WDF_QUEUE_FATAL_ERROR_DATA_V1_17.Queue", queue, 0x0, 0x0, false, 0x953afb5b96c66cb3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfrequest_t*), "_WDF_QUEUE_FATAL_ERROR_DATA_V1_17.Request", request, 0x0, 0x0, false, 0x41604b2ee31f52f1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WDF_QUEUE_FATAL_ERROR_DATA_V1_17.Status", status, 0x0, 0x0, false, 0x454d3e098013c781)
#else
#define _m00
#define _m01
#define _m02
#endif