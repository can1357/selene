#pragma once
#include <sdkgen/support_library.hpp>
#include "power_state_callback_info_t.hpp"

#include "magic/power_state_callback_t.start.hpp"
namespace fx
{
    // [struct FxPowerStateCallback]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct power_state_callback_t   
    {                               
        using m_methods_t = sdk::array<struct fx::power_state_callback_info_t, 99>;          
                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                          
        _m00 m_methods_t  m_methods;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_Methods
                                    
        SDK_MAGIC_PROPERTIES( "FxPowerStateCallback.$", 0x690, true, 0x76c2f87c97b33efa );          
        SDK_DYNAMIC_SIZE( power_state_callback_t );          
    };                              
};
#include "magic/power_state_callback_t.end.hpp"
