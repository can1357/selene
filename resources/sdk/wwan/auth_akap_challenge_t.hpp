#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/auth_akap_challenge_t.start.hpp"
namespace wwan
{
    // [struct _WWAN_AUTH_AKAP_CHALLENGE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct auth_akap_challenge_t                          
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                
        _m00 sdk::array<uint8_t, 16>  rand;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Rand
        _m01 sdk::array<uint8_t, 16>  autn;                 //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Autn
        _m02 sdk::array<uint8_t, 256> network_name;         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .NetworkName
        _m03 uint32_t                 network_name_length;  //{ +0x0120    +0x0120    +0x0120    +0x0120    } | .NetworkNameLength
                                                          
        SDK_MAGIC_PROPERTIES( "_WWAN_AUTH_AKAP_CHALLENGE.$", 0x124, true, 0x114eeead1666ac70 );                    
        SDK_FIXED_SIZE( auth_akap_challenge_t, 0x124 );                    
    };                                                    
};
#include "magic/auth_akap_challenge_t.end.hpp"
SDK_VERIFY( struct wwan::auth_akap_challenge_t, 0x124 );
