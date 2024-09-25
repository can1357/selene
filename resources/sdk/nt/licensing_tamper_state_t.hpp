#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _LICENSING_TAMPER_STATE]
    //  WDK 10
    //
    enum class licensing_tamper_state_t : int32_t
    {                                            
        none =                  0x0,               // WDK 10
        trusted_store =         0x1,               // WDK 10
        service_stopped =       0x2,               // WDK 10
        module_authentication = 0x3,               // WDK 10
        cache_data =            0x4,               // WDK 10
        other =                 0x5,               // WDK 10
    };                                           
};
