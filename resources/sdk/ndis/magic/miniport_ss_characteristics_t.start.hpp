#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_MINIPORT_SS_CHARACTERISTICS.Header", header, 0x0, 0x20, true, 0x49e8b56e2b4fe26d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_SS_CHARACTERISTICS.Flags", flags, 0x20, 0x20, true, 0xedfaf8f2c6010ab6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint8_t)>*), "_NDIS_MINIPORT_SS_CHARACTERISTICS.IdleNotificationHandler", idle_notification_handler, 0x40, 0x40, true, 0x40663291fe160f62)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_NDIS_MINIPORT_SS_CHARACTERISTICS.CancelIdleNotificationHandler", cancel_idle_notification_handler, 0x80, 0x40, true, 0xcbe26a99b95032c4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif