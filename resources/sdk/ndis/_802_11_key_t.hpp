#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/_802_11_key_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_802_11_KEY]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct _802_11_key_t                         
    {                                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                       
        _m00 uint32_t               length;        //{ +0x0000    +0x0000    +0x0000    } | .Length
        _m01 uint32_t               key_index;     //{ +0x0004    +0x0004    +0x0004    } | .KeyIndex
        _m02 uint32_t               key_length;    //{ +0x0008    +0x0008    +0x0008    } | .KeyLength
        _m03 sdk::array<uint8_t, 6> bssid;         //{ +0x000c    +0x000c    +0x000c    } | .BSSID
        _m04 uint64_t               key_rsc;       //{ +0x0018    +0x0018    +0x0018    } | .KeyRSC
        _m05 sdk::array<uint8_t, 1> key_material;  //{ +0x0020    +0x0020    +0x0020    } | .KeyMaterial
                                                 
        SDK_MAGIC_PROPERTIES( "_NDIS_802_11_KEY.$", 0x28, true, 0xd34ed3e36e4fb931 );             
        SDK_FIXED_SIZE( _802_11_key_t, 0x28 );             
    };                                           
};
#include "magic/_802_11_key_t.end.hpp"
SDK_VERIFY( struct ndis::_802_11_key_t, 0x28 );
