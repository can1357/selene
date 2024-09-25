#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/luid_t.hpp"
#include "displayconfig_source_mode_t.hpp"
#include "displayconfig_target_mode_t.hpp"
#include "displayconfig_mode_info_type_t.hpp"
#include "displayconfig_desktop_image_info_t.hpp"

#include "magic/displayconfig_mode_info_t.start.hpp"
namespace win
{
    // [struct DISPLAYCONFIG_MODE_INFO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct displayconfig_mode_info_t                                           
    {                                                                          
        enum class u0_info_type_t : int32_t                                    
        {                                                                      
            force_uint32 =  -0x1,                                                // WDK 10
            source =        0x1,                                                 // WDK 10
            target =        0x2,                                                 // WDK 10
            desktop_image = 0x3,                                                 // WDK 10
        };                                                                     
                                                                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                                     
        _m00 int32_t                                        info_type;           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .infoType
        _m01 uint32_t                                       id;                  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .id
        _m02 struct nt::luid_t                              adapter_id;          //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .adapterId
        _m03 struct win::displayconfig_target_mode_t        target_mode;         //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .targetMode
        _m04 struct win::displayconfig_source_mode_t        source_mode;         //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .sourceMode
        _m05 struct win::displayconfig_desktop_image_info_t desktop_image_info;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .desktopImageInfo
                                                                               
        SDK_NONVOL_PROPERTIES( "DISPLAYCONFIG_MODE_INFO.$", 0x40, true, 0x375ee4b31722386 );                   
        SDK_FIXED_SIZE( displayconfig_mode_info_t, 0x40 );                     
    };                                                                         
};
#include "magic/displayconfig_mode_info_t.end.hpp"
SDK_VERIFY( struct win::displayconfig_mode_info_t, 0x40 );
