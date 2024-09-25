#pragma once
#include <sdkgen/support_library.hpp>
#include "kapc_t.hpp"
#include "kevent_t.hpp"
#include "ktimer_t.hpp"
#include "kapc_state_t.hpp"
#include "klock_entry_t.hpp"
#include "kwait_block_t.hpp"
#include "group_affinity_t.hpp"
#include "dispatcher_header_t.hpp"
#include "single_list_entry_t.hpp"
#include "kwait_status_register_t.hpp"
#include "kernel_shadow_stack_limit_t.hpp"

#include "magic/kthread_t.start.hpp"
namespace nt
{
    struct kscb_t;
    struct kprcb_t;
    struct kprocess_t;
    struct xstate_save_t;
    struct kaffinity_ex_t;
    struct kthread_counters_t;
    struct kscheduling_group_t;
    struct ums_control_block_t;
    struct kums_context_header_t;

    // [struct _KTHREAD]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct kthread_t                                                                                    
    {                                                                                                   
        using user_affinity_t = sdk::variant<struct nt::group_affinity_t, struct nt::kaffinity_ex_t*>;                                               
        using affinity_t =      sdk::variant<struct nt::group_affinity_t, struct nt::kaffinity_ex_t*>;                                               
        using lock_entries_t =  sdk::variant<sdk::array<struct nt::klock_entry_t, 6>, struct nt::klock_entry_t*>;                                               
                                                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                               
        //                                                                                              
        _m000 struct nt::dispatcher_header_t             header;                                          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m001 void*                                      s_list_fault_address;                            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .SListFaultAddress
        _m002 uint64_t                                   quantum_target;                                  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .QuantumTarget
        _m003 void*                                      initial_stack;                                   //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .InitialStack
        _m004 void volatile*                             stack_limit;                                     //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .StackLimit
        _m005 void*                                      stack_base;                                      //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .StackBase
        _m006 uint64_t                                   thread_lock;                                     //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .ThreadLock
        _m007 volatile uint64_t                          cycle_time;                                      //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .CycleTime
        _m008 uint32_t                                   current_run_time;                                //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .CurrentRunTime
        _m009 uint32_t                                   expected_run_time;                               //{ +0x0054    +0x0054    +0x0054    +0x0054    } | .ExpectedRunTime
        _m010 void*                                      kernel_stack;                                    //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .KernelStack
        _m011 nt::xsave_format*                          state_save_area;                                 //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .StateSaveArea
        _m012 struct nt::kscheduling_group_t volatile*   scheduling_group;                                //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .SchedulingGroup
        _m013 union nt::kwait_status_register_t          wait_register;                                   //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .WaitRegister
        _m014 volatile uint8_t                           running;                                         //{ +0x0071    +0x0071    +0x0071    +0x0071    } | .Running
        _m015 sdk::array<uint8_t, 2>                     alerted;                                         //{ +0x0072    +0x0072    +0x0072    +0x0072    } | .Alerted
        _m016 uint1_t                                    auto_boost_active;                               //{ +0x0074@0  +0x0074@0  +0x0074@0  +0x0074@0  } | .AutoBoostActive
        _m017 uint1_t                                    ready_transition;                                //{ +0x0074@1  +0x0074@1  +0x0074@1  +0x0074@1  } | .ReadyTransition
        _m018 uint1_t                                    wait_next;                                       //{ +0x0074@2  +0x0074@2  +0x0074@2  +0x0074@2  } | .WaitNext
        _m019 uint1_t                                    system_affinity_active;                          //{ +0x0074@3  +0x0074@3  +0x0074@3  +0x0074@3  } | .SystemAffinityActive
        _m020 uint1_t                                    alertable;                                       //{ +0x0074@4  +0x0074@4  +0x0074@4  +0x0074@4  } | .Alertable
        _m021 uint1_t                                    user_stack_walk_active;                          //{ +0x0074@5  +0x0074@5  +0x0074@5  +0x0074@5  } | .UserStackWalkActive
        _m022 uint1_t                                    apc_interrupt_request;                           //{ +0x0074@6  +0x0074@6  +0x0074@6  +0x0074@6  } | .ApcInterruptRequest
        _m023 uint1_t                                    quantum_end_migrate;                             //{ +0x0074@7  +0x0074@7  +0x0074@7  +0x0074@7  } | .QuantumEndMigrate
        _m024 uint1_t                                    timer_active;                                    //{ +0x0074@9  +0x0074@9  +0x0074@9  +0x0074@9  } | .TimerActive
        _m025 uint1_t                                    system_thread;                                   //{ +0x0074@10 +0x0074@10 +0x0074@10 +0x0074@10 } | .SystemThread
        _m026 uint1_t                                    process_detach_active;                           //{ +0x0074@11 +0x0074@11 +0x0074@11 +0x0074@11 } | .ProcessDetachActive
        _m027 uint1_t                                    callout_active;                                  //{ +0x0074@12 +0x0074@12 +0x0074@12 +0x0074@12 } | .CalloutActive
        _m028 uint1_t                                    scb_ready_queue;                                 //{ +0x0074@13 +0x0074@13 +0x0074@13 +0x0074@13 } | .ScbReadyQueue
        _m029 uint1_t                                    apc_queueable;                                   //{ +0x0074@14 +0x0074@14 +0x0074@14 +0x0074@14 } | .ApcQueueable
        _m030 uint1_t                                    reserved_stack_in_use;                           //{ +0x0074@15 +0x0074@15 +0x0074@15 +0x0074@15 } | .ReservedStackInUse
        _m031 uint1_t                                    timer_suspended;                                 //{ +0x0074@17 +0x0074@17 +0x0074@17 +0x0074@17 } | .TimerSuspended
        _m032 uint1_t                                    suspended_wait_mode;                             //{ +0x0074@18 +0x0074@18 +0x0074@18 +0x0074@18 } | .SuspendedWaitMode
        _m033 uint1_t                                    suspend_scheduler_apc_wait;                      //{ +0x0074@19 +0x0074@19 +0x0074@19 +0x0074@19 } | .SuspendSchedulerApcWait
        _m034 int32_t                                    misc_flags;                                      //{ +0x0074    +0x0074    +0x0074    +0x0074    } | .MiscFlags
        _m035 volatile uint1_t                           auto_alignment;                                  //{ +0x0078@0  +0x0078@2  +0x0078@2  +0x0078@2  } | .AutoAlignment
        _m036 volatile uint1_t                           disable_boost;                                   //{ +0x0078@1  +0x0078@3  +0x0078@3  +0x0078@3  } | .DisableBoost
        _m037 volatile uint1_t                           alerted_by_thread_id;                            //{ +0x0078@3  +0x0078@4  +0x0078@4  +0x0078@4  } | .AlertedByThreadId
        _m038 volatile uint1_t                           quantum_donation;                                //{ +0x0078@4  +0x0078@5  +0x0078@5  +0x0078@5  } | .QuantumDonation
        _m039 volatile uint1_t                           enable_stack_swap;                               //{ +0x0078@5  +0x0078@6  +0x0078@6  +0x0078@6  } | .EnableStackSwap
        _m040 volatile uint1_t                           gui_thread;                                      //{ +0x0078@6  +0x0078@7  +0x0078@7  +0x0078@7  } | .GuiThread
        _m041 volatile uint1_t                           disable_quantum;                                 //{ +0x0078@7  +0x0078@8  +0x0078@8  +0x0078@8  } | .DisableQuantum
        _m042 volatile uint1_t                           charge_only_scheduling_group;                    //{ +0x0078@8  +0x0078@9  +0x0078@9  +0x0078@9  } | .ChargeOnlySchedulingGroup
        _m043 volatile uint1_t                           defer_preemption;                                //{ +0x0078@9  +0x0078@10 +0x0078@10 +0x0078@10 } | .DeferPreemption
        _m044 volatile uint1_t                           queue_defer_preemption;                          //{ +0x0078@10 +0x0078@11 +0x0078@11 +0x0078@11 } | .QueueDeferPreemption
        _m045 volatile uint1_t                           force_defer_schedule;                            //{ +0x0078@11 +0x0078@12 +0x0078@12 +0x0078@12 } | .ForceDeferSchedule
        _m046 volatile uint1_t                           shared_ready_queue_affinity;                     //{ +0x0078@12 +0x0078@13 +0x0078@13 +0x0078@13 } | .SharedReadyQueueAffinity
        _m047 volatile uint1_t                           freeze_count;                                    //{ +0x0078@13 +0x0078@14 +0x0078@14 +0x0078@14 } | .FreezeCount
        _m048 volatile uint1_t                           termination_apc_request;                         //{ +0x0078@14 +0x0078@15 +0x0078@15 +0x0078@15 } | .TerminationApcRequest
        _m049 volatile uint1_t                           auto_boost_entries_exhausted;                    //{ +0x0078@15 +0x0078@16 +0x0078@16 +0x0078@16 } | .AutoBoostEntriesExhausted
        _m050 volatile uint1_t                           kernel_stack_resident;                           //{ +0x0078@16 +0x0078@17 +0x0078@17 +0x0078@17 } | .KernelStackResident
        _m051 volatile uint1_t                           process_stack_count_decremented;                 //{ +0x0078@18 +0x0078@20 +0x0078@20 +0x0078@20 } | .ProcessStackCountDecremented
        _m052 volatile uint1_t                           restricted_gui_thread;                           //{ +0x0078@19 +0x0078@21 +0x0078@21 +0x0078@21 } | .RestrictedGuiThread
        _m053 volatile uint8_t                           etw_stack_trace_apc_inserted;                    //{ +0x0078@24 +0x0078@24 +0x0078@24 +0x0078@24 } | .EtwStackTraceApcInserted
        _m054 volatile int32_t                           thread_flags;                                    //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .ThreadFlags
        _m055 volatile uint8_t                           tag;                                             //{ +0x007c    +0x007c    +0x007c    +0x007c    } | .Tag
        _m056 uint8_t                                    system_hetero_cpu_policy;                        //{ +0x007d    +0x007d    +0x007d    +0x007d    } | .SystemHeteroCpuPolicy
        _m057 uint7_t                                    user_hetero_cpu_policy;                          //{ +0x007e@0  +0x007e@0  +0x007e@0  +0x007e@0  } | .UserHeteroCpuPolicy
        _m058 uint1_t                                    explicit_system_hetero_cpu_policy;               //{ +0x007e@7  +0x007e@7  +0x007e@7  +0x007e@7  } | .ExplicitSystemHeteroCpuPolicy
        _m059 uint32_t                                   system_call_number;                              //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .SystemCallNumber
        _m060 void*                                      first_argument;                                  //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .FirstArgument
        _m061 nt::trapframe*                             trap_frame;                                      //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .TrapFrame
        _m062 struct nt::kapc_state_t                    apc_state;                                       //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .ApcState
        _m063 sdk::array<uint8_t, 43>                    apc_state_fill;                                  //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .ApcStateFill
        _m064 char                                       priority;                                        //{ +0x00c3    +0x00c3    +0x00c3    +0x00c3    } | .Priority
        _m065 uint32_t                                   user_ideal_processor;                            //{ +0x00c4    +0x00c4    +0x00c4    +0x00c4    } | .UserIdealProcessor
        _m066 volatile int64_t                           wait_status;                                     //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .WaitStatus
        _m067 struct nt::kwait_block_t*                  wait_block_list;                                 //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .WaitBlockList
        _m068 nt::list_entry_t                           wait_list_entry;                                 //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .WaitListEntry
        _m069 struct nt::single_list_entry_t             swap_list_entry;                                 //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .SwapListEntry
        _m070 struct nt::dispatcher_header_t volatile*   queue;                                           //{ +0x00e8    +0x00e8    +0x00e8    +0x00e8    } | .Queue
        _m071 void*                                      teb;                                             //{ +0x00f0    +0x00f0    +0x00f0    +0x00f0    } | .Teb
        _m072 uint64_t                                   relative_timer_bias;                             //{ +0x00f8    +0x00f8    +0x00f8    +0x00f8    } | .RelativeTimerBias
        _m073 struct nt::ktimer_t                        timer;                                           //{ +0x0100    +0x0100    +0x0100    +0x0100    } | .Timer
        _m074 sdk::array<struct nt::kwait_block_t, 4>    wait_block;                                      //{ +0x0140    +0x0140    +0x0140    +0x0140    } | .WaitBlock
        _m075 sdk::array<uint8_t, 20>                    wait_block_fill4;                                //{ +0x0140    +0x0140    +0x0140    +0x0140    } | .WaitBlockFill4
        _m076 uint32_t                                   context_switches;                                //{ +0x0154    +0x0154    +0x0154    +0x0154    } | .ContextSwitches
        _m077 sdk::array<uint8_t, 68>                    wait_block_fill5;                                //{ +0x0140    +0x0140    +0x0140    +0x0140    } | .WaitBlockFill5
        _m078 volatile uint8_t                           state;                                           //{ +0x0184    +0x0184    +0x0184    +0x0184    } | .State
        _m079 uint8_t                                    wait_irql;                                       //{ +0x0186    +0x0186    +0x0186    +0x0186    } | .WaitIrql
        _m080 char                                       wait_mode;                                       //{ +0x0187    +0x0187    +0x0187    +0x0187    } | .WaitMode
        _m081 sdk::array<uint8_t, 116>                   wait_block_fill6;                                //{ +0x0140    +0x0140    +0x0140    +0x0140    } | .WaitBlockFill6
        _m082 uint32_t                                   wait_time;                                       //{ +0x01b4    +0x01b4    +0x01b4    +0x01b4    } | .WaitTime
        _m083 sdk::array<uint8_t, 164>                   wait_block_fill7;                                //{ +0x0140    +0x0140    +0x0140    +0x0140    } | .WaitBlockFill7
        _m084 int16_t                                    kernel_apc_disable;                              //{ +0x01e4    +0x01e4    +0x01e4    +0x01e4    } | .KernelApcDisable
        _m085 int16_t                                    special_apc_disable;                             //{ +0x01e6    +0x01e6    +0x01e6    +0x01e6    } | .SpecialApcDisable
        _m086 uint32_t                                   combined_apc_disable;                            //{ +0x01e4    +0x01e4    +0x01e4    +0x01e4    } | .CombinedApcDisable
        _m087 sdk::array<uint8_t, 40>                    wait_block_fill8;                                //{ +0x0140    +0x0140    +0x0140    +0x0140    } | .WaitBlockFill8
        _m088 struct nt::kthread_counters_t*             thread_counters;                                 //{ +0x0168    +0x0168    +0x0168    +0x0168    } | .ThreadCounters
        _m089 sdk::array<uint8_t, 88>                    wait_block_fill9;                                //{ +0x0140    +0x0140    +0x0140    +0x0140    } | .WaitBlockFill9
        _m090 struct nt::xstate_save_t*                  x_state_save;                                    //{ +0x0198    +0x0198    +0x0198    +0x0198    } | .XStateSave
        _m091 sdk::array<uint8_t, 136>                   wait_block_fill10;                               //{ +0x0140    +0x0140    +0x0140    +0x0140    } | .WaitBlockFill10
        _m092 void volatile*                             win32_thread;                                    //{ +0x01c8    +0x01c8    +0x01c8    +0x01c8    } | .Win32Thread
        _m093 sdk::array<uint8_t, 176>                   wait_block_fill11;                               //{ +0x0140    +0x0140    +0x0140    +0x0140    } | .WaitBlockFill11
        _m094 nt::list_entry_t                           queue_list_entry;                                //{ +0x0208    +0x0208    +0x0208    +0x0208    } | .QueueListEntry
        _m095 volatile uint32_t                          next_processor;                                  //{ +0x0218    +0x0218    +0x0218    +0x0218    } | .NextProcessor
        _m096 volatile uint31_t                          next_processor_number;                           //{ +0x0218@0  +0x0218@0  +0x0218@0  +0x0218@0  } | .NextProcessorNumber
        _m097 volatile uint1_t                           shared_ready_queue;                              //{ +0x0218@31 +0x0218@31 +0x0218@31 +0x0218@31 } | .SharedReadyQueue
        _m098 int32_t                                    queue_priority;                                  //{ +0x021c    +0x021c    +0x021c    +0x021c    } | .QueuePriority
        _m099 struct nt::kprocess_t*                     process;                                         //{ +0x0220    +0x0220    +0x0220    +0x0220    } | .Process
        _m100 user_affinity_t                            user_affinity;                                   //{ +0x0228    +0x0228    +0x0228    +0x0228    } | .UserAffinity
        _m101 char                                       previous_mode;                                   //{ +0x0232    +0x0232    +0x0232    +0x0232    } | .PreviousMode
        _m102 char                                       base_priority;                                   //{ +0x0233    +0x0233    +0x0233    +0x0233    } | .BasePriority
        _m103 char                                       priority_decrement;                              //{ +0x0234    +0x0234    +0x0234    +0x0234    } | .PriorityDecrement
        _m104 uint4_t                                    foreground_boost;                                //{ +0x0234@0  +0x0234@0  +0x0234@0  +0x0234@0  } | .ForegroundBoost
        _m105 uint4_t                                    unusual_boost;                                   //{ +0x0234@4  +0x0234@4  +0x0234@4  +0x0234@4  } | .UnusualBoost
        _m106 uint8_t                                    preempted;                                       //{ +0x0235    +0x0235    +0x0235    +0x0235    } | .Preempted
        _m107 uint8_t                                    adjust_reason;                                   //{ +0x0236    +0x0236    +0x0236    +0x0236    } | .AdjustReason
        _m108 char                                       adjust_increment;                                //{ +0x0237    +0x0237    +0x0237    +0x0237    } | .AdjustIncrement
        _m109 uint64_t                                   affinity_version;                                //{ +0x0238    +0x0238    +0x0238    +0x0238    } | .AffinityVersion
        _m110 affinity_t                                 affinity;                                        //{ +0x0240    +0x0240    +0x0240    +0x0240    } | .Affinity
        _m111 uint8_t                                    apc_state_index;                                 //{ +0x024a    +0x024a    +0x024a    +0x024a    } | .ApcStateIndex
        _m112 uint8_t                                    wait_block_count;                                //{ +0x024b    +0x024b    +0x024b    +0x024b    } | .WaitBlockCount
        _m113 uint32_t                                   ideal_processor;                                 //{ +0x024c    +0x024c    +0x024c    +0x024c    } | .IdealProcessor
        _m114 uint64_t                                   npx_state;                                       //{ +0x0250    +0x0250    +0x0250    +0x0250    } | .NpxState
        _m115 struct nt::kapc_state_t                    saved_apc_state;                                 //{ +0x0258    +0x0258    +0x0258    +0x0258    } | .SavedApcState
        _m116 sdk::array<uint8_t, 43>                    saved_apc_state_fill;                            //{ +0x0258    +0x0258    +0x0258    +0x0258    } | .SavedApcStateFill
        _m117 uint8_t                                    wait_reason;                                     //{ +0x0283    +0x0283    +0x0283    +0x0283    } | .WaitReason
        _m118 char                                       suspend_count;                                   //{ +0x0284    +0x0284    +0x0284    +0x0284    } | .SuspendCount
        _m119 char                                       saturation;                                      //{ +0x0285    +0x0285    +0x0285    +0x0285    } | .Saturation
        _m120 uint16_t                                   s_list_fault_count;                              //{ +0x0286    +0x0286    +0x0286    +0x0286    } | .SListFaultCount
        _m121 struct nt::kapc_t                          scheduler_apc;                                   //{ +0x0288    +0x0288    +0x0288    +0x0288    } | .SchedulerApc
        _m122 uint8_t                                    resource_index;                                  //{ +0x0289    +0x0289    +0x0460    +0x0289    } | .ResourceIndex
        _m123 sdk::array<uint8_t, 3>                     scheduler_apc_fill1;                             //{ +0x0288    +0x0288    +0x0288    +0x0288    } | .SchedulerApcFill1
        _m124 uint8_t                                    quantum_reset;                                   //{ +0x028b    +0x028b    +0x028b    +0x028b    } | .QuantumReset
        _m125 sdk::array<uint8_t, 4>                     scheduler_apc_fill2;                             //{ +0x0288    +0x0288    +0x0288    +0x0288    } | .SchedulerApcFill2
        _m126 uint32_t                                   kernel_time;                                     //{ +0x028c    +0x028c    +0x028c    +0x028c    } | .KernelTime
        _m127 sdk::array<uint8_t, 64>                    scheduler_apc_fill3;                             //{ +0x0288    +0x0288    +0x0288    +0x0288    } | .SchedulerApcFill3
        _m128 struct nt::kprcb_t volatile*               wait_prcb;                                       //{ +0x02c8    +0x02c8    +0x02c8    +0x02c8    } | .WaitPrcb
        _m129 sdk::array<uint8_t, 72>                    scheduler_apc_fill4;                             //{ +0x0288    +0x0288    +0x0288    +0x0288    } | .SchedulerApcFill4
        _m130 void*                                      lego_data;                                       //{ +0x02d0    +0x02d0    +0x02d0    +0x02d0    } | .LegoData
        _m131 sdk::array<uint8_t, 83>                    scheduler_apc_fill5;                             //{ +0x0288    +0x0288    +0x0288    +0x0288    } | .SchedulerApcFill5
        _m132 uint8_t                                    callback_nesting_level;                          //{ +0x02db    +0x02db    +0x02db    +0x02db    } | .CallbackNestingLevel
        _m133 uint32_t                                   user_time;                                       //{ +0x02dc    +0x02dc    +0x02dc    +0x02dc    } | .UserTime
        _m134 struct nt::kevent_t                        suspend_event;                                   //{ +0x02e0    +0x02e0    +0x02e0    +0x02e0    } | .SuspendEvent
        _m135 nt::list_entry_t                           thread_list_entry;                               //{ +0x02f8    +0x02f8    +0x02f8    +0x02f8    } | .ThreadListEntry
        _m136 nt::list_entry_t                           mutant_list_head;                                //{ +0x0308    +0x0308    +0x0308    +0x0308    } | .MutantListHead
        _m137 uint8_t                                    ab_entry_summary;                                //{ +0x0318    +0x0318    +0x0318    +0x0318    } | .AbEntrySummary
        _m138 uint8_t                                    ab_wait_entry_count;                             //{ +0x0319    +0x0319    +0x0319    +0x0319    } | .AbWaitEntryCount
        _m139 uint32_t                                   secure_thread_cookie;                            //{ +0x031c    +0x031c    +0x031c    +0x031c    } | .SecureThreadCookie
        _m140 struct nt::single_list_entry_t             propagate_boosts_entry;                          //{ +0x0560    +0x0328    +0x0328    +0x0328    } | .PropagateBoostsEntry
        _m141 struct nt::single_list_entry_t             io_self_boosts_entry;                            //{ +0x0568    +0x0330    +0x0330    +0x0330    } | .IoSelfBoostsEntry
        _m142 sdk::array<uint8_t, 16>                    priority_floor_counts;                           //{ +0x0570    +0x0338    +0x0338    +0x0338    } | .PriorityFloorCounts
        _m143 uint32_t                                   priority_floor_summary;                          //{ +0x0580    +0x0358    +0x0358    +0x0358    } | .PriorityFloorSummary
        _m144 volatile int32_t                           ab_completed_io_boost_count;                     //{ +0x0584    +0x035c    +0x035c    +0x035c    } | .AbCompletedIoBoostCount
        _m145 volatile int32_t                           ab_completed_io_qo_s_boost_count;                //{ +0x0588    +0x0360    +0x0360    +0x0360    } | .AbCompletedIoQoSBoostCount
        _m146 volatile int16_t                           ke_reference_count;                              //{ +0x058c    +0x0364    +0x0364    +0x0364    } | .KeReferenceCount
        _m147 uint8_t                                    ab_orphaned_entry_summary;                       //{ +0x058e    +0x0366    +0x0366    +0x0366    } | .AbOrphanedEntrySummary
        _m148 uint8_t                                    ab_owned_entry_count;                            //{ +0x058f    +0x0367    +0x0367    +0x0367    } | .AbOwnedEntryCount
        _m149 uint32_t                                   foreground_loss_time;                            //{ +0x0590    +0x0368    +0x0368    +0x0368    } | .ForegroundLossTime
        _m150 nt::list_entry_t                           global_foreground_list_entry;                    //{ +0x0598    +0x0370    +0x0370    +0x0370    } | .GlobalForegroundListEntry
        _m151 struct nt::single_list_entry_t             foreground_dpc_stack_list_entry;                 //{ +0x0598    +0x0370    +0x0370    +0x0370    } | .ForegroundDpcStackListEntry
        _m152 uint64_t                                   in_global_foreground_list;                       //{ +0x05a0    +0x0378    +0x0378    +0x0378    } | .InGlobalForegroundList
        _m153 int64_t                                    read_operation_count;                            //{ +0x05a8    +0x0380    +0x0380    +0x0380    } | .ReadOperationCount
        _m154 int64_t                                    write_operation_count;                           //{ +0x05b0    +0x0388    +0x0388    +0x0388    } | .WriteOperationCount
        _m155 int64_t                                    other_operation_count;                           //{ +0x05b8    +0x0390    +0x0390    +0x0390    } | .OtherOperationCount
        _m156 int64_t                                    read_transfer_count;                             //{ +0x05c0    +0x0398    +0x0398    +0x0398    } | .ReadTransferCount
        _m157 int64_t                                    write_transfer_count;                            //{ +0x05c8    +0x03a0    +0x03a0    +0x03a0    } | .WriteTransferCount
        _m158 int64_t                                    other_transfer_count;                            //{ +0x05d0    +0x03a8    +0x03a8    +0x03a8    } | .OtherTransferCount
        _m159 struct nt::kscb_t*                         queued_scb;                                      //{ +0x05d8    +0x03b0    +0x03b0    +0x03b0    } | .QueuedScb
                                                                                                        
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                               
        //                                                                                              
        _m160 uint1_t                                    cet_user_shadow_stack;                           //{ +0x0074@20 +0x0074@20 +0x0074@20 } | .CetUserShadowStack
        _m161 uint1_t                                    bypass_process_freeze;                           //{ +0x0074@21 +0x0074@21 +0x0074@21 } | .BypassProcessFreeze
        _m162 volatile uint2_t                           terminate_request_reason;                        //{ +0x0078@18 +0x0078@18 +0x0078@18 } | .TerminateRequestReason
        _m163 volatile uint1_t                           vp_backing_thread;                               //{ +0x0078@22 +0x0078@22 +0x0078@22 } | .VpBackingThread
        _m164 uint1_t                                    running_non_retpoline_code;                      //{ +0x007f@0  +0x007f@0  +0x007f@0  } | .RunningNonRetpolineCode
        _m165 uint7_t                                    spec_ctrl_spare;                                 //{ +0x007f@1  +0x007f@1  +0x007f@1  } | .SpecCtrlSpare
        _m166 uint8_t                                    spec_ctrl;                                       //{ +0x007f    +0x007f    +0x007f    } | .SpecCtrl
        _m167 uint32_t                                   ready_time;                                      //{ +0x0084    +0x0084    +0x0084    } | .ReadyTime
        _m168 volatile int32_t                           thread_flags2;                                   //{ +0x0200    +0x0200    +0x0200    } | .ThreadFlags2
        _m169 volatile uint8_t                           bam_qos_level;                                   //{ +0x0200@0  +0x0200@0  +0x0200@0  } | .BamQosLevel
        _m170 volatile uint24_t                          thread_flags2_reserved;                          //{ +0x0200@8  +0x0200@8  +0x0200@8  } | .ThreadFlags2Reserved
        _m171 char                                       system_priority;                                 //{ +0x031b    +0x031b    +0x031b    } | .SystemPriority
        _m172 volatile uint32_t                          thread_timer_delay;                              //{ +0x03b8    +0x03b8    +0x03b8    } | .ThreadTimerDelay
        _m173 volatile int32_t                           thread_flags3;                                   //{ +0x03bc    +0x03bc    +0x03bc    } | .ThreadFlags3
        _m174 volatile uint8_t                           thread_flags3_reserved;                          //{ +0x03bc@0  +0x03bc@0  +0x03bc@0  } | .ThreadFlags3Reserved
        _m175 varuint_t                                  ppm_policy;                                      //{ +0x03bc@8  +0x03bc@8  +0x03bc@8  } | .PpmPolicy
        _m176 varuint_t                                  thread_flags3_reserved2;                         //{ +0x03bc@10 +0x03bc@11 +0x03bc@10 } | .ThreadFlags3Reserved2
        _m177 sdk::array<uint64_t, 1>                    tracing_private;                                 //{ +0x03c0    +0x03c0    +0x03c0    } | .TracingPrivate
        _m178 void*                                      scheduler_assist;                                //{ +0x03c8    +0x03c8    +0x03c8    } | .SchedulerAssist
        _m179 void volatile*                             ab_wait_object;                                  //{ +0x03d0    +0x03d0    +0x03d0    } | .AbWaitObject
        _m180 uint32_t                                   reserved_previous_ready_time_value;              //{ +0x03d8    +0x03d8    +0x03d8    } | .ReservedPreviousReadyTimeValue
        _m181 uint64_t                                   kernel_wait_time;                                //{ +0x03e0    +0x03e0    +0x03e0    } | .KernelWaitTime
        _m182 uint64_t                                   user_wait_time;                                  //{ +0x03e8    +0x03e8    +0x03e8    } | .UserWaitTime
        _m183 nt::list_entry_t                           global_update_vp_thread_priority_list_entry;     //{ +0x03f0    +0x03f0    +0x03f0    } | .GlobalUpdateVpThreadPriorityListEntry
        _m184 struct nt::single_list_entry_t             update_vp_thread_priority_dpc_stack_list_entry;  //{ +0x03f0    +0x03f0    +0x03f0    } | .UpdateVpThreadPriorityDpcStackListEntry
        _m185 uint64_t                                   in_global_update_vp_thread_priority_list;        //{ +0x03f8    +0x03f8    +0x03f8    } | .InGlobalUpdateVpThreadPriorityList
        _m186 int32_t                                    scheduler_assist_priority_floor;                 //{ +0x0400    +0x0400    +0x0400    } | .SchedulerAssistPriorityFloor
        _m187 sdk::array<uint64_t, 5>                    end_padding;                                     //{ +0x0408    +0x0468    +0x0408    } | .EndPadding
                                                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                                               
        //                                                                                              
        _m188 uint1_t                                    ums_directed_switch_enable;                      //{ +0x0074@8  +0x0074@8  +0x0074@8  } | .UmsDirectedSwitchEnable
        _m189 uint1_t                                    ums_performing_syscall;                          //{ +0x0074@16 +0x0074@16 +0x0074@16 } | .UmsPerformingSyscall
        _m190 varuint_t                                  thread_flags_spare;                              //{ +0x0078@20 +0x0078@0  +0x0078@0  } | .ThreadFlagsSpare
        _m191 struct nt::ums_control_block_t*            ucb;                                             //{ +0x01f0    +0x01f0    +0x01f0    } | .Ucb
        _m192 struct nt::kums_context_header_t volatile* uch;                                             //{ +0x01f8    +0x01f8    +0x01f8    } | .Uch
        _m193 sdk::array<uint8_t, 10>                    user_affinity_fill;                              //{ +0x0228    +0x0228    +0x0228    } | .UserAffinityFill
        _m194 sdk::array<uint8_t, 10>                    affinity_fill;                                   //{ +0x0240    +0x0240    +0x0240    } | .AffinityFill
        _m195 sdk::array<uint8_t, 1>                     scheduler_apc_fill0;                             //{ +0x0288    +0x0288    +0x0288    } | .SchedulerApcFill0
        _m196 lock_entries_t                             lock_entries;                                    //{ +0x0320    +0x0320    +0x0320    } | .LockEntries
                                                                                                        
        // Windows 10 v2004, Windows 10 v20H2                                                           
        //                                                                                              
        _m197 volatile uint1_t                           thread_flags_spare2;                             //{ +0x0078@23 +0x0078@23 } | .ThreadFlagsSpare2
        _m198 uint8_t                                    ab_allocation_region_count;                      //{ +0x031a    +0x031a    } | .AbAllocationRegionCount
        _m199 sdk::array<uint8_t, 16>                    priority_floor_counts_reserved;                  //{ +0x0348    +0x0348    } | .PriorityFloorCountsReserved
                                                                                                        
        // Windows 10 v1607                                                                             
        //                                                                                              
        _m200 volatile uint1_t                           thread_flags_spare0;                             //{ +0x0078@2  } | .ThreadFlagsSpare0
        _m201 volatile uint1_t                           commit_fail_terminate_request;                   //{ +0x0078@17 } | .CommitFailTerminateRequest
        _m202 void*                                      teb_mapped_low_va;                               //{ +0x0200    } | .TebMappedLowVa
                                                                                                        
        // Windows 11                                                                                   
        //                                                                                              
        _m203 uint1_t                                    secure_thread;                                   //{ +0x0074@8  } | .SecureThread
        _m204 uint1_t                                    cet_kernel_shadow_stack;                         //{ +0x0074@22 } | .CetKernelShadowStack
        _m205 uint1_t                                    state_save_area_decoupled;                       //{ +0x0074@23 } | .StateSaveAreaDecoupled
        _m206 volatile uint1_t                           user_ideal_processor_fixed;                      //{ +0x0078@0  } | .UserIdealProcessorFixed
        _m207 volatile uint1_t                           isolation_width;                                 //{ +0x0078@1  } | .IsolationWidth
        _m208 volatile uint1_t                           etw_stack_trace_crimson_apc_disabled;            //{ +0x0078@23 } | .EtwStackTraceCrimsonApcDisabled
        _m209 uint8_t                                    hgs_feedback_class;                              //{ +0x0204    } | .HgsFeedbackClass
        _m210 uint16_t                                   user_affinity_primary_group;                     //{ +0x0230    } | .UserAffinityPrimaryGroup
        _m211 uint16_t                                   affinity_primary_group;                          //{ +0x0248    } | .AffinityPrimaryGroup
        _m212 uint8_t                                    freeze_flags;                                    //{ +0x031a    } | .FreezeFlags
        _m213 uint1_t                                    freeze_count2;                                   //{ +0x031a@0  } | .FreezeCount2
        _m214 uint1_t                                    freeze_normal;                                   //{ +0x031a@1  } | .FreezeNormal
        _m215 uint1_t                                    freeze_deep;                                     //{ +0x031a@2  } | .FreezeDeep
        _m216 int32_t                                    realtime_priority_floor;                         //{ +0x0404    } | .RealtimePriorityFloor
        _m217 void*                                      kernel_shadow_stack;                             //{ +0x0408    } | .KernelShadowStack
        _m218 void*                                      kernel_shadow_stack_initial;                     //{ +0x0410    } | .KernelShadowStackInitial
        _m219 void*                                      kernel_shadow_stack_base;                        //{ +0x0418    } | .KernelShadowStackBase
        _m220 union nt::kernel_shadow_stack_limit_t      kernel_shadow_stack_limit;                       //{ +0x0420    } | .KernelShadowStackLimit
        _m221 uint64_t                                   extended_feature_disable_mask;                   //{ +0x0428    } | .ExtendedFeatureDisableMask
        _m222 uint64_t                                   hgs_feedback_start_time;                         //{ +0x0430    } | .HgsFeedbackStartTime
        _m223 uint64_t                                   hgs_feedback_cycles;                             //{ +0x0438    } | .HgsFeedbackCycles
        _m224 uint32_t                                   hgs_invalid_feedback_count;                      //{ +0x0440    } | .HgsInvalidFeedbackCount
        _m225 uint32_t                                   hgs_lower_perf_class_feedback_count;             //{ +0x0444    } | .HgsLowerPerfClassFeedbackCount
        _m226 uint32_t                                   hgs_higher_perf_class_feedback_count;            //{ +0x0448    } | .HgsHigherPerfClassFeedbackCount
        _m227 struct nt::single_list_entry_t             system_affinity_token_list_head;                 //{ +0x0450    } | .SystemAffinityTokenListHead
        _m228 void*                                      ipt_save_area;                                   //{ +0x0458    } | .IptSaveArea
        _m229 uint8_t                                    core_isolation_reasons;                          //{ +0x0461    } | .CoreIsolationReasons
        _m230 uint8_t                                    bam_qos_level_from_assist_page;                  //{ +0x0462    } | .BamQosLevelFromAssistPage
                                                                                                        
        SDK_MAGIC_PROPERTIES( "_KTHREAD.$", 0x430, true, 0xbf191bc1a23963f0 );                                               
        SDK_DYNAMIC_SIZE( kthread_t );                                                                  
    };                                                                                                  
};
#include "magic/kthread_t.end.hpp"
