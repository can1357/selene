#pragma once
#include <sdkgen/support_library.hpp>

namespace pnp
{
    // [enum _PNP_QUERY_RELATION]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class query_relation_t : int32_t      
    {                                          
        pnp_query_eject_relations =     0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pnp_query_removal_relations =   0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pnp_query_power_relations =     0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pnp_query_bus_relations =       0x3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pnp_query_transport_relations = 0x4,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_pnp_query_relations =       0x5,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};
