#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/displayconfig_target_device_name_flags_t.start.hpp"
namespace win
{
    // [struct DISPLAYCONFIG_TARGET_DEVICE_NAME_FLAGS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct displayconfig_target_device_name_flags_t
    {                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                    
        _m00 uint1_t  friendly_name_from_edid;       //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .friendlyNameFromEdid
        _m01 uint1_t  friendly_name_forced;          //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .friendlyNameForced
        _m02 uint1_t  edid_ids_valid;                //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .edidIdsValid
        _m03 uint32_t value;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .value
                                                   
        SDK_NONVOL_PROPERTIES( "DISPLAYCONFIG_TARGET_DEVICE_NAME_FLAGS.$", 0x4, true, 0xa843afac58492d68 );                        
        SDK_FIXED_SIZE( displayconfig_target_device_name_flags_t, 0x4 );                        
    };                                             
};
#include "magic/displayconfig_target_device_name_flags_t.end.hpp"
SDK_VERIFY( struct win::displayconfig_target_device_name_flags_t, 0x4 );
