#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum etw::notification_type_t), "_ETWP_NOTIFICATION_HEADER.NotificationType", notification_type, 0x0, 0x20, true, 0xe64e8c881a08e2b0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETWP_NOTIFICATION_HEADER.NotificationSize", notification_size, 0x20, 0x20, true, 0xed15b47a974cc85b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETWP_NOTIFICATION_HEADER.RefCount", ref_count, 0x40, 0x20, true, 0x3ecf7eab67f513b8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ETWP_NOTIFICATION_HEADER.ReplyRequested", reply_requested, 0x60, 0x8, true, 0xc4e9537360847eb)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETWP_NOTIFICATION_HEADER.ReplyIndex", reply_index, 0x80, 0x20, true, 0x69cfcef4462f9ed9)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETWP_NOTIFICATION_HEADER.Timeout", timeout, 0x80, 0x20, true, 0xef8f2015333d2767)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETWP_NOTIFICATION_HEADER.ReplyCount", reply_count, 0xa0, 0x20, true, 0xfc722e7ec5d336b1)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETWP_NOTIFICATION_HEADER.NotifyeeCount", notifyee_count, 0xa0, 0x20, true, 0xd90b9202cd885eb6)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETWP_NOTIFICATION_HEADER.ReplyHandle", reply_handle, 0xc0, 0x40, true, 0x39339a31997c63f8)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETWP_NOTIFICATION_HEADER.ReplyObject", reply_object, 0xc0, 0x40, true, 0x338f73f435cc8e3b)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETWP_NOTIFICATION_HEADER.RegIndex", reg_index, 0xc0, 0x20, true, 0xe62c04df14861ba)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETWP_NOTIFICATION_HEADER.TargetPID", target_pid, 0x100, 0x20, true, 0xc5bde63e2e2ee515)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETWP_NOTIFICATION_HEADER.SourcePID", source_pid, 0x120, 0x20, true, 0xf599701f70e62642)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_ETWP_NOTIFICATION_HEADER.DestinationGuid", destination_guid, 0x140, 0x80, true, 0x44c431d395fa49bb)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_ETWP_NOTIFICATION_HEADER.SourceGuid", source_guid, 0x1c0, 0x80, true, 0x871a7fe3970f0b0b)
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
#define _m11
#define _m12
#define _m13
#define _m14
#endif