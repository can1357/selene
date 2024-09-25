#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/token_user_claims_t.start.hpp"
namespace win
{
    // [struct _TOKEN_USER_CLAIMS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct token_user_claims_t 
    {                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                     
        _m00 void* user_claims;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .UserClaims
                               
        SDK_NONVOL_PROPERTIES( "_TOKEN_USER_CLAIMS.$", 0x8, true, 0x5235fef831044da7 );            
        SDK_FIXED_SIZE( token_user_claims_t, 0x8 );            
    };                         
};
#include "magic/token_user_claims_t.end.hpp"
SDK_VERIFY( struct win::token_user_claims_t, 0x8 );
