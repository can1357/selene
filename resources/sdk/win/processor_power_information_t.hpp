#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/processor_power_information_t.start.hpp"
namespace win
{
    // [struct _PROCESSOR_POWER_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct processor_power_information_t 
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 uint32_t number;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Number
        _m01 uint32_t max_mhz;             //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .MaxMhz
        _m02 uint32_t current_mhz;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CurrentMhz
        _m03 uint32_t mhz_limit;           //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .MhzLimit
        _m04 uint32_t max_idle_state;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .MaxIdleState
        _m05 uint32_t current_idle_state;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .CurrentIdleState
                                         
        SDK_MAGIC_PROPERTIES( "_PROCESSOR_POWER_INFORMATION.$", 0x18, true, 0xfcc816a4aec9897e );                   
        SDK_FIXED_SIZE( processor_power_information_t, 0x18 );                   
    };                                   
};
#include "magic/processor_power_information_t.end.hpp"
SDK_VERIFY( struct win::processor_power_information_t, 0x18 );
