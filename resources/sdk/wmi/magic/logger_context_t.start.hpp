#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_LOGGER_CONTEXT.LoggerId", logger_id, 0x0, 0x20, true, 0x209d261dac76f674)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_LOGGER_CONTEXT.BufferSize", buffer_size, 0x20, 0x20, true, 0x923765be11d0ce89)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_LOGGER_CONTEXT.MaximumEventSize", maximum_event_size, 0x40, 0x20, true, 0xf55b3f0e87c67c71)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_LOGGER_CONTEXT.LoggerMode", logger_mode, 0x60, 0x20, true, 0x57e75897967f6624)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WMI_LOGGER_CONTEXT.AcceptNewEvents", accept_new_events, 0x80, 0x20, true, 0xbf33c738f59865c)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::function<int64_t()>*, uint64_t>), "_WMI_LOGGER_CONTEXT.GetCpuClock", get_cpu_clock, 0x140, 0x40, true, 0x78d8304695bdaeac)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ethread_t*), "_WMI_LOGGER_CONTEXT.LoggerThread", logger_thread, 0x180, 0x40, true, 0xcdb071c9ec01de58)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WMI_LOGGER_CONTEXT.LoggerStatus", logger_status, 0x1c0, 0x20, true, 0xd6411cca85f8e508)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_LOGGER_CONTEXT.FailureReason", failure_reason, 0x1e0, 0x20, true, 0x5bae90c998dcdbf9)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etw::buffer_queue_t), "_WMI_LOGGER_CONTEXT.BufferQueue", buffer_queue, 0x200, 0x80, true, 0xecd27d0ae32c2a87)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etw::buffer_queue_t), "_WMI_LOGGER_CONTEXT.OverflowQueue", overflow_queue, 0x280, 0x80, true, 0xf027c4b6a4c8739)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_WMI_LOGGER_CONTEXT.GlobalList", global_list, 0x300, 0x80, true, 0xce0cef4dfbeb69f8)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wmi::buffer_header_t*), "_WMI_LOGGER_CONTEXT.BatchedBufferList", batched_buffer_list, 0x480, 0x40, true, 0xa6decdb575e89ed7)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::fast_ref_t), "_WMI_LOGGER_CONTEXT.CurrentBuffer", current_buffer, 0x480, 0x40, true, 0x401683e75a33cc88)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_WMI_LOGGER_CONTEXT.LoggerName", logger_name, 0x4c0, 0x80, true, 0x50655c8470afd9ab)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_WMI_LOGGER_CONTEXT.LogFileName", log_file_name, 0x540, 0x80, true, 0xcc93d96db17b4602)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_WMI_LOGGER_CONTEXT.LogFilePattern", log_file_pattern, 0x5c0, 0x80, true, 0x9093fc5fc5b9cbae)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_WMI_LOGGER_CONTEXT.NewLogFileName", new_log_file_name, 0x640, 0x80, true, 0xb6cec8ddddfb03d)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_LOGGER_CONTEXT.ClockType", clock_type, 0x6c0, 0x20, true, 0xbd474fb3601018ac)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_LOGGER_CONTEXT.LastFlushedBuffer", last_flushed_buffer, 0x6e0, 0x20, true, 0x81e9b38294d81637)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_LOGGER_CONTEXT.FlushTimer", flush_timer, 0x700, 0x20, true, 0x180197d01ed5b174)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_LOGGER_CONTEXT.FlushThreshold", flush_threshold, 0x720, 0x20, true, 0xd4d546ea47bc1c79)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_WMI_LOGGER_CONTEXT.ByteOffset", byte_offset, 0x740, 0x40, true, 0xd354bc4b6a619e09)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_LOGGER_CONTEXT.MinimumBuffers", minimum_buffers, 0x780, 0x20, true, 0xb7dd77ff0aca2138)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_WMI_LOGGER_CONTEXT.BuffersAvailable", buffers_available, 0x7a0, 0x20, true, 0xe800ee52a71fdd5d)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_WMI_LOGGER_CONTEXT.NumberOfBuffers", number_of_buffers, 0x7c0, 0x20, true, 0x3f0a37aaa876ec6a)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_LOGGER_CONTEXT.MaximumBuffers", maximum_buffers, 0x7e0, 0x20, true, 0x6f16a7f0d9f502d1)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_WMI_LOGGER_CONTEXT.EventsLost", events_lost, 0x800, 0x20, true, 0x17dc009e5e3efde2)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_WMI_LOGGER_CONTEXT.PeakBuffersCount", peak_buffers_count, 0x820, 0x20, true, 0x9b571b9c76018113)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_LOGGER_CONTEXT.BuffersWritten", buffers_written, 0x840, 0x20, true, 0x38846535a1dceb52)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_LOGGER_CONTEXT.LogBuffersLost", log_buffers_lost, 0x860, 0x20, true, 0x88501b972a4edb14)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_LOGGER_CONTEXT.RealTimeBuffersDelivered", real_time_buffers_delivered, 0x880, 0x20, true, 0x85f4ef34cdf7631e)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_LOGGER_CONTEXT.RealTimeBuffersLost", real_time_buffers_lost, 0x8a0, 0x20, true, 0xad413f4d51faf19f)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t*), "_WMI_LOGGER_CONTEXT.SequencePtr", sequence_ptr, 0x8c0, 0x40, true, 0x3b1c29159cab1de8)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_LOGGER_CONTEXT.LocalSequence", local_sequence, 0x900, 0x20, true, 0x1a9e0c7261f98e4e)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_WMI_LOGGER_CONTEXT.InstanceGuid", instance_guid, 0x920, 0x80, true, 0x49d432e17ca450a3)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_LOGGER_CONTEXT.MaximumFileSize", maximum_file_size, 0x9a0, 0x20, true, 0x2ceabef4545a6dd)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WMI_LOGGER_CONTEXT.FileCounter", file_counter, 0x9c0, 0x20, true, 0xb534e56723d32d22)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::pool_type_t), "_WMI_LOGGER_CONTEXT.PoolType", pool_type, 0x9e0, 0x20, true, 0xdb2acdb65bd82c9b)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etw::ref_clock_t), "_WMI_LOGGER_CONTEXT.ReferenceTime", reference_time, 0xa00, 0x80, true, 0x791448529b7e8ef3)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WMI_LOGGER_CONTEXT.CollectionOn", collection_on, 0xa80, 0x20, true, 0x98a53eb746781a36)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_LOGGER_CONTEXT.ProviderInfoSize", provider_info_size, 0xaa0, 0x20, true, 0x78baf89720d5fe70)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_WMI_LOGGER_CONTEXT.Consumers", consumers, 0xac0, 0x80, true, 0xdc2d70b2e6064b96)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_LOGGER_CONTEXT.NumConsumers", num_consumers, 0xb40, 0x20, true, 0xbac7b7e9c8aa3da4)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etw::realtime_consumer_t*), "_WMI_LOGGER_CONTEXT.TransitionConsumer", transition_consumer, 0xb80, 0x40, true, 0x30716ff2ec11ff2c)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WMI_LOGGER_CONTEXT.RealtimeLogfileHandle", realtime_logfile_handle, 0xbc0, 0x40, true, 0xd9ee3bfa733af6f)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_WMI_LOGGER_CONTEXT.RealtimeLogfileName", realtime_logfile_name, 0xc00, 0x80, true, 0x96ffb945fb43dca7)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_WMI_LOGGER_CONTEXT.RealtimeWriteOffset", realtime_write_offset, 0xc80, 0x40, true, 0x2a19e9f41eb523a)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_WMI_LOGGER_CONTEXT.RealtimeReadOffset", realtime_read_offset, 0xcc0, 0x40, true, 0x8f225e3150f6575f)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_WMI_LOGGER_CONTEXT.RealtimeLogfileSize", realtime_logfile_size, 0xd00, 0x40, true, 0x8e9e456b216a5a0d)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WMI_LOGGER_CONTEXT.RealtimeLogfileUsage", realtime_logfile_usage, 0xd40, 0x40, true, 0x912dd0fb254743a5)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WMI_LOGGER_CONTEXT.RealtimeMaximumFileSize", realtime_maximum_file_size, 0xd80, 0x40, true, 0x34df803ed17bd698)
#define _m052 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_LOGGER_CONTEXT.RealtimeBuffersSaved", realtime_buffers_saved, 0xdc0, 0x20, true, 0x4d3a17f2d92df4b0)
#define _m053 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etw::ref_clock_t), "_WMI_LOGGER_CONTEXT.RealtimeReferenceTime", realtime_reference_time, 0xe00, 0x80, true, 0xdcf0724e1887bffd)
#define _m054 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum etw::rt_event_loss_t), "_WMI_LOGGER_CONTEXT.NewRTEventsLost", new_rt_events_lost, 0xe80, 0x20, true, 0x9e59668d2f9f485d)
#define _m055 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_WMI_LOGGER_CONTEXT.LoggerEvent", logger_event, 0xec0, 0xc0, true, 0x134405e4a22078d4)
#define _m056 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_WMI_LOGGER_CONTEXT.FlushEvent", flush_event, 0xf80, 0xc0, true, 0x66878ec3fed870e9)
#define _m057 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ktimer_t), "_WMI_LOGGER_CONTEXT.FlushTimeOutTimer", flush_time_out_timer, 0x1040, 0x0, true, 0x46a51d31e73a5d9e)
#define _m058 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t), "_WMI_LOGGER_CONTEXT.LoggerDpc", logger_dpc, 0x1240, 0x0, true, 0x89cc166fb0ec0ba7)
#define _m059 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kmutant_t), "_WMI_LOGGER_CONTEXT.LoggerMutex", logger_mutex, 0x1440, 0xc0, true, 0xe0f8695a9f3a1677)
#define _m060 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_WMI_LOGGER_CONTEXT.LoggerLock", logger_lock, 0x1600, 0x40, true, 0x79730ffdd864de7c)
#define _m061 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WMI_LOGGER_CONTEXT.BufferListSpinLock", buffer_list_spin_lock, 0x1640, 0x40, true, 0x71c15dc195f64d30)
#define _m062 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_WMI_LOGGER_CONTEXT.BufferListPushLock", buffer_list_push_lock, 0x1640, 0x40, true, 0xaf63e1e3ccd6003a)
#define _m063 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct sec::client_context_t), "_WMI_LOGGER_CONTEXT.ClientSecurityContext", client_security_context, 0x1680, 0x40, true, 0x8b3c5a63e53f7ebe)
#define _m064 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::token_access_information_t*), "_WMI_LOGGER_CONTEXT.TokenAccessInformation", token_access_information, 0x18c0, 0x40, true, 0x9170d8a5f090c71b)
#define _m065 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::fast_ref_t), "_WMI_LOGGER_CONTEXT.SecurityDescriptor", security_descriptor, 0x1900, 0x40, true, 0x38637dd758c99742)
#define _m066 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_WMI_LOGGER_CONTEXT.StartTime", start_time, 0x1940, 0x40, true, 0x74480db274ed36d2)
#define _m067 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WMI_LOGGER_CONTEXT.LogFileHandle", log_file_handle, 0x1980, 0x40, true, 0xb75246495e2e7515)
#define _m068 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_WMI_LOGGER_CONTEXT.BufferSequenceNumber", buffer_sequence_number, 0x19c0, 0x40, true, 0xb71a72b973ebc5e3)
#define _m069 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_LOGGER_CONTEXT.Flags", flags, 0x1a00, 0x20, true, 0xef878fd8568b2d44)
#define _m070 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WMI_LOGGER_CONTEXT.Persistent", persistent, 0x1a00, 0x1, true, 0x3d29559e1b5891b1, 1, uint32_t)
#define _m071 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WMI_LOGGER_CONTEXT.AutoLogger", auto_logger, 0x1a01, 0x1, true, 0xf79866d12fcc3813, 1, uint32_t)
#define _m072 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WMI_LOGGER_CONTEXT.FsReady", fs_ready, 0x1a02, 0x1, true, 0x1d0243473621cee6, 1, uint32_t)
#define _m073 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WMI_LOGGER_CONTEXT.RealTime", real_time, 0x1a03, 0x1, true, 0x3330165651d1340d, 1, uint32_t)
#define _m074 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WMI_LOGGER_CONTEXT.Wow", wow, 0x1a04, 0x1, true, 0x8170c89bb3fc486c, 1, uint32_t)
#define _m075 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WMI_LOGGER_CONTEXT.KernelTrace", kernel_trace, 0x1a05, 0x1, true, 0xb500a5a6474853c4, 1, uint32_t)
#define _m076 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WMI_LOGGER_CONTEXT.NoMoreEnable", no_more_enable, 0x1a06, 0x1, true, 0xd08b9d7051fc7fec, 1, uint32_t)
#define _m077 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WMI_LOGGER_CONTEXT.StackTracing", stack_tracing, 0x1a07, 0x1, true, 0x6dcc49cc6a748574, 1, uint32_t)
#define _m078 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WMI_LOGGER_CONTEXT.ErrorLogged", error_logged, 0x1a08, 0x1, true, 0x9df5fb5a884bea11, 1, uint32_t)
#define _m079 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WMI_LOGGER_CONTEXT.RealtimeLoggerContextFreed", realtime_logger_context_freed, 0x1a09, 0x1, true, 0x940db67c1ee2f34c, 1, uint32_t)
#define _m080 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WMI_LOGGER_CONTEXT.PebsTracing", pebs_tracing, 0x1a0a, 0x1, true, 0x8975f7846b28bb19, 1, uint32_t)
#define _m081 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WMI_LOGGER_CONTEXT.PmcCounters", pmc_counters, 0x1a0b, 0x1, true, 0x989ca01c9f4f1bb2, 1, uint32_t)
#define _m082 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WMI_LOGGER_CONTEXT.PageAlignBuffers", page_align_buffers, 0x1a0c, 0x1, true, 0x38baf8ccfbc00f64, 1, uint32_t)
#define _m083 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WMI_LOGGER_CONTEXT.StackLookasideListAllocated", stack_lookaside_list_allocated, 0x1a0d, 0x1, true, 0x745b6d0b8131c38b, 1, uint32_t)
#define _m084 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WMI_LOGGER_CONTEXT.SecurityTrace", security_trace, 0x1a0e, 0x1, true, 0x96473d7efef20fe1, 1, uint32_t)
#define _m085 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_WMI_LOGGER_CONTEXT.SystemLoggerIndex", system_logger_index, 0x1a10, 0x8, true, 0x87402476022381de, 8, uint32_t)
#define _m086 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WMI_LOGGER_CONTEXT.StackCaching", stack_caching, 0x1a18, 0x1, true, 0xd3ec9fb14325f31, 1, uint32_t)
#define _m087 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_WMI_LOGGER_CONTEXT.RequestFlag", request_flag, 0x1a20, 0x20, true, 0xf1015b551d2e4746)
#define _m088 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_WMI_LOGGER_CONTEXT.DbgRequestNewFile", dbg_request_new_file, 0x1a20, 0x1, true, 0x9f60327e228fb462, 1, uint32_t)
#define _m089 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_WMI_LOGGER_CONTEXT.DbgRequestUpdateFile", dbg_request_update_file, 0x1a21, 0x1, true, 0xb2ab98e94501c846, 1, uint32_t)
#define _m090 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_WMI_LOGGER_CONTEXT.DbgRequestFlush", dbg_request_flush, 0x1a22, 0x1, true, 0x95cb4f30cf20a98a, 1, uint32_t)
#define _m091 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_WMI_LOGGER_CONTEXT.DbgRequestDisableRealtime", dbg_request_disable_realtime, 0x1a23, 0x1, true, 0xe8bc53327c16f864, 1, uint32_t)
#define _m092 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_WMI_LOGGER_CONTEXT.DbgRequestDisconnectConsumer", dbg_request_disconnect_consumer, 0x1a24, 0x1, true, 0xe5fd8cf018f95f6e, 1, uint32_t)
#define _m093 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_WMI_LOGGER_CONTEXT.DbgRequestConnectConsumer", dbg_request_connect_consumer, 0x1a25, 0x1, true, 0x3d0159baf18a38eb, 1, uint32_t)
#define _m094 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_WMI_LOGGER_CONTEXT.DbgRequestNotifyConsumer", dbg_request_notify_consumer, 0x1a26, 0x1, true, 0xf61e491abbfe9317, 1, uint32_t)
#define _m095 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_WMI_LOGGER_CONTEXT.DbgRequestUpdateHeader", dbg_request_update_header, 0x1a27, 0x1, true, 0xc193304a4d6e51f3, 1, uint32_t)
#define _m096 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_WMI_LOGGER_CONTEXT.DbgRequestDeferredFlush", dbg_request_deferred_flush, 0x1a28, 0x1, true, 0x3b2dd74b3dfb62d3, 1, uint32_t)
#define _m097 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_WMI_LOGGER_CONTEXT.DbgRequestDeferredFlushTimer", dbg_request_deferred_flush_timer, 0x1a29, 0x1, true, 0x7c3944d53be3dc56, 1, uint32_t)
#define _m098 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_WMI_LOGGER_CONTEXT.DbgRequestFlushTimer", dbg_request_flush_timer, 0x1a2a, 0x1, true, 0x9431911d1bba9bf6, 1, uint32_t)
#define _m099 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_WMI_LOGGER_CONTEXT.DbgRequestUpdateDebugger", dbg_request_update_debugger, 0x1a2b, 0x1, true, 0x125c2f82bc7cbd36, 1, uint32_t)
#define _m100 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint20_t), "_WMI_LOGGER_CONTEXT.DbgSpareRequestFlags", dbg_spare_request_flags, 0x1a2c, 0x14, true, 0x1de9a945e15bca, 20, uint32_t)
#define _m101 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::bitmap_t), "_WMI_LOGGER_CONTEXT.HookIdMap", hook_id_map, 0x1e80, 0x80, true, 0xd044abc0f1781b8e)
#define _m102 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etw::stack_cache_t*), "_WMI_LOGGER_CONTEXT.StackCache", stack_cache, 0x1f00, 0x40, true, 0xf99c699bab17da13)
#define _m103 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etw::pmc_support_t*), "_WMI_LOGGER_CONTEXT.PmcData", pmc_data, 0x1f40, 0x40, true, 0x72c35dccf409d43a)
#define _m104 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wmi::buffer_header_t**), "_WMI_LOGGER_CONTEXT.ScratchArray", scratch_array, 0x2080, 0x40, true, 0xdeab1f4016df8643)
#define _m105 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::disallowed_guids_t), "_WMI_LOGGER_CONTEXT.DisallowedGuids", disallowed_guids, 0x20c0, 0x80, true, 0x4c165f244eef39c3)
#define _m106 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etw::soft_restart_context_t*), "_WMI_LOGGER_CONTEXT.SoftRestartContext", soft_restart_context, 0x2280, 0x40, true, 0x885875645dbb9e49)
#define _m107 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etw::silodriverstate_t*), "_WMI_LOGGER_CONTEXT.SiloState", silo_state, 0x22c0, 0x40, true, 0xde643fd6940ff456)
#define _m108 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t), "_WMI_LOGGER_CONTEXT.CompressionWorkItem", compression_work_item, 0x2300, 0x0, true, 0x401de29af2ad20b)
#define _m109 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WMI_LOGGER_CONTEXT.CompressionWorkItemState", compression_work_item_state, 0x2400, 0x20, true, 0xff22b12dfd31c5eb)
#define _m110 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_WMI_LOGGER_CONTEXT.CompressionLock", compression_lock, 0x2440, 0x40, true, 0x87bfc84f4705c966)
#define _m111 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wmi::buffer_header_t*), "_WMI_LOGGER_CONTEXT.CompressionTarget", compression_target, 0x2480, 0x40, true, 0xad166aaff6e07fde)
#define _m112 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WMI_LOGGER_CONTEXT.CompressionWorkspace", compression_workspace, 0x24c0, 0x40, true, 0xa0be3b7a33251615)
#define _m113 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WMI_LOGGER_CONTEXT.CompressionOn", compression_on, 0x2500, 0x20, true, 0x6f209db3ff26682c)
#define _m114 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_LOGGER_CONTEXT.CompressionRatioGuess", compression_ratio_guess, 0x2520, 0x20, true, 0xcd86243a0f2f784b)
#define _m115 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_LOGGER_CONTEXT.PartialBufferCompressionLevel", partial_buffer_compression_level, 0x2540, 0x20, true, 0x32b48187cf6d40af)
#define _m116 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum etw::compression_resumption_mode_t), "_WMI_LOGGER_CONTEXT.CompressionResumptionMode", compression_resumption_mode, 0x2560, 0x20, true, 0xa56da5f9f7644586)
#define _m117 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "_WMI_LOGGER_CONTEXT.PlaceholderList", placeholder_list, 0x2580, 0x40, true, 0x3d392afdf2dd7f91)
#define _m118 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t), "_WMI_LOGGER_CONTEXT.CompressionDpc", compression_dpc, 0x25c0, 0x0, true, 0x1b3cab0bb64387dc)
#define _m119 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_WMI_LOGGER_CONTEXT.LastBufferSwitchTime", last_buffer_switch_time, 0x27c0, 0x40, true, 0xda44281de9f638bb)
#define _m120 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_WMI_LOGGER_CONTEXT.BufferWriteDuration", buffer_write_duration, 0x2800, 0x40, true, 0x6bec461d50da4746)
#define _m121 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_WMI_LOGGER_CONTEXT.BufferCompressDuration", buffer_compress_duration, 0x2840, 0x40, true, 0xc825ba4596a186af)
#define _m122 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 2>), "_WMI_LOGGER_CONTEXT.EventMarker", event_marker, 0xa0, 0x40, true, 0x46ff846d5cf08c32)
#define _m123 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_LOGGER_CONTEXT.ErrorMarker", error_marker, 0xe0, 0x20, true, 0xe3847a4ae91f58b)
#define _m124 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_LOGGER_CONTEXT.SizeMask", size_mask, 0x100, 0x20, true, 0x2aadcfd4a9c623bb)
#define _m125 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint7_t), "_WMI_LOGGER_CONTEXT.SpareFlags2", spare_flags2, 0x1a1f, 0x1, true, 0xc844955da8c27a8b, 0, uint32_t)
#define _m126 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_WMI_LOGGER_CONTEXT.DebugIdTrackingList", debug_id_tracking_list, 0x380, 0x80, true, 0x7db0ffa876702553)
#define _m127 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etw::decode_control_entry_t*), "_WMI_LOGGER_CONTEXT.DecodeControlList", decode_control_list, 0x400, 0x40, true, 0x31987709be00a831)
#define _m128 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_LOGGER_CONTEXT.DecodeControlCount", decode_control_count, 0x440, 0x20, true, 0xcab0a9503e55eb68)
#define _m129 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WMI_LOGGER_CONTEXT.LastBranchTracing", last_branch_tracing, 0x1a0f, 0x1, true, 0x285f5ed9f629b3e3, 1, uint32_t)
#define _m130 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WMI_LOGGER_CONTEXT.ProviderTracking", provider_tracking, 0x1a19, 0x1, true, 0xc1d2fdbc8409d424, 1, uint32_t)
#define _m131 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WMI_LOGGER_CONTEXT.ProcessorTrace", processor_trace, 0x1a1a, 0x1, true, 0x83f4e7b640b8881d, 1, uint32_t)
#define _m132 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WMI_LOGGER_CONTEXT.QpcDeltaTracking", qpc_delta_tracking, 0x1a1b, 0x1, true, 0x8a9051303b9ef156, 1, uint32_t)
#define _m133 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WMI_LOGGER_CONTEXT.MarkerBufferSaved", marker_buffer_saved, 0x1a1c, 0x1, true, 0x3f30f3b861f7ef9e, 1, uint32_t)
#define _m134 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WMI_LOGGER_CONTEXT.LargeMdlPages", large_mdl_pages, 0x1a1d, 0x1, true, 0xf8bd2e6d7101d02, 1, uint32_t)
#define _m135 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WMI_LOGGER_CONTEXT.ExcludeKernelStack", exclude_kernel_stack, 0x1a1e, 0x1, true, 0xcf8f73f27297719, 1, uint32_t)
#define _m136 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etw::stack_trace_block_t), "_WMI_LOGGER_CONTEXT.StackTraceBlock", stack_trace_block, 0x1a80, 0x0, true, 0x58c4c5d6292ee69d)
#define _m137 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etw::lbr_support_t*), "_WMI_LOGGER_CONTEXT.LbrData", lbr_data, 0x1f80, 0x40, true, 0xf60b95dfa34860f6)
#define _m138 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etw::ipt_support_t*), "_WMI_LOGGER_CONTEXT.IptData", ipt_data, 0x1fc0, 0x40, true, 0x58d1bbbe58763ff)
#define _m139 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_WMI_LOGGER_CONTEXT.BinaryTrackingList", binary_tracking_list, 0x2000, 0x80, true, 0xc74961dceea787ce)
#define _m140 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_WMI_LOGGER_CONTEXT.ReferenceQpcDelta", reference_qpc_delta, 0x2880, 0x40, true, 0xa60dfbac34f51b87)
#define _m141 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etw::event_callback_context_t*), "_WMI_LOGGER_CONTEXT.CallbackContext", callback_context, 0x28c0, 0x40, true, 0xc58b9d72904c4f88)
#define _m142 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t*), "_WMI_LOGGER_CONTEXT.LastDroppedTime", last_dropped_time, 0x2900, 0x40, true, 0xa29d8ae62b9431ce)
#define _m143 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t*), "_WMI_LOGGER_CONTEXT.FlushingLastDroppedTime", flushing_last_dropped_time, 0x2940, 0x40, true, 0x4b07835b80cef142)
#define _m144 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_WMI_LOGGER_CONTEXT.FlushingSequenceNumber", flushing_sequence_number, 0x2980, 0x40, true, 0x9cfd3a9d2071481c)
#define _m145 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etw::partition_context_t), "_WMI_LOGGER_CONTEXT.PartitionContext", partition_context, 0x29c0, 0x40, true, 0x14527d2d01575cf2)
#define _m146 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_WMI_LOGGER_CONTEXT.BufferMdl", buffer_mdl, 0x2a00, 0x40, true, 0xf9abc4d42e581caa)
#define _m147 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_WMI_LOGGER_CONTEXT.RelativeTimerDueTime", relative_timer_due_time, 0x2140, 0x40, true, 0x141571dd15716496)
#define _m148 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::periodic_capture_state_guids_t), "_WMI_LOGGER_CONTEXT.PeriodicCaptureStateGuids", periodic_capture_state_guids, 0x2180, 0x80, true, 0xb1a22084dca0a3c1)
#define _m149 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::timer_t*), "_WMI_LOGGER_CONTEXT.PeriodicCaptureStateTimer", periodic_capture_state_timer, 0x2200, 0x40, true, 0x9fd6d799bacaaee6)
#define _m150 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum etw::periodic_timer_state_t), "_WMI_LOGGER_CONTEXT.PeriodicCaptureStateTimerState", periodic_capture_state_timer_state, 0x2240, 0x20, true, 0xbb141a69871411a)
#define _m151 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_WMI_LOGGER_CONTEXT.ProviderBinaryList", provider_binary_list, 0x0, 0x0, false, 0x92e7ad1182525f59)
#define _m152 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WMI_LOGGER_CONTEXT.SpareFlags1", spare_flags1, 0x0, 0x0, false, 0x4d0318a163587010, 1, uint32_t)
#define _m153 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_WMI_LOGGER_CONTEXT.WinRtProviderBinaryList", win_rt_provider_binary_list, 0x0, 0x0, false, 0x88336f0eaa111480)
#define _m154 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WMI_LOGGER_CONTEXT.BootLogger", boot_logger, 0x0, 0x0, false, 0x61a70b3d8cc84736, 1, uint32_t)
#define _m155 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_LOGGER_CONTEXT.Flags2", flags2, 0x0, 0x0, false, 0x9a78e56bd77e2482)
#define _m156 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WMI_LOGGER_CONTEXT.UnifiedStackCaching", unified_stack_caching, 0x0, 0x0, false, 0xf577ed5e1c08cb19, 1, uint32_t)
#define _m157 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::periodic_capture_state_context_t*), "_WMI_LOGGER_CONTEXT.PeriodicCaptureStateContext", periodic_capture_state_context, 0x0, 0x0, false, 0x3150403306865501)
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
#define _m038
#define _m039
#define _m040
#define _m041
#define _m042
#define _m043
#define _m044
#define _m045
#define _m046
#define _m047
#define _m048
#define _m049
#define _m050
#define _m051
#define _m052
#define _m053
#define _m054
#define _m055
#define _m056
#define _m057
#define _m058
#define _m059
#define _m060
#define _m061
#define _m062
#define _m063
#define _m064
#define _m065
#define _m066
#define _m067
#define _m068
#define _m069
#define _m070
#define _m071
#define _m072
#define _m073
#define _m074
#define _m075
#define _m076
#define _m077
#define _m078
#define _m079
#define _m080
#define _m081
#define _m082
#define _m083
#define _m084
#define _m085
#define _m086
#define _m087
#define _m088
#define _m089
#define _m090
#define _m091
#define _m092
#define _m093
#define _m094
#define _m095
#define _m096
#define _m097
#define _m098
#define _m099
#define _m100
#define _m101
#define _m102
#define _m103
#define _m104
#define _m105
#define _m106
#define _m107
#define _m108
#define _m109
#define _m110
#define _m111
#define _m112
#define _m113
#define _m114
#define _m115
#define _m116
#define _m117
#define _m118
#define _m119
#define _m120
#define _m121
#define _m122
#define _m123
#define _m124
#define _m125
#define _m126
#define _m127
#define _m128
#define _m129
#define _m130
#define _m131
#define _m132
#define _m133
#define _m134
#define _m135
#define _m136
#define _m137
#define _m138
#define _m139
#define _m140
#define _m141
#define _m142
#define _m143
#define _m144
#define _m145
#define _m146
#define _m147
#define _m148
#define _m149
#define _m150
#define _m151
#define _m152
#define _m153
#define _m154
#define _m155
#define _m156
#define _m157
#endif