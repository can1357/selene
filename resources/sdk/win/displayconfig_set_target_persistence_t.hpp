#pragma once
#include <sdkgen/support_library.hpp>
#include "displayconfig_device_info_header_t.hpp"

#include "magic/displayconfig_set_target_persistence_t.start.hpp"
namespace win
{
    // [struct DISPLAYCONFIG_SET_TARGET_PERSISTENCE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct displayconfig_set_target_persistence_t                               
    {                                                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                                      
        _m00 struct win::displayconfig_device_info_header_t header;               //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .header
        _m01 uint1_t                                        boot_persistence_on;  //{ +0x0014@0  +0x0014@0  +0x0014@0  +0x0014@0  +0x0014@0  } | .bootPersistenceOn
        _m02 uint32_t                                       value;                //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .value
                                                                                
        SDK_NONVOL_PROPERTIES( "DISPLAYCONFIG_SET_TARGET_PERSISTENCE.$", 0x18, true, 0x33731e6903251d5f );                    
        SDK_FIXED_SIZE( displayconfig_set_target_persistence_t, 0x18 );                    
    };                                                                          
};
#include "magic/displayconfig_set_target_persistence_t.end.hpp"
SDK_VERIFY( struct win::displayconfig_set_target_persistence_t, 0x18 );
