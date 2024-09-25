#pragma once
#include <sdkgen/support_library.hpp>
#include "kdpc_t.hpp"
#include "kgate_t.hpp"
#include "ktimer_t.hpp"
#include "kdpc_data_t.hpp"
#include "kprcbflag_t.hpp"
#include "kaffinity_ex_t.hpp"
#include "ktimer_table_t.hpp"
#include "slist_header_t.hpp"
#include "../rtl/rb_tree_t.hpp"
#include "synch_counters_t.hpp"
#include "request_mailbox_t.hpp"
#include "cache_descriptor_t.hpp"
#include "kprocessor_state_t.hpp"
#include "kspin_lock_queue_t.hpp"
#include "single_list_entry_t.hpp"
#include "kclock_timer_state_t.hpp"
#include "klock_queue_handle_t.hpp"
#include "kcore_control_block_t.hpp"
#include "kshared_ready_queue_t.hpp"
#include "../pp/lookaside_list_t.hpp"
#include "kentropy_timing_state_t.hpp"
#include "machine_check_context_t.hpp"
#include "processor_power_state_t.hpp"
#include "general_lookaside_pool_t.hpp"
#include "kstatic_affinity_block_t.hpp"
#include "ktimer_expiration_trace_t.hpp"
#include "filesystem_disk_counters_t.hpp"
#include "../iop/irp_stack_profiler_t.hpp"
#include "ksecure_fault_information_t.hpp"
#include "ksoftware_interrupt_batch_t.hpp"

namespace rtl { struct hash_table_t; }

#include "magic/kprcb_t.start.hpp"
namespace nt
{
    struct knode_t;
    struct kprcb_t;
    struct kthread_t;
    struct xsave_area_t;
    union kpriority_state_t;
    struct xsave_area_header_t;
    struct kscheduler_subnode_t;
    struct kprcb_tracepoint_log_t;
    struct processor_profile_control_area_t;
    struct ksingle_dpc_soft_timeout_event_info_t;

    // [struct _KPRCB]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct kprcb_t                                                                                                  
    {                                                                                                               
        struct u0_stibp_pairing_trace_t                                                                             
        {                                                                                                           
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                           
            //                                                                                                      
            _o88 uint32_t                update_cycle;                                                                //{ +0x0000    +0x0000    +0x0000    } | .UpdateCycle
            _o89 int16_t                 pair_local;                                                                  //{ +0x0004    +0x0004    +0x0004    } | .PairLocal
            _o90 uint8_t                 pair_local_low;                                                              //{ +0x0004    +0x0004    +0x0004    } | .PairLocalLow
            _o91 uint1_t                 pair_local_force_stibp;                                                      //{ +0x0005@0  +0x0005@0  +0x0005@0  } | .PairLocalForceStibp
            _o92 uint1_t                 frozen;                                                                      //{ +0x0005@5  +0x0005@5  +0x0005@5  } | .Frozen
            _o93 uint1_t                 force_untrusted;                                                             //{ +0x0005@6  +0x0005@6  +0x0005@6  } | .ForceUntrusted
            _o94 uint1_t                 synch_ipi;                                                                   //{ +0x0005@7  +0x0005@7  +0x0005@7  } | .SynchIpi
            _o95 int16_t                 pair_remote;                                                                 //{ +0x0006    +0x0006    +0x0006    } | .PairRemote
            _o96 uint8_t                 pair_remote_low;                                                             //{ +0x0006    +0x0006    +0x0006    } | .PairRemoteLow
            _o97 sdk::array<uint8_t, 24> trace;                                                                       //{ +0x0008    +0x0008    +0x0008    } | .Trace
            _o98 uint64_t                local_domain;                                                                //{ +0x0020    +0x0020    +0x0020    } | .LocalDomain
            _o99 uint64_t                remote_domain;                                                               //{ +0x0028    +0x0028    +0x0028    } | .RemoteDomain
            _p00 struct nt::kthread_t*   thread;                                                                      //{ +0x0030    +0x0030    +0x0030    } | .Thread
                                                                                                                    
            SDK_MAGIC_PROPERTIES( "_KPRCB.StibpPairingTrace.$", 0x38, true, 0x348f9d8638c7f0 );                                                                           
            SDK_FIXED_SIZE( u0_stibp_pairing_trace_t, 0x38 );                                                                           
        };                                                                                                          
                                                                                                                    
        using priority_state_t =                     sdk::variant<char*, union nt::kpriority_state_t*>;                                                    
        using pp_nx_paged_lookaside_list_t =         sdk::array<struct nt::general_lookaside_pool_t, 32>;                                                    
        using ppn_paged_lookaside_list_t =           sdk::array<struct nt::general_lookaside_pool_t, 32>;                                                    
        using pp_paged_lookaside_list_t =            sdk::array<struct nt::general_lookaside_pool_t, 32>;                                                    
        using local_shared_ready_queue_t =           sdk::variant<struct nt::kshared_ready_queue_t, struct nt::kshared_ready_queue_t*>;                                                    
        using timer_expiration_trace_t =             sdk::array<struct nt::ktimer_expiration_trace_t, 16>;                                                    
        using current_dpc_routine_t =                sdk::function<void(struct nt::kdpc_t*, void*, void*, void*)>*;                                                    
        using mcheck_context_t =                     sdk::array<struct nt::machine_check_context_t, 2>;                                                    
        using single_dpc_soft_timeout_event_info_t = struct nt::ksingle_dpc_soft_timeout_event_info_t*;                                                    
                                                                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                    
        //                                                                                                          
        _m000 uint32_t                                          mx_csr;                                               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MxCsr
        _m001 uint8_t                                           legacy_number;                                        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .LegacyNumber
        _m002 uint8_t                                           reserved_must_be_zero;                                //{ +0x0005    +0x0005    +0x0005    +0x0005    } | .ReservedMustBeZero
        _m003 uint8_t                                           interrupt_request;                                    //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .InterruptRequest
        _m004 uint8_t                                           idle_halt;                                            //{ +0x0007    +0x0007    +0x0007    +0x0007    } | .IdleHalt
        _m005 struct nt::kthread_t*                             current_thread;                                       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CurrentThread
        _m006 struct nt::kthread_t*                             next_thread;                                          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .NextThread
        _m007 struct nt::kthread_t*                             idle_thread;                                          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .IdleThread
        _m008 uint8_t                                           nesting_level;                                        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .NestingLevel
        _m009 uint8_t                                           clock_owner;                                          //{ +0x0021    +0x0021    +0x0021    +0x0021    } | .ClockOwner
        _m010 uint8_t                                           pending_tick_flags;                                   //{ +0x0022    +0x0022    +0x0022    +0x0022    } | .PendingTickFlags
        _m011 uint1_t                                           pending_tick;                                         //{ +0x0022@0  +0x0022@0  +0x0022@0  +0x0022@0  } | .PendingTick
        _m012 uint1_t                                           pending_backup_tick;                                  //{ +0x0022@1  +0x0022@1  +0x0022@1  +0x0022@1  } | .PendingBackupTick
        _m013 uint8_t                                           idle_state;                                           //{ +0x0023    +0x0023    +0x0023    +0x0023    } | .IdleState
        _m014 uint32_t                                          number;                                               //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .Number
        _m015 uint64_t                                          rsp_base;                                             //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .RspBase
        _m016 uint64_t                                          prcb_lock;                                            //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .PrcbLock
        _m017 priority_state_t                                  priority_state;                                       //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .PriorityState
        _m018 char                                              cpu_type;                                             //{ +0x05f0    +0x0040    +0x0040    +0x0040    } | .CpuType
        _m019 char                                              cpu_id;                                               //{ +0x05f1    +0x0041    +0x0041    +0x0041    } | .CpuID
        _m020 uint16_t                                          cpu_step;                                             //{ +0x05f2    +0x0042    +0x0042    +0x0042    } | .CpuStep
        _m021 uint8_t                                           cpu_stepping;                                         //{ +0x05f2    +0x0042    +0x0042    +0x0042    } | .CpuStepping
        _m022 uint8_t                                           cpu_model;                                            //{ +0x05f3    +0x0043    +0x0043    +0x0043    } | .CpuModel
        _m023 uint32_t                                          m_hz;                                                 //{ +0x05f4    +0x0044    +0x0044    +0x0044    } | .MHz
        _m024 sdk::array<uint64_t, 8>                           hal_reserved;                                         //{ +0x05f8    +0x0048    +0x0048    +0x0048    } | .HalReserved
        _m025 uint16_t                                          minor_version;                                        //{ +0x0638    +0x0088    +0x0088    +0x0088    } | .MinorVersion
        _m026 uint16_t                                          major_version;                                        //{ +0x063a    +0x008a    +0x008a    +0x008a    } | .MajorVersion
        _m027 uint8_t                                           build_type;                                           //{ +0x063c    +0x008c    +0x008c    +0x008c    } | .BuildType
        _m028 uint8_t                                           cpu_vendor;                                           //{ +0x063d    +0x008d    +0x008d    +0x008d    } | .CpuVendor
        _m029 varuint_t                                         cores_per_physical_processor;                         //{ +0x063e    +0x008e    +0x00a0    +0x008e    } | .CoresPerPhysicalProcessor
        _m030 varuint_t                                         logical_processors_per_core;                          //{ +0x063f    +0x008f    +0x00a4    +0x008f    } | .LogicalProcessorsPerCore
        _m031 uint64_t                                          group_set_member;                                     //{ +0x0648    +0x00c8    +0x00c8    +0x00c8    } | .GroupSetMember
        _m032 uint8_t                                           group;                                                //{ +0x0650    +0x00d0    +0x00d0    +0x00d0    } | .Group
        _m033 uint8_t                                           group_index;                                          //{ +0x0651    +0x00d1    +0x00d1    +0x00d1    } | .GroupIndex
        _m034 uint32_t                                          initial_apic_id;                                      //{ +0x0654    +0x00d4    +0x00d4    +0x00d4    } | .InitialApicId
        _m035 uint32_t                                          scb_offset;                                           //{ +0x0658    +0x00d8    +0x00d8    +0x00d8    } | .ScbOffset
        _m036 uint32_t                                          apic_mask;                                            //{ +0x065c    +0x00dc    +0x00dc    +0x00dc    } | .ApicMask
        _m037 void*                                             acpi_reserved;                                        //{ +0x0660    +0x00e0    +0x00e0    +0x00e0    } | .AcpiReserved
        _m038 uint32_t                                          c_flush_size;                                         //{ +0x0668    +0x00e8    +0x00e8    +0x00e8    } | .CFlushSize
        _m039 uint64_t                                          trapped_security_domain;                              //{ +0x2d30    +0x00f0    +0x00f0    +0x00f0    } | .TrappedSecurityDomain
        _m040 uint8_t                                           bpb_state;                                            //{ +0x2d38    +0x00f8    +0x00f8    +0x00f8    } | .BpbState
        _m041 struct nt::kprocessor_state_t                     processor_state;                                      //{ +0x0040    +0x0100    +0x0100    +0x0100    } | .ProcessorState
        _m042 sdk::array<struct nt::kspin_lock_queue_t, 17>     lock_queue;                                           //{ +0x0670    +0x06f0    +0x06f0    +0x06f0    } | .LockQueue
        _m043 sdk::array<struct pp::lookaside_list_t, 16>       pp_lookaside_list;                                    //{ +0x0780    +0x0800    +0x0800    +0x0800    } | .PPLookasideList
        _m044 pp_nx_paged_lookaside_list_t                      pp_nx_paged_lookaside_list;                           //{ +0x0880    +0x0900    +0x0900    +0x0900    } | .PPNxPagedLookasideList
        _m045 ppn_paged_lookaside_list_t                        ppn_paged_lookaside_list;                             //{ +0x1480    +0x1500    +0x1500    +0x1500    } | .PPNPagedLookasideList
        _m046 pp_paged_lookaside_list_t                         pp_paged_lookaside_list;                              //{ +0x2080    +0x2100    +0x2100    +0x2100    } | .PPPagedLookasideList
        _m047 struct nt::single_list_entry_t                    deferred_ready_list_head;                             //{ +0x2c88    +0x2d08    +0x2d08    +0x2d08    } | .DeferredReadyListHead
        _m048 volatile int32_t                                  mm_page_fault_count;                                  //{ +0x2c90    +0x2d10    +0x2d10    +0x2d10    } | .MmPageFaultCount
        _m049 volatile int32_t                                  mm_copy_on_write_count;                               //{ +0x2c94    +0x2d14    +0x2d14    +0x2d14    } | .MmCopyOnWriteCount
        _m050 volatile int32_t                                  mm_transition_count;                                  //{ +0x2c98    +0x2d18    +0x2d18    +0x2d18    } | .MmTransitionCount
        _m051 volatile int32_t                                  mm_demand_zero_count;                                 //{ +0x2c9c    +0x2d1c    +0x2d1c    +0x2d1c    } | .MmDemandZeroCount
        _m052 volatile int32_t                                  mm_page_read_count;                                   //{ +0x2ca0    +0x2d20    +0x2d20    +0x2d20    } | .MmPageReadCount
        _m053 volatile int32_t                                  mm_page_read_io_count;                                //{ +0x2ca4    +0x2d24    +0x2d24    +0x2d24    } | .MmPageReadIoCount
        _m054 volatile int32_t                                  mm_dirty_pages_write_count;                           //{ +0x2ca8    +0x2d28    +0x2d28    +0x2d28    } | .MmDirtyPagesWriteCount
        _m055 volatile int32_t                                  mm_dirty_write_io_count;                              //{ +0x2cac    +0x2d2c    +0x2d2c    +0x2d2c    } | .MmDirtyWriteIoCount
        _m056 volatile int32_t                                  mm_mapped_pages_write_count;                          //{ +0x2cb0    +0x2d30    +0x2d30    +0x2d30    } | .MmMappedPagesWriteCount
        _m057 volatile int32_t                                  mm_mapped_write_io_count;                             //{ +0x2cb4    +0x2d34    +0x2d34    +0x2d34    } | .MmMappedWriteIoCount
        _m058 uint32_t                                          ke_system_calls;                                      //{ +0x2cb8    +0x2d38    +0x2d38    +0x2d38    } | .KeSystemCalls
        _m059 uint32_t                                          ke_context_switches;                                  //{ +0x2cbc    +0x2d3c    +0x2d3c    +0x2d3c    } | .KeContextSwitches
        _m060 uint32_t                                          cc_fast_read_no_wait;                                 //{ +0x2cc4    +0x2d44    +0x2d44    +0x2d44    } | .CcFastReadNoWait
        _m061 uint32_t                                          cc_fast_read_wait;                                    //{ +0x2cc8    +0x2d48    +0x2d48    +0x2d48    } | .CcFastReadWait
        _m062 uint32_t                                          cc_fast_read_not_possible;                            //{ +0x2ccc    +0x2d4c    +0x2d4c    +0x2d4c    } | .CcFastReadNotPossible
        _m063 uint32_t                                          cc_copy_read_no_wait;                                 //{ +0x2cd0    +0x2d50    +0x2d50    +0x2d50    } | .CcCopyReadNoWait
        _m064 uint32_t                                          cc_copy_read_wait;                                    //{ +0x2cd4    +0x2d54    +0x2d54    +0x2d54    } | .CcCopyReadWait
        _m065 uint32_t                                          cc_copy_read_no_wait_miss;                            //{ +0x2cd8    +0x2d58    +0x2d58    +0x2d58    } | .CcCopyReadNoWaitMiss
        _m066 volatile int32_t                                  io_read_operation_count;                              //{ +0x2cdc    +0x2d5c    +0x2d5c    +0x2d5c    } | .IoReadOperationCount
        _m067 volatile int32_t                                  io_write_operation_count;                             //{ +0x2ce0    +0x2d60    +0x2d60    +0x2d60    } | .IoWriteOperationCount
        _m068 volatile int32_t                                  io_other_operation_count;                             //{ +0x2ce4    +0x2d64    +0x2d64    +0x2d64    } | .IoOtherOperationCount
        _m069 int64_t                                           io_read_transfer_count;                               //{ +0x2ce8    +0x2d68    +0x2d68    +0x2d68    } | .IoReadTransferCount
        _m070 int64_t                                           io_write_transfer_count;                              //{ +0x2cf0    +0x2d70    +0x2d70    +0x2d70    } | .IoWriteTransferCount
        _m071 int64_t                                           io_other_transfer_count;                              //{ +0x2cf8    +0x2d78    +0x2d78    +0x2d78    } | .IoOtherTransferCount
        _m072 volatile int32_t                                  packet_barrier;                                       //{ +0x2d00    +0x2d80    +0x2d80    +0x2d80    } | .PacketBarrier
        _m073 volatile int32_t                                  target_count;                                         //{ +0x2d04    +0x2d84    +0x2d84    +0x2d84    } | .TargetCount
        _m074 volatile uint32_t                                 ipi_frozen;                                           //{ +0x2d08    +0x2d88    +0x2d88    +0x2d88    } | .IpiFrozen
        _m075 void*                                             isr_dpc_stats;                                        //{ +0x2d10    +0x2d90    +0x2d90    +0x2d90    } | .IsrDpcStats
        _m076 uint32_t                                          device_interrupts;                                    //{ +0x2d18    +0x2d98    +0x2d98    +0x2d98    } | .DeviceInterrupts
        _m077 int32_t                                           lookaside_irp_float;                                  //{ +0x2d1c    +0x2d9c    +0x2d9c    +0x2d9c    } | .LookasideIrpFloat
        _m078 uint32_t                                          interrupt_last_count;                                 //{ +0x2d20    +0x2da0    +0x2da0    +0x2da0    } | .InterruptLastCount
        _m079 uint32_t                                          interrupt_rate;                                       //{ +0x2d24    +0x2da4    +0x2da4    +0x2da4    } | .InterruptRate
        _m080 union nt::slist_header_t                          interrupt_object_pool;                                //{ +0x5fe0    +0x3080    +0x3300    +0x3080    } | .InterruptObjectPool
        _m081 sdk::array<struct nt::kdpc_data_t, 2>             dpc_data;                                             //{ +0x2d80    +0x30c0    +0x3340    +0x30c0    } | .DpcData
        _m082 void*                                             dpc_stack;                                            //{ +0x2dd0    +0x3110    +0x33a0    +0x3110    } | .DpcStack
        _m083 int32_t                                           maximum_dpc_queue_depth;                              //{ +0x2dd8    +0x3118    +0x33a8    +0x3118    } | .MaximumDpcQueueDepth
        _m084 uint32_t                                          dpc_request_rate;                                     //{ +0x2ddc    +0x311c    +0x33ac    +0x311c    } | .DpcRequestRate
        _m085 uint32_t                                          minimum_dpc_rate;                                     //{ +0x2de0    +0x3120    +0x33b0    +0x3120    } | .MinimumDpcRate
        _m086 uint32_t                                          dpc_last_count;                                       //{ +0x2de4    +0x3124    +0x33b4    +0x3124    } | .DpcLastCount
        _m087 uint8_t                                           thread_dpc_enable;                                    //{ +0x2de8    +0x3128    +0x33b8    +0x3128    } | .ThreadDpcEnable
        _m088 volatile uint8_t                                  quantum_end;                                          //{ +0x2de9    +0x3129    +0x33b9    +0x3129    } | .QuantumEnd
        _m089 volatile uint8_t                                  dpc_routine_active;                                   //{ +0x2dea    +0x312a    +0x33ba    +0x312a    } | .DpcRoutineActive
        _m090 volatile uint8_t                                  idle_schedule;                                        //{ +0x2deb    +0x312b    +0x33bb    +0x312b    } | .IdleSchedule
        _m091 volatile int32_t                                  dpc_request_summary;                                  //{ +0x2dec    +0x312c    +0x33bc    +0x312c    } | .DpcRequestSummary
        _m092 sdk::array<int16_t, 2>                            dpc_request_slot;                                     //{ +0x2dec    +0x312c    +0x33bc    +0x312c    } | .DpcRequestSlot
        _m093 int16_t                                           normal_dpc_state;                                     //{ +0x2dec    +0x312c    +0x33bc    +0x312c    } | .NormalDpcState
        _m094 int16_t                                           thread_dpc_state;                                     //{ +0x2dee    +0x312e    +0x33be    +0x312e    } | .ThreadDpcState
        _m095 volatile uint1_t                                  dpc_normal_processing_active;                         //{ +0x2dec@0  +0x312c@0  +0x33bc@0  +0x312c@0  } | .DpcNormalProcessingActive
        _m096 volatile uint1_t                                  dpc_normal_processing_requested;                      //{ +0x2dec@1  +0x312c@1  +0x33bc@1  +0x312c@1  } | .DpcNormalProcessingRequested
        _m097 volatile uint1_t                                  dpc_normal_thread_signal;                             //{ +0x2dec@2  +0x312c@2  +0x33bc@2  +0x312c@2  } | .DpcNormalThreadSignal
        _m098 volatile uint1_t                                  dpc_normal_timer_expiration;                          //{ +0x2dec@3  +0x312c@3  +0x33bc@3  +0x312c@3  } | .DpcNormalTimerExpiration
        _m099 volatile uint1_t                                  dpc_normal_dpc_present;                               //{ +0x2dec@4  +0x312c@4  +0x33bc@4  +0x312c@4  } | .DpcNormalDpcPresent
        _m100 volatile uint1_t                                  dpc_normal_local_interrupt;                           //{ +0x2dec@5  +0x312c@5  +0x33bc@5  +0x312c@5  } | .DpcNormalLocalInterrupt
        _m101 varuint_t                                         dpc_normal_spare;                                     //{ +0x2dec@6  +0x312c@6  +0x33bc@8  +0x312c@6  } | .DpcNormalSpare
        _m102 volatile uint1_t                                  dpc_thread_active;                                    //{ +0x2dec@16 +0x312c@16 +0x33bc@16 +0x312c@16 } | .DpcThreadActive
        _m103 volatile uint1_t                                  dpc_thread_requested;                                 //{ +0x2dec@17 +0x312c@17 +0x33bc@17 +0x312c@17 } | .DpcThreadRequested
        _m104 volatile uint14_t                                 dpc_thread_spare;                                     //{ +0x2dec@18 +0x312c@18 +0x33bc@18 +0x312c@18 } | .DpcThreadSpare
        _m105 uint32_t                                          last_tick;                                            //{ +0x2df4    +0x3134    +0x33c0    +0x3134    } | .LastTick
        _m106 uint32_t                                          clock_interrupts;                                     //{ +0x2df8    +0x3138    +0x33c4    +0x3138    } | .ClockInterrupts
        _m107 uint32_t                                          ready_scan_tick;                                      //{ +0x2dfc    +0x313c    +0x33c8    +0x313c    } | .ReadyScanTick
        _m108 sdk::array<void*, 256>                            interrupt_object;                                     //{ +0x2e00    +0x3140    +0x3400    +0x3140    } | .InterruptObject
        _m109 struct nt::ktimer_table_t                         timer_table;                                          //{ +0x3600    +0x3940    +0x3c00    +0x3940    } | .TimerTable
        _m110 struct nt::kgate_t                                dpc_gate;                                             //{ +0x5800    +0x7b80    +0x7e40    +0x7b80    } | .DpcGate
        _m111 struct nt::kdpc_t                                 call_dpc;                                             //{ +0x5820    +0x7ba0    +0x7e60    +0x7ba0    } | .CallDpc
        _m112 int32_t                                           clock_keep_alive;                                     //{ +0x5860    +0x7be0    +0x7ea0    +0x7be0    } | .ClockKeepAlive
        _m113 varuint_t                                         nmi_active;                                           //{ +0x5866    +0x7be6    +0x7ea6    +0x7be6    } | .NmiActive
        _m114 int32_t                                           dpc_watchdog_count;                                   //{ +0x586c    +0x7bec    +0x7eac    +0x7bec    } | .DpcWatchdogCount
        _m115 volatile int32_t                                  ke_spin_lock_ordering;                                //{ +0x5870    +0x7bf0    +0x7eb0    +0x7bf0    } | .KeSpinLockOrdering
        _m116 void*                                             cached_ptes;                                          //{ +0x5878    +0x7bf8    +0x7eb8    +0x7bf8    } | .CachedPtes
        _m117 nt::list_entry_t                                  wait_list_head;                                       //{ +0x5880    +0x7c00    +0x7ec0    +0x7c00    } | .WaitListHead
        _m118 uint64_t                                          wait_lock;                                            //{ +0x5890    +0x7c10    +0x7ed0    +0x7c10    } | .WaitLock
        _m119 uint32_t                                          ready_summary;                                        //{ +0x5898    +0x7c18    +0x7ed8    +0x7c18    } | .ReadySummary
        _m120 int32_t                                           affinitized_selection_mask;                           //{ +0x589c    +0x7c1c    +0x7edc    +0x7c1c    } | .AffinitizedSelectionMask
        _m121 uint32_t                                          queue_index;                                          //{ +0x58a0    +0x7c20    +0x7ee0    +0x7c20    } | .QueueIndex
        _m122 struct nt::kdpc_t                                 timer_expiration_dpc;                                 //{ +0x58b0    +0x7c30    +0x7ef0    +0x7c30    } | .TimerExpirationDpc
        _m123 struct rtl::rb_tree_t                             scb_queue;                                            //{ +0x58f0    +0x7c70    +0x7f30    +0x7c70    } | .ScbQueue
        _m124 sdk::array<nt::list_entry_t, 32>                  dispatcher_ready_list_head;                           //{ +0x5900    +0x7c80    +0x7f40    +0x7c80    } | .DispatcherReadyListHead
        _m125 uint32_t                                          interrupt_count;                                      //{ +0x5b00    +0x7e80    +0x8140    +0x7e80    } | .InterruptCount
        _m126 uint32_t                                          kernel_time;                                          //{ +0x5b04    +0x7e84    +0x8144    +0x7e84    } | .KernelTime
        _m127 uint32_t                                          user_time;                                            //{ +0x5b08    +0x7e88    +0x8148    +0x7e88    } | .UserTime
        _m128 uint32_t                                          dpc_time;                                             //{ +0x5b0c    +0x7e8c    +0x814c    +0x7e8c    } | .DpcTime
        _m129 uint32_t                                          interrupt_time;                                       //{ +0x5b10    +0x7e90    +0x8150    +0x7e90    } | .InterruptTime
        _m130 uint32_t                                          adjust_dpc_threshold;                                 //{ +0x5b14    +0x7e94    +0x8154    +0x7e94    } | .AdjustDpcThreshold
        _m131 uint8_t                                           debugger_saved_irql;                                  //{ +0x5b18    +0x7e98    +0x8158    +0x7e98    } | .DebuggerSavedIRQL
        _m132 uint8_t                                           group_scheduling_over_quota;                          //{ +0x5b19    +0x7e99    +0x8159    +0x7e99    } | .GroupSchedulingOverQuota
        _m133 volatile uint8_t                                  deep_sleep;                                           //{ +0x5b1a    +0x7e9a    +0x815a    +0x7e9a    } | .DeepSleep
        _m134 uint32_t                                          dpc_time_count;                                       //{ +0x5b20    +0x7e9c    +0x815c    +0x7e9c    } | .DpcTimeCount
        _m135 uint32_t                                          periodic_count;                                       //{ +0x5b28    +0x7ea4    +0x8164    +0x7ea4    } | .PeriodicCount
        _m136 uint32_t                                          periodic_bias;                                        //{ +0x5b2c    +0x7ea8    +0x8168    +0x7ea8    } | .PeriodicBias
        _m137 uint32_t                                          available_time;                                       //{ +0x5b30    +0x7eac    +0x816c    +0x7eac    } | .AvailableTime
        _m138 uint32_t                                          ke_exception_dispatch_count;                          //{ +0x5b34    +0x7eb0    +0x8170    +0x7eb0    } | .KeExceptionDispatchCount
        _m139 uint64_t                                          start_cycles;                                         //{ +0x5b38    +0x7ec0    +0x8180    +0x7ec0    } | .StartCycles
        _m140 sdk::array<uint64_t, 2>                           tagged_cycles;                                        //{ +0x5b48    +0x7ed0    +0x8188    +0x7ed0    } | .TaggedCycles
        _m141 uint64_t                                          affinitized_cycles;                                   //{ +0x5b60    +0x7ee8    +0x81a8    +0x7ee8    } | .AffinitizedCycles
        _m142 varint_t                                          mm_spin_lock_ordering;                                //{ +0x5bdc    +0x7f04    +0x8270    +0x7f04    } | .MmSpinLockOrdering
        _m143 uint32_t                                          page_color;                                           //{ +0x5be0    +0x7f10    +0x8250    +0x7f10    } | .PageColor
        _m144 uint32_t                                          node_color;                                           //{ +0x5be4    +0x7f14    +0x8254    +0x7f14    } | .NodeColor
        _m145 uint32_t                                          node_shifted_color;                                   //{ +0x5be8    +0x7f18    +0x8258    +0x7f18    } | .NodeShiftedColor
        _m146 uint32_t                                          secondary_color_mask;                                 //{ +0x5bec    +0x7f1c    +0x825c    +0x7f1c    } | .SecondaryColorMask
        _m147 uint64_t                                          cycle_time;                                           //{ +0x5bf8    +0x7f38    +0x8278    +0x7f38    } | .CycleTime
        _m148 sdk::array<sdk::array<uint64_t, 2>, 4>            cycles;                                               //{ +0x5c00    +0x7f40    +0x8280    +0x7f40    } | .Cycles
        _m149 uint32_t                                          cc_fast_mdl_read_no_wait;                             //{ +0x5c80    +0x7f80    +0x82c0    +0x7f80    } | .CcFastMdlReadNoWait
        _m150 uint32_t                                          cc_fast_mdl_read_wait;                                //{ +0x5c84    +0x7f84    +0x82c4    +0x7f84    } | .CcFastMdlReadWait
        _m151 uint32_t                                          cc_fast_mdl_read_not_possible;                        //{ +0x5c88    +0x7f88    +0x82c8    +0x7f88    } | .CcFastMdlReadNotPossible
        _m152 uint32_t                                          cc_map_data_no_wait;                                  //{ +0x5c8c    +0x7f8c    +0x82cc    +0x7f8c    } | .CcMapDataNoWait
        _m153 uint32_t                                          cc_map_data_wait;                                     //{ +0x5c90    +0x7f90    +0x82d0    +0x7f90    } | .CcMapDataWait
        _m154 uint32_t                                          cc_pin_mapped_data_count;                             //{ +0x5c94    +0x7f94    +0x82d4    +0x7f94    } | .CcPinMappedDataCount
        _m155 uint32_t                                          cc_pin_read_no_wait;                                  //{ +0x5c98    +0x7f98    +0x82d8    +0x7f98    } | .CcPinReadNoWait
        _m156 uint32_t                                          cc_pin_read_wait;                                     //{ +0x5c9c    +0x7f9c    +0x82dc    +0x7f9c    } | .CcPinReadWait
        _m157 uint32_t                                          cc_mdl_read_no_wait;                                  //{ +0x5ca0    +0x7fa0    +0x82e0    +0x7fa0    } | .CcMdlReadNoWait
        _m158 uint32_t                                          cc_mdl_read_wait;                                     //{ +0x5ca4    +0x7fa4    +0x82e4    +0x7fa4    } | .CcMdlReadWait
        _m159 uint32_t                                          cc_lazy_write_hot_spots;                              //{ +0x5ca8    +0x7fa8    +0x82e8    +0x7fa8    } | .CcLazyWriteHotSpots
        _m160 uint32_t                                          cc_lazy_write_ios;                                    //{ +0x5cac    +0x7fac    +0x82ec    +0x7fac    } | .CcLazyWriteIos
        _m161 uint32_t                                          cc_lazy_write_pages;                                  //{ +0x5cb0    +0x7fb0    +0x82f0    +0x7fb0    } | .CcLazyWritePages
        _m162 uint32_t                                          cc_data_flushes;                                      //{ +0x5cb4    +0x7fb4    +0x82f4    +0x7fb4    } | .CcDataFlushes
        _m163 uint32_t                                          cc_data_pages;                                        //{ +0x5cb8    +0x7fb8    +0x82f8    +0x7fb8    } | .CcDataPages
        _m164 uint32_t                                          cc_lost_delayed_writes;                               //{ +0x5cbc    +0x7fbc    +0x82fc    +0x7fbc    } | .CcLostDelayedWrites
        _m165 uint32_t                                          cc_fast_read_resource_miss;                           //{ +0x5cc0    +0x7fc0    +0x8300    +0x7fc0    } | .CcFastReadResourceMiss
        _m166 uint32_t                                          cc_copy_read_wait_miss;                               //{ +0x5cc4    +0x7fc4    +0x8304    +0x7fc4    } | .CcCopyReadWaitMiss
        _m167 uint32_t                                          cc_fast_mdl_read_resource_miss;                       //{ +0x5cc8    +0x7fc8    +0x8308    +0x7fc8    } | .CcFastMdlReadResourceMiss
        _m168 uint32_t                                          cc_map_data_no_wait_miss;                             //{ +0x5ccc    +0x7fcc    +0x830c    +0x7fcc    } | .CcMapDataNoWaitMiss
        _m169 uint32_t                                          cc_map_data_wait_miss;                                //{ +0x5cd0    +0x7fd0    +0x8310    +0x7fd0    } | .CcMapDataWaitMiss
        _m170 uint32_t                                          cc_pin_read_no_wait_miss;                             //{ +0x5cd4    +0x7fd4    +0x8314    +0x7fd4    } | .CcPinReadNoWaitMiss
        _m171 uint32_t                                          cc_pin_read_wait_miss;                                //{ +0x5cd8    +0x7fd8    +0x8318    +0x7fd8    } | .CcPinReadWaitMiss
        _m172 uint32_t                                          cc_mdl_read_no_wait_miss;                             //{ +0x5cdc    +0x7fdc    +0x831c    +0x7fdc    } | .CcMdlReadNoWaitMiss
        _m173 uint32_t                                          cc_mdl_read_wait_miss;                                //{ +0x5ce0    +0x7fe0    +0x8320    +0x7fe0    } | .CcMdlReadWaitMiss
        _m174 uint32_t                                          cc_read_ahead_ios;                                    //{ +0x5ce4    +0x7fe4    +0x8324    +0x7fe4    } | .CcReadAheadIos
        _m175 volatile int32_t                                  mm_cache_transition_count;                            //{ +0x5ce8    +0x7fe8    +0x8328    +0x7fe8    } | .MmCacheTransitionCount
        _m176 volatile int32_t                                  mm_cache_read_count;                                  //{ +0x5cec    +0x7fec    +0x832c    +0x7fec    } | .MmCacheReadCount
        _m177 volatile int32_t                                  mm_cache_io_count;                                    //{ +0x5cf0    +0x7ff0    +0x8330    +0x7ff0    } | .MmCacheIoCount
        _m178 struct nt::processor_power_state_t                power_state;                                          //{ +0x5d00    +0x8000    +0x8340    +0x8000    } | .PowerState
        _m179 nt::list_entry_t                                  scb_list;                                             //{ +0x5ed0    +0x8208    +0x8588    +0x8208    } | .ScbList
        _m180 struct nt::kdpc_t                                 dpc_watchdog_dpc;                                     //{ +0x5f00    +0x8258    +0x85d8    +0x8258    } | .DpcWatchdogDpc
        _m181 sdk::array<struct nt::cache_descriptor_t, 5>      cache;                                                //{ +0x5f80    +0x82d8    +0x8658    +0x82d8    } | .Cache
        _m182 uint32_t                                          cache_count;                                          //{ +0x5fbc    +0x8314    +0x8694    +0x8314    } | .CacheCount
        _m183 volatile uint32_t                                 cached_commit;                                        //{ +0x5fc0    +0x8318    +0x8698    +0x8318    } | .CachedCommit
        _m184 volatile uint32_t                                 cached_resident_available;                            //{ +0x5fc4    +0x831c    +0x869c    +0x831c    } | .CachedResidentAvailable
        _m185 void*                                             whea_info;                                            //{ +0x5fd0    +0x8320    +0x86a0    +0x8320    } | .WheaInfo
        _m186 void*                                             etw_support;                                          //{ +0x5fd8    +0x8328    +0x86a8    +0x8328    } | .EtwSupport
        _m187 void*                                             ex_sa_page_array;                                     //{ +0x68a8    +0x8330    +0x86b0    +0x8330    } | .ExSaPageArray
        _m188 uint32_t                                          ke_alignment_fixup_count;                             //{ +0x5efc    +0x8338    +0x86b8    +0x8338    } | .KeAlignmentFixupCount
        _m189 union nt::slist_header_t                          hypercall_page_list;                                  //{ +0x5ff0    +0x8340    +0x86c0    +0x8340    } | .HypercallPageList
        _m190 uint64_t*                                         statistics_page;                                      //{ +0x6010    +0x8350    +0x86d0    +0x8350    } | .StatisticsPage
        _m191 uint64_t                                          generation_target;                                    //{ +0x5b58    +0x8358    +0x86d8    +0x8358    } | .GenerationTarget
        _m192 void*                                             hypercall_cached_pages;                               //{ +0x6000    +0x8380    +0x8700    +0x8380    } | .HypercallCachedPages
        _m193 void*                                             virtual_apic_assist;                                  //{ +0x6008    +0x8388    +0x8708    +0x8388    } | .VirtualApicAssist
        _m194 struct nt::kaffinity_ex_t                         package_processor_set;                                //{ +0x6018    +0x8390    +0x8710    +0x8390    } | .PackageProcessorSet
        _m195 uint64_t                                          shared_ready_queue_mask;                              //{ +0x60c0    +0x8440    +0x8840    +0x8440    } | .SharedReadyQueueMask
        _m196 struct nt::kshared_ready_queue_t*                 shared_ready_queue;                                   //{ +0x60c8    +0x8448    +0x8848    +0x8448    } | .SharedReadyQueue
        _m197 uint32_t                                          shared_queue_scan_owner;                              //{ +0x60d0    +0x8450    +0x8850    +0x8450    } | .SharedQueueScanOwner
        _m198 uint32_t                                          scan_sibling_index;                                   //{ +0x60d4    +0x8454    +0x8854    +0x8454    } | .ScanSiblingIndex
        _m199 uint64_t                                          core_processor_set;                                   //{ +0x60d8    +0x8458    +0x8860    +0x8458    } | .CoreProcessorSet
        _m200 uint64_t                                          scan_sibling_mask;                                    //{ +0x60e0    +0x8460    +0x8868    +0x8460    } | .ScanSiblingMask
        _m201 uint64_t                                          llc_mask;                                             //{ +0x60e8    +0x8468    +0x8870    +0x8468    } | .LLCMask
        _m202 struct nt::processor_profile_control_area_t*      processor_profile_control_area;                       //{ +0x6118    +0x8498    +0x8898    +0x8498    } | .ProcessorProfileControlArea
        _m203 void*                                             profile_event_index_address;                          //{ +0x6120    +0x84a0    +0x88a0    +0x84a0    } | .ProfileEventIndexAddress
        _m204 void**                                            dpc_watchdog_profile;                                 //{ +0x6128    +0x84a8    +0x88a8    +0x84a8    } | .DpcWatchdogProfile
        _m205 void**                                            dpc_watchdog_profile_current_empty_capture;           //{ +0x6130    +0x84b0    +0x88b0    +0x84b0    } | .DpcWatchdogProfileCurrentEmptyCapture
        _m206 struct nt::synch_counters_t                       synch_counters;                                       //{ +0x6180    +0x84c0    +0x88c0    +0x84c0    } | .SynchCounters
        _m207 struct nt::filesystem_disk_counters_t             fs_counters;                                          //{ +0x6248    +0x8580    +0x8980    +0x8580    } | .FsCounters
        _m208 sdk::array<uint8_t, 13>                           vendor_string;                                        //{ +0x6258    +0x8590    +0x8990    +0x8590    } | .VendorString
        _m209 uint64_t                                          feature_bits;                                         //{ +0x6268    +0x85a0    +0x89a0    +0x85a0    } | .FeatureBits
        _m210 int64_t                                           update_signature;                                     //{ +0x6278    +0x85a8    +0x89a8    +0x85a8    } | .UpdateSignature
        _m211 uint64_t                                          pte_bit_cache;                                        //{ +0x6238    +0x85b0    +0x89b0    +0x85b0    } | .PteBitCache
        _m212 uint32_t                                          pte_bit_offset;                                       //{ +0x6240    +0x85b8    +0x89b8    +0x85b8    } | .PteBitOffset
        _m213 nt::context*                                      context;                                              //{ +0x6280    +0x85c0    +0x89c0    +0x85c0    } | .Context
        _m214 uint32_t                                          context_flags_init;                                   //{ +0x6288    +0x85c8    +0x89c8    +0x85c8    } | .ContextFlagsInit
        _m215 struct nt::xsave_area_t*                          extended_state;                                       //{ +0x6290    +0x85d0    +0x89d0    +0x85d0    } | .ExtendedState
        _m216 void*                                             isr_stack;                                            //{ +0x6298    +0x85d8    +0x89d8    +0x85d8    } | .IsrStack
        _m217 struct nt::kentropy_timing_state_t                entropy_timing_state;                                 //{ +0x62a0    +0x85e0    +0x89e0    +0x85e0    } | .EntropyTimingState
        _m218 struct nt::single_list_entry_t                    ab_self_io_boosts_list;                               //{ +0x6430    +0x8770    +0x8b70    +0x8770    } | .AbSelfIoBoostsList
        _m219 struct nt::single_list_entry_t                    ab_propagate_boosts_list;                             //{ +0x6438    +0x8778    +0x8b78    +0x8778    } | .AbPropagateBoostsList
        _m220 struct nt::kdpc_t                                 ab_dpc;                                               //{ +0x6440    +0x8780    +0x8b80    +0x8780    } | .AbDpc
        _m221 struct iop::irp_stack_profiler_t                  io_irp_stack_profiler_current;                        //{ +0x6480    +0x87c0    +0x8bc0    +0x87c0    } | .IoIrpStackProfilerCurrent
        _m222 struct iop::irp_stack_profiler_t                  io_irp_stack_profiler_previous;                       //{ +0x64d4    +0x8814    +0x8c14    +0x8814    } | .IoIrpStackProfilerPrevious
        _m223 local_shared_ready_queue_t                        local_shared_ready_queue;                             //{ +0x6540    +0x8880    +0x8c80    +0x8880    } | .LocalSharedReadyQueue
        _m224 uint32_t                                          timer_expiration_trace_count;                         //{ +0x68a0    +0x8b00    +0x8cc0    +0x8b00    } | .TimerExpirationTraceCount
        _m225 timer_expiration_trace_t                          timer_expiration_trace;                               //{ +0x67a0    +0x8b08    +0x8cc8    +0x8b08    } | .TimerExpirationTrace
        _m226 struct nt::request_mailbox_t*                     mailbox;                                              //{ +0x68c0    +0x8c40    +0x9340    +0x8c40    } | .Mailbox
        _m227 uint64_t                                          kernel_directory_table_base;                          //{ +0x6e80    +0x8e80    +0x9e80    +0x8e80    } | .KernelDirectoryTableBase
        _m228 uint64_t                                          rsp_base_shadow;                                      //{ +0x6e88    +0x8e88    +0x9e88    +0x8e88    } | .RspBaseShadow
        _m229 uint64_t                                          user_rsp_shadow;                                      //{ +0x6e90    +0x8e90    +0x9e90    +0x8e90    } | .UserRspShadow
        _m230 uint32_t                                          shadow_flags;                                         //{ +0x6e98    +0x8e98    +0x9e98    +0x8e98    } | .ShadowFlags
        _m231 sdk::array<struct nt::request_mailbox_t, 1>       request_mailbox;                                      //{ +0x7e80    +0xaec0    +0xbec0    +0xaec0    } | .RequestMailbox
                                                                                                                    
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                           
        //                                                                                                          
        _m232 uint64_t                                          tsc_frequency;                                        //{ +0x0090    +0x0090    +0x0090    } | .TscFrequency
        _m233 union nt::kprcbflag_t                             prcb_flags;                                           //{ +0x00ec    +0x00ec    +0x00ec    } | .PrcbFlags
        _m234 uint1_t                                           bpb_cpu_idle;                                         //{ +0x00f8@0  +0x00f8@0  +0x00f8@0  } | .BpbCpuIdle
        _m235 uint1_t                                           bpb_flush_rsb_on_trap;                                //{ +0x00f8@1  +0x00f8@1  +0x00f8@1  } | .BpbFlushRsbOnTrap
        _m236 uint1_t                                           bpb_ibpb_on_return;                                   //{ +0x00f8@2  +0x00f8@2  +0x00f8@2  } | .BpbIbpbOnReturn
        _m237 uint1_t                                           bpb_ibpb_on_trap;                                     //{ +0x00f8@3  +0x00f8@3  +0x00f8@3  } | .BpbIbpbOnTrap
        _m238 uint1_t                                           bpb_ibpb_on_retpoline_exit;                           //{ +0x00f8@4  +0x00f8@4  +0x00f8@4  } | .BpbIbpbOnRetpolineExit
        _m239 uint3_t                                           bpb_state_reserved;                                   //{ +0x00f8@5  +0x00f8@5  +0x00f8@5  } | .BpbStateReserved
        _m240 uint8_t                                           bpb_features;                                         //{ +0x00f9    +0x00f9    +0x00f9    } | .BpbFeatures
        _m241 uint1_t                                           bpb_clear_on_idle;                                    //{ +0x00f9@0  +0x00f9@0  +0x00f9@0  } | .BpbClearOnIdle
        _m242 uint1_t                                           bpb_enabled;                                          //{ +0x00f9@1  +0x00f9@1  +0x00f9@1  } | .BpbEnabled
        _m243 uint1_t                                           bpb_smep;                                             //{ +0x00f9@2  +0x00f9@2  +0x00f9@2  } | .BpbSmep
        _m244 uint5_t                                           bpb_features_reserved;                                //{ +0x00f9@3  +0x00f9@3  +0x00f9@3  } | .BpbFeaturesReserved
        _m245 uint8_t                                           bpb_current_spec_ctrl;                                //{ +0x00fa    +0x00fa    +0x00fa    } | .BpbCurrentSpecCtrl
        _m246 uint8_t                                           bpb_kernel_spec_ctrl;                                 //{ +0x00fb    +0x00fb    +0x00fb    } | .BpbKernelSpecCtrl
        _m247 uint8_t                                           bpb_nmi_spec_ctrl;                                    //{ +0x00fc    +0x00fc    +0x00fc    } | .BpbNmiSpecCtrl
        _m248 uint8_t                                           bpb_user_spec_ctrl;                                   //{ +0x00fd    +0x00fd    +0x00fd    } | .BpbUserSpecCtrl
        _m249 volatile int16_t                                  pair_register;                                        //{ +0x00fe    +0x00fe    +0x00fe    } | .PairRegister
        _m250 struct nt::xsave_area_header_t*                   extended_supervisor_state;                            //{ +0x06c0    +0x06c0    +0x06c0    } | .ExtendedSupervisorState
        _m251 uint32_t                                          processor_signature;                                  //{ +0x06c8    +0x06c8    +0x06c8    } | .ProcessorSignature
        _m252 uint32_t                                          processor_flags;                                      //{ +0x06cc    +0x06cc    +0x06cc    } | .ProcessorFlags
        _m253 uint8_t                                           bpb_retpoline_exit_spec_ctrl;                         //{ +0x06d0    +0x06d0    +0x06d0    } | .BpbRetpolineExitSpecCtrl
        _m254 uint8_t                                           bpb_trapped_retpoline_exit_spec_ctrl;                 //{ +0x06d1    +0x06d1    +0x06d1    } | .BpbTrappedRetpolineExitSpecCtrl
        _m255 uint8_t                                           bpb_trapped_bpb_state;                                //{ +0x06d2    +0x06d2    +0x06d2    } | .BpbTrappedBpbState
        _m256 uint1_t                                           bpb_trapped_cpu_idle;                                 //{ +0x06d2@0  +0x06d2@0  +0x06d2@0  } | .BpbTrappedCpuIdle
        _m257 uint1_t                                           bpb_trapped_flush_rsb_on_trap;                        //{ +0x06d2@1  +0x06d2@1  +0x06d2@1  } | .BpbTrappedFlushRsbOnTrap
        _m258 uint1_t                                           bpb_trapped_ibpb_on_return;                           //{ +0x06d2@2  +0x06d2@2  +0x06d2@2  } | .BpbTrappedIbpbOnReturn
        _m259 uint1_t                                           bpb_trapped_ibpb_on_trap;                             //{ +0x06d2@3  +0x06d2@3  +0x06d2@3  } | .BpbTrappedIbpbOnTrap
        _m260 uint1_t                                           bpb_trapped_ibpb_on_retpoline_exit;                   //{ +0x06d2@4  +0x06d2@4  +0x06d2@4  } | .BpbTrappedIbpbOnRetpolineExit
        _m261 uint3_t                                           bpbtrapped_bpb_state_reserved;                        //{ +0x06d2@5  +0x06d2@5  +0x06d2@5  } | .BpbtrappedBpbStateReserved
        _m262 uint8_t                                           bpb_retpoline_state;                                  //{ +0x06d3    +0x06d3    +0x06d3    } | .BpbRetpolineState
        _m263 uint1_t                                           bpb_running_non_retpoline_code;                       //{ +0x06d3@0  +0x06d3@0  +0x06d3@0  } | .BpbRunningNonRetpolineCode
        _m264 uint1_t                                           bpb_indirect_calls_safe;                              //{ +0x06d3@1  +0x06d3@1  +0x06d3@1  } | .BpbIndirectCallsSafe
        _m265 uint1_t                                           bpb_retpoline_enabled;                                //{ +0x06d3@2  +0x06d3@2  +0x06d3@2  } | .BpbRetpolineEnabled
        _m266 uint5_t                                           bpb_retpoline_state_reserved;                         //{ +0x06d3@3  +0x06d3@3  +0x06d3@3  } | .BpbRetpolineStateReserved
        _m267 uint64_t                                          msr_ia32_tsx_ctrl;                                    //{ +0x2d00    +0x2d00    +0x2d00    } | .MsrIa32TsxCtrl
        _m268 struct nt::kprcb_t*                               pair_prcb;                                            //{ +0x2db0    +0x2db0    +0x2db0    } | .PairPrcb
        _m269 struct nt::kstatic_affinity_block_t               static_affinity;                                      //{ +0x2db8    +0x2db8    +0x2db8    } | .StaticAffinity
        _m270 struct rtl::hash_table_t*                         dpc_runtime_history_hash_table;                       //{ +0x3090    +0x3310    +0x3090    } | .DpcRuntimeHistoryHashTable
        _m271 struct nt::kdpc_t*                                dpc_runtime_history_hash_table_cleanup_dpc;           //{ +0x3098    +0x3318    +0x3098    } | .DpcRuntimeHistoryHashTableCleanupDpc
        _m272 current_dpc_routine_t                             current_dpc_routine;                                  //{ +0x30a0    +0x3320    +0x30a0    } | .CurrentDpcRoutine
        _m273 uint64_t                                          current_dpc_runtime_history_cached;                   //{ +0x30a8    +0x3328    +0x30a8    } | .CurrentDpcRuntimeHistoryCached
        _m274 uint64_t                                          current_dpc_start_time;                               //{ +0x30b0    +0x3330    +0x30b0    } | .CurrentDpcStartTime
        _m275 uint8_t                                           mce_active;                                           //{ +0x7be7    +0x7ea7    +0x7be7    } | .MceActive
        _m276 uint16_t                                          combined_nmi_mce_active;                              //{ +0x7be6    +0x7ea6    +0x7be6    } | .CombinedNmiMceActive
        _m277 uint32_t                                          dpc_watchdog_sequence_number;                         //{ +0x7c2c    +0x7eec    +0x7c2c    } | .DpcWatchdogSequenceNumber
        _m278 uint32_t                                          ready_thread_count;                                   //{ +0x7eb4    +0x8174    +0x7eb4    } | .ReadyThreadCount
        _m279 uint64_t                                          ready_queue_expected_run_time;                        //{ +0x7eb8    +0x8178    +0x7eb8    } | .ReadyQueueExpectedRunTime
        _m280 void volatile*                                    cached_stack;                                         //{ +0x7f08    +0x8248    +0x7f08    } | .CachedStack
        _m281 uint8_t                                           exception_stack_active;                               //{ +0x7f26    +0x8266    +0x7f26    } | .ExceptionStackActive
        _m282 uint8_t                                           tb_flush_list_active;                                 //{ +0x7f27    +0x8267    +0x7f27    } | .TbFlushListActive
        _m283 void*                                             exception_stack;                                      //{ +0x7f28    +0x8268    +0x7f28    } | .ExceptionStack
        _m284 void*                                             mm_internal;                                          //{ +0x7ff8    +0x8338    +0x7ff8    } | .MmInternal
        _m285 struct nt::kdpc_t                                 force_idle_dpc;                                       //{ +0x8218    +0x8598    +0x8218    } | .ForceIdleDpc
        _m286 uint32_t                                          package_id;                                           //{ +0x8438    +0x8828    +0x8438    } | .PackageId
        _m287 void*                                             scheduler_assist;                                     //{ +0x84b8    +0x88b8    +0x84b8    } | .SchedulerAssist
        _m301 u0_stibp_pairing_trace_t                          stibp_pairing_trace;                                  //{ +0x8738    +0x8b38    +0x8738    } | .StibpPairingTrace
        _m302 struct nt::ksecure_fault_information_t            secure_fault;                                         //{ +0x8868    +0x8c68    +0x8868    } | .SecureFault
        _m303 mcheck_context_t                                  mcheck_context;                                       //{ +0x8c80    +0x9380    +0x8c80    } | .McheckContext
        _m304 sdk::array<struct nt::klock_queue_handle_t, 4>    selfmap_lock_handle;                                  //{ +0x8d40    +0x9440    +0x8d40    } | .SelfmapLockHandle
        _m305 uint64_t                                          prcb_pad138c;                                         //{ +0x8ea0    +0x9ea0    +0x8ea0    } | .PrcbPad138c
        _m306 uint16_t                                          prcb_pad138d;                                         //{ +0x8ea8    +0x9ea8    +0x8ea8    } | .PrcbPad138d
        _m307 uint16_t                                          verw_selector;                                        //{ +0x8eaa    +0x9eaa    +0x8eaa    } | .VerwSelector
        _m308 uint32_t                                          dbg_mce_nesting_level;                                //{ +0x8eac    +0x9eac    +0x8eac    } | .DbgMceNestingLevel
        _m309 uint32_t                                          dbg_mce_flags;                                        //{ +0x8eb0    +0x9eb0    +0x8eb0    } | .DbgMceFlags
                                                                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                                                     
        //                                                                                                          
        _m310 struct nt::knode_t*                               parent_node;                                          //{ +0x0640    +0x00c0    +0x00c0    } | .ParentNode
        _m311 int32_t                                           dpc_watchdog_period;                                  //{ +0x5868    +0x7be8    +0x7be8    } | .DpcWatchdogPeriod
        _m312 uint32_t                                          dpc_watchdog_profile_cumulative_dpc_threshold;        //{ +0x5874    +0x7bf4    +0x7bf4    } | .DpcWatchdogProfileCumulativeDpcThreshold
        _m313 uint32_t                                          dpc_time_limit;                                       //{ +0x5b24    +0x7ea0    +0x7ea0    } | .DpcTimeLimit
        _m314 uint64_t                                          tagged_cycles_start;                                  //{ +0x5b40    +0x7ec8    +0x7ec8    } | .TaggedCyclesStart
        _m315 uint32_t                                          dpc_watchdog_profile_single_dpc_threshold;            //{ +0x5bd8    +0x7f00    +0x7f00    } | .DpcWatchdogProfileSingleDpcThreshold
        _m316 void*                                             hyper_pte;                                            //{ +0x5fc8    +0x8200    +0x8200    } | .HyperPte
        _m317 struct nt::ktimer_t                               dpc_watchdog_timer;                                   //{ +0x5f40    +0x8298    +0x8298    } | .DpcWatchdogTimer
        _m318 sdk::array<uint64_t, 5>                           cache_processor_mask;                                 //{ +0x60f0    +0x8470    +0x8470    } | .CacheProcessorMask
                                                                                                                    
        // Windows 10 v2004, Windows 10 v20H2                                                                       
        //                                                                                                          
        _m319 uint64_t                                          important_cycles;                                     //{ +0x7ef0    +0x7ef0    } | .ImportantCycles
        _m320 uint64_t                                          unimportant_cycles;                                   //{ +0x7ef8    +0x7ef8    } | .UnimportantCycles
                                                                                                                    
        // Windows 11                                                                                               
        //                                                                                                          
        _m321 uint8_t                                           legacy_cores_per_physical_processor;                  //{ +0x008e    } | .LegacyCoresPerPhysicalProcessor
        _m322 uint8_t                                           legacy_logical_processors_per_core;                   //{ +0x008f    } | .LegacyLogicalProcessorsPerCore
        _m323 struct nt::kprcb_tracepoint_log_t*                tracepoint_log;                                       //{ +0x0098    } | .TracepointLog
        _m324 struct nt::kscheduler_subnode_t*                  scheduler_sub_node;                                   //{ +0x00c0    } | .SchedulerSubNode
        _m325 struct nt::ksoftware_interrupt_batch_t            deferred_dispatch_interrupts;                         //{ +0x31d8    } | .DeferredDispatchInterrupts
        _m326 struct nt::kthread_t*                             dpc_delegate_thread;                                  //{ +0x3338    } | .DpcDelegateThread
        _m327 volatile uint1_t                                  dpc_normal_priority_anti_starvation;                  //{ +0x33bc@6  } | .DpcNormalPriorityAntiStarvation
        _m328 volatile uint1_t                                  dpc_normal_swap_to_dpc_delegate;                      //{ +0x33bc@7  } | .DpcNormalSwapToDpcDelegate
        _m329 uint32_t                                          single_dpc_soft_time_limit_ticks;                     //{ +0x33cc    } | .SingleDpcSoftTimeLimitTicks
        _m330 single_dpc_soft_timeout_event_info_t              single_dpc_soft_timeout_event_info;                   //{ +0x33d0    } | .SingleDpcSoftTimeoutEventInfo
        _m331 uint32_t                                          cumulative_dpc_soft_time_limit_ticks;                 //{ +0x33d8    } | .CumulativeDpcSoftTimeLimitTicks
        _m332 uint32_t                                          dpc_watchdog_profile_buffer_size;                     //{ +0x33dc    } | .DpcWatchdogProfileBufferSize
        _m333 int32_t                                           dpc_watchdog_period_ticks;                            //{ +0x7ea8    } | .DpcWatchdogPeriodTicks
        _m334 uint32_t                                          dpc_watchdog_profile_cumulative_dpc_threshold_ticks;  //{ +0x7eb4    } | .DpcWatchdogProfileCumulativeDpcThresholdTicks
        _m335 uint32_t                                          normal_priority_queue_index;                          //{ +0x7ee4    } | .NormalPriorityQueueIndex
        _m336 uint32_t                                          normal_priority_ready_scan_tick;                      //{ +0x7ee8    } | .NormalPriorityReadyScanTick
        _m337 uint32_t                                          dpc_time_limit_ticks;                                 //{ +0x8160    } | .DpcTimeLimitTicks
        _m338 uint64_t*                                         cycles_by_thread_type;                                //{ +0x81b0    } | .CyclesByThreadType
        _m339 uint32_t                                          cpu_cycle_scaling_factor;                             //{ +0x81b8    } | .CpuCycleScalingFactor
        _m340 sdk::array<uint16_t, 8>                           performance_score_by_class;                           //{ +0x81bc    } | .PerformanceScoreByClass
        _m341 sdk::array<uint16_t, 8>                           efficiency_score_by_class;                            //{ +0x81cc    } | .EfficiencyScoreByClass
        _m342 uint32_t                                          dpc_watchdog_profile_single_dpc_threshold_ticks;      //{ +0x8240    } | .DpcWatchdogProfileSingleDpcThresholdTicks
        _m343 uint8_t                                           system_work_kick_in_progress;                         //{ +0x8265    } | .SystemWorkKickInProgress
        _m344 uint32_t                                          processor_id;                                         //{ +0x8818    } | .ProcessorId
        _m345 uint32_t                                          core_id;                                              //{ +0x881c    } | .CoreId
        _m346 uint32_t                                          module_id;                                            //{ +0x8820    } | .ModuleId
        _m347 uint32_t                                          die_id;                                               //{ +0x8824    } | .DieId
        _m348 sdk::array<uint32_t, 5>                           topology_id;                                          //{ +0x8818    } | .TopologyId
        _m349 sdk::array<uint32_t, 5>                           node_relative_topology_index;                         //{ +0x882c    } | .NodeRelativeTopologyIndex
        _m350 struct nt::kcore_control_block_t*                 core_control_block;                                   //{ +0x8858    } | .CoreControlBlock
        _m351 uint64_t                                          group_module_processor_set;                           //{ +0x8878    } | .GroupModuleProcessorSet
        _m352 struct nt::kthread_t*                             smt_isolation_thread;                                 //{ +0x8880    } | .SmtIsolationThread
        _m353 struct nt::kclock_timer_state_t                   clock_timer_state;                                    //{ +0x8e00    } | .ClockTimerState
        _m354 uint64_t                                          transition_shadow_stack;                              //{ +0x9420    } | .TransitionShadowStack
        _m355 uint64_t                                          kernel_shadow_stack_initial;                          //{ +0x9428    } | .KernelShadowStackInitial
        _m356 uint64_t*                                         ist_shadow_stacks_table;                              //{ +0x9430    } | .IstShadowStacksTable
        _m357 void*                                             cached_shadow_stack;                                  //{ +0x9438    } | .CachedShadowStack
        _m358 struct nt::kaffinity_ex_t                         die_processor_set;                                    //{ +0x94c0    } | .DieProcessorSet
        _m359 uint32_t                                          cores_per_physical_die;                               //{ +0x95c8    } | .CoresPerPhysicalDie
        _m360 uint32_t                                          logical_processors_per_module;                        //{ +0x95cc    } | .LogicalProcessorsPerModule
        _m361 struct nt::kdpc_t                                 freeze_for_recovery_dpc;                              //{ +0x95d0    } | .FreezeForRecoveryDpc
        _m362 struct nt::kaffinity_ex_t                         module_processor_set;                                 //{ +0x9610    } | .ModuleProcessorSet
        _m363 struct nt::kcore_control_block_t                  local_core_control_block;                             //{ +0x9718    } | .LocalCoreControlBlock
        _m364 sdk::array<struct nt::kaffinity_ex_t, 5>          cache_processor_set;                                  //{ +0x9eb8    } | .CacheProcessorSet
                                                                                                                    
        // Windows 10 v1607                                                                                         
        //                                                                                                          
        _m365 uint64_t                                          last_non_hr_timer_expiration;                         //{ +0x2d28    } | .LastNonHrTimerExpiration
        _m366 uint1_t                                           bpb_ibrs_present;                                     //{ +0x2d38@0  } | .BpbIbrsPresent
        _m367 uint1_t                                           bpb_stibp_present;                                    //{ +0x2d38@1  } | .BpbStibpPresent
        _m368 uint1_t                                           bpb_smep_present;                                     //{ +0x2d38@2  } | .BpbSmepPresent
        _m369 uint1_t                                           bpb_simulate_ibrs;                                    //{ +0x2d38@3  } | .BpbSimulateIbrs
        _m370 uint1_t                                           bpb_simulate_ibpb;                                    //{ +0x2d38@4  } | .BpbSimulateIbpb
        _m371 uint3_t                                           bpb_reserved;                                         //{ +0x2d38@5  } | .BpbReserved
        _m372 sdk::array<uint8_t, 7>                            bpb_pad;                                              //{ +0x2d39    } | .BpbPad
        _m373 uint32_t                                          last_timer_hand;                                      //{ +0x2df0    } | .LastTimerHand
                                                                                                                    
        SDK_MAGIC_PROPERTIES( "_KPRCB.$", 0xaf00, true, 0xd24e560a29b38fcf );                                                    
        SDK_DYNAMIC_SIZE( kprcb_t );                                                                                
    };                                                                                                              
};
#include "magic/kprcb_t.end.hpp"
SDK_VERIFY( struct nt::kprcb_t::u0_stibp_pairing_trace_t, 0x38 );
