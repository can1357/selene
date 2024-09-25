#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JOBOBJECT_WAKE_INFORMATION.NotificationChannel", notification_channel, 0x0, 0x40, true, 0x7554f071e8385a24)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 5>), "_JOBOBJECT_WAKE_INFORMATION.WakeCounters", wake_counters, 0x40, 0xc0, true, 0xf6f8169b839fb21)
#else
#define _m00
#define _m01
#endif