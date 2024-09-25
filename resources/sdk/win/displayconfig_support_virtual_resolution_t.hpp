#pragma once
#include <sdkgen/support_library.hpp>
#include "displayconfig_device_info_header_t.hpp"

#include "magic/displayconfig_support_virtual_resolution_t.start.hpp"
namespace win
{
    // [struct DISPLAYCONFIG_SUPPORT_VIRTUAL_RESOLUTION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct displayconfig_support_virtual_resolution_t                                          
    {                                                                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
        //                                                                                     
        _m00 struct win::displayconfig_device_info_header_t header;                              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .header
        _m01 uint1_t                                        disable_monitor_virtual_resolution;  //{ +0x0014@0  +0x0014@0  +0x0014@0  +0x0014@0  +0x0014@0  } | .disableMonitorVirtualResolution
        _m02 uint32_t                                       value;                               //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .value
                                                                                               
        SDK_NONVOL_PROPERTIES( "DISPLAYCONFIG_SUPPORT_VIRTUAL_RESOLUTION.$", 0x18, true, 0xf6123f0255719084 );                                   
        SDK_FIXED_SIZE( displayconfig_support_virtual_resolution_t, 0x18 );                                   
    };                                                                                         
};
#include "magic/displayconfig_support_virtual_resolution_t.end.hpp"
SDK_VERIFY( struct win::displayconfig_support_virtual_resolution_t, 0x18 );
