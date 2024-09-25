#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PS_JOB_WAKE_INFORMATION.NotificationChannel", notification_channel, 0x0, 0x40, true, 0xb57f9d4ac0b8bf7b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 7>), "_PS_JOB_WAKE_INFORMATION.WakeCounters", wake_counters, 0x40, 0xc0, true, 0xfcc9c10d6ac2fd60)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PS_JOB_WAKE_INFORMATION.NoWakeCounter", no_wake_counter, 0x200, 0x40, true, 0x32ed5f941e6b543a)
#else
#define _m00
#define _m01
#define _m02
#endif