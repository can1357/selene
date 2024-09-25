#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum INDICATE_OFFLOAD_EVENT]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class indicate_offload_event_t : int32_t
    {                                            
        neighbor_reachability_in_doubt = 0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        neighbor_reachability_query =    0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_offload_event =              0x3,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                           
};
