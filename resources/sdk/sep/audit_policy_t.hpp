#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/token_audit_policy_t.hpp"

#include "magic/audit_policy_t.start.hpp"
namespace sep
{
    // [struct _SEP_AUDIT_POLICY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct audit_policy_t                                      
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                     
        _m00 struct nt::token_audit_policy_t adt_token_policy;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AdtTokenPolicy
        _m01 uint8_t                         policy_set_status;  //{ +0x001e    +0x001e    +0x001e    +0x001e    } | .PolicySetStatus
                                                               
        SDK_MAGIC_PROPERTIES( "_SEP_AUDIT_POLICY.$", 0x1f, true, 0xceee04a30020f51d );                  
        SDK_FIXED_SIZE( audit_policy_t, 0x1f );                  
    };                                                         
};
#include "magic/audit_policy_t.end.hpp"
SDK_VERIFY( struct sep::audit_policy_t, 0x1f );
