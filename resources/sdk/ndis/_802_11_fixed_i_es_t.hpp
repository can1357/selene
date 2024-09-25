#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/_802_11_fixed_i_es_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_802_11_FIXED_IEs]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct _802_11_fixed_i_es_t                     
    {                                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                          
        _m00 sdk::array<uint8_t, 8> timestamp;        //{ +0x0000    +0x0000    +0x0000    } | .Timestamp
        _m01 uint16_t               beacon_interval;  //{ +0x0008    +0x0008    +0x0008    } | .BeaconInterval
        _m02 uint16_t               capabilities;     //{ +0x000a    +0x000a    +0x000a    } | .Capabilities
                                                    
        SDK_MAGIC_PROPERTIES( "_NDIS_802_11_FIXED_IEs.$", 0xc, true, 0x6783084f69214cfe );                
        SDK_FIXED_SIZE( _802_11_fixed_i_es_t, 0xc );                
    };                                              
};
#include "magic/_802_11_fixed_i_es_t.end.hpp"
SDK_VERIFY( struct ndis::_802_11_fixed_i_es_t, 0xc );
