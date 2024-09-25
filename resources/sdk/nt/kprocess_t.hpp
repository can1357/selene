#pragma once
#include <sdkgen/support_library.hpp>
#include "fast_mutex_t.hpp"
#include "kgdtentry64_t.hpp"
#include "kaffinity_ex_t.hpp"
#include "kstack_count_t.hpp"
#include "kexecute_options_t.hpp"
#include "dispatcher_header_t.hpp"
#include "single_list_entry_t.hpp"

#include "magic/kprocess_t.start.hpp"
namespace nt
{
    struct kscheduling_group_t;

    // [struct _KPROCESS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct kprocess_t                                                                   
    {                                                                                   
        union u0_secure_state_t                                                         
        {                                                                               
            struct u3_flags_t                                                           
            {                                                                           
                // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                           
                //                                                                      
                _m43 uint1_t secure_process;                                              //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .SecureProcess
                                                                                        
                SDK_MAGIC_PROPERTIES( "_KPROCESS.SecureState.Flags.$", 0x8, true, 0xb0562542633b8aa1 );                                                           
                SDK_FIXED_SIZE( u3_flags_t, 0x8 );                                                           
            };                                                                          
                                                                                        
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                            
            //                                                                          
            _m42 uint64_t                   secure_handle;                                //{ +0x0000    +0x0000    +0x0000    } | .SecureHandle
            _m44 u3_flags_t                 flags;                                        //{ +0x0000    +0x0000    +0x0000    } | .Flags
                                                                                        
            SDK_MAGIC_PROPERTIES( "_KPROCESS.SecureState.$", 0x8, true, 0x72779ace037cbd7 );                                            
            SDK_FIXED_SIZE( u0_secure_state_t, 0x8 );                                            
        };                                                                              
                                                                                        
        using thread_seed_t = sdk::variant<sdk::array<uint32_t, 20>, sdk::array<uint16_t, 20>>;                              
                                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                              
        _m000 struct nt::dispatcher_header_t              header;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m001 nt::list_entry_t                            profile_list_head;              //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ProfileListHead
        _m002 uint64_t                                    directory_table_base;           //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .DirectoryTableBase
        _m003 nt::list_entry_t                            thread_list_head;               //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .ThreadListHead
        _m004 uint32_t                                    process_lock;                   //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .ProcessLock
        _m005 uint64_t                                    deep_freeze_start_time;         //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .DeepFreezeStartTime
        _m006 struct nt::kaffinity_ex_t                   affinity;                       //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .Affinity
        _m007 nt::list_entry_t                            ready_list_head;                //{ +0x00f8    +0x0158    +0x0158    +0x0158    } | .ReadyListHead
        _m008 struct nt::single_list_entry_t              swap_list_entry;                //{ +0x0108    +0x0168    +0x0168    +0x0168    } | .SwapListEntry
        _m009 volatile struct nt::kaffinity_ex_t          active_processors;              //{ +0x0110    +0x0170    +0x0170    +0x0170    } | .ActiveProcessors
        _m010 volatile int1_t                             auto_alignment;                 //{ +0x01b8@0  +0x0278@0  +0x0278@0  +0x0278@0  } | .AutoAlignment
        _m011 volatile int1_t                             disable_boost;                  //{ +0x01b8@1  +0x0278@1  +0x0278@1  +0x0278@1  } | .DisableBoost
        _m012 volatile int1_t                             disable_quantum;                //{ +0x01b8@2  +0x0278@2  +0x0278@2  +0x0278@2  } | .DisableQuantum
        _m013 volatile uint1_t                            deep_freeze;                    //{ +0x01b8@3  +0x0278@3  +0x0278@3  +0x0278@3  } | .DeepFreeze
        _m014 volatile uint1_t                            timer_virtualization;           //{ +0x01b8@4  +0x0278@4  +0x0278@4  +0x0278@4  } | .TimerVirtualization
        _m015 volatile uint1_t                            check_stack_extents;            //{ +0x01b8@5  +0x0278@5  +0x0278@5  +0x0278@5  } | .CheckStackExtents
        _m016 volatile int32_t                            process_flags;                  //{ +0x01b8    +0x0278    +0x0278    +0x0278    } | .ProcessFlags
        _m017 varuint_t                                   active_groups_mask;             //{ +0x01b8@8  +0x027c    +0x027c    +0x027c    } | .ActiveGroupsMask
        _m018 char                                        base_priority;                  //{ +0x01bc    +0x0280    +0x0280    +0x0280    } | .BasePriority
        _m019 char                                        quantum_reset;                  //{ +0x01bd    +0x0281    +0x0281    +0x0281    } | .QuantumReset
        _m020 uint8_t                                     visited;                        //{ +0x01be    +0x0282    +0x0282    +0x0282    } | .Visited
        _m021 union nt::kexecute_options_t                flags;                          //{ +0x01bf    +0x0283    +0x0283    +0x0283    } | .Flags
        _m022 thread_seed_t                               thread_seed;                    //{ +0x01c0    +0x0284    +0x0284    +0x0284    } | .ThreadSeed
        _m023 sdk::array<uint16_t, 20>                    ideal_node;                     //{ +0x0210    +0x0304    +0x0304    +0x0304    } | .IdealNode
        _m024 uint16_t                                    ideal_global_node;              //{ +0x0238    +0x0344    +0x0344    +0x0344    } | .IdealGlobalNode
        _m025 volatile union nt::kstack_count_t           stack_count;                    //{ +0x023c    +0x0348    +0x0348    +0x0348    } | .StackCount
        _m026 nt::list_entry_t                            process_list_entry;             //{ +0x0240    +0x0350    +0x0350    +0x0350    } | .ProcessListEntry
        _m027 uint64_t                                    cycle_time;                     //{ +0x0250    +0x0360    +0x0360    +0x0360    } | .CycleTime
        _m028 uint64_t                                    context_switches;               //{ +0x0258    +0x0368    +0x0368    +0x0368    } | .ContextSwitches
        _m029 struct nt::kscheduling_group_t*             scheduling_group;               //{ +0x0260    +0x0370    +0x0370    +0x0370    } | .SchedulingGroup
        _m030 uint32_t                                    freeze_count;                   //{ +0x0268    +0x0378    +0x0378    +0x0378    } | .FreezeCount
        _m031 uint32_t                                    kernel_time;                    //{ +0x026c    +0x037c    +0x037c    +0x037c    } | .KernelTime
        _m032 uint32_t                                    user_time;                      //{ +0x0270    +0x0380    +0x0380    +0x0380    } | .UserTime
        _m033 void*                                       instrumentation_callback;       //{ +0x02c8    +0x03d8    +0x03d8    +0x03d8    } | .InstrumentationCallback
                                                                                        
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                                              
        _m034 uint32_t                                    process_timer_delay;            //{ +0x0044    +0x0044    +0x0044    } | .ProcessTimerDelay
        _m035 volatile uint1_t                            cache_isolation_enabled;        //{ +0x0278@6  +0x0278@6  +0x0278@6  } | .CacheIsolationEnabled
        _m036 varuint_t                                   ppm_policy;                     //{ +0x0278@7  +0x0278@7  +0x0278@7  } | .PpmPolicy
        _m037 volatile uint1_t                            va_space_deleted;               //{ +0x0278@10 +0x0278@11 +0x0278@10 } | .VaSpaceDeleted
        _m038 sdk::array<uint16_t, 20>                    ideal_processor;                //{ +0x02c4    +0x02c4    +0x02c4    } | .IdealProcessor
        _m039 uint32_t                                    ready_time;                     //{ +0x0384    +0x0384    +0x0384    } | .ReadyTime
        _m040 uint64_t                                    user_directory_table_base;      //{ +0x0388    +0x0388    +0x0388    } | .UserDirectoryTableBase
        _m041 uint8_t                                     address_policy;                 //{ +0x0390    +0x0390    +0x0390    } | .AddressPolicy
        _m045 u0_secure_state_t                           secure_state;                   //{ +0x03e0    +0x03e0    +0x03e0    } | .SecureState
        _m046 uint64_t                                    kernel_wait_time;               //{ +0x03e8    +0x03e8    +0x03e8    } | .KernelWaitTime
        _m047 uint64_t                                    user_wait_time;                 //{ +0x03f0    +0x03f0    +0x03f0    } | .UserWaitTime
        _m048 sdk::array<uint64_t, 8>                     end_padding;                    //{ +0x03f8    +0x0430    +0x03f8    } | .EndPadding
                                                                                        
        // Windows 10 v2004, Windows 10 v20H2                                           
        //                                                                              
        _m049 sdk::array<uint64_t, 12>                    affinity_padding;               //{ +0x00f8    +0x00f8    } | .AffinityPadding
        _m050 sdk::array<uint64_t, 12>                    active_processors_padding;      //{ +0x0218    +0x0218    } | .ActiveProcessorsPadding
        _m051 sdk::array<uint16_t, 12>                    thread_seed_padding;            //{ +0x02ac    +0x02ac    } | .ThreadSeedPadding
        _m052 sdk::array<uint16_t, 12>                    ideal_processor_padding;        //{ +0x02ec    +0x02ec    } | .IdealProcessorPadding
        _m053 sdk::array<uint16_t, 12>                    ideal_node_padding;             //{ +0x032c    +0x032c    } | .IdealNodePadding
                                                                                        
        // Windows 10 v1607                                                             
        //                                                                              
        _m054 volatile uint2_t                            spare_flags0;                   //{ +0x01b8@6  } | .SpareFlags0
        _m055 uint16_t                                    ldt_free_selector_hint;         //{ +0x0274    } | .LdtFreeSelectorHint
        _m056 uint16_t                                    ldt_table_length;               //{ +0x0276    } | .LdtTableLength
        _m057 union nt::kgdtentry64_t                     ldt_system_descriptor;          //{ +0x0278    } | .LdtSystemDescriptor
        _m058 void*                                       ldt_base_address;               //{ +0x0288    } | .LdtBaseAddress
        _m059 struct nt::fast_mutex_t                     ldt_process_lock;               //{ +0x0290    } | .LdtProcessLock
        _m060 uint64_t                                    secure_pid;                     //{ +0x02d0    } | .SecurePid
                                                                                        
        // Windows 11                                                                   
        //                                                                              
        _m061 volatile uint1_t                            multi_group;                    //{ +0x0278@12 } | .MultiGroup
        _m062 uint64_t                                    last_rebalance_qpc;             //{ +0x03f8    } | .LastRebalanceQpc
        _m063 void*                                       per_processor_cycle_times;      //{ +0x0400    } | .PerProcessorCycleTimes
        _m064 uint64_t                                    extended_feature_disable_mask;  //{ +0x0408    } | .ExtendedFeatureDisableMask
        _m065 uint16_t                                    primary_group;                  //{ +0x0410    } | .PrimaryGroup
        _m066 void*                                       user_cet_logging;               //{ +0x0418    } | .UserCetLogging
        _m067 nt::list_entry_t                            cpu_partition_list;             //{ +0x0420    } | .CpuPartitionList
                                                                                        
        SDK_MAGIC_PROPERTIES( "_KPROCESS.$", 0x438, true, 0x3e02b23d1b4c1a09 );                              
        SDK_DYNAMIC_SIZE( kprocess_t );                                                 
    };                                                                                  
};
#include "magic/kprocess_t.end.hpp"
SDK_VERIFY( struct nt::kprocess_t::u0_secure_state_t::u3_flags_t, 0x8 );
SDK_VERIFY( union nt::kprocess_t::u0_secure_state_t, 0x8 );
