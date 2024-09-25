#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/learning_mode_data_t.start.hpp"
namespace nt
{
    // [struct _LEARNING_MODE_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    //
    struct learning_mode_data_t               
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                        
        //                                    
        _m00 uint32_t settings;                 //{ +0x0000    +0x0000    +0x0000    } | .Settings
        _m01 uint8_t  enabled;                  //{ +0x0004    +0x0004    +0x0004    } | .Enabled
        _m02 uint8_t  permissive_mode_enabled;  //{ +0x0005    +0x0005    +0x0005    } | .PermissiveModeEnabled
                                              
        SDK_MAGIC_PROPERTIES( "_LEARNING_MODE_DATA.$", 0x8, true, 0x1b717af902af399e );                        
        SDK_FIXED_SIZE( learning_mode_data_t, 0x8 );                        
    };                                        
};
#include "magic/learning_mode_data_t.end.hpp"
SDK_VERIFY( struct nt::learning_mode_data_t, 0x8 );
