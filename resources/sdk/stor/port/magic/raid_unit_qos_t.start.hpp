#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RAID_UNIT_QOS.Enabled", enabled, 0x0, 0x8, true, 0x28fa9368b4457a47)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_UNIT_QOS.RetryCount", retry_count, 0x20, 0x20, true, 0x886fe0454a16f973)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_UNIT_QOS.ResetUnresponsiveTimeoutIn500MS", reset_unresponsive_timeout_in500ms, 0x40, 0x20, true, 0x6c0b5777027614d1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_UNIT_QOS.ResetInterval", reset_interval, 0x60, 0x20, true, 0xcecfe153afcd0766)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_UNIT_QOS.HwTimeoutInSec", hw_timeout_in_sec, 0x80, 0x20, true, 0x14d0abb7deea31f1)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_UNIT_QOS.ResetTimeoutInSec", reset_timeout_in_sec, 0xa0, 0x20, true, 0x57100da94986a7b1)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_UNIT_QOS.MaxWaitTimeIn500MS", max_wait_time_in500ms, 0xc0, 0x20, true, 0x68ae29ebe24786d0)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RAID_UNIT_QOS.TimerSettingChangeNeeded", timer_setting_change_needed, 0xe0, 0x8, true, 0x67a68d981d89a9a6)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_RAID_UNIT_QOS.AdapterWaitTimeoutCheckEnabled", adapter_wait_timeout_check_enabled, 0x100, 0x20, true, 0x16671f1abd2955c6)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_UNIT_QOS.QosThresholdIn100NS", qos_threshold_in100ns, 0x140, 0x40, true, 0xbfc89d2b8f93f215)
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
#endif