#pragma once
#include <sdkgen/support_library.hpp>
#include "../mx/lock_t.hpp"
#include "../mx/event_t.hpp"
#include "../mx/work_item_t.hpp"
#include "wait_lock_internal_t.hpp"
#include "../nt/work_queue_item_t.hpp"
#include "wake_interrupt_events_t.hpp"
#include "wake_interrupt_machine_state_history_t.hpp"

#include "magic/wake_interrupt_machine_t.start.hpp"
namespace fx
{
    class pkg_pnp_t;
    class interrupt_t;
    struct cr_event_t;
    struct post_process_info_t;

    // [class FxWakeInterruptMachine]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class wake_interrupt_machine_t                                                      
    {                                                                                   
        struct u0_m_queue_flags_by_name_t                                               
        {                                                                               
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                           
            //                                                                          
            _m11 uint1_t work_item_queued;                                                //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .WorkItemQueued
            _m12 uint1_t closed;                                                          //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .Closed
            _m13 uint1_t delay_deletion;                                                  //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .DelayDeletion
                                                                                        
            SDK_MAGIC_PROPERTIES( "FxWakeInterruptMachine.m_QueueFlagsByName.$", 0x1, true, 0xb74a5cb1f1e7975b );                                           
            SDK_FIXED_SIZE( u0_m_queue_flags_by_name_t, 0x1 );                                           
        };                                                                              
                                                                                        
        using pfn_pnp_event_worker_t = sdk::function<void(class fx::pkg_pnp_t*, struct fx::post_process_info_t*, void*)>*;                          
                                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                                              
        _m00 uint8_t                                          m_queue_head;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_QueueHead
        _m01 uint8_t                                          m_queue_tail;               //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .m_QueueTail
        _m02 uint8_t                                          m_queue_depth;              //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .m_QueueDepth
        _m03 uint8_t                                          m_history_index;            //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .m_HistoryIndex
        _m04 class fx::pkg_pnp_t*                             m_pkg_pnp;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_PkgPnp
        _m05 void*                                            m_event_worker_context;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .m_EventWorkerContext
        _m06 class mx::lock_t                                 m_queue_lock;               //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .m_QueueLock
        _m07 class fx::wait_lock_internal_t                   m_state_machine_lock;       //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .m_StateMachineLock
        _m08 pfn_pnp_event_worker_t                           m_event_worker;             //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .m_EventWorker
        _m09 struct fx::cr_event_t*                           m_work_item_finished;       //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .m_WorkItemFinished
        _m10 uint8_t                                          m_queue_flags;              //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .m_QueueFlags
        _m14 u0_m_queue_flags_by_name_t                       m_queue_flags_by_name;      //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .m_QueueFlagsByName
        _m15 uint8_t                                          m_work_item_running_count;  //{ +0x0061    +0x0061    +0x0061    +0x0061    } | .m_WorkItemRunningCount
        _m16 class mx::work_item_t                            m_work_item;                //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .m_WorkItem
        _m17 struct nt::work_queue_item_t                     m_event_work_queue_item;    //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .m_EventWorkQueueItem
        _m18 class fx::interrupt_t*                           m_interrupt;                //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .m_Interrupt
        _m19 uint8_t                                          m_active_for_wake;          //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .m_ActiveForWake
        _m20 uint8_t                                          m_claimed;                  //{ +0x0099    +0x0099    +0x0099    +0x0099    } | .m_Claimed
        _m21 class mx::event_t                                m_isr_event;                //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .m_IsrEvent
        _m22 uint8_t                                          m_current_state;            //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .m_CurrentState
        _m23 sdk::array<enum fx::wake_interrupt_events_t, 8>  m_queue;                    //{ +0x00c4    +0x00c4    +0x00c4    +0x00c4    } | .m_Queue
        _m24 union fx::wake_interrupt_machine_state_history_t m_states;                   //{ +0x00e4    +0x00e4    +0x00e4    +0x00e4    } | .m_States
                                                                                        
        SDK_MAGIC_PROPERTIES( "FxWakeInterruptMachine.$", 0xf0, true, 0x8d63a714e7129e1 );                          
        SDK_FIXED_SIZE( wake_interrupt_machine_t, 0xf0 );                               
    };                                                                                  
};
#include "magic/wake_interrupt_machine_t.end.hpp"
SDK_VERIFY( struct fx::wake_interrupt_machine_t::u0_m_queue_flags_by_name_t, 0x1 );
SDK_VERIFY( class fx::wake_interrupt_machine_t, 0xf0 );
