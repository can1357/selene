#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfqueue_t*), "_WDF_QUEUE_FATAL_ERROR_DATA_V1_13.Queue", queue, 0x0, 0x0, false, 0xf4bc338cd7b7f2a7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfrequest_t*), "_WDF_QUEUE_FATAL_ERROR_DATA_V1_13.Request", request, 0x0, 0x0, false, 0x2f831b46dd073c8d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WDF_QUEUE_FATAL_ERROR_DATA_V1_13.Status", status, 0x0, 0x0, false, 0x76e9c4224347c54e)
#else
#define _m00
#define _m01
#define _m02
#endif