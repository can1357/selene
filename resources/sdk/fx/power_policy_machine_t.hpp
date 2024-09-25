#pragma once
#include <sdkgen/support_library.hpp>
#include "../mx/lock_t.hpp"
#include "../mx/work_item_t.hpp"
#include "power_policy_event_t.hpp"
#include "wait_lock_internal_t.hpp"
#include "../nt/work_queue_item_t.hpp"
#include "power_policy_machine_state_history_t.hpp"

#include "magic/power_policy_machine_t.start.hpp"
namespace fx
{
    class pkg_pnp_t;
    struct cr_event_t;
    struct post_process_info_t;
    struct power_policy_owner_settings_t;

    // [struct FxPowerPolicyMachine]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct power_policy_machine_t                                                                        
    {                                                                                                    
        struct u0_m_queue_flags_by_name_t                                                                
        {                                                                                                
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                   
            //                                                                                           
            _m11 uint1_t work_item_queued;                                                                 //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .WorkItemQueued
            _m12 uint1_t closed;                                                                           //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .Closed
            _m13 uint1_t delay_deletion;                                                                   //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .DelayDeletion
                                                                                                         
            SDK_MAGIC_PROPERTIES( "FxPowerPolicyMachine.m_QueueFlagsByName.$", 0x1, true, 0xcafea5acf2605802 );                                                   
            SDK_FIXED_SIZE( u0_m_queue_flags_by_name_t, 0x1 );                                                   
        };                                                                                               
                                                                                                         
        union u4_m_singular_events_present_by_name_t                                                     
        {                                                                                                
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                                
            //                                                                                           
            _m22 uint1_t pwr_pol_start_known;                                                              //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PwrPolStartKnown
            _m23 uint1_t pwr_pol_stop_known;                                                               //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PwrPolStopKnown
            _m24 uint1_t pwr_pol_sx_known;                                                                 //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PwrPolSxKnown
            _m25 uint1_t pwr_pol_s0_known;                                                                 //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PwrPolS0Known
            _m26 uint1_t pwr_pol_power_down_known;                                                         //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PwrPolPowerDownKnown
            _m27 uint1_t pwr_pol_power_up_known;                                                           //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PwrPolPowerUpKnown
            _m28 uint1_t pwr_pol_power_down_io_stopped_known;                                              //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PwrPolPowerDownIoStoppedKnown
            _m29 uint1_t pwr_pol_power_up_hw_started_known;                                                //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PwrPolPowerUpHwStartedKnown
            _m30 uint1_t pwr_pol_wake_arrived_known;                                                       //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PwrPolWakeArrivedKnown
            _m31 uint1_t pwr_pol_wake_success_known;                                                       //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PwrPolWakeSuccessKnown
            _m32 uint1_t pwr_pol_wake_failed_known;                                                        //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PwrPolWakeFailedKnown
            _m33 uint1_t pwr_pol_io_present_known;                                                         //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PwrPolIoPresentKnown
            _m34 uint1_t pwr_pol_power_timeout_expired_known;                                              //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PwrPolPowerTimeoutExpiredKnown
            _m35 uint1_t pwr_pol_s0_idle_policy_changed_known;                                             //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PwrPolS0IdlePolicyChangedKnown
            _m36 uint1_t pwr_pol_surprise_remove_known;                                                    //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PwrPolSurpriseRemoveKnown
            _m37 uint1_t pwr_pol_usb_selective_suspend_callback_known;                                     //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PwrPolUsbSelectiveSuspendCallbackKnown
            _m38 uint1_t pwr_pol_usb_selective_suspend_completed_known;                                    //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PwrPolUsbSelectiveSuspendCompletedKnown
            _m39 uint1_t pwr_pol_power_down_failed_known;                                                  //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PwrPolPowerDownFailedKnown
            _m40 uint1_t pwr_pol_power_up_failed_known;                                                    //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PwrPolPowerUpFailedKnown
                                                                                                         
            SDK_MAGIC_PROPERTIES( "FxPowerPolicyMachine.m_SingularEventsPresentByName.$", 0x4, true, 0x6b072010c4bc7d41 );                                                                                
            SDK_FIXED_SIZE( u4_m_singular_events_present_by_name_t, 0x4 );                                                                                
        };                                                                                               
                                                                                                         
        using pfn_pnp_event_worker_t = sdk::function<void(class fx::pkg_pnp_t*, struct fx::post_process_info_t*, void*)>*;                                  
                                                                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
        //                                                                                               
        _m00 uint8_t                                                   m_queue_head;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_QueueHead
        _m01 uint8_t                                                   m_queue_tail;                       //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .m_QueueTail
        _m02 uint8_t                                                   m_queue_depth;                      //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .m_QueueDepth
        _m03 uint8_t                                                   m_history_index;                    //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .m_HistoryIndex
        _m04 class fx::pkg_pnp_t*                                      m_pkg_pnp;                          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_PkgPnp
        _m05 void*                                                     m_event_worker_context;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .m_EventWorkerContext
        _m06 class mx::lock_t                                          m_queue_lock;                       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .m_QueueLock
        _m07 class fx::wait_lock_internal_t                            m_state_machine_lock;               //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .m_StateMachineLock
        _m08 pfn_pnp_event_worker_t                                    m_event_worker;                     //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .m_EventWorker
        _m09 struct fx::cr_event_t*                                    m_work_item_finished;               //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .m_WorkItemFinished
        _m10 uint8_t                                                   m_queue_flags;                      //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .m_QueueFlags
        _m14 u0_m_queue_flags_by_name_t                                m_queue_flags_by_name;              //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .m_QueueFlagsByName
        _m15 uint8_t                                                   m_work_item_running_count;          //{ +0x0061    +0x0061    +0x0061    +0x0061    } | .m_WorkItemRunningCount
        _m16 class mx::work_item_t                                     m_work_item;                        //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .m_WorkItem
        _m17 struct nt::work_queue_item_t                              m_event_work_queue_item;            //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .m_EventWorkQueueItem
        _m18 sdk::array<enum fx::power_policy_event_t, 8>              m_queue;                            //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .m_Queue
        _m19 union fx::power_policy_machine_state_history_t            m_states;                           //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .m_States
        _m20 struct fx::power_policy_owner_settings_t*                 m_owner;                            //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .m_Owner
        _m21 uint32_t                                                  m_singular_events_present;          //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .m_SingularEventsPresent
        _m41 u4_m_singular_events_present_by_name_t                    m_singular_events_present_by_name;  //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .m_SingularEventsPresentByName
                                                                                                         
        SDK_MAGIC_PROPERTIES( "FxPowerPolicyMachine.$", 0xd0, true, 0xa8eda3fa62a56b3e );                                  
        SDK_FIXED_SIZE( power_policy_machine_t, 0xd0 );                                                  
    };                                                                                                   
};
#include "magic/power_policy_machine_t.end.hpp"
SDK_VERIFY( struct fx::power_policy_machine_t::u0_m_queue_flags_by_name_t, 0x1 );
SDK_VERIFY( union fx::power_policy_machine_t::u4_m_singular_events_present_by_name_t, 0x4 );
SDK_VERIFY( struct fx::power_policy_machine_t, 0xd0 );
