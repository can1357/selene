#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESS_WAKE_INFORMATION.NotificationChannel", notification_channel, 0x0, 0x40, true, 0x85e34c147e4cc3c9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 7>), "_PROCESS_WAKE_INFORMATION.WakeCounters", wake_counters, 0x40, 0xe0, true, 0x4bd565a9a6cf8327)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::jobobject_wake_filter_t), "_PROCESS_WAKE_INFORMATION.WakeFilter", wake_filter, 0x120, 0x40, true, 0xf1c8e706e97b94be)
#else
#define _m00
#define _m01
#define _m02
#endif