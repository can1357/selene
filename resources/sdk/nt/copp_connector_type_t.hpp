#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _COPP_ConnectorType]
    //  WDK 10
    //
    enum class copp_connector_type_t : int32_t 
    {                                          
        internal =              -0x80000000,     // WDK 10
        unknown =               -0x1,            // WDK 10
        vga =                   0x0,             // WDK 10
        s_video =               0x1,             // WDK 10
        composite_video =       0x2,             // WDK 10
        component_video =       0x3,             // WDK 10
        dvi =                   0x4,             // WDK 10
        hdmi =                  0x5,             // WDK 10
        lvds =                  0x6,             // WDK 10
        tmds =                  0x7,             // WDK 10
        d_jpn =                 0x8,             // WDK 10
        sdi =                   0x9,             // WDK 10
        display_port_external = 0xa,             // WDK 10
        display_port_embedded = 0xb,             // WDK 10
        udi_external =          0xc,             // WDK 10
        udi_embedded =          0xd,             // WDK 10
        force_dword =           0x7fffffff,      // WDK 10
    };                                         
};
