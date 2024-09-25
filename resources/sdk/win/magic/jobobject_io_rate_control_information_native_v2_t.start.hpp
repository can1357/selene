#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "JOBOBJECT_IO_RATE_CONTROL_INFORMATION_NATIVE_V2.MaxIops", max_iops, 0x0, 0x40, true, 0x6a8406d357444a8c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "JOBOBJECT_IO_RATE_CONTROL_INFORMATION_NATIVE_V2.MaxBandwidth", max_bandwidth, 0x40, 0x40, true, 0x2a01b74a6e95ec8b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "JOBOBJECT_IO_RATE_CONTROL_INFORMATION_NATIVE_V2.ReservationIops", reservation_iops, 0x80, 0x40, true, 0xf6d400ad0b6f2450)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "JOBOBJECT_IO_RATE_CONTROL_INFORMATION_NATIVE_V2.VolumeName", volume_name, 0xc0, 0x40, true, 0x30ba1a4f756cdf93)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "JOBOBJECT_IO_RATE_CONTROL_INFORMATION_NATIVE_V2.BaseIoSize", base_io_size, 0x100, 0x20, true, 0x6bb2a8dd83cb5b0d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::job_object_io_rate_control_flags_t), "JOBOBJECT_IO_RATE_CONTROL_INFORMATION_NATIVE_V2.ControlFlags", control_flags, 0x120, 0x20, true, 0xbddabd43abd9847a)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "JOBOBJECT_IO_RATE_CONTROL_INFORMATION_NATIVE_V2.VolumeNameLength", volume_name_length, 0x140, 0x10, true, 0xf82e1a1939af9e7c)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "JOBOBJECT_IO_RATE_CONTROL_INFORMATION_NATIVE_V2.CriticalReservationIops", critical_reservation_iops, 0x180, 0x40, true, 0xce4d3ef0238ff7df)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "JOBOBJECT_IO_RATE_CONTROL_INFORMATION_NATIVE_V2.ReservationBandwidth", reservation_bandwidth, 0x1c0, 0x40, true, 0xf6a56f904cc20add)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "JOBOBJECT_IO_RATE_CONTROL_INFORMATION_NATIVE_V2.CriticalReservationBandwidth", critical_reservation_bandwidth, 0x200, 0x40, true, 0xfee25227c58d5c5c)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "JOBOBJECT_IO_RATE_CONTROL_INFORMATION_NATIVE_V2.MaxTimePercent", max_time_percent, 0x240, 0x40, true, 0xf7e67c00fe494a95)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "JOBOBJECT_IO_RATE_CONTROL_INFORMATION_NATIVE_V2.ReservationTimePercent", reservation_time_percent, 0x280, 0x40, true, 0x22d39829ea62659d)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "JOBOBJECT_IO_RATE_CONTROL_INFORMATION_NATIVE_V2.CriticalReservationTimePercent", critical_reservation_time_percent, 0x2c0, 0x40, true, 0x6dabb3b89585441c)
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