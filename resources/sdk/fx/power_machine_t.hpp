#pragma once
#include <sdkgen/support_library.hpp>
#include "../mx/lock_t.hpp"
#include "../mx/work_item_t.hpp"
#include "wait_lock_internal_t.hpp"
#include "../nt/work_queue_item_t.hpp"
#include "power_machine_event_queue_t.hpp"
#include "power_machine_state_history_t.hpp"

#include "magic/power_machine_t.start.hpp"
namespace fx
{
    class pkg_pnp_t;
    struct cr_event_t;
    struct post_process_info_t;

    // [struct FxPowerMachine]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct power_machine_t                                                                 
    {                                                                                      
        struct u0_m_queue_flags_by_name_t                                                  
        {                                                                                  
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                      
            //                                                                             
            _m11 uint1_t work_item_queued;                                                   //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .WorkItemQueued
            _m12 uint1_t closed;                                                             //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .Closed
            _m13 uint1_t delay_deletion;                                                     //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .DelayDeletion
                                                                                           
            SDK_MAGIC_PROPERTIES( "FxPowerMachine.m_QueueFlagsByName.$", 0x1, true, 0x4b8be13e44b31a16 );                                                      
            SDK_FIXED_SIZE( u0_m_queue_flags_by_name_t, 0x1 );                                                      
        };                                                                                 
                                                                                           
        union u4_m_singular_events_present_by_name_t                                       
        {                                                                                  
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                  
            //                                                                             
            _m23 uint1_t power_d0_known;                                                     //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PowerD0Known
            _m24 uint1_t power_dx_known;                                                     //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PowerDxKnown
            _m25 uint1_t power_wake_arrival_known;                                           //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PowerWakeArrivalKnown
            _m26 uint1_t power_wake_succeeded_known;                                         //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PowerWakeSucceededKnown
            _m27 uint1_t power_wake_failed_known;                                            //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PowerWakeFailedKnown
            _m28 uint1_t power_wake_canceled_known;                                          //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PowerWakeCanceledKnown
            _m29 uint1_t power_implicit_d0_known;                                            //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PowerImplicitD0Known
            _m30 uint1_t power_implicit_d3_known;                                            //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PowerImplicitD3Known
            _m31 uint1_t power_parent_to_d0_known;                                           //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PowerParentToD0Known
            _m32 uint1_t power_mark_pageable_known;                                          //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PowerMarkPageableKnown
            _m33 uint1_t power_mark_nonpageable_known;                                       //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PowerMarkNonpageableKnown
            _m34 uint1_t power_complete_d0_known;                                            //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PowerCompleteD0Known
            _m35 uint1_t power_complete_dx_known;                                            //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PowerCompleteDxKnown
                                                                                           
            SDK_MAGIC_PROPERTIES( "FxPowerMachine.m_SingularEventsPresentByName.$", 0x2, true, 0xa084da51fce7365a );                                                                  
            SDK_FIXED_SIZE( u4_m_singular_events_present_by_name_t, 0x2 );                                                                  
        };                                                                                 
                                                                                           
        using pfn_pnp_event_worker_t = sdk::function<void(class fx::pkg_pnp_t*, struct fx::post_process_info_t*, void*)>*;                                     
                                                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                     
        //                                                                                 
        _m00 uint8_t                                  m_queue_head;                          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_QueueHead
        _m01 uint8_t                                  m_queue_tail;                          //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .m_QueueTail
        _m02 uint8_t                                  m_queue_depth;                         //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .m_QueueDepth
        _m03 uint8_t                                  m_history_index;                       //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .m_HistoryIndex
        _m04 class fx::pkg_pnp_t*                     m_pkg_pnp;                             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_PkgPnp
        _m05 void*                                    m_event_worker_context;                //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .m_EventWorkerContext
        _m06 class mx::lock_t                         m_queue_lock;                          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .m_QueueLock
        _m07 class fx::wait_lock_internal_t           m_state_machine_lock;                  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .m_StateMachineLock
        _m08 pfn_pnp_event_worker_t                   m_event_worker;                        //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .m_EventWorker
        _m09 struct fx::cr_event_t*                   m_work_item_finished;                  //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .m_WorkItemFinished
        _m10 uint8_t                                  m_queue_flags;                         //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .m_QueueFlags
        _m14 u0_m_queue_flags_by_name_t               m_queue_flags_by_name;                 //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .m_QueueFlagsByName
        _m15 uint8_t                                  m_work_item_running_count;             //{ +0x0061    +0x0061    +0x0061    +0x0061    } | .m_WorkItemRunningCount
        _m16 class mx::work_item_t                    m_work_item;                           //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .m_WorkItem
        _m17 struct nt::work_queue_item_t             m_event_work_queue_item;               //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .m_EventWorkQueueItem
        _m18 union fx::power_machine_event_queue_t    m_queue;                               //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .m_Queue
        _m19 union fx::power_machine_state_history_t  m_states;                              //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .m_States
        _m20 class mx::lock_t                         m_wait_wake_lock;                      //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .m_WaitWakeLock
        _m21 nt::list_entry_t                         m_wait_wake_irp_to_be_processed_list;  //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .m_WaitWakeIrpToBeProcessedList
        _m22 uint16_t                                 m_singular_events_present;             //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .m_SingularEventsPresent
        _m36 u4_m_singular_events_present_by_name_t   m_singular_events_present_by_name;     //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .m_SingularEventsPresentByName
        _m37 uint8_t                                  m_io_callback_failure;                 //{ +0x00d2    +0x00d2    +0x00d2    +0x00d2    } | .m_IoCallbackFailure
        _m38 uint8_t                                  m_power_down_failure;                  //{ +0x00d3    +0x00d3    +0x00d3    +0x00d3    } | .m_PowerDownFailure
                                                                                           
        SDK_MAGIC_PROPERTIES( "FxPowerMachine.$", 0xd8, true, 0x299bd73df7fe77d8 );                                     
        SDK_FIXED_SIZE( power_machine_t, 0xd8 );                                           
    };                                                                                     
};
#include "magic/power_machine_t.end.hpp"
SDK_VERIFY( struct fx::power_machine_t::u0_m_queue_flags_by_name_t, 0x1 );
SDK_VERIFY( union fx::power_machine_t::u4_m_singular_events_present_by_name_t, 0x2 );
SDK_VERIFY( struct fx::power_machine_t, 0xd8 );
