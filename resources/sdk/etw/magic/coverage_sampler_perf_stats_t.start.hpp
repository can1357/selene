#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.RunTime", run_time, 0x0, 0x40, true, 0x89788b19e2287907)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.SampleProfile", sample_profile, 0x40, 0x20, true, 0xb81ccb7ffc875cae)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.SampleCSwitch", sample_c_switch, 0x60, 0x20, true, 0xda6c53d7fc0cc8b5)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.SampleRThread", sample_r_thread, 0x80, 0x20, true, 0xced564b3f3a1f9a2)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.SamplePGFault", sample_pg_fault, 0xa0, 0x20, true, 0x125c18868797cc05)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.CaptureSampleProfile", capture_sample_profile, 0xc0, 0x20, true, 0xf3dbcbc431b10422)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.CaptureSampleCSwitch", capture_sample_c_switch, 0xe0, 0x20, true, 0x30df3132550c6cd3)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.CaptureSampleRThread", capture_sample_r_thread, 0x100, 0x20, true, 0xa44f0da05767393e)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.CaptureSamplePGFault", capture_sample_pg_fault, 0x120, 0x20, true, 0xed09998596a4fa23)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.CoverageSamplerCreated", coverage_sampler_created, 0x140, 0x20, true, 0x61cf4adb4220f31)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.CoverageSamplerDeleted", coverage_sampler_deleted, 0x160, 0x20, true, 0x9cfd0406c77a1041)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.CoverageSamplerStarted", coverage_sampler_started, 0x180, 0x20, true, 0x3c567dc010a38ece)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.CoverageSamplerPaused", coverage_sampler_paused, 0x1a0, 0x20, true, 0x24ce3a5b3ab46c0b)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.CoverageSamplerResumed", coverage_sampler_resumed, 0x1c0, 0x20, true, 0xebe838b7d5173d80)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.CoverageSamplerStopped", coverage_sampler_stopped, 0x1e0, 0x20, true, 0xbea83586511b3ba2)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.CoverageSamplerQueried", coverage_sampler_queried, 0x200, 0x20, true, 0xf39659ea07163de8)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.CoverageSamplerQueryFailNotActive", coverage_sampler_query_fail_not_active, 0x220, 0x20, true, 0x79ca744b1c1a8620)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.SamplesAdded", samples_added, 0x240, 0x20, true, 0x9af92db5c0975f67)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.SamplesFound", samples_found, 0x260, 0x20, true, 0x87d4940dd878cb9)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.SamplesDropped", samples_dropped, 0x280, 0x20, true, 0x6b5c25155f817c9b)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.SamplesMappedUM", samples_mapped_um, 0x2a0, 0x20, true, 0xe24cc45047609f85)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.SamplesMappedKM", samples_mapped_km, 0x2c0, 0x20, true, 0xdbd7dd0bfbc1ac35)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.SamplesTryMapUM", samples_try_map_um, 0x2e0, 0x20, true, 0xa24efbd284b1c6d9)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.SamplesTryMapKM", samples_try_map_km, 0x300, 0x20, true, 0xb7a18aa092652a2c)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.SamplesAddedAlreadyMapped", samples_added_already_mapped, 0x320, 0x20, true, 0xc8d2ee3d53a4f378)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.ModulesTrackedUM", modules_tracked_um, 0x340, 0x20, true, 0xef39136ad4ff8a27)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.ModulesMappedUM", modules_mapped_um, 0x360, 0x20, true, 0xbcb40264a84e5f2b)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.ModulesUnmappedUM", modules_unmapped_um, 0x380, 0x20, true, 0x72a115ed688cb3ff)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.ModulesTrackedKM", modules_tracked_km, 0x3a0, 0x20, true, 0xba875bd87fe6606f)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.ModulesMappedKM", modules_mapped_km, 0x3c0, 0x20, true, 0x1be842382f3ed0c0)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.ModulesUnmappedKM", modules_unmapped_km, 0x3e0, 0x20, true, 0x59ae4283819fd085)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.ModulesCleared", modules_cleared, 0x400, 0x20, true, 0x598aee1061558130)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.ModulesPruned", modules_pruned, 0x420, 0x20, true, 0x372e7379c747e1cf)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.ModulesPrunedPendingDelete", modules_pruned_pending_delete, 0x440, 0x20, true, 0xea826ab882962b59)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.ModulesOutOfDatePendingDelete", modules_out_of_date_pending_delete, 0x460, 0x20, true, 0x1b92adad5d377baa)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.ModuleBucketsGrown", module_buckets_grown, 0x480, 0x20, true, 0xf29671e08f78b756)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.ModuleDebugInfoFailedQuery", module_debug_info_failed_query, 0x4a0, 0x20, true, 0x91486c74775ee972)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.ModuleDebugInfoTooLarge", module_debug_info_too_large, 0x4c0, 0x20, true, 0x6a23f0ed1ca795e2)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.ModuleIdHashDuplicate", module_id_hash_duplicate, 0x4e0, 0x20, true, 0x7f2870fcf54deb6a)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.ModuleIdHashConflict", module_id_hash_conflict, 0x500, 0x20, true, 0xcde0d52d6fc6d0d5)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.ProcessesTracked", processes_tracked, 0x520, 0x20, true, 0xe36463e0d3053989)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.ProcessesIgnored", processes_ignored, 0x540, 0x20, true, 0x85d1d38d48e8861a)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.ProcessesDeleted", processes_deleted, 0x560, 0x20, true, 0x9e1aabf4f87b50a1)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.CaptureSampleAttempts", capture_sample_attempts, 0x580, 0x20, true, 0x7b14002a98c9b670)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.CaptureSampleSamplingPaused", capture_sample_sampling_paused, 0x5a0, 0x20, true, 0xff07f2996b8529b8)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.CaptureKernelStack", capture_kernel_stack, 0x5c0, 0x20, true, 0x7985dffb6d10042)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.CaptureUserStack", capture_user_stack, 0x5e0, 0x20, true, 0x57a2dc7d617b8686)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.CaptureIPNotInStack", capture_ip_not_in_stack, 0x600, 0x20, true, 0x662e3900382f620a)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.CaptureSampleIdle", capture_sample_idle, 0x620, 0x20, true, 0x8eb2767428d7bbe5)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.CaptureUserCheckSystemThread", capture_user_check_system_thread, 0x640, 0x20, true, 0x152cdec8aa2eb86)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.CaptureUserCheckNullTeb", capture_user_check_null_teb, 0x660, 0x20, true, 0x7f993b9f33dc7db8)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.CaptureUserCheckTerminating", capture_user_check_terminating, 0x680, 0x20, true, 0x5addbc5db7db5a4)
#define _m052 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.CaptureUserCheckSuspended", capture_user_check_suspended, 0x6a0, 0x20, true, 0xe0d3c1de28e32586)
#define _m053 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.CaptureApcNotInGoodEnvironment", capture_apc_not_in_good_environment, 0x6c0, 0x20, true, 0xff5f1b97648b7ce2)
#define _m054 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.CaptureRebalanceQueue", capture_rebalance_queue, 0x6e0, 0x20, true, 0x9dbd97332979b873)
#define _m055 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.CaptureRebalance", capture_rebalance, 0x700, 0x20, true, 0xb6859d3ff74d629)
#define _m056 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.CaptureApc", capture_apc, 0x720, 0x20, true, 0xfbe1c2aaf8f75866)
#define _m057 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.CaptureApcNotAvailable", capture_apc_not_available, 0x740, 0x20, true, 0xf4735ecaba04da80)
#define _m058 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.CaptureApcThreadNotQueueable", capture_apc_thread_not_queueable, 0x760, 0x20, true, 0xa71a8139bc6c69)
#define _m059 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.CaptureApcAlreadyQueued", capture_apc_already_queued, 0x780, 0x20, true, 0xc182fdda404d4134)
#define _m060 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.CaptureThreadAlreadySampling", capture_thread_already_sampling, 0x7a0, 0x20, true, 0xc4a95c0359d48b6d)
#define _m061 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.CaptureApcQueue", capture_apc_queue, 0x7c0, 0x20, true, 0xb14a4af553db7545)
#define _m062 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.CaptureApcQueueAtHighIrql", capture_apc_queue_at_high_irql, 0x7e0, 0x20, true, 0x1cdd020214088d4e)
#define _m063 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.CaptureApcFailedToQueue", capture_apc_failed_to_queue, 0x800, 0x20, true, 0x896ae1ce27584f5b)
#define _m064 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.CaptureApcFailedToQueueAtHighIrql", capture_apc_failed_to_queue_at_high_irql, 0x820, 0x20, true, 0xf9c583e5b42880d7)
#define _m065 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.CaptureApcFailedToQueueAtHighIrqlNotRunning", capture_apc_failed_to_queue_at_high_irql_not_running, 0x840, 0x20, true, 0x303202f11737896d)
#define _m066 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.CaptureApcFailedToQueueAtHighIrqlNotApcQueueable", capture_apc_failed_to_queue_at_high_irql_not_apc_queueable, 0x860, 0x20, true, 0x60784d7e8a21b206)
#define _m067 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.CaptureApcRundown", capture_apc_rundown, 0x880, 0x20, true, 0x9a68e65f01b637ca)
#define _m068 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.CaptureApcCancel", capture_apc_cancel, 0x8a0, 0x20, true, 0x3acc2a6817f9f22f)
#define _m069 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.CaptureApcCancelFailRemove", capture_apc_cancel_fail_remove, 0x8c0, 0x20, true, 0xd245f1fa99423735)
#define _m070 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.CaptureBufferNotAvailable", capture_buffer_not_available, 0x8e0, 0x20, true, 0x9ee691aca1283891)
#define _m071 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.CaptureBufferReleaseEmpty", capture_buffer_release_empty, 0x900, 0x20, true, 0x28bcdce263d656da)
#define _m072 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.CaptureBufferQueued", capture_buffer_queued, 0x920, 0x20, true, 0x2871ce66087e5bb9)
#define _m073 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.CaptureBufferCopied", capture_buffer_copied, 0x940, 0x20, true, 0x107e01ee49311b06)
#define _m074 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.CaptureStartFailureCleanup", capture_start_failure_cleanup, 0x960, 0x20, true, 0xebae555e043553e0)
#define _m075 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.SampleBufferNotAvailable", sample_buffer_not_available, 0x980, 0x20, true, 0x7ebcc52480cdb96d)
#define _m076 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.WorkerWakeUpForCaptureBuffer", worker_wake_up_for_capture_buffer, 0x9a0, 0x20, true, 0xd2ca37996d101e4)
#define _m077 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.WorkerWakeUpForRebalance", worker_wake_up_for_rebalance, 0x9c0, 0x20, true, 0xcfa40787b07cc9c4)
#define _m078 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.WorkerProcessCaptureBuffer", worker_process_capture_buffer, 0x9e0, 0x20, true, 0x908f6e8995434a63)
#define _m079 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.WorkerProcessSampleBuffer", worker_process_sample_buffer, 0xa00, 0x20, true, 0x8940292aa3eb2dfa)
#define _m080 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.WorkerProcessFlushBuffer", worker_process_flush_buffer, 0xa20, 0x20, true, 0x835530f620a5ad13)
#define _m081 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.StackHashMiss", stack_hash_miss, 0xa40, 0x20, true, 0x71b4ddc4603ad4cd)
#define _m082 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.StackHashHit", stack_hash_hit, 0xa60, 0x20, true, 0x146424914d20729a)
#define _m083 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.StackHashHitInHistory", stack_hash_hit_in_history, 0xa80, 0x20, true, 0x2c1a9081c3e26cba)
#define _m084 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.StackHashSwitchTables", stack_hash_switch_tables, 0xaa0, 0x20, true, 0xf87fafe13446c3fa)
#define _m085 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.StackHashCollisionInAdd", stack_hash_collision_in_add, 0xac0, 0x20, true, 0x6a5fad138c1846be)
#define _m086 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.StackHashAddHitLoad", stack_hash_add_hit_load, 0xae0, 0x20, true, 0x5b984b2b0b449a71)
#define _m087 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.StackHashAddHitMax", stack_hash_add_hit_max, 0xb00, 0x20, true, 0x9b345d7d01d12f0e)
#define _m088 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.BloomFilterExceptions", bloom_filter_exceptions, 0xb20, 0x20, true, 0x5ffcd0a8f2a5edd7)
#define _m089 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.BloomFilterSet", bloom_filter_set, 0xb40, 0x20, true, 0xe22bd9cbf77e4acf)
#define _m090 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.BloomFilterOnCreate", bloom_filter_on_create, 0xb60, 0x20, true, 0xcd1134a628a9fa00)
#define _m091 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.BloomFilterHit", bloom_filter_hit, 0xb80, 0x20, true, 0x9924f63f7fa9ae22)
#define _m092 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.BloomFilterMiss", bloom_filter_miss, 0xba0, 0x20, true, 0xc8d1e18eb5a2b388)
#define _m093 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.BufferSamplesCopied", buffer_samples_copied, 0xbc0, 0x20, true, 0x2aaa493801d0be0f)
#define _m094 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.BufferSamplesProcessed", buffer_samples_processed, 0xbe0, 0x20, true, 0xdf8d3809412c0db5)
#define _m095 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.BufferSamplesAddedToSampler", buffer_samples_added_to_sampler, 0xc00, 0x20, true, 0x571c41eb021b678c)
#define _m096 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.BufferAddressesCopied", buffer_addresses_copied, 0xc20, 0x20, true, 0x893229c96913d4e2)
#define _m097 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.BufferAddressesProcessed", buffer_addresses_processed, 0xc40, 0x20, true, 0xa06cd426c2629e48)
#define _m098 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.BufferAddressesAddedToSampler", buffer_addresses_added_to_sampler, 0xc60, 0x20, true, 0x4fd3357ca56676c3)
#define _m099 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.ReserveFailedAcquireLock", reserve_failed_acquire_lock, 0xc80, 0x20, true, 0xee1acb2618551d17)
#define _m100 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.ReserveCaptureStopped", reserve_capture_stopped, 0xca0, 0x20, true, 0xbfaabfe56c0c8049)
#define _m101 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.ReserveNewBufferSet", reserve_new_buffer_set, 0xcc0, 0x20, true, 0x2edd0f3e31ed4446)
#define _m102 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.ReserveNewBufferFailed", reserve_new_buffer_failed, 0xce0, 0x20, true, 0x36588193a98fd229)
#define _m103 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.ReserveNewBufferAllocated", reserve_new_buffer_allocated, 0xd00, 0x20, true, 0xea7a8fdbbc4ae69d)
#define _m104 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.ReserveNewBufferReleased", reserve_new_buffer_released, 0xd20, 0x20, true, 0x9a160b6e30259850)
#define _m105 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.ReserveSucceeded", reserve_succeeded, 0xd40, 0x20, true, 0xbbbd4df379036220)
#define _m106 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.TableGrew", table_grew, 0xd60, 0x20, true, 0x81a209c3b4d68264)
#define _m107 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.TableGrow", table_grow, 0xd80, 0x20, true, 0x6907e3b40c3b4a53)
#define _m108 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.TableQueued", table_queued, 0xda0, 0x20, true, 0xa2a21547e3c2b593)
#define _m109 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.TableHitInCurrent", table_hit_in_current, 0xdc0, 0x20, true, 0x2630e4082191dc45)
#define _m110 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.TableHitInOld", table_hit_in_old, 0xde0, 0x20, true, 0xac94453098e80b9d)
#define _m111 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.WorkerKernelRunTime", worker_kernel_run_time, 0x0, 0x0, false, 0x7ca07fd21f659061)
#define _m112 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.WorkerKernelWaitTime", worker_kernel_wait_time, 0x0, 0x0, false, 0x74fadac0fbc0657b)
#define _m113 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.WorkerKernelTime", worker_kernel_time, 0x0, 0x0, false, 0x85b6438cebd1406)
#define _m114 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.WorkerUserTime", worker_user_time, 0x0, 0x0, false, 0x64be1adc652fef13)
#define _m115 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.CaptureApcBecauseHighIrql", capture_apc_because_high_irql, 0x0, 0x0, false, 0x3a084a52eef47744)
#define _m116 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.CaptureApcBecauseApcsDisabled", capture_apc_because_apcs_disabled, 0x0, 0x0, false, 0xabb5e5d2d933232f)
#define _m117 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.CaptureApcBecauseNotMmCanThreadFault", capture_apc_because_not_mm_can_thread_fault, 0x0, 0x0, false, 0x380d23d733ff82c2)
#define _m118 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.CaptureApcBecauseActiveFaultInApc", capture_apc_because_active_fault_in_apc, 0x0, 0x0, false, 0xb96593777fe8f52b)
#define _m119 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.CaptureApcBecauseAttachedProcess", capture_apc_because_attached_process, 0x0, 0x0, false, 0x3d26b7c8f35afe26)
#define _m120 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.CaptureApcBecauseIsActuallySafe", capture_apc_because_is_actually_safe, 0x0, 0x0, false, 0x630423c55802b6c2)
#define _m121 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.AllocatedNonPagedCount", allocated_non_paged_count, 0x0, 0x0, false, 0xfdd9ad839fda4ec4)
#define _m122 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.AllocatedPagedCount", allocated_paged_count, 0x0, 0x0, false, 0xb64fc560ae3048a2)
#define _m123 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.FreedNonPagedCount", freed_non_paged_count, 0x0, 0x0, false, 0x4f08ae35f53bb686)
#define _m124 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.FreedPagedCount", freed_paged_count, 0x0, 0x0, false, 0x71856b6933dd884)
#define _m125 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.AllocationFailure", allocation_failure, 0x0, 0x0, false, 0x311851a6ff246950)
#define _m126 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.ProfileInterval", profile_interval, 0x0, 0x0, false, 0xc98466170e95b3b8)
#define _m127 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.AllocatedNonPagedSize", allocated_non_paged_size, 0x0, 0x0, false, 0x3e3d0a785504c7ed)
#define _m128 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.FreedNonPagedSize", freed_non_paged_size, 0x0, 0x0, false, 0xd3edc5269b00d5db)
#define _m129 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.AllocatedPagedSize", allocated_paged_size, 0x0, 0x0, false, 0x2c1a4c8c69452e5e)
#define _m130 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.FreedPagedSize", freed_paged_size, 0x0, 0x0, false, 0x5250ff40650dfe30)
#define _m131 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.MaximumIncrement", maximum_increment, 0x0, 0x0, false, 0xe3624460cbe0f09b)
#define _m132 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_COVERAGE_SAMPLER_PERF_STATS.ProcessorCount", processor_count, 0x0, 0x0, false, 0x9a96828c57113c13)
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
#endif