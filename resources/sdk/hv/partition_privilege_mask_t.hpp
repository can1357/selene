#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/partition_privilege_mask_t.start.hpp"
namespace hv
{
    // [union _HV_PARTITION_PRIVILEGE_MASK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union partition_privilege_mask_t                                             
    {                                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                          
        //                                                                       
        _m000 uint64_t as_uint64;                                                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUINT64
        _m001 uint1_t  access_vp_run_time_reg;                                     //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .AccessVpRunTimeReg
        _m002 uint1_t  access_partition_reference_counter;                         //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .AccessPartitionReferenceCounter
        _m003 uint1_t  access_synic_regs;                                          //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .AccessSynicRegs
        _m004 uint1_t  access_synthetic_timer_regs;                                //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .AccessSyntheticTimerRegs
        _m005 uint1_t  access_intr_ctrl_regs;                                      //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .AccessIntrCtrlRegs
        _m006 uint1_t  access_hypercall_msrs;                                      //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .AccessHypercallMsrs
        _m007 uint1_t  access_vp_index;                                            //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .AccessVpIndex
        _m008 uint1_t  access_reset_reg;                                           //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .AccessResetReg
        _m009 uint1_t  access_stats_reg;                                           //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .AccessStatsReg
        _m010 uint1_t  access_partition_reference_tsc;                             //{ +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  } | .AccessPartitionReferenceTsc
        _m011 uint1_t  access_guest_idle_reg;                                      //{ +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 } | .AccessGuestIdleReg
        _m012 uint1_t  access_frequency_regs;                                      //{ +0x0000@11 +0x0000@11 +0x0000@11 +0x0000@11 } | .AccessFrequencyRegs
        _m013 uint1_t  access_debug_regs;                                          //{ +0x0000@12 +0x0000@12 +0x0000@12 +0x0000@12 } | .AccessDebugRegs
        _m014 uint1_t  access_reenlightenment_controls;                            //{ +0x0000@13 +0x0000@13 +0x0000@13 +0x0000@13 } | .AccessReenlightenmentControls
        _m015 uint1_t  create_partitions;                                          //{ +0x0000@32 +0x0000@32 +0x0000@32 +0x0000@32 } | .CreatePartitions
        _m016 uint1_t  access_partition_id;                                        //{ +0x0000@33 +0x0000@33 +0x0000@33 +0x0000@33 } | .AccessPartitionId
        _m017 uint1_t  access_memory_pool;                                         //{ +0x0000@34 +0x0000@34 +0x0000@34 +0x0000@34 } | .AccessMemoryPool
        _m018 uint1_t  adjust_message_buffers;                                     //{ +0x0000@35 +0x0000@35 +0x0000@35 +0x0000@35 } | .AdjustMessageBuffers
        _m019 uint1_t  post_messages;                                              //{ +0x0000@36 +0x0000@36 +0x0000@36 +0x0000@36 } | .PostMessages
        _m020 uint1_t  signal_events;                                              //{ +0x0000@37 +0x0000@37 +0x0000@37 +0x0000@37 } | .SignalEvents
        _m021 uint1_t  create_port;                                                //{ +0x0000@38 +0x0000@38 +0x0000@38 +0x0000@38 } | .CreatePort
        _m022 uint1_t  connect_port;                                               //{ +0x0000@39 +0x0000@39 +0x0000@39 +0x0000@39 } | .ConnectPort
        _m023 uint1_t  access_stats;                                               //{ +0x0000@40 +0x0000@40 +0x0000@40 +0x0000@40 } | .AccessStats
        _m024 uint1_t  debugging;                                                  //{ +0x0000@43 +0x0000@43 +0x0000@43 +0x0000@43 } | .Debugging
        _m025 uint1_t  cpu_management;                                             //{ +0x0000@44 +0x0000@44 +0x0000@44 +0x0000@44 } | .CpuManagement
        _m026 uint1_t  configure_profiler;                                         //{ +0x0000@45 +0x0000@45 +0x0000@45 +0x0000@45 } | .ConfigureProfiler
        _m027 uint1_t  access_vp_exit_tracing;                                     //{ +0x0000@46 +0x0000@46 +0x0000@46 +0x0000@46 } | .AccessVpExitTracing
        _m028 uint1_t  enable_extended_gva_ranges_for_flush_virtual_address_list;  //{ +0x0000@47 +0x0000@47 +0x0000@47 +0x0000@47 } | .EnableExtendedGvaRangesForFlushVirtualAddressList
        _m029 uint1_t  access_vsm;                                                 //{ +0x0000@48 +0x0000@48 +0x0000@48 +0x0000@48 } | .AccessVsm
        _m030 uint1_t  access_vp_registers;                                        //{ +0x0000@49 +0x0000@49 +0x0000@49 +0x0000@49 } | .AccessVpRegisters
        _m031 uint1_t  unused_bit;                                                 //{ +0x0000@50 +0x0000@50 +0x0000@50 +0x0000@50 } | .UnusedBit
        _m032 uint1_t  fast_hypercall_output;                                      //{ +0x0000@51 +0x0000@51 +0x0000@51 +0x0000@51 } | .FastHypercallOutput
        _m033 uint1_t  enable_extended_hypercalls;                                 //{ +0x0000@52 +0x0000@52 +0x0000@52 +0x0000@52 } | .EnableExtendedHypercalls
        _m034 uint1_t  start_virtual_processor;                                    //{ +0x0000@53 +0x0000@53 +0x0000@53 +0x0000@53 } | .StartVirtualProcessor
                                                                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                          
        //                                                                       
        _m035 uint1_t  access_root_scheduler_reg;                                  //{ +0x0000@14 +0x0000@14 +0x0000@14 } | .AccessRootSchedulerReg
        _m036 uint1_t  access_tsc_invariant_controls;                              //{ +0x0000@15 +0x0000@15 +0x0000@15 } | .AccessTscInvariantControls
        _m037 uint1_t  isolation;                                                  //{ +0x0000@54 +0x0000@54 +0x0000@54 } | .Isolation
                                                                                 
        SDK_MAGIC_PROPERTIES( "_HV_PARTITION_PRIVILEGE_MASK.$", 0x8, true, 0x770be7033dcdc8bf );                                                          
        SDK_FIXED_SIZE( partition_privilege_mask_t, 0x8 );                                                          
    };                                                                           
};
#include "magic/partition_privilege_mask_t.end.hpp"
SDK_VERIFY( union hv::partition_privilege_mask_t, 0x8 );
