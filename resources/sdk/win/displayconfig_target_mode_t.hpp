#pragma once
#include <sdkgen/support_library.hpp>
#include "displayconfig_video_signal_info_t.hpp"

#include "magic/displayconfig_target_mode_t.start.hpp"
namespace win
{
    // [struct DISPLAYCONFIG_TARGET_MODE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct displayconfig_target_mode_t                                              
    {                                                                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                                          
        _m00 struct win::displayconfig_video_signal_info_t target_video_signal_info;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .targetVideoSignalInfo
                                                                                    
        SDK_NONVOL_PROPERTIES( "DISPLAYCONFIG_TARGET_MODE.$", 0x30, true, 0x95b2301f81ae9bda );                         
        SDK_FIXED_SIZE( displayconfig_target_mode_t, 0x30 );                         
    };                                                                              
};
#include "magic/displayconfig_target_mode_t.end.hpp"
SDK_VERIFY( struct win::displayconfig_target_mode_t, 0x30 );
