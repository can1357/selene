#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/volume_control_t.start.hpp"
namespace nt
{
    // [struct _VOLUME_CONTROL]
    // => WDK 10 (NV)
    //
    struct volume_control_t                     
    {                                           
        // WDK 10                               
        //                                      
        _m00 sdk::array<uint8_t, 4> port_volume;  //{ +0x0000    } | .PortVolume
                                                
        SDK_NONVOL_PROPERTIES( "_VOLUME_CONTROL.$", 0x0, false, 0x2c74fa4f9dad8a1a );            
        SDK_FIXED_SIZE( volume_control_t, 0x4 );            
    };                                          
};
#include "magic/volume_control_t.end.hpp"
SDK_VERIFY( struct nt::volume_control_t, 0x4 );
