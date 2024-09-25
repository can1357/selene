#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/avl_tree_t.hpp"
#include "pool_failure_reasons_t.hpp"
#include "access_violation_range_t.hpp"
#include "../nt/single_list_entry_t.hpp"

#include "magic/pool_state_t.start.hpp"
namespace mi
{
    // [struct _MI_POOL_STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pool_state_t                                                              
    {                                                                                
        using permitted_faults_initial_node_t = sdk::array<struct mi::access_violation_range_t, 2>;                                 
                                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                                                           
        _m00 uint64_t                               maximum_non_paged_pool_threshold;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MaximumNonPagedPoolThreshold
        _m01 volatile uint64_t                      allocated_non_paged_pool;          //{ +0x0018    +0x0008    +0x0008    +0x0008    } | .AllocatedNonPagedPool
        _m02 uint32_t                               high_event_sets;                   //{ +0x0028    +0x0020    +0x0018    +0x0020    } | .HighEventSets
        _m03 uint8_t                                high_event_sets_valid;             //{ +0x002c    +0x0024    +0x001c    +0x0024    } | .HighEventSetsValid
        _m04 uint64_t                               low_paged_pool_threshold;          //{ +0x0080    +0x0028    +0x0020    +0x0028    } | .LowPagedPoolThreshold
        _m05 uint64_t                               high_paged_pool_threshold;         //{ +0x0088    +0x0030    +0x0028    +0x0030    } | .HighPagedPoolThreshold
        _m06 uint64_t                               total_paged_pool_quota;            //{ +0x00e8    +0x0098    +0x0090    +0x0098    } | .TotalPagedPoolQuota
        _m07 uint64_t                               total_non_paged_pool_quota;        //{ +0x00f0    +0x00a0    +0x0098    +0x00a0    } | .TotalNonPagedPoolQuota
                                                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                                                           
        _m08 volatile uint64_t                      allocated_secure_non_paged_pool;   //{ +0x0010    +0x0010    +0x0010    } | .AllocatedSecureNonPagedPool
        _m09 volatile int32_t                       permitted_faults_lock;             //{ +0x0038    +0x0030    +0x0038    } | .PermittedFaultsLock
        _m10 struct rtl::avl_tree_t                 permitted_faults_tree;             //{ +0x0040    +0x0038    +0x0040    } | .PermittedFaultsTree
        _m11 permitted_faults_initial_node_t        permitted_faults_initial_node;     //{ +0x0048    +0x0040    +0x0048    } | .PermittedFaultsInitialNode
                                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                                 
        //                                                                           
        _m12 struct nt::single_list_entry_t         bad_pool_head;                     //{ +0x0020    +0x0018    +0x0018    } | .BadPoolHead
                                                                                     
        // Windows 10 v1607                                                          
        //                                                                           
        _m13 sdk::array<uint32_t, 3>                non_paged_pool_s_list_maximum;     //{ +0x0008    } | .NonPagedPoolSListMaximum
        _m14 sdk::array<sdk::array<uint32_t, 3>, 3> pool_failures;                     //{ +0x0030    } | .PoolFailures
        _m15 struct mi::pool_failure_reasons_t      pool_failure_reasons;              //{ +0x0054    } | .PoolFailureReasons
        _m16 uint32_t                               paged_pool_s_list_maximum;         //{ +0x0090    } | .PagedPoolSListMaximum
        _m17 sdk::array<uint32_t, 4>                preemptive_trims;                  //{ +0x0094    } | .PreemptiveTrims
        _m18 uint64_t                               special_pages_in_use_peak;         //{ +0x00a8    } | .SpecialPagesInUsePeak
        _m19 sdk::array<uint32_t, 9>                special_pool_rejected;             //{ +0x00b0    } | .SpecialPoolRejected
        _m20 volatile uint64_t                      special_pages_non_paged;           //{ +0x00d8    } | .SpecialPagesNonPaged
        _m21 volatile int32_t                       special_pool_pdes;                 //{ +0x00e0    } | .SpecialPoolPdes
        _m22 uint32_t                               session_special_pool_pdes_max;     //{ +0x00e4    } | .SessionSpecialPoolPdesMax
                                                                                     
        SDK_MAGIC_PROPERTIES( "_MI_POOL_STATE.$", 0xa8, true, 0x90af4e305e2c15f9 );                                 
        SDK_DYNAMIC_SIZE( pool_state_t );                                            
    };                                                                               
};
#include "magic/pool_state_t.end.hpp"
