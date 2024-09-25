#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dispatcher_header_t.start.hpp"
namespace nt
{
    // [struct _DISPATCHER_HEADER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct dispatcher_header_t                               
    {                                                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                   
        _m000 volatile int32_t lock;                           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Lock
        _m001 int32_t          lock_nv;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .LockNV
        _m002 uint8_t          type;                           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m003 uint8_t          signalling;                     //{ +0x0001    +0x0001    +0x0001    +0x0001    +0x0001    } | .Signalling
        _m004 uint8_t          size;                           //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Size
        _m005 uint8_t          timer_type;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .TimerType
        _m006 uint8_t          timer_control_flags;            //{ +0x0001    +0x0001    +0x0001    +0x0001    +0x0001    } | .TimerControlFlags
        _m007 uint1_t          absolute;                       //{ +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  } | .Absolute
        _m008 uint1_t          wake;                           //{ +0x0001@1  +0x0001@1  +0x0001@1  +0x0001@1  +0x0001@1  } | .Wake
        _m009 uint6_t          encoded_tolerable_delay;        //{ +0x0001@2  +0x0001@2  +0x0001@2  +0x0001@2  +0x0001@2  } | .EncodedTolerableDelay
        _m010 uint8_t          hand;                           //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Hand
        _m011 uint8_t          timer_misc_flags;               //{ +0x0003    +0x0003    +0x0003    +0x0003    +0x0003    } | .TimerMiscFlags
        _m012 uint6_t          index;                          //{ +0x0003@0  +0x0003@0  +0x0003@0  +0x0003@0  +0x0003@0  } | .Index
        _m013 uint1_t          inserted;                       //{ +0x0003@6  +0x0003@6  +0x0003@6  +0x0003@6  +0x0003@6  } | .Inserted
        _m014 uint1_t          expired;                        //{ +0x0003@7  +0x0003@7  +0x0003@7  +0x0003@7  +0x0003@7  } | .Expired
        _m015 uint8_t          timer2_type;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Timer2Type
        _m016 uint8_t          timer2_flags;                   //{ +0x0001    +0x0001    +0x0001    +0x0001    +0x0001    } | .Timer2Flags
        _m017 uint1_t          timer2_inserted;                //{ +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  } | .Timer2Inserted
        _m018 uint1_t          timer2_expiring;                //{ +0x0001@1  +0x0001@1  +0x0001@1  +0x0001@1  +0x0001@1  } | .Timer2Expiring
        _m019 uint1_t          timer2_cancel_pending;          //{ +0x0001@2  +0x0001@2  +0x0001@2  +0x0001@2  +0x0001@2  } | .Timer2CancelPending
        _m020 uint1_t          timer2_set_pending;             //{ +0x0001@3  +0x0001@3  +0x0001@3  +0x0001@3  +0x0001@3  } | .Timer2SetPending
        _m021 uint1_t          timer2_running;                 //{ +0x0001@4  +0x0001@4  +0x0001@4  +0x0001@4  +0x0001@4  } | .Timer2Running
        _m022 uint1_t          timer2_disabled;                //{ +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  } | .Timer2Disabled
        _m023 uint2_t          timer2_reserved_flags;          //{ +0x0001@6  +0x0001@6  +0x0001@6  +0x0001@6  +0x0001@6  } | .Timer2ReservedFlags
        _m024 uint8_t          queue_type;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .QueueType
        _m025 uint8_t          queue_control_flags;            //{ +0x0001    +0x0001    +0x0001    +0x0001    +0x0001    } | .QueueControlFlags
        _m026 uint1_t          abandoned;                      //{ +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  } | .Abandoned
        _m027 uint1_t          disable_increment;              //{ +0x0001@1  +0x0001@1  +0x0001@1  +0x0001@1  +0x0001@1  } | .DisableIncrement
        _m028 uint6_t          queue_reserved_control_flags;   //{ +0x0001@2  +0x0001@2  +0x0001@2  +0x0001@2  +0x0001@2  } | .QueueReservedControlFlags
        _m029 uint8_t          queue_size;                     //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .QueueSize
        _m030 uint8_t          queue_reserved;                 //{ +0x0003    +0x0003    +0x0003    +0x0003    +0x0003    } | .QueueReserved
        _m031 uint8_t          thread_type;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ThreadType
        _m032 uint8_t          thread_control_flags;           //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .ThreadControlFlags
        _m033 uint1_t          cycle_profiling;                //{ +0x0002@0  +0x0002@0  +0x0002@0  +0x0002@0  +0x0002@0  } | .CycleProfiling
        _m034 uint1_t          counter_profiling;              //{ +0x0002@1  +0x0002@1  +0x0002@1  +0x0002@1  +0x0002@1  } | .CounterProfiling
        _m035 uint1_t          group_scheduling;               //{ +0x0002@2  +0x0002@2  +0x0002@2  +0x0002@2  +0x0002@2  } | .GroupScheduling
        _m036 uint1_t          affinity_set;                   //{ +0x0002@3  +0x0002@3  +0x0002@3  +0x0002@3  +0x0002@3  } | .AffinitySet
        _m037 uint1_t          tagged;                         //{ +0x0002@4  +0x0002@4  +0x0002@4  +0x0002@4  +0x0002@4  } | .Tagged
        _m038 uint1_t          energy_profiling;               //{ +0x0002@5  +0x0002@5  +0x0002@5  +0x0002@5  +0x0002@5  } | .EnergyProfiling
        _m039 varuint_t        thread_reserved_control_flags;  //{ +0x0002@7  +0x0002@6  +0x0002@7  +0x0002@7  +0x0002@7  } | .ThreadReservedControlFlags
        _m040 uint8_t          debug_active;                   //{ +0x0003    +0x0003    +0x0003    +0x0003    +0x0003    } | .DebugActive
        _m041 uint1_t          active_dr7;                     //{ +0x0003@0  +0x0003@0  +0x0003@0  +0x0003@0  +0x0003@0  } | .ActiveDR7
        _m042 uint1_t          instrumented;                   //{ +0x0003@1  +0x0003@1  +0x0003@1  +0x0003@1  +0x0003@1  } | .Instrumented
        _m043 uint1_t          minimal;                        //{ +0x0003@2  +0x0003@2  +0x0003@2  +0x0003@2  +0x0003@2  } | .Minimal
        _m044 uint8_t          mutant_type;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .MutantType
        _m045 uint8_t          mutant_size;                    //{ +0x0001    +0x0001    +0x0001    +0x0001    +0x0001    } | .MutantSize
        _m046 uint8_t          dpc_active;                     //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .DpcActive
        _m047 uint8_t          mutant_reserved;                //{ +0x0003    +0x0003    +0x0003    +0x0003    +0x0003    } | .MutantReserved
        _m048 int32_t          signal_state;                   //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .SignalState
        _m049 nt::list_entry_t wait_list_head;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .WaitListHead
                                                             
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                   
        _m050 uint8_t          timer2_component_id;            //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Timer2ComponentId
        _m051 uint8_t          timer2_relative_id;             //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .Timer2RelativeId
        _m052 uint8_t          thread_reserved;                //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .ThreadReserved
        _m053 uint1_t          scheduler_assist;               //{ +0x0002@6  +0x0002@6  +0x0002@6  +0x0002@6  } | .SchedulerAssist
        _m054 uint1_t          alt_syscall;                    //{ +0x0003@5  +0x0003@5  +0x0003@5  +0x0003@5  } | .AltSyscall
                                                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                              
        //                                                   
        _m055 uint1_t          ums_scheduled;                  //{ +0x0003@6  +0x0003@6  +0x0003@6  +0x0003@6  } | .UmsScheduled
        _m056 uint1_t          ums_primary;                    //{ +0x0003@7  +0x0003@7  +0x0003@7  +0x0003@7  } | .UmsPrimary
                                                             
        // Windows 10 v1607                                  
        //                                                   
        _m057 uint8_t          timer2_reserved1;               //{ +0x0002    } | .Timer2Reserved1
        _m058 uint8_t          timer2_reserved2;               //{ +0x0003    } | .Timer2Reserved2
        _m059 uint8_t          thread_spec_control;            //{ +0x0001    } | .ThreadSpecControl
        _m060 uint1_t          spec_control_ibrs;              //{ +0x0001@0  } | .SpecControlIbrs
        _m061 uint1_t          spec_control_stibp;             //{ +0x0001@1  } | .SpecControlStibp
        _m062 uint6_t          spec_control_reserved;          //{ +0x0001@2  } | .SpecControlReserved
                                                             
        // Windows 11                                        
        //                                                   
        _m063 uint1_t          emulation;                      //{ +0x0003@6  } | .Emulation
                                                             
        SDK_NONVOL_PROPERTIES( "_DISPATCHER_HEADER.$", 0x18, true, 0x66ca53af3ed5300b );                              
        SDK_FIXED_SIZE( dispatcher_header_t, 0x18 );                              
    };                                                       
};
#include "magic/dispatcher_header_t.end.hpp"
SDK_VERIFY( struct nt::dispatcher_header_t, 0x18 );
