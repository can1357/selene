#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/brightness_level_t.start.hpp"
namespace nt
{
    // [struct _BRIGHTNESS_LEVEL]
    // => WDK 10 (NV)
    //
    struct brightness_level_t               
    {                                       
        // WDK 10                           
        //                                  
        _m00 uint8_t                  count;  //{ +0x0000    } | .Count
        _m01 sdk::array<uint8_t, 103> level;  //{ +0x0001    } | .Level
                                            
        SDK_NONVOL_PROPERTIES( "_BRIGHTNESS_LEVEL.$", 0x0, false, 0x9750c1ca2d6a4697 );      
        SDK_FIXED_SIZE( brightness_level_t, 0x68 );      
    };                                      
};
#include "magic/brightness_level_t.end.hpp"
SDK_VERIFY( struct nt::brightness_level_t, 0x68 );
