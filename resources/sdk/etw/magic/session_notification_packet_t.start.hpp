#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etw::notification_header_t), "_ETW_SESSION_NOTIFICATION_PACKET.NotificationHeader", notification_header, 0x0, 0x40, true, 0xadffade39f282195)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum etw::session_notification_type_t), "_ETW_SESSION_NOTIFICATION_PACKET.Type", type, 0x240, 0x20, true, 0x11c7166f3fe9b626)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_SESSION_NOTIFICATION_PACKET.Status", status, 0x260, 0x20, true, 0x5266752e4703c69d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_SESSION_NOTIFICATION_PACKET.TraceHandle", trace_handle, 0x280, 0x40, true, 0x97db6fae2f70d560)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif