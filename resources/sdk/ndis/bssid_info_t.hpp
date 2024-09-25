#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/bssid_info_t.start.hpp"
namespace ndis
{
    // [struct _BSSID_INFO]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct bssid_info_t                    
    {                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                                 
        _m00 sdk::array<uint8_t, 6>  bssid;  //{ +0x0000    +0x0000    +0x0000    } | .BSSID
        _m01 sdk::array<uint8_t, 16> pmkid;  //{ +0x0006    +0x0006    +0x0006    } | .PMKID
                                           
        SDK_MAGIC_PROPERTIES( "_BSSID_INFO.$", 0x16, true, 0xd8932ceb76ae9893 );      
        SDK_FIXED_SIZE( bssid_info_t, 0x16 );      
    };                                     
};
#include "magic/bssid_info_t.end.hpp"
SDK_VERIFY( struct ndis::bssid_info_t, 0x16 );
