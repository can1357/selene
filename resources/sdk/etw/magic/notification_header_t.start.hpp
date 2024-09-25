#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum etw::notification_type_t), "_ETW_NOTIFICATION_HEADER.NotificationType", notification_type, 0x0, 0x20, true, 0xa23295424d125251)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_NOTIFICATION_HEADER.NotificationSize", notification_size, 0x20, 0x20, true, 0xbc7dd46288312cfb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_NOTIFICATION_HEADER.Offset", offset, 0x40, 0x20, true, 0xef0fc6438123d78)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ETW_NOTIFICATION_HEADER.ReplyRequested", reply_requested, 0x60, 0x8, true, 0xf74ae7cd1be51f2c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_NOTIFICATION_HEADER.Timeout", timeout, 0x80, 0x20, true, 0x2316a2d988c8b8e8)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_NOTIFICATION_HEADER.ReplyCount", reply_count, 0xa0, 0x20, true, 0x763ef023a5273cba)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_NOTIFICATION_HEADER.NotifyeeCount", notifyee_count, 0xa0, 0x20, true, 0xe74abf9591afbfec)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_NOTIFICATION_HEADER.TargetPID", target_pid, 0x100, 0x20, true, 0x6c896d77336f4689)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_NOTIFICATION_HEADER.SourcePID", source_pid, 0x120, 0x20, true, 0xa6e38f62a3fd38b0)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_ETW_NOTIFICATION_HEADER.DestinationGuid", destination_guid, 0x140, 0x80, true, 0x5b3c38df5ad879ba)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_ETW_NOTIFICATION_HEADER.SourceGuid", source_guid, 0x1c0, 0x80, true, 0x2acc50ceadbc4f95)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#endif