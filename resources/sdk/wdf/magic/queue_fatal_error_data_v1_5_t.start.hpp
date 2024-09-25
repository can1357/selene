#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfqueue_t*), "_WDF_QUEUE_FATAL_ERROR_DATA_V1_5.Queue", queue, 0x0, 0x0, false, 0xc0c80e31fc33a688)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfrequest_t*), "_WDF_QUEUE_FATAL_ERROR_DATA_V1_5.Request", request, 0x0, 0x0, false, 0xe2467fea5549bdf7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WDF_QUEUE_FATAL_ERROR_DATA_V1_5.Status", status, 0x0, 0x0, false, 0x9282a78613e19f8e)
#else
#define _m00
#define _m01
#define _m02
#endif