#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PS_PROCESS_WAKE_INFORMATION.NotificationChannel", notification_channel, 0x0, 0x40, true, 0xce217e5f697fce80)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 7>), "_PS_PROCESS_WAKE_INFORMATION.WakeCounters", wake_counters, 0x40, 0xe0, true, 0x9243571b1391284c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::jobobject_wake_filter_t), "_PS_PROCESS_WAKE_INFORMATION.WakeFilter", wake_filter, 0x120, 0x40, true, 0xf7f51b05a2e840be)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PS_PROCESS_WAKE_INFORMATION.NoWakeCounter", no_wake_counter, 0x160, 0x20, true, 0x2794a7d064181ddf)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif