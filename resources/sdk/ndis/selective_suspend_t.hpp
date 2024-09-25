#pragma once
#include <sdkgen/support_library.hpp>
#include "timer_t.hpp"
#include "nbl_queue_t.hpp"
#include "work_item_t.hpp"
#include "../nt/kevent_t.hpp"
#include "irp_work_item_t.hpp"
#include "ss_idle_flags_t.hpp"
#include "ss_stop_flags_t.hpp"
#include "ss_control_ops_t.hpp"
#include "ss_resume_reason_t.hpp"
#include "device_power_state_t.hpp"

#include "magic/selective_suspend_t.start.hpp"
namespace ndis
{
    struct oid_cache_entry_t;
    struct nbl_tracker_handle_t;

    // [struct _NDIS_SELECTIVE_SUSPEND]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct selective_suspend_t                                                     
    {                                                                              
        // Windows 10 v1607                                                        
        //                                                                         
        _m000 uint64_t                           lock;                               //{ +0x0000    } | .Lock
        _m001 uint32_t                           idle_timeout;                       //{ +0x0008    } | .IdleTimeout
        _m002 struct ndis::timer_t               idle_timer;                         //{ +0x0010    } | .IdleTimer
        _m003 uint32_t                           idle_tick_count;                    //{ +0x0090    } | .IdleTickCount
        _m004 struct nt::kevent_t                idle_work_item_complete_event;      //{ +0x0098    } | .IdleWorkItemCompleteEvent
        _m005 struct nt::kevent_t                power_suspend_complete_event;       //{ +0x00b0    } | .PowerSuspendCompleteEvent
        _m006 struct nt::kevent_t                idle_notification_complete_event;   //{ +0x00c8    } | .IdleNotificationCompleteEvent
        _m007 struct nt::kevent_t                idle_notification_done_event;       //{ +0x00e0    } | .IdleNotificationDoneEvent
        _m008 struct nt::kevent_t                device_power_ready_event;           //{ +0x00f8    } | .DevicePowerReadyEvent
        _m009 struct nt::kevent_t                wdf_d0_locked_for_ss_event;         //{ +0x0110    } | .WdfD0LockedForSSEvent
        _m010 struct ndis::work_item_t           idle_timer_work_item;               //{ +0x0128    } | .IdleTimerWorkItem
        _m011 struct ndis::work_item_t           idle_cancel_work_item;              //{ +0x0178    } | .IdleCancelWorkItem
        _m012 struct ndis::irp_work_item_t       resume_work_item;                   //{ +0x01c8    } | .ResumeWorkItem
        _m013 struct ndis::ss_idle_flags_t       flags;                              //{ +0x01f8    } | .Flags
        _m014 struct ndis::ss_stop_flags_t       stop_flags;                         //{ +0x01fc    } | .StopFlags
        _m015 struct ndis::ss_control_ops_t      pending_control_ops;                //{ +0x0200    } | .PendingControlOps
        _m016 int32_t                            pending_pn_p_event_count;           //{ +0x0204    } | .PendingPnPEventCount
        _m017 int32_t                            pending_send_nbl_count;             //{ +0x0208    } | .PendingSendNblCount
        _m018 int32_t                            pending_cancel_send_count;          //{ +0x020c    } | .PendingCancelSendCount
        _m019 int32_t                            pending_direct_oid_count;           //{ +0x0210    } | .PendingDirectOidCount
        _m020 int32_t                            pending_cancel_direct_oid_count;    //{ +0x0214    } | .PendingCancelDirectOidCount
        _m021 int32_t                            pending_pn_p_op_count;              //{ +0x0218    } | .PendingPnPOpCount
        _m022 struct ndis::nbl_queue_t           pending_send_nbl_queue;             //{ +0x0220    } | .PendingSendNblQueue
        _m023 struct ndis::nbl_queue_t           pending_receive_nbl_queue;          //{ +0x0230    } | .PendingReceiveNblQueue
        _m024 int32_t                            pending_receive_return_count;       //{ +0x0240    } | .PendingReceiveReturnCount
        _m025 nt::list_entry_t                   pending_direct_oid_queue;           //{ +0x0248    } | .PendingDirectOidQueue
        _m026 struct ndis::oid_cache_entry_t*    oid_cache_array;                    //{ +0x0258    } | .OidCacheArray
        _m027 struct ndis::nbl_tracker_handle_t* queued_send_nbl_tracker;            //{ +0x0260    } | .QueuedSendNblTracker
        _m028 struct ndis::nbl_tracker_handle_t* queued_receive_return_nbl_tracker;  //{ +0x0268    } | .QueuedReceiveReturnNblTracker
        _m029 sdk::array<uint16_t, 2>            last_unexpected_failure_line;       //{ +0x0270    } | .LastUnexpectedFailureLine
        _m030 union ndis::ss_resume_reason_t     last_resume_reason;                 //{ +0x0274    } | .LastResumeReason
        _m031 uint32_t                           last_resume_context;                //{ +0x0278    } | .LastResumeContext
        _m032 union ndis::ss_resume_reason_t     last_busy_event;                    //{ +0x027c    } | .LastBusyEvent
        _m033 uint32_t                           last_busy_context;                  //{ +0x0280    } | .LastBusyContext
        _m034 uint32_t                           suspend_count;                      //{ +0x0284    } | .SuspendCount
        _m035 int64_t                            last_suspend_time;                  //{ +0x0288    } | .LastSuspendTime
        _m036 int64_t                            last_cancel_time;                   //{ +0x0290    } | .LastCancelTime
        _m037 uint64_t                           last_resume_latency_ms;             //{ +0x0298    } | .LastResumeLatencyMs
        _m038 uint64_t                           total_resume_latency_ms;            //{ +0x02a0    } | .TotalResumeLatencyMs
        _m039 uint64_t                           last_suspend_interval_ms;           //{ +0x02a8    } | .LastSuspendIntervalMs
        _m040 uint64_t                           total_suspended_time_ms;            //{ +0x02b0    } | .TotalSuspendedTimeMs
        _m041 enum ndis::device_power_state_t    last_requested_idle_power_state;    //{ +0x02b8    } | .LastRequestedIdlePowerState
                                                                                   
        SDK_MAGIC_PROPERTIES( "_NDIS_SELECTIVE_SUSPEND.$", 0x0, true, 0x3e1ece91c76b5ae0 );                                  
        SDK_DYNAMIC_SIZE( selective_suspend_t );                                   
    };                                                                             
};
#include "magic/selective_suspend_t.end.hpp"
