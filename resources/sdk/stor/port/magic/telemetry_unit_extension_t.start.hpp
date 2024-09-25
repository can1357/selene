#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_TELEMETRY_UNIT_EXTENSION.NvmeCriticalWarning", nvme_critical_warning, 0x20, 0x8, true, 0xec8893d6136d5c5a)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TELEMETRY_UNIT_EXTENSION.Flags.DeviceHealthEventsLogged", device_health_events_logged, 0x0, 0x1, true, 0xafbbc73d49d78e66, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TELEMETRY_UNIT_EXTENSION.Flags.FailedFirstSMARTCommand", failed_first_smart_command, 0x1, 0x1, true, 0xee84cceae6224e79, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TELEMETRY_UNIT_EXTENSION.Flags.FailedFirstDeviceStatisticsLogCommand", failed_first_device_statistics_log_command, 0x2, 0x1, true, 0xeeeab0ebba4277ce, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TELEMETRY_UNIT_EXTENSION.Flags.FailedFirstNvmeCloudSSDCommand", failed_first_nvme_cloud_ssd_command, 0x3, 0x1, true, 0x43968576eec39c5c, 1, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TELEMETRY_UNIT_EXTENSION.Flags.SmartPredictFailure", smart_predict_failure, 0x4, 0x1, true, 0x3a2d9813ce88ce0c, 1, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TELEMETRY_UNIT_EXTENSION.Flags.FailedFirstGetSupportedLogPagesCommand", failed_first_get_supported_log_pages_command, 0x0, 0x0, false, 0x470a6f55d3c1fe78, 1, uint32_t)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_flags_t), "_TELEMETRY_UNIT_EXTENSION.Flags", flags, 0x0, 0x20, true, 0x4c89b7921ca65f6)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_TELEMETRY_UNIT_EXTENSION.DeviceHealthPollCount", device_health_poll_count, 0x28, 0x8, true, 0xbae4e2ab02f2b615)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_TELEMETRY_UNIT_EXTENSION.CriticalEventsLogged", critical_events_logged, 0x0, 0x0, false, 0x36a15b03bd1148ec)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_TELEMETRY_UNIT_EXTENSION.SmartPredictFailure", smart_predict_failure, 0x0, 0x0, false, 0x4044b68b63553ea8)
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
#endif