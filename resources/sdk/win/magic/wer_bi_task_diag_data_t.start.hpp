#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_WER_BI_TASK_DIAG_DATA.TaskStartupTime", task_startup_time, 0x0, 0x40, true, 0xf2014c8e7deff50e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_WER_BI_TASK_DIAG_DATA.TaskTimeoutReportSubmissionTime", task_timeout_report_submission_time, 0x40, 0x40, true, 0x45c85445d60c4a70)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WER_BI_TASK_DIAG_DATA.TaskIOInBytesRead", task_io_in_bytes_read, 0x80, 0x40, true, 0x76ccaeedd87b3e44)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WER_BI_TASK_DIAG_DATA.TaskIOInBytesWrite", task_io_in_bytes_write, 0xc0, 0x40, true, 0x64ac85b22985deb)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WER_BI_TASK_DIAG_DATA.SystemIONonLowPriorityIdleTime", system_io_non_low_priority_idle_time, 0x100, 0x40, true, 0x9390c3b3849cd3a0)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WER_BI_TASK_DIAG_DATA.SystemIOAllPriorityIdleTime", system_io_all_priority_idle_time, 0x140, 0x40, true, 0x72466ca4998f40e5)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WER_BI_TASK_DIAG_DATA.TaskCPUUsageTime", task_cpu_usage_time, 0x180, 0x40, true, 0x8b9a04088a43695b)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WER_BI_TASK_DIAG_DATA.TaskCPUReadyTime", task_cpu_ready_time, 0x1c0, 0x40, true, 0x796b832871e3e990)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_WER_BI_TASK_DIAG_DATA.Flags.CancellationReason", cancellation_reason, 0x0, 0x8, true, 0xfa5b4b98669ffda2, 8, uint32_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_WER_BI_TASK_DIAG_DATA.Flags.HostType", host_type, 0x8, 0x3, true, 0xc9fd700433cbf865, 3, uint32_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WER_BI_TASK_DIAG_DATA.Flags.LowPowerEpoch", low_power_epoch, 0xb, 0x1, true, 0xa693b06b5f235782, 1, uint32_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WER_BI_TASK_DIAG_DATA.Flags.AcPower", ac_power, 0xc, 0x1, true, 0x67aa11fd08527688, 1, uint32_t)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_flags_t), "_WER_BI_TASK_DIAG_DATA.Flags", flags, 0x200, 0x20, true, 0x5660f768b0906bd3)
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
#define _m12
#endif