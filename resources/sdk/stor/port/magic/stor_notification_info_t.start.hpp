#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_STOR_NOTIFICATION_INFO.Irp", irp, 0x0, 0x40, true, 0xc8513d133469c92e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_STOR_NOTIFICATION_INFO.Context", context, 0x40, 0x40, true, 0x778132414c737924)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_STOR_NOTIFICATION_INFO.Pdo", pdo, 0x80, 0x40, true, 0x2a636f5cde0987ff)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct nt::device_object_t*, struct nt::irp_t*, void*)>*), "_STOR_NOTIFICATION_INFO.NotificationFunctionCallback", notification_function_callback, 0xc0, 0x40, true, 0xcedd50b3279287c6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif