#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/token_audit_policy_t.start.hpp"
namespace nt
{
    // [struct _TOKEN_AUDIT_POLICY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct token_audit_policy_t                      
    {                                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                           
        _m00 sdk::array<uint8_t, 30> per_user_policy;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .PerUserPolicy
                                                     
        SDK_NONVOL_PROPERTIES( "_TOKEN_AUDIT_POLICY.$", 0x1e, true, 0xd973c79c4503d0d6 );                
        SDK_FIXED_SIZE( token_audit_policy_t, 0x1e );                
    };                                               
};
#include "magic/token_audit_policy_t.end.hpp"
SDK_VERIFY( struct nt::token_audit_policy_t, 0x1e );
