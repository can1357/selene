#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRACE_LOGFILE_HEADER64.BufferSize", buffer_size, 0x0, 0x20, true, 0xb9aeaa2a7b8609c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRACE_LOGFILE_HEADER64.Version", version, 0x20, 0x20, true, 0xddba9c597b4913e8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_TRACE_LOGFILE_HEADER64.VersionDetail.MajorVersion", major_version, 0x0, 0x8, true, 0x6ea9bbaa941b7d68)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_TRACE_LOGFILE_HEADER64.VersionDetail.MinorVersion", minor_version, 0x8, 0x8, true, 0xd1dce64fdeca73bb)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_TRACE_LOGFILE_HEADER64.VersionDetail.SubVersion", sub_version, 0x10, 0x8, true, 0xd5fb1662740df01)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_TRACE_LOGFILE_HEADER64.VersionDetail.SubMinorVersion", sub_minor_version, 0x18, 0x8, true, 0xbf8c19e9c44d5b73)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_version_detail_t), "_TRACE_LOGFILE_HEADER64.VersionDetail", version_detail, 0x20, 0x20, true, 0x939db16fad1ded42)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRACE_LOGFILE_HEADER64.ProviderVersion", provider_version, 0x40, 0x20, true, 0x1a0dcc11034b4851)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRACE_LOGFILE_HEADER64.NumberOfProcessors", number_of_processors, 0x60, 0x20, true, 0x92233392bbfad34)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_TRACE_LOGFILE_HEADER64.EndTime", end_time, 0x80, 0x40, true, 0xdd96921b4acddd89)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRACE_LOGFILE_HEADER64.TimerResolution", timer_resolution, 0xc0, 0x20, true, 0xfbabf4f5f2432c90)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRACE_LOGFILE_HEADER64.MaximumFileSize", maximum_file_size, 0xe0, 0x20, true, 0xb580ec7bf8833ab0)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRACE_LOGFILE_HEADER64.LogFileMode", log_file_mode, 0x100, 0x20, true, 0xfb5d3e0e9def85de)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRACE_LOGFILE_HEADER64.BuffersWritten", buffers_written, 0x120, 0x20, true, 0x3bfc771e20663e01)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_TRACE_LOGFILE_HEADER64.LogInstanceGuid", log_instance_guid, 0x140, 0x80, true, 0xf839b95cf3852832)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRACE_LOGFILE_HEADER64.StartBuffers", start_buffers, 0x140, 0x20, true, 0x2aee9629367d5ffd)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRACE_LOGFILE_HEADER64.PointerSize", pointer_size, 0x160, 0x20, true, 0x5f612dbe8ba038ee)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRACE_LOGFILE_HEADER64.EventsLost", events_lost, 0x180, 0x20, true, 0xdd0f271190a9eea0)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRACE_LOGFILE_HEADER64.CpuSpeedInMHz", cpu_speed_in_m_hz, 0x1a0, 0x20, true, 0xabb0919af37540b4)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TRACE_LOGFILE_HEADER64.LoggerName", logger_name, 0x1c0, 0x40, true, 0x4680f327d7d7dfc6)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TRACE_LOGFILE_HEADER64.LogFileName", log_file_name, 0x200, 0x40, true, 0x70d39d80c111891e)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::time_zone_information_t), "_TRACE_LOGFILE_HEADER64.TimeZone", time_zone, 0x240, 0x60, true, 0xab59fd947673a40e)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_TRACE_LOGFILE_HEADER64.BootTime", boot_time, 0x7c0, 0x40, true, 0xb5bf6f36235a5da0)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_TRACE_LOGFILE_HEADER64.PerfFreq", perf_freq, 0x800, 0x40, true, 0x1c16aa63a213158d)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_TRACE_LOGFILE_HEADER64.StartTime", start_time, 0x840, 0x40, true, 0x8a8a55af6a73811c)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRACE_LOGFILE_HEADER64.BuffersLost", buffers_lost, 0x8a0, 0x20, true, 0x721437b540a5a466)
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