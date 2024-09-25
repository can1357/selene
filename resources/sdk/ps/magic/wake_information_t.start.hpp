#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PS_WAKE_INFORMATION.NotificationChannel", notification_channel, 0x0, 0x0, false, 0x1b49b97e8224a0fc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 5>), "_PS_WAKE_INFORMATION.WakeCounters", wake_counters, 0x0, 0x0, false, 0xe3abf5cd603314d1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PS_WAKE_INFORMATION.NoWakeCounter", no_wake_counter, 0x0, 0x0, false, 0x67a58b7baab49840)
#else
#define _m00
#define _m01
#define _m02
#endif