#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/solid_state_media_t.start.hpp"
namespace nt
{
    // [struct _SOLID_STATE_MEDIA]
    // => WDK 10 (NV)
    //
    struct solid_state_media_t       
    {                                
        // WDK 10                    
        //                           
        _m00 uint8_t percentage_used;  //{ +0x0003    } | .PercentageUsed
                                     
        SDK_NONVOL_PROPERTIES( "_SOLID_STATE_MEDIA.$", 0x0, false, 0xf76b31deb78ff057 );                
        SDK_FIXED_SIZE( solid_state_media_t, 0x4 );                
    };                               
};
#include "magic/solid_state_media_t.end.hpp"
SDK_VERIFY( struct nt::solid_state_media_t, 0x4 );
