#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRACE_LOGFILE_HEADER32.BufferSize", buffer_size, 0x0, 0x20, true, 0xcb958cc3aaae80a1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRACE_LOGFILE_HEADER32.Version", version, 0x20, 0x20, true, 0x90896af41bdd1556)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_TRACE_LOGFILE_HEADER32.VersionDetail.MajorVersion", major_version, 0x0, 0x8, true, 0x129c499f3c7e5a2d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_TRACE_LOGFILE_HEADER32.VersionDetail.MinorVersion", minor_version, 0x8, 0x8, true, 0x818eef01ed05f3a9)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_TRACE_LOGFILE_HEADER32.VersionDetail.SubVersion", sub_version, 0x10, 0x8, true, 0xf70229b5298d2de6)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_TRACE_LOGFILE_HEADER32.VersionDetail.SubMinorVersion", sub_minor_version, 0x18, 0x8, true, 0x2981240e3a071a57)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_version_detail_t), "_TRACE_LOGFILE_HEADER32.VersionDetail", version_detail, 0x20, 0x20, true, 0x4dcbd9052037c31e)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRACE_LOGFILE_HEADER32.ProviderVersion", provider_version, 0x40, 0x20, true, 0xcd19782ded46de0a)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRACE_LOGFILE_HEADER32.NumberOfProcessors", number_of_processors, 0x60, 0x20, true, 0x150a3a6456592b7a)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_TRACE_LOGFILE_HEADER32.EndTime", end_time, 0x80, 0x40, true, 0x367b97350b07c05)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRACE_LOGFILE_HEADER32.TimerResolution", timer_resolution, 0xc0, 0x20, true, 0x74d5be66c51f3c37)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRACE_LOGFILE_HEADER32.MaximumFileSize", maximum_file_size, 0xe0, 0x20, true, 0xa2be2ff188930b46)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRACE_LOGFILE_HEADER32.LogFileMode", log_file_mode, 0x100, 0x20, true, 0x9a6542e4852acf27)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRACE_LOGFILE_HEADER32.BuffersWritten", buffers_written, 0x120, 0x20, true, 0xe73c7a8c862f2a7e)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_TRACE_LOGFILE_HEADER32.LogInstanceGuid", log_instance_guid, 0x140, 0x80, true, 0x32c30aef2f4a2b25)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRACE_LOGFILE_HEADER32.StartBuffers", start_buffers, 0x140, 0x20, true, 0x56ad5d28dd7cf07e)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRACE_LOGFILE_HEADER32.PointerSize", pointer_size, 0x160, 0x20, true, 0xb7799d4db6e45b70)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRACE_LOGFILE_HEADER32.EventsLost", events_lost, 0x180, 0x20, true, 0xff71be712ad47c0e)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRACE_LOGFILE_HEADER32.CpuSpeedInMHz", cpu_speed_in_m_hz, 0x1a0, 0x20, true, 0xfbb1b73ea956feaf)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRACE_LOGFILE_HEADER32.LoggerName", logger_name, 0x1c0, 0x20, true, 0x229e6347eb3530c9)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRACE_LOGFILE_HEADER32.LogFileName", log_file_name, 0x1e0, 0x20, true, 0x26f14f2602ee78dd)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::time_zone_information_t), "_TRACE_LOGFILE_HEADER32.TimeZone", time_zone, 0x200, 0x60, true, 0xd480e5dd9fd31006)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_TRACE_LOGFILE_HEADER32.BootTime", boot_time, 0x780, 0x40, true, 0x1b35dae523dbd7ee)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_TRACE_LOGFILE_HEADER32.PerfFreq", perf_freq, 0x7c0, 0x40, true, 0x20757e3702542506)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_TRACE_LOGFILE_HEADER32.StartTime", start_time, 0x800, 0x40, true, 0xbfc5db2bff72ccc5)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRACE_LOGFILE_HEADER32.BuffersLost", buffers_lost, 0x860, 0x20, true, 0x369af84770d0c868)
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