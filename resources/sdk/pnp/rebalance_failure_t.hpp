#pragma once
#include <sdkgen/support_library.hpp>

namespace pnp
{
    // [enum _PNP_REBALANCE_FAILURE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class rebalance_failure_t : int32_t
    {                                       
        none =                       0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disabled =                   0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_memory =                  0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        query_stop_unexpected_veto = 0x3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_requirements =            0x4,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_candidates =              0x5,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_configuration =           0x6,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                      
};
