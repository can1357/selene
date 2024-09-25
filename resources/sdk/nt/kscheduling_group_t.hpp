#pragma once
#include <sdkgen/support_library.hpp>
#include "kscb_t.hpp"
#include "kscheduling_group_policy_t.hpp"

#include "magic/kscheduling_group_t.start.hpp"
namespace nt
{
    struct kdpc_t;
    struct kscheduling_group_t;

    // [struct _KSCHEDULING_GROUP]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct kscheduling_group_t                                                
    {                                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                                    
        _m00 struct nt::kscheduling_group_policy_t policy;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Policy
        _m01 uint32_t                              relative_weight;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .RelativeWeight
        _m02 uint32_t                              child_min_rate;              //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ChildMinRate
        _m03 uint32_t                              child_min_weight;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ChildMinWeight
        _m04 uint32_t                              child_total_weight;          //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .ChildTotalWeight
        _m05 uint64_t                              query_history_time_stamp;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .QueryHistoryTimeStamp
        _m06 int64_t                               notification_cycles;         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .NotificationCycles
        _m07 int64_t                               max_quota_limit_cycles;      //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .MaxQuotaLimitCycles
        _m08 volatile int64_t                      max_quota_cycles_remaining;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .MaxQuotaCyclesRemaining
        _m09 nt::list_entry_t                      scheduling_group_list;       //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .SchedulingGroupList
        _m10 nt::list_entry_t                      sibling;                     //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .Sibling
        _m11 struct nt::kdpc_t*                    notification_dpc;            //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .NotificationDpc
        _m12 nt::list_entry_t                      child_list;                  //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .ChildList
        _m13 struct nt::kscheduling_group_t*       parent;                      //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .Parent
        _m14 sdk::array<struct nt::kscb_t, 1>      per_processor;               //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .PerProcessor
                                                                              
        SDK_MAGIC_PROPERTIES( "_KSCHEDULING_GROUP.$", 0x240, true, 0xd1ce3017c12b8168 );                           
        SDK_FIXED_SIZE( kscheduling_group_t, 0x240 );                           
    };                                                                        
};
#include "magic/kscheduling_group_t.end.hpp"
SDK_VERIFY( struct nt::kscheduling_group_t, 0x240 );
