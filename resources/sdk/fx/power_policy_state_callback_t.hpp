#pragma once
#include <sdkgen/support_library.hpp>
#include "power_policy_state_callback_info_t.hpp"

#include "magic/power_policy_state_callback_t.start.hpp"
namespace fx
{
    // [struct FxPowerPolicyStateCallback]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct power_policy_state_callback_t
    {                                   
        using m_methods_t = sdk::array<struct fx::power_policy_state_callback_info_t, 153>;          
                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                          
        _m00 m_methods_t  m_methods;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_Methods
                                        
        SDK_MAGIC_PROPERTIES( "FxPowerPolicyStateCallback.$", 0xc00, true, 0xd6cfa9170d9a680b );          
        SDK_DYNAMIC_SIZE( power_policy_state_callback_t );          
    };                                  
};
#include "magic/power_policy_state_callback_t.end.hpp"
