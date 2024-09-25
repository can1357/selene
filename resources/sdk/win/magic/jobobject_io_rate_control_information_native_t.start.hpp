#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "JOBOBJECT_IO_RATE_CONTROL_INFORMATION_NATIVE.MaxIops", max_iops, 0x0, 0x40, true, 0x6a5ed4aa4fd99b45)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "JOBOBJECT_IO_RATE_CONTROL_INFORMATION_NATIVE.MaxBandwidth", max_bandwidth, 0x40, 0x40, true, 0x4700475a70a4ae67)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "JOBOBJECT_IO_RATE_CONTROL_INFORMATION_NATIVE.ReservationIops", reservation_iops, 0x80, 0x40, true, 0xd03335e3bf444f9b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "JOBOBJECT_IO_RATE_CONTROL_INFORMATION_NATIVE.VolumeName", volume_name, 0xc0, 0x40, true, 0x6240bd2278e9a497)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "JOBOBJECT_IO_RATE_CONTROL_INFORMATION_NATIVE.BaseIoSize", base_io_size, 0x100, 0x20, true, 0xff6685f7097379e4)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::job_object_io_rate_control_flags_t), "JOBOBJECT_IO_RATE_CONTROL_INFORMATION_NATIVE.ControlFlags", control_flags, 0x120, 0x20, true, 0xcd8b905738f96244)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "JOBOBJECT_IO_RATE_CONTROL_INFORMATION_NATIVE.VolumeNameLength", volume_name_length, 0x140, 0x10, true, 0xb1a2143ddb4c742b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif