#pragma once
#include <sdkgen/support_library.hpp>
#include "auth_method_t.hpp"
#include "auth_aka_challenge_t.hpp"
#include "auth_sim_challenge_t.hpp"
#include "auth_akap_challenge_t.hpp"

#include "magic/auth_challenge_t.start.hpp"
namespace wwan
{
    // [struct _WWAN_AUTH_CHALLENGE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct auth_challenge_t                                 
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                                  
        _m00 enum wwan::auth_method_t           auth_method;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AuthMethod
        _m01 struct wwan::auth_sim_challenge_t  auth_sim;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .AuthSim
        _m02 struct wwan::auth_aka_challenge_t  auth_aka;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .AuthAka
        _m03 struct wwan::auth_akap_challenge_t auth_akap;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .AuthAkap
                                                            
        SDK_MAGIC_PROPERTIES( "_WWAN_AUTH_CHALLENGE.$", 0x128, true, 0xd44b185426765823 );            
        SDK_FIXED_SIZE( auth_challenge_t, 0x128 );            
    };                                                      
};
#include "magic/auth_challenge_t.end.hpp"
SDK_VERIFY( struct wwan::auth_challenge_t, 0x128 );
