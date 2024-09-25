#pragma once
#include <sdkgen/support_library.hpp>

namespace pnp
{
    // [enum _PNP_DEVNODE_QUERY_REBALANCE_VETO_REASON]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class devnode_query_rebalance_veto_reason_t : int32_t
    {                                                         
        query_rebalance_succeeded =           0x0,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        query_stop_failed =                   0x1,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        failed_get_new_resource_requirement = 0x2,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        in_unexpected_state =                 0x3,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        not_support_query_rebalance =         0x4,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                        
};
