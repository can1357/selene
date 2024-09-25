#pragma once
#include <sdkgen/support_library.hpp>
#include "rebalance_flags_t.hpp"
#include "rebalance_reason_t.hpp"
#include "rebalance_failure_t.hpp"
#include "resource_conflict_trace_context_t.hpp"
#include "devnode_query_rebalance_veto_reason_t.hpp"

namespace nt { struct device_node_t; }

#include "magic/rebalance_trace_context_t.start.hpp"
namespace pnp
{
    // [struct _PNP_REBALANCE_TRACE_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct rebalance_trace_context_t                                                               
    {                                                                                              
        using reason_t =                      sdk::variant<sdk::array<enum pnp::rebalance_reason_t, 2>, enum pnp::rebalance_reason_t>;                                      
        using subtree_root_t =                sdk::variant<struct nt::device_node_t*, sdk::array<struct nt::device_node_t*, 2>>;                                      
        using veto_query_rebalance_reason_t = sdk::array<enum pnp::devnode_query_rebalance_veto_reason_t, 2>;                                      
                                                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                      
        //                                                                                         
        _m00 sdk::variant<uint32_t, sdk::array<uint32_t, 2>> device_count;                           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DeviceCount
        _m01 uint32_t                                        rebalance_phase;                        //{ +0x0004    +0x0004    +0x0008    +0x0004    } | .RebalancePhase
        _m02 reason_t                                        reason;                                 //{ +0x0008    +0x0008    +0x000c    +0x0008    } | .Reason
        _m03 sdk::array<enum pnp::rebalance_failure_t, 2>    failure;                                //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Failure
        _m04 subtree_root_t                                  subtree_root;                           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .SubtreeRoot
        _m05 sdk::variant<uint8_t, sdk::array<uint8_t, 2>>   subtree_includes_root;                  //{ +0x0020    +0x0020    +0x0028    +0x0020    } | .SubtreeIncludesRoot
        _m06 struct nt::device_node_t*                       trigger_root;                           //{ +0x0028    +0x0028    +0x0030    +0x0028    } | .TriggerRoot
        _m07 sdk::variant<uint64_t, sdk::array<uint64_t, 2>> begin_time;                             //{ +0x0038    +0x0038    +0x0040    +0x0038    } | .BeginTime
        _m08 sdk::array<struct nt::device_node_t*, 2>        veto_node;                              //{ +0x0040    +0x0040    +0x0050    +0x0040    } | .VetoNode
        _m09 veto_query_rebalance_reason_t                   veto_query_rebalance_reason;            //{ +0x0050    +0x0050    +0x0060    +0x0050    } | .VetoQueryRebalanceReason
        _m10 struct pnp::resource_conflict_trace_context_t   conflict_context;                       //{ +0x0058    +0x0058    +0x0068    +0x0058    } | .ConflictContext
                                                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                                      
        //                                                                                         
        _m11 uint8_t                                         rebalance_due_to_dynamic_partitioning;  //{ +0x0030    +0x0030    +0x0030    } | .RebalanceDueToDynamicPartitioning
                                                                                                   
        // Windows 11                                                                              
        //                                                                                         
        _m12 union pnp::rebalance_flags_t                    flags;                                  //{ +0x0038    } | .Flags
                                                                                                   
        SDK_MAGIC_PROPERTIES( "_PNP_REBALANCE_TRACE_CONTEXT.$", 0x70, true, 0x7908d929504c5401 );                                      
        SDK_DYNAMIC_SIZE( rebalance_trace_context_t );                                             
    };                                                                                             
};
#include "magic/rebalance_trace_context_t.end.hpp"
