#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pop::policy_device_t), "_POP_THERMAL_ZONE.PolicyDevice", policy_device, 0x0, 0x0, true, 0xec510b3070287565)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_POP_THERMAL_ZONE.Link", link, 0x0, 0x80, true, 0xba7bb490bb7f70e3)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum power::policy_device_type_t), "_POP_THERMAL_ZONE.DeviceType", device_type, 0x80, 0x20, true, 0xe20f1ac80e3ca8bf)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_POP_THERMAL_ZONE.Notification", notification, 0xc0, 0x40, true, 0x47c7b76f10c9c1ca)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_POP_THERMAL_ZONE.Name", name, 0x100, 0x80, true, 0x204596f93e7affaf)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_POP_THERMAL_ZONE.Device", device, 0x180, 0x40, true, 0x530af7718388fc0b)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_POP_THERMAL_ZONE.Irp", irp, 0x1c0, 0x40, true, 0x4357c36f6381b259)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_THERMAL_ZONE.State", state, 0x200, 0x8, true, 0x50ba7cf9f7068aca)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_THERMAL_ZONE.Flags", flags, 0x208, 0x8, true, 0x3b6d2cdb68253282)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_THERMAL_ZONE.Removing", removing, 0x210, 0x8, true, 0xfeb80e26aaba0d7)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_THERMAL_ZONE.Mode", mode, 0x218, 0x8, true, 0xca69d166451e87b9)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_THERMAL_ZONE.PendingMode", pending_mode, 0x220, 0x8, true, 0x7cdc15293eb23d77)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_THERMAL_ZONE.ActivePoint", active_point, 0x228, 0x8, true, 0x951cdd09b46174ab)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_THERMAL_ZONE.PendingActivePoint", pending_active_point, 0x230, 0x8, true, 0x37cb818eadef54ab)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_THERMAL_ZONE.Critical", critical, 0x238, 0x8, true, 0x74f575855194a0e8)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_THERMAL_ZONE.ThermalStandby", thermal_standby, 0x240, 0x8, true, 0x7fddd13697e80104)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_THERMAL_ZONE.OverThrottled", over_throttled, 0x248, 0x8, true, 0xab0e4383d59ac1a0)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_POP_THERMAL_ZONE.HighPrecisionThrottle", high_precision_throttle, 0x260, 0x20, true, 0xb4ae6f8e0a876d55)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_POP_THERMAL_ZONE.Throttle", throttle, 0x280, 0x20, true, 0xe1c0d2787d43f77e)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_POP_THERMAL_ZONE.PendingThrottle", pending_throttle, 0x2a0, 0x20, true, 0x88be454fa8110b7a)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POP_THERMAL_ZONE.ThrottleReasons", throttle_reasons, 0x2c0, 0x20, true, 0xf5c77b335b50c51c)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POP_THERMAL_ZONE.SampleRate", sample_rate, 0x340, 0x20, true, 0xe7194b2e90ede49c)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POP_THERMAL_ZONE.LastTemp", last_temp, 0x360, 0x20, true, 0x5efc86a235ebbe10)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::thermal_information_ex_t), "_POP_THERMAL_ZONE.Info", info, 0x380, 0xe0, true, 0xaf2bff34359a54ae)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::thermal_policy_t), "_POP_THERMAL_ZONE.Policy", policy, 0x660, 0xc0, true, 0x46fa459146c75afc)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_THERMAL_ZONE.PolicyDriver", policy_driver, 0x720, 0x8, true, 0xd38abd59d73b5150)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_THERMAL_ZONE.LastActiveStartTime", last_active_start_time, 0x7c0, 0x40, true, 0xcb6fa11583a363df)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_THERMAL_ZONE.LastPassiveStartTime", last_passive_start_time, 0x800, 0x40, true, 0x63f179d69571b7e3)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t), "_POP_THERMAL_ZONE.WorkItem", work_item, 0x840, 0x0, true, 0xb056a3578789a0ec)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pop::rw_lock_t), "_POP_THERMAL_ZONE.Lock", lock, 0xd80, 0x80, true, 0x521e0b53ef85ddfc)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_POP_THERMAL_ZONE.ZoneStopped", zone_stopped, 0xe00, 0xc0, true, 0x75ef3478bd9a0f79)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_POP_THERMAL_ZONE.TemperatureUpdated", temperature_updated, 0xec0, 0xc0, true, 0x29e9d1f3c464e6b2)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POP_THERMAL_ZONE.InstanceId", instance_id, 0xf80, 0x20, true, 0x346fc4c6da9a45f5)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pop::thermal_telemetry_tracker_t), "_POP_THERMAL_ZONE.TelemetryTracker", telemetry_tracker, 0xfc0, 0xc0, true, 0x50cc94f3ed1c752f)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_POP_THERMAL_ZONE.Description", description, 0x2080, 0x80, true, 0x47ae8636c4724a4d)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_THERMAL_ZONE.LastPassiveTime", last_passive_time, 0x300, 0x40, true, 0xb4f554e776bd72cd)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POP_THERMAL_ZONE.PollingRate", polling_rate, 0x740, 0x20, true, 0xdc760969bfd6ae24)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_THERMAL_ZONE.LastTemperatureTime", last_temperature_time, 0x780, 0x40, true, 0x42f6b4af75c3560)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ktimer2_t), "_POP_THERMAL_ZONE.ZoneUpdateTimer", zone_update_timer, 0x940, 0x40, true, 0x1ec12ec710e01f29)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_THERMAL_ZONE.LastTime", last_time, 0x0, 0x0, false, 0x6cf831eb90771eee)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ktimer_t), "_POP_THERMAL_ZONE.PassiveTimer", passive_timer, 0x0, 0x0, false, 0x43e3125549cef1d3)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t), "_POP_THERMAL_ZONE.PassiveDpc", passive_dpc, 0x0, 0x0, false, 0xccba4e76a13638ff)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_POP_THERMAL_ZONE.InfoLastUpdateTime", info_last_update_time, 0x0, 0x0, false, 0xf9048702d1322dc)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#define _m027
#define _m028
#define _m029
#define _m030
#define _m031
#define _m032
#define _m033
#define _m034
#define _m035
#define _m036
#define _m037
#define _m038
#define _m039
#define _m040
#define _m041
#define _m042
#endif