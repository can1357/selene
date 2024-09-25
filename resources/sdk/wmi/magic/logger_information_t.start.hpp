#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::wnode_header_t), "_WMI_LOGGER_INFORMATION.Wnode", wnode, 0x0, 0x80, true, 0x6513d21754973b39)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_LOGGER_INFORMATION.BufferSize", buffer_size, 0x180, 0x20, true, 0x1d4455f00cc9ed53)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_LOGGER_INFORMATION.MinimumBuffers", minimum_buffers, 0x1a0, 0x20, true, 0xebc628a4251c96b3)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_LOGGER_INFORMATION.MaximumBuffers", maximum_buffers, 0x1c0, 0x20, true, 0x8fb48d6234577d14)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_LOGGER_INFORMATION.MaximumFileSize", maximum_file_size, 0x1e0, 0x20, true, 0x8eb386be5227a05c)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_LOGGER_INFORMATION.LogFileMode", log_file_mode, 0x200, 0x20, true, 0xf0b6a788f590d594)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_LOGGER_INFORMATION.FlushTimer", flush_timer, 0x220, 0x20, true, 0xa439bdfdfe110c95)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_LOGGER_INFORMATION.EnableFlags", enable_flags, 0x240, 0x20, true, 0x773dcd1fe53f1eef)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WMI_LOGGER_INFORMATION.AgeLimit", age_limit, 0x260, 0x20, true, 0xc2ab20de854b731d)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WMI_LOGGER_INFORMATION.FlushThreshold", flush_threshold, 0x260, 0x20, true, 0x19423dd5e1cd251c)
#define _m010 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint32_t), "_WMI_LOGGER_INFORMATION.Wow", wow, 0x280, 0x1, true, 0x8e86f17aad565122, 0, uint32_t,uint64_t)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WMI_LOGGER_INFORMATION.LogFileHandle", log_file_handle, 0x2c0, 0x40, true, 0x92078e4536584094)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WMI_LOGGER_INFORMATION.LogFileHandle64", log_file_handle64, 0x2c0, 0x40, true, 0xd46282d608ed0e0b)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_LOGGER_INFORMATION.NumberOfBuffers", number_of_buffers, 0x300, 0x20, true, 0x1aea1314a475bd32)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_LOGGER_INFORMATION.InstanceCount", instance_count, 0x300, 0x20, true, 0x815f284f76a51f51)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_LOGGER_INFORMATION.FreeBuffers", free_buffers, 0x320, 0x20, true, 0x2d5625fbd711cd83)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_LOGGER_INFORMATION.InstanceId", instance_id, 0x320, 0x20, true, 0x37ad269dd0b22f78)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_LOGGER_INFORMATION.EventsLost", events_lost, 0x340, 0x20, true, 0xee9c91dd4e182c7)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_LOGGER_INFORMATION.NumberOfProcessors", number_of_processors, 0x340, 0x20, true, 0x4fba898f04a724b2)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_LOGGER_INFORMATION.BuffersWritten", buffers_written, 0x360, 0x20, true, 0xe0325c608c58d35b)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_LOGGER_INFORMATION.LogBuffersLost", log_buffers_lost, 0x380, 0x20, true, 0xab49a3467aa573a0)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_LOGGER_INFORMATION.Flags", flags, 0x380, 0x20, true, 0xb2f6d62ebfea8b19)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_LOGGER_INFORMATION.RealTimeBuffersLost", real_time_buffers_lost, 0x3a0, 0x20, true, 0x28ca411a4c8a428)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WMI_LOGGER_INFORMATION.LoggerThreadId", logger_thread_id, 0x3c0, 0x40, true, 0x7010f9fab3abd8d9)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WMI_LOGGER_INFORMATION.LoggerThreadId64", logger_thread_id64, 0x3c0, 0x40, true, 0x7b55229c85e75447)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_WMI_LOGGER_INFORMATION.LogFileName", log_file_name, 0x400, 0x80, true, 0x7deaf9f242e0ba6a)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::ascii_view), "_WMI_LOGGER_INFORMATION.LogFileName64", log_file_name64, 0x400, 0x80, true, 0xe630bf3c314e174)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_WMI_LOGGER_INFORMATION.LoggerName", logger_name, 0x480, 0x80, true, 0xc5f889203a983da2)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::ascii_view), "_WMI_LOGGER_INFORMATION.LoggerName64", logger_name64, 0x480, 0x80, true, 0xc351ab5841787cb)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_LOGGER_INFORMATION.RealTimeConsumerCount", real_time_consumer_count, 0x500, 0x20, true, 0x33375c5a0a91bbed)
#define _m030 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WMI_LOGGER_INFORMATION.QpcDeltaTracking", qpc_delta_tracking, 0x281, 0x1, true, 0x517439f34d98aa1d, 1, uint64_t)
#define _m031 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WMI_LOGGER_INFORMATION.LargeMdlPages", large_mdl_pages, 0x282, 0x1, true, 0xe45949ef95430f37, 1, uint64_t)
#define _m032 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WMI_LOGGER_INFORMATION.ExcludeKernelStack", exclude_kernel_stack, 0x283, 0x1, true, 0x566a01dae272ef30, 1, uint64_t)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WMI_LOGGER_INFORMATION.V2Options", v2_options, 0x280, 0x40, true, 0x5a7f5dba63e6cddb)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_LOGGER_INFORMATION.SequenceNumber", sequence_number, 0x520, 0x20, true, 0x49f1f2ea636c631c)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WMI_LOGGER_INFORMATION.LoggerExtension", logger_extension, 0x540, 0x40, true, 0x9b066ae47d12a3b8)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WMI_LOGGER_INFORMATION.LoggerExtension64", logger_extension64, 0x540, 0x40, true, 0xa33ce7cc892861db)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_LOGGER_INFORMATION.SpareUlong", spare_ulong, 0x0, 0x0, false, 0x45914cdda4527a3)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_dummyunionname10_t), "_WMI_LOGGER_INFORMATION.DUMMYUNIONNAME10", dummyunionname10, 0x0, 0x0, false, 0xddea2a2500e0f1f6)
#define _m38 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WMI_LOGGER_INFORMATION.DUMMYUNIONNAME10.LoggerExtension", logger_extension, 0x0, 0x0, false, 0xe69824c2e7e547b)
#define _m39 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WMI_LOGGER_INFORMATION.DUMMYUNIONNAME10.LoggerExtension64", logger_extension64, 0x0, 0x0, false, 0x96996c7601aface6)
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
#define _m040
#define _m38
#define _m39
#endif