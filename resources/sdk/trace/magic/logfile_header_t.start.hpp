#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRACE_LOGFILE_HEADER.BufferSize", buffer_size, 0x0, 0x20, true, 0x2c4e6be021eda265)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRACE_LOGFILE_HEADER.Version", version, 0x20, 0x20, true, 0x12a759692f061545)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_TRACE_LOGFILE_HEADER.VersionDetail.MajorVersion", major_version, 0x0, 0x8, true, 0x9dbaff582960b8c0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_TRACE_LOGFILE_HEADER.VersionDetail.MinorVersion", minor_version, 0x8, 0x8, true, 0xccda87a412e8f0a9)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_TRACE_LOGFILE_HEADER.VersionDetail.SubVersion", sub_version, 0x10, 0x8, true, 0xa61fe5b7850c54ea)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_TRACE_LOGFILE_HEADER.VersionDetail.SubMinorVersion", sub_minor_version, 0x18, 0x8, true, 0x31d1116675e25778)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_version_detail_t), "_TRACE_LOGFILE_HEADER.VersionDetail", version_detail, 0x20, 0x20, true, 0x4435a1becde37944)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRACE_LOGFILE_HEADER.ProviderVersion", provider_version, 0x40, 0x20, true, 0xb5bd2d94e75f5a16)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRACE_LOGFILE_HEADER.NumberOfProcessors", number_of_processors, 0x60, 0x20, true, 0xd3a9c0d0f21ca152)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_TRACE_LOGFILE_HEADER.EndTime", end_time, 0x80, 0x40, true, 0x219dd29bd472346c)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRACE_LOGFILE_HEADER.TimerResolution", timer_resolution, 0xc0, 0x20, true, 0xe36a577274901143)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRACE_LOGFILE_HEADER.MaximumFileSize", maximum_file_size, 0xe0, 0x20, true, 0xbf8ff227fcb9abc4)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRACE_LOGFILE_HEADER.LogFileMode", log_file_mode, 0x100, 0x20, true, 0x41f69fd269fc5e8a)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRACE_LOGFILE_HEADER.BuffersWritten", buffers_written, 0x120, 0x20, true, 0x5420f8bf4f65efca)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_TRACE_LOGFILE_HEADER.LogInstanceGuid", log_instance_guid, 0x140, 0x80, true, 0x29f86734d725af4)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRACE_LOGFILE_HEADER.StartBuffers", start_buffers, 0x140, 0x20, true, 0xd54714c23e4c78c0)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRACE_LOGFILE_HEADER.PointerSize", pointer_size, 0x160, 0x20, true, 0xab4a64b16c419f74)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRACE_LOGFILE_HEADER.EventsLost", events_lost, 0x180, 0x20, true, 0x6a04126b7172c370)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRACE_LOGFILE_HEADER.CpuSpeedInMHz", cpu_speed_in_m_hz, 0x1a0, 0x20, true, 0x9bc4ce51f7ed720e)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_TRACE_LOGFILE_HEADER.LoggerName", logger_name, 0x1c0, 0x40, true, 0x24dc271f36313b8c)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_TRACE_LOGFILE_HEADER.LogFileName", log_file_name, 0x200, 0x40, true, 0xdaeee60d475489e9)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::time_zone_information_t), "_TRACE_LOGFILE_HEADER.TimeZone", time_zone, 0x240, 0x60, true, 0xac3d25dfbed3e6bf)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_TRACE_LOGFILE_HEADER.BootTime", boot_time, 0x7c0, 0x40, true, 0x8d3e7961e36374b9)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_TRACE_LOGFILE_HEADER.PerfFreq", perf_freq, 0x800, 0x40, true, 0x2dc64e9a56e0dac9)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_TRACE_LOGFILE_HEADER.StartTime", start_time, 0x840, 0x40, true, 0x29492b27d5a67f12)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRACE_LOGFILE_HEADER.BuffersLost", buffers_lost, 0x8a0, 0x20, true, 0xb0129c556ae1f25)
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
#define _m19
#define _m20
#define _m21
#define _m22
#define _m23
#define _m24
#define _m25
#endif