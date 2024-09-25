#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "JOBOBJECT_IO_RATE_CONTROL_INFORMATION.MaxIops", max_iops, 0x0, 0x40, true, 0x277cac38fd6a7d3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "JOBOBJECT_IO_RATE_CONTROL_INFORMATION.MaxBandwidth", max_bandwidth, 0x40, 0x40, true, 0xaa50ca257ae5f4d3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "JOBOBJECT_IO_RATE_CONTROL_INFORMATION.ReservationIops", reservation_iops, 0x80, 0x40, true, 0xe68b5d7a4c414edf)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "JOBOBJECT_IO_RATE_CONTROL_INFORMATION.VolumeName", volume_name, 0xc0, 0x40, true, 0xc6a994e71d6aa4)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "JOBOBJECT_IO_RATE_CONTROL_INFORMATION.BaseIoSize", base_io_size, 0x100, 0x20, true, 0x41f164132dcbe337)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "JOBOBJECT_IO_RATE_CONTROL_INFORMATION.ControlFlags", control_flags, 0x120, 0x20, true, 0x917e08f57a1302d4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif