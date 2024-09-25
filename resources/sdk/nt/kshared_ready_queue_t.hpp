#pragma once
#include <sdkgen/support_library.hpp>
#include "kdpc_t.hpp"
#include "khetero_state_t.hpp"
#include "kpriority_state_t.hpp"
#include "kshared_ready_queue_hetero_statistics_t.hpp"

#include "magic/kshared_ready_queue_t.start.hpp"
namespace nt
{
    // [struct _KSHARED_READY_QUEUE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct kshared_ready_queue_t                                                       
    {                                                                                  
        using running_summary_t =                 sdk::variant<sdk::array<char, 64>, sdk::array<union nt::kpriority_state_t, 64>>;                                
        using soft_park_election_hetero_stats_t = struct nt::kshared_ready_queue_hetero_statistics_t;                                
                                                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                                                             
        _m00 uint64_t                                  lock;                             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Lock
        _m01 uint32_t                                  ready_summary;                    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ReadySummary
        _m02 sdk::array<nt::list_entry_t, 32>          ready_list_head;                  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ReadyListHead
        _m03 running_summary_t                         running_summary;                  //{ +0x0210    +0x0210    +0x0210    +0x0210    } | .RunningSummary
        _m04 uint8_t                                   span;                             //{ +0x0250    +0x0250    +0x0290    +0x0250    } | .Span
        _m05 uint8_t                                   low_proc_index;                   //{ +0x0251    +0x0251    +0x0291    +0x0251    } | .LowProcIndex
        _m06 uint8_t                                   queue_index;                      //{ +0x0252    +0x0252    +0x0292    +0x0252    } | .QueueIndex
        _m07 uint8_t                                   proc_count;                       //{ +0x0253    +0x0253    +0x0294    +0x0253    } | .ProcCount
        _m08 uint8_t                                   scan_owner;                       //{ +0x0254    +0x0254    +0x0295    +0x0254    } | .ScanOwner
        _m09 uint64_t                                  affinity;                         //{ +0x0258    +0x0258    +0x0298    +0x0258    } | .Affinity
                                                                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                                                             
        _m10 uint32_t                                  ready_thread_count;               //{ +0x0260    +0x02a0    +0x0260    } | .ReadyThreadCount
        _m11 uint64_t                                  ready_queue_expected_run_time;    //{ +0x0268    +0x02a8    +0x0268    } | .ReadyQueueExpectedRunTime
                                                                                       
        // Windows 11                                                                  
        //                                                                             
        _m12 sdk::array<union nt::khetero_state_t, 64> hetero_running_summary;           //{ +0x0250    } | .HeteroRunningSummary
        _m13 uint8_t                                   normal_priority_queue_index;      //{ +0x0293    } | .NormalPriorityQueueIndex
        _m14 uint8_t                                   soft_park_election_scheduled;     //{ +0x02a4    } | .SoftParkElectionScheduled
        _m15 uint64_t                                  soft_park_election_generation;    //{ +0x02b0    } | .SoftParkElectionGeneration
        _m16 uint64_t                                  soft_park_election_run_time;      //{ +0x02b8    } | .SoftParkElectionRunTime
        _m17 struct nt::kdpc_t                         soft_park_election_dpc;           //{ +0x02c0    } | .SoftParkElectionDpc
        _m18 soft_park_election_hetero_stats_t         soft_park_election_hetero_stats;  //{ +0x0300    } | .SoftParkElectionHeteroStats
                                                                                       
        SDK_MAGIC_PROPERTIES( "_KSHARED_READY_QUEUE.$", 0x270, true, 0x86009bc973000d79 );                                
        SDK_DYNAMIC_SIZE( kshared_ready_queue_t );                                     
    };                                                                                 
};
#include "magic/kshared_ready_queue_t.end.hpp"
