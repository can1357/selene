#pragma once
#include <sdkgen/support_library.hpp>
#include "idle_state_t.hpp"
#include "selection_menu_t.hpp"
#include "../nt/kaffinity_ex_t.hpp"
#include "coordinated_selection_t.hpp"
#include "../nt/processor_idle_prepare_info_t.hpp"

namespace nt { struct perfinfo_ppm_state_selection_t; }
namespace nt { struct processor_idle_constraints_t;   }

#include "magic/idle_states_t.start.hpp"
namespace ppm
{
    // [struct _PPM_IDLE_STATES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct idle_states_t                                                              
    {                                                                                 
        using idle_prepare_t =     sdk::function<void(struct nt::processor_idle_prepare_info_t*)>*;                             
        using idle_pre_execute_t = sdk::function<int32_t(void*, uint32_t, uint32_t, uint32_t, uint32_t*)>*;                             
        using idle_execute_t =     sdk::variant<sdk::function<int32_t(void*, uint32_t, uint32_t, uint32_t, uint32_t*)>*, sdk::function<int32_t(void*, uint64_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t*)>*>;                             
        using idle_preselect_t =   sdk::function<uint32_t(void*, struct nt::processor_idle_constraints_t*)>*;                             
        using idle_test_t =        sdk::function<uint32_t(void*, uint32_t, uint32_t)>*;                             
        using idle_complete_t =    sdk::function<void(void*, uint32_t, uint32_t, uint32_t, uint32_t*)>*;                             
                                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                            
        _m000 uint8_t                                    interface_version;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .InterfaceVersion
        _m001 uint8_t                                    estimate_idle_duration;        //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .EstimateIdleDuration
        _m002 uint8_t                                    exit_latency_trace_enabled;    //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .ExitLatencyTraceEnabled
        _m003 uint8_t                                    non_interruptible_transition;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .NonInterruptibleTransition
        _m004 uint8_t                                    unaccounted_transition;        //{ +0x0005    +0x0005    +0x0005    +0x0005    } | .UnaccountedTransition
        _m005 uint8_t                                    idle_duration_limited;         //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .IdleDurationLimited
        _m006 uint8_t                                    idle_check_limited;            //{ +0x0007    +0x0007    +0x0007    +0x0007    } | .IdleCheckLimited
        _m007 uint32_t                                   exit_latency_countdown;        //{ +0x0008    +0x000c    +0x0014    +0x000c    } | .ExitLatencyCountdown
        _m008 uint32_t                                   target_state;                  //{ +0x000c    +0x0010    +0x0018    +0x0010    } | .TargetState
        _m009 uint32_t                                   actual_state;                  //{ +0x0010    +0x0014    +0x001c    +0x0014    } | .ActualState
        _m010 uint32_t                                   old_state;                     //{ +0x0014    +0x0018    +0x0020    +0x0018    } | .OldState
        _m011 uint32_t                                   override_index;                //{ +0x0018    +0x001c    +0x0024    +0x001c    } | .OverrideIndex
        _m012 uint32_t                                   processor_idle_count;          //{ +0x001c    +0x0020    +0x0028    +0x0020    } | .ProcessorIdleCount
        _m013 uint32_t                                   type;                          //{ +0x0020    +0x0024    +0x002c    +0x0024    } | .Type
        _m014 uint16_t                                   reason_flags;                  //{ +0x0024    +0x0030    +0x0038    +0x0030    } | .ReasonFlags
        _m015 volatile uint64_t                          initiate_wake_stamp;           //{ +0x0028    +0x0038    +0x0040    +0x0038    } | .InitiateWakeStamp
        _m016 int32_t                                    previous_status;               //{ +0x0030    +0x0040    +0x0048    +0x0040    } | .PreviousStatus
        _m017 uint32_t                                   previous_cancel_reason;        //{ +0x0034    +0x0044    +0x004c    +0x0044    } | .PreviousCancelReason
        _m018 struct nt::kaffinity_ex_t                  primary_processor_mask;        //{ +0x0038    +0x0048    +0x0050    +0x0048    } | .PrimaryProcessorMask
        _m019 struct nt::kaffinity_ex_t                  secondary_processor_mask;      //{ +0x00e0    +0x00f0    +0x0158    +0x00f0    } | .SecondaryProcessorMask
        _m020 idle_prepare_t                             idle_prepare;                  //{ +0x0188    +0x0198    +0x0260    +0x0198    } | .IdlePrepare
        _m021 idle_pre_execute_t                         idle_pre_execute;              //{ +0x0190    +0x01a0    +0x0268    +0x01a0    } | .IdlePreExecute
        _m022 idle_execute_t                             idle_execute;                  //{ +0x0198    +0x01a8    +0x0270    +0x01a8    } | .IdleExecute
        _m023 idle_preselect_t                           idle_preselect;                //{ +0x01a0    +0x01b0    +0x0278    +0x01b0    } | .IdlePreselect
        _m024 idle_test_t                                idle_test;                     //{ +0x01a8    +0x01b8    +0x0280    +0x01b8    } | .IdleTest
        _m025 sdk::function<uint32_t(void*, uint32_t)>*  idle_availability_check;       //{ +0x01b0    +0x01c0    +0x0288    +0x01c0    } | .IdleAvailabilityCheck
        _m026 idle_complete_t                            idle_complete;                 //{ +0x01b8    +0x01c8    +0x0290    +0x01c8    } | .IdleComplete
        _m027 sdk::function<void(void*, uint32_t)>*      idle_cancel;                   //{ +0x01c0    +0x01d0    +0x0298    +0x01d0    } | .IdleCancel
        _m028 sdk::function<uint8_t(void*)>*             idle_is_halted;                //{ +0x01c8    +0x01d8    +0x02a0    +0x01d8    } | .IdleIsHalted
        _m029 sdk::function<uint8_t(void*)>*             idle_initiate_wake;            //{ +0x01d0    +0x01e0    +0x02a8    +0x01e0    } | .IdleInitiateWake
        _m030 struct nt::processor_idle_prepare_info_t   prepare_info;                  //{ +0x01d8    +0x01e8    +0x02b0    +0x01e8    } | .PrepareInfo
        _m031 struct nt::kaffinity_ex_t                  deep_idle_snapshot;            //{ +0x0230    +0x0240    +0x0308    +0x0240    } | .DeepIdleSnapshot
        _m032 struct nt::perfinfo_ppm_state_selection_t* tracing;                       //{ +0x02d8    +0x02e8    +0x0410    +0x02e8    } | .Tracing
        _m033 struct nt::perfinfo_ppm_state_selection_t* coordinated_tracing;           //{ +0x02e0    +0x02f0    +0x0418    +0x02f0    } | .CoordinatedTracing
        _m034 struct ppm::selection_menu_t               processor_menu;                //{ +0x02e8    +0x02f8    +0x0420    +0x02f8    } | .ProcessorMenu
        _m035 struct ppm::selection_menu_t               coordinated_menu;              //{ +0x02f8    +0x0308    +0x0430    +0x0308    } | .CoordinatedMenu
        _m036 struct ppm::coordinated_selection_t        coordinated_selection;         //{ +0x0308    +0x0318    +0x0440    +0x0318    } | .CoordinatedSelection
        _m037 sdk::array<struct ppm::idle_state_t, 1>    state;                         //{ +0x0320    +0x0330    +0x0458    +0x0330    } | .State
                                                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                            
        _m038 uint8_t                                    idle_override;                 //{ +0x0001    +0x0001    +0x0001    } | .IdleOverride
        _m039 uint8_t                                    strict_veto_bias;              //{ +0x0008    +0x0010    +0x0008    } | .StrictVetoBias
        _m040 uint64_t                                   level_id;                      //{ +0x0028    +0x0030    +0x0028    } | .LevelId
                                                                                      
        // Windows 10 v1607                                                           
        //                                                                            
        _m041 uint8_t                                    force_idle;                    //{ +0x0001    } | .ForceIdle
                                                                                      
        // Windows 11                                                                 
        //                                                                            
        _m042 uint64_t                                   idle_reevaluation_duration;    //{ +0x0008    } | .IdleReevaluationDuration
                                                                                      
        SDK_MAGIC_PROPERTIES( "_PPM_IDLE_STATES.$", 0x428, true, 0xddce5a0fbc14a2b3 );                             
        SDK_DYNAMIC_SIZE( idle_states_t );                                            
    };                                                                                
};
#include "magic/idle_states_t.end.hpp"
