#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum clfs::mgmt_notification_type_t), "_CLFS_MGMT_NOTIFICATION.Notification", notification, 0x0, 0x20, true, 0x68d0d81592cb45cd)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union cls::lsn_t), "_CLFS_MGMT_NOTIFICATION.Lsn", lsn, 0x40, 0x40, true, 0x7a018475da367337)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CLFS_MGMT_NOTIFICATION.LogIsPinned", log_is_pinned, 0x80, 0x10, true, 0xb74bfd60794f5e04)
#else
#define _m00
#define _m01
#define _m02
#endif