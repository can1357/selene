#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/processor_speed_info_t.start.hpp"
namespace hal
{
    // [struct _HAL_PROCESSOR_SPEED_INFO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct processor_speed_info_t     
    {                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint32_t processor_speed;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ProcessorSpeed
                                      
        SDK_NONVOL_PROPERTIES( "_HAL_PROCESSOR_SPEED_INFO.$", 0x4, true, 0x7a2965c467adc730 );                
        SDK_FIXED_SIZE( processor_speed_info_t, 0x4 );                
    };                                
};
#include "magic/processor_speed_info_t.end.hpp"
SDK_VERIFY( struct hal::processor_speed_info_t, 0x4 );
