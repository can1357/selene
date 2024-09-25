#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_TELEMETRY_SAMPLED_ERROR_LOG.TotalErrors", total_errors, 0x0, 0x20, true, 0x340079653e07f8db)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::raid_telemetry_error_entry_t), "_RAID_TELEMETRY_SAMPLED_ERROR_LOG.LastError", last_error, 0x80, 0x40, true, 0x1becf94ad4a8f65e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct stor::port::raid_telemetry_error_entry_t, 10>), "_RAID_TELEMETRY_SAMPLED_ERROR_LOG.SampledErrors", sampled_errors, 0x1c0, 0x80, true, 0x1590888c668501fc)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_TELEMETRY_SAMPLED_ERROR_LOG.TotalReadWriteErrors", total_read_write_errors, 0x20, 0x20, true, 0xc247178d0fbd2fa0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_TELEMETRY_SAMPLED_ERROR_LOG.TotalStRtlImpendingDeviceFailureErrors", total_st_rtl_impending_device_failure_errors, 0x40, 0x20, true, 0x4205d6c9e98d0325)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_TELEMETRY_SAMPLED_ERROR_LOG.TotalStRtlTotalDeviceFailureErrors", total_st_rtl_total_device_failure_errors, 0x60, 0x20, true, 0x1295e3167de391aa)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif