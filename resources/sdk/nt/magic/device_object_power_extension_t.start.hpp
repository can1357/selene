#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_DEVICE_OBJECT_POWER_EXTENSION.IdleCount", idle_count, 0x0, 0x20, true, 0xa4e0b335d3d05006)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_DEVICE_OBJECT_POWER_EXTENSION.BusyCount", busy_count, 0x20, 0x20, true, 0xe2fa21f1aa7361db)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_DEVICE_OBJECT_POWER_EXTENSION.BusyReference", busy_reference, 0x40, 0x20, true, 0xca6a9b525354b48f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_OBJECT_POWER_EXTENSION.TotalBusyCount", total_busy_count, 0x60, 0x20, true, 0x50d13ca3dd2ca715)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_OBJECT_POWER_EXTENSION.ConservationIdleTime", conservation_idle_time, 0x80, 0x20, true, 0x100edae7169f4aee)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_OBJECT_POWER_EXTENSION.PerformanceIdleTime", performance_idle_time, 0xa0, 0x20, true, 0xa4c8a30b50fed941)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_DEVICE_OBJECT_POWER_EXTENSION.DeviceObject", device_object, 0xc0, 0x40, true, 0xaa7d467513d188f1)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_DEVICE_OBJECT_POWER_EXTENSION.IdleList", idle_list, 0x100, 0x80, true, 0xec735fcf92663c34)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum pop::device_idle_type_t), "_DEVICE_OBJECT_POWER_EXTENSION.IdleType", idle_type, 0x180, 0x20, true, 0x2ebe07b8815e4026)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::device_power_state_t), "_DEVICE_OBJECT_POWER_EXTENSION.IdleState", idle_state, 0x1a0, 0x20, true, 0x7b5423e0ef0eaad3)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::device_power_state_t), "_DEVICE_OBJECT_POWER_EXTENSION.CurrentState", current_state, 0x1c0, 0x20, true, 0x617139eecaf56322)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pop::cooling_extension_t*), "_DEVICE_OBJECT_POWER_EXTENSION.CoolingExtension", cooling_extension, 0x200, 0x40, true, 0xf1870b5a6fb7d569)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_DEVICE_OBJECT_POWER_EXTENSION.Volume", volume, 0x240, 0x80, true, 0x7b7abd8fe84ceb8d)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_OBJECT_POWER_EXTENSION.Specific.Disk.IdleTime", idle_time, 0x0, 0x20, true, 0x79303ad0434876de)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_OBJECT_POWER_EXTENSION.Specific.Disk.NonIdleTime", non_idle_time, 0x20, 0x20, true, 0x5979b8c9fd438343)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_disk_t), "_DEVICE_OBJECT_POWER_EXTENSION.Specific.Disk", disk, 0x0, 0x40, true, 0xc49bc527670530b2)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_specific_t), "_DEVICE_OBJECT_POWER_EXTENSION.Specific", specific, 0x2c0, 0x40, true, 0x1e753be9e9820df4)
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
#define _m16
#endif