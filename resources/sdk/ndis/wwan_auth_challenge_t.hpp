#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "../wwan/auth_challenge_t.hpp"

#include "magic/wwan_auth_challenge_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_WWAN_AUTH_CHALLENGE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wwan_auth_challenge_t                          
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                
        _m00 struct ndis::object_header_t  header;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 struct wwan::auth_challenge_t auth_challenge;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .AuthChallenge
                                                          
        SDK_MAGIC_PROPERTIES( "_NDIS_WWAN_AUTH_CHALLENGE.$", 0x12c, true, 0x198c5f6538b515b );               
        SDK_FIXED_SIZE( wwan_auth_challenge_t, 0x12c );               
    };                                                    
};
#include "magic/wwan_auth_challenge_t.end.hpp"
SDK_VERIFY( struct ndis::wwan_auth_challenge_t, 0x12c );
