#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDK_RESULT.Status", status, 0x0, 0x20, true, 0x18b1254b8ecf8e41)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDK_RESULT.BytesTransferred", bytes_transferred, 0x20, 0x20, true, 0x12e7eddc1129180e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDK_RESULT.QPContext", qp_context, 0x40, 0x40, true, 0x5f09a1e07bb75f02)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDK_RESULT.RequestContext", request_context, 0x80, 0x40, true, 0xe8523229bd24e344)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif