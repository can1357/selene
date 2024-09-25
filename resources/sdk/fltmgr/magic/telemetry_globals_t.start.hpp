#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ktimer_t), "_TELEMETRY_GLOBALS.TelemetryInventoryTimer", telemetry_inventory_timer, 0x0, 0x0, true, 0xb546516fdb13c5ee)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t), "_TELEMETRY_GLOBALS.TelemetryInventoryTimerDpc", telemetry_inventory_timer_dpc, 0x200, 0x0, true, 0xc17b82ac9b7ce564)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t), "_TELEMETRY_GLOBALS.TelemetryInventoryWork", telemetry_inventory_work, 0x400, 0x0, true, 0x377b98f68db48f1d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_TELEMETRY_GLOBALS.TelemetryPerformanceFrequency", telemetry_performance_frequency, 0x500, 0x40, true, 0x827a318253134c5f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_TELEMETRY_GLOBALS.TelemetryLayoutChangesSinceLastPost", telemetry_layout_changes_since_last_post, 0x540, 0x20, true, 0x59514dca94efb8d5)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_TELEMETRY_GLOBALS.TelemetryGeneratedGuids", telemetry_generated_guids, 0x560, 0x20, true, 0xa779a86d8c2b70dd)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_TELEMETRY_GLOBALS.TelemetryMissedTelemetryPoints", telemetry_missed_telemetry_points, 0x580, 0x20, true, 0x594b9e2a9892bdcd)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_TELEMETRY_GLOBALS.TelemetryMissedGeneratedGuids", telemetry_missed_generated_guids, 0x5a0, 0x20, true, 0xd115f795c9d58164)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_TELEMETRY_GLOBALS.TelemetryMissedRawVolumes", telemetry_missed_raw_volumes, 0x5c0, 0x20, true, 0xcac429070679f13b)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_TELEMETRY_GLOBALS.TelemetryLegacyFiltersLastCount", telemetry_legacy_filters_last_count, 0x5e0, 0x20, true, 0xeb87da5ba74cda51)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_TELEMETRY_GLOBALS.TelemetryMissedFilterRegistrations", telemetry_missed_filter_registrations, 0x600, 0x20, true, 0x96b31e251823c376)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_TELEMETRY_GLOBALS.TelemetryMissedFilterUnregistrations", telemetry_missed_filter_unregistrations, 0x620, 0x20, true, 0x95d064a689373f34)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_TELEMETRY_GLOBALS.TelemetryMissedFilterAttachOnWCOS", telemetry_missed_filter_attach_on_wcos, 0x0, 0x0, false, 0x387ef8161bcff6a3)
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