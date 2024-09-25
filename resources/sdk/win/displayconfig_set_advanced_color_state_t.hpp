#pragma once
#include <sdkgen/support_library.hpp>
#include "displayconfig_device_info_header_t.hpp"

#include "magic/displayconfig_set_advanced_color_state_t.start.hpp"
namespace win
{
    // [struct _DISPLAYCONFIG_SET_ADVANCED_COLOR_STATE]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct displayconfig_set_advanced_color_state_t                               
    {                                                                             
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                                        
        _m00 struct win::displayconfig_device_info_header_t header;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .header
        _m01 uint1_t                                        enable_advanced_color;  //{ +0x0014@0  +0x0014@0  +0x0014@0  +0x0014@0  } | .enableAdvancedColor
        _m02 uint32_t                                       value;                  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .value
                                                                                  
        SDK_NONVOL_PROPERTIES( "_DISPLAYCONFIG_SET_ADVANCED_COLOR_STATE.$", 0x18, true, 0x4ef898bb0670bdfb );                      
        SDK_FIXED_SIZE( displayconfig_set_advanced_color_state_t, 0x18 );                      
    };                                                                            
};
#include "magic/displayconfig_set_advanced_color_state_t.end.hpp"
SDK_VERIFY( struct win::displayconfig_set_advanced_color_state_t, 0x18 );
