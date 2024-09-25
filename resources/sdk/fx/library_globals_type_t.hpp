#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/pool_type_t.hpp"
#include "../mx/lock_no_dynam_t.hpp"
#include "../nt/osversioninfoexw_t.hpp"
#include "../wmi/wdf_notify_routines_t.hpp"
#include "driver_tracker_cache_aware_t.hpp"
#include "../nt/kbugcheck_reason_callback_record_t.hpp"

namespace io { struct connect_interrupt_parameters_t;             }
namespace io { struct disconnect_interrupt_parameters_t;          }
namespace io { struct report_interrupt_active_state_parameters_t; }
namespace nt { struct device_object_t;                            }
namespace nt { struct driver_object_t;                            }
namespace nt { struct kdpc_t;                                     }
namespace nt { struct ktimer_t;                                   }
namespace nt { struct pohandle_t;                                 }
namespace po { struct fx_device_v1_t;                             }

#include "magic/library_globals_type_t.start.hpp"
namespace fx
{
    struct driver_globals_t;
    class companion_library_t;
    struct dump_driver_info_entry_t;

    // [struct FxLibraryGlobalsType]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct library_globals_type_t                                                                    
    {                                                                                                
        using pfn_io_connect_interrupt_ex_t =     sdk::function<int32_t(struct io::connect_interrupt_parameters_t*)>*;                                        
        using pfn_io_disconnect_interrupt_ex_t =  sdk::function<int32_t(struct io::disconnect_interrupt_parameters_t*)>*;                                        
        using pfn_ke_set_coalescable_timer_t =    sdk::function<uint8_t(struct nt::ktimer_t*, int64_t, uint32_t, uint32_t, struct nt::kdpc_t*)>*;                                        
        using pfn_pox_register_device_t =         sdk::function<int32_t(struct nt::device_object_t*, struct po::fx_device_v1_t*, struct nt::pohandle_t**)>*;                                        
        using pox_activate_component_t =          sdk::function<int32_t(struct nt::pohandle_t*, uint32_t, uint32_t)>*;                                        
        using pox_idle_component_t =              sdk::function<int32_t(struct nt::pohandle_t*, uint32_t, uint32_t)>*;                                        
        using pox_complete_idle_state_t =         sdk::function<void(struct nt::pohandle_t*, uint32_t)>*;                                        
        using pox_complete_idle_condition_t =     sdk::function<void(struct nt::pohandle_t*, uint32_t)>*;                                        
        using pfn_pox_set_device_idle_timeout_t = sdk::function<void(struct nt::pohandle_t*, uint64_t)>*;                                        
        using io_report_interrupt_active_t =      sdk::function<void(struct io::report_interrupt_active_state_parameters_t*)>*;                                        
        using io_report_interrupt_inactive_t =    sdk::function<void(struct io::report_interrupt_active_state_parameters_t*)>*;                                        
        using pfn_vf_check_nx_pool_type_t =       sdk::function<void(enum nt::pool_type_t, void*, uint32_t)>*;                                        
                                                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                        
        //                                                                                           
        _m000 struct nt::driver_object_t*                    driver_object;                            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DriverObject
        _m001 struct nt::device_object_t*                    library_device_object;                    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .LibraryDeviceObject
        _m002 pfn_io_connect_interrupt_ex_t                  io_connect_interrupt_ex;                  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .IoConnectInterruptEx
        _m003 pfn_io_disconnect_interrupt_ex_t               io_disconnect_interrupt_ex;               //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .IoDisconnectInterruptEx
        _m004 sdk::function<uint64_t()>*                     ke_query_active_processors;               //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .KeQueryActiveProcessors
        _m005 sdk::function<void(struct nt::kdpc_t*, char)>* ke_set_target_processor_dpc;              //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .KeSetTargetProcessorDpc
        _m006 pfn_ke_set_coalescable_timer_t                 ke_set_coalescable_timer;                 //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .KeSetCoalescableTimer
        _m007 sdk::function<int32_t(void*)>*                 io_unregister_plug_play_notification_ex;  //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .IoUnregisterPlugPlayNotificationEx
        _m008 pfn_pox_register_device_t                      pox_register_device;                      //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .PoxRegisterDevice
        _m009 sdk::function<void(struct nt::pohandle_t*)>*   pox_start_device_power_management;        //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .PoxStartDevicePowerManagement
        _m010 sdk::function<void(struct nt::pohandle_t*)>*   pox_unregister_device;                    //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .PoxUnregisterDevice
        _m011 pox_activate_component_t                       pox_activate_component;                   //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .PoxActivateComponent
        _m012 pox_idle_component_t                           pox_idle_component;                       //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .PoxIdleComponent
        _m013 sdk::function<void(struct nt::pohandle_t*)>*   pox_report_device_powered_on;             //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .PoxReportDevicePoweredOn
        _m014 pox_complete_idle_state_t                      pox_complete_idle_state;                  //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .PoxCompleteIdleState
        _m015 pox_complete_idle_condition_t                  pox_complete_idle_condition;              //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .PoxCompleteIdleCondition
        _m016 sdk::function<void(struct nt::pohandle_t*)>*   pox_complete_device_power_not_required;   //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .PoxCompleteDevicePowerNotRequired
        _m017 pfn_pox_set_device_idle_timeout_t              pox_set_device_idle_timeout;              //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .PoxSetDeviceIdleTimeout
        _m018 io_report_interrupt_active_t                   io_report_interrupt_active;               //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .IoReportInterruptActive
        _m019 io_report_interrupt_inactive_t                 io_report_interrupt_inactive;             //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .IoReportInterruptInactive
        _m020 pfn_vf_check_nx_pool_type_t                    vf_check_nx_pool_type;                    //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .VfCheckNxPoolType
        _m021 struct nt::osversioninfoexw_t                  os_version_info;                          //{ +0x00a8    +0x00b0    +0x00b0    +0x00b0    } | .OsVersionInfo
        _m022 class mx::lock_no_dynam_t                      fx_driver_globals_list_lock;              //{ +0x01c8    +0x01d0    +0x01d0    +0x01d0    } | .FxDriverGlobalsListLock
        _m023 nt::list_entry_t                               fx_driver_globals_list;                   //{ +0x01d8    +0x01e0    +0x01e0    +0x01e0    } | .FxDriverGlobalsList
        _m024 uint32_t                                       bug_check_driver_info_index;              //{ +0x01e8    +0x01f0    +0x01f0    +0x01f0    } | .BugCheckDriverInfoIndex
        _m025 uint32_t                                       bug_check_driver_info_count;              //{ +0x01ec    +0x01f4    +0x01f4    +0x01f4    } | .BugCheckDriverInfoCount
        _m026 struct fx::dump_driver_info_entry_t*           bug_check_driver_info;                    //{ +0x01f0    +0x01f8    +0x01f8    +0x01f8    } | .BugCheckDriverInfo
        _m027 struct nt::kbugcheck_reason_callback_record_t  bug_check_callback_record;                //{ +0x01f8    +0x0200    +0x0200    +0x0200    } | .BugCheckCallbackRecord
        _m028 uint8_t                                        processor_group_support;                  //{ +0x0228    +0x0230    +0x0230    +0x0230    } | .ProcessorGroupSupport
        _m029 uint8_t                                        internal_tracing_initialized;             //{ +0x0229    +0x0231    +0x0231    +0x0231    } | .InternalTracingInitialized
        _m030 struct fx::driver_tracker_cache_aware_t        driver_tracker;                           //{ +0x0230    +0x0238    +0x0238    +0x0238    } | .DriverTracker
        _m031 struct fx::driver_globals_t*                   best_driver_for_dump_log;                 //{ +0x0248    +0x0250    +0x0250    +0x0250    } | .BestDriverForDumpLog
        _m032 uint8_t                                        passive_level_interrupt_support;          //{ +0x0250    +0x0258    +0x0258    +0x0258    } | .PassiveLevelInterruptSupport
        _m033 uint8_t                                        is_user_mode_framework;                   //{ +0x0251    +0x0259    +0x0259    +0x0259    } | .IsUserModeFramework
        _m034 uint8_t                                        statically_linked;                        //{ +0x0252    +0x025a    +0x025a    +0x025a    } | .StaticallyLinked
        _m035 sdk::array<uint8_t, 3>                         machine_sleep_states;                     //{ +0x0253    +0x025b    +0x025b    +0x025b    } | .MachineSleepStates
        _m036 void*                                          verifier_section_handle;                  //{ +0x0258    +0x0260    +0x0260    +0x0260    } | .VerifierSectionHandle
        _m037 volatile int32_t                               verifier_section_handle_ref_count;        //{ +0x0260    +0x0268    +0x0268    +0x0268    } | .VerifierSectionHandleRefCount
        _m038 struct wmi::wdf_notify_routines_t*             perf_trace_routines;                      //{ +0x0268    +0x0270    +0x0270    +0x0270    } | .PerfTraceRoutines
        _m039 struct wmi::wdf_notify_routines_t              dummy_perf_trace_routines;                //{ +0x0270    +0x0278    +0x0278    +0x0278    } | .DummyPerfTraceRoutines
        _m040 uint8_t                                        ifr_disabled;                             //{ +0x0290    +0x02a0    +0x02a0    +0x02a0    } | .IfrDisabled
                                                                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                            
        //                                                                                           
        _m041 sdk::function<uint8_t(uint32_t)>*              vf_is_rule_class_enabled;                 //{ +0x00a8    +0x00a8    +0x00a8    } | .VfIsRuleClassEnabled
        _m042 class fx::companion_library_t*                 companion_library;                        //{ +0x0298    +0x0298    +0x0298    } | .CompanionLibrary
        _m043 uint8_t                                        sleep_study_disabled;                     //{ +0x02a1    +0x02a1    +0x02a1    } | .SleepStudyDisabled
        _m044 uint8_t                                        wdf_directed_power_transition_enabled;    //{ +0x02a2    +0x02a2    +0x02a2    } | .WdfDirectedPowerTransitionEnabled
        _m045 uint8_t                                        allow_bind_to_pre_release_version;        //{ +0x02a3    +0x02a3    +0x02a3    } | .AllowBindToPreReleaseVersion
                                                                                                     
        // Windows 11                                                                                
        //                                                                                           
        _m046 uint8_t                                        use_wdf_timer_for_pofx;                   //{ +0x02a4    } | .UseWdfTimerForPofx
                                                                                                     
        SDK_MAGIC_PROPERTIES( "FxLibraryGlobalsType.$", 0x2a8, true, 0x3c70f27e054a0317 );                                        
        SDK_DYNAMIC_SIZE( library_globals_type_t );                                                  
    };                                                                                               
};
#include "magic/library_globals_type_t.end.hpp"
