#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/_802_11_remove_key_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_802_11_REMOVE_KEY]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct _802_11_remove_key_t               
    {                                         
        // Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                    
        _m00 uint32_t               length;     //{ +0x0000    +0x0000    +0x0000    } | .Length
        _m01 uint32_t               key_index;  //{ +0x0004    +0x0004    +0x0004    } | .KeyIndex
        _m02 sdk::array<uint8_t, 6> bssid;      //{ +0x0008    +0x0008    +0x0008    } | .BSSID
                                              
        SDK_MAGIC_PROPERTIES( "_NDIS_802_11_REMOVE_KEY.$", 0x10, true, 0xcfef6aac69fbb817 );          
        SDK_FIXED_SIZE( _802_11_remove_key_t, 0x10 );          
    };                                        
};
#include "magic/_802_11_remove_key_t.end.hpp"
SDK_VERIFY( struct ndis::_802_11_remove_key_t, 0x10 );
