#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/temperature_t.start.hpp"
namespace nt
{
    // [struct _TEMPERATURE]
    // => WDK 10 (NV)
    //
    struct temperature_t         
    {                            
        // WDK 10                
        //                       
        _m00 uint8_t temperature;  //{ +0x0001    } | .Temperature
                                 
        SDK_NONVOL_PROPERTIES( "_TEMPERATURE.$", 0x0, false, 0x95f508058bc02af6 );            
        SDK_FIXED_SIZE( temperature_t, 0x2 );            
    };                           
};
#include "magic/temperature_t.end.hpp"
SDK_VERIFY( struct nt::temperature_t, 0x2 );
