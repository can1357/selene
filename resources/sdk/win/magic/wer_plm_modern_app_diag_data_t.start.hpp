#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_WER_PLM_MODERN_APP_DIAG_DATA.AppStartupTime", app_startup_time, 0x0, 0x40, true, 0x5beff800024babd0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_WER_PLM_MODERN_APP_DIAG_DATA.AppTimeoutReportSubmissionTime", app_timeout_report_submission_time, 0x40, 0x40, true, 0x9a75eb65e78ffb31)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WER_PLM_MODERN_APP_DIAG_DATA.AppIOInBytesRead", app_io_in_bytes_read, 0x80, 0x40, true, 0x93b65cd1606cee32)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WER_PLM_MODERN_APP_DIAG_DATA.AppIOInBytesWrite", app_io_in_bytes_write, 0xc0, 0x40, true, 0xb4fc277ae5ec6bba)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WER_PLM_MODERN_APP_DIAG_DATA.SystemIONonLowPriorityIdleTimeInMs", system_io_non_low_priority_idle_time_in_ms, 0x100, 0x40, true, 0x69c3b773c655d2e7)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WER_PLM_MODERN_APP_DIAG_DATA.SystemIOAllPriorityIdleTimeInMs", system_io_all_priority_idle_time_in_ms, 0x140, 0x40, true, 0x1b2933371d5576b8)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WER_PLM_MODERN_APP_DIAG_DATA.AppCPUUsageTimeInMs", app_cpu_usage_time_in_ms, 0x180, 0x40, true, 0x3a8655962295981c)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WER_PLM_MODERN_APP_DIAG_DATA.AppCPUReadyTimeInMs", app_cpu_ready_time_in_ms, 0x1c0, 0x40, true, 0x21771a54624ce107)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WER_PLM_MODERN_APP_DIAG_DATA.AppThrottledDurationInMs", app_throttled_duration_in_ms, 0x200, 0x20, true, 0x78aaae1368d4af1b)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<char, 128>), "_WER_PLM_MODERN_APP_DIAG_DATA.AppTimeoutDescription", app_timeout_description, 0x220, 0x0, true, 0xba19802600f1ea95)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WER_PLM_MODERN_APP_DIAG_DATA.Flags.AppHalted", app_halted, 0x0, 0x1, true, 0x7aa7a1ec1869e074, 1, uint32_t)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_flags_t), "_WER_PLM_MODERN_APP_DIAG_DATA.Flags", flags, 0x620, 0x20, true, 0x2255837a6da0f24a)
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
#define _m11
#endif