#pragma once
#include <sdkgen/support_library.hpp>
#include "displayconfig_device_info_header_t.hpp"

#include "magic/displayconfig_source_device_name_t.start.hpp"
namespace win
{
    // [struct DISPLAYCONFIG_SOURCE_DEVICE_NAME]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct displayconfig_source_device_name_t                                    
    {                                                                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                                       
        _m00 struct win::displayconfig_device_info_header_t header;                //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .header
        _m01 sdk::array<wchar_t, 32>                        view_gdi_device_name;  //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .viewGdiDeviceName
                                                                                 
        SDK_NONVOL_PROPERTIES( "DISPLAYCONFIG_SOURCE_DEVICE_NAME.$", 0x54, true, 0x4c892cdb6e18c30a );                     
        SDK_FIXED_SIZE( displayconfig_source_device_name_t, 0x54 );                     
    };                                                                           
};
#include "magic/displayconfig_source_device_name_t.end.hpp"
SDK_VERIFY( struct win::displayconfig_source_device_name_t, 0x54 );
