#pragma once
#include <sdkgen/support_library.hpp>
#include "timer_t.hpp"
#include "work_item_t.hpp"
#include "../nt/kevent_t.hpp"
#include "ss_stop_flags_t.hpp"
#include "miniport_event_t.hpp"
#include "tmp_ref_reason_t.hpp"
#include "nic_active_state_t.hpp"
#include "aoac_component_ref_time_t.hpp"
#include "miniport_cs_traffic_stats_t.hpp"
#include "miniport_cs_spurious_wake_stats_t.hpp"

#include "magic/miniport_aoac_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_MINIPORT_AOAC]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct miniport_aoac_t                                                                  
    {                                                                                       
        using cs_ref_times_t =     sdk::array<struct ndis::aoac_component_ref_time_t, 15>;                               
        using cs_traffic_stats_t = sdk::array<struct ndis::miniport_cs_traffic_stats_t, 3>;                               
                                                                                            
        // Windows 10 v1607                                                                 
        //                                                                                  
        _m000 uint64_t                                       lock;                            //{ +0x0000    } | .Lock
        _m001 nt::list_entry_t                               handle_list;                     //{ +0x0008    } | .HandleList
        _m002 int32_t                                        handle_list_count;               //{ +0x0018    } | .HandleListCount
        _m003 nt::list_entry_t                               pending_irp_list;                //{ +0x0020    } | .PendingIrpList
        _m004 int32_t                                        pending_irp_list_count;          //{ +0x0030    } | .PendingIrpListCount
        _m005 int32_t                                        active_ref;                      //{ +0x0034    } | .ActiveRef
        _m006 enum ndis::tmp_ref_reason_t                    temp_ref_reason;                 //{ +0x0038    } | .TempRefReason
        _m007 struct ndis::timer_t                           temp_ref_timer;                  //{ +0x0040    } | .TempRefTimer
        _m008 struct ndis::work_item_t                       temp_ref_work_item;              //{ +0x00c0    } | .TempRefWorkItem
        _m009 uint8_t                                        temp_deref_in_progress;          //{ +0x0110    } | .TempDerefInProgress
        _m010 uint32_t                                       deref_timeout_milliseconds;      //{ +0x0114    } | .DerefTimeoutMilliseconds
        _m011 uint8_t                                        wake_work_item_scheduled;        //{ +0x0118    } | .WakeWorkItemScheduled
        _m012 enum ndis::miniport_event_t                    wake_work_item_wake_reason;      //{ +0x011a    } | .WakeWorkItemWakeReason
        _m013 struct ndis::work_item_t                       wake_work_item;                  //{ +0x0120    } | .WakeWorkItem
        _m014 enum ndis::nic_active_state_t                  active_state;                    //{ +0x0170    } | .ActiveState
        _m015 struct ndis::ss_stop_flags_t                   stop_flags;                      //{ +0x0174    } | .StopFlags
        _m016 uint8_t                                        ss_idle_confirmed;               //{ +0x0178    } | .SSIdleConfirmed
        _m017 uint8_t                                        ss_idle_confirm_in_progress;     //{ +0x0179    } | .SSIdleConfirmInProgress
        _m018 uint8_t                                        remote_wake_enabled;             //{ +0x017a    } | .RemoteWakeEnabled
        _m019 uint8_t                                        device_gone;                     //{ +0x017b    } | .DeviceGone
        _m020 struct nt::kevent_t                            power_suspend_complete_event;    //{ +0x0180    } | .PowerSuspendCompleteEvent
        _m021 struct nt::kevent_t                            nic_quiet_check_complete_event;  //{ +0x0198    } | .NicQuietCheckCompleteEvent
        _m022 uint64_t                                       start_time;                      //{ +0x01b0    } | .StartTime
        _m023 sdk::array<uint16_t, 2>                        last_unexpected_failure_line;    //{ +0x01b8    } | .LastUnexpectedFailureLine
        _m024 uint8_t                                        take_start_to_ref_time;          //{ +0x01bc    } | .TakeStartToRefTime
        _m025 int64_t                                        last_wake_time;                  //{ +0x01c0    } | .LastWakeTime
        _m026 uint8_t                                        take_wake_to_ref_time;           //{ +0x01c8    } | .TakeWakeToRefTime
        _m027 sdk::array<int32_t, 15>                        component_ref_counts;            //{ +0x01cc    } | .ComponentRefCounts
        _m028 cs_ref_times_t                                 cs_ref_times;                    //{ +0x0208    } | .CsRefTimes
        _m029 int32_t                                        cs_power_transitions;            //{ +0x02f8    } | .CsPowerTransitions
        _m030 uint64_t                                       total_cs_active_time;            //{ +0x0300    } | .TotalCsActiveTime
        _m031 uint64_t                                       total_cs_resiliency_time;        //{ +0x0308    } | .TotalCsResiliencyTime
        _m032 uint64_t                                       current_active_start_time;       //{ +0x0310    } | .CurrentActiveStartTime
        _m033 uint32_t                                       cs_surprise_wakes;               //{ +0x0318    } | .CsSurpriseWakes
        _m034 uint32_t                                       cs_spurious_wakes;               //{ +0x031c    } | .CsSpuriousWakes
        _m035 cs_traffic_stats_t                             cs_traffic_stats;                //{ +0x0320    } | .CsTrafficStats
        _m036 struct ndis::miniport_cs_spurious_wake_stats_t cs_spurious_wake_stats;          //{ +0x03b0    } | .CsSpuriousWakeStats
                                                                                            
        SDK_MAGIC_PROPERTIES( "_NDIS_MINIPORT_AOAC.$", 0x0, true, 0xb6f364dab26e931d );                               
        SDK_DYNAMIC_SIZE( miniport_aoac_t );                                                
    };                                                                                      
};
#include "magic/miniport_aoac_t.end.hpp"
