#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "JOBOBJECT_IO_RATE_CONTROL_INFORMATION_NATIVE_V3.MaxIops", max_iops, 0x0, 0x40, true, 0x3b3b782f3634998c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "JOBOBJECT_IO_RATE_CONTROL_INFORMATION_NATIVE_V3.MaxBandwidth", max_bandwidth, 0x40, 0x40, true, 0x464bd7cb127dceaa)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "JOBOBJECT_IO_RATE_CONTROL_INFORMATION_NATIVE_V3.ReservationIops", reservation_iops, 0x80, 0x40, true, 0x68e34e3214cd529b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "JOBOBJECT_IO_RATE_CONTROL_INFORMATION_NATIVE_V3.VolumeName", volume_name, 0xc0, 0x40, true, 0x8c0a06f041fc5e6e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "JOBOBJECT_IO_RATE_CONTROL_INFORMATION_NATIVE_V3.BaseIoSize", base_io_size, 0x100, 0x20, true, 0x6fdc40041550827c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::job_object_io_rate_control_flags_t), "JOBOBJECT_IO_RATE_CONTROL_INFORMATION_NATIVE_V3.ControlFlags", control_flags, 0x120, 0x20, true, 0x1f52b5e318ec4aed)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "JOBOBJECT_IO_RATE_CONTROL_INFORMATION_NATIVE_V3.VolumeNameLength", volume_name_length, 0x140, 0x10, true, 0x6e24de9e4ec07780)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "JOBOBJECT_IO_RATE_CONTROL_INFORMATION_NATIVE_V3.CriticalReservationIops", critical_reservation_iops, 0x180, 0x40, true, 0x63e24d05dc295023)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "JOBOBJECT_IO_RATE_CONTROL_INFORMATION_NATIVE_V3.ReservationBandwidth", reservation_bandwidth, 0x1c0, 0x40, true, 0x6e12d35a8856a3df)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "JOBOBJECT_IO_RATE_CONTROL_INFORMATION_NATIVE_V3.CriticalReservationBandwidth", critical_reservation_bandwidth, 0x200, 0x40, true, 0xb41dc28584e36a9)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "JOBOBJECT_IO_RATE_CONTROL_INFORMATION_NATIVE_V3.MaxTimePercent", max_time_percent, 0x240, 0x40, true, 0xf64dd2d2cece5b6e)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "JOBOBJECT_IO_RATE_CONTROL_INFORMATION_NATIVE_V3.ReservationTimePercent", reservation_time_percent, 0x280, 0x40, true, 0xce69a8a8fb2d8929)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "JOBOBJECT_IO_RATE_CONTROL_INFORMATION_NATIVE_V3.CriticalReservationTimePercent", critical_reservation_time_percent, 0x2c0, 0x40, true, 0x6fbdb0c164d01b2b)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "JOBOBJECT_IO_RATE_CONTROL_INFORMATION_NATIVE_V3.SoftMaxIops", soft_max_iops, 0x300, 0x40, true, 0x2ad084da0248374)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "JOBOBJECT_IO_RATE_CONTROL_INFORMATION_NATIVE_V3.SoftMaxBandwidth", soft_max_bandwidth, 0x340, 0x40, true, 0xa68d77327339e0a3)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "JOBOBJECT_IO_RATE_CONTROL_INFORMATION_NATIVE_V3.SoftMaxTimePercent", soft_max_time_percent, 0x380, 0x40, true, 0x2457ab2d208c4cae)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "JOBOBJECT_IO_RATE_CONTROL_INFORMATION_NATIVE_V3.LimitExcessNotifyIops", limit_excess_notify_iops, 0x3c0, 0x40, true, 0x2683355969383bcf)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "JOBOBJECT_IO_RATE_CONTROL_INFORMATION_NATIVE_V3.LimitExcessNotifyBandwidth", limit_excess_notify_bandwidth, 0x400, 0x40, true, 0x10f65ab54e66368d)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "JOBOBJECT_IO_RATE_CONTROL_INFORMATION_NATIVE_V3.LimitExcessNotifyTimePercent", limit_excess_notify_time_percent, 0x440, 0x40, true, 0xe0f42ec5150d71d7)
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
#define _m17
#define _m18
#endif