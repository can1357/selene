#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/power_p_state_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_POWER_P_STATE]
    // => WDK 10 (NV)
    //
    struct power_p_state_t                
    {                                     
        // WDK 10                         
        //                                
        _m00 uint32_t operating_frequency;  //{ +0x0000    } | .OperatingFrequency
                                          
        SDK_NONVOL_PROPERTIES( "_DXGK_POWER_P_STATE.$", 0x0, false, 0xea214920f0ce630c );                    
        SDK_FIXED_SIZE( power_p_state_t, 0x4 );                    
    };                                    
};
#include "magic/power_p_state_t.end.hpp"
SDK_VERIFY( struct dxgk::power_p_state_t, 0x4 );
