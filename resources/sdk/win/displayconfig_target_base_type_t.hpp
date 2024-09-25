#pragma once
#include <sdkgen/support_library.hpp>
#include "displayconfig_device_info_header_t.hpp"
#include "displayconfig_video_output_technology_t.hpp"

#include "magic/displayconfig_target_base_type_t.start.hpp"
namespace win
{
    // [struct DISPLAYCONFIG_TARGET_BASE_TYPE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct displayconfig_target_base_type_t                                        
    {                                                                              
        enum class u0_base_output_technology_t : int32_t                           
        {                                                                          
            internal =             -0x80000000,                                      // WDK 10
            force_uint32 =         -0x1,                                             // WDK 10
            other =                -0x1,                                             // WDK 10
            hd15 =                 0x0,                                              // WDK 10
            svideo =               0x1,                                              // WDK 10
            composite_video =      0x2,                                              // WDK 10
            component_video =      0x3,                                              // WDK 10
            dvi =                  0x4,                                              // WDK 10
            hdmi =                 0x5,                                              // WDK 10
            lvds =                 0x6,                                              // WDK 10
            d_jpn =                0x8,                                              // WDK 10
            sdi =                  0x9,                                              // WDK 10
            displayport_external = 0xa,                                              // WDK 10
            displayport_embedded = 0xb,                                              // WDK 10
            udi_external =         0xc,                                              // WDK 10
            udi_embedded =         0xd,                                              // WDK 10
            sdtvdongle =           0xe,                                              // WDK 10
            miracast =             0xf,                                              // WDK 10
            indirect_wired =       0x10,                                             // WDK 10
            indirect_virtual =     0x11,                                             // WDK 10
        };                                                                         
                                                                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                                         
        _m00 struct win::displayconfig_device_info_header_t header;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .header
        _m01 int32_t                                        base_output_technology;  //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .baseOutputTechnology
                                                                                   
        SDK_NONVOL_PROPERTIES( "DISPLAYCONFIG_TARGET_BASE_TYPE.$", 0x18, true, 0x27530092fc339dce );                       
        SDK_FIXED_SIZE( displayconfig_target_base_type_t, 0x18 );                       
    };                                                                             
};
#include "magic/displayconfig_target_base_type_t.end.hpp"
SDK_VERIFY( struct win::displayconfig_target_base_type_t, 0x18 );
