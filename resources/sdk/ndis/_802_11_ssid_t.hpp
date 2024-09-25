#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/_802_11_ssid_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_802_11_SSID]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct _802_11_ssid_t                        
    {                                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                       
        _m00 uint32_t                ssid_length;  //{ +0x0000    +0x0000    +0x0000    } | .SsidLength
        _m01 sdk::array<uint8_t, 32> ssid;         //{ +0x0004    +0x0004    +0x0004    } | .Ssid
                                                 
        SDK_MAGIC_PROPERTIES( "_NDIS_802_11_SSID.$", 0x24, true, 0xe2fbece15bc90ec1 );            
        SDK_FIXED_SIZE( _802_11_ssid_t, 0x24 );            
    };                                           
};
#include "magic/_802_11_ssid_t.end.hpp"
SDK_VERIFY( struct ndis::_802_11_ssid_t, 0x24 );
