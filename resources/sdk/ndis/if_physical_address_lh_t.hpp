#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/if_physical_address_lh_t.start.hpp"
namespace ndis
{
    // [struct _IF_PHYSICAL_ADDRESS_LH]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct if_physical_address_lh_t          
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                   
        _m00 uint16_t                length;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
        _m01 sdk::array<uint8_t, 32> address;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Address
                                             
        SDK_MAGIC_PROPERTIES( "_IF_PHYSICAL_ADDRESS_LH.$", 0x22, true, 0x411411f1d33d3b90 );        
        SDK_FIXED_SIZE( if_physical_address_lh_t, 0x22 );        
    };                                       
};
#include "magic/if_physical_address_lh_t.end.hpp"
SDK_VERIFY( struct ndis::if_physical_address_lh_t, 0x22 );
