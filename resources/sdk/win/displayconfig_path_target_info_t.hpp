#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/luid_t.hpp"
#include "displayconfig_scaling_t.hpp"
#include "displayconfig_rational_t.hpp"
#include "displayconfig_rotation_t.hpp"
#include "../nt/displayconfig_scanline_ordering_t.hpp"
#include "displayconfig_video_output_technology_t.hpp"

#include "magic/displayconfig_path_target_info_t.start.hpp"
namespace win
{
    // [struct DISPLAYCONFIG_PATH_TARGET_INFO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct displayconfig_path_target_info_t                               
    {                                                                     
        enum class u0_output_technology_t : int32_t                       
        {                                                                 
            internal =             -0x80000000,                             // WDK 10
            force_uint32 =         -0x1,                                    // WDK 10
            other =                -0x1,                                    // WDK 10
            hd15 =                 0x0,                                     // WDK 10
            svideo =               0x1,                                     // WDK 10
            composite_video =      0x2,                                     // WDK 10
            component_video =      0x3,                                     // WDK 10
            dvi =                  0x4,                                     // WDK 10
            hdmi =                 0x5,                                     // WDK 10
            lvds =                 0x6,                                     // WDK 10
            d_jpn =                0x8,                                     // WDK 10
            sdi =                  0x9,                                     // WDK 10
            displayport_external = 0xa,                                     // WDK 10
            displayport_embedded = 0xb,                                     // WDK 10
            udi_external =         0xc,                                     // WDK 10
            udi_embedded =         0xd,                                     // WDK 10
            sdtvdongle =           0xe,                                     // WDK 10
            miracast =             0xf,                                     // WDK 10
            indirect_wired =       0x10,                                    // WDK 10
            indirect_virtual =     0x11,                                    // WDK 10
        };                                                                
                                                                          
        enum class u1_rotation_t : int32_t                                
        {                                                                 
            force_uint32 = -0x1,                                            // WDK 10
            identity =     0x1,                                             // WDK 10
            rotate90 =     0x2,                                             // WDK 10
            rotate180 =    0x3,                                             // WDK 10
            rotate270 =    0x4,                                             // WDK 10
        };                                                                
                                                                          
        enum class u2_scaling_t : int32_t                                 
        {                                                                 
            force_uint32 =           -0x1,                                  // WDK 10
            identity =               0x1,                                   // WDK 10
            centered =               0x2,                                   // WDK 10
            stretched =              0x3,                                   // WDK 10
            aspectratiocenteredmax = 0x4,                                   // WDK 10
            custom =                 0x5,                                   // WDK 10
            preferred =              0x80,                                  // WDK 10
        };                                                                
                                                                          
        enum class u3_scan_line_ordering_t : int32_t                      
        {                                                                 
            force_uint32 =               -0x1,                              // WDK 10
            unspecified =                0x0,                               // WDK 10
            progressive =                0x1,                               // WDK 10
            interlaced =                 0x2,                               // WDK 10
            interlaced_upperfieldfirst = 0x2,                               // WDK 10
            interlaced_lowerfieldfirst = 0x3,                               // WDK 10
        };                                                                
                                                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                                
        _m00 struct nt::luid_t                      adapter_id;             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .adapterId
        _m01 uint32_t                               id;                     //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .id
        _m02 uint32_t                               mode_info_idx;          //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .modeInfoIdx
        _m03 uint16_t                               desktop_mode_info_idx;  //{ +0x000c@0  +0x000c@0  +0x000c@0  +0x000c@0  +0x000c@0  } | .desktopModeInfoIdx
        _m04 uint16_t                               target_mode_info_idx;   //{ +0x000c@16 +0x000c@16 +0x000c@16 +0x000c@16 +0x000c@16 } | .targetModeInfoIdx
        _m05 int32_t                                output_technology;      //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .outputTechnology
        _m06 int32_t                                rotation;               //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .rotation
        _m07 int32_t                                scaling;                //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .scaling
        _m08 struct win::displayconfig_rational_t   refresh_rate;           //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .refreshRate
        _m09 int32_t                                scan_line_ordering;     //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .scanLineOrdering
        _m10 int32_t                                target_available;       //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .targetAvailable
        _m11 uint32_t                               status_flags;           //{ +0x002c    +0x002c    +0x002c    +0x002c    +0x002c    } | .statusFlags
                                                                          
        SDK_NONVOL_PROPERTIES( "DISPLAYCONFIG_PATH_TARGET_INFO.$", 0x30, true, 0x78a9816b26b425da );                      
        SDK_FIXED_SIZE( displayconfig_path_target_info_t, 0x30 );                      
    };                                                                    
};
#include "magic/displayconfig_path_target_info_t.end.hpp"
SDK_VERIFY( struct win::displayconfig_path_target_info_t, 0x30 );
