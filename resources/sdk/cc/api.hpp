#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/mdl_t.hpp"
#include "../nt/vpb_t.hpp"
#include "partition_t.hpp"
#include "file_sizes_t.hpp"
#include "../nt/file_object_t.hpp"
#include "../io/status_block_t.hpp"
#include "../nt/shared_cache_map_t.hpp"
#include "../nt/cache_manager_callbacks_t.hpp"
#include "../nt/section_object_pointers_t.hpp"
#include "../nt/cache_uninitialize_event_t.hpp"

namespace nt { struct kthread_t; }

#include "magic/api.start.hpp"
namespace cc
{
    struct async_read_context_t;

    // [CcActiveExtraWriteBehindThreads]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x3242cc, 0x32828 bytes
    //
    _m00(sdk::unknown_ptr) active_extra_write_behind_threads;
    
    // [CcAddExternalCacheInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x39ccc0, 0x1fd000 bytes
    //
    _m01(sdk::unknown_ptr) add_external_cache_internal;
    
    // [CcAddExternalCacheToVolume]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x39cc64, 0x1fd000 bytes
    //
    _m02(sdk::unknown_ptr) add_external_cache_to_volume;
    
    // [CcAddExtraWriteBehindThreads]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x3422fb, 0x32828 bytes
    //
    _m03(sdk::unknown_ptr) add_extra_write_behind_threads;
    
    // [CcAdjustThrottleForPartition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5231bc, 0x1fd000 bytes
    //
    _m04(sdk::unknown_ptr) adjust_throttle_for_partition;
    
    // [CcAdjustThrottleForVolume]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x36cfe4, 0x1fd000 bytes
    //
    _m05(sdk::unknown_ptr) adjust_throttle_for_volume;
    
    // [CcAggregateCumulativeGlobalTelemetry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x7b6ad8, 0x1fd000 bytes
    //
    _m06(sdk::unknown_ptr) aggregate_cumulative_global_telemetry;
    
    // [CcAggregateCumulativeVolumeTelemetry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3671d8, 0x1fd000 bytes
    //
    _m07(sdk::unknown_ptr) aggregate_cumulative_volume_telemetry;
    
    // [CcAsyncLazywriteQueueDepthPerThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc5f670, 0x1fd000 bytes
    //
    _m08(sdk::unknown_ptr) async_lazywrite_queue_depth_per_thread;
    
    // [CcAsyncLazywriteWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x526e4c, 0x1fd000 bytes
    //
    _m09(sdk::unknown_ptr) async_lazywrite_worker;
    
    // [CcAsyncLazywriteWorkerMulti]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x52837c, 0x1fd000 bytes
    //
    _m10(sdk::unknown_ptr) async_lazywrite_worker_multi;
    
    // [CcAsyncLazywriteWorkerThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x527370, 0x1fd000 bytes
    //
    _m11(sdk::unknown_ptr) async_lazywrite_worker_thread;
    
    // [CcAsyncReadCompletionWorkQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x327000, 0x32828 bytes
    //
    _m12(sdk::unknown_ptr) async_read_completion_work_queue;
    
    // [CcAsyncReadWorkQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x327008, 0x32828 bytes
    //
    _m13(sdk::unknown_ptr) async_read_work_queue;
    
    // [CcAsyncReadWorkQueueLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x323e60, 0x32828 bytes
    //
    _m14(sdk::unknown_ptr) async_read_work_queue_lock;
    
    // [CcAsyncWriteBehindWaitTimeout]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc5f678, 0x1fd000 bytes
    //
    _m15(sdk::unknown_ptr) async_write_behind_wait_timeout;
    
    // [CcAverageAvailablePages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x323e20, 0x32828 bytes
    //
    _m16(sdk::unknown_ptr) average_available_pages;
    
    // [CcAverageDirtyPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x323e28, 0x32828 bytes
    //
    _m17(sdk::unknown_ptr) average_dirty_pages;
    
    // [CcCalculatePagesToWriteForVolume]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x36c940, 0x1fd000 bytes
    //
    _m18(sdk::unknown_ptr) calculate_pages_to_write_for_volume;
    
    // [CcCanIWriteStream]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x69950, 0x32828 bytes
    //
    _m19(sdk::function<uint8_t(struct nt::file_object_t*, uint32_t, uint32_t, uint32_t)>*) can_i_write_stream;
    
    // [CcChargeDirtyPagesInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2e7c08, 0x1fd000 bytes
    //
    _m20(sdk::unknown_ptr) charge_dirty_pages_internal;
    
    // [CcCleanSharedCacheMapList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x323e80, 0x32828 bytes
    //
    _m21(sdk::unknown_ptr) clean_shared_cache_map_list;
    
    // [CcCleanSharedCacheMapWithLogHandleList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x323e70, 0x32828 bytes
    //
    _m22(sdk::unknown_ptr) clean_shared_cache_map_with_log_handle_list;
    
    // [CcClearPrivateWriteFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1b5f8c, 0x32828 bytes
    //
    _m23(sdk::unknown_ptr) clear_private_write_file;
    
    // [CcCoalescingState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x3422f9, 0x32828 bytes
    //
    _m24(sdk::unknown_ptr) coalescing_state;
    
    // [CcCompleteAsyncLazywriteWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x52890c, 0x1fd000 bytes
    //
    _m25(sdk::unknown_ptr) complete_async_lazywrite_worker;
    
    // [CcCompleteAsyncLazywriteWorkerThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x528ab0, 0x1fd000 bytes
    //
    _m26(sdk::unknown_ptr) complete_async_lazywrite_worker_thread;
    
    // [CcCompleteAsyncWriteBehind]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x528bfc, 0x1fd000 bytes
    //
    _m27(sdk::unknown_ptr) complete_async_write_behind;
    
    // [CcConsecutiveWorklessLazyScanCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x324158, 0x32828 bytes
    //
    _m28(sdk::unknown_ptr) consecutive_workless_lazy_scan_count;
    
    // [CcCreatePrivateVolumeCacheMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x35beb0, 0x1fd000 bytes
    //
    _m29(sdk::unknown_ptr) create_private_volume_cache_map;
    
    // [CcDbgCoalescingCmdFlushReceived]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x343014, 0x32828 bytes
    //
    _m30(sdk::unknown_ptr) dbg_coalescing_cmd_flush_received;
    
    // [CcDbgCoalescingCmdOffReceived]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x343018, 0x32828 bytes
    //
    _m31(sdk::unknown_ptr) dbg_coalescing_cmd_off_received;
    
    // [CcDbgCoalescingCmdOnReceived]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x34301c, 0x32828 bytes
    //
    _m32(sdk::unknown_ptr) dbg_coalescing_cmd_on_received;
    
    // [CcDbgCoalescingFlushDueToMPW]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x343010, 0x32828 bytes
    //
    _m33(sdk::unknown_ptr) dbg_coalescing_flush_due_to_mpw;
    
    // [CcDecrementPrivateVolumeUseCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x286470, 0x1fd000 bytes
    //
    _m34(sdk::unknown_ptr) decrement_private_volume_use_count;
    
    // [CcDecrementVolumeUseCountWithDelete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2887bc, 0x1fd000 bytes
    //
    _m35(sdk::unknown_ptr) decrement_volume_use_count_with_delete;
    
    // [CcDeductDirtyPagesInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x331e34, 0x1fd000 bytes
    //
    _m36(sdk::unknown_ptr) deduct_dirty_pages_internal;
    
    // [CcDeferredWriteSpinLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe CACHEALI:0x3be240, 0x32828 bytes
    //
    _m37(sdk::unknown_ptr) deferred_write_spin_lock;
    
    // [CcDeferredWrites]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x324170, 0x32828 bytes
    //
    _m38(sdk::unknown_ptr) deferred_writes;
    
    // [CcDeleteNumaNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3a2ab0, 0x1fd000 bytes
    //
    _m39(sdk::unknown_ptr) delete_numa_node;
    
    // [CcDeletePrivateVolumeCacheMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3a2784, 0x1fd000 bytes
    //
    _m40(sdk::unknown_ptr) delete_private_volume_cache_map;
    
    // [CcDirtySharedCacheMapList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x323ea0, 0x32828 bytes
    //
    _m41(sdk::unknown_ptr) dirty_shared_cache_map_list;
    
    // [CcDirtySharedCacheMapWithLogHandleList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x323e90, 0x32828 bytes
    //
    _m42(sdk::unknown_ptr) dirty_shared_cache_map_with_log_handle_list;
    
    // [CcEnableAsyncLazywrite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xd17635, 0x1fd000 bytes
    //
    _m43(sdk::unknown_ptr) enable_async_lazywrite;
    
    // [CcEnableAsyncLazywriteMulti]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xd17634, 0x1fd000 bytes
    //
    _m44(sdk::unknown_ptr) enable_async_lazywrite_multi;
    
    // [CcEnableAsyncLazywriteMultiOverride]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc0cb54, 0x1fd000 bytes
    //
    _m45(sdk::unknown_ptr) enable_async_lazywrite_multi_override;
    
    // [CcEnableAsyncLazywriteOverride]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc0cb58, 0x1fd000 bytes
    //
    _m46(sdk::unknown_ptr) enable_async_lazywrite_override;
    
    // [CcEnablePerVolumeLazyWriter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc6a6d4, 0x1fd000 bytes
    //
    _m47(sdk::unknown_ptr) enable_per_volume_lazy_writer;
    
    // [CcEnablePerVolumeLazyWriterOverride]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc0cb5c, 0x1fd000 bytes
    //
    _m48(sdk::unknown_ptr) enable_per_volume_lazy_writer_override;
    
    // [CcEtwLoggingInitialized]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc6a6d5, 0x1fd000 bytes
    //
    _m49(sdk::unknown_ptr) etw_logging_initialized;
    
    // [CcEvt_CacheGlobalPeriodic]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0xfa80, 0x1fd000 bytes
    //
    _m50(sdk::unknown_ptr) evt_cache_global_periodic;
    
    // [CcEvt_CacheVolumePeriodic]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0xfa50, 0x1fd000 bytes
    //
    _m51(sdk::unknown_ptr) evt_cache_volume_periodic;
    
    // [CcEvt_CacheVolumeReadLatencies]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0xfa70, 0x1fd000 bytes
    //
    _m52(sdk::unknown_ptr) evt_cache_volume_read_latencies;
    
    // [CcEvt_CacheVolumeWriteLatencies]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0xfa60, 0x1fd000 bytes
    //
    _m53(sdk::unknown_ptr) evt_cache_volume_write_latencies;
    
    // [CcEvt_VolumeCacheMap_Init]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x14d20, 0x1fd000 bytes
    //
    _m54(sdk::unknown_ptr) evt_volume_cache_map_init;
    
    // [CcExecutingHighPriorityWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x32a384, 0x32828 bytes
    //
    _m55(sdk::unknown_ptr) executing_high_priority_work_item;
    
    // [CcExecutingWriteBehindWorkItems]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x32a380, 0x32828 bytes
    //
    _m56(sdk::unknown_ptr) executing_write_behind_work_items;
    
    // [CcExpressWorkQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x323f70, 0x32828 bytes
    //
    _m57(sdk::unknown_ptr) express_work_queue;
    
    // [CcExtraWBThreadsActiveBeforeThrottle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x3242a0, 0x32828 bytes
    //
    _m58(sdk::unknown_ptr) extra_wb_threads_active_before_throttle;
    
    // [CcFastTeardownWorkQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x323f60, 0x32828 bytes
    //
    _m59(sdk::unknown_ptr) fast_teardown_work_queue;
    
    // [CcFindPrivateVolumeCacheMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x35c054, 0x1fd000 bytes
    //
    _m60(sdk::unknown_ptr) find_private_volume_cache_map;
    
    // [CcFlushCacheAcquireRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x22fc44, 0x1fd000 bytes
    //
    _m61(sdk::unknown_ptr) flush_cache_acquire_range;
    
    // [CcFlushCacheOneRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2311e0, 0x1fd000 bytes
    //
    _m62(sdk::unknown_ptr) flush_cache_one_range;
    
    // [CcFlushCachePostProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2308dc, 0x1fd000 bytes
    //
    _m63(sdk::unknown_ptr) flush_cache_post_process;
    
    // [CcFlushCachePostProcessOneRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x231580, 0x1fd000 bytes
    //
    _m64(sdk::unknown_ptr) flush_cache_post_process_one_range;
    
    // [CcFlushCachePreProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x230a20, 0x1fd000 bytes
    //
    _m65(sdk::unknown_ptr) flush_cache_pre_process;
    
    // [CcFlushForImageSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc5f680, 0x1fd000 bytes
    //
    _m66(sdk::unknown_ptr) flush_for_image_section;
    
    // [CcForEachNumaNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x376ec8, 0x1fd000 bytes
    //
    _m67(sdk::unknown_ptr) for_each_numa_node;
    
    // [CcForEachPrivateVolumeCacheMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x367588, 0x1fd000 bytes
    //
    _m68(sdk::unknown_ptr) for_each_private_volume_cache_map;
    
    // [CcForcedDisableLazywriteScan]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x324160, 0x32828 bytes
    //
    _m69(sdk::unknown_ptr) forced_disable_lazywrite_scan;
    
    // [CcGetActiveWorkerCountInPartition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x376e9c, 0x1fd000 bytes
    //
    _m70(sdk::unknown_ptr) get_active_worker_count_in_partition;
    
    // [CcGetActiveWorkerCountPerNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x391390, 0x1fd000 bytes
    //
    _m71(sdk::unknown_ptr) get_active_worker_count_per_node;
    
    // [CcGetCurrentNumaNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x36e7a8, 0x1fd000 bytes
    //
    _m72(sdk::unknown_ptr) get_current_numa_node;
    
    // [CcGetDeviceGuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x814914, 0x1fd000 bytes
    //
    _m73(sdk::unknown_ptr) get_device_guid;
    
    // [CcGetDeviceGuidAsync]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3e1090, 0x1fd000 bytes
    //
    _m74(sdk::unknown_ptr) get_device_guid_async;
    
    // [CcGetNodeForLazyWrite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x286e58, 0x1fd000 bytes
    //
    _m75(sdk::unknown_ptr) get_node_for_lazy_write;
    
    // [CcGetNodeForReadAhead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2850c8, 0x1fd000 bytes
    //
    _m76(sdk::unknown_ptr) get_node_for_read_ahead;
    
    // [CcGetPrivateVolumeCacheMapFromFileObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x32eac0, 0x1fd000 bytes
    //
    _m77(sdk::unknown_ptr) get_private_volume_cache_map_from_file_object;
    
    // [CcGlobalDirtyPageStatistics]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x323e40, 0x32828 bytes
    //
    _m78(sdk::unknown_ptr) global_dirty_page_statistics;
    
    // [CcGlobalDirtyPageThresholds]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x323fa0, 0x32828 bytes
    //
    _m79(sdk::unknown_ptr) global_dirty_page_thresholds;
    
    // [CcHasGlobalTelemetryChanged]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3643c8, 0x1fd000 bytes
    //
    _m80(sdk::unknown_ptr) has_global_telemetry_changed;
    
    // [CcHasVolumeCumulativeTelemetryChanged]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x527e18, 0x1fd000 bytes
    //
    _m81(sdk::unknown_ptr) has_volume_cumulative_telemetry_changed;
    
    // [CcIdleAsyncReadWorkerThreadList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x327010, 0x32828 bytes
    //
    _m82(sdk::unknown_ptr) idle_async_read_worker_thread_list;
    
    // [CcIdleExtraWriteBehindThreadList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x3241b0, 0x32828 bytes
    //
    _m83(sdk::unknown_ptr) idle_extra_write_behind_thread_list;
    
    // [CcIdleWorkerThreadList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x323f50, 0x32828 bytes
    //
    _m84(sdk::unknown_ptr) idle_worker_thread_list;
    
    // [CcInitPerVolumeParameters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3e9064, 0x1fd000 bytes
    //
    _m85(sdk::unknown_ptr) init_per_volume_parameters;
    
    // [CcInitializeAsyncLazywriteForNodeHelper]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5275c0, 0x1fd000 bytes
    //
    _m86(sdk::unknown_ptr) initialize_async_lazywrite_for_node_helper;
    
    // [CcInitializeAsyncReadForNodeHelper]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x39fda0, 0x1fd000 bytes
    //
    _m87(sdk::unknown_ptr) initialize_async_read_for_node_helper;
    
    // [CcInitializeCacheMapEx2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x36a300, 0x1fd000 bytes
    //
    _m88(sdk::unknown_ptr) initialize_cache_map_ex2;
    
    // [CcInitializeCacheMapInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x293890, 0x1fd000 bytes
    //
    _m89(sdk::unknown_ptr) initialize_cache_map_internal;
    
    // [CcInitializeNumaNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x527f8c, 0x1fd000 bytes
    //
    _m90(sdk::unknown_ptr) initialize_numa_node;
    
    // [CcInitializeNumaNodeForVolume]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3a1ac4, 0x1fd000 bytes
    //
    _m91(sdk::unknown_ptr) initialize_numa_node_for_volume;
    
    // [CcInitializePrivateVolumeCacheMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3a140c, 0x1fd000 bytes
    //
    _m92(sdk::unknown_ptr) initialize_private_volume_cache_map;
    
    // [CcInitializeQuickLWSThreadItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3a1e08, 0x1fd000 bytes
    //
    _m93(sdk::unknown_ptr) initialize_quick_lws_thread_item;
    
    // [CcInitializeTelemetry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb5f19c, 0x1fd000 bytes
    //
    _m94(sdk::unknown_ptr) initialize_telemetry;
    
    // [CcInitializeVacbs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe INIT:0x7a011c, 0x32828 bytes
    //
    _m95(sdk::unknown_ptr) initialize_vacbs;
    
    // [CcInsertPrivateVolumeCacheMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3a3b48, 0x1fd000 bytes
    //
    _m96(sdk::unknown_ptr) insert_private_volume_cache_map;
    
    // [CcIsCacheMapACursorInPrivateVCM]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x286e0c, 0x1fd000 bytes
    //
    _m97(sdk::unknown_ptr) is_cache_map_a_cursor_in_private_vcm;
    
    // [CcIsDirtyCachemapListEmptyForVolume]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x37a44c, 0x1fd000 bytes
    //
    _m98(sdk::unknown_ptr) is_dirty_cachemap_list_empty_for_volume;
    
    // [CcIsLazyWriteScanQueuedInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x373488, 0x1fd000 bytes
    //
    _m99(sdk::unknown_ptr) is_lazy_write_scan_queued_internal;
    
    // [CcIsWriteBehindThreadpoolAtLowPriority]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x287a88, 0x1fd000 bytes
    //
    _n00(sdk::unknown_ptr) is_write_behind_threadpool_at_low_priority;
    
    // [CcLatencyBuckets]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x16320, 0x1fd000 bytes
    //
    _n01(sdk::unknown_ptr) latency_buckets;
    
    // [CcLazyWriteScanVolume]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x286490, 0x1fd000 bytes
    //
    _n02(sdk::unknown_ptr) lazy_write_scan_volume;
    
    // [CcLazyWriterCursor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x323ec0, 0x32828 bytes
    //
    _n03(sdk::unknown_ptr) lazy_writer_cursor;
    
    // [CcLowMemoryEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x3240c0, 0x32828 bytes
    //
    _n04(sdk::unknown_ptr) low_memory_event;
    
    // [CcLowPriOldCpuPriority]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x323fe8, 0x32828 bytes
    //
    _n05(sdk::unknown_ptr) low_pri_old_cpu_priority;
    
    // [CcLowPriOldIoPriority]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x323fec, 0x32828 bytes
    //
    _n06(sdk::unknown_ptr) low_pri_old_io_priority;
    
    // [CcLowPriSharedCacheMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x323fe0, 0x32828 bytes
    //
    _n07(sdk::unknown_ptr) low_pri_shared_cache_map;
    
    // [CcLowPriWorkerThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x323fd8, 0x32828 bytes
    //
    _n08(sdk::unknown_ptr) low_pri_worker_thread;
    
    // [CcLowPriorityWorkerThreadLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x323ff0, 0x32828 bytes
    //
    _n09(sdk::unknown_ptr) low_priority_worker_thread_lock;
    
    // [CcMaxAsyncLazywriteCompletionWorkers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc5f674, 0x1fd000 bytes
    //
    _n10(sdk::unknown_ptr) max_async_lazywrite_completion_workers;
    
    // [CcMaxAsyncLazywriteWorkers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc5f66c, 0x1fd000 bytes
    //
    _n11(sdk::unknown_ptr) max_async_lazywrite_workers;
    
    // [CcMaxAsyncReadItemsPerThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x2f9b40, 0x32828 bytes
    //
    _n12(sdk::unknown_ptr) max_async_read_items_per_thread;
    
    // [CcMaxExtraWriteBehindThreads]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x326fd8, 0x32828 bytes
    //
    _n13(sdk::unknown_ptr) max_extra_write_behind_threads;
    
    // [CcMaxNumberOfWriteBehindThreads]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x2f9b00, 0x32828 bytes
    //
    _n14(sdk::unknown_ptr) max_number_of_write_behind_threads;
    
    // [CcNewAsyncReadRequestEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x326ff0, 0x32828 bytes
    //
    _n15(sdk::unknown_ptr) new_async_read_request_event;
    
    // [CcNextVolumeId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xcf77b8, 0x1fd000 bytes
    //
    _n16(sdk::unknown_ptr) next_volume_id;
    
    // [CcNotifyExternalCachesInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x399f5c, 0x1fd000 bytes
    //
    _n17(sdk::unknown_ptr) notify_external_caches_internal;
    
    // [CcNotifyWriteBehindAllVolumesHelper]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x524000, 0x1fd000 bytes
    //
    _n18(sdk::unknown_ptr) notify_write_behind_all_volumes_helper;
    
    // [CcNotifyWriteBehindVolume]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3a264c, 0x1fd000 bytes
    //
    _n19(sdk::unknown_ptr) notify_write_behind_volume;
    
    // [CcNumberActiveAsyncReadWorkerThreads]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x326fe8, 0x32828 bytes
    //
    _n20(sdk::unknown_ptr) number_active_async_read_worker_threads;
    
    // [CcNumberActiveCompleteAsyncReadWorkItems]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x326fe0, 0x32828 bytes
    //
    _n21(sdk::unknown_ptr) number_active_complete_async_read_work_items;
    
    // [CcNumberActiveWorkerThreads]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x3246c0, 0x32828 bytes
    //
    _n22(sdk::unknown_ptr) number_active_worker_threads;
    
    // [CcNumberNumaNodes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc09980, 0x1fd000 bytes
    //
    _n23(sdk::unknown_ptr) number_numa_nodes;
    
    // [CcNumberOfFreeHighPriorityVacbs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x323dbc, 0x32828 bytes
    //
    _n24(sdk::unknown_ptr) number_of_free_high_priority_vacbs;
    
    // [CcNumberWorkerThreads]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x326fdc, 0x32828 bytes
    //
    _n25(sdk::unknown_ptr) number_worker_threads;
    
    // [CcPagesSkippedDueToHotSpot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x3242c0, 0x32828 bytes
    //
    _n26(sdk::unknown_ptr) pages_skipped_due_to_hot_spot;
    
    // [CcPagesYetToWrite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x323e30, 0x32828 bytes
    //
    _n27(sdk::unknown_ptr) pages_yet_to_write;
    
    // [CcPartitionTelemetryCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x7b6a10, 0x1fd000 bytes
    //
    _n28(sdk::unknown_ptr) partition_telemetry_callback;
    
    // [CcPeriodicEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x324100, 0x32828 bytes
    //
    _n29(sdk::unknown_ptr) periodic_event;
    
    // [CcPostDeferredWritesOnVolumeHelper]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x526140, 0x1fd000 bytes
    //
    _n30(sdk::unknown_ptr) post_deferred_writes_on_volume_helper;
    
    // [CcPostPVCMForDeleteToPartition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3a6200, 0x1fd000 bytes
    //
    _n31(sdk::unknown_ptr) post_pvcm_for_delete_to_partition;
    
    // [CcPostTickWorkItemCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x33ee48, 0x32828 bytes
    //
    _n32(sdk::unknown_ptr) post_tick_work_item_count;
    
    // [CcPostTickWorkQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x323f90, 0x32828 bytes
    //
    _n33(sdk::unknown_ptr) post_tick_work_queue;
    
    // [CcPostVolumeTelemetry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x364610, 0x1fd000 bytes
    //
    _n34(sdk::unknown_ptr) post_volume_telemetry;
    
    // [CcPostWorkQueueAsyncLazywrite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5277c4, 0x1fd000 bytes
    //
    _n35(sdk::unknown_ptr) post_work_queue_async_lazywrite;
    
    // [CcPostWorkQueueSpecial]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5242b4, 0x1fd000 bytes
    //
    _n36(sdk::unknown_ptr) post_work_queue_special;
    
    // [CcPowerEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x3240e0, 0x32828 bytes
    //
    _n37(sdk::unknown_ptr) power_event;
    
    // [CcPrevExtraWBThreadCheckTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x3242a8, 0x32828 bytes
    //
    _n38(sdk::unknown_ptr) prev_extra_wb_thread_check_time;
    
    // [CcPrevRegularQueueItemRunTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x324298, 0x32828 bytes
    //
    _n39(sdk::unknown_ptr) prev_regular_queue_item_run_time;
    
    // [CcPrivateVolumeCacheMapTelemetryCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x7d1630, 0x1fd000 bytes
    //
    _n40(sdk::unknown_ptr) private_volume_cache_map_telemetry_callback;
    
    // [CcProviderRegistrationComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc643f8, 0x1fd000 bytes
    //
    _n41(sdk::unknown_ptr) provider_registration_complete;
    
    // [CcProviderRegistrationInProgress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xcf77bc, 0x1fd000 bytes
    //
    _n42(sdk::unknown_ptr) provider_registration_in_progress;
    
    // [CcQueueAsyncGetDeviceGuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3e1f9c, 0x1fd000 bytes
    //
    _n43(sdk::unknown_ptr) queue_async_get_device_guid;
    
    // [CcQueueAsyncLazywriteCompletion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x528ea8, 0x1fd000 bytes
    //
    _n44(sdk::unknown_ptr) queue_async_lazywrite_completion;
    
    // [CcQueueLazyWriteScanThreadForVolume]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3a0850, 0x1fd000 bytes
    //
    _n45(sdk::unknown_ptr) queue_lazy_write_scan_thread_for_volume;
    
    // [CcQueueThrottle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x3242c8, 0x32828 bytes
    //
    _n46(sdk::unknown_ptr) queue_throttle;
    
    // [CcQuickLazyWriteScanForVolume]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x526160, 0x1fd000 bytes
    //
    _n47(sdk::unknown_ptr) quick_lazy_write_scan_for_volume;
    
    // [CcReaderThreadsStats]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x326ff8, 0x32828 bytes
    //
    _n48(sdk::unknown_ptr) reader_threads_stats;
    
    // [CcReapPrivateVolumeCachemap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3a2544, 0x1fd000 bytes
    //
    _n49(sdk::unknown_ptr) reap_private_volume_cachemap;
    
    // [CcReapPrivateVolumeCachemapWorkerThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3a2430, 0x1fd000 bytes
    //
    _n50(sdk::unknown_ptr) reap_private_volume_cachemap_worker_thread;
    
    // [CcRegularWorkQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x323f80, 0x32828 bytes
    //
    _n51(sdk::unknown_ptr) regular_work_queue;
    
    // [CcRemoveExtraThreadPending]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x3422fa, 0x32828 bytes
    //
    _n52(sdk::unknown_ptr) remove_extra_thread_pending;
    
    // [CcRepostToSynchronousLazywriter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x527a78, 0x1fd000 bytes
    //
    _n53(sdk::unknown_ptr) repost_to_synchronous_lazywriter;
    
    // [CcRescheduleLazyWriteScanOnVolume]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x36dc54, 0x1fd000 bytes
    //
    _n54(sdk::unknown_ptr) reschedule_lazy_write_scan_on_volume;
    
    // [CcResetGlobalTelemetry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x7b6a5c, 0x1fd000 bytes
    //
    _n55(sdk::unknown_ptr) reset_global_telemetry;
    
    // [CcScheduleLazyWriteScanVolume]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x288314, 0x1fd000 bytes
    //
    _n56(sdk::unknown_ptr) schedule_lazy_write_scan_volume;
    
    // [CcScheduleReadAheadNuma]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x28b7f4, 0x1fd000 bytes
    //
    _n57(sdk::unknown_ptr) schedule_read_ahead_numa;
    
    // [CcSetLazyWriteScanQueuedInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x370b38, 0x1fd000 bytes
    //
    _n58(sdk::unknown_ptr) set_lazy_write_scan_queued_internal;
    
    // [CcSetPrivateWriteFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1b63c0, 0x32828 bytes
    //
    _n59(sdk::unknown_ptr) set_private_write_file;
    
    // [CcSetTelemetryPeriodicTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x7eb9b4, 0x1fd000 bytes
    //
    _n60(sdk::unknown_ptr) set_telemetry_periodic_timer;
    
    // [CcSetVacbIntoList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1b696c, 0x32828 bytes
    //
    _n61(sdk::unknown_ptr) set_vacb_into_list;
    
    // [CcShouldIssueVDLUpdate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x287218, 0x1fd000 bytes
    //
    _n62(sdk::unknown_ptr) should_issue_vdl_update;
    
    // [CcShouldWorkOnThisQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x284680, 0x1fd000 bytes
    //
    _n63(sdk::unknown_ptr) should_work_on_this_queue;
    
    // [CcTelemetryBucketizeLatency]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x6924d0, 0x1fd000 bytes
    //
    _n64(sdk::unknown_ptr) telemetry_bucketize_latency;
    
    // [CcTelemetryGlobalData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc5f420, 0x1fd000 bytes
    //
    _n65(sdk::unknown_ptr) telemetry_global_data;
    
    // [CcTelemetryPeriodicTimerCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x7b6900, 0x1fd000 bytes
    //
    _n66(sdk::unknown_ptr) telemetry_periodic_timer_callback;
    
    // [CcTelemetryPeriodicTimerDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x383240, 0x1fd000 bytes
    //
    _n67(sdk::unknown_ptr) telemetry_periodic_timer_dpc;
    
    // [CcThreadsActiveBeforeThrottle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x3242a4, 0x32828 bytes
    //
    _n68(sdk::unknown_ptr) threads_active_before_throttle;
    
    // [CcThroughputStats]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x324000, 0x32828 bytes
    //
    _n69(sdk::unknown_ptr) throughput_stats;
    
    // [CcThroughputTrend]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x343020, 0x32828 bytes
    //
    _n70(sdk::unknown_ptr) throughput_trend;
    
    // [CcUnInitializeAsyncReadForNodeHelper]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3a02c0, 0x1fd000 bytes
    //
    _n71(sdk::unknown_ptr) un_initialize_async_read_for_node_helper;
    
    // [CcUninitializeAsyncLazywriteForNodeHelper]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3a6540, 0x1fd000 bytes
    //
    _n72(sdk::unknown_ptr) uninitialize_async_lazywrite_for_node_helper;
    
    // [CcUpdateLazyWriterPerf]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x35f228, 0x1fd000 bytes
    //
    _n73(sdk::unknown_ptr) update_lazy_writer_perf;
    
    // [CcVacbFreeHighPriorityList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x323df0, 0x32828 bytes
    //
    _n74(sdk::unknown_ptr) vacb_free_high_priority_list;
    
    // [CcWaitForCurrentLazyWriterActivityOnNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x39adc0, 0x1fd000 bytes
    //
    _n75(sdk::unknown_ptr) wait_for_current_lazy_writer_activity_on_node;
    
    // [CcWaitForCurrentLazyWriterActivityOnPartition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x39ad3c, 0x1fd000 bytes
    //
    _n76(sdk::unknown_ptr) wait_for_current_lazy_writer_activity_on_partition;
    
    // [CcWaitingForTeardownEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x324120, 0x32828 bytes
    //
    _n77(sdk::unknown_ptr) waiting_for_teardown_event;
    
    // [CcWorkQueueSpinLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe CACHEALI:0x3be800, 0x32828 bytes
    //
    _n78(sdk::unknown_ptr) work_queue_spin_lock;
    
    // [CcWriteBehindAsync]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x527b90, 0x1fd000 bytes
    //
    _n79(sdk::unknown_ptr) write_behind_async;
    
    // [CcWriteBehindAsyncFlushOneRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x528f34, 0x1fd000 bytes
    //
    _n80(sdk::unknown_ptr) write_behind_async_flush_one_range;
    
    // [CcWriteBehindAsyncPreProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x528fb8, 0x1fd000 bytes
    //
    _n81(sdk::unknown_ptr) write_behind_async_pre_process;
    
    // [CcWriteBehindPostProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x286eb0, 0x1fd000 bytes
    //
    _n82(sdk::unknown_ptr) write_behind_post_process;
    
    // [CcWriteBehindPreProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2876dc, 0x1fd000 bytes
    //
    _n83(sdk::unknown_ptr) write_behind_pre_process;
    
    // [CcWriteBehindReleaseFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2872a0, 0x1fd000 bytes
    //
    _n84(sdk::unknown_ptr) write_behind_release_file;
    
    // [CcGetPartition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x34b5e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x22e770, 0x1fe000 bytes
    //
    _n85(sdk::function<struct cc::partition_t*(struct nt::shared_cache_map_t*)>*) get_partition;
    
    // [CcPerfLogCanWriteFail]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 11
    // ntoskrnl.exe .text:0x1b6990, 0x32828 bytes
    // ntoskrnl.exe .text:0x527e5c, 0x1fd000 bytes
    //
    _n86(sdk::unknown_ptr) perf_log_can_write_fail;
    
    // [CcUninitializeAsyncRead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4e6908, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4e67f8, 0x1fe000 bytes
    //
    _n87(sdk::unknown_ptr) uninitialize_async_read;
    
    // [CcWaitForCurrentLazyWriterActivityInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x37d03c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37e3bc, 0x1fe000 bytes
    //
    _n88(sdk::unknown_ptr) wait_for_current_lazy_writer_activity_internal;
    
    // [CcAddExternalCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b5794, 0x32828 bytes
    // ntoskrnl.exe .text:0x390b64, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x391bb4, 0x1fe000 bytes
    //
    _n89(sdk::unknown_ptr) add_external_cache;
    
    // [CcAdjustCurrentThresholdWrtTop]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x25b9e4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52315c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3157e0, 0x1fe000 bytes
    //
    _n90(sdk::unknown_ptr) adjust_current_threshold_wrt_top;
    
    // [CcAdjustThrottle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc701c, 0x32828 bytes
    // ntoskrnl.exe .text:0x25b81c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x236540, 0x1fe000 bytes
    //
    _n91(sdk::unknown_ptr) adjust_throttle;
    
    // [CcAzure_LargeWriteSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc508c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a6b0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc508c0, 0x1fe000 bytes
    //
    _n92(sdk::unknown_ptr) azure_large_write_size;
    
    // [CcAzure_LazyWriterPercentageOfNumProcs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xcf4c04, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17638, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4c04, 0x1fe000 bytes
    //
    _n93(sdk::unknown_ptr) azure_lazy_writer_percentage_of_num_procs;
    
    // [CcAzure_SoftThrottleDelayInMs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xcf4c08, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17670, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4c08, 0x1fe000 bytes
    //
    _n94(sdk::unknown_ptr) azure_soft_throttle_delay_in_ms;
    
    // [CcAzure_SoftThrottleLargeWriteAtPct]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xcf48bc, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17364, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf48bc, 0x1fe000 bytes
    //
    _n95(sdk::unknown_ptr) azure_soft_throttle_large_write_at_pct;
    
    // [CcAzure_TopBottomDPTEqual]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xcf48c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1763c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf48c0, 0x1fe000 bytes
    //
    _n96(sdk::unknown_ptr) azure_top_bottom_dpt_equal;
    
    // [CcCachemapUninitWorkerThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x351320, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x285bd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2344b0, 0x1fe000 bytes
    //
    _n97(sdk::unknown_ptr) cachemap_uninit_worker_thread;
    
    // [CcCanIWriteStreamEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x34b2b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x330000, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x22e440, 0x1fe000 bytes
    //
    _n98(sdk::unknown_ptr) can_i_write_stream_ex;
    
    // [CcChargeDirtyPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd588, 0x32828 bytes
    // ntoskrnl.exe .text:0x333200, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x27ba20, 0x1fe000 bytes
    //
    _n99(sdk::unknown_ptr) charge_dirty_pages;
    
    // [CcCoalescingCallBackHelper]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4e3940, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x522c60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e3830, 0x1fe000 bytes
    //
    _o00(sdk::unknown_ptr) coalescing_call_back_helper;
    
    // [CcCreatePartition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3bca18, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ac650, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3bd758, 0x1fe000 bytes
    //
    _o01(sdk::unknown_ptr) create_partition;
    
    // [CcCrossPartitionDrainSectionDeletion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4e3aec, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x522e64, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e39dc, 0x1fe000 bytes
    //
    _o02(sdk::unknown_ptr) cross_partition_drain_section_deletion;
    
    // [CcDeallocateVacbLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x260b5c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x305d4c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ef350, 0x1fe000 bytes
    //
    _o03(sdk::unknown_ptr) deallocate_vacb_level;
    
    // [CcDeletePartition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4e5f00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5262b4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e5df0, 0x1fe000 bytes
    //
    _o04(sdk::unknown_ptr) delete_partition;
    
    // [CcDereferencePartition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x34e63c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2882a4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2317cc, 0x1fe000 bytes
    //
    _o05(sdk::function<uint8_t(struct cc::partition_t*)>*) dereference_partition;
    
    // [CcDereferenceSharedCacheMapFileObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc0c4, 0x32828 bytes
    // ntoskrnl.exe .text:0x34f478, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x232608, 0x1fe000 bytes
    //
    _o06(sdk::function<void(struct nt::shared_cache_map_t*, struct nt::file_object_t*)>*) dereference_shared_cache_map_file_object;
    
    // [CcErrorCallbackRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4e4520, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x524d50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e4410, 0x1fe000 bytes
    //
    _o07(sdk::unknown_ptr) error_callback_routine;
    
    // [CcExitPartition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4e63d4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x526a3c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e62c4, 0x1fe000 bytes
    //
    _o08(sdk::unknown_ptr) exit_partition;
    
    // [CcFindBitmapRangeToDirty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc3cfc, 0x32828 bytes
    // ntoskrnl.exe .text:0x334a0c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x27d22c, 0x1fe000 bytes
    //
    _o09(sdk::unknown_ptr) find_bitmap_range_to_dirty;
    
    // [CcForEachPartition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x24d0b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x364434, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x202d30, 0x1fe000 bytes
    //
    _o10(sdk::unknown_ptr) for_each_partition;
    
    // [CcForceWriteThrough]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x26b72c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39bde0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31cd7c, 0x1fe000 bytes
    //
    _o11(sdk::unknown_ptr) force_write_through;
    
    // [CcFreeWorkQueueEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x34e5cc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2881f4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x23175c, 0x1fe000 bytes
    //
    _o12(sdk::unknown_ptr) free_work_queue_entry;
    
    // [CcGetDirtyPagesHelper]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x34d010, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2d8c60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2301a0, 0x1fe000 bytes
    //
    _o13(sdk::unknown_ptr) get_dirty_pages_helper;
    
    // [CcGetNumberOfMappedPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x390660, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39ca00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3916b0, 0x1fe000 bytes
    //
    _o14(sdk::unknown_ptr) get_number_of_mapped_pages;
    
    // [CcGetPartitionFromFileObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x209a04, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e81f8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c1144, 0x1fe000 bytes
    //
    _o15(sdk::unknown_ptr) get_partition_from_file_object;
    
    // [CcGetPartitionWithCreate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x259e20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x367988, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30a890, 0x1fe000 bytes
    //
    _o16(sdk::unknown_ptr) get_partition_with_create;
    
    // [CcGlobalPartitionLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc48678, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f6b0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48658, 0x1fe000 bytes
    //
    _o17(sdk::unknown_ptr) global_partition_lock;
    
    // [CcIncrementWriteBehindPriority]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4e3dac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x204b80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e3c9c, 0x1fe000 bytes
    //
    _o18(sdk::unknown_ptr) increment_write_behind_priority;
    
    // [CcInitializeAsyncRead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x144188, 0x32828 bytes
    // ntoskrnl.exe .text:0x3bd078, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bddb8, 0x1fe000 bytes
    //
    _o19(sdk::unknown_ptr) initialize_async_read;
    
    // [CcInitializePartition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3bca6c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d5870, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3bd7ac, 0x1fe000 bytes
    //
    _o20(sdk::unknown_ptr) initialize_partition;
    
    // [CcInitializePartitionVacbs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3bd430, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d5e10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3be170, 0x1fe000 bytes
    //
    _o21(sdk::unknown_ptr) initialize_partition_vacbs;
    
    // [CcIsCacheManagerCallbackNeeded]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x24fd40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x356390, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2fd510, 0x1fe000 bytes
    //
    _o22(sdk::unknown_ptr) is_cache_manager_callback_needed;
    
    // [CcIsFileObjectDirectMapped]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2614c4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x32eb48, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3118c0, 0x1fe000 bytes
    //
    _o23(sdk::unknown_ptr) is_file_object_direct_mapped;
    
    // [CcIsThereDirtyDataHelper]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4e4de0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d5260, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e4cd0, 0x1fe000 bytes
    //
    _o24(sdk::unknown_ptr) is_there_dirty_data_helper;
    
    // [CcLockSystemCacheBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4e4728, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x524da0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e4618, 0x1fe000 bytes
    //
    _o25(sdk::unknown_ptr) lock_system_cache_buffer;
    
    // [CcMasterLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xcdb4c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf7f80, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcdb4c0, 0x1fe000 bytes
    //
    _o26(sdk::unknown_ptr) master_lock;
    
    // [CcMaxCachemapUninitWorkerThreads]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc48670, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f6a8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48650, 0x1fe000 bytes
    //
    _o27(sdk::unknown_ptr) max_cachemap_uninit_worker_threads;
    
    // [CcMaxLazyWritePagesOverride]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xcf4c0c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17674, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4c0c, 0x1fe000 bytes
    //
    _o28(sdk::unknown_ptr) max_lazy_write_pages_override;
    
    // [CcNotifyExternalCaches]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x132760, 0x32828 bytes
    // ntoskrnl.exe .text:0x38df10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38ef64, 0x1fe000 bytes
    //
    _o29(sdk::unknown_ptr) notify_external_caches;
    
    // [CcNotifyWriteBehindEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x37eca0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x524040, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37f410, 0x1fe000 bytes
    //
    _o30(sdk::unknown_ptr) notify_write_behind_ex;
    
    // [CcNotifyWriteBehindHelper]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x389710, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x524070, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38a230, 0x1fe000 bytes
    //
    _o31(sdk::unknown_ptr) notify_write_behind_helper;
    
    // [CcNotifyWriteBehindInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x261e30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52409c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3123e0, 0x1fe000 bytes
    //
    _o32(sdk::unknown_ptr) notify_write_behind_internal;
    
    // [CcOpenRegistryPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3c7b8c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e5d68, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c8a5c, 0x1fe000 bytes
    //
    _o33(sdk::unknown_ptr) open_registry_path;
    
    // [CcPartitionCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc48680, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f6b8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48660, 0x1fe000 bytes
    //
    _o34(sdk::unknown_ptr) partition_count;
    
    // [CcPostWorkQueueCachemapUninit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3517dc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x288914, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x23496c, 0x1fe000 bytes
    //
    _o35(sdk::unknown_ptr) post_work_queue_cachemap_uninit;
    
    // [CcPostWorkQueueRegular]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x351624, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x288ff4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2347b4, 0x1fe000 bytes
    //
    _o36(sdk::unknown_ptr) post_work_queue_regular;
    
    // [CcQueryRegKeyValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x395ea0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a7398, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x396f00, 0x1fe000 bytes
    //
    _o37(sdk::unknown_ptr) query_reg_key_value;
    
    // [CcRegistryChangeCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x396630, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a8d80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x397650, 0x1fe000 bytes
    //
    _o38(sdk::unknown_ptr) registry_change_callback;
    
    // [CcRegistryWatchInitComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc508b8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a6a8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc508b8, 0x1fe000 bytes
    //
    _o39(sdk::unknown_ptr) registry_watch_init_complete;
    
    // [CcRemoveExternalCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4e4128, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52483c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e4018, 0x1fe000 bytes
    //
    _o40(sdk::unknown_ptr) remove_external_cache;
    
    // [CcSaveNVContext2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3fc09f, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x430aff, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3fd97f, 0x1fe000 bytes
    //
    _o41(sdk::unknown_ptr) save_nv_context2;
    
    // [CcScanDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcb848, 0x32828 bytes
    // ntoskrnl.exe .text:0x261e10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3123c0, 0x1fe000 bytes
    //
    _o42(sdk::unknown_ptr) scan_dpc;
    
    // [CcSectionDeletionSequencePhase1]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc4c2f0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc643d8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4c2d0, 0x1fe000 bytes
    //
    _o43(sdk::unknown_ptr) section_deletion_sequence_phase1;
    
    // [CcSectionDeletionSequencePhase2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc4c2e0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc643c8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4c2c0, 0x1fe000 bytes
    //
    _o44(sdk::unknown_ptr) section_deletion_sequence_phase2;
    
    // [CcSectionDeletionSequencePhase3]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xcf5010, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17b08, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf5010, 0x1fe000 bytes
    //
    _o45(sdk::unknown_ptr) section_deletion_sequence_phase3;
    
    // [CcSetLazyWriteScanQueued]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8738, 0x32828 bytes
    // ntoskrnl.exe .text:0x2643c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x235f50, 0x1fe000 bytes
    //
    _o46(sdk::unknown_ptr) set_lazy_write_scan_queued;
    
    // [CcSetupWatchForRegistryChanges]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3c7a18, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e5c04, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c88e8, 0x1fe000 bytes
    //
    _o47(sdk::unknown_ptr) setup_watch_for_registry_changes;
    
    // [CcSoftThrottleDelay]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc508c8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a6b8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc508c8, 0x1fe000 bytes
    //
    _o48(sdk::unknown_ptr) soft_throttle_delay;
    
    // [CcSystemPartitionDirtyPageStatistics]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc508d8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a6c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc508d8, 0x1fe000 bytes
    //
    _o49(sdk::unknown_ptr) system_partition_dirty_page_statistics;
    
    // [CcSystemPartitionDirtyPageThresholds]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc508d0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a6c8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc508d0, 0x1fe000 bytes
    //
    _o50(sdk::unknown_ptr) system_partition_dirty_page_thresholds;
    
    // [CcUninitializePartitionVacbs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4e66a4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x526d50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e6594, 0x1fe000 bytes
    //
    _o51(sdk::unknown_ptr) uninitialize_partition_vacbs;
    
    // [CcUninitializeVolumeCacheMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa6ec, 0x32828 bytes
    // ntoskrnl.exe .text:0x35095c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x233aec, 0x1fe000 bytes
    //
    _o52(sdk::unknown_ptr) uninitialize_volume_cache_map;
    
    // [CcUnmapAndPurge]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x350830, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x288508, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2339c0, 0x1fe000 bytes
    //
    _o53(sdk::unknown_ptr) unmap_and_purge;
    
    // [CcUnmapBehindLength]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc0f2bc, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc09978, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc0f30c, 0x1fe000 bytes
    //
    _o54(sdk::unknown_ptr) unmap_behind_length;
    
    // [CcUnmapInactiveViewsInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4e57c4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x525a20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e56b4, 0x1fe000 bytes
    //
    _o55(sdk::unknown_ptr) unmap_inactive_views_internal;
    
    // [CcUpdateDynamicRegistrySettings]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x395b90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a6e50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x396bf0, 0x1fe000 bytes
    //
    _o56(sdk::unknown_ptr) update_dynamic_registry_settings;
    
    // [CcWaitForCurrentLazyWriterActivityHelper]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x37d010, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39ad10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37e390, 0x1fe000 bytes
    //
    _o57(sdk::unknown_ptr) wait_for_current_lazy_writer_activity_helper;
    
    // [CcAcquireBcbLockAndVacbLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf570, 0x32828 bytes
    // ntoskrnl.exe .text:0x3488e8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37f294, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x22ba78, 0x1fe000 bytes
    //
    _o58(sdk::unknown_ptr) acquire_bcb_lock_and_vacb_lock;
    
    // [CcAcquireByteRangeForWrite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xad20, 0x32828 bytes
    // ntoskrnl.exe .text:0x34b7d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x22fd80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x22e960, 0x1fe000 bytes
    //
    _o59(sdk::unknown_ptr) acquire_byte_range_for_write;
    
    // [CcAddDirtyPagesToExternalCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x132928, 0x32828 bytes
    // ntoskrnl.exe .text:0x38e060, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x399570, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38f0b0, 0x1fe000 bytes
    //
    _o60(sdk::unknown_ptr) add_dirty_pages_to_external_cache;
    
    // [CcAdjustBcbDepth]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1652a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fe5c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x433150, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ffea0, 0x1fe000 bytes
    //
    _o61(sdk::unknown_ptr) adjust_bcb_depth;
    
    // [CcAdjustVacbLevelLockCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x9e00, 0x32828 bytes
    // ntoskrnl.exe .text:0x34f3a8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x305af8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x232538, 0x1fe000 bytes
    //
    _o62(sdk::unknown_ptr) adjust_vacb_level_lock_count;
    
    // [CcAdjustWriteBehindThreadPool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf48c, 0x32828 bytes
    // ntoskrnl.exe .text:0x37d668, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x523368, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37e9e8, 0x1fe000 bytes
    //
    _o63(sdk::unknown_ptr) adjust_write_behind_thread_pool;
    
    // [CcAdjustWriteBehindThreadPoolIfNeeded]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd614, 0x32828 bytes
    // ntoskrnl.exe .text:0x333320, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5233e4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x27bb40, 0x1fe000 bytes
    //
    _o64(sdk::function<void(uint8_t)>*) adjust_write_behind_thread_pool_if_needed;
    
    // [CcAggressiveZeroCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323ffc, 0x32828 bytes
    // ntoskrnl.exe .data:0xc486f4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f738, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc486d4, 0x1fe000 bytes
    //
    _o65(sdk::unknown_ptr) aggressive_zero_count;
    
    // [CcAggressiveZeroThreshold]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323ff8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc486f0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f718, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc486d0, 0x1fe000 bytes
    //
    _o66(sdk::unknown_ptr) aggressive_zero_threshold;
    
    // [CcAllocateInitializeBcb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x99f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x34ef7c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x235bdc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x23210c, 0x1fe000 bytes
    //
    _o67(sdk::unknown_ptr) allocate_initialize_bcb;
    
    // [CcAllocateInitializeMbcb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc72e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x25e724, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36ef48, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30ed18, 0x1fe000 bytes
    //
    _o68(sdk::unknown_ptr) allocate_initialize_mbcb;
    
    // [CcAllocateInitializeVacbArray]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x134af0, 0x32828 bytes
    // ntoskrnl.exe .text:0x376c5c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a3a8c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x377fdc, 0x1fe000 bytes
    //
    _o69(sdk::unknown_ptr) allocate_initialize_vacb_array;
    
    // [CcAllocateObcb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5ff22c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7607dc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8108a4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76822c, 0x1fe000 bytes
    //
    _o70(sdk::unknown_ptr) allocate_obcb;
    
    // [CcAllocateVacbLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcb4c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x260a34, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x305bc8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ef0ec, 0x1fe000 bytes
    //
    _o71(sdk::unknown_ptr) allocate_vacb_level;
    
    // [CcAllocateVacbLevels]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcb420, 0x32828 bytes
    // ntoskrnl.exe .text:0x260ab8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x305ca8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ef1d4, 0x1fe000 bytes
    //
    _o72(sdk::unknown_ptr) allocate_vacb_levels;
    
    // [CcAllocateWorkQueueEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa90c, 0x32828 bytes
    // ntoskrnl.exe .text:0x34fbc4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2874f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x232d54, 0x1fe000 bytes
    //
    _o73(sdk::unknown_ptr) allocate_work_queue_entry;
    
    // [CcAmILowPriorityWriter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc1334, 0x32828 bytes
    // ntoskrnl.exe .text:0x34ec78, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x22f50c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x231e08, 0x1fe000 bytes
    //
    _o74(sdk::unknown_ptr) am_i_low_priority_writer;
    
    // [CcApplyLowIoPriorityToThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf218, 0x32828 bytes
    // ntoskrnl.exe .text:0x34f6fc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x287a1c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x23288c, 0x1fe000 bytes
    //
    _o75(sdk::unknown_ptr) apply_low_io_priority_to_thread;
    
    // [CcAreOffsetsRoughlyEqual]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x6ae2c, 0x32828 bytes
    // ntoskrnl.exe .text:0x352e10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x28bd14, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x235cb0, 0x1fe000 bytes
    //
    _o76(sdk::unknown_ptr) are_offsets_roughly_equal;
    
    // [CcAsyncCopyRead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc498c, 0x32828 bytes
    // ntoskrnl.exe .text:0x352f30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x284e10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x235100, 0x1fe000 bytes
    //
    _o77(sdk::function<uint8_t(struct nt::file_object_t*, int64_t*, uint32_t, uint8_t, void*, struct io::status_block_t*, struct nt::kthread_t*, struct cc::async_read_context_t*)>*) async_copy_read;
    
    // [CcAsyncReadPrefetch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc0080, 0x32828 bytes
    // ntoskrnl.exe .text:0x2a9e8c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x319cf8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2be260, 0x1fe000 bytes
    //
    _o78(sdk::unknown_ptr) async_read_prefetch;
    
    // [CcAsyncReadWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x13afb4, 0x32828 bytes
    // ntoskrnl.exe .text:0x3b2170, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39f390, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b2a20, 0x1fe000 bytes
    //
    _o79(sdk::unknown_ptr) async_read_worker;
    
    // [CcAsyncReadWorkerThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b5350, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e6840, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x528260, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e6730, 0x1fe000 bytes
    //
    _o80(sdk::unknown_ptr) async_read_worker_thread;
    
    // [CcBcbProfiler]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x154710, 0x32828 bytes
    // ntoskrnl.exe .text:0x3d62c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3f5c90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3d7390, 0x1fe000 bytes
    //
    _o81(sdk::unknown_ptr) bcb_profiler;
    
    // [CcBcbSpinLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe CACHEALI:0x3be700, 0x32828 bytes
    // ntoskrnl.exe CACHEALI:0xd22740, 0x1fe000 bytes
    // ntoskrnl.exe CACHEALI:0xd48540, 0x1fd000 bytes
    // ntoskrnl.exe CACHEALI:0xd226c0, 0x1fe000 bytes
    //
    _o82(sdk::unknown_ptr) bcb_spin_lock;
    
    // [CcBcbTrimNotificationList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323f40, 0x32828 bytes
    // ntoskrnl.exe .data:0xc486e0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f6d0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc486c0, 0x1fe000 bytes
    //
    _o83(sdk::unknown_ptr) bcb_trim_notification_list;
    
    // [CcBcbTrimNotificationListLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323f00, 0x32828 bytes
    // ntoskrnl.exe .data:0xc486a0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f6e0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48680, 0x1fe000 bytes
    //
    _o84(sdk::unknown_ptr) bcb_trim_notification_list_lock;
    
    // [CcBitmapLookasideList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32a800, 0x32828 bytes
    // ntoskrnl.exe .data:0xcdb440, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf7f00, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcdb440, 0x1fe000 bytes
    //
    _o85(sdk::unknown_ptr) bitmap_lookaside_list;
    
    // [CcBoostLowPriorityWorkerThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4924, 0x32828 bytes
    // ntoskrnl.exe .text:0x26ed1c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3846d8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d0704, 0x1fe000 bytes
    //
    _o86(sdk::unknown_ptr) boost_low_priority_worker_thread;
    
    // [CcBuildUpHighPriorityMappings]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x145ae8, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e51f4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x525450, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e50e4, 0x1fe000 bytes
    //
    _o87(sdk::unknown_ptr) build_up_high_priority_mappings;
    
    // [CcCalculatePagesToWrite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x9d38, 0x32828 bytes
    // ntoskrnl.exe .text:0x351a80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x288a98, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x234c10, 0x1fe000 bytes
    //
    _o88(sdk::unknown_ptr) calculate_pages_to_write;
    
    // [CcCalculateVacbLevelLockCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcb3d4, 0x32828 bytes
    // ntoskrnl.exe .text:0x379538, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37b364, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37a8b8, 0x1fe000 bytes
    //
    _o89(sdk::unknown_ptr) calculate_vacb_level_lock_count;
    
    // [CcCanIWrite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x698a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x34afb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x32f530, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x22e140, 0x1fe000 bytes
    //
    _o90(sdk::function<uint8_t(struct nt::file_object_t*, uint32_t, uint8_t, uint8_t)>*) can_i_write;
    
    // [CcCanReuseVacb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b6548, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e5280, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5254dc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e5170, 0x1fe000 bytes
    //
    _o91(sdk::unknown_ptr) can_reuse_vacb;
    
    // [CcCancelMmWaitForUninitializeCacheMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b5468, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e2d00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x522bc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e2bf0, 0x1fe000 bytes
    //
    _o92(sdk::unknown_ptr) cancel_mm_wait_for_uninitialize_cache_map;
    
    // [CcChangeBackingFileObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b54c4, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e2d68, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x204810, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e2c58, 0x1fe000 bytes
    //
    _o93(sdk::unknown_ptr) change_backing_file_object;
    
    // [CcChangeSharedCacheMapFileLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3241a8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc48660, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f698, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48640, 0x1fe000 bytes
    //
    _o94(sdk::unknown_ptr) change_shared_cache_map_file_lock;
    
    // [CcChargeThreadForReadAhead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x6ca60, 0x32828 bytes
    // ntoskrnl.exe .text:0x25df94, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36ee5c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x235e78, 0x1fe000 bytes
    //
    _o95(sdk::unknown_ptr) charge_thread_for_read_ahead;
    
    // [CcCoalescingCallBack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b5670, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e3910, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x522c30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e3800, 0x1fe000 bytes
    //
    _o96(sdk::unknown_ptr) coalescing_call_back;
    
    // [CcCoalescingFlushEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x324140, 0x32828 bytes
    // ntoskrnl.exe .data:0xc48700, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f720, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc486e0, 0x1fe000 bytes
    //
    _o97(sdk::unknown_ptr) coalescing_flush_event;
    
    // [CcCoalescingRegistration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x341140, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4180, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd0e090, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4180, 0x1fe000 bytes
    //
    _o98(sdk::unknown_ptr) coalescing_registration;
    
    // [CcCoherencyFlushAndPurgeCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x6c10c, 0x32828 bytes
    // ntoskrnl.exe .text:0x2a4ea0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x30ff90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ce170, 0x1fe000 bytes
    //
    _o99(sdk::function<void(struct nt::section_object_pointers_t*, int64_t*, uint32_t, struct io::status_block_t*, uint32_t)>*) coherency_flush_and_purge_cache;
    
    // [CcCollisionDelay]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9ce0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc122b8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0ceb8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc12318, 0x1fe000 bytes
    //
    _p00(sdk::unknown_ptr) collision_delay;
    
    // [CcCompleteAsyncRead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7798c, 0x32828 bytes
    // ntoskrnl.exe .text:0x351c60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3361d4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x234df0, 0x1fe000 bytes
    //
    _p01(sdk::unknown_ptr) complete_async_read;
    
    // [CcCompleteAsyncReadWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x76d24, 0x32828 bytes
    // ntoskrnl.exe .text:0x26aff0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3360b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31c670, 0x1fe000 bytes
    //
    _p02(sdk::unknown_ptr) complete_async_read_worker;
    
    // [CcComputeNextScanTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd03a4, 0x32828 bytes
    // ntoskrnl.exe .text:0x26d514, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38265c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31ee54, 0x1fe000 bytes
    //
    _p03(sdk::unknown_ptr) compute_next_scan_time;
    
    // [CcCopyBytesToUserBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x40ad50, 0x32828 bytes
    // ntoskrnl.exe .text:0x3183d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x237300, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x28a9b0, 0x1fe000 bytes
    //
    _p04(sdk::unknown_ptr) copy_bytes_to_user_buffer;
    
    // [CcCopyRead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a15a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6779f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e96c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6eaf30, 0x1fe000 bytes
    //
    _p05(sdk::function<uint8_t(struct nt::file_object_t*, int64_t*, uint32_t, uint8_t, void*, struct io::status_block_t*)>*) copy_read;
    
    // [CcCopyReadEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1fcf0, 0x32828 bytes
    // ntoskrnl.exe .text:0x315630, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x236e60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x287c10, 0x1fe000 bytes
    //
    _p06(sdk::function<uint8_t(struct nt::file_object_t*, int64_t*, uint32_t, uint8_t, void*, struct io::status_block_t*, struct nt::kthread_t*)>*) copy_read_ex;
    
    // [CcCopyReadExceptionFilter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b5a98, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e4254, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x524a84, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e4144, 0x1fe000 bytes
    //
    _p07(sdk::unknown_ptr) copy_read_exception_filter;
    
    // [CcCopyWrite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b5ac0, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e4290, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3dca80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e4180, 0x1fe000 bytes
    //
    _p08(sdk::function<uint8_t(struct nt::file_object_t*, int64_t*, uint32_t, uint8_t, void*)>*) copy_write;
    
    // [CcCopyWriteEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x41530, 0x32828 bytes
    // ntoskrnl.exe .text:0x332900, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x235f10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x27b120, 0x1fe000 bytes
    //
    _p09(sdk::function<uint8_t(struct nt::file_object_t*, int64_t*, uint32_t, uint8_t, void*, struct nt::kthread_t*)>*) copy_write_ex;
    
    // [CcCopyWriteWontFlush]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x414b0, 0x32828 bytes
    // ntoskrnl.exe .text:0x332850, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x32e7e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x27b070, 0x1fe000 bytes
    //
    _p10(sdk::function<uint8_t(struct nt::file_object_t*, int64_t*, uint32_t)>*) copy_write_wont_flush;
    
    // [CcCreateVacbArray]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4811c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6550d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b2084, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c8c10, 0x1fe000 bytes
    //
    _p11(sdk::unknown_ptr) create_vacb_array;
    
    // [CcDbgAdditionalPagesQueuedCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x324294, 0x32828 bytes
    // ntoskrnl.exe .data:0xc4c2d4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc643bc, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4c2b4, 0x1fe000 bytes
    //
    _p12(sdk::unknown_ptr) dbg_additional_pages_queued_count;
    
    // [CcDbgDisableDAX]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3422f8, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4848, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd172c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4848, 0x1fe000 bytes
    //
    _p13(sdk::unknown_ptr) dbg_disable_dax;
    
    // [CcDbgForcedLogPercentFull]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x343024, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf5008, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17b00, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf5008, 0x1fe000 bytes
    //
    _p14(sdk::unknown_ptr) dbg_forced_log_percent_full;
    
    // [CcDbgFoundAsyncReadThreadListEmpty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x343028, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf5030, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf77c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf5030, 0x1fe000 bytes
    //
    _p15(sdk::unknown_ptr) dbg_found_async_read_thread_list_empty;
    
    // [CcDbgLsnLargerThanHint]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3242b0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc4c2d8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc643c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4c2b8, 0x1fe000 bytes
    //
    _p16(sdk::unknown_ptr) dbg_lsn_larger_than_hint;
    
    // [CcDbgNumberOfAbortedTeardowns]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3241a0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc48740, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f760, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48720, 0x1fe000 bytes
    //
    _p17(sdk::unknown_ptr) dbg_number_of_aborted_teardowns;
    
    // [CcDbgNumberOfCcUnmapInactiveViews]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x343040, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf502c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17b24, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf502c, 0x1fe000 bytes
    //
    _p18(sdk::unknown_ptr) dbg_number_of_cc_unmap_inactive_views;
    
    // [CcDbgNumberOfFailedBitmapAllocations]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x324168, 0x32828 bytes
    // ntoskrnl.exe .data:0xc48720, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f744, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48700, 0x1fe000 bytes
    //
    _p19(sdk::unknown_ptr) dbg_number_of_failed_bitmap_allocations;
    
    // [CcDbgNumberOfFailedHighPriorityMappingsDueToCcResources]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323e04, 0x32828 bytes
    // ntoskrnl.exe .data:0xc48644, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f664, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48624, 0x1fe000 bytes
    //
    _p20(sdk::unknown_ptr) dbg_number_of_failed_high_priority_mappings_due_to_cc_resources;
    
    // [CcDbgNumberOfFailedHighPriorityMappingsDueToMmResources]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323e00, 0x32828 bytes
    // ntoskrnl.exe .data:0xc48640, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f660, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48620, 0x1fe000 bytes
    //
    _p21(sdk::unknown_ptr) dbg_number_of_failed_high_priority_mappings_due_to_mm_resources;
    
    // [CcDbgNumberOfFailedWorkQueueEntryAllocations]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x324164, 0x32828 bytes
    // ntoskrnl.exe .data:0xc4871c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f73c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc486fc, 0x1fe000 bytes
    //
    _p22(sdk::unknown_ptr) dbg_number_of_failed_work_queue_entry_allocations;
    
    // [CcDbgNumberOfNoopedReadAheads]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3242b4, 0x32828 bytes
    // ntoskrnl.exe .data:0xc4c2e8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc643d0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4c2c8, 0x1fe000 bytes
    //
    _p23(sdk::unknown_ptr) dbg_number_of_nooped_read_aheads;
    
    // [CcDbgRandomFailed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x34303c, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf5028, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17b20, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf5028, 0x1fe000 bytes
    //
    _p24(sdk::unknown_ptr) dbg_random_failed;
    
    // [CcDbgSkippedReductions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x324290, 0x32828 bytes
    // ntoskrnl.exe .data:0xc4c2d0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc643b8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4c2b0, 0x1fe000 bytes
    //
    _p25(sdk::unknown_ptr) dbg_skipped_reductions;
    
    // [CcDeallocateBcb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x9ea4, 0x32828 bytes
    // ntoskrnl.exe .text:0x34de70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x331a40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x231000, 0x1fe000 bytes
    //
    _p26(sdk::unknown_ptr) deallocate_bcb;
    
    // [CcDecrementOpenCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf1bc, 0x32828 bytes
    // ntoskrnl.exe .text:0x34af24, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x22f70c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x22e0b4, 0x1fe000 bytes
    //
    _p27(sdk::unknown_ptr) decrement_open_count;
    
    // [CcDeductDirtyPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa078, 0x32828 bytes
    // ntoskrnl.exe .text:0x348bbc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x331dfc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x22bd4c, 0x1fe000 bytes
    //
    _p28(sdk::unknown_ptr) deduct_dirty_pages;
    
    // [CcDeductDirtyPagesFromExternalCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x132884, 0x32828 bytes
    // ntoskrnl.exe .text:0x38dcf0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x399230, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38ed80, 0x1fe000 bytes
    //
    _p29(sdk::unknown_ptr) deduct_dirty_pages_from_external_cache;
    
    // [CcDeferWrite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b5ae0, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e42c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x524ac0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e41b0, 0x1fe000 bytes
    //
    _p30(sdk::function<void(struct nt::file_object_t*, sdk::function<void(void*, void*)>*, void*, void*, uint32_t, uint8_t)>*) defer_write;
    
    // [CcDeleteBcbs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x110c10, 0x32828 bytes
    // ntoskrnl.exe .text:0x2705f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a846c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x321dc0, 0x1fe000 bytes
    //
    _p31(sdk::unknown_ptr) delete_bcbs;
    
    // [CcDeleteMbcb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x9888, 0x32828 bytes
    // ntoskrnl.exe .text:0x258854, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3318f4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x235ce0, 0x1fe000 bytes
    //
    _p32(sdk::unknown_ptr) delete_mbcb;
    
    // [CcDeleteSectionsForPartition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b65a8, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e6104, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5265a8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e5ff4, 0x1fe000 bytes
    //
    _p33(sdk::unknown_ptr) delete_sections_for_partition;
    
    // [CcDeleteSharedCacheMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa440, 0x32828 bytes
    // ntoskrnl.exe .text:0x35059c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x285f5c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x23372c, 0x1fe000 bytes
    //
    _p34(sdk::unknown_ptr) delete_shared_cache_map;
    
    // [CcDereferenceFileOffset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b66bc, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e52c8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x525524, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e51b8, 0x1fe000 bytes
    //
    _p35(sdk::unknown_ptr) dereference_file_offset;
    
    // [CcDereferenceVacbArray]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcf1c, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e5320, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52557c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e5210, 0x1fe000 bytes
    //
    _p36(sdk::unknown_ptr) dereference_vacb_array;
    
    // [CcDetermineReadPattern]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x6ab4c, 0x32828 bytes
    // ntoskrnl.exe .text:0x352d98, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x28bc90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x235c38, 0x1fe000 bytes
    //
    _p37(sdk::unknown_ptr) determine_read_pattern;
    
    // [CcEnableReadAheadInAsyncRead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x343038, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf5018, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17b10, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf5018, 0x1fe000 bytes
    //
    _p38(sdk::unknown_ptr) enable_read_ahead_in_async_read;
    
    // [CcExtendVacbArray]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcaf54, 0x32828 bytes
    // ntoskrnl.exe .text:0x26054c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3010d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2eec04, 0x1fe000 bytes
    //
    _p39(sdk::unknown_ptr) extend_vacb_array;
    
    // [CcExternalCacheList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x324190, 0x32828 bytes
    // ntoskrnl.exe .data:0xc48730, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f750, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48710, 0x1fe000 bytes
    //
    _p40(sdk::unknown_ptr) external_cache_list;
    
    // [CcExternalCacheListLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x324180, 0x32828 bytes
    // ntoskrnl.exe .data:0xc48728, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f748, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48708, 0x1fe000 bytes
    //
    _p41(sdk::unknown_ptr) external_cache_list_lock;
    
    // [CcExtraWBThreadDelay]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x326fd4, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf484c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a6bc, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf484c, 0x1fe000 bytes
    //
    _p42(sdk::unknown_ptr) extra_wb_thread_delay;
    
    // [CcFastCopyRead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5ff1fc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x864a30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x932250, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x862e60, 0x1fe000 bytes
    //
    _p43(sdk::function<void(struct nt::file_object_t*, uint32_t, uint32_t, uint32_t, void*, struct io::status_block_t*)>*) fast_copy_read;
    
    // [CcFastCopyWrite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b5bb4, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e4540, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x524d70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e4430, 0x1fe000 bytes
    //
    _p44(sdk::function<void(struct nt::file_object_t*, uint32_t, uint32_t, void*)>*) fast_copy_write;
    
    // [CcFastMdlReadWait]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323e08, 0x32828 bytes
    // ntoskrnl.exe .data:0xc48648, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f668, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48628, 0x1fe000 bytes
    //
    _p45(sdk::unknown_ptr) fast_mdl_read_wait;
    
    // [CcFetchDataForRead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1ffd0, 0x32828 bytes
    // ntoskrnl.exe .text:0x315940, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x237410, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x287f20, 0x1fe000 bytes
    //
    _p46(sdk::unknown_ptr) fetch_data_for_read;
    
    // [CcFindBcb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x9bd8, 0x32828 bytes
    // ntoskrnl.exe .text:0x34eb64, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x22f590, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x231cf4, 0x1fe000 bytes
    //
    _p47(sdk::unknown_ptr) find_bcb;
    
    // [CcFindBitmapRangeToClean]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa0c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x25844c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36c7f4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30800c, 0x1fe000 bytes
    //
    _p48(sdk::unknown_ptr) find_bitmap_range_to_clean;
    
    // [CcFindNextWorkQueueEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xac7c, 0x32828 bytes
    // ntoskrnl.exe .text:0x351578, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x285e8c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x234708, 0x1fe000 bytes
    //
    _p49(sdk::unknown_ptr) find_next_work_queue_entry;
    
    // [CcFirstDelay]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26e7b8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x17138, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x18d88, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x170a8, 0x1fe000 bytes
    //
    _p50(sdk::unknown_ptr) first_delay;
    
    // [CcFlushCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x6c1dc, 0x32828 bytes
    // ntoskrnl.exe .text:0x2612e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36d080, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3114c0, 0x1fe000 bytes
    //
    _p51(sdk::function<void(struct nt::section_object_pointers_t*, int64_t*, uint32_t, struct io::status_block_t*)>*) flush_cache;
    
    // [CcFlushCachePriv]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xdad0, 0x32828 bytes
    // ntoskrnl.exe .text:0x348f90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x22fa98, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x22c120, 0x1fe000 bytes
    //
    _p52(sdk::unknown_ptr) flush_cache_priv;
    
    // [CcFlushCacheToLsn]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10dc94, 0x32828 bytes
    // ntoskrnl.exe .text:0x26bbe0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39b0b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31d1e0, 0x1fe000 bytes
    //
    _p53(sdk::unknown_ptr) flush_cache_to_lsn;
    
    // [CcFreeUnusedVacbLevels]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcb380, 0x32828 bytes
    // ntoskrnl.exe .text:0x2609d8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x305c4c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ef090, 0x1fe000 bytes
    //
    _p54(sdk::unknown_ptr) free_unused_vacb_levels;
    
    // [CcFreeVacbArray]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5ff384, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x864a74, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x932294, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x862ea4, 0x1fe000 bytes
    //
    _p55(sdk::unknown_ptr) free_vacb_array;
    
    // [CcFreeVirtualAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1ffa0, 0x32828 bytes
    // ntoskrnl.exe .text:0x315900, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x238950, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x287ee0, 0x1fe000 bytes
    //
    _p56(sdk::unknown_ptr) free_virtual_address;
    
    // [CcGetBcbListHeadLargeOffset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xba4a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x312e50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x235da0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x285430, 0x1fe000 bytes
    //
    _p57(sdk::unknown_ptr) get_bcb_list_head_large_offset;
    
    // [CcGetCachedDirtyPageCountForFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b600c, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e4b70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x524fd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e4a60, 0x1fe000 bytes
    //
    _p58(sdk::unknown_ptr) get_cached_dirty_page_count_for_file;
    
    // [CcGetDirtyPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc100, 0x32828 bytes
    // ntoskrnl.exe .text:0x24d070, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3643f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x202cf0, 0x1fe000 bytes
    //
    _p59(sdk::function<int64_t(void*, sdk::function<void(struct nt::file_object_t*, int64_t*, uint32_t, int64_t*, int64_t*, void*, void*)>*, void*, void*)>*) get_dirty_pages;
    
    // [CcGetFileObjectFromBcb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b5710, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e3bc0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x522f40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e3ab0, 0x1fe000 bytes
    //
    _p60(sdk::function<struct nt::file_object_t*(void*)>*) get_file_object_from_bcb;
    
    // [CcGetFileObjectFromSectionPtrs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b5720, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e3be0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x522f60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e3ad0, 0x1fe000 bytes
    //
    _p61(sdk::function<struct nt::file_object_t*(struct nt::section_object_pointers_t*)>*) get_file_object_from_section_ptrs;
    
    // [CcGetFileObjectFromSectionPtrsRef]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x13143c, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e3cb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x523030, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e3ba0, 0x1fe000 bytes
    //
    _p62(sdk::function<struct nt::file_object_t*(struct nt::section_object_pointers_t*)>*) get_file_object_from_section_ptrs_ref;
    
    // [CcGetFlushedValidData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc8720, 0x32828 bytes
    // ntoskrnl.exe .text:0x258360, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x316240, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x307f20, 0x1fe000 bytes
    //
    _p63(sdk::function<int64_t(struct nt::section_object_pointers_t*, uint8_t)>*) get_flushed_valid_data;
    
    // [CcGetLsnForFileObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b6024, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e4b90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x524ff0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e4a80, 0x1fe000 bytes
    //
    _p64(sdk::unknown_ptr) get_lsn_for_file_object;
    
    // [CcGetRandomVacbArrayWithReference]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b6708, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e53c8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x525624, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e52b8, 0x1fe000 bytes
    //
    _p65(sdk::unknown_ptr) get_random_vacb_array_with_reference;
    
    // [CcGetVacbFromFreeList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd2e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x34891c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x232bdc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x22baac, 0x1fe000 bytes
    //
    _p66(sdk::unknown_ptr) get_vacb_from_free_list;
    
    // [CcGetVacbLargeOffset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd208, 0x32828 bytes
    // ntoskrnl.exe .text:0x24ebb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35aa64, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2fc340, 0x1fe000 bytes
    //
    _p67(sdk::unknown_ptr) get_vacb_large_offset;
    
    // [CcGetVacbMiss]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd3a4, 0x32828 bytes
    // ntoskrnl.exe .text:0x348520, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x232890, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x22b6b0, 0x1fe000 bytes
    //
    _p68(sdk::unknown_ptr) get_vacb_miss;
    
    // [CcGetVirtualAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20440, 0x32828 bytes
    // ntoskrnl.exe .text:0x315e20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2399f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x288400, 0x1fe000 bytes
    //
    _p69(sdk::unknown_ptr) get_virtual_address;
    
    // [CcGetVirtualAddressIfMapped]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbfa8, 0x32828 bytes
    // ntoskrnl.exe .text:0x24eb00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2314d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2fc290, 0x1fe000 bytes
    //
    _p70(sdk::unknown_ptr) get_virtual_address_if_mapped;
    
    // [CcIdleDelay]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9b08, 0x32828 bytes
    // ntoskrnl.exe .data:0xc11e40, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0c990, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc11ea0, 0x1fe000 bytes
    //
    _p71(sdk::unknown_ptr) idle_delay;
    
    // [CcIdleDelayTick]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323e68, 0x32828 bytes
    // ntoskrnl.exe .data:0xc48684, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f6bc, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48664, 0x1fe000 bytes
    //
    _p72(sdk::unknown_ptr) idle_delay_tick;
    
    // [CcIncrementVacbActiveCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf540, 0x32828 bytes
    // ntoskrnl.exe .text:0x3488a8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x232b9c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x22ba38, 0x1fe000 bytes
    //
    _p73(sdk::unknown_ptr) increment_vacb_active_count;
    
    // [CcInitializationComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x326fc8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc508bc, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a6ac, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc508bc, 0x1fe000 bytes
    //
    _p74(sdk::unknown_ptr) initialization_complete;
    
    // [CcInitializeBcbProfiler]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x763304, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa19354, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb03354, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa18354, 0x1fe000 bytes
    //
    _p75(sdk::unknown_ptr) initialize_bcb_profiler;
    
    // [CcInitializeCacheManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x784588, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa39298, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb27f28, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa39748, 0x1fe000 bytes
    //
    _p76(sdk::unknown_ptr) initialize_cache_manager;
    
    // [CcInitializeCacheMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd415c, 0x32828 bytes
    // ntoskrnl.exe .text:0x270360, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x381d80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x321b80, 0x1fe000 bytes
    //
    _p77(sdk::function<void(struct nt::file_object_t*, struct cc::file_sizes_t*, uint8_t, struct nt::cache_manager_callbacks_t*, void*)>*) initialize_cache_map;
    
    // [CcInitializeCacheMapEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xe830, 0x32828 bytes
    // ntoskrnl.exe .text:0x34a600, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x523100, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x22d790, 0x1fe000 bytes
    //
    _p78(sdk::function<void(struct nt::file_object_t*, struct cc::file_sizes_t*, uint8_t, struct nt::cache_manager_callbacks_t*, void*, uint32_t)>*) initialize_cache_map_ex;
    
    // [CcInitializeProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x547d14, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x772ec0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82bfdc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x77e5c0, 0x1fe000 bytes
    //
    _p79(sdk::unknown_ptr) initialize_processor;
    
    // [CcInitializeVolumeCacheMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc1b2c, 0x32828 bytes
    // ntoskrnl.exe .text:0x25461c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35d070, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30436c, 0x1fe000 bytes
    //
    _p80(sdk::unknown_ptr) initialize_volume_cache_map;
    
    // [CcInsertIntoCleanSharedCacheMapList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf3b8, 0x32828 bytes
    // ntoskrnl.exe .text:0x25139c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35c0b8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ff45c, 0x1fe000 bytes
    //
    _p81(sdk::unknown_ptr) insert_into_clean_shared_cache_map_list;
    
    // [CcInsertIntoDirtySharedCacheMapList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x667d0, 0x32828 bytes
    // ntoskrnl.exe .text:0x34e788, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2883b4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x231918, 0x1fe000 bytes
    //
    _p82(sdk::function<void(struct nt::shared_cache_map_t*)>*) insert_into_dirty_shared_cache_map_list;
    
    // [CcInsertVacbArray]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x134944, 0x32828 bytes
    // ntoskrnl.exe .text:0x375754, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a2ff8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x376ad4, 0x1fe000 bytes
    //
    _p83(sdk::unknown_ptr) insert_vacb_array;
    
    // [CcIsFatalWriteError]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xca3e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x261c44, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x370ac4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3121f4, 0x1fe000 bytes
    //
    _p84(sdk::unknown_ptr) is_fatal_write_error;
    
    // [CcIsThereDirtyData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b60e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e4c50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e0200, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e4b40, 0x1fe000 bytes
    //
    _p85(sdk::function<uint8_t(struct nt::vpb_t*)>*) is_there_dirty_data;
    
    // [CcIsThereDirtyDataEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b61e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e4c90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5250b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e4b80, 0x1fe000 bytes
    //
    _p86(sdk::function<uint8_t(struct nt::vpb_t*, uint32_t*)>*) is_there_dirty_data_ex;
    
    // [CcIsThereDirtyLoggedPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc12a8, 0x32828 bytes
    // ntoskrnl.exe .text:0x253340, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35b6c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x303180, 0x1fe000 bytes
    //
    _p87(sdk::unknown_ptr) is_there_dirty_logged_pages;
    
    // [CcLazyWriteScan]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb7a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x34fc9c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x523564, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x232e2c, 0x1fe000 bytes
    //
    _p88(sdk::unknown_ptr) lazy_write_scan;
    
    // [CcLogExtraWBThreadAction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b5824, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e3f04, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x523ec0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e3df4, 0x1fe000 bytes
    //
    _p89(sdk::unknown_ptr) log_extra_wb_thread_action;
    
    // [CcMapAndCopyFromCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x40aa00, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6e0ba0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x692630, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x631660, 0x1fe000 bytes
    //
    _p90(sdk::unknown_ptr) map_and_copy_from_cache;
    
    // [CcMapAndCopyInToCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x441f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x333460, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2375d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x27bc80, 0x1fe000 bytes
    //
    _p91(sdk::unknown_ptr) map_and_copy_in_to_cache;
    
    // [CcMapAndRead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20960, 0x32828 bytes
    // ntoskrnl.exe .text:0x3162f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x239da0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2888d0, 0x1fe000 bytes
    //
    _p92(sdk::unknown_ptr) map_and_read;
    
    // [CcMapData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x40ac60, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6e0e60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x692c10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x631920, 0x1fe000 bytes
    //
    _p93(sdk::function<uint8_t(struct nt::file_object_t*, int64_t*, uint32_t, uint32_t, void**, void**)>*) map_data;
    
    // [CcMapDataCommon]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4801ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64f724, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e2544, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c3d74, 0x1fe000 bytes
    //
    _p94(sdk::unknown_ptr) map_data_common;
    
    // [CcMapDataForOverwrite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc1638, 0x32828 bytes
    // ntoskrnl.exe .text:0x251998, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e7450, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ffa88, 0x1fe000 bytes
    //
    _p95(sdk::unknown_ptr) map_data_for_overwrite;
    
    // [CcMasterSpinLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe CACHEALI:0x3be780, 0x32828 bytes
    // ntoskrnl.exe CACHEALI:0xd22780, 0x1fe000 bytes
    // ntoskrnl.exe CACHEALI:0xd48580, 0x1fd000 bytes
    // ntoskrnl.exe CACHEALI:0xd22780, 0x1fe000 bytes
    //
    _p96(sdk::unknown_ptr) master_spin_lock;
    
    // [CcMaxAsyncReadWorkerThreads]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323e5c, 0x32828 bytes
    // ntoskrnl.exe .data:0xc4866c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f6a4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4864c, 0x1fe000 bytes
    //
    _p97(sdk::unknown_ptr) max_async_read_worker_threads;
    
    // [CcMaxLazyWritePages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f5ec0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc11e38, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0997c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc11e98, 0x1fe000 bytes
    //
    _p98(sdk::unknown_ptr) max_lazy_write_pages;
    
    // [CcMaxNestingLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323e58, 0x32828 bytes
    // ntoskrnl.exe .data:0xc48668, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f6a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48648, 0x1fe000 bytes
    //
    _p99(sdk::unknown_ptr) max_nesting_level;
    
    // [CcMaxNumberCompleteAsyncReadExWorkItems]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x326fd0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc508e0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a6d0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc508e0, 0x1fe000 bytes
    //
    _q00(sdk::unknown_ptr) max_number_complete_async_read_ex_work_items;
    
    // [CcMaxVacbLevelsSeen]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f5d90, 0x32828 bytes
    // ntoskrnl.exe .data:0xc0f0e4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc09784, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc0f124, 0x1fe000 bytes
    //
    _q01(sdk::unknown_ptr) max_vacb_levels_seen;
    
    // [CcMaxWorklessLazywriteScans]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32415c, 0x32828 bytes
    // ntoskrnl.exe .data:0xc48718, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f740, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc486f8, 0x1fe000 bytes
    //
    _q02(sdk::unknown_ptr) max_workless_lazywrite_scans;
    
    // [CcMaxZeroTransferSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x326fcc, 0x32828 bytes
    // ntoskrnl.exe .data:0xc508c4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a6b4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc508c4, 0x1fe000 bytes
    //
    _q03(sdk::unknown_ptr) max_zero_transfer_size;
    
    // [CcMdlRead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47c288, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x696270, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x776950, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x640280, 0x1fe000 bytes
    //
    _q04(sdk::function<void(struct nt::file_object_t*, int64_t*, uint32_t, struct nt::mdl_t**, struct io::status_block_t*)>*) mdl_read;
    
    // [CcMdlReadComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x495ac8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6725b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7dc870, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e5cf0, 0x1fe000 bytes
    //
    _q05(sdk::function<void(struct nt::file_object_t*, struct nt::mdl_t*)>*) mdl_read_complete;
    
    // [CcMdlReadComplete2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x455738, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5ef5c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7bdff4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x643d80, 0x1fe000 bytes
    //
    _q06(sdk::unknown_ptr) mdl_read_complete2;
    
    // [CcMdlWriteAbort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b64b4, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e5df0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x526030, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e5ce0, 0x1fe000 bytes
    //
    _q07(sdk::function<void(struct nt::file_object_t*, struct nt::mdl_t*)>*) mdl_write_abort;
    
    // [CcMdlWriteComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a25bc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x677af0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x810370, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6eaf60, 0x1fe000 bytes
    //
    _q08(sdk::function<void(struct nt::file_object_t*, int64_t*, struct nt::mdl_t*)>*) mdl_write_complete;
    
    // [CcMdlWriteComplete2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd34a4, 0x32828 bytes
    // ntoskrnl.exe .text:0x26eab0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39c3e8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x320154, 0x1fe000 bytes
    //
    _q09(sdk::unknown_ptr) mdl_write_complete2;
    
    // [CcMinimumFreeHighPriorityVacbs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323dc0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc4861c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f638, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc485fc, 0x1fe000 bytes
    //
    _q10(sdk::unknown_ptr) minimum_free_high_priority_vacbs;
    
    // [CcMmLogLostDelayedWriteError]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b5cd4, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e4848, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x524eb4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e4738, 0x1fe000 bytes
    //
    _q11(sdk::unknown_ptr) mm_log_lost_delayed_write_error;
    
    // [CcNoDelay]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323e10, 0x32828 bytes
    // ntoskrnl.exe .data:0xc48650, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f688, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48630, 0x1fe000 bytes
    //
    _q12(sdk::unknown_ptr) no_delay;
    
    // [CcNotifyOfMappedWrite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x69644, 0x32828 bytes
    // ntoskrnl.exe .text:0x3498d4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x285760, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x22ca64, 0x1fe000 bytes
    //
    _q13(sdk::unknown_ptr) notify_of_mapped_write;
    
    // [CcNotifyOfMappedWriteComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xca31c, 0x32828 bytes
    // ntoskrnl.exe .text:0x26e7b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x383304, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31fe70, 0x1fe000 bytes
    //
    _q14(sdk::unknown_ptr) notify_of_mapped_write_complete;
    
    // [CcNotifyWriteBehind]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcb854, 0x32828 bytes
    // ntoskrnl.exe .text:0x37ea98, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x523fd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37fa2c, 0x1fe000 bytes
    //
    _q15(sdk::unknown_ptr) notify_write_behind;
    
    // [CcNumberAsyncReadCacheHits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3242d0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc4c300, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc643e8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4c2e0, 0x1fe000 bytes
    //
    _q16(sdk::unknown_ptr) number_async_read_cache_hits;
    
    // [CcNumberAsyncReadPrefetches]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3242d8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc4c308, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc643f0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4c2e8, 0x1fe000 bytes
    //
    _q17(sdk::unknown_ptr) number_async_read_prefetches;
    
    // [CcNumberAsyncReadRefaulted]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x343030, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf5020, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17b18, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf5020, 0x1fe000 bytes
    //
    _q18(sdk::unknown_ptr) number_async_read_refaulted;
    
    // [CcNumberOfExternalCaches]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323e18, 0x32828 bytes
    // ntoskrnl.exe .data:0xc48658, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f690, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48638, 0x1fe000 bytes
    //
    _q19(sdk::unknown_ptr) number_of_external_caches;
    
    // [CcNumberOfFreeVacbs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323db8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc48618, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f63c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc485f8, 0x1fe000 bytes
    //
    _q20(sdk::unknown_ptr) number_of_free_vacbs;
    
    // [CcNumberOfMappedVacbs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3242b8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc4c2f8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc643e0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4c2d8, 0x1fe000 bytes
    //
    _q21(sdk::unknown_ptr) number_of_mapped_vacbs;
    
    // [CcOkToAddWriteBehindThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b58a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e400c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x524198, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e3efc, 0x1fe000 bytes
    //
    _q22(sdk::unknown_ptr) ok_to_add_write_behind_thread;
    
    // [CcPerfLogExtraWBThreadAction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b6a14, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e67a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x527eec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e6690, 0x1fe000 bytes
    //
    _q23(sdk::unknown_ptr) perf_log_extra_wb_thread_action;
    
    // [CcPerfLogFlushCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xca764, 0x32828 bytes
    // ntoskrnl.exe .text:0x3b82d8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3cafdc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b8c68, 0x1fe000 bytes
    //
    _q24(sdk::unknown_ptr) perf_log_flush_cache;
    
    // [CcPerfLogFlushSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcc5a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3b83dc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3caef4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b8d6c, 0x1fe000 bytes
    //
    _q25(sdk::unknown_ptr) perf_log_flush_section;
    
    // [CcPerfLogLazyWriteScan]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd2780, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c0c20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d3f58, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c1a30, 0x1fe000 bytes
    //
    _q26(sdk::unknown_ptr) perf_log_lazy_write_scan;
    
    // [CcPerfLogLoggedStreamsStats]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd069c, 0x32828 bytes
    // ntoskrnl.exe .text:0x3bf1c8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d0ce0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3bffd8, 0x1fe000 bytes
    //
    _q27(sdk::unknown_ptr) perf_log_logged_streams_stats;
    
    // [CcPerfLogScheduleReadAhead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcb664, 0x32828 bytes
    // ntoskrnl.exe .text:0x3b75ac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ca5d8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b7e5c, 0x1fe000 bytes
    //
    _q28(sdk::unknown_ptr) perf_log_schedule_read_ahead;
    
    // [CcPerfLogVolumeLogHandleInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd074c, 0x32828 bytes
    // ntoskrnl.exe .text:0x3bf294, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d0dac, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c00a4, 0x1fe000 bytes
    //
    _q29(sdk::unknown_ptr) perf_log_volume_log_handle_info;
    
    // [CcPerfLogWorkItemEnqueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc4e80, 0x32828 bytes
    // ntoskrnl.exe .text:0x3b87ec, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3cb744, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b917c, 0x1fe000 bytes
    //
    _q30(sdk::unknown_ptr) perf_log_work_item_enqueue;
    
    // [CcPerformReadAhead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x773a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2aa108, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3358a8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2bdb04, 0x1fe000 bytes
    //
    _q31(sdk::unknown_ptr) perform_read_ahead;
    
    // [CcPinFileData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1ee60, 0x32828 bytes
    // ntoskrnl.exe .text:0x314540, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2389a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x286b20, 0x1fe000 bytes
    //
    _q32(sdk::unknown_ptr) pin_file_data;
    
    // [CcPinMappedData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x40a830, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6e09d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x692860, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x631490, 0x1fe000 bytes
    //
    _q33(sdk::function<uint8_t(struct nt::file_object_t*, int64_t*, uint32_t, uint32_t, void**)>*) pin_mapped_data;
    
    // [CcPinRead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x478800, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6e0490, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x692a20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x630f50, 0x1fe000 bytes
    //
    _q34(sdk::function<uint8_t(struct nt::file_object_t*, int64_t*, uint32_t, uint32_t, void**, void**)>*) pin_read;
    
    // [CcPostDeferredWrites]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b5bdc, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e4570, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a26d8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e4460, 0x1fe000 bytes
    //
    _q35(sdk::unknown_ptr) post_deferred_writes;
    
    // [CcPostWorkQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa798, 0x32828 bytes
    // ntoskrnl.exe .text:0x350538, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x286e2c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2336c8, 0x1fe000 bytes
    //
    _q36(sdk::unknown_ptr) post_work_queue;
    
    // [CcPostWorkQueueAsyncRead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc4b58, 0x32828 bytes
    // ntoskrnl.exe .text:0x353154, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x288b6c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x235324, 0x1fe000 bytes
    //
    _q37(sdk::unknown_ptr) post_work_queue_async_read;
    
    // [CcPrepareMdlWrite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd0d88, 0x32828 bytes
    // ntoskrnl.exe .text:0x26b3b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39ba50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31ca00, 0x1fe000 bytes
    //
    _q38(sdk::function<void(struct nt::file_object_t*, int64_t*, uint32_t, struct nt::mdl_t**, struct io::status_block_t*)>*) prepare_mdl_write;
    
    // [CcPreparePinWrite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47ffe0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64f550, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e2370, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c3ba0, 0x1fe000 bytes
    //
    _q39(sdk::function<uint8_t(struct nt::file_object_t*, int64_t*, uint32_t, uint8_t, uint32_t, void**, void**)>*) prepare_pin_write;
    
    // [CcPurgeAndClearCacheSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcc6a4, 0x32828 bytes
    // ntoskrnl.exe .text:0x2a4ce0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x301894, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2cdfa8, 0x1fe000 bytes
    //
    _q40(sdk::unknown_ptr) purge_and_clear_cache_section;
    
    // [CcPurgeCacheSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x87bc, 0x32828 bytes
    // ntoskrnl.exe .text:0x2a6270, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x313b40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2cf540, 0x1fe000 bytes
    //
    _q41(sdk::function<uint8_t(struct nt::section_object_pointers_t*, int64_t*, uint32_t, uint32_t)>*) purge_cache_section;
    
    // [CcQueueLazyWriteScanThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x13d00c, 0x32828 bytes
    // ntoskrnl.exe .text:0x3b46f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x524490, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b4fa0, 0x1fe000 bytes
    //
    _q42(sdk::unknown_ptr) queue_lazy_write_scan_thread;
    
    // [CcRandomSeed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9ce8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc122c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cec0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc12320, 0x1fe000 bytes
    //
    _q43(sdk::unknown_ptr) random_seed;
    
    // [CcReEngageWorkerThreads]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10dd00, 0x32828 bytes
    // ntoskrnl.exe .text:0x37bfb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39afb8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37d330, 0x1fe000 bytes
    //
    _q44(sdk::unknown_ptr) re_engage_worker_threads;
    
    // [CcRecalculateVacbArrayHighwaterMark]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b67a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e5468, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5256c4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e5358, 0x1fe000 bytes
    //
    _q45(sdk::unknown_ptr) recalculate_vacb_array_highwater_mark;
    
    // [CcReferenceFileOffset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b67c4, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e5494, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5256f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e5384, 0x1fe000 bytes
    //
    _q46(sdk::unknown_ptr) reference_file_offset;
    
    // [CcReferenceSharedCacheMapFileObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xeecec, 0x32828 bytes
    // ntoskrnl.exe .text:0x34f4c4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2d5ad0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x232654, 0x1fe000 bytes
    //
    _q47(sdk::function<struct nt::file_object_t*(struct nt::shared_cache_map_t*)>*) reference_shared_cache_map_file_object;
    
    // [CcReferenceVacbArray]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd2b0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3489e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x232c90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x22bb70, 0x1fe000 bytes
    //
    _q48(sdk::unknown_ptr) reference_vacb_array;
    
    // [CcRegisterExternalCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b5964, 0x32828 bytes
    // ntoskrnl.exe .text:0x390ae0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39cbe0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x391b30, 0x1fe000 bytes
    //
    _q49(sdk::unknown_ptr) register_external_cache;
    
    // [CcReleaseBcbLockAndVacbLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf4cc, 0x32828 bytes
    // ntoskrnl.exe .text:0x348868, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37c584, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x22b9f8, 0x1fe000 bytes
    //
    _q50(sdk::unknown_ptr) release_bcb_lock_and_vacb_lock;
    
    // [CcReleaseByteRangeFromWrite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xab60, 0x32828 bytes
    // ntoskrnl.exe .text:0x34cef8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x231800, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x230088, 0x1fe000 bytes
    //
    _q51(sdk::unknown_ptr) release_byte_range_from_write;
    
    // [CcRemapBcb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb38f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x23fef0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34c4c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ed480, 0x1fe000 bytes
    //
    _q52(sdk::function<void*(void*)>*) remap_bcb;
    
    // [CcRemoteFileDPInlineFlushThreshold]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9b44, 0x32828 bytes
    // ntoskrnl.exe .data:0xc11e94, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cae4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc11ef4, 0x1fe000 bytes
    //
    _q53(sdk::unknown_ptr) remote_file_dp_inline_flush_threshold;
    
    // [CcRemoveVacbArray]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b6868, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e554c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5257a8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e543c, 0x1fe000 bytes
    //
    _q54(sdk::unknown_ptr) remove_vacb_array;
    
    // [CcRepinBcb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b5d74, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e4900, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3dcab0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e47f0, 0x1fe000 bytes
    //
    _q55(sdk::function<void(void*)>*) repin_bcb;
    
    // [CcRescheduleLazyWriteScan]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x86a4, 0x32828 bytes
    // ntoskrnl.exe .text:0x291dd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52498c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x235f94, 0x1fe000 bytes
    //
    _q56(sdk::unknown_ptr) reschedule_lazy_write_scan;
    
    // [CcSaveNVContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1637ea, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fbf3a, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x43099a, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3fd81a, 0x1fe000 bytes
    //
    _q57(sdk::unknown_ptr) save_nv_context;
    
    // [CcScanLogHandleList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x9ed0, 0x32828 bytes
    // ntoskrnl.exe .text:0x350a34, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x288588, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x233bc4, 0x1fe000 bytes
    //
    _q58(sdk::unknown_ptr) scan_log_handle_list;
    
    // [CcScheduleLazyWriteScan]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x6674c, 0x32828 bytes
    // ntoskrnl.exe .text:0x34e6fc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2882d4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x23188c, 0x1fe000 bytes
    //
    _q59(sdk::function<void(uint8_t, uint8_t)>*) schedule_lazy_write_scan;
    
    // [CcScheduleReadAhead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b5dd4, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e4970, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x524f60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e4860, 0x1fe000 bytes
    //
    _q60(sdk::function<void(struct nt::file_object_t*, int64_t*, uint32_t)>*) schedule_read_ahead;
    
    // [CcScheduleReadAheadEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x6a794, 0x32828 bytes
    // ntoskrnl.exe .text:0x352930, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3176f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2357d0, 0x1fe000 bytes
    //
    _q61(sdk::function<void(struct nt::file_object_t*, int64_t*, uint32_t, struct nt::kthread_t*)>*) schedule_read_ahead_ex;
    
    // [CcSetAdditionalCacheAttributes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xda54, 0x32828 bytes
    // ntoskrnl.exe .text:0x34e820, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35fea0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2319b0, 0x1fe000 bytes
    //
    _q62(sdk::function<void(struct nt::file_object_t*, uint8_t, uint8_t)>*) set_additional_cache_attributes;
    
    // [CcSetAdditionalCacheAttributesEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd990, 0x32828 bytes
    // ntoskrnl.exe .text:0x34e8d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35fd90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x231a60, 0x1fe000 bytes
    //
    _q63(sdk::function<void(struct nt::file_object_t*, uint32_t)>*) set_additional_cache_attributes_ex;
    
    // [CcSetBcbOwnerPointer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5ff2cc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x864ac0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9322e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x862ef0, 0x1fe000 bytes
    //
    _q64(sdk::function<void(void*, void*)>*) set_bcb_owner_pointer;
    
    // [CcSetDirtyInMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x416b0, 0x32828 bytes
    // ntoskrnl.exe .text:0x332a80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x236220, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x27b2a0, 0x1fe000 bytes
    //
    _q65(sdk::unknown_ptr) set_dirty_in_mask;
    
    // [CcSetDirtyPageThreshold]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b576c, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e3d80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x523130, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e3c70, 0x1fe000 bytes
    //
    _q66(sdk::function<void(struct nt::file_object_t*, uint32_t)>*) set_dirty_page_threshold;
    
    // [CcSetDirtyPinnedData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x88bc0, 0x32828 bytes
    // ntoskrnl.exe .text:0x34c920, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e7650, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x22fab0, 0x1fe000 bytes
    //
    _q67(sdk::function<void(void*, int64_t*)>*) set_dirty_pinned_data;
    
    // [CcSetFileSizes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd4e88, 0x32828 bytes
    // ntoskrnl.exe .text:0x271080, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x301540, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x322820, 0x1fe000 bytes
    //
    _q68(sdk::function<void(struct nt::file_object_t*, struct cc::file_sizes_t*)>*) set_file_sizes;
    
    // [CcSetFileSizesEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd744, 0x32828 bytes
    // ntoskrnl.exe .text:0x34a2c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x301560, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x22d450, 0x1fe000 bytes
    //
    _q69(sdk::function<int32_t(struct nt::file_object_t*, struct cc::file_sizes_t*)>*) set_file_sizes_ex;
    
    // [CcSetLogHandleForFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b6274, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e5040, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x525200, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e4f30, 0x1fe000 bytes
    //
    _q70(sdk::function<void(struct nt::file_object_t*, void*, sdk::function<void(void*, int64_t)>*)>*) set_log_handle_for_file;
    
    // [CcSetLogHandleForFileEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc651c, 0x32828 bytes
    // ntoskrnl.exe .text:0x2585e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3694c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x308220, 0x1fe000 bytes
    //
    _q71(sdk::unknown_ptr) set_log_handle_for_file_ex;
    
    // [CcSetLoggedDataThreshold]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x110dd8, 0x32828 bytes
    // ntoskrnl.exe .text:0x2706f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a86a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x321ee0, 0x1fe000 bytes
    //
    _q72(sdk::unknown_ptr) set_logged_data_threshold;
    
    // [CcSetParallelFlushFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xe2e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x34e670, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35e6f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x231800, 0x1fe000 bytes
    //
    _q73(sdk::function<void(struct nt::file_object_t*, uint8_t)>*) set_parallel_flush_file;
    
    // [CcSetReadAheadGranularity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc5400, 0x32828 bytes
    // ntoskrnl.exe .text:0x25bfb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36ca30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30bb00, 0x1fe000 bytes
    //
    _q74(sdk::function<void(struct nt::file_object_t*, uint32_t)>*) set_read_ahead_granularity;
    
    // [CcSetReadAheadGranularityEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b5ddc, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e4990, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x524f80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e4880, 0x1fe000 bytes
    //
    _q75(sdk::unknown_ptr) set_read_ahead_granularity_ex;
    
    // [CcSetVacbInFreeList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcebc, 0x32828 bytes
    // ntoskrnl.exe .text:0x34c56c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x232468, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x22f6fc, 0x1fe000 bytes
    //
    _q76(sdk::unknown_ptr) set_vacb_in_free_list;
    
    // [CcSetVacbLargeOffset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa0f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x34f0a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3053d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x232230, 0x1fe000 bytes
    //
    _q77(sdk::unknown_ptr) set_vacb_large_offset;
    
    // [CcSetValidData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x93ec4, 0x32828 bytes
    // ntoskrnl.exe .text:0x21bb7c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e9800, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e0dac, 0x1fe000 bytes
    //
    _q78(sdk::unknown_ptr) set_valid_data;
    
    // [CcShouldLazyWriteCacheMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbeb0, 0x32828 bytes
    // ntoskrnl.exe .text:0x35041c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x286cc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2335ac, 0x1fe000 bytes
    //
    _q79(sdk::unknown_ptr) should_lazy_write_cache_map;
    
    // [CcShouldSpinAsyncReadWorkerThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc4df8, 0x32828 bytes
    // ntoskrnl.exe .text:0x353358, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x288ea8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x235528, 0x1fe000 bytes
    //
    _q80(sdk::unknown_ptr) should_spin_async_read_worker_thread;
    
    // [CcSlowReferenceSharedCacheMapFileObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xeec4c, 0x32828 bytes
    // ntoskrnl.exe .text:0x34f4f4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2d6434, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x232684, 0x1fe000 bytes
    //
    _q81(sdk::function<struct nt::file_object_t*(struct nt::shared_cache_map_t*)>*) slow_reference_shared_cache_map_file_object;
    
    // [CCSwapNumLoggersPerClockType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x326ac0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc54570, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc70c38, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc54540, 0x1fe000 bytes
    //
    _q82(sdk::unknown_ptr) swap_num_loggers_per_clock_type;
    
    // [CcTestControl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ab60, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cad70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ea530, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cbe40, 0x1fe000 bytes
    //
    _q83(sdk::unknown_ptr) test_control;
    
    // [CcTestControlData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323da0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc48600, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f620, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc485e0, 0x1fe000 bytes
    //
    _q84(sdk::unknown_ptr) test_control_data;
    
    // [CcTwilightLookasideList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x341180, 0x32828 bytes
    // ntoskrnl.exe .data:0xcee200, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd0e0c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcee200, 0x1fe000 bytes
    //
    _q85(sdk::unknown_ptr) twilight_lookaside_list;
    
    // [CcUninitializeCacheMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x663f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x34e1c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x287ab0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x231350, 0x1fe000 bytes
    //
    _q86(sdk::function<uint8_t(struct nt::file_object_t*, int64_t*, struct nt::cache_uninitialize_event_t*)>*) uninitialize_cache_map;
    
    // [CcUnmapFileOffsetFromSystemCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa418, 0x32828 bytes
    // ntoskrnl.exe .text:0x258ea0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36dc20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x308650, 0x1fe000 bytes
    //
    _q87(sdk::unknown_ptr) unmap_file_offset_from_system_cache;
    
    // [CcUnmapInactiveViews]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x13ea18, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e5660, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5258b8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e5550, 0x1fe000 bytes
    //
    _q88(sdk::unknown_ptr) unmap_inactive_views;
    
    // [CcUnmapVacb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3fe41c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6e43a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x692120, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5edd8c, 0x1fe000 bytes
    //
    _q89(sdk::unknown_ptr) unmap_vacb;
    
    // [CcUnmapVacbArray]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcf80, 0x32828 bytes
    // ntoskrnl.exe .text:0x348c40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x232160, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x22bdd0, 0x1fe000 bytes
    //
    _q90(sdk::unknown_ptr) unmap_vacb_array;
    
    // [CcUnpinData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3fe3e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6e7010, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6a6970, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5edee0, 0x1fe000 bytes
    //
    _q91(sdk::function<void(void*)>*) unpin_data;
    
    // [CcUnpinDataForThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5ff318, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x864b20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x932340, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x862f50, 0x1fe000 bytes
    //
    _q92(sdk::function<void(void*, uint64_t)>*) unpin_data_for_thread;
    
    // [CcUnpinFileDataEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc3c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x34d440, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2964f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2305d0, 0x1fe000 bytes
    //
    _q93(sdk::unknown_ptr) unpin_file_data_ex;
    
    // [CcUnpinRepinnedBcb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b5e20, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e49e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3cad80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e48d0, 0x1fe000 bytes
    //
    _q94(sdk::function<void(void*, uint8_t, struct io::status_block_t*)>*) unpin_repinned_bcb;
    
    // [CcUnregisterExternalCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b59fc, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e4220, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x524a50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e4110, 0x1fe000 bytes
    //
    _q95(sdk::unknown_ptr) unregister_external_cache;
    
    // [CcUpdateReadHistory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc0264, 0x32828 bytes
    // ntoskrnl.exe .text:0x2aa098, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x319f24, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2be46c, 0x1fe000 bytes
    //
    _q96(sdk::unknown_ptr) update_read_history;
    
    // [CcUpdateSharedCacheMapFlag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x9ce8, 0x32828 bytes
    // ntoskrnl.exe .text:0x2a3e3c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x301a5c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d036c, 0x1fe000 bytes
    //
    _q97(sdk::unknown_ptr) update_shared_cache_map_flag;
    
    // [CcUpdateTimeOnLogHandles]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcc240, 0x32828 bytes
    // ntoskrnl.exe .text:0x26156c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36e8b4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x311968, 0x1fe000 bytes
    //
    _q98(sdk::unknown_ptr) update_time_on_log_handles;
    
    // [CcVacbArrays]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323dc8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc48620, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f640, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48600, 0x1fe000 bytes
    //
    _q99(sdk::unknown_ptr) vacb_arrays;
    
    // [CcVacbArraysAllocated]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323dd0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc48628, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f648, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48608, 0x1fe000 bytes
    //
    _r00(sdk::unknown_ptr) vacb_arrays_allocated;
    
    // [CcVacbArraysHighestUsedIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x326fa0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc503b8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a10c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc503b8, 0x1fe000 bytes
    //
    _r01(sdk::unknown_ptr) vacb_arrays_highest_used_index;
    
    // [CcVacbFreeList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323de0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc48630, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f650, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48610, 0x1fe000 bytes
    //
    _r02(sdk::unknown_ptr) vacb_free_list;
    
    // [CcVacbLevelLookasideList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32a780, 0x32828 bytes
    // ntoskrnl.exe .data:0xcdb3c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf7e80, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcdb3c0, 0x1fe000 bytes
    //
    _r03(sdk::unknown_ptr) vacb_level_lookaside_list;
    
    // [CcVacbLevelWithBcbListHeadsLookasideList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32a700, 0x32828 bytes
    // ntoskrnl.exe .data:0xcdb340, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf7e00, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcdb340, 0x1fe000 bytes
    //
    _r04(sdk::unknown_ptr) vacb_level_with_bcb_list_heads_lookaside_list;
    
    // [CcVacbSpinLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe CACHEALI:0x3be740, 0x32828 bytes
    // ntoskrnl.exe CACHEALI:0xd226c0, 0x1fe000 bytes
    // ntoskrnl.exe CACHEALI:0xd48440, 0x1fd000 bytes
    // ntoskrnl.exe CACHEALI:0xd227c0, 0x1fe000 bytes
    //
    _r05(sdk::unknown_ptr) vacb_spin_lock;
    
    // [CcVolumeCacheMapList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323ee0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc48690, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f6c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48670, 0x1fe000 bytes
    //
    _r06(sdk::unknown_ptr) volume_cache_map_list;
    
    // [CcWaitForCurrentLazyWriterActivity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10dee8, 0x32828 bytes
    // ntoskrnl.exe .text:0x37df00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39d010, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37f280, 0x1fe000 bytes
    //
    _r07(sdk::function<int32_t()>*) wait_for_current_lazy_writer_activity;
    
    // [CcWaitForUninitializeCacheMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4500, 0x32828 bytes
    // ntoskrnl.exe .text:0x256e10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x361314, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x306574, 0x1fe000 bytes
    //
    _r08(sdk::unknown_ptr) wait_for_uninitialize_cache_map;
    
    // [CcWorkerThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc860, 0x32828 bytes
    // ntoskrnl.exe .text:0x350c70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x284700, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x233e00, 0x1fe000 bytes
    //
    _r09(sdk::unknown_ptr) worker_thread;
    
    // [CcWriteBehind]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa99c, 0x32828 bytes
    // ntoskrnl.exe .text:0x34f554, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2873d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2326e4, 0x1fe000 bytes
    //
    _r10(sdk::unknown_ptr) write_behind;
    
    // [CcWriteBehindInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xe324, 0x32828 bytes
    // ntoskrnl.exe .text:0x349cb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x287600, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x22ce40, 0x1fe000 bytes
    //
    _r11(sdk::unknown_ptr) write_behind_internal;
    
    // [CcZeroData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48a2cc, 0x32828 bytes
    // ntoskrnl.exe .text:0x209600, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e7df0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c0d40, 0x1fe000 bytes
    //
    _r12(sdk::function<uint8_t(struct nt::file_object_t*, int64_t*, int64_t*, uint8_t)>*) zero_data;
    
    // [CcZeroDataInCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc8c0c, 0x32828 bytes
    // ntoskrnl.exe .text:0x2093dc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e70f4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c0b3c, 0x1fe000 bytes
    //
    _r13(sdk::unknown_ptr) zero_data_in_cache;
    
    // [CcZeroDataOnDisk]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc8dd0, 0x32828 bytes
    // ntoskrnl.exe .text:0x25f8f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36bb10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x310130, 0x1fe000 bytes
    //
    _r14(sdk::unknown_ptr) zero_data_on_disk;
    
    // [CcZeroEndOfLastPage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15ca0, 0x32828 bytes
    // ntoskrnl.exe .text:0x30fd8c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2d69a8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2818d4, 0x1fe000 bytes
    //
    _r15(sdk::unknown_ptr) zero_end_of_last_page;
};
#include "magic/api.end.hpp"
