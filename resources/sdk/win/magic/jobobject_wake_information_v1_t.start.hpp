#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JOBOBJECT_WAKE_INFORMATION_V1.NotificationChannel", notification_channel, 0x0, 0x40, true, 0x5bbd20354c7838ad)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 4>), "_JOBOBJECT_WAKE_INFORMATION_V1.WakeCounters", wake_counters, 0x40, 0x0, true, 0x2c45be023aec528b)
#else
#define _m00
#define _m01
#endif