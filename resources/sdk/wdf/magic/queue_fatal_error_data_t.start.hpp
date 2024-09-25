#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfqueue_t*), "_WDF_QUEUE_FATAL_ERROR_DATA.Queue", queue, 0x0, 0x40, true, 0x2245cbf6f72f509)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfrequest_t*), "_WDF_QUEUE_FATAL_ERROR_DATA.Request", request, 0x40, 0x40, true, 0x1871af40cbba980e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WDF_QUEUE_FATAL_ERROR_DATA.Status", status, 0x80, 0x20, true, 0x581bcd15cb3b83aa)
#else
#define _m00
#define _m01
#define _m02
#endif