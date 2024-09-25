#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum NDIS_MINIPORT_POLICY_OWNER]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class miniport_policy_owner_t : int32_t
    {                                           
        not_owned =                 0x0,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        owned_by_power_management = 0x1,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        owned_by_bind_engine =      0x2,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                          
};
