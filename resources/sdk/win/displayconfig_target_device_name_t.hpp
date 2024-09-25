#pragma once
#include <sdkgen/support_library.hpp>
#include "displayconfig_device_info_header_t.hpp"
#include "displayconfig_video_output_technology_t.hpp"
#include "displayconfig_target_device_name_flags_t.hpp"

#include "magic/displayconfig_target_device_name_t.start.hpp"
namespace win
{
    // [struct DISPLAYCONFIG_TARGET_DEVICE_NAME]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct displayconfig_target_device_name_t                                            
    {                                                                                    
        enum class u0_output_technology_t : int32_t                                      
        {                                                                                
            internal =             -0x80000000,                                            // WDK 10
            force_uint32 =         -0x1,                                                   // WDK 10
            other =                -0x1,                                                   // WDK 10
            hd15 =                 0x0,                                                    // WDK 10
            svideo =               0x1,                                                    // WDK 10
            composite_video =      0x2,                                                    // WDK 10
            component_video =      0x3,                                                    // WDK 10
            dvi =                  0x4,                                                    // WDK 10
            hdmi =                 0x5,                                                    // WDK 10
            lvds =                 0x6,                                                    // WDK 10
            d_jpn =                0x8,                                                    // WDK 10
            sdi =                  0x9,                                                    // WDK 10
            displayport_external = 0xa,                                                    // WDK 10
            displayport_embedded = 0xb,                                                    // WDK 10
            udi_external =         0xc,                                                    // WDK 10
            udi_embedded =         0xd,                                                    // WDK 10
            sdtvdongle =           0xe,                                                    // WDK 10
            miracast =             0xf,                                                    // WDK 10
            indirect_wired =       0x10,                                                   // WDK 10
            indirect_virtual =     0x11,                                                   // WDK 10
        };                                                                               
                                                                                         
        using displayconfig_target_device_name_flags_t = struct win::displayconfig_target_device_name_flags_t;                             
                                                                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                               
        _m00 struct win::displayconfig_device_info_header_t header;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .header
        _m01 displayconfig_target_device_name_flags_t       flags;                         //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .flags
        _m02 int32_t                                        output_technology;             //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .outputTechnology
        _m03 uint16_t                                       edid_manufacture_id;           //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .edidManufactureId
        _m04 uint16_t                                       edid_product_code_id;          //{ +0x001e    +0x001e    +0x001e    +0x001e    +0x001e    } | .edidProductCodeId
        _m05 uint32_t                                       connector_instance;            //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .connectorInstance
        _m06 sdk::array<wchar_t, 64>                        monitor_friendly_device_name;  //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .monitorFriendlyDeviceName
        _m07 sdk::array<wchar_t, 128>                       monitor_device_path;           //{ +0x00a4    +0x00a4    +0x00a4    +0x00a4    +0x00a4    } | .monitorDevicePath
                                                                                         
        SDK_NONVOL_PROPERTIES( "DISPLAYCONFIG_TARGET_DEVICE_NAME.$", 0x1a4, true, 0x68e4ddff9dbb6739 );                             
        SDK_FIXED_SIZE( displayconfig_target_device_name_t, 0x1a4 );                             
    };                                                                                   
};
#include "magic/displayconfig_target_device_name_t.end.hpp"
SDK_VERIFY( struct win::displayconfig_target_device_name_t, 0x1a4 );
