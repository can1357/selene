#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_UNIT_REGISTRY_PARAMETERS.BusyRetryCount", busy_retry_count, 0x0, 0x20, true, 0xbd5bef2cc66ac01c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_UNIT_REGISTRY_PARAMETERS.QueueFullWaitIoPercentage", queue_full_wait_io_percentage, 0x20, 0x20, true, 0xc2d4e916c95cbeed)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_UNIT_REGISTRY_PARAMETERS.BusyPauseTime", busy_pause_time, 0x40, 0x20, true, 0x212bacea4640acbc)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_UNIT_REGISTRY_PARAMETERS.EnableLogoETW", enable_logo_etw, 0x60, 0x20, true, 0xef20e2d9e10fd19)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_UNIT_REGISTRY_PARAMETERS.DisableIdlePowerManagement", disable_idle_power_management, 0x80, 0x20, true, 0x1a479fac91ab2e81)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_UNIT_REGISTRY_PARAMETERS.MinimumIdleTimeoutInMS", minimum_idle_timeout_in_ms, 0xa0, 0x20, true, 0xd87f5f2450bf464e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif