#pragma once
#include <sdkgen/support_library.hpp>
#include "displayconfig_target_mode_t.hpp"
#include "displayconfig_device_info_header_t.hpp"

#include "magic/displayconfig_target_preferred_mode_t.start.hpp"
namespace win
{
    // [struct DISPLAYCONFIG_TARGET_PREFERRED_MODE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct displayconfig_target_preferred_mode_t                        
    {                                                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                                              
        _m00 struct win::displayconfig_device_info_header_t header;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .header
        _m01 uint32_t                                       width;        //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .width
        _m02 uint32_t                                       height;       //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .height
        _m03 struct win::displayconfig_target_mode_t        target_mode;  //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .targetMode
                                                                        
        SDK_NONVOL_PROPERTIES( "DISPLAYCONFIG_TARGET_PREFERRED_MODE.$", 0x50, true, 0xa8973f64764353db );            
        SDK_FIXED_SIZE( displayconfig_target_preferred_mode_t, 0x50 );            
    };                                                                  
};
#include "magic/displayconfig_target_preferred_mode_t.end.hpp"
SDK_VERIFY( struct win::displayconfig_target_preferred_mode_t, 0x50 );
