#pragma once
#include <sdkgen/support_library.hpp>
#include "displayconfig_path_source_info_t.hpp"
#include "displayconfig_path_target_info_t.hpp"

#include "magic/displayconfig_path_info_t.start.hpp"
namespace win
{
    // [struct DISPLAYCONFIG_PATH_INFO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct displayconfig_path_info_t                                  
    {                                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                                            
        _m00 struct win::displayconfig_path_source_info_t source_info;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .sourceInfo
        _m01 struct win::displayconfig_path_target_info_t target_info;  //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .targetInfo
        _m02 uint32_t                                     flags;        //{ +0x0044    +0x0044    +0x0044    +0x0044    +0x0044    } | .flags
                                                                      
        SDK_NONVOL_PROPERTIES( "DISPLAYCONFIG_PATH_INFO.$", 0x48, true, 0xf8df44d65de6ff25 );            
        SDK_FIXED_SIZE( displayconfig_path_info_t, 0x48 );            
    };                                                                
};
#include "magic/displayconfig_path_info_t.end.hpp"
SDK_VERIFY( struct win::displayconfig_path_info_t, 0x48 );
