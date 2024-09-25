#pragma once
#include <sdkgen/support_library.hpp>

namespace rpc
{
    // [enum RpcProxyPerfCounters]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class proxy_perf_counters_t : int32_t
    {                                         
        current_unique_user =          0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        back_end_connection_attempts = 0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        back_end_connection_failed =   0x3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        requests_per_second =          0x4,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        incoming_connections =         0x5,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        incoming_bandwidth =           0x6,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        outgoing_bandwidth =           0x7,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        attempted_lbs_decisions =      0x8,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        failed_lbs_decisions =         0x9,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        attempted_lbs_messages =       0xa,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        failed_lbs_messages =          0xb,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        last_counter =                 0xc,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                        
};
