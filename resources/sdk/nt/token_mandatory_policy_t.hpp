#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/token_mandatory_policy_t.start.hpp"
namespace nt
{
    // [struct _TOKEN_MANDATORY_POLICY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct token_mandatory_policy_t
    {                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                   
        _m00 uint32_t policy;        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Policy
                                   
        SDK_NONVOL_PROPERTIES( "_TOKEN_MANDATORY_POLICY.$", 0x4, true, 0xeab631bbd5bbb838 );       
        SDK_FIXED_SIZE( token_mandatory_policy_t, 0x4 );       
    };                             
};
#include "magic/token_mandatory_policy_t.end.hpp"
SDK_VERIFY( struct nt::token_mandatory_policy_t, 0x4 );
