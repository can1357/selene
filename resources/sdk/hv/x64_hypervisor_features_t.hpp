#pragma once
#include <sdkgen/support_library.hpp>
#include "partition_privilege_mask_t.hpp"

#include "magic/x64_hypervisor_features_t.start.hpp"
namespace hv
{
    // [struct _HV_X64_HYPERVISOR_FEATURES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct x64_hypervisor_features_t                                                                            
    {                                                                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                             
        //                                                                                                      
        _m000 union hv::partition_privilege_mask_t partition_privileges;                                          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PartitionPrivileges
        _m001 uint4_t                              max_supported_c_state;                                         //{ +0x0008@0  +0x0008@0  +0x0008@0  +0x0008@0  } | .MaxSupportedCState
        _m002 uint1_t                              hpet_needed_for_c3_power_state_deprecated;                     //{ +0x0008@4  +0x0008@4  +0x0008@4  +0x0008@4  } | .HpetNeededForC3PowerState_Deprecated
        _m003 uint1_t                              mwait_available_deprecated;                                    //{ +0x000c@0  +0x000c@0  +0x000c@0  +0x000c@0  } | .MwaitAvailable_Deprecated
        _m004 uint1_t                              guest_debugging_available;                                     //{ +0x000c@1  +0x000c@1  +0x000c@1  +0x000c@1  } | .GuestDebuggingAvailable
        _m005 uint1_t                              performance_monitors_available;                                //{ +0x000c@2  +0x000c@2  +0x000c@2  +0x000c@2  } | .PerformanceMonitorsAvailable
        _m006 uint1_t                              cpu_dynamic_partitioning_available;                            //{ +0x000c@3  +0x000c@3  +0x000c@3  +0x000c@3  } | .CpuDynamicPartitioningAvailable
        _m007 uint1_t                              xmm_registers_for_fast_hypercall_available;                    //{ +0x000c@4  +0x000c@4  +0x000c@4  +0x000c@4  } | .XmmRegistersForFastHypercallAvailable
        _m008 uint1_t                              guest_idle_available;                                          //{ +0x000c@5  +0x000c@5  +0x000c@5  +0x000c@5  } | .GuestIdleAvailable
        _m009 uint1_t                              hypervisor_sleep_state_support_available;                      //{ +0x000c@6  +0x000c@6  +0x000c@6  +0x000c@6  } | .HypervisorSleepStateSupportAvailable
        _m010 uint1_t                              numa_distance_query_available;                                 //{ +0x000c@7  +0x000c@7  +0x000c@7  +0x000c@7  } | .NumaDistanceQueryAvailable
        _m011 uint1_t                              frequency_regs_available;                                      //{ +0x000c@8  +0x000c@8  +0x000c@8  +0x000c@8  } | .FrequencyRegsAvailable
        _m012 uint1_t                              synthetic_machine_check_available;                             //{ +0x000c@9  +0x000c@9  +0x000c@9  +0x000c@9  } | .SyntheticMachineCheckAvailable
        _m013 uint1_t                              guest_crash_regs_available;                                    //{ +0x000c@10 +0x000c@10 +0x000c@10 +0x000c@10 } | .GuestCrashRegsAvailable
        _m014 uint1_t                              debug_regs_available;                                          //{ +0x000c@11 +0x000c@11 +0x000c@11 +0x000c@11 } | .DebugRegsAvailable
        _m015 uint1_t                              npiep1_available;                                              //{ +0x000c@12 +0x000c@12 +0x000c@12 +0x000c@12 } | .Npiep1Available
        _m016 uint1_t                              disable_hypervisor_available;                                  //{ +0x000c@13 +0x000c@13 +0x000c@13 +0x000c@13 } | .DisableHypervisorAvailable
        _m017 uint1_t                              extended_gva_ranges_for_flush_virtual_address_list_available;  //{ +0x000c@14 +0x000c@14 +0x000c@14 +0x000c@14 } | .ExtendedGvaRangesForFlushVirtualAddressListAvailable
        _m018 uint1_t                              fast_hypercall_output_available;                               //{ +0x000c@15 +0x000c@15 +0x000c@15 +0x000c@15 } | .FastHypercallOutputAvailable
        _m019 uint1_t                              svm_features_available;                                        //{ +0x000c@16 +0x000c@16 +0x000c@16 +0x000c@16 } | .SvmFeaturesAvailable
        _m020 uint1_t                              sint_polling_mode_available;                                   //{ +0x000c@17 +0x000c@17 +0x000c@17 +0x000c@17 } | .SintPollingModeAvailable
        _m021 uint1_t                              hypercall_msr_lock_available;                                  //{ +0x000c@18 +0x000c@18 +0x000c@18 +0x000c@18 } | .HypercallMsrLockAvailable
        _m022 uint1_t                              direct_synthetic_timers;                                       //{ +0x000c@19 +0x000c@19 +0x000c@19 +0x000c@19 } | .DirectSyntheticTimers
                                                                                                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                             
        //                                                                                                      
        _m023 uint1_t                              register_pat_available;                                        //{ +0x000c@20 +0x000c@20 +0x000c@20 } | .RegisterPatAvailable
        _m024 uint1_t                              register_bndcfgs_available;                                    //{ +0x000c@21 +0x000c@21 +0x000c@21 } | .RegisterBndcfgsAvailable
        _m025 uint1_t                              watchdog_timer_available;                                      //{ +0x000c@22 +0x000c@22 +0x000c@22 } | .WatchdogTimerAvailable
        _m026 uint1_t                              synthetic_time_unhalted_timer_available;                       //{ +0x000c@23 +0x000c@23 +0x000c@23 } | .SyntheticTimeUnhaltedTimerAvailable
        _m027 uint1_t                              device_domains_available;                                      //{ +0x000c@24 +0x000c@24 +0x000c@24 } | .DeviceDomainsAvailable
        _m028 uint1_t                              s1_device_domains_available;                                   //{ +0x000c@25 +0x000c@25 +0x000c@25 } | .S1DeviceDomainsAvailable
        _m029 uint1_t                              lbr_available;                                                 //{ +0x000c@26 +0x000c@26 +0x000c@26 } | .LbrAvailable
        _m030 uint1_t                              ipt_available;                                                 //{ +0x000c@27 +0x000c@27 +0x000c@27 } | .IptAvailable
        _m031 uint1_t                              cross_vtl_flush_available;                                     //{ +0x000c@28 +0x000c@28 +0x000c@28 } | .CrossVtlFlushAvailable
        _m032 uint1_t                              idle_spec_ctrl_available;                                      //{ +0x000c@29 +0x000c@29 +0x000c@29 } | .IdleSpecCtrlAvailable
                                                                                                                
        // Windows 11                                                                                           
        //                                                                                                      
        _m033 uint1_t                              invariant_mperf_available;                                     //{ +0x0008@5  } | .InvariantMperfAvailable
        _m034 uint1_t                              supervisor_shadow_stack_available;                             //{ +0x0008@6  } | .SupervisorShadowStackAvailable
        _m035 uint1_t                              arch_pmu_available;                                            //{ +0x0008@7  } | .ArchPmuAvailable
        _m036 uint1_t                              exception_trap_intercept_available;                            //{ +0x0008@8  } | .ExceptionTrapInterceptAvailable
        _m037 uint1_t                              translate_gva_flags_available;                                 //{ +0x000c@30 } | .TranslateGvaFlagsAvailable
        _m038 uint1_t                              apic_eoi_intercept_available;                                  //{ +0x000c@31 } | .ApicEoiInterceptAvailable
                                                                                                                
        SDK_MAGIC_PROPERTIES( "_HV_X64_HYPERVISOR_FEATURES.$", 0x10, true, 0xfa7104b23b18a6e7 );                                                             
        SDK_FIXED_SIZE( x64_hypervisor_features_t, 0x10 );                                                             
    };                                                                                                          
};
#include "magic/x64_hypervisor_features_t.end.hpp"
SDK_VERIFY( struct hv::x64_hypervisor_features_t, 0x10 );
