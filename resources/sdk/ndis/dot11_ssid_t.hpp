#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dot11_ssid_t.start.hpp"
namespace ndis
{
    // [struct _DOT11_SSID]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dot11_ssid_t                            
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                         
        _m00 uint32_t                u_ssid_length;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .uSSIDLength
        _m01 sdk::array<uint8_t, 32> uc_ssid;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ucSSID
                                                   
        SDK_MAGIC_PROPERTIES( "_DOT11_SSID.$", 0x24, true, 0x9aaed4c96528546b );              
        SDK_FIXED_SIZE( dot11_ssid_t, 0x24 );              
    };                                             
};
#include "magic/dot11_ssid_t.end.hpp"
SDK_VERIFY( struct ndis::dot11_ssid_t, 0x24 );
