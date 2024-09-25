#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etw::guid_entry_t), "_ETW_SILODRIVERSTATE.EtwpSecurityProviderGuidEntry", etwp_security_provider_guid_entry, 0xc0, 0x40, true, 0x4940e98a2d738c03)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::array<struct ex::rundown_ref_cache_aware_t*, 64>, struct ex::rundown_ref_cache_aware_t**>), "_ETW_SILODRIVERSTATE.EtwpLoggerRundown", etwp_logger_rundown, 0xe00, 0x40, true, 0xfba881a1122eb72c)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct etw::hash_bucket_t, 64>), "_ETW_SILODRIVERSTATE.EtwpGuidHashTable", etwp_guid_hash_table, 0xe80, 0x0, true, 0xd374d7c7eb4dcb3b)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 8>), "_ETW_SILODRIVERSTATE.EtwpSecurityLoggers", etwp_security_loggers, 0x7e80, 0x80, true, 0x9d68bc16fb443ccf)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ETW_SILODRIVERSTATE.EtwpSecurityProviderEnableMask", etwp_security_provider_enable_mask, 0x7f00, 0x8, true, 0x9a5785834273ffb9)
#define _m005 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int32_t), "_ETW_SILODRIVERSTATE.EtwpShutdownInProgress", etwp_shutdown_in_progress, 0x7f20, 0x20, true, 0x55bc5b3f97c446d0, 0, uint8_t,uint32_t)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_SILODRIVERSTATE.EtwpSecurityProviderPID", etwp_security_provider_pid, 0x7f40, 0x20, true, 0xe3ab2919adbbf077)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ejob_t*), "_ETW_SILODRIVERSTATE.Silo", silo, 0x0, 0x40, true, 0xd424306094055995)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::eserversilo_globals_t*), "_ETW_SILODRIVERSTATE.SiloGlobals", silo_globals, 0x40, 0x40, true, 0xc043fba0dee8018a)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_SILODRIVERSTATE.MaxLoggers", max_loggers, 0x80, 0x20, true, 0x505e49d5647e0a3e)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wmi::logger_context_t**), "_ETW_SILODRIVERSTATE.EtwpLoggerContext", etwp_logger_context, 0xe40, 0x40, true, 0x6573535e856b6241)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etw::priv_handle_demux_table_t), "_ETW_SILODRIVERSTATE.PrivHandleDemuxTable", priv_handle_demux_table, 0x7f80, 0x0, true, 0x198b4e748e479039)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etw::counters_t), "_ETW_SILODRIVERSTATE.EtwpCounters", etwp_counters, 0x8080, 0x80, true, 0xb6c9b0a57d303434)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_ETW_SILODRIVERSTATE.LogfileBytesWritten", logfile_bytes_written, 0x8100, 0x40, true, 0xc6d71e3ba698e7ce)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etw::silo_tracing_block_t*), "_ETW_SILODRIVERSTATE.ProcessorBlocks", processor_blocks, 0x8140, 0x40, true, 0x1adfb6994c898b89)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_ETW_SILODRIVERSTATE.PartitionId", partition_id, 0x81c0, 0x80, true, 0x5698ce1b19135ae6)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_ETW_SILODRIVERSTATE.ParentId", parent_id, 0x8240, 0x80, true, 0x577929477ca0a34d)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_ETW_SILODRIVERSTATE.QpcOffsetFromRoot", qpc_offset_from_root, 0x82c0, 0x40, true, 0xe4e6dc5fb1a29bf5)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_ETW_SILODRIVERSTATE.PartitionName", partition_name, 0x8300, 0x40, true, 0xb05549d2f125e1b9)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_ETW_SILODRIVERSTATE.PartitionNameSize", partition_name_size, 0x8340, 0x10, true, 0xc0f3f27c0e22f806)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_ETW_SILODRIVERSTATE.UnusedPadding", unused_padding, 0x8350, 0x10, true, 0xb2291cea5f336164)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_SILODRIVERSTATE.PartitionType", partition_type, 0x8360, 0x20, true, 0x2c38443a40eb26a6)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etw::system_logger_settings_t), "_ETW_SILODRIVERSTATE.SystemLoggerSettings", system_logger_settings, 0x8380, 0xa0, true, 0x142652432e86817a)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kmutant_t), "_ETW_SILODRIVERSTATE.EtwpStartTraceMutex", etwp_start_trace_mutex, 0x8f40, 0xc0, true, 0x6e41f4723ef63d64)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::wnf_subscription_t*), "_ETW_SILODRIVERSTATE.ContainerRestoreWnfSubscription", container_restore_wnf_subscription, 0x8180, 0x40, true, 0xb2f0fa7d19696d71)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct wmi::logger_context_t*, 64>), "_ETW_SILODRIVERSTATE.WmipLoggerContext", wmip_logger_context, 0x0, 0x0, false, 0xb0397c471f9d0e94)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_ETW_SILODRIVERSTATE.RTBacklogFileRoot", rt_backlog_file_root, 0x0, 0x0, false, 0xa9620a319fa7db7a)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::wnf_subscription_t*), "_ETW_SILODRIVERSTATE.ContainerStateWnfSubscription", container_state_wnf_subscription, 0x0, 0x0, false, 0x5e6bfcecf9f3fbd1)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_SILODRIVERSTATE.ContainerStateWnfCallbackCalled", container_state_wnf_callback_called, 0x0, 0x0, false, 0x5f388fea48b95cbb)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t*), "_ETW_SILODRIVERSTATE.UnsubscribeWorkItem", unsubscribe_work_item, 0x0, 0x0, false, 0xd80e11c179d469e6)
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
#endif