#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/auth_sim_challenge_t.start.hpp"
namespace wwan
{
    // [struct _WWAN_AUTH_SIM_CHALLENGE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct auth_sim_challenge_t            
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                                 
        _m00 sdk::array<uint8_t, 16> rand1;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Rand1
        _m01 sdk::array<uint8_t, 16> rand2;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Rand2
        _m02 sdk::array<uint8_t, 16> rand3;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Rand3
        _m03 uint32_t                n;      //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .n
                                           
        SDK_MAGIC_PROPERTIES( "_WWAN_AUTH_SIM_CHALLENGE.$", 0x34, true, 0xfaae08eeaf8a59c6 );      
        SDK_FIXED_SIZE( auth_sim_challenge_t, 0x34 );      
    };                                     
};
#include "magic/auth_sim_challenge_t.end.hpp"
SDK_VERIFY( struct wwan::auth_sim_challenge_t, 0x34 );
