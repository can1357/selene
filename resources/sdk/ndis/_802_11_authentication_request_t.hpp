#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/_802_11_authentication_request_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_802_11_AUTHENTICATION_REQUEST]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct _802_11_authentication_request_t
    {                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                 
        _m00 uint32_t               length;  //{ +0x0000    +0x0000    +0x0000    } | .Length
        _m01 sdk::array<uint8_t, 6> bssid;   //{ +0x0004    +0x0004    +0x0004    } | .Bssid
        _m02 uint32_t               flags;   //{ +0x000c    +0x000c    +0x000c    } | .Flags
                                           
        SDK_MAGIC_PROPERTIES( "_NDIS_802_11_AUTHENTICATION_REQUEST.$", 0x10, true, 0x45a2e0cbf60b506a );       
        SDK_FIXED_SIZE( _802_11_authentication_request_t, 0x10 );       
    };                                     
};
#include "magic/_802_11_authentication_request_t.end.hpp"
SDK_VERIFY( struct ndis::_802_11_authentication_request_t, 0x10 );
