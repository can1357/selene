#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/coverage_sampler_perf_stats_t.start.hpp"
namespace etw
{
    // [struct _ETW_COVERAGE_SAMPLER_PERF_STATS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct coverage_sampler_perf_stats_t                                          
    {                                                                             
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                           
        //                                                                        
        _m000 uint64_t run_time;                                                    //{ +0x0000    +0x0000    +0x0000    } | .RunTime
        _m001 int32_t  sample_profile;                                              //{ +0x0008    +0x0008    +0x0008    } | .SampleProfile
        _m002 int32_t  sample_c_switch;                                             //{ +0x000c    +0x000c    +0x000c    } | .SampleCSwitch
        _m003 int32_t  sample_r_thread;                                             //{ +0x0010    +0x0010    +0x0010    } | .SampleRThread
        _m004 int32_t  sample_pg_fault;                                             //{ +0x0014    +0x0014    +0x0014    } | .SamplePGFault
        _m005 int32_t  capture_sample_profile;                                      //{ +0x0018    +0x0018    +0x0018    } | .CaptureSampleProfile
        _m006 int32_t  capture_sample_c_switch;                                     //{ +0x001c    +0x001c    +0x001c    } | .CaptureSampleCSwitch
        _m007 int32_t  capture_sample_r_thread;                                     //{ +0x0020    +0x0020    +0x0020    } | .CaptureSampleRThread
        _m008 int32_t  capture_sample_pg_fault;                                     //{ +0x0024    +0x0024    +0x0024    } | .CaptureSamplePGFault
        _m009 int32_t  coverage_sampler_created;                                    //{ +0x0028    +0x0028    +0x0028    } | .CoverageSamplerCreated
        _m010 int32_t  coverage_sampler_deleted;                                    //{ +0x002c    +0x002c    +0x002c    } | .CoverageSamplerDeleted
        _m011 int32_t  coverage_sampler_started;                                    //{ +0x0030    +0x0030    +0x0030    } | .CoverageSamplerStarted
        _m012 int32_t  coverage_sampler_paused;                                     //{ +0x0034    +0x0034    +0x0034    } | .CoverageSamplerPaused
        _m013 int32_t  coverage_sampler_resumed;                                    //{ +0x0038    +0x0038    +0x0038    } | .CoverageSamplerResumed
        _m014 int32_t  coverage_sampler_stopped;                                    //{ +0x003c    +0x003c    +0x003c    } | .CoverageSamplerStopped
        _m015 int32_t  coverage_sampler_queried;                                    //{ +0x0040    +0x0040    +0x0040    } | .CoverageSamplerQueried
        _m016 int32_t  coverage_sampler_query_fail_not_active;                      //{ +0x0044    +0x0044    +0x0044    } | .CoverageSamplerQueryFailNotActive
        _m017 int32_t  samples_added;                                               //{ +0x0048    +0x0048    +0x0048    } | .SamplesAdded
        _m018 int32_t  samples_found;                                               //{ +0x004c    +0x004c    +0x004c    } | .SamplesFound
        _m019 int32_t  samples_dropped;                                             //{ +0x0050    +0x0050    +0x0050    } | .SamplesDropped
        _m020 int32_t  samples_mapped_um;                                           //{ +0x0054    +0x0054    +0x0054    } | .SamplesMappedUM
        _m021 int32_t  samples_mapped_km;                                           //{ +0x0058    +0x0058    +0x0058    } | .SamplesMappedKM
        _m022 int32_t  samples_try_map_um;                                          //{ +0x005c    +0x005c    +0x005c    } | .SamplesTryMapUM
        _m023 int32_t  samples_try_map_km;                                          //{ +0x0060    +0x0060    +0x0060    } | .SamplesTryMapKM
        _m024 int32_t  samples_added_already_mapped;                                //{ +0x0064    +0x0064    +0x0064    } | .SamplesAddedAlreadyMapped
        _m025 int32_t  modules_tracked_um;                                          //{ +0x0068    +0x0068    +0x0068    } | .ModulesTrackedUM
        _m026 int32_t  modules_mapped_um;                                           //{ +0x006c    +0x006c    +0x006c    } | .ModulesMappedUM
        _m027 int32_t  modules_unmapped_um;                                         //{ +0x0070    +0x0070    +0x0070    } | .ModulesUnmappedUM
        _m028 int32_t  modules_tracked_km;                                          //{ +0x0074    +0x0074    +0x0074    } | .ModulesTrackedKM
        _m029 int32_t  modules_mapped_km;                                           //{ +0x0078    +0x0078    +0x0078    } | .ModulesMappedKM
        _m030 int32_t  modules_unmapped_km;                                         //{ +0x007c    +0x007c    +0x007c    } | .ModulesUnmappedKM
        _m031 int32_t  modules_cleared;                                             //{ +0x0080    +0x0080    +0x0080    } | .ModulesCleared
        _m032 int32_t  modules_pruned;                                              //{ +0x0084    +0x0084    +0x0084    } | .ModulesPruned
        _m033 int32_t  modules_pruned_pending_delete;                               //{ +0x0088    +0x0088    +0x0088    } | .ModulesPrunedPendingDelete
        _m034 int32_t  modules_out_of_date_pending_delete;                          //{ +0x008c    +0x008c    +0x008c    } | .ModulesOutOfDatePendingDelete
        _m035 int32_t  module_buckets_grown;                                        //{ +0x0090    +0x0090    +0x0090    } | .ModuleBucketsGrown
        _m036 int32_t  module_debug_info_failed_query;                              //{ +0x0094    +0x0094    +0x0094    } | .ModuleDebugInfoFailedQuery
        _m037 int32_t  module_debug_info_too_large;                                 //{ +0x0098    +0x0098    +0x0098    } | .ModuleDebugInfoTooLarge
        _m038 int32_t  module_id_hash_duplicate;                                    //{ +0x009c    +0x009c    +0x009c    } | .ModuleIdHashDuplicate
        _m039 int32_t  module_id_hash_conflict;                                     //{ +0x00a0    +0x00a0    +0x00a0    } | .ModuleIdHashConflict
        _m040 int32_t  processes_tracked;                                           //{ +0x00a4    +0x00a4    +0x00a4    } | .ProcessesTracked
        _m041 int32_t  processes_ignored;                                           //{ +0x00a8    +0x00a8    +0x00a8    } | .ProcessesIgnored
        _m042 int32_t  processes_deleted;                                           //{ +0x00ac    +0x00ac    +0x00ac    } | .ProcessesDeleted
        _m043 int32_t  capture_sample_attempts;                                     //{ +0x00b0    +0x00b0    +0x00b0    } | .CaptureSampleAttempts
        _m044 int32_t  capture_sample_sampling_paused;                              //{ +0x00b4    +0x00b4    +0x00b4    } | .CaptureSampleSamplingPaused
        _m045 int32_t  capture_kernel_stack;                                        //{ +0x00b8    +0x00b8    +0x00b8    } | .CaptureKernelStack
        _m046 int32_t  capture_user_stack;                                          //{ +0x00bc    +0x00bc    +0x00bc    } | .CaptureUserStack
        _m047 int32_t  capture_ip_not_in_stack;                                     //{ +0x00c0    +0x00c0    +0x00c0    } | .CaptureIPNotInStack
        _m048 int32_t  capture_sample_idle;                                         //{ +0x00c4    +0x00c4    +0x00c4    } | .CaptureSampleIdle
        _m049 int32_t  capture_user_check_system_thread;                            //{ +0x00c8    +0x00c8    +0x00c8    } | .CaptureUserCheckSystemThread
        _m050 int32_t  capture_user_check_null_teb;                                 //{ +0x00cc    +0x00cc    +0x00cc    } | .CaptureUserCheckNullTeb
        _m051 int32_t  capture_user_check_terminating;                              //{ +0x00d0    +0x00d0    +0x00d0    } | .CaptureUserCheckTerminating
        _m052 int32_t  capture_user_check_suspended;                                //{ +0x00d4    +0x00d4    +0x00d4    } | .CaptureUserCheckSuspended
        _m053 int32_t  capture_apc_not_in_good_environment;                         //{ +0x00d8    +0x00d8    +0x00d8    } | .CaptureApcNotInGoodEnvironment
        _m054 int32_t  capture_rebalance_queue;                                     //{ +0x00dc    +0x00dc    +0x00dc    } | .CaptureRebalanceQueue
        _m055 int32_t  capture_rebalance;                                           //{ +0x00e0    +0x00e0    +0x00e0    } | .CaptureRebalance
        _m056 int32_t  capture_apc;                                                 //{ +0x00e4    +0x00e4    +0x00e4    } | .CaptureApc
        _m057 int32_t  capture_apc_not_available;                                   //{ +0x00e8    +0x00e8    +0x00e8    } | .CaptureApcNotAvailable
        _m058 int32_t  capture_apc_thread_not_queueable;                            //{ +0x00ec    +0x00ec    +0x00ec    } | .CaptureApcThreadNotQueueable
        _m059 int32_t  capture_apc_already_queued;                                  //{ +0x00f0    +0x00f0    +0x00f0    } | .CaptureApcAlreadyQueued
        _m060 int32_t  capture_thread_already_sampling;                             //{ +0x00f4    +0x00f4    +0x00f4    } | .CaptureThreadAlreadySampling
        _m061 int32_t  capture_apc_queue;                                           //{ +0x00f8    +0x00f8    +0x00f8    } | .CaptureApcQueue
        _m062 int32_t  capture_apc_queue_at_high_irql;                              //{ +0x00fc    +0x00fc    +0x00fc    } | .CaptureApcQueueAtHighIrql
        _m063 int32_t  capture_apc_failed_to_queue;                                 //{ +0x0100    +0x0100    +0x0100    } | .CaptureApcFailedToQueue
        _m064 int32_t  capture_apc_failed_to_queue_at_high_irql;                    //{ +0x0104    +0x0104    +0x0104    } | .CaptureApcFailedToQueueAtHighIrql
        _m065 int32_t  capture_apc_failed_to_queue_at_high_irql_not_running;        //{ +0x0108    +0x0108    +0x0108    } | .CaptureApcFailedToQueueAtHighIrqlNotRunning
        _m066 int32_t  capture_apc_failed_to_queue_at_high_irql_not_apc_queueable;  //{ +0x010c    +0x010c    +0x010c    } | .CaptureApcFailedToQueueAtHighIrqlNotApcQueueable
        _m067 int32_t  capture_apc_rundown;                                         //{ +0x0110    +0x0110    +0x0110    } | .CaptureApcRundown
        _m068 int32_t  capture_apc_cancel;                                          //{ +0x0114    +0x0114    +0x0114    } | .CaptureApcCancel
        _m069 int32_t  capture_apc_cancel_fail_remove;                              //{ +0x0118    +0x0118    +0x0118    } | .CaptureApcCancelFailRemove
        _m070 int32_t  capture_buffer_not_available;                                //{ +0x011c    +0x011c    +0x011c    } | .CaptureBufferNotAvailable
        _m071 int32_t  capture_buffer_release_empty;                                //{ +0x0120    +0x0120    +0x0120    } | .CaptureBufferReleaseEmpty
        _m072 int32_t  capture_buffer_queued;                                       //{ +0x0124    +0x0124    +0x0124    } | .CaptureBufferQueued
        _m073 int32_t  capture_buffer_copied;                                       //{ +0x0128    +0x0128    +0x0128    } | .CaptureBufferCopied
        _m074 int32_t  capture_start_failure_cleanup;                               //{ +0x012c    +0x012c    +0x012c    } | .CaptureStartFailureCleanup
        _m075 int32_t  sample_buffer_not_available;                                 //{ +0x0130    +0x0130    +0x0130    } | .SampleBufferNotAvailable
        _m076 int32_t  worker_wake_up_for_capture_buffer;                           //{ +0x0134    +0x0134    +0x0134    } | .WorkerWakeUpForCaptureBuffer
        _m077 int32_t  worker_wake_up_for_rebalance;                                //{ +0x0138    +0x0138    +0x0138    } | .WorkerWakeUpForRebalance
        _m078 int32_t  worker_process_capture_buffer;                               //{ +0x013c    +0x013c    +0x013c    } | .WorkerProcessCaptureBuffer
        _m079 int32_t  worker_process_sample_buffer;                                //{ +0x0140    +0x0140    +0x0140    } | .WorkerProcessSampleBuffer
        _m080 int32_t  worker_process_flush_buffer;                                 //{ +0x0144    +0x0144    +0x0144    } | .WorkerProcessFlushBuffer
        _m081 int32_t  stack_hash_miss;                                             //{ +0x0148    +0x0148    +0x0148    } | .StackHashMiss
        _m082 int32_t  stack_hash_hit;                                              //{ +0x014c    +0x014c    +0x014c    } | .StackHashHit
        _m083 int32_t  stack_hash_hit_in_history;                                   //{ +0x0150    +0x0150    +0x0150    } | .StackHashHitInHistory
        _m084 int32_t  stack_hash_switch_tables;                                    //{ +0x0154    +0x0154    +0x0154    } | .StackHashSwitchTables
        _m085 int32_t  stack_hash_collision_in_add;                                 //{ +0x0158    +0x0158    +0x0158    } | .StackHashCollisionInAdd
        _m086 int32_t  stack_hash_add_hit_load;                                     //{ +0x015c    +0x015c    +0x015c    } | .StackHashAddHitLoad
        _m087 int32_t  stack_hash_add_hit_max;                                      //{ +0x0160    +0x0160    +0x0160    } | .StackHashAddHitMax
        _m088 int32_t  bloom_filter_exceptions;                                     //{ +0x0164    +0x0164    +0x0164    } | .BloomFilterExceptions
        _m089 int32_t  bloom_filter_set;                                            //{ +0x0168    +0x0168    +0x0168    } | .BloomFilterSet
        _m090 int32_t  bloom_filter_on_create;                                      //{ +0x016c    +0x016c    +0x016c    } | .BloomFilterOnCreate
        _m091 int32_t  bloom_filter_hit;                                            //{ +0x0170    +0x0170    +0x0170    } | .BloomFilterHit
        _m092 int32_t  bloom_filter_miss;                                           //{ +0x0174    +0x0174    +0x0174    } | .BloomFilterMiss
        _m093 int32_t  buffer_samples_copied;                                       //{ +0x0178    +0x0178    +0x0178    } | .BufferSamplesCopied
        _m094 int32_t  buffer_samples_processed;                                    //{ +0x017c    +0x017c    +0x017c    } | .BufferSamplesProcessed
        _m095 int32_t  buffer_samples_added_to_sampler;                             //{ +0x0180    +0x0180    +0x0180    } | .BufferSamplesAddedToSampler
        _m096 int32_t  buffer_addresses_copied;                                     //{ +0x0184    +0x0184    +0x0184    } | .BufferAddressesCopied
        _m097 int32_t  buffer_addresses_processed;                                  //{ +0x0188    +0x0188    +0x0188    } | .BufferAddressesProcessed
        _m098 int32_t  buffer_addresses_added_to_sampler;                           //{ +0x018c    +0x018c    +0x018c    } | .BufferAddressesAddedToSampler
        _m099 int32_t  reserve_failed_acquire_lock;                                 //{ +0x0190    +0x0190    +0x0190    } | .ReserveFailedAcquireLock
        _m100 int32_t  reserve_capture_stopped;                                     //{ +0x0194    +0x0194    +0x0194    } | .ReserveCaptureStopped
        _m101 int32_t  reserve_new_buffer_set;                                      //{ +0x0198    +0x0198    +0x0198    } | .ReserveNewBufferSet
        _m102 int32_t  reserve_new_buffer_failed;                                   //{ +0x019c    +0x019c    +0x019c    } | .ReserveNewBufferFailed
        _m103 int32_t  reserve_new_buffer_allocated;                                //{ +0x01a0    +0x01a0    +0x01a0    } | .ReserveNewBufferAllocated
        _m104 int32_t  reserve_new_buffer_released;                                 //{ +0x01a4    +0x01a4    +0x01a4    } | .ReserveNewBufferReleased
        _m105 int32_t  reserve_succeeded;                                           //{ +0x01a8    +0x01a8    +0x01a8    } | .ReserveSucceeded
        _m106 int32_t  table_grew;                                                  //{ +0x01ac    +0x01ac    +0x01ac    } | .TableGrew
        _m107 int32_t  table_grow;                                                  //{ +0x01b0    +0x01b0    +0x01b0    } | .TableGrow
        _m108 int32_t  table_queued;                                                //{ +0x01b4    +0x01b4    +0x01b4    } | .TableQueued
        _m109 int32_t  table_hit_in_current;                                        //{ +0x01b8    +0x01b8    +0x01b8    } | .TableHitInCurrent
        _m110 int32_t  table_hit_in_old;                                            //{ +0x01bc    +0x01bc    +0x01bc    } | .TableHitInOld
                                                                                  
        // Windows 11                                                             
        //                                                                        
        _m111 uint64_t worker_kernel_run_time;                                      //{ +0x01c0    } | .WorkerKernelRunTime
        _m112 uint64_t worker_kernel_wait_time;                                     //{ +0x01c8    } | .WorkerKernelWaitTime
        _m113 uint64_t worker_kernel_time;                                          //{ +0x01d0    } | .WorkerKernelTime
        _m114 uint64_t worker_user_time;                                            //{ +0x01d8    } | .WorkerUserTime
        _m115 int32_t  capture_apc_because_high_irql;                               //{ +0x01e0    } | .CaptureApcBecauseHighIrql
        _m116 int32_t  capture_apc_because_apcs_disabled;                           //{ +0x01e4    } | .CaptureApcBecauseApcsDisabled
        _m117 int32_t  capture_apc_because_not_mm_can_thread_fault;                 //{ +0x01e8    } | .CaptureApcBecauseNotMmCanThreadFault
        _m118 int32_t  capture_apc_because_active_fault_in_apc;                     //{ +0x01ec    } | .CaptureApcBecauseActiveFaultInApc
        _m119 int32_t  capture_apc_because_attached_process;                        //{ +0x01f0    } | .CaptureApcBecauseAttachedProcess
        _m120 int32_t  capture_apc_because_is_actually_safe;                        //{ +0x01f4    } | .CaptureApcBecauseIsActuallySafe
        _m121 int32_t  allocated_non_paged_count;                                   //{ +0x01f8    } | .AllocatedNonPagedCount
        _m122 int32_t  allocated_paged_count;                                       //{ +0x01fc    } | .AllocatedPagedCount
        _m123 int32_t  freed_non_paged_count;                                       //{ +0x0200    } | .FreedNonPagedCount
        _m124 int32_t  freed_paged_count;                                           //{ +0x0204    } | .FreedPagedCount
        _m125 int32_t  allocation_failure;                                          //{ +0x0208    } | .AllocationFailure
        _m126 uint32_t profile_interval;                                            //{ +0x020c    } | .ProfileInterval
        _m127 int64_t  allocated_non_paged_size;                                    //{ +0x0210    } | .AllocatedNonPagedSize
        _m128 int64_t  freed_non_paged_size;                                        //{ +0x0218    } | .FreedNonPagedSize
        _m129 int64_t  allocated_paged_size;                                        //{ +0x0220    } | .AllocatedPagedSize
        _m130 int64_t  freed_paged_size;                                            //{ +0x0228    } | .FreedPagedSize
        _m131 uint32_t maximum_increment;                                           //{ +0x0230    } | .MaximumIncrement
        _m132 uint32_t processor_count;                                             //{ +0x0234    } | .ProcessorCount
                                                                                  
        SDK_MAGIC_PROPERTIES( "_ETW_COVERAGE_SAMPLER_PERF_STATS.$", 0x1c0, true, 0xa6c5926e77dd2323 );                                                           
        SDK_DYNAMIC_SIZE( coverage_sampler_perf_stats_t );                                                           
    };                                                                            
};
#include "magic/coverage_sampler_perf_stats_t.end.hpp"
