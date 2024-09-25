#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/auth_aka_challenge_t.start.hpp"
namespace wwan
{
    // [struct _WWAN_AUTH_AKA_CHALLENGE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct auth_aka_challenge_t           
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                                
        _m00 sdk::array<uint8_t, 16> rand;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Rand
        _m01 sdk::array<uint8_t, 16> autn;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Autn
                                          
        SDK_MAGIC_PROPERTIES( "_WWAN_AUTH_AKA_CHALLENGE.$", 0x20, true, 0x92c13a8831fdae18 );     
        SDK_FIXED_SIZE( auth_aka_challenge_t, 0x20 );     
    };                                    
};
#include "magic/auth_aka_challenge_t.end.hpp"
SDK_VERIFY( struct wwan::auth_aka_challenge_t, 0x20 );
