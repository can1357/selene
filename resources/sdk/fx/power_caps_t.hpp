#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/power_caps_t.start.hpp"
namespace fx
{
    // [struct FxPowerCaps]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct power_caps_t           
    {                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint16_t caps;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Caps
        _m01 uint8_t  device_wake;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .DeviceWake
        _m02 uint8_t  system_wake;  //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .SystemWake
        _m03 uint32_t states;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .States
        _m04 uint32_t d1_latency;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .D1Latency
        _m05 uint32_t d2_latency;   //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .D2Latency
        _m06 uint32_t d3_latency;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .D3Latency
                                  
        SDK_MAGIC_PROPERTIES( "FxPowerCaps.$", 0x14, true, 0x63f9299d81748aaa );            
        SDK_FIXED_SIZE( power_caps_t, 0x14 );            
    };                            
};
#include "magic/power_caps_t.end.hpp"
SDK_VERIFY( struct fx::power_caps_t, 0x14 );
