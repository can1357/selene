#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum CorDeclSecurity]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class cor_decl_security_t : int32_t
    {                                       
        action_nil =          0x0,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        request =             0x1,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        demand =              0x2,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        assert =              0x3,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        deny =                0x4,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        permit_only =         0x5,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        linktime_check =      0x6,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        inheritance_check =   0x7,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        request_minimum =     0x8,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        request_optional =    0x9,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        request_refuse =      0xa,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        prejit_grant =        0xb,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        prejit_denied =       0xc,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        non_cas_demand =      0xd,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        non_cas_link_demand = 0xe,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        maximum_value =       0xf,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        non_cas_inheritance = 0xf,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        action_mask =         0x1f,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                      
};
