#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/rb_tree_t.hpp"
#include "../rtl/balanced_node_t.hpp"

#include "magic/kscb_t.start.hpp"
namespace nt
{
    struct kscb_t;

    // [struct _KSCB]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct kscb_t                                                      
    {                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                             
        _m000 uint64_t                         generation_cycles;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .GenerationCycles
        _m001 uint64_t                         min_quota_cycle_target;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MinQuotaCycleTarget
        _m002 uint64_t                         max_quota_cycle_target;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .MaxQuotaCycleTarget
        _m003 uint64_t                         rank_cycle_target;        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .RankCycleTarget
        _m004 uint64_t                         long_term_cycles;         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .LongTermCycles
        _m005 uint64_t                         last_reported_cycles;     //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .LastReportedCycles
        _m006 volatile uint64_t                over_quota_history;       //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .OverQuotaHistory
        _m007 uint64_t                         ready_time;               //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .ReadyTime
        _m008 uint64_t                         insert_time;              //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .InsertTime
        _m009 nt::list_entry_t                 per_processor_list;       //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .PerProcessorList
        _m010 struct rtl::balanced_node_t      queue_node;               //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .QueueNode
        _m011 uint1_t                          inserted;                 //{ +0x0070@0  +0x0070@0  +0x0070@0  +0x0070@0  } | .Inserted
        _m012 uint1_t                          max_over_quota;           //{ +0x0070@1  +0x0070@1  +0x0070@1  +0x0070@1  } | .MaxOverQuota
        _m013 uint1_t                          min_over_quota;           //{ +0x0070@2  +0x0070@2  +0x0070@2  +0x0070@2  } | .MinOverQuota
        _m014 uint1_t                          rank_bias;                //{ +0x0070@3  +0x0070@3  +0x0070@3  +0x0070@3  } | .RankBias
        _m015 uint1_t                          share_rank_owner;         //{ +0x0070@5  +0x0070@5  +0x0070@6  +0x0070@5  } | .ShareRankOwner
        _m016 uint8_t                          depth;                    //{ +0x0071    +0x0071    +0x0071    +0x0071    } | .Depth
        _m017 uint16_t                         ready_summary;            //{ +0x0072    +0x0072    +0x0072    +0x0072    } | .ReadySummary
        _m018 uint32_t                         rank;                     //{ +0x0074    +0x0074    +0x0074    +0x0074    } | .Rank
        _m019 volatile uint32_t*               share_rank;               //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .ShareRank
        _m020 volatile uint32_t                owner_share_rank;         //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .OwnerShareRank
        _m021 sdk::array<nt::list_entry_t, 16> ready_list_head;          //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .ReadyListHead
        _m022 struct rtl::rb_tree_t            child_scb_queue;          //{ +0x0188    +0x0188    +0x0188    +0x0188    } | .ChildScbQueue
        _m023 struct nt::kscb_t*               parent;                   //{ +0x0198    +0x0198    +0x0198    +0x0198    } | .Parent
        _m024 struct nt::kscb_t*               root;                     //{ +0x01a0    +0x01a0    +0x01a0    +0x01a0    } | .Root
                                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                        
        //                                                             
        _m025 uint1_t                          soft_cap;                 //{ +0x0070@4  +0x0070@4  +0x0070@4  } | .SoftCap
                                                                       
        // Windows 11                                                  
        //                                                             
        _m026 uint1_t                          unconstrained_max_quota;  //{ +0x0070@4  } | .UnconstrainedMaxQuota
        _m027 uint1_t                          unconstrained_min_quota;  //{ +0x0070@5  } | .UnconstrainedMinQuota
                                                                       
        SDK_MAGIC_PROPERTIES( "_KSCB.$", 0x1a8, true, 0xf0955e7933c2cf2e );                        
        SDK_FIXED_SIZE( kscb_t, 0x1a8 );                               
    };                                                                 
};
#include "magic/kscb_t.end.hpp"
SDK_VERIFY( struct nt::kscb_t, 0x1a8 );
