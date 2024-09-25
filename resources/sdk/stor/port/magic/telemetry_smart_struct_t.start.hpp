#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_TELEMETRY_SMART_STRUCT.StartStopCycleCount", start_stop_cycle_count, 0x0, 0x10, true, 0x4295eaa7b1d48157)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TELEMETRY_SMART_STRUCT.PowerOnHours", power_on_hours, 0x20, 0x20, true, 0xb6264b67ae31af0f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_TELEMETRY_SMART_STRUCT.LoadUnloadCycles", load_unload_cycles, 0x40, 0x10, true, 0x71820a4a740d29d4)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_TELEMETRY_SMART_STRUCT.Temperature", temperature, 0x50, 0x8, true, 0x16db1e261d568297)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TELEMETRY_SMART_STRUCT.ReallocatedSectorsCount", reallocated_sectors_count, 0x80, 0x40, true, 0x65e5b4c5a6839cc9)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TELEMETRY_SMART_STRUCT.SpinRetryCount", spin_retry_count, 0xc0, 0x40, true, 0xe8077449514bf26)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TELEMETRY_SMART_STRUCT.RuntimeBadBlock", runtime_bad_block, 0x100, 0x40, true, 0x1038d30043e6f98c)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TELEMETRY_SMART_STRUCT.EndToEndError", end_to_end_error, 0x140, 0x40, true, 0x63ec8fcdeb7209b5)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TELEMETRY_SMART_STRUCT.ReportedUncorrectableErrors", reported_uncorrectable_errors, 0x180, 0x40, true, 0x777fa24a7ed63)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TELEMETRY_SMART_STRUCT.CommandTimeout", command_timeout, 0x1c0, 0x40, true, 0xa7622409b1313141)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TELEMETRY_SMART_STRUCT.ReallocationEventCount", reallocation_event_count, 0x200, 0x40, true, 0x2f355fabd0551f4)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TELEMETRY_SMART_STRUCT.CurrentPendingSectorCount", current_pending_sector_count, 0x240, 0x40, true, 0xaecfa46b0a2d3f6b)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TELEMETRY_SMART_STRUCT.UncorrectableSectorCount", uncorrectable_sector_count, 0x280, 0x40, true, 0x365dcbb24a5bf84f)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TELEMETRY_SMART_STRUCT.SoftReadErrorRate", soft_read_error_rate, 0x2c0, 0x40, true, 0xa10e36ec47a65983)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TELEMETRY_SMART_STRUCT.DriveLifeProtectionStatus", drive_life_protection_status, 0x300, 0x40, true, 0x37793c16cf528263)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TELEMETRY_SMART_STRUCT.MediaWearoutIndicator", media_wearout_indicator, 0x340, 0x40, true, 0x68c42c1c5f0f19ee)
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
#define _m13
#define _m14
#define _m15
#endif